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
    public enum Bonus { RarerCrates, FasterCrates, ExtraSlots, ExtraGold, MoreXP, AlbinoChance, Crafting2x}
    public List<Bonus> bonus;
    public float bonusAmount = 0;
    public bool isActive = false;
    public int index = 0;
    public int albinoIndex = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
    }

 

    public void ApplyAlbinoMaterial()
    {
        gameObject.GetComponent<MeshRenderer>().materials[albinoIndex].color = Color.white; //if albino, set certain material to white color.
    }

    public void ApplyBonus()
    {
        for (int i = 0; i < bonus.Count; i++)
        {
            if (bonus[i] == Bonus.RarerCrates)
                Bonuses.RarerCrates = bonusAmount;

            if (bonus[i] == Bonus.FasterCrates)
                Bonuses.FasterCrates = bonusAmount;

            if (bonus[i] == Bonus.ExtraSlots)
                Bonuses.BonusSlot = bonusAmount;

            if (bonus[i] == Bonus.AlbinoChance)
                Bonuses.AbinoEasier = bonusAmount;

            if (bonus[i] == Bonus.MoreXP)
                Bonuses.xpMultiplier = bonusAmount;

            if (bonus[i] == Bonus.ExtraGold)
                Bonuses.goldMultiplier = bonusAmount;
        }
    }
}
