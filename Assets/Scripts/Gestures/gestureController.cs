using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using MRTKExtensions.Gesture;

using TMPro;
using UnityEngine.UI;

public class gestureController : MonoBehaviour
{
    private MixedRealityPose? previousRightHandPose;
    public GameObject canvasObject;
    List<Text> texts = new List<Text>();

    // Start is called before the first frame update
    void Start()
    {
       foreach (Text child in canvasObject.transform.GetComponentsInChildren<Text>())
       {
          texts.Add(child);
      }

     }
    // Update is called once per frame
    void Update()
    {
       var rightHandPose = GetHandPose(Handedness.Right,
                                   previousRightHandPose != null);
       previousRightHandPose = rightHandPose;
    }

    public MixedRealityPose getPalmPose()
    {
        MixedRealityPose pose;
        HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Right, out pose);
        return pose;
    }

    public bool DetectGrab(Handedness hand)
    {

        if (
            // uncomment when deploying to hololens
            HandPoseUtils.ThumbFingerCurl(hand)>0.5F &&
            HandPoseUtils.IndexFingerCurl(hand) > 0.3F &&
            HandPoseUtils.MiddleFingerCurl(hand) > 0.6F &&
            HandPoseUtils.RingFingerCurl(hand) > 0.6F &&
            HandPoseUtils.PinkyFingerCurl(hand)>0.6F
            )
        {
            //Debug.Log("IS grab");
            return true;
        }
        else
        {
            //Debug.Log("NOT GG");
            return false;
        }

    }

    public bool DetectPointGrab(Handedness hand)
    {
        if (
            // uncomment when deploying to hololens
            HandPoseUtils.ThumbFingerCurl(hand)>0.5F &&
            HandPoseUtils.IndexFingerCurl(hand)< 0.2F &&
            HandPoseUtils.MiddleFingerCurl(hand) > 0.6F &&
            HandPoseUtils.RingFingerCurl(hand) > 0.6F &&
            HandPoseUtils.PinkyFingerCurl(hand) > 0.6F
            )
        {
            return true;
        }
        else
        {
            return false;
        }

    }



     private MixedRealityPose? GetHandPose(Handedness hand, bool hasBeenGrabbed)
     {

        //Debug.Log("hands");
        texts[0].text = "Thumb" + HandPoseUtils.ThumbFingerCurl(hand).ToString();
        texts[1].text = "Index" + HandPoseUtils.IndexFingerCurl(hand).ToString();
        texts[2].text = "Middle" + HandPoseUtils.MiddleFingerCurl(hand).ToString();
        texts[3].text = "Ring" + HandPoseUtils.RingFingerCurl(hand).ToString();
        texts[4].text = "Pinky" + HandPoseUtils.PinkyFingerCurl(hand).ToString();

        return null;
     }
}

