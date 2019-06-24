using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadInventory : MonoBehaviour
{

    public GameObject ListItemHere;
    public GameObject Craft2;
    public GameObject Craft5;
    // Start is called before the first frame update
    void Start()
    {
        ListItemHere.GetComponent<InventoryGUI>().LoadInventory(); //load the inventory

        if (ScreenState.currentScreen == ScreenState.Screen.CraftCrate) //load the bottom visuals for crafting
            Instantiate(Craft2,transform.parent);
        if (ScreenState.currentScreen == ScreenState.Screen.CraftAlbinoAnimal || ScreenState.currentScreen == ScreenState.Screen.CraftAnimal)
             Instantiate(Craft5, transform.parent);
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
