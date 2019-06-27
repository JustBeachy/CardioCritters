using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoreInfoAnimal : MonoBehaviour
{
    public Text AnimalName;
    public Text BonusText;
    public GameObject PickedAnimal;
    public GameObject whoCreatedMe;
    public Text Rarity;
    // Start is called before the first frame update
    void Start()
    {
       
    }
    public void CloseWindow()
    {
        Destroy(gameObject);
    }
    public void AddToCraft()
    {
        Crafting.AnimalCraft.Add(whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon);//may need to add index to animal to track it
        Destroy(whoCreatedMe);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
