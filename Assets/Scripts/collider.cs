using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collider : MonoBehaviour
{
    // Start is called before the first frame update
    public Vector3 minn = new Vector3(int.MaxValue, int.MaxValue, int.MaxValue); 
    float minDist= int.MaxValue;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.gameObject.name);
        if (other.gameObject.name.StartsWith("Object"))
        {
            Vector3[] x = other.gameObject.GetComponent<data>().pts;
            for (int i = 0; i < x.Length; i++)
            {
                float dist=Vector3.Distance(transform.position, x[i]);
                if(dist<minDist)
                {
                    minDist = dist;
                    minn = x[i];
                }
            }
        }
    }

}
