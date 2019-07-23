using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimateCrate : MonoBehaviour
{
    public bool start = false;
    public float spin = 10;

    // Start is called before the first frame update
    void Start()
    {

    }

    public void OpenNow()
    {
        start = true;
    }

    // Update is called once per frame
    void Update()
    {
        if(start)
        {

            spin *= 1.1f;
            gameObject.transform.Rotate(new Vector3(0, spin) * Time.deltaTime);

        }
        else
        {
            // floaty animation?
        }
    }
}
