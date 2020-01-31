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

        Crafting.AnimalCraft.Clear();//prevents crafting cancel bug
        Crafting.AnimalCraft.TrimExcess();

        Destroy(toDestroy);
    }


    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
            DestroyObject();
    }
}
