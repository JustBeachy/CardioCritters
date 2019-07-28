using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class crateUI : MonoBehaviour
{
    public Sprite Ccrate, Rcrate, Ecrate, Lcrate;
    public int crateSlotNum;
    public GameObject player;
    public Text crateText;
    public Image progressBar;
    public Sprite Empty;
    // Start is called before the first frame update
    void Start()
    {

    }

    

    // Update is called once per frame
    void Update()
    {
        UpdateCrateUI();
    }

    public Sprite GetSplash()
    {
        if (player.GetComponent<Player>().slots[crateSlotNum].GetComponent<Crate>().rarity == Crate.Rarity.Common) //check specific crate slot's rarity
            return Ccrate;
        if (player.GetComponent<Player>().slots[crateSlotNum].GetComponent<Crate>().rarity == Crate.Rarity.Rare) //check specific crate slot's rarity
            return Rcrate;
        if (player.GetComponent<Player>().slots[crateSlotNum].GetComponent<Crate>().rarity == Crate.Rarity.Epic) //check specific crate slot's rarity
            return Ecrate;
        if (player.GetComponent<Player>().slots[crateSlotNum].GetComponent<Crate>().rarity == Crate.Rarity.Legendary) //check specific crate slot's rarity
            return Lcrate;

        return Ccrate;
    }

    public void UpdateCrateUI()
    {
        if (player.GetComponent<Player>().slots[crateSlotNum] != null) //if slot isnt empty
        {
            gameObject.GetComponent<Image>().sprite = GetSplash();
            float cd = player.GetComponent<Player>().slots[crateSlotNum].GetComponent<Crate>().currentdistance / 1000; //current distance
            float dto = player.GetComponent<Player>().slots[crateSlotNum].GetComponent<Crate>().distancetoopen/Bonuses.FasterCrates / 1000; //distance to open
            crateText.text = cd.ToString("0.##") +" / " +dto.ToString("0.##") +"km";
            progressBar.fillAmount = cd / dto;

        }
        else
        {
            gameObject.GetComponent<Image>().sprite = Empty;
            crateText.text = "Empty";
            progressBar.fillAmount = 0;
        }

    }
}
