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
            gameObject.transform.Rotate(new Vector3(0, 90, 0)*Time.deltaTime);
        }
    }

 

    public void ApplyAlbinoMaterial()
    {
        if (Albino)
        {
            gameObject.GetComponent<MeshRenderer>().materials[albinoIndex].color = Color.white; //if albino, set certain material to white color.
           
           

        }
    }

    public void DoubleBonus()
    {
        if(Albino)
        {
            if (bonusAmount <= 2.5)
            {
                bonusAmount -= 1; //so the lower bonuses multiply correctly
            }
            bonusAmount *= 2;
            if (bonusAmount <= 2.5)
            {
                bonusAmount += 1;
            }
        }
    }

    public void ApplyBonus()
    {
        DoubleBonus();

        for (int i = 0; i < bonus.Count; i++)
        {
            if (bonus[i] == Bonus.RarerCrates)
                Bonuses.RarerCrates = bonusAmount;

            if (bonus[i] == Bonus.FasterCrates)
                Bonuses.FasterCrates = bonusAmount;

            if (bonus[i] == Bonus.Crafting2x)
                Bonuses.CraftingSlots2x = bonusAmount;

            if (bonus[i] == Bonus.AlbinoChance)
                Bonuses.AbinoEasier = bonusAmount;

            if (bonus[i] == Bonus.MoreXP)
                Bonuses.xpMultiplier = bonusAmount;

            if (bonus[i] == Bonus.ExtraGold)
                Bonuses.goldMultiplier = bonusAmount;
        }

    }
}
