using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bonuses : MonoBehaviour
{
    public static float RarerCrates = 0; //treat as int
    public static float FasterCrates = 1f; 
    public static float BonusSlot = 0; //treat as int
    public static float AbinoEasier = 0; //treat as int
    public static float xpMultiplier = 1f;
    public static float goldMultiplier = 1f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public static void ClearBonuses()
    {
     RarerCrates = 0;
     FasterCrates = 1f;
     BonusSlot = 0;
     AbinoEasier = 0;
     xpMultiplier = 1f;
     goldMultiplier = 1f;
}
}
