using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.IO;

[Serializable]
public class FitnessStats : MonoBehaviour
{
    string path;
    public List<float> disStats;
    public List<float> timeStats;
    DateTime timeFromStart;
    DateTime today;
    GameObject player;


    public static FitnessStats PL = new FitnessStats();
    // Start is called before the first frame update
    void Start()
    {
        path = Application.persistentDataPath + "/FitnessStats.json";
        player = GameObject.FindGameObjectWithTag("Player");
     
        timeFromStart = new DateTime(2020, 3, 17);
        today = DateTime.Today;

        LoadStats();
        
        
        
    }

    public void SaveStats(bool firstTime = false)
    {
       /* if(firstTime)
        {
            disStats.Add(0);
            timeStats.Add(0);
        }
        */
        
        while((today-timeFromStart.AddDays(disStats.Count-1)).Days!=0) //set missing days to 0
        {
                disStats.Add(0); //fill in missed days
                timeStats.Add(0);
            
        }
        disStats[disStats.Count-1]=(float)Math.Round(player.GetComponent<Player>().dailyDistance,2); //set daily distance
        timeStats[timeStats.Count-1] = player.GetComponent<Player>().dailyTime; //set daily time

        FitnessStats saveFile = gameObject.GetComponent<FitnessStats>();
       
        string json = JsonUtility.ToJson(saveFile);
        File.WriteAllText(@path, json);


    }

    public void LoadStats()
    {

        if (File.Exists(@path))
        {
            string loadedString = File.ReadAllText(@path);
            JsonUtility.FromJsonOverwrite(loadedString, PL);
            disStats = PL.disStats;
            timeStats = PL.timeStats;
            
        }
        else
            SaveStats(true);
        
      


    }

   

    // Update is called once per frame
    void Update()
    {
      
    }
}
