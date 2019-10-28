using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class iapGold : MonoBehaviour
{
    GameObject player;
    // Start is called before the first frame update
    void Start()
    {

    }

    public void IAP100()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        player.GetComponent<Player>().gold += 100;
        player.GetComponent<Player>().SaveGame();
        
    }

    public void IAP500()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        player.GetComponent<Player>().gold += 500;
        player.GetComponent<Player>().SaveGame();
    }

    public void IAP1000()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        player.GetComponent<Player>().gold += 1000;
        player.GetComponent<Player>().SaveGame();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
