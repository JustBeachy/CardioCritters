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
    GameObject player;
    public GameObject bar;
    bool isLoaded = false;
    public Text topDistance;
    public Text midDistance;
    public Text barNum;
    GameObject canvas;



    public static FitnessStats PL = new FitnessStats();
    // Start is called before the first frame update
    void Start()
    {
        path = Application.persistentDataPath + "/FitnessStats.json";
        player = GameObject.FindGameObjectWithTag("Player");
        canvas = GameObject.FindGameObjectWithTag("Canvas");
    }

    public void SaveStats()
    {
        if (!isLoaded)
        {
            LoadStats();
            isLoaded = true;
        }


        DateTime timeNow = DateTime.Today;
        while(disStats.Count-1<(timeNow-player.GetComponent<Player>().AccessStart).Days) 
        {
                disStats.Add(0); //fill in missed days

        }
        disStats[disStats.Count-1]=player.GetComponent<Player>().dailyDistance; //set daily distance





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
        }
        
      


    }

    public void DrawBars()
    {
        for (int x = 0; x < 7; x++)
        {
            
            var makebar = Instantiate(bar, canvas.transform);
            makebar.transform.localPosition += new Vector3(50, 0, 0);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
