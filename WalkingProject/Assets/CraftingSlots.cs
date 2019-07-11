using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CraftingSlots : MonoBehaviour
{
    public int index;
    public Sprite empty;
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
        }
        else
            GetComponent<Image>().sprite = empty;

    }
}
