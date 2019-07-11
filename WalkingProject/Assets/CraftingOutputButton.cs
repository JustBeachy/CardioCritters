using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CraftingOutputButton : MonoBehaviour
{
    public GameObject player;
    public Text click2craft;
    public bool cancraft = false;
    public int amountToCraft;
    int parser = 0;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Crafting.AnimalCraft.Count == amountToCraft)
        {
            cancraft = true;
            click2craft.text = "CLICK TO CRAFT!";
            click2craft.color = Color.cyan;
            click2craft.fontSize = 20;
        }
        else
        {
            cancraft = false;
            click2craft.text = "?";
            click2craft.color = Color.white;
            click2craft.fontSize = 70;
        }
    }

    public void CraftCrate()
    {
        if (cancraft)
        {
            player = GameObject.FindGameObjectWithTag("Player");
            player.GetComponent<Player>().CrateIntoInventory(0);
        }
    }

public void CraftAnimal()
    {
        if(cancraft)
        {
            if (ScreenState.currentScreen == ScreenState.Screen.CraftAnimal)
            {
                bool isShiny = Crafting.AnimalCraft[0].GetComponent<AnimalStats>().Albino;
                player = GameObject.FindGameObjectWithTag("Player");
                player.GetComponent<Crafting>().CraftAnimal(isShiny); //force albino
            }
            if (ScreenState.currentScreen == ScreenState.Screen.CraftAlbinoAnimal)
            {
                player = GameObject.FindGameObjectWithTag("Player");
                GameObject newAlbino = Crafting.AnimalCraft[0];
                newAlbino.GetComponent<AnimalStats>().Albino = true;
                player.GetComponent<Player>().Zoo.Add(newAlbino);

                foreach (GameObject cm in Crafting.AnimalCraft) //delete the crafting materials
                {
                    parser = 0;
                    foreach (GameObject a in player.GetComponent<Player>().Zoo)
                    {

                        a.GetComponent<AnimalStats>().index = parser; //assign index to animals so they can delete themselves in crafting (fixed an issue with removeAt)
                        parser++;
                    }
                    player.GetComponent<Player>().Zoo.RemoveAt(cm.GetComponent<AnimalStats>().index); //animal deletes itself from the zoo list
                }
                Crafting.AnimalCraft.Clear();//clear crafting list
                Crafting.AnimalCraft.TrimExcess();
            }
            player.GetComponent<Player>().SaveGame();
        }
    }

  
}
