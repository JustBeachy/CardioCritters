using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleCreate : MonoBehaviour
{
    public GameObject ObjectToCreate;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void CreateObject()
    {
        Instantiate(ObjectToCreate);
    }

    public void CreateObjectWithParent()
    {
        Instantiate(ObjectToCreate,transform.parent);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
