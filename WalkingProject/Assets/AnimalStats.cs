using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalStats : MonoBehaviour
{
    public string Name = "";
    public enum Rarity { Common, Rare, Epic, Legendary };
    public Rarity rarity = Rarity.Common;
    public string BonusText = "";
    public bool Albino = false;
    public enum Bonus { RarerCrates, FasterCrates, ExtraSlots, ExtraGold, MoreXP, AlbinoChance, Crafting2x}
    public Bonus bonus = Bonus.RarerCrates;
    public float bonusAmount = 0;
    public bool isActive = false;
    public int index = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnMouseDown()
    {
        if (ScreenState.currentScreen == ScreenState.Screen.Crafting) //check if in crafting screen
        {
            if (Crafting.AnimalCraft.Count < 5)
            {
                Crafting.AnimalCraft.Add(gameObject); //add to crafting list
            }
        }
    }

    public void ApplyBonus()
    {
        if(bonus==Bonus.RarerCrates)
            Bonuses.RarerCrates = bonusAmount;

        if (bonus == Bonus.FasterCrates)
            Bonuses.FasterCrates = bonusAmount;

        if (bonus == Bonus.ExtraSlots)
            Bonuses.BonusSlot = bonusAmount;

        if (bonus == Bonus.AlbinoChance)
            Bonuses.AbinoEasier = bonusAmount;

        if (bonus == Bonus.MoreXP)
            Bonuses.xpMultiplier = bonusAmount;

        if (bonus == Bonus.ExtraGold)
            Bonuses.goldMultiplier = bonusAmount;
    }
}
