﻿
using System.Collections.Generic;
using UnityEngine;
using System.Collections;

public class Crate : MonoBehaviour
{
    public enum Rarity {Common, Rare, Epic, Legendary}
    public Rarity rarity = Rarity.Common;
    public float distancetoopen = 0;
    public float currentdistance = 0;
    bool isShiny = false;
    public int index = 0;
    public GameObject popUpScreen;
    public GameObject[] CrateModels;
    public GameObject child;
    bool flag = false;
    public GameObject animateTheCrate;

    //Reminder: Display DistanceToOpen with bonus

    public GameObject player;


    List<GameObject> commons = new List<GameObject>();
    List<GameObject> rares = new List<GameObject>();
    List<GameObject> epics = new List<GameObject>();
    List<GameObject> legendaries = new List<GameObject>();

    // Start is called before the first frame update
    void Start()
    {
        Update();
        commons = AnimalLists.commons;
        rares = AnimalLists.rares;
        epics = AnimalLists.epics;
        legendaries = AnimalLists.legendaries;

        ApplyRarity();

        


    }

    // Update is called once per frame
    void Update()
    {
        if (gameObject.tag == "PopUp")
        {
            gameObject.transform.Rotate(new Vector3(0, 90, 0) * Time.deltaTime);

        }
      

        if (rarity == Rarity.Common) //remove a 0 for testing
        {
            distancetoopen = 500;
        }
        if (rarity == Rarity.Rare)
        {
            distancetoopen = 1000;
        }
        if (rarity == Rarity.Epic)
        {
            distancetoopen = 1500;
        }
        if (rarity == Rarity.Legendary)
        {
            distancetoopen = 2000;
        }

        if(!flag)
        {
            flag = true;
            Instantiate(CrateModels[(int)gameObject.GetComponent<Crate>().rarity], gameObject.transform);
        }


    }

    public void ApplyRarity()
    {
      
    }

    public GameObject OpenCrate(bool forceAnt=false)
    {
        

        Crafting.AnimalCraft.Clear();//prevents crafting cancel bug
        Crafting.AnimalCraft.TrimExcess();

        player.GetComponent<Player>().slots[index] = null; //delete crate from slot

        if (forceAnt)//force ant for tutorial
            return commons[0];

        if ((int)Random.Range(1,(int)251/Bonuses.AbinoEasier) <=1) //check for albino
            isShiny = true;

        if (rarity==Rarity.Common)
        {
            player.GetComponent<Player>().xp += 50*Bonuses.xpMultiplier;
            player.GetComponent<Player>().CheckLevelUp();
            return commons[Random.Range(0,commons.Count)]; //get random animal from list

        }
        if (rarity == Rarity.Rare)
        {
            player.GetComponent<Player>().xp += 200 * Bonuses.xpMultiplier;
            player.GetComponent<Player>().CheckLevelUp();
            return rares[Random.Range(0, rares.Count)]; //get random animal from list
        }
        if (rarity == Rarity.Epic)
        {
            player.GetComponent<Player>().xp += 500 * Bonuses.xpMultiplier;
            player.GetComponent<Player>().CheckLevelUp();
            return epics[Random.Range(0, epics.Count)]; //get random animal from list
        }
        if (rarity == Rarity.Legendary)
        {
            player.GetComponent<Player>().xp += 1000 * Bonuses.xpMultiplier;
            player.GetComponent<Player>().CheckLevelUp();
            return legendaries[Random.Range(0, legendaries.Count)]; //get random animal from list
        }
        return null;

    }

    public void ApplyDistance(float dis,bool forceAnt=false)
    {
        currentdistance += dis;

        if(currentdistance>=distancetoopen/Bonuses.FasterCrates) //if crate should open
        {
            Handheld.Vibrate();
            GameObject holder = OpenCrate(forceAnt);
            holder.GetComponent<AnimalStats>().Albino = isShiny;//make a holder to assign albino chance
            player.GetComponent<Player>().Zoo.Add(holder);//unbox crate and add to inventory
            if (player.GetComponent<Player>().slots[0] == null)//give new crate if in infinity slot
                player.GetComponent<Player>().slots[0]=player.GetComponent<Crafting>().CraftCrate(-1,false);//mute notification on infini slot
           var popup = Instantiate(popUpScreen, GameObject.FindWithTag("Canvas").transform);//make popup screen
           var crateAnim = Instantiate(animateTheCrate, GameObject.FindWithTag("Canvas").transform);//make crate animationpopup screen
           popup.GetComponent<MoreInfoAnimal>().FillInfo(holder,true);//fill pop up screen
           crateAnim.GetComponent<CrateAnimation>().CrateOpeningAnimation(CrateModels[(int)gameObject.GetComponent<Crate>().rarity]); //fill crate animation
            //player.GetComponent<Player>().SaveGame();//save game *disabled due to multiple saves at a time if more than 1 crate
            Destroy(gameObject);//destroy crate

        }
        
    }
}
