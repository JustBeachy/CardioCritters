using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonAnimation : MonoBehaviour
{
    public int direction;
    float gotox, gotoy;

    // Start is called before the first frame update
    void Start()
    {
        gotoy = transform.localPosition.y;
        gotox = transform.localPosition.x;
       

        transform.localPosition=new Vector3(0,50,0);

    }

    // Update is called once per frame
    void Update()
    {
        var xcheck = transform.localPosition.x;

        if (direction == 1)
        {
            if (xcheck - gotox > 1)
            {
                transform.localPosition += new Vector3((Mathf.Sign(gotox) * 1200 * Time.deltaTime), 0, 0);
            }
        }
        if (direction == 2)
        {
            if (xcheck - gotox < 1)
            {
                transform.localPosition += new Vector3((Mathf.Sign(gotox) * 1200 * Time.deltaTime), 0, 0);
            }
        }

        var ycheck = transform.localPosition.y;

        if (direction == 3)
        {
            if (ycheck - gotoy > 1)
            {
                transform.localPosition += new Vector3(0, (Mathf.Sign(gotoy) * 1200 * Time.deltaTime), 0);
            }
        }

        if (direction == 4)
        {
            if (ycheck - gotoy < 1)
            {
                transform.localPosition += new Vector3(0, (Mathf.Sign(gotoy) * 1200 * Time.deltaTime), 0);
            }
        }
    }
}
