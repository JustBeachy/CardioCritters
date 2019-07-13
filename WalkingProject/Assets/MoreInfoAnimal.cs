using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoreInfoAnimal : MonoBehaviour
{
    public Text Title;
    public Text AnimalName;
    public Text BonusText;
    public GameObject PickedAnimal;
    public GameObject whoCreatedMe;
    public Text Rarity;
    public GameObject ScrollViewDestroyer;
    // Start is called before the first frame update
    void Start()
    {
       
    }
    public void CloseWindow()
    {
        Destroy(gameObject);
    }
    public void FillInfo(GameObject ob, bool isAnimal)
    {
        Destroy(GameObject.FindWithTag("PopUp"));
        var camIt = Instantiate(ob, new Vector3(-900, 900, 1200), Quaternion.identity); //spawn new pet to camera
        camIt.tag = "PopUp";

        if (isAnimal)
        {
            AnimalName.text = ob.name;
        BonusText.text = ob.GetComponent<AnimalStats>().BonusText;

        if (ob.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Common)
            Rarity.text = "Common";
        if (ob.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Rare)
            Rarity.text = "Rare";
        if (ob.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Epic)
            Rarity.text = "Epic";
        if (ob.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Legendary)
            Rarity.text = "Legendary";

            Title.text = "New Critter!";
        }
        else
        {
            Rarity.text = "";
            Title.text = "NewCrate!";
            string bonustext = (ob.GetComponent<Crate>().distancetoopen / 1000).ToString();
            BonusText.text = "Walk a total distance of " + bonustext + "km to open.";

            if (ob.GetComponent<Crate>().rarity == Crate.Rarity.Common)
            {
                AnimalName.text = "Common Crate";

            }
            if (ob.GetComponent<Crate>().rarity == Crate.Rarity.Rare)
            {
                AnimalName.text = "Rare Crate";
            }
            if (ob.GetComponent<Crate>().rarity == Crate.Rarity.Epic)
            {
                AnimalName.text = "Epic Crate";
            }
            if (ob.GetComponent<Crate>().rarity == Crate.Rarity.Legendary)
            {
                AnimalName.text = "Legendary Crate";
            }
        }

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

        if (ScreenState.currentScreen == ScreenState.Screen.AnimalSelect)
        {
            GameObject player = GameObject.FindWithTag("Player");
            foreach (GameObject g in player.GetComponent<Player>().Zoo)
            {
                g.GetComponent<AnimalStats>().isActive = false;
            }
            player.GetComponent<Player>().SelectBuddy(PickedAnimal); //apply new buddy
            ScrollViewDestroyer = GameObject.FindWithTag("ScrollView");
            Destroy(ScrollViewDestroyer);//go back to main screen after
            ScreenState.currentScreen = ScreenState.Screen.Home;
            player.GetComponent<Player>().SaveGame();

        }


    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
