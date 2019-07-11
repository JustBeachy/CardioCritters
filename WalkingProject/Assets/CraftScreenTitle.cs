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
            SubtitleText.text = "Slect 2 animals to use for crafting a new crate.";
        }
        if (ScreenState.currentScreen == ScreenState.Screen.CraftAnimal)
        {
            TitleText.text = "Craft an Animal";
            SubtitleText.text = "Slect 5 animals with the same rarity to get a new animal a rarity higher.";
        }
        if (ScreenState.currentScreen == ScreenState.Screen.CraftAlbinoAnimal)
        {
            TitleText.text = "Craft an Albino";
            SubtitleText.text = "Slect 5 of the same animal to get its albino form.";
        }
        if (ScreenState.currentScreen == ScreenState.Screen.AnimalSelect)
        {
            TitleText.text = "Select an Animal to be Your Pet";
            SubtitleText.text = "You will gain the bonus of the animal you select.";
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
