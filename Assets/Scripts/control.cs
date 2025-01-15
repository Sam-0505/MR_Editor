using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes;
using Microsoft.MixedReality.Toolkit;

public class control : MonoBehaviour
{
    int objNo = 0;
    string tfm = "Position";
    int axis = 0;
    public static GameObject currObj;
    public GameObject canva;
    GameObject sp=null;
    bool isEdit=true;
    int edge=5;
    public float colRad = 0.2f;
    private List<GameObject> modelList = new List<GameObject>();
    Vector3 lastScale =new Vector3(0.1f,0.1f,0.1f);


    private void Update()
    {
        //Debug.Log(Camera.main.transform.forward.ToString()+"testcam");
        canva.GetComponent<UnityEngine.UI.Text>().text = "";

        if (currObj && isEdit)
        {
            var mr = currObj.GetComponent<Renderer>();
            mr.material = new Material(Shader.Find("Diffuse"));
            mr.material.SetColor("_Color", Color.red);
        }

        // Axis is a mask for the scale constraints when transform is Scale. Based on the constraints, 
        // we will either take the new scale values or the last scale values before applying constraint
        if (tfm=="Scale")
        {
            Debug.Log("Transform is Scale");
            Vector3 val = currObj.transform.localScale;
            float cx = ((axis & 1 << 0) == 0) ? val.x : lastScale.x;
            float cy = ((axis & 1 << 1) == 0) ? val.y : lastScale.y;
            float cz = ((axis & 1 << 2) == 0) ? val.z : lastScale.z;
            currObj.transform.localScale = new Vector3(cx, cy, cz);
        }
    }


    public void addCube()
    {
        GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        currObj = cube;
        cube.name = "Object(" + objNo + ")";
        objNo++;
		
        cube.AddComponent<cdata>();

        for (int i=0;i<8;i++)
        {
            var sc = cube.AddComponent<SphereCollider>();

            float x = (i & 1)!=0 ? 0.5f : -0.5f;
            float y = (i & 1<<1) != 0 ? 0.5f : -0.5f;
            float z = (i & 1<<2) != 0 ? 0.5f : -0.5f;

            sc.center = new Vector3(x, y, z);
            sc.radius = colRad;
        }

        //Colliders to get Area of the surface
        colRad = 0.5f;
        var asc= cube.AddComponent<SphereCollider>();
        asc.center = new Vector3(0, 0, 0.5f);
        asc.radius = colRad;

        asc = cube.AddComponent<SphereCollider>();
        asc.center = new Vector3(0, 0, -0.5f);
        asc.radius = colRad;

        asc = cube.AddComponent<SphereCollider>();
        asc.center = new Vector3(0.5f, 0, 0);
        asc.radius = colRad;

        asc = cube.AddComponent<SphereCollider>();
        asc.center = new Vector3(-0.5f, 0, 0);
        asc.radius = colRad;

        asc = cube.AddComponent<SphereCollider>();
        asc.center = new Vector3(0, 0.5f, 0);
        asc.radius = colRad;

        asc = cube.AddComponent<SphereCollider>();
        asc.center = new Vector3(0, -0.5f, 0);
        asc.radius = colRad;


        initializeObj(cube);
    }

    public void setEdge(int e)
    {
        edge = e;
    }

    public void addPrism()
    {
        GameObject empty = new GameObject();
        empty.name= "Object(" + objNo + ")";
        objNo++;
        gen g = new gen();
        g.getObj(empty,edge);
        currObj = empty;
        empty.AddComponent<pdata>();
        initializeObj(empty);
    }

    public void addSphere()
    {
        GameObject sp = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        currObj = sp;
        sp.name = "Object(" + objNo + ")";
        sp.AddComponent<sdata>();
        objNo++;
        initializeObj(sp);
    }

    public void addCylinder()
    {
        GameObject cr = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        currObj = cr;
        cr.name = "Object(" + objNo + ")";
        objNo++;
        cr.AddComponent<crdata>();
        initializeObj(cr);
    }

    public void delObj()
    {
        modelList.Remove(currObj);
        Destroy(currObj);
        currObj = null;
    }

    public void dupObj()
    {
        GameObject dup = GameObject.Instantiate(currObj);
        dup.name= "Object(" + objNo + ")";
        ChangeCurrObjOnTouch(dup);
        objNo++;
        modelList.Add(dup);
    }

    public void initializeObj(GameObject obj)
    {
        var mr = obj.GetComponent<Renderer>();
        mr.material = new Material(Shader.Find("Diffuse"));
        mr.material.SetColor("_Color", Color.white);

        var objPos = Camera.main.transform.position + (Camera.main.transform.forward * 0.34f);

        // obj.transform.position = new Vector3(0, 0, 0.3f);
        obj.transform.position = objPos;
        obj.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
        /*
        var col = obj.AddComponent<BoxCollider>();
        col.center = new Vector3(0, 0, 0);
        col.size = new Vector3(1f, 1f, 1f);
        */

        var comp = obj.AddComponent<ObjectManipulator>();
        comp.OneHandRotationModeNear = ObjectManipulator.RotateInOneHandType.RotateAboutObjectCenter;
        comp.OneHandRotationModeFar = ObjectManipulator.RotateInOneHandType.RotateAboutObjectCenter;
        comp.TwoHandedManipulationType = TransformFlags.Scale;

        var rotCon = currObj.AddComponent<RotationAxisConstraint>();
        rotCon.ConstraintOnRotation = (AxisFlags)0;
        var moveCon = currObj.AddComponent<MoveAxisConstraint>();
        rotCon.ConstraintOnRotation = (AxisFlags)0;

        var manager = currObj.GetComponent<ConstraintManager>();
        manager.AutoConstraintSelection = false;
        manager.AddConstraintToManualSelection(rotCon);
        manager.AddConstraintToManualSelection(moveCon);

        obj.AddComponent<NearInteractionGrabbable>();
        ChangeCurrObjOnTouch(obj);

        var bound=obj.AddComponent<BoundsControl>();
        bound.BoundsControlActivation = BoundsControlActivationType.ActivateByProximity;

        modelList.Add(obj);
    }

    public void setMode()
    {
        if (isEdit)
        {
            ChangeAllObjMovement(false);
            isEdit = false;
            var mr = currObj.GetComponent<Renderer>();
            mr.material = new Material(Shader.Find("Diffuse"));
            mr.material.SetColor("_Color", Color.white);
            currObj = null;
            GetComponent<measure>().startMeasure();



        }
        else
        {
            ChangeAllObjMovement(true);
            GetComponent<measure>().destroyMeasure();
            isEdit = true;
            currObj = null;

        }
    }

    public void setAxis(int ax)
    {
        axis = ax;
        set();
    }
	
    public void settransform(string m)
	{
        tfm = m;
        set();
    }

    public void setObject(GameObject target)
    {
        var d = target.GetComponent<data>();
        canva.GetComponent<UnityEngine.UI.Text>().text = d.s;

        if (target != currObj)
        {
            currObj = target;
            set();
        }
    }

    public void set()
	{
        if (isEdit)
        {

            //disable object manipulator, nearobjectgrabbable, bound control

            if (tfm == "Rotate")
            {
                var rotCon = currObj.GetComponent<RotationAxisConstraint>();
                rotCon.ConstraintOnRotation = (AxisFlags)axis;

                var moveCon = currObj.GetComponent<MoveAxisConstraint>();
                moveCon.ConstraintOnMovement = (AxisFlags)7;

                var manager = currObj.GetComponent<ConstraintManager>();
                manager.AutoConstraintSelection = false;
                manager.AddConstraintToManualSelection(rotCon);
                manager.AddConstraintToManualSelection(moveCon);
            }
            else if (tfm == "Position")
            {
                var rotCon = currObj.GetComponent<RotationAxisConstraint>();
                rotCon.ConstraintOnRotation = (AxisFlags)7;

                var moveCon = currObj.GetComponent<MoveAxisConstraint>();
                moveCon.ConstraintOnMovement = (AxisFlags)axis;

                var manager = currObj.GetComponent<ConstraintManager>();
                manager.AutoConstraintSelection = false;
                manager.AddConstraintToManualSelection(rotCon);
                manager.AddConstraintToManualSelection(moveCon);
            }
            else if(tfm == "Scale")
            {
                lastScale = currObj.transform.localScale;
            }
        }
        else
        {


            var rotCon = currObj.GetComponent<RotationAxisConstraint>();
            rotCon.ConstraintOnRotation = (AxisFlags)7;

            var moveCon = currObj.GetComponent<MoveAxisConstraint>();
            moveCon.ConstraintOnMovement = (AxisFlags)7;

            var manager = currObj.GetComponent<ConstraintManager>();
            manager.AutoConstraintSelection = false;
            manager.AddConstraintToManualSelection(rotCon);
            manager.AddConstraintToManualSelection(moveCon);
        }
    }

    public static void ChangeCurrObjOnTouch(GameObject target)
    {
        // Add and configure the touchable
        var touchable = target.AddComponent<NearInteractionTouchableVolume>();
        touchable.EventsToReceive = TouchableEventType.Touch;

        TouchHandler touch = target.AddComponent<TouchHandler>();
        touch.OnTouchStarted.AddListener((e) => {
            currObj = target;
        });
        touch.OnTouchCompleted.AddListener((e) => {
        });

    }

    private void ChangeAllObjMovement(bool enabled)
    {
        Debug.Log("change movement");
        foreach (GameObject obj in modelList)
        {
            obj.GetComponent<ObjectManipulator>().enabled = enabled;
            obj.GetComponent<NearInteractionGrabbable>().enabled = enabled;
            obj.GetComponent<BoundsControl>().enabled = enabled;
        }
    }


}
