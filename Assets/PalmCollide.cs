using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PalmCollide : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.gameObject.name.StartsWith("Object") && collision.collider is SphereCollider)
        {
            float sArea;
            GameObject curr = collision.collider.gameObject;
            Vector3 colWorld = collision.collider.bounds.center;
            Vector3 colLocal = curr.transform.InverseTransformPoint(colWorld);

            float xArea = ((colLocal.x > 0.3f) || (colLocal.x < -0.3f)) ? 1 : curr.transform.localScale.x;
            float yArea = ((colLocal.y > 0.3f) || (colLocal.y < -0.3f)) ? 1 : curr.transform.localScale.y;
            float zArea = ((colLocal.z > 0.3f) || (colLocal.z < -0.3f)) ? 1 : curr.transform.localScale.z;

            sArea = xArea * yArea * zArea * 10000f;
            Debug.Log("The Area is " + sArea);
        }
    }
}
