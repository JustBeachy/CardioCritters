using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CraftingSlots : MonoBehaviour
{
    public int index;
    public Sprite empty;
    public Sprite lockedImage;
    public Text AlbinoTextEnable;
    public Image Locked;
    public Text Qmark;
    public Text Rarity;
    // Start is called before the first frame update
    void Awake()
    {
        Crafting.AnimalCraft.Clear();
        Crafting.AnimalCraft.TrimExcess();
    }

    // Update is called once per frame
    void Update()
    {



        if (Crafting.AnimalCraft.Count > index)
        {
            GetComponent<Image>().sprite = Crafting.AnimalCraft[index].GetComponent<AnimalStats>().Icon;//get animal icon for slot
            if (index == 0 && Crafting.AnimalCraft[index].GetComponent<AnimalStats>().Albino)
                AlbinoTextEnable.text = "Albino";
            if (index == 0 && ScreenState.currentScreen == ScreenState.Screen.CraftAlbinoAnimal)//if in albino crafting screen
            {
                Qmark.text = "";
                Locked.sprite = Crafting.AnimalCraft[index].GetComponent<AnimalStats>().Icon;//get animal icon for slot and replace the locked image
                AlbinoTextEnable.text = "Albino";
            }
            if (index == 0 && ScreenState.currentScreen == ScreenState.Screen.CraftAnimal)
            {
                GetRarityText();

            }

        }
        else
        {
            GetComponent<Image>().sprite = empty;
            if (index == 0)
            {
                AlbinoTextEnable.text = "";
                Rarity.text = "";
                Locked.sprite = lockedImage;
            }
        }

    }

    void GetRarityText()
    {
        int rar = (int)Crafting.AnimalCraft[index].GetComponent<AnimalStats>().rarity;
        if(rar==0)
        {
            Rarity.text = "Rare";
            Rarity.color = Color.blue;
        }
        if (rar == 1)
        {
            Rarity.text = "Epic";
            Rarity.color = Color.magenta;
        }
        if (rar == 2)
        {
            Rarity.text = "Legendary";
            Rarity.color = Color.yellow;
        }
        if (rar == 3)
        {
            Rarity.text = "Legendary";
            Rarity.color = Color.yellow;
        }


    }
}
