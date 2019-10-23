using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shop : MonoBehaviour
{
    public int goldCost;
    public int crateRarity;
    GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void BuyCrate()
    {
        player = GameObject.FindGameObjectWithTag("Player");

        if(player.GetComponent<Player>().gold>=goldCost) //if player has enough gold
        {
            if (player.GetComponent<Player>().slots[0] == null|| player.GetComponent<Player>().slots[1] == null || player.GetComponent<Player>().slots[2] == null) //check if empty slot before subtracting gold
                player.GetComponent<Player>().gold -= goldCost;
            player.GetComponent<Player>().CrateIntoInventory(0, crateRarity);
            
            
        }
    
    }
}
