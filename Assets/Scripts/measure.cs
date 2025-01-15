using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class measure : MonoBehaviour
{
    // Start is called before the first frame update
    public static Vector3 pt1;
    public static Vector3 pt2;
    public static float dist;
    public static GameObject parent;
    public GameObject Point1_Collider;
    public GameObject Point2_Collider;
    public GameObject Palm_Collider;
    public GameObject AxisMenu;
    public GameObject GeoMenu;
    public gestureController gescontroller;


    private bool isMeasureGestureRight;
    private bool isMeasureGestureLeft;
    private bool isMeasureMode;


    void Start()
    {
        AxisMenu.SetActive(true);
        GeoMenu.SetActive(true);
        Point1_Collider.SetActive(false);
        Point2_Collider.SetActive(false);
        Palm_Collider.SetActive(false);
        isMeasureGestureRight = false;
        isMeasureGestureLeft = false;
        isMeasureMode = false;


    }

    private void Update()
    {
        if (isMeasureMode)
        {
            //isMeasureGestureRight = gescontroller.DetectPointGrab(Microsoft.MixedReality.Toolkit.Utilities.Handedness.Right);
            isMeasureGestureRight = true;
            if (isMeasureGestureRight)
            {
                // activate points when user perform measure gesture
                Point2_Collider.SetActive(true);
            }
            else
            {
                Point2_Collider.SetActive(false);
            }
            //isMeasureGestureLeft = gescontroller.DetectPointGrab(Microsoft.MixedReality.Toolkit.Utilities.Handedness.Left);
            isMeasureGestureLeft = true;
            if (isMeasureGestureLeft)
            {
                // activate points when user perform measure gesture
                Point1_Collider.SetActive(true);
            }
            else
            {
                Point1_Collider.SetActive(false);
            }

            if (Point1_Collider.GetComponent<collide>().getFlag() && Point2_Collider.GetComponent<collide>().getFlag())
            {
                var tgtObj1 = Point1_Collider.GetComponent<collide>().getTargetObj();
                var tgtObj2 = Point2_Collider.GetComponent<collide>().getTargetObj();
                Debug.Log("okflag"+tgtObj1+tgtObj2);
                if ((tgtObj1 != "null")&& (tgtObj2 != "null"))
                {
                    getDist();
                    Point1_Collider.GetComponent<collide>().deactivateFlag();
                    Point2_Collider.GetComponent<collide>().deactivateFlag();
                }
               
            }
        }

    }

    public void startMeasure()
    {
        isMeasureMode = true;
        parent = new GameObject("LineMeasure");
        AxisMenu.SetActive(false);
        GeoMenu.SetActive(false);
        Palm_Collider.SetActive(true);
        //Point1_Collider.SetActive(true);
        //Point2_Collider.SetActive(true);

        GetComponent<control>().settransform("Position");
        GetComponent<control>().setAxis(7);
        GetComponent<control>().settransform("Rotate");
        GetComponent<control>().setAxis(7);
    }

    public static void getDist()
    {
        dist = Vector3.Distance(pt1, pt2);

        var go = new GameObject();
        go.transform.parent = parent.transform;

        var lr = go.AddComponent<LineRenderer>();
        go.transform.position = 0.5f * pt1 + 0.5f * pt2;
        lr.SetPosition(0, pt1);
        lr.SetPosition(1, pt2);
        lr.material = new Material(Shader.Find("Diffuse"));
        lr.material.SetColor("_Color", Color.green);

        AnimationCurve curve = new AnimationCurve();
        curve.AddKey(0, 0.001f);
        curve.AddKey(1, 0.001f);
        lr.widthCurve = curve;

        var txt = go.AddComponent<TextMesh>();
        txt.text = "" + dist;
        txt.characterSize = 0.01f;
        txt.color = Color.green;
        //Debug.Log("Point1 is " + pt1 + "Point2 is " + pt2 + "The Distance is " + dist);
    }

    public void destroyMeasure()
    {
        isMeasureMode = false;
        AxisMenu.SetActive(true);
        GeoMenu.SetActive(true);
        Point1_Collider.SetActive(false);
        Point2_Collider.SetActive(false);
        Palm_Collider.SetActive(false);
        Destroy(parent);
    }
}
