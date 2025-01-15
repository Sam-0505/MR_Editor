using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.UI;

public class sliderScript : MonoBehaviour
{
    public PinchSlider slid;
    public GameObject con;
    public Text txt;

    private void Start()
    {
        slid.OnValueUpdated.AddListener((v) =>
        {
            int x = (int)(5 + 10 * v.NewValue);
            con.GetComponent<control>().setEdge(x);
            txt.GetComponent<Text>().text = x.ToString();
        });
    }
}
