using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadInventory : MonoBehaviour
{

    public GameObject ListItemHere;
    // Start is called before the first frame update
    void Start()
    {
        ListItemHere.GetComponent<InventoryGUI>().LoadInventory(); //load the inventory
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
