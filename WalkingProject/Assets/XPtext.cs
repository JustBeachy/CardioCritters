using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class XPtext : MonoBehaviour
{
    public Text XPtxt;
    public int AmountToDisplay;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        XPtxt.text = "+"+((int)(AmountToDisplay * Bonuses.xpMultiplier)).ToString()+" xp";
    }
}
