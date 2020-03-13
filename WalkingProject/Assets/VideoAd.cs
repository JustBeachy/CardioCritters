using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class VideoAd : MonoBehaviour, IUnityAdsListener
{

    string gameId = "";
    public GameObject screenToClose;
    public Text adText;
    Button myButton;
    public string myPlacementId = "rewardedVideo";
    GameObject Player;
    public bool crateReward;
    bool loaded = false;
    float timeOut = 0;
    bool finished = false;

    private void Awake()
    {
        if (Application.platform == RuntimePlatform.Android)
            gameId = "3505918";
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
            gameId = "3505919";
        else
            gameId = "3505919";
    }

    void Start()
    {
        Player = GameObject.FindGameObjectWithTag("Player");
        myButton = GetComponent<Button>();

        // Set interactivity to be dependent on the Placement’s status:
        //myButton.interactable = Advertisement.IsReady(myPlacementId);

        // Map the ShowRewardedVideo function to the button’s click listener:
        if (myButton)
        {
            myButton.onClick.AddListener(InitializeAds);
            myButton.onClick.AddListener(ShowRewardedVideo);
        }

        // Initialize the Ads listener and service:
        
    }

    void InitializeAds()
    {
       
            int cratecount = 0;
            for (int i = 0; i < 3; i++)
            {
                if (Player.GetComponent<Player>().slots[i] != null)
                    cratecount++;
            }
            if (crateReward&&cratecount == 3)
            {
                myButton.interactable = false;
                adText.text = "Crate Slots Full";
                adText.fontSize = 24;
                adText.color = Color.red;
            }
            else
            {
            Advertisement.AddListener(this);
            Advertisement.Initialize(gameId);

            ShowRewardedVideo();
            }
            
    }

    // Implement a function for showing a rewarded video ad:
    void ShowRewardedVideo()
    {
        //Advertisement.Show(myPlacementId);

        if (!loaded)
        {
            
            timeOut += Time.deltaTime;
            if(timeOut < 15)
            {
                adText.text = "Loading Ad";
                adText.color = Color.gray;
                myButton.interactable = false;
                //Advertisement.Show(myPlacementId); //repeat trying to grab ad until timeout
            }
            
        }
    }

    // Implement IUnityAdsListener interface methods:
    public void OnUnityAdsReady(string placementId)
    {
        
        // If the ready Placement is rewarded, de-activate the button: 
        if (placementId == myPlacementId)
        {
            
            loaded = true;
            myButton.interactable = false;
            adText.text = "Completed";
            adText.color = Color.gray;

           
            if(!finished)
            Advertisement.Show(myPlacementId);//show ad
            
        }
       
        
    }

    public void OnUnityAdsDidFinish(string placementId, ShowResult showResult)
    {
        // Define conditional logic for each ad completion status:
        if (showResult == ShowResult.Finished)
        {
            finished = true;
            // Reward the user for watching the ad to completion.
            if (!crateReward)
            {
                Player.GetComponent<Player>().gold += Mathf.CeilToInt(20 * Bonuses.goldMultiplier);
            }
            else
            {
                Player.GetComponent<Player>().CrateIntoInventory(0, 0);//force common crate
            }

            Player.GetComponent<Player>().SaveGame();
            Destroy(screenToClose);
        }
        else if (showResult == ShowResult.Skipped)
        {
            // Do not reward the user for skipping the ad.
            adText.text = "Cancelled";
            adText.color = Color.red;
        }
        else if (showResult == ShowResult.Failed)
        {
            Debug.LogWarning("The ad did not finish due to an error.");
            adText.text = "Failed";
            adText.color = Color.red;
        }
    }

    public void OnUnityAdsDidError(string message)
    {
        // Log the error.
    }

    public void OnUnityAdsDidStart(string placementId)
    {
        // Optional actions to take when the end-users triggers an ad.
    }
}
