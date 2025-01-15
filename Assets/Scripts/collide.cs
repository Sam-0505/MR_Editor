using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collide : MonoBehaviour
{
    static bool flag = false;
    int start;
    float time = 0;
    public float TimeFactor = 0.05f;
    public GameObject indicationSphere;
    private GameObject targetObj = null;

    private void Update()
    {
        time = Time.deltaTime;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.gameObject.name.StartsWith("Object") && collision.collider is SphereCollider)
        {
            indicationSphere.SetActive(true);
            targetObj = collision.gameObject;
            if (gameObject.name == "Point1")//left hand
            {
                measure.pt1 = collision.collider.bounds.center;
                indicationSphere.transform.position = measure.pt1;
            }
            else if (gameObject.name == "Point2")//right hand
            {
                measure.pt2 = collision.collider.bounds.center;
                indicationSphere.transform.position = measure.pt2;
            }

            //Debug.Log("The collider centers are:" + measure.pt1 + " "+ measure.pt2);
            flag = true;
        }

        if (flag)
            time = 0;
        else if (time >= TimeFactor)
            flag = false;
    }

    void OnCollisionExit(Collision collision)
    {
        if (collision.collider.gameObject.name.StartsWith("Object") && collision.collider is SphereCollider)
        {
            indicationSphere.SetActive(false);
            flag = false;
            targetObj = null;
        }
    }

    public bool getFlag()
    {
        return flag;
    }

    public void deactivateFlag()
    {
        flag = false;
    }

    public string getTargetObj()
    {
        if (targetObj == null)
        {
            return "null";
        }
        else
        {
            return targetObj.name;
        }
    }
}
