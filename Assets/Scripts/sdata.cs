using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class sdata : data
{

    protected override float getVol()
    {
        vol = (4.0f * Mathf.PI * lenX * lenY * lenZ) / 3;
        return vol;
    }

    //void OnTriggerEnter(Collider other)
    //{
    //    Debug.Log("i am created");
    //    Debug.Log(other.gameObject.name);
    //}
}
