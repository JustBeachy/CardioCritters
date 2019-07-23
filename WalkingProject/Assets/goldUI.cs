using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class goldUI : MonoBehaviour
{
    public GameObject player;
    public Text GoldAmount;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    // Update is called once per frame
    void Update()
    {
        GoldAmount.text = player.GetComponent<Player>().gold.ToString();
    }
}
