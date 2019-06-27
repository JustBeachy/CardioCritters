using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CraftingSlots : MonoBehaviour
{
    public int index;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Crafting.AnimalCraft.Count>index)
        {
            GetComponent<Image>().sprite = Crafting.AnimalCraft[index].GetComponent<AnimalStats>().Icon;//get animal icon for slot
        }
    }
}
