using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalStats : MonoBehaviour
{
   
    public Sprite Icon;
    public enum Rarity { Common, Rare, Epic, Legendary };
    public Rarity rarity = Rarity.Common;
    public string BonusText = "";
    public bool Albino = false;
    public enum Bonus { RarerCrates, FasterCrates, ExtraGold, MoreXP, AlbinoChance, Crafting2x}
    public List<Bonus> bonus;
    public float bonusAmount = 0;
    public bool isActive = false;
    public int index = 0;
    public int albinoIndex = 0;
    public GameObject albinoform;
    public GameObject normalform;
    // Start is called before the first frame update
    void Start()
    {
        ApplyAlbinoMaterial();

    }

    // Update is called once per frame
    void Update()
    {
        if(gameObject.tag=="Pet"||gameObject.tag=="PopUp")
        {
            gameObject.transform.Rotate(new Vector3(0, 90, 0)*Time.deltaTime,Space.World);
        }
    }

 

    public void ApplyAlbinoMaterial()
    {
        if (Albino)
        {
            gameObject.GetComponent<MeshRenderer>().materials[albinoIndex].color = Color.white; //if albino, set certain material to white color.
           
           

        }
    }

    public float DoubleBonus()
    {
        float multipliedBonus=0;

        multipliedBonus = bonusAmount;
        if(Albino)
        {
            if (multipliedBonus <= 2.5)
            {
                multipliedBonus -= 1; //so the lower bonuses multiply correctly
            }
            multipliedBonus *= 2;
            if (multipliedBonus <= 2.5)
            {
                multipliedBonus += 1;
            }

            return multipliedBonus;
        }
        return multipliedBonus;
    }

    public void ApplyBonus()
    {
       float multipliedBonus=DoubleBonus();

        for (int i = 0; i < bonus.Count; i++)
        {
            if (bonus[i] == Bonus.RarerCrates)
                Bonuses.RarerCrates = multipliedBonus;

            if (bonus[i] == Bonus.FasterCrates)
                Bonuses.FasterCrates = multipliedBonus;

            if (bonus[i] == Bonus.Crafting2x)
                Bonuses.CraftingSlots2x = multipliedBonus;

            if (bonus[i] == Bonus.AlbinoChance)
                Bonuses.AbinoEasier = multipliedBonus;

            if (bonus[i] == Bonus.MoreXP)
                Bonuses.xpMultiplier = multipliedBonus;

            if (bonus[i] == Bonus.ExtraGold)
                Bonuses.goldMultiplier = multipliedBonus;
        }

    }
}
