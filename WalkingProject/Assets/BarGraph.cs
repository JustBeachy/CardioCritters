using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class BarGraph : MonoBehaviour
{
    public GameObject bar;
    public Text topDistance;
    public Text midDistance;
    public Text threefourthsDistance;
    public Text onefourthDistance;
    public Text barNum;
    public Text DistanceText;
    public Text DaysAgoText;
    List<float> disStats;
    List<float> timeStats;
    GameObject canvas;
    GameObject player;
    enum daymonthyear { Day, Month, Year }
    daymonthyear filtergraph;
    List<float> listholder;
    bool distanceisSelected = true;
    public Text totalDistance;
    public Text totalGamesPlayed;

    // Start is called before the first frame update
    void Start()
    {
        canvas = GameObject.FindGameObjectWithTag("Canvas");
        player = GameObject.FindGameObjectWithTag("Player");

        disStats = player.GetComponent<FitnessStats>().disStats;
        timeStats = player.GetComponent<FitnessStats>().timeStats;

        listholder = disStats;
        distanceisSelected = true;

        totalDistance.text = "Total Distance Walked: " + Math.Round(player.GetComponent<Player>().totaldistance/1000,2).ToString()+"km"; //set total distance text
        CountGamesPlayed();
        

        DrawBars(0);
        
    }

    
    void CountGamesPlayed()
    {
        int counter = 0;
        foreach (float f in disStats)
        {
            if (f > 0)
                counter++;
        }
        totalGamesPlayed.text = "Total Days Played: "+counter;
    }

    public void ChangeGraphType()
    {
        if (distanceisSelected)
        {
            listholder = timeStats;
            distanceisSelected = false;
            DistanceText.text = "Time";
            DrawBars();
        }
        else
        {
            listholder = disStats;
            distanceisSelected = true;
            DistanceText.text = "Distance";
            DrawBars();
        }
       
    }

    public void DrawBars(int type = 0)
    {
        GameObject[] deleteBars =GameObject.FindGameObjectsWithTag("Bar");//clear all current bars
        foreach (GameObject g in deleteBars)
            Destroy(g);

        if (type == 0) //if 7 day graph
        {
            float maxvalue = 0;
            for(int i=0; i<listholder.Count&&i<7;i++)
            {
                if (listholder[listholder.Count - 1 - i] > maxvalue) //check for biggest number in graph
                    maxvalue = listholder[listholder.Count - 1 - i];
            }

            if (distanceisSelected) //label differently based on type of graph
            {
                topDistance.text = (maxvalue / 1000).ToString()+"km"; //re-label endings for distance
                midDistance.text = Math.Round((maxvalue / 2000),1).ToString()+"km";
                threefourthsDistance.text = Math.Round((maxvalue / 1000*.75f), 1).ToString() + "km";
                onefourthDistance.text = Math.Round((maxvalue / 4000), 1).ToString() + "km";
            }
            else
            {
                topDistance.text = Math.Round(maxvalue,0).ToString()+"min"; //re-label endings for time
                midDistance.text = Math.Round((maxvalue/2),0).ToString()+"min";
                threefourthsDistance.text = Math.Round((maxvalue* .75f), 0).ToString() + "min";
                onefourthDistance.text = Math.Round((maxvalue / 4), 0).ToString() + "min";
            }

            for (int x = 0; x < listholder.Count && x < 7; x++)
            {

                var makebar = Instantiate(bar, transform);
                makebar.transform.localPosition -= new Vector3(90*x, 0, 0);
                makebar.GetComponent<RectTransform>().sizeDelta = new Vector2(30, (float)800* (listholder[listholder.Count - 1 - x] / maxvalue)); //set height of graph based on max value
                makebar.GetComponentInChildren<Text>().text = DateTime.Now.AddDays(-x).DayOfWeek.ToString();
                if (x == 0)
                {
                    makebar.GetComponentInChildren<Text>().text = "Now"; //label today differently
                }


            }
        }
        if (type==1) //if month graph
        {
            float maxvalue = 0;
            for (int i = 0; i < listholder.Count && i < 30; i++)
            {
                if (listholder[listholder.Count - 1 - i] > maxvalue) //check for biggest number in graph
                    maxvalue = listholder[listholder.Count - 1 - i];
            }

            if (distanceisSelected) //label differently based on type of graph
            {
                topDistance.text = (maxvalue / 1000).ToString() + "km"; //re-label endings for distance
                midDistance.text = Math.Round((maxvalue / 2000), 1).ToString() + "km";
                threefourthsDistance.text = Math.Round((maxvalue / 1000 * .75f), 1).ToString() + "km";
                onefourthDistance.text = Math.Round((maxvalue / 4000), 1).ToString() + "km";
            }
            else
            {
                topDistance.text = Math.Round(maxvalue,0).ToString() + "min"; //re-label endings for time
                midDistance.text = Math.Round((maxvalue / 2),0).ToString() + "min";
                threefourthsDistance.text = Math.Round((maxvalue * .75f), 0).ToString() + "min";
                onefourthDistance.text = Math.Round((maxvalue / 4), 0).ToString() + "min";
            }

            for (int x = 0; x < listholder.Count && x < 30; x++)
            {

                var makebar = Instantiate(bar, transform);
                makebar.transform.localPosition -= new Vector3(20 * x, 0, 0);
                makebar.GetComponent<RectTransform>().sizeDelta = new Vector2(10, (float)800 * (listholder[listholder.Count - 1 - x] / maxvalue)); //set height of graph based on max value
                if (x % 2 == 0) //if even day, label it
                {
                    makebar.GetComponentInChildren<Text>().text = DateTime.Now.AddDays(-x).Day.ToString();
                }
                if (x == 0)
                {
                    makebar.GetComponentInChildren<Text>().text = "Now"; //label today differently
                }


            }

        }
        if (type == 2) //if year graph
        {
            float maxvalue = 0;
            for (int i = 0; i < listholder.Count && i < 365; i++)
            {
                if (listholder[listholder.Count - 1 - i] > maxvalue) //check for biggest number in graph
                    maxvalue = listholder[listholder.Count - 1 - i];
            }

            if (distanceisSelected) //label differently based on type of graph
            {
                topDistance.text = (maxvalue / 1000).ToString() + "km"; //re-label endings for distance
                midDistance.text = Math.Round((maxvalue / 2000), 1).ToString() + "km";
                threefourthsDistance.text = Math.Round((maxvalue / 1000 * .75f), 1).ToString() + "km";
                onefourthDistance.text = Math.Round((maxvalue / 4000), 1).ToString() + "km";
            }
            else
            {
                topDistance.text = Math.Round(maxvalue,0).ToString() + "min"; //re-label endings for time
                midDistance.text = Math.Round((maxvalue / 2),0).ToString() + "min";
                threefourthsDistance.text = Math.Round((maxvalue * .75f), 0).ToString() + "min";
                onefourthDistance.text = Math.Round((maxvalue / 4), 0).ToString() + "min";
            }

            for (int x = 0; x < listholder.Count && x < 365; x++)
            {

                var makebar = Instantiate(bar, transform);
                makebar.transform.localPosition -= new Vector3(1.6f * x, 0, 0);
                makebar.GetComponent<RectTransform>().sizeDelta = new Vector2(1, (float)800 * (listholder[listholder.Count - 1 - x] / maxvalue)); //set height of graph based on max value
                if (x % 28 == 0) //if even day, label it
                {
                    makebar.GetComponentInChildren<Text>().text = DateTime.Now.AddDays(-x).ToString("MMM");
                }
                if (x == 0)
                {
                    makebar.GetComponentInChildren<Text>().text = "Now"; //label today differently
                }


            }

        }

    }
}
