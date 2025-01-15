using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class data : MonoBehaviour
{
    // Start is called before the first frame update
    public float lenX;
    public float lenY;
    public float lenZ;
    public float vol;
    public string s;
    public float scale = 100.0f;
    public Vector3[] pts;
    public GameObject[] g;
    GameObject gd;

    void Start()
    {
        pts = new Vector3[8];
        pts[0] = new Vector3(0.5f, 0.5f, 0.5f);
        pts[1] = new Vector3(0.5f, 0.5f, -0.5f);
        pts[2] = new Vector3(-0.5f, 0.5f, -0.5f);
        pts[3] = new Vector3(-0.5f, 0.5f, 0.5f);
        pts[4] = new Vector3(0.5f, -0.5f, 0.5f);
        pts[5] = new Vector3(0.5f, -0.5f, -0.5f);
        pts[6] = new Vector3(-0.5f, -0.5f, -0.5f);
        pts[7] = new Vector3(-0.5f, -0.5f, 0.5f);
        gd = GameObject.Find("Ground");
        //lastPos = new Vector3(0.0f, 0.0f, 0.4f);
    }

    // Update is called once per frame
    void Update()
    {
        var mr = GetComponent<Renderer>();
        mr.material = new Material(Shader.Find("Diffuse"));
        mr.material.SetColor("_Color", Color.white);

        if (transform.hasChanged)
        {
            //Debug.Log("Transform has changed");
            lenX = scale * transform.localScale.x;
            lenZ = scale * transform.localScale.z;
            lenY = scale *transform.localScale.y;
            vol = lenX * lenY * lenZ;
            s = "X-Length=" + lenX + "\nY-Length" + lenY + "\nZ-Length" + lenZ + "\nVolume=" + vol;

            int n = pts.Length;
            for (int i = 0; i < n; i++)
            {
                pts[i] = transform.TransformPoint(pts[i]);
                //g[i].transform.position = pts[i];
            }

            transform.hasChanged = false;

            if (transform.position.y < gd.transform.position.y + transform.localScale.y/2)
            {
                transform.position = new Vector3(transform.position.x, gd.transform.position.y+transform.localScale.y/2, transform.position.z);
            }
        }
    }

    protected virtual float getVol()
    {
        return 0;
    }
}
