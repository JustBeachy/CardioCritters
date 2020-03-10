﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryGUI : MonoBehaviour
{
    public GameObject player;
    public GameObject Canvas;
    public List<GameObject> zooList;
    int parser=0;
    public GameObject listItem;
    public Sprite locked;
    public bool hide = false;
    public GameObject animalTiedToIcon;
    public bool showUnknown = true;
    public GameObject SelectionScreen;
    public string rarity;
    bool isClickedOn = false;
    public Text albinoText;
    GameObject scrollView;
    int dexcount = 0;
   

    
    // Start is called before the first frame update
    void Awake()
    {
        player = GameObject.FindWithTag("Player");
        scrollView = GameObject.FindWithTag("ScrollView");

    }

    // Update is called once per frame
    void Update()
    {


        if (hide)
        {
            gameObject.SetActive(false);
        }
    }

    public string SetRarityText(GameObject g)
    {
        if(g.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().rarity==AnimalStats.Rarity.Common)
            return "Common";
        if (g.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Rare)
            return "Rare";
        if (g.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Epic)
            return "Epic";
        if (g.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Legendary)
            return "Legendary";

        return "common";

    }

    public Color SetColor(GameObject g)
    {


        if (g.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Common)
        {

            return Color.white;
        }
        if (g.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Rare)
        {
            
            return Color.blue;
        }
        if (g.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Epic)
        {
            
            return Color.magenta;
        }
        if (g.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Legendary)
        {
            
            return Color.yellow;
        }

        return Color.red;
    }

    public void ShowUnknown()
    {
        showUnknown = !showUnknown;
        LoadInventory();
    }


     public void WhenClicked()//when clicked
    {
        if (GetComponent<Image>().sprite != locked) //make sure it isnt an unknoown
        {
            var moreinfo = Instantiate(SelectionScreen); //more info screen
            moreinfo.GetComponent<MoreInfoAnimal>().whoCreatedMe = gameObject;
            moreinfo.GetComponent<MoreInfoAnimal>().PickedAnimal = gameObject.GetComponent<InventoryGUI>().animalTiedToIcon;
            moreinfo.transform.SetParent(GameObject.FindWithTag("Canvas").transform, false);
            moreinfo.GetComponent<MoreInfoAnimal>().AnimalName.text = animalTiedToIcon.name;
            moreinfo.GetComponent<MoreInfoAnimal>().BonusText.text = animalTiedToIcon.GetComponent<AnimalStats>().BonusText;
            moreinfo.GetComponent<MoreInfoAnimal>().Rarity.text = rarity;
            moreinfo.GetComponent<MoreInfoAnimal>().FillInfo(gameObject.GetComponent<InventoryGUI>().animalTiedToIcon,true);
            isClickedOn = true;
        }

      
       
    }

    public void Cancelled()
    {
        isClickedOn = false;
    }

    public void HitYesOnSelect()
    {
        Crafting.AnimalCraft.Add(animalTiedToIcon);

    }

    public void LoadInventory(bool filter = false, int filterType=0)
    {
        foreach (GameObject a in player.GetComponent<Player>().Zoo)
        {

            a.GetComponent<AnimalStats>().index = parser; //assign index to animals so they can delete themselves in crafting -should be only spot in code that assigns this
            parser++;
        }
        parser = 0;

            zooList = player.GetComponent<Player>().Zoo;

        if(zooList!=null)
        {
            dexcount = 0; //reset dex counter
            string nameCompare = "";
            for (int i = 0; i < AnimalLists.AllAnimals.Count; i++) //loop through animal dictionary
            {

                if (zooList.Contains(AnimalLists.AllAnimals[i])||
                    zooList.Contains(AnimalLists.AllAnimals[i].GetComponent<AnimalStats>().albinoform))
                {
                    foreach (GameObject sameAnim in zooList) //loop through inventory
                    {
                        if ((sameAnim == AnimalLists.AllAnimals[i]||
                            sameAnim == AnimalLists.AllAnimals[i].GetComponent<AnimalStats>().albinoform))//&&!sameAnim.GetComponent<AnimalStats>().isActive)//if animal is in dictionary and is not the pet
                        {
                            
                            if (ScreenState.currentScreen == ScreenState.Screen.CraftAlbinoAnimal && sameAnim.GetComponent<AnimalStats>().Albino == true) //skip if albino form in albino crafting
                                continue;
                            if (filter&&(int)sameAnim.GetComponent<AnimalStats>().bonus[0]!=filterType) //skip if doesn't match filter type
                                continue;

                            var toList = Instantiate(listItem, new Vector2(1f, 1f), Quaternion.identity); //display animal
                            toList.GetComponent<InventoryGUI>().animalTiedToIcon = sameAnim; //tie animal to icon for sorting and clicking
                            toList.GetComponent<InventoryGUI>().rarity = SetRarityText(toList); //set raarity text
                            AnimalLists.iconList.Add(toList); //add to a list for sorting
                            toList.GetComponent<Image>().sprite = zooList[parser].GetComponent<AnimalStats>().Icon; //icon image
                            toList.GetComponentInChildren<Text>().text = zooList[parser].name; //text name
                            toList.GetComponentInChildren<Text>().color = SetColor(AnimalLists.AllAnimals[i]); //border color
                            toList.transform.parent = transform.parent;

                            if(toList.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().Albino)
                            {
                                toList.GetComponent<InventoryGUI>().albinoText.text = "Albino";
                            }
                            
                            if(nameCompare != sameAnim.name && sameAnim.GetComponent<AnimalStats>().Albino == false) //if new name and not albino, add 1 to dex counter
                            {
                                nameCompare = sameAnim.name;
                                dexcount++;
                            }
                            

                        }
                        parser++;
                    }
                    parser = 0;
                }
                if(!filter)//if filter is off, write dex count
                scrollView.GetComponent<LoadInventory>().DexCount.text = dexcount.ToString() + " out of " + AnimalLists.AllAnimals.Count + "\n Critters collected.";
               /* else
                {
                    if (showUnknown&&ScreenState.currentScreen==ScreenState.Screen.AnimalSelect)
                    {
                        var toList = Instantiate(listItem, new Vector2(1f, 1f), Quaternion.identity); //display locked animal
                        toList.GetComponent<Image>().sprite = locked;
                        AnimalLists.iconList.Add(toList);//add to a list for sorting
                        toList.GetComponentInChildren<Text>().text = "Unknown";
                        toList.GetComponentInChildren<Text>().color = SetColor(AnimalLists.AllAnimals[i]);
                        toList.transform.parent = transform.parent;
                    }

                }*/
            }

        }

        parser = 0;
        Destroy(gameObject);
    }
}

        
   


 
