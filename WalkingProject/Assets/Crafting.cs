﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Crafting : MonoBehaviour
{
    public GameObject newCrate;
    public static List<GameObject> AnimalCraft = new List<GameObject>();
    bool isShiny = false;
    
   
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CraftAnimal()
    {
        if ((int)Random.Range(1, 251 - Bonuses.AbinoEasier) <= 1) //check for albino
            isShiny = true;

        if (AnimalCraft[0].GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Common)
        {
            GameObject holder = AnimalLists.rares[Random.Range(0, AnimalLists.rares.Count - 1)];
            holder.GetComponent<AnimalStats>().Albino = isShiny;
            gameObject.GetComponent<Player>().Zoo.Add(holder);//craft a new rare animal
            gameObject.GetComponent<Player>().xp += 250 * Bonuses.xpMultiplier;
            gameObject.GetComponent<Player>().CheckLevelUp();
        }
        if (AnimalCraft[0].GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Rare)
        {
            GameObject holder = AnimalLists.epics[Random.Range(0, AnimalLists.epics.Count - 1)];
            holder.GetComponent<AnimalStats>().Albino = isShiny;
            gameObject.GetComponent<Player>().Zoo.Add(holder);//craft a new epic animal
            gameObject.GetComponent<Player>().xp += 500 * Bonuses.xpMultiplier;
            gameObject.GetComponent<Player>().CheckLevelUp();

        }
        if (AnimalCraft[0].GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Epic)
        {
            GameObject holder = AnimalLists.legendaries[Random.Range(0, AnimalLists.legendaries.Count - 1)];
            holder.GetComponent<AnimalStats>().Albino = isShiny;
            gameObject.GetComponent<Player>().Zoo.Add(holder);//craft a new legendary animal   
            gameObject.GetComponent<Player>().xp += 1000 * Bonuses.xpMultiplier;
            gameObject.GetComponent<Player>().CheckLevelUp();

        }

        foreach (GameObject cm in AnimalCraft) //delete the crafting materials
        {
            gameObject.GetComponent<Player>().Zoo.RemoveAt(cm.GetComponent<AnimalStats>().index); //animal deletes itself from the zoo list
        }
        AnimalCraft.Clear();//clear crafting list
        AnimalCraft.TrimExcess();


        gameObject.GetComponent<Player>().SaveGame();

    }

    public GameObject CraftCrate()
    {
        var createCrate = Instantiate(newCrate);
        float random = Random.Range(1+Bonuses.RarerCrates,101);

        if (random <= 70)
        {
            createCrate.GetComponent<Crate>().rarity = Crate.Rarity.Common;
           
        }
        if (random > 70 && random <= 95)
        {
            createCrate.GetComponent<Crate>().rarity = Crate.Rarity.Rare;

        }
        if (random > 95 && random <= 99)
        {
            createCrate.GetComponent<Crate>().rarity = Crate.Rarity.Epic;

        }
        if (random >= 100)
        {
            createCrate.GetComponent<Crate>().rarity = Crate.Rarity.Legendary;

        }

        foreach (GameObject cm in AnimalCraft) //delete the crafting materials
        {
            gameObject.GetComponent<Player>().Zoo.RemoveAt(cm.GetComponent<AnimalStats>().index); //animal deletes itself from the zoo list
        }
        AnimalCraft.Clear();//clear crafting list
        AnimalCraft.TrimExcess();



        gameObject.GetComponent<Player>().xp += 50*Bonuses.xpMultiplier; // move to where crafting occurs since infinity slot uses this method
        gameObject.GetComponent<Player>().CheckLevelUp();
        newCrate.GetComponent<Crate>().rarity = createCrate.GetComponent<Crate>().rarity;
        return createCrate; 
       

    }
}
