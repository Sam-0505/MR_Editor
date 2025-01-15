using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cdata : data
{
    protected override float getVol()
    {
        vol = lenX * lenY * lenZ;
        return vol;
    }
}
