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
        }
    }

    public void CraftCrate()
    {
        if (cancraft)
        {
            player.GetComponent<Player>().CrateIntoInventory(0);
        }
    }

public void CraftAnimal()
    {
        if(cancraft)
        {

        }
    }
}
