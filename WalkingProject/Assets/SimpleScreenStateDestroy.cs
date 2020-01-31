using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleScreenStateDestroy : MonoBehaviour
{
    public ScreenState.Screen[] stateToStayIn;
    public GameObject objectToDestroy;
    bool destroyFlag = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        foreach (ScreenState.Screen g in stateToStayIn)
        {
            if (ScreenState.currentScreen != g)
            {
                destroyFlag = true;
            }
                if (ScreenState.currentScreen == g)
            {
                destroyFlag = false;
                break;
            }
        }

        if (destroyFlag)
            Destroy(objectToDestroy);
    }
}
