using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DailyLoginPopup : MonoBehaviour
{
    public GameObject Player;
    // Start is called before the first frame update
    void Start()
    {
        Player = GameObject.FindGameObjectWithTag("Player");
        Player.GetComponent<Player>().gold += Mathf.CeilToInt(20 * Bonuses.goldMultiplier);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
