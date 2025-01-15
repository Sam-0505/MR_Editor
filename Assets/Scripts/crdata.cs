using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class crdata : data
{
    protected override float getVol()
    {
        vol = Mathf.PI * lenX * lenZ * lenY;
        return vol;
    }
}
