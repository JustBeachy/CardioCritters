using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Donate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void LinkClick()
    {
        Application.OpenURL("https://www.teamtrees.org/");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
