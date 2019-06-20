using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UISimpleDestroy : MonoBehaviour
{
    public GameObject toDestroy;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void DestroyObject()
    {
        Destroy(toDestroy);
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
