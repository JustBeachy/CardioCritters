using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;

public class DistanceCalc : MonoBehaviour {

    bool started = false;
    public float timer = 30;
    public float currentTime = 30;
    float clat = 0;
    float clong = 0;
    float distancemoved = 0;


    // Use this for initialization
    IEnumerator Start()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep; //never sleep

        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation)) //check if they allowed location.
        Permission.RequestUserPermission(Permission.FineLocation);

        // First, check if user has location service enabled
        if (!Input.location.isEnabledByUser)
            yield break;
        
            

        // Start service before querying location
        Input.location.Start();

        // Wait until service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // Service didn't initialize in 20 seconds
        if (maxWait < 1)
        {
            Start();//retry
            print("Timed out");
            yield break;
        }

        // Connection has failed
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            Permission.RequestUserPermission(Permission.FineLocation); //ask to allow location services
            print("Unable to determine device location");
            yield break;
        }
    }

        // Update is called once per frame
        void Update () {
        if (Input.location.status != LocationServiceStatus.Initializing)
        {
            currentTime += Time.deltaTime;

        }

        if(currentTime>timer)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation)) //check if they allowed location.
            {
                Permission.RequestUserPermission(Permission.FineLocation);
                Start();
            }
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
                if (distancemoved <= 200 && distancemoved > 20)//check speed limits
                {
                    gameObject.GetComponent<Player>().ApplyDistance(distancemoved); //give distance to player total
                    clat = Input.location.lastData.latitude;
                    clong = Input.location.lastData.longitude;
                }
                currentTime = 0;
            }
        }
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
