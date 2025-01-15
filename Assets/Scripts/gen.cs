using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
public class gen : MonoBehaviour
{
    GameObject obj;
    Mesh mesh;
    Vector3[] vert;
    int[] trig;
    int edge;

    // Start is called before the first frame update
    public void getObj(GameObject ob, int e)
    {
        obj = ob;
        edge = e;
        createMesh();
    }

    public void setEdge(float e)
    {
        edge = (int)(10 * e);
    }

    void createMesh()
    {
        //Debug.Log("Mesh is created");
        mesh = new Mesh();
        var mf = obj.AddComponent<MeshFilter>();
        mf.mesh=mesh;
        obj.AddComponent<MeshRenderer>();

        var col = obj.AddComponent<BoxCollider>();
        col.center = new Vector3(0, 0, 0);
        float val = 1f/Mathf.Sin(Mathf.PI / edge);
        col.size = new Vector3(val, 1f, val);

        createShape();
        UpdateMesh();
    }

    void createShape()
    {
        int pts = 2 * edge + 2;
        float side = 0.5f / Mathf.Sin(Mathf.PI / edge);
        vert = new Vector3[pts];

        vert[0] = new Vector3(0, 0.5f, 0);
        vert[edge+1]= new Vector3(0, -0.5f, 0);
        for (int j=0;j<edge;j++)
        {
            vert[j+1] = new Vector3(side * Mathf.Cos((j* 2 * Mathf.PI) / edge),0.5f, -1* side * Mathf.Sin((j * 2 * Mathf.PI) / edge));
            vert[j + edge + 2] = new Vector3( side * Mathf.Cos((j * 2* Mathf.PI) / edge), -0.5f, -1 * side * Mathf.Sin((j * 2* Mathf.PI) / edge));

            var sp = obj.AddComponent<SphereCollider>();
            sp.center = vert[j+1];
            sp.radius = 0.2f;

            var sp2 = obj.AddComponent<SphereCollider>();
            sp2.center = vert[j + edge + 2];
            sp2.radius = 0.2f;
        }

        trig = new int[3*4 * edge];
        int i = 0;
        for(i=0;i<edge-1;i++)
        {
            trig[12 * i] = 0;
            trig[12 * i + 1] = i + 1;
            trig[12 * i + 2] = i + 2;

            trig[12 * i + 3] = edge + 2 + i;
            trig[12 * i + 4] = edge + 1;
            trig[12 * i + 5] = edge + 3 + i;
            

            trig[12 * i + 6] = i + 2;
            trig[12 * i + 7] = i + 1;
            trig[12 * i + 8] = edge + 3 + i;

            trig[12 * i + 9] = edge + 2 + i;
            trig[12 * i + 10] = edge + 3 + i;
            trig[12 * i + 11] = i + 1;
        }

        trig[12 * i] = 0;
        trig[12 * i + 1] = i+1;
        trig[12 * i + 2] = 1;

        trig[12 * i + 3] = 2 * i + 3;
        trig[12 * i + 4] = i + 2;
        trig[12 * i + 5] = i + 3;

        trig[12 * i + 6] = 1;
        trig[12 * i + 7] = i + 1;
        trig[12 * i + 8] = i + 3;

        trig[12 * i + 9] = 2*i + 3;
        trig[12 * i + 10] = i + 3;
        trig[12 * i + 11] = i + 1;
    }

    void UpdateMesh()
    {
        mesh.Clear();

        mesh.vertices = vert;
        mesh.triangles = trig;
        mesh.RecalculateNormals();
    }
}
