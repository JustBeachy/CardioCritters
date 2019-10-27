using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialPickOne : MonoBehaviour
{
    public GameObject Dog;
    public GameObject Cat;
    GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");   
    }
    public void PickedOne(int which)//1=dog, 2=cat
    {
        player.GetComponent<Player>().CrateIntoInventory(0,1); //add crate, force as common;
        player.GetComponent<Player>().tutorialDone = true;
        if (which == 1)
        {
            player.GetComponent<Player>().Zoo.Add(Dog);
            player.GetComponent<Player>().SelectBuddy(Dog);
        }
        else
        {
            player.GetComponent<Player>().Zoo.Add(Cat);
            player.GetComponent<Player>().SelectBuddy(Cat);
        }

        

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
