using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GoldText : MonoBehaviour
{
    public Text Goldtext;
    public int AmountToDisplay;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Goldtext.text = (Mathf.CeilToInt(AmountToDisplay * Bonuses.goldMultiplier)).ToString();
    }
}
