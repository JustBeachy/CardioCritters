using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonAnimation : MonoBehaviour
{
   
    float gotox, gotoy;

    // Start is called before the first frame update
    void Start()
    {
        gotox = GetComponent<RectTransform>().localPosition.x;
        gotoy = GetComponent<RectTransform>().localPosition.y;

        GetComponent<RectTransform>().localPosition=new Vector3(0,0,0);

    }

    // Update is called once per frame
    void Update()
    {
        var xcheck = gameObject.GetComponent<RectTransform>().localPosition.x - gotox;

        if (xcheck-gotox>1)
        {
            gameObject.GetComponent<RectTransform>().localPosition += new Vector3((Mathf.Sign(gotox) * Time.deltaTime), 0, 0);
        }

        var ycheck = gameObject.GetComponent<RectTransform>().localPosition.y - gotoy;

        if (ycheck - gotoy > 1)
        {
            gameObject.GetComponent<RectTransform>().localPosition += new Vector3(0,(Mathf.Sign(gotoy) * Time.deltaTime*100), 0);
        }

    }
}
