/*
 * MiVRy Gesture Recognition - Unity Plug-In for Hololens
 * 
 * Copyright (c) 2022 MARUI-PlugIn (inc.)
 * This software is free to use for non-commercial purposes.
 * You may use this software in part or in full for any project
 * that does not pursue financial gain, including free software 
 * and projectes completed for evaluation or educational purposes only.
 * Any use for commercial purposes is prohibited.
 * You may not sell or rent any software that includes
 * this software in part or in full, either in it's original form
 * or in altered form.
 * If you wish to use this software in a commercial application,
 * please contact us at support@marui-plugin.com to obtain
 * a commercial license.
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
using UnityEngine;

public class Sample_Pixie : MonoBehaviour
{
    // The MiVRy gesture recognition wrapper for Hololens.
    public HololensGestureRecognition gestureRecognition;

    // The text field to display instructions.
    public static TextMesh HUDText;

    // Gesture ID for "come here" gesture.
    private const int gestureid_come = 0;

    // Gesture ID for "go there" gesture.
    private const int gestureid_go = 1;

    // Gesture ID for "spin around" gesture.
    private const int gestureid_spin = 2;

    // Gesture ID for "make a flip (loop)" gesture.
    private const int gestureid_flip = 3;

    // Gesture ID for "peekaboo" gesture.
    private const int gestureid_peekaboo = 4;

    // Last reported recognition performance (during training).
    // 0 = 0% correctly recognized, 1 = 100% correctly recognized.
    private double last_performance_report = 0;

    // Temporary storage for objects to display the gesture stroke.
    List<string> stroke = new List<string>();

    // List of Objects created with gestures:
    List<GameObject> created_objects = new List<GameObject>();

    public class Pixie
    {
        public GameObject gameobject = null;
        public Animator animator = null;

        public bool action_finished = true;

        public Vector3 target_position;
        public Vector3 target_orientation;
        public string target_trigger = null;

        float speed = 0.0f;

        public Pixie()
        {
            gameobject = GameObject.Find("pixie");
            animator = gameobject.GetComponent<Animator>();
            target_position = gameobject.transform.position;
            target_orientation = -gameobject.transform.position; // facing the room center / player
        }

        public void update()
        {
            Vector3 current_position = gameobject.transform.position;
            Quaternion current_rotation = gameobject.transform.rotation;
            Quaternion target_rotation = Quaternion.identity;
            float dist = Vector3.Distance(target_position, current_position);
            if (dist > 0.001f)
            {
                if (speed < 1.5f)
                {
                    speed += 0.15f;
                }
                float step = speed * Time.deltaTime;
                target_rotation.SetLookRotation(target_position - current_position);
                gameobject.transform.position = Vector3.MoveTowards(current_position, target_position, step);
                gameobject.transform.rotation = Quaternion.RotateTowards(gameobject.transform.rotation, target_rotation, step * 100.0f);
                return;
            }
            else
            {
                speed = 0.0f;
            }
            if (target_orientation.magnitude > 0.001f) {
                target_rotation.SetLookRotation(target_orientation);
                if (Quaternion.Angle(gameobject.transform.rotation, target_rotation) > 1.0f)
                {
                    float step = 200.0f * Time.deltaTime;
                    gameobject.transform.rotation = Quaternion.RotateTowards(gameobject.transform.rotation, target_rotation, step);
                    return;
                }
            }
            if (target_trigger != null)
            {
                animator.SetTrigger(target_trigger);
                target_trigger = null;
                return;
            }
            if (animator.IsInTransition(0))
            {
                return;
            }
            this.action_finished = animator.GetCurrentAnimatorStateInfo(0).IsName("Idle");
        }

        public void triggerCome(Vector3 pos)
        {
            this.target_position = pos;
            // afterwards, face the player again
            this.target_orientation = GameObject.Find("Main Camera").transform.position - pos;
            this.action_finished = false;
        }

        public void triggerGo(Vector3 pos)
        {
            this.target_position = pos;
            // afterwards, face the player again
            this.target_orientation = GameObject.Find("Main Camera").transform.position - pos;
            this.action_finished = false;
        }
        public void triggerSpin(Vector3 pos)
        {
            this.target_position = pos;
            this.target_orientation = GameObject.Find("Main Camera").transform.position - pos;
            this.target_trigger = "DoSpin";
            this.action_finished = false;
        }
        public void triggerFlip(Vector3 pos, Vector3 dir)
        {
            this.target_position = pos;
            this.target_orientation = dir;
            this.target_trigger = "DoFlip";
            this.action_finished = false;
        }
        public void triggerPeekaboo()
        {
            this.target_trigger = "DoPeekaboo";
            this.action_finished = false;
        }
    }

    private Pixie pixie = null;

    public abstract class Step
    {
        public bool completed = false;
        public abstract void init(ref HololensGestureRecognition gr);
        public abstract void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie);
        public abstract Step nextStep();
    }

    //                                                                              ________________________________
    // ____________________________________________________________________________/     Step0_PressTrigger
    public class Step0_PressTrigger : Step
    {
        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            Sample_Pixie.HUDText.text = "Welcome to MiVRy\nPinch thumb and index finger to start";
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            this.completed = true;
            Sample_Pixie.HUDText.text = "";
            // reparent the text to be static in front
            Transform hud_text_transform = GameObject.Find("HUDText").transform;
            hud_text_transform.SetParent(GameObject.Find("MixedRealityPlayspace").transform, true);
            hud_text_transform.rotation.SetLookRotation(GameObject.Find("Main Camera").transform.position - hud_text_transform.position);
        }
        public override Step nextStep()
        {
            return new Step1_ComeHere();
        }
    }

    //                                                                              ________________________________
    // ____________________________________________________________________________/        Step1_ComeHere
    public class Step1_ComeHere : Step
    {
        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            Sample_Pixie.HUDText.text = "Make a 'come here' gesture\nto call the pixie close to you.";
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            if (grd.gestureID == gestureid_come)
            {
                pixie.triggerCome(grd.position);
                this.completed = true;
                Sample_Pixie.HUDText.text = "";
            }
        }
        public override Step nextStep()
        {
            return new Step2_GoThere();
        }
    }


    //                                                                              ________________________________
    // ____________________________________________________________________________/        Step2_GoThere
    public class Step2_GoThere : Step
    {
        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            Sample_Pixie.HUDText.text = "Nice!\n Now make a throwing gesture\nto send the pixie away";
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            if (grd.gestureID == gestureid_go)
            {
                pixie.triggerGo(grd.position + (grd.primaryDirection * 6.0f * (float)grd.scale));
                this.completed = true;
                Sample_Pixie.HUDText.text = "";
            }
        }
        public override Step nextStep()
        {
            return new Step3_ComeHereAndGoThere();
        }
    }


    //                                                                              ________________________________
    // ____________________________________________________________________________/    Step3_ComeHereAndGoThere
    public class Step3_ComeHereAndGoThere : Step
    {
        private int num_commands_issued = 0;
        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            Sample_Pixie.HUDText.text = "Good!\nTry calling and sending the pixie away a few times.";
            this.num_commands_issued = 0;
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            if (grd.gestureID == gestureid_go)
            {
                pixie.triggerGo(grd.position + (grd.primaryDirection * 6.0f * (float)grd.scale));
                this.num_commands_issued += 1;
                Sample_Pixie.HUDText.text = "That's a 'go there' gesture. Nice!\nTry calling and sending the pixie away a few more times.\n(" + this.num_commands_issued + "/4)";
            }
            else if (grd.gestureID == gestureid_come)
            {
                pixie.triggerCome(grd.position);
                this.num_commands_issued += 1;
                Sample_Pixie.HUDText.text = "That's a 'come here' gesture. Nice!\nTry calling and sending the pixie away a few more times.\n(" + this.num_commands_issued + "/4)";
            }
            if (this.num_commands_issued >= 4)
            {
                this.completed = true;
                Sample_Pixie.HUDText.text = "";
            }
        }
        public override Step nextStep()
        {
            return new Step4_Spin();
        }
    }


    //                                                                              ________________________________
    // ____________________________________________________________________________/    Step4_Spin
    public class Step4_Spin : Step
    {
        private int num_commands_issued = 0;

        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            this.num_commands_issued = 0;
            Sample_Pixie.HUDText.text = "Make a twirl (whirling) gesture\nto make the pixie spin.";
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            if (grd.gestureID == gestureid_spin)
            {
                pixie.triggerSpin(grd.position);
                this.num_commands_issued += 1;
                Sample_Pixie.HUDText.text = "Great!\nTry it again!\nMake a twirl (whirling) gesture\nto make the pixie spin. (" + this.num_commands_issued + "/3)";
            }
            if (this.num_commands_issued >= 3)
            {
                this.completed = true;
                Sample_Pixie.HUDText.text = "";
            }
        }
        public override Step nextStep()
        {
            return new Step5_FlipRecord();
        }
    }


    //                                                                              ________________________________
    // ____________________________________________________________________________/    Step5_FlipRecord
    public class Step5_FlipRecord : Step
    {
        private int recorded_samples = 0;

        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            Sample_Pixie.HUDText.text = "Now teach your pixie something new!\nInvent a new gesture and do it 20 times.\n(0/20)";
            this.recorded_samples = 0;
            int record_gesture_id = gr.createGesture("Flip");
            // record_gesture_id should be gestureid_peekaboo
            if (record_gesture_id != gestureid_flip)
            {
                Sample_Pixie.HUDText.text = "[ERROR: FAILED TO CREATE NEW GESTURE]";
            }
            gr.startRecordingGestureSamples(gestureid_flip);
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            if (grd.gestureID == gestureid_flip)
            {
                recorded_samples += 1;
                Sample_Pixie.HUDText.text = "Now teach your pixie something new!\nInvent a new gesture and do it 20 times.\n(" + recorded_samples + "/20)";
            }
            if (recorded_samples >= 20)
            {
                this.completed = true;
                grd.caller.stopRecordingGestureSamples();
                grd.caller.startTraining();
                Sample_Pixie.HUDText.text = "Please wait while your pixie is learning the new gesture...";
            }
        }
        public override Step nextStep()
        {
            return new Step6_FlipPerform();
        }
    }


    //                                                                              ________________________________
    // ____________________________________________________________________________/    Step6_FlipPerform
    public class Step6_FlipPerform : Step
    {
        private int num_commands_issued = 0;

        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            this.num_commands_issued = 0;
            Sample_Pixie.HUDText.text = "Learning finished! Try out your new gesture.";
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            if (grd.gestureID == gestureid_flip)
            {
                pixie.triggerFlip(grd.position, grd.primaryDirection);
                this.num_commands_issued += 1;
                Sample_Pixie.HUDText.text = "That's your new gesture. Nice!\nTry it a few more times.\n(" + this.num_commands_issued + "/4)";
            }
            else if (grd.gestureID == gestureid_spin)
            {
                pixie.triggerSpin(grd.position);
                Sample_Pixie.HUDText.text = "That's a 'spin' gesture. Nice!\nTry a few more times.\n(" + this.num_commands_issued + "/4)";
            }
            else if (grd.gestureID == gestureid_go)
            {
                pixie.triggerGo(grd.position + (grd.primaryDirection * 6.0f * (float)grd.scale));
                Sample_Pixie.HUDText.text = "That's a 'go there' gesture. Nice!\nTry a few more times.\n(" + this.num_commands_issued + "/4)";
            }
            else if (grd.gestureID == gestureid_come)
            {
                pixie.triggerCome(grd.position);
                Sample_Pixie.HUDText.text = "That's a 'come here' gesture. Nice!\nTry a few more times.\n(" + this.num_commands_issued + "/4)";
            }
            if (this.num_commands_issued >= 4)
            {
                this.completed = true;
                Sample_Pixie.HUDText.text = "";
            }
        }
        public override Step nextStep()
        {
            return new Step7_PeekabooRecord();
        }
    }


    //                                                                              ________________________________
    // ____________________________________________________________________________/    Step7_PeekabooRecord
    public class Step7_PeekabooRecord : Step
    {
        private int recorded_samples = 0;

        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            Sample_Pixie.HUDText.text = "Let's try it again!\nInvent a new gesture and do it 20 times.\n(0/20)";
            int record_gesture_id = gr.createGesture("Peekaboo");
            // record_gesture_id should be gestureid_peekaboo
            if (record_gesture_id != gestureid_peekaboo)
            {
                Sample_Pixie.HUDText.text = "[ERROR: FAILED TO CREATE NEW GESTURE]";
            }
            gr.startRecordingGestureSamples(gestureid_peekaboo);
            this.recorded_samples = 0;
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            if (grd.gestureID == gestureid_peekaboo)
            {
                recorded_samples += 1;
                Sample_Pixie.HUDText.text = "Let's try it again!\nInvent a new gesture and do it 20 times.\n(" + recorded_samples + "/20)";
            }
            if (recorded_samples >= 20)
            {
                this.completed = true;
                grd.caller.stopRecordingGestureSamples();
                grd.caller.startTraining();
                Sample_Pixie.HUDText.text = "Please wait while your pixie is learning the new gesture...";
            }
        }
        public override Step nextStep()
        {
            return new Step8_FreePlay();
        }
    }


    //                                                                              ________________________________
    // ____________________________________________________________________________/    Step8_FreePlay
    public class Step8_FreePlay : Step
    {
        public override void init(ref HololensGestureRecognition gr)
        {
            this.completed = false;
            Sample_Pixie.HUDText.text = "Learning finished! Try out any of the gestures.";
        }
        public override void onGesture(HololensGestureRecognition.GestureRecognitionData grd, ref Pixie pixie)
        {
            if (grd.gestureID == gestureid_peekaboo)
            {
                pixie.triggerPeekaboo();
                Sample_Pixie.HUDText.text = "That's your new gesture. Awesome!\nFeel try to try out any gesture.";
            }
            else if (grd.gestureID == gestureid_flip)
            {
                pixie.triggerFlip(grd.position, grd.primaryDirection);
                Sample_Pixie.HUDText.text = "That's your previous gesture. Cool!\nFeel try to try out any gesture.";
            }
            else if (grd.gestureID == gestureid_spin)
            {
                pixie.triggerSpin(grd.position);
                Sample_Pixie.HUDText.text = "That's a 'spin' gesture. Nice!\nFeel try to try out any gesture.";
            }
            else if (grd.gestureID == gestureid_go)
            {
                pixie.triggerGo(grd.position + (grd.primaryDirection * 6.0f * (float)grd.scale));
                Sample_Pixie.HUDText.text = "That's a 'go there' gesture. Splended!\nMake it larger to send the pixie further away.";
            }
            else if (grd.gestureID == gestureid_come)
            {
                pixie.triggerCome(grd.position);
                Sample_Pixie.HUDText.text = "That's a 'come here' gesture. Not bad!\nFeel try to try out any gesture.";
            }
        }
        public override Step nextStep()
        {
            // this step never ends
            return new Step8_FreePlay();
        }
    }

    private Step current_step = null;

    // Initialization:
    void Start()
    {
        pixie = new Pixie();

        // Set the welcome message.
        HUDText = GameObject.Find("HUDText").GetComponent<TextMesh>();

        if (HUDText == null)
        {
            Debug.LogError("MiVRy.SamplePixie.cs : Failed to find 3d text.");
            return;
        }

        if (gestureRecognition == null)
        {
            HUDText.text = "ERROR:\nGestureRecognition object not set.";
            return;
        }

        if (gestureRecognition.databaseFileLoaded == false)
        {
            HUDText.text = "ERROR:\nFailed to load\nGestureRecognition database file.";
            return;
        }

        current_step = new Step0_PressTrigger();
        current_step.init(ref gestureRecognition);
    }


    // Update:
    void Update()
    {
        // Don't allow the player to make any gestures when the pixie is still
        // busy with the previous command.
        pixie.update();
        if (!pixie.action_finished)
        {
            return;
        }

        // If we're currently learning a new gesture, don't allow new input.
        if (gestureRecognition.isTraining)
        {
            return;
        }

        // bool button_a_left = Input.GetButton("LeftControllerButtonA");
        // bool button_a_right = Input.GetButton("RightControllerButtonA");

        if (current_step == null)
        {
            return;
        }
        if (current_step.completed)
        {
            current_step = current_step.nextStep();
            current_step.init(ref this.gestureRecognition);
        }
    }

    // Callback function to be called by the gesture recognition plug-in during the learning process.
    public void trainingUpdateCallback(HololensGestureRecognition hololensGestureRecognition, double performance)
    {
        // Update the performance indicator with the latest estimate.
        this.last_performance_report = performance;
    }


    // Callback function to be called by the gesture recognition plug-in when the learning process was finished.
    public void trainingFinishCallback(HololensGestureRecognition hololensGestureRecognition, double performance)
    {
        // Update the performance indicator with the latest estimate.
        this.last_performance_report = performance;
    }

    public void OnGesture(HololensGestureRecognition.GestureRecognitionData data)
    {
        if (current_step != null)
            current_step.onGesture(data, ref this.pixie);
    }
}
