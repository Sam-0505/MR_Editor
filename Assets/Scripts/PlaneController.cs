using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaneController : MonoBehaviour
{
    bool isMoveable;
    public gestureController gescontroller;
    private Vector3 currPos;
    // Start is called before the first frame update
    void Start()
    {
        isMoveable = true;
        currPos = new Vector3();
    }

    // Update is called once per frame
    void Update()
    {
        if (isMoveable)
        {
            var palmPose = gescontroller.getPalmPose();
            gameObject.transform.position = palmPose.Position;
            gameObject.transform.rotation = palmPose.Rotation;
            isMoveable = !gescontroller.DetectGrab(Microsoft.MixedReality.Toolkit.Utilities.Handedness.Right);
        }
    }

    public void setMoverable()
    {
        isMoveable = !isMoveable;
    }


}
