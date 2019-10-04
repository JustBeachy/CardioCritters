using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RotatingBG : MonoBehaviour
{
    public GameObject toRotate;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        toRotate.GetComponent<RectTransform>().Rotate(new Vector3(0, 0, 50)*Time.deltaTime);
    }
}
