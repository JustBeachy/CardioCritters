using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoreInfoAnimal : MonoBehaviour
{
    public Text AnimalName;
    public Text BonusText;
    public GameObject PickedAnimal;
    public GameObject whoCreatedMe;
    public Text Rarity;
    // Start is called before the first frame update
    void Start()
    {
       
    }
    public void CloseWindow()
    {
        Destroy(gameObject);
    }
    public void AddToCraft()
    {
       
        
        //start of get rid of non appropriate crafting types based on selection
        GameObject[] listitems = GameObject.FindGameObjectsWithTag("ListItem");

        if (ScreenState.currentScreen==ScreenState.Screen.CraftAnimal)
        {
            foreach (GameObject o in listitems)
            {
                if (o.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().rarity != whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().rarity
                    || o.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().Albino != whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().Albino)//check for matching rarity and albino trait
                { Destroy(o); }
            }
        }
        if (ScreenState.currentScreen==ScreenState.Screen.CraftAlbinoAnimal)
        {
            foreach (GameObject o in listitems)
            {
                if (o.GetComponent<InventoryGUI>().animalTiedToIcon.name != whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon.name) //check for matching names       
                    Destroy(o);
            }
        }
        //end of getting rid of non appropriate types based on selection
       

            if ((ScreenState.currentScreen == ScreenState.Screen.CraftCrate && Crafting.AnimalCraft.Count < 2)
                ||(ScreenState.currentScreen == ScreenState.Screen.CraftAlbinoAnimal || ScreenState.currentScreen == ScreenState.Screen.CraftAnimal) 
                && Crafting.AnimalCraft.Count < 5)//dont overflow other crafting list
            {
                Crafting.AnimalCraft.Add(whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon);//may need to add index to animal to track it
                Destroy(whoCreatedMe);
            }


    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
