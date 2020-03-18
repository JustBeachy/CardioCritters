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
    public GameObject popUpScreen;
    public GameObject ScrollView;
    public GameObject TutorialManager;
    int run3times = 0;
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
            click2craft.text = "TAP TO CRAFT!";
            click2craft.color = Color.cyan;
            click2craft.fontSize = 20;
        }
        else
        {
            cancraft = false;
            //click2craft.text = "?";
            //click2craft.color = Color.white;
            //click2craft.fontSize = 70;
        }

        
    }

    public void CraftCrate()
    {
        if (cancraft)
        {
            if (GameObject.Find("Tut5(Clone)") != null)
            {
                TutorialManager = GameObject.FindGameObjectWithTag("TM");
                TutorialManager.GetComponent<Tutorial>().FinalStep();//go to final tutorial step
            }

            player = GameObject.FindGameObjectWithTag("Player");
            player.GetComponent<Player>().CrateIntoInventory(1);
            ScrollView = GameObject.FindGameObjectWithTag("ScrollView");
            Destroy(ScrollView);
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
                newAlbino = newAlbino.GetComponent<AnimalStats>().albinoform;
                player.GetComponent<Player>().Zoo.Add(newAlbino);
                player.GetComponent<Player>().xp += 500 * Bonuses.xpMultiplier;

                foreach (GameObject cm in Crafting.AnimalCraft) //delete the crafting materials
                {
                    parser = 0;
                    foreach (GameObject a in player.GetComponent<Player>().Zoo)
                    {

                        a.GetComponent<AnimalStats>().index = parser; //assign index to animals so they can delete themselves in crafting (fixed an issue with removeAt)
                        parser++;
                    }
                    if (run3times >= 3)//exit out of loop early if albinos
                        break;
                    player.GetComponent<Player>().Zoo.RemoveAt(cm.GetComponent<AnimalStats>().index); //animal deletes itself from the zoo list
                    run3times++;
                }
                Crafting.AnimalCraft.Clear();//clear crafting list
                Crafting.AnimalCraft.TrimExcess();

                var popup = Instantiate(popUpScreen, GameObject.FindWithTag("Canvas").transform);//make popup screen
                popup.GetComponent<MoreInfoAnimal>().FillInfo(newAlbino, true);//fill pop up screen
                run3times = 0;
            }
            player.GetComponent<Player>().SaveGame();
        }
    }

  
}
