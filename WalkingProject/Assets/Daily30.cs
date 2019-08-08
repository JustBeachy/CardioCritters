using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Daily30 : MonoBehaviour
{
    public Image BarFill;
    public Text CurrentTime;
    public GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindWithTag("Player");
        
    }


    // Update is called once per frame
    void Update()
    {

        var dailytime = player.GetComponent<Player>().dailyTime;
        var fillamt= player.GetComponent<Player>().dailyTime / 30;

        if (dailytime < 30)
        {
            CurrentTime.text = "<" + dailytime.ToString("0.#");
            BarFill.fillAmount = fillamt;
            CurrentTime.transform.localPosition = new Vector2(100, (380 * fillamt) - 190);

            if (fillamt == 0)
                CurrentTime.text = "";

        }
        else
        {

            BarFill.fillAmount = 1;
            CurrentTime.text = "Complete";
            CurrentTime.transform.localPosition = new Vector2(100, 190);
            if (player.GetComponent<Player>().dailyQuest == false)
            {
                player.GetComponent<Player>().dailyQuest = true;
                player.GetComponent<Player>().gold += Mathf.RoundToInt(5 * Bonuses.goldMultiplier);
                player.GetComponent<Player>().SaveGame();
            }
           
        }

        
    }
}
