using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FilterInventory : MonoBehaviour
{
    public enum FilterType { RarerCrates, FasterCrates, ExtraGold, MoreXP, AlbinoChance, Crafting2x, None }
    public FilterType thisFilter;
    bool dontclearfilter = false;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        if (ScreenState.currentScreen != ScreenState.Screen.AnimalSelect)
            Destroy(gameObject);
    }

    public void SelectFilter()
    {

        var filterList= GameObject.FindGameObjectsWithTag("Filter");
        foreach (GameObject g in filterList)
        {
            g.GetComponent<Image>().color = Color.white;//reset filter colors
            if(g!=gameObject)
            g.GetComponent<FilterInventory>().dontclearfilter = false;//reset filter colors
        }

        if(dontclearfilter)
        {
            GetComponent<Image>().color = Color.white;
            dontclearfilter = false;
        }
        else
        {
            GetComponent<Image>().color = Color.black;
            dontclearfilter = true;
        }
        




        Filter();


    }

    public void Filter()
    {
        GameObject[] inventoryList = GameObject.FindGameObjectsWithTag("ListItem");


        for (int i = 0; i < inventoryList.Length; i++)
        {
            if (i == inventoryList.Length - 1)
                inventoryList[i].GetComponent<InventoryGUI>().LoadInventory(dontclearfilter,(int)thisFilter); //destroy all but 1, then re-create inventory with filter
            else
                Destroy(inventoryList[i]);
        }
    }
        
}
