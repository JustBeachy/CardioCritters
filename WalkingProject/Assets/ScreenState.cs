﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenState : MonoBehaviour
{
    public enum Screen {Home, Settings, Inventory, Shop, Crafting };
    public static Screen currentScreen = Screen.Home;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}