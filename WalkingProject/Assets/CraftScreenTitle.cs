using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CraftScreenTitle : MonoBehaviour
{
    // Start is called before the first frame update
    public Text TitleText, SubtitleText;

    void Awake()
    {
        if(ScreenState.currentScreen==ScreenState.Screen.CraftCrate)
        {
            TitleText.text = "Craft a Crate";
            SubtitleText.text = "Craft 2 critters to get a new crate of any rarity.";
        }
        if (ScreenState.currentScreen == ScreenState.Screen.CraftAnimal)
        {
            TitleText.text = "Craft an Animal";
            SubtitleText.text = "Craft 5 critters with the same rarity to get a new critter one rarity higher.";
        }
        if (ScreenState.currentScreen == ScreenState.Screen.CraftAlbinoAnimal)
        {
            TitleText.text = "Craft an Albino";
            SubtitleText.text = "Craft 5 of the same critter to get its albino form. Albino's bonuses are doubled.";
        }
        if (ScreenState.currentScreen == ScreenState.Screen.AnimalSelect)
        {
            TitleText.text = "Select a critter to be your pet";
            SubtitleText.text = "You will gain the bonus of the critter you select.";
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
