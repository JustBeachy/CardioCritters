using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConfirmMessage : MonoBehaviour
{
    public GameObject shopItemClicked;
    public Text PopupText;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void BuyFromShopItem()
    {
        shopItemClicked.GetComponent<Shop>().Confirmed();
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
