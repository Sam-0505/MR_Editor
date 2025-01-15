/*
 * MiVRy Gesture Recognition - Unity Plug-In for Hololens
 * Version 2.4
 * Copyright (c) 2022 MARUI-PlugIn (inc.)
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY 
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Events;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using AOT;
using System;

/// <summary>
/// MiVRy gesture recognition wrapper object for Hololens. 
/// </summary>
public class HololensGestureRecognition : MonoBehaviour, IMixedRealityPointerHandler
{
    /// <summary>
    /// Data structure for gesture recognition events containing recognized gestures info.
    /// </summary>
    public struct GestureRecognitionData
    {
        public int gestureID; // The ID of the gesture or a negative error code.
        public double similarity; // This will receive a value of how similar the performed gesture was to previous recordings.
        public Vector3 position; // This will receive the position where the gesture was performed.
        public double scale; // This will receive the scale at which the gesture was performed.
        public Vector3 primaryDirection; // This will receive the primary direction in which the gesture was performed (greatest expansion).
        public Vector3 secondaryDirection; // This will receive the secondary direction of the gesture.
        public Vector3 minorDirection; // This will receive the minor direction of the gesture (direction of smallest expansion).
        public HololensGestureRecognition caller; // The object from where the event originated.
    };

    #region Public Inspector Variables
    /// <summary>
    /// The name (ID) of the MiVRy license to use.
    /// If left empty, MiVRy will not activate any license and will run as "free" version.
    /// </summary>
    [Tooltip("License Name (ID) of your MiVRy license. Leave empty for free version.")]
    public string LicenseName = "";

    /// <summary>
    /// The license key of the MiVRy license to use.
    /// If left empty, MiVRy will not activate any license and will run as "free" version.
    /// </summary>
    [Tooltip("License Key of your MiVRy license. Leave empty for free version.")]
    public string LicenseKey = "";

    /// <summary>
    /// Database (.dat) file to load gestures from.
    /// </summary>
    public string gestureDatabaseFile;

    [System.Serializable]
    public class GestureRecognitionEvent : UnityEvent<GestureRecognitionData> { }

    /// <summary>
    /// Events to be called when a gesture was performed (after the gesture was completed and identified).
    /// WARNING: The event is called from a non-Unity thread, so it should NOT be used to perform any changes in the Unity scene.
    /// </summary>
    public GestureRecognitionEvent OnGesture;

    [System.Serializable]
    public class TrainingEvent : UnityEvent<HololensGestureRecognition, double> { }

    /// <summary>
    /// Events to be called during training when a new training milestone was achieved.
    /// WARNING: The event is called from a non-Unity thread, so it should NOT be used to perform any changes in the Unity scene.
    /// </summary>
    public TrainingEvent OnTrainingUpdate;

    /// <summary>
    /// Events to be called when training was completed.
    /// WARNING: The event is called from a non-Unity thread, so it should NOT be used to perform any changes in the Unity scene.
    /// </summary>
    public TrainingEvent OnTrainingFinished;

    /// <summary>
    /// Enable / disable gesturing.
    /// </summary>
    public bool gesturingEnabled = true;

    /// <summary>
    /// Whether or not to compensate head motions during gesturing
    /// by continuously updating the current head position/rotation.
    /// </summary>
    public bool compensateHeadMotion = false;

    #endregion Public Inspector Variables

    #region Public Programming Interface

    /// <summary>
    /// If gesture samples are currently being recorded instead of gestures being identified.
    /// A value of -1 means unknown gestures are being identifies,
    /// values of zero or higher identify the gesture for which samples are being recorded.
    /// </summary>
    private int recordingGestureID = -1;

    /// <summary>
    /// Set this wrapper object to record new gesture samples when gestures are performed.
    /// </summary>
    /// <param name="gestureID">The ID (index) of the gesture for which to record samples.</param>
    public void startRecordingGestureSamples(int gestureID)
    {
        recordingGestureID = gestureID;
    }

    /// <summary>
    /// Stop recording gesture samples and return to identifying gestures.
    /// </summary>
    public void stopRecordingGestureSamples()
    {
        recordingGestureID = -1;
    }

    /// <summary>
    /// Whether the user is currently gesturing.
    /// </summary>
    public bool currentlyGesturing { get; private set; } = false;

    /// <summary>
    /// Whether a gesture database (.dat) file was successfully loaded.
    /// </summary>
    public bool databaseFileLoaded { get; private set; } = false;

    /// <summary>
    /// Start the training process to learn recognizing gestures from samples.
    /// </summary>
    /// <returns>True on success, false on error.</returns>
    public bool startTraining()
    {
        GCHandle me = GCHandle.Alloc(this);
        gr.setTrainingUpdateCallback(trainingUpdateCallback);
        gr.setTrainingUpdateCallbackMetadata((IntPtr)me);
        gr.setTrainingFinishCallback(trainingFinishCallback);
        gr.setTrainingFinishCallbackMetadata((IntPtr)me);
        if (gr.startTraining() == 0)
        {
            isTraining = true;
            return true;
        }
        return false;
    }

    /// <summary>
    /// Create / register a new gesture.
    /// </summary>
    /// <param name="name">The name of the gesture to create.</param>
    /// <returns>The ID (index) of the new gesture.</returns>
    public int createGesture(string name)
    {
        return gr.createGesture(name);
    }

    /// <summary>
    /// Whether the MiVRy AI is currently learning gestures.
    /// </summary>
    public bool isTraining { get; private set; } = false;

    #endregion Public Programming Interface

    #region Internal Data Structures

    /// <summary>
    /// The MiVRy gesture recognition object.
    /// </summary>
    private GestureRecognition gr;

    /// <summary>
    /// Game object database of stroke visualization (star) objects.
    /// </summary>
    private List<GameObject> stroke = new List<GameObject>();

    /// <summary>
    /// Unity OnEnable() function,
    /// registers IMixedRealityPointerHandler event handling.
    /// </summary>
    private void OnEnable()
    {
        CoreServices.InputSystem.RegisterHandler<IMixedRealityPointerHandler>(this);
    }

    /// <summary>
    /// Unity OnDisable() function,
    /// de-registers IMixedRealityPointerHandler event handling.
    /// </summary>
    private void OnDisable()
    {
        CoreServices.InputSystem.UnregisterHandler<IMixedRealityPointerHandler>(this);
    }

    /// <summary>
    /// Unity Start() function.
    /// </summary>
    public void Start()
    {
        gr = new GestureRecognition();

        // Find the location for the gesture database (.dat) file
#if UNITY_EDITOR
        // When running the scene inside the Unity editor,
        // we can just load the file from the Assets/ folder:
        string GesturesFilePath = "Assets/MiVRy/StreamingAssets";
#elif UNITY_ANDROID
        // On android, the file is in the .apk,
        // so we need to first "download" it to the apps' cache folder.
        AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        string GesturesFilePath = activity.Call <AndroidJavaObject>("getCacheDir").Call<string>("getCanonicalPath");
        UnityWebRequest request = UnityWebRequest.Get(Application.streamingAssetsPath + "/" + LoadGesturesFile);
        request.SendWebRequest();
        while (!request.isDone) {
            // wait for file extraction to finish
        }
        if (request.isNetworkError)
        {
            HUDText.text = "Failed to extract sample gesture database file from apk.";
            return;
        }
        File.WriteAllBytes(GesturesFilePath + "/" + LoadGesturesFile, request.downloadHandler.data);
#else
        // This will be the case when exporting a stand-alone PC app.
        // In this case, we can load the gesture database file from the streamingAssets folder.
        string GesturesFilePath = Application.streamingAssetsPath;
#endif

        int ret = gr.loadFromFile(GesturesFilePath + "/" + gestureDatabaseFile);
        if (ret < 0)
        {
            databaseFileLoaded = false;
            Debug.LogError($"Failed to load gesture database file {gestureDatabaseFile} at {GesturesFilePath}: {ret}");
        } else
        {
            databaseFileLoaded = true;
        }

        if (this.LicenseKey != null && this.LicenseName != null && this.LicenseName.Length > 0)
        {
            ret = this.gr.activateLicense(this.LicenseName, this.LicenseKey);
            if (ret != 0)
            {
                Debug.LogError("[MiVRy] Failed to activate license: " + GestureRecognition.getErrorMessage(ret));
            }
        }
    }

    /// <summary>
    /// Unity Update() function.
    /// </summary>
    public void Update()
    {
        //
    }

    /// <summary>
    /// MRTK callback when the user starts pinching fingers.
    /// </summary>
    /// <param name="eventData">Event data.</param>
    public void OnPointerDown(MixedRealityPointerEventData eventData)
    {
        if (gesturingEnabled == false)
        {
            return;
        }
        currentlyGesturing = true;
        GameObject mainCamera = Camera.main.gameObject; // GameObject.Find("Main Camera");
        Vector3 p = mainCamera.transform.position;
        Quaternion q = mainCamera.transform.rotation;
        // Vector3 p = CoreServices.InputSystem.EyeGazeProvider.GazeOrigin;
        // Quaternion q = Quaternion.FromToRotation(Vector3.forward, CoreServices.InputSystem.EyeGazeProvider.GazeDirection);
        gr.startStroke(p, q, recordingGestureID);
    }

    /// <summary>
    /// MRTK callback when the user drags with pinched fingers.
    /// </summary>
    /// <param name="eventData">Event data.</param>
    public void OnPointerDragged(MixedRealityPointerEventData eventData)
    {
        if (gesturingEnabled == false)
        {
            return;
        }
        if (compensateHeadMotion)
        {
            GameObject mainCamera = Camera.main.gameObject; // GameObject.Find("Main Camera");
            Vector3 hmd_p = mainCamera.transform.position;
            Quaternion hmd_q = mainCamera.transform.rotation;
            gr.updateHeadPosition(hmd_p, hmd_q);
        }
        Vector3 p = eventData.Pointer.Position;
        Quaternion q = eventData.Pointer.Rotation;
        MixedRealityPose pose;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, eventData.Handedness, out pose))
        {
            p = pose.Position;
            q = pose.Rotation;
        }
        GameObject star_instance = Instantiate(GameObject.Find("star"));
        GameObject star = new GameObject();
        star_instance.name = star.name + "_instance";
        star_instance.transform.SetParent(star.transform, false);
        System.Random random = new System.Random();
        star.transform.position = new Vector3(p.x + (float)random.NextDouble() / 80, p.y + (float)random.NextDouble() / 80, p.z + (float)random.NextDouble() / 80);
        star.transform.rotation = new Quaternion((float)random.NextDouble() - 0.5f, (float)random.NextDouble() - 0.5f, (float)random.NextDouble() - 0.5f, (float)random.NextDouble() - 0.5f).normalized;
        float star_scale = ((float)random.NextDouble() + 0.3f);// * 0.01f;
        star.transform.localScale = Vector3.one * star_scale;
        BoxCollider boxCollider = star.GetComponent<BoxCollider>();
        if (boxCollider)
        {
            Destroy(boxCollider);
        }
        stroke.Add(star);
        gr.contdStrokeQ(p, q);
    }

    /// <summary>
    /// MRTK callback when the user opens / ends pinching fingers.
    /// </summary>
    /// <param name="eventData">Event data.</param>
    public void OnPointerUp(MixedRealityPointerEventData eventData)
    {
        if (gesturingEnabled == false)
        {
            return;
        }
        currentlyGesturing = false;
        GestureRecognitionData data = new GestureRecognitionData();
        data.gestureID = gr.endStroke(
            ref data.similarity,
            ref data.position,
            ref data.scale,
            ref data.primaryDirection,
            ref data.secondaryDirection,
            ref data.minorDirection
        );
        data.caller = this;
        try
        {
            OnGesture?.Invoke(data);
        } catch (Exception e)
        {
            Debug.LogError($"GestureRecognition.OnPointerUp() : Exception on execution '{e.ToString()}'");
        }
        foreach (GameObject go in stroke)
        {
            Destroy(go);
        }
        stroke.Clear();
    }

    /// <summary>
    /// MRTK callback when the user pinches fingers and opens the hand again.
    /// </summary>
    /// <param name="eventData">Event data.</param>
    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        //
    }

    /// <summary>
    /// MiVRy Callback function to be called by the gesture recognition plug-in during the learning process.
    /// </summary>
    /// <param name="performance">The current recognition score.</param>
    /// <param name="ptr">The metadata which is a pointer to this object.</param>
    [MonoPInvokeCallback(typeof(GestureRecognition.TrainingCallbackFunction))]
    private static void trainingUpdateCallback(double performance, IntPtr ptr)
    {
        // Get the script/scene object back from metadata.
        GCHandle obj = (GCHandle)ptr;
        HololensGestureRecognition me = (obj.Target as HololensGestureRecognition);
        me.OnTrainingUpdate?.Invoke(me, performance);
    }

    /// <summary>
    /// Callback function to be called by the gesture recognition plug-in when the learning process was finished.
    /// </summary>
    /// <param name="performance">The current recognition score.</param>
    /// <param name="ptr">The metadata which is a pointer to this object.</param>
    [MonoPInvokeCallback(typeof(GestureRecognition.TrainingCallbackFunction))]
    private static void trainingFinishCallback(double performance, IntPtr ptr)
    {
        // Get the script/scene object back from metadata.
        GCHandle obj = (GCHandle)ptr;
        HololensGestureRecognition me = (obj.Target as HololensGestureRecognition);
        me.OnTrainingFinished?.Invoke(me, performance);
        me.isTraining = false;
    }
    #endregion Internal Data Structures
}
