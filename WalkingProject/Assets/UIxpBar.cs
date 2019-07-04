using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIxpBar : MonoBehaviour
{
    public GameObject Player;
    public Text currentLV;
    public Text xpProgress;
    public Image Bar;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        currentLV.text = "Level "+Player.GetComponent<Player>().level.ToString();
        int xp = (int)Player.GetComponent<Player>().xp;
        xpProgress.text = (xp % 1000).ToString() + "/1000";
        Bar.fillAmount = (float)(xp%1000f) / 1000f;
    }
}
