using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bonuses : MonoBehaviour
{
    public static float RarerCrates = 0; //treat as int  1-100
    public static float FasterCrates = 1f;  // 1.1-1.9
    public static float CraftingSlots2x = 0; //treat as int
    public static float AbinoEasier = 0; //treat as int 1-250
    public static float xpMultiplier = 1f; //1.1 - 3
    public static float goldMultiplier = 1f; //1.1 - 3
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
        CraftingSlots2x = 0;
     AbinoEasier = 0;
     xpMultiplier = 1f;
     goldMultiplier = 1f;
}
}
