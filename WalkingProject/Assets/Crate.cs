using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

        if (rarity == Rarity.Common)
        {
            distancetoopen = 1000;
        }
        if (rarity == Rarity.Rare)
        {
            distancetoopen = 2500;
        }
        if (rarity == Rarity.Epic)
        {
            distancetoopen = 6500;
        }
        if (rarity == Rarity.Legendary)
        {
            distancetoopen = 15000;
        }

        if(!flag)
        {
            Instantiate(CrateModels[(int)gameObject.GetComponent<Crate>().rarity],gameObject.transform);
            flag = true;
        }


    }

    public void ApplyRarity()
    {
      
    }

    public GameObject OpenCrate()
    {

        player.GetComponent<Player>().slots[index] = null; //delete crate from slot

        if ((int)Random.Range(1,251-Bonuses.AbinoEasier) <=1) //check for albino
            isShiny = true;

        if (rarity==Rarity.Common)
        {
            player.GetComponent<Player>().xp += 100*Bonuses.xpMultiplier;
            player.GetComponent<Player>().CheckLevelUp();
            return commons[Random.Range(0,commons.Count)]; //get random animal from list

        }
        if (rarity == Rarity.Rare)
        {
            player.GetComponent<Player>().xp += 250 * Bonuses.xpMultiplier;
            player.GetComponent<Player>().CheckLevelUp();
            return rares[Random.Range(0, rares.Count)]; //get random animal from list
        }
        if (rarity == Rarity.Epic)
        {
            player.GetComponent<Player>().xp += 650 * Bonuses.xpMultiplier;
            player.GetComponent<Player>().CheckLevelUp();
            return epics[Random.Range(0, epics.Count)]; //get random animal from list
        }
        if (rarity == Rarity.Legendary)
        {
            player.GetComponent<Player>().xp += 1500 * Bonuses.xpMultiplier;
            player.GetComponent<Player>().CheckLevelUp();
            return legendaries[Random.Range(0, legendaries.Count)]; //get random animal from list
        }
        return null;

    }

    public void ApplyDistance(float dis)
    {
        currentdistance += dis;

        if(currentdistance>=distancetoopen/Bonuses.FasterCrates)
        {
            GameObject holder = OpenCrate();
            holder.GetComponent<AnimalStats>().Albino = isShiny;//make a holder to assign albino chance
            player.GetComponent<Player>().Zoo.Add(holder);//unbox crate and add to inventory
            if (player.GetComponent<Player>().slots[0] == null)//give new crate if in infinity slot
                player.GetComponent<Player>().slots[0]=player.GetComponent<Crafting>().CraftCrate();
           var popup = Instantiate(popUpScreen, GameObject.FindWithTag("Canvas").transform);//make popup screen
            popup.GetComponent<MoreInfoAnimal>().FillInfo(holder,true);//fill pop up screen
            player.GetComponent<Player>().SaveGame();//save game
            Destroy(gameObject);//destroy crate

        }
        
    }
}
