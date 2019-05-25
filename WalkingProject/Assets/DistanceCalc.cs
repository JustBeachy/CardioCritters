using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DistanceCalc : MonoBehaviour {

    bool started = false;
    public float timer = 30;
    public float currentTime = 30;
    float clat = 0;
    float clong = 0;
    float distancemoved = 0;
   

    // Use this for initialization
    void Start () {
        Input.location.Start();
    }
	
	// Update is called once per frame
	void Update () {
        if (Input.location.status != LocationServiceStatus.Initializing)
        {
            currentTime += Time.deltaTime;

        }

        if(currentTime>timer)
        {
            if (!started) //first run of location services
            {
                clat = Input.location.lastData.latitude;
                clong = Input.location.lastData.longitude;
                currentTime = 0;
                started = true;
            }
            else //after first run of location services
            {
                distancemoved = LatLongDistance(Input.location.lastData.latitude, clat, Input.location.lastData.longitude, clong);
                if (distancemoved <= 200 && distancemoved > 10)//check speed limits
                {
                    gameObject.GetComponent<Player>().ApplyDistance(distancemoved); //give distance to player total
                    clat = Input.location.lastData.latitude;
                    clong = Input.location.lastData.longitude;
                }
                currentTime = 0;
            }
        }
	}

     void OnGUI()
    {
        GUI.Label(new Rect(10, 10, 100, 20), distancemoved.ToString());
    }
    private float LatLongDistance(float lat_1, float lat_2, float long_1, float long_2)
    {
        int R = 6371; 

        var lat_rad_1 = Mathf.Deg2Rad * lat_1;
        var lat_rad_2 = Mathf.Deg2Rad * lat_2;
        var d_lat_rad = Mathf.Deg2Rad * (lat_2 - lat_1);
        var d_long_rad = Mathf.Deg2Rad * (long_2 - long_1);
        var a = Mathf.Pow(Mathf.Sin(d_lat_rad / 2), 2) + (Mathf.Pow(Mathf.Sin(d_long_rad / 2), 2) * Mathf.Cos(lat_rad_1) * Mathf.Cos(lat_rad_2));
        var c = 2 * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1 - a));
        var total_dist = R * c * 1000; // convert to meters
        return total_dist;
    }
}
