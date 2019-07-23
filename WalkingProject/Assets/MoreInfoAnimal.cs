using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoreInfoAnimal : MonoBehaviour
{
    public Text Title;
    public Text AnimalName;
    public Text BonusText;
    public GameObject PickedAnimal;
    public GameObject whoCreatedMe;
    public Text Rarity;
    public GameObject ScrollViewDestroyer;
    public GameObject Camera;
    GameObject NewCamera;
    public RawImage RT;
    GameObject animalPopup;
    private bool craft2xFlag=false;
    float timer = 4;
    float currenttime = 0;
    bool isAnimator = false;
    public Image Fade;
    
   
    // Start is called before the first frame update
    void Start()
    {
       
    }
    public void DestroyCamera()
    {
        Destroy(NewCamera);
        Destroy(RT);
        //Destroy(animalPopup); deletes crates
    }
    public void CloseWindow()
    {
        Destroy(gameObject);
    }
    public void CrateOpenAnimation(GameObject ob) //used when crate is about to be opened
    {

        isAnimator = true;//for update
        animalPopup = ob;
        var newCam = Instantiate(Camera, new Vector3(-900 * Player.CameraCount, 1000, 900), Quaternion.identity);//spawn camera
        newCam.transform.Rotate(19, 0, 0);
        NewCamera = newCam;
        var CameraTexture = new RenderTexture(400, 400, 24); //make new rendertexture
        newCam.GetComponent<Camera>().targetTexture = CameraTexture; //assign rendertexture to camera
        RT.texture = CameraTexture; //assignt rendertexture to raw image
        var camIt = Instantiate(ob, new Vector3(-900 * Player.CameraCount, 900, 1200), Quaternion.identity); //spawn new pet to camera
        camIt.tag = "Animate";
        Player.CameraCount++;

        Title.text = "The crate is opening! Tap to see what's inside!";
    }
    public void FillInfo(GameObject ob, bool isAnimal)
    {
        /* var popupcount = GameObject.FindGameObjectsWithTag("PopUp");
         foreach (GameObject c in popupcount)
             Destroy(c);
         var camcount = GameObject.FindGameObjectsWithTag("CameraCount");   //add this back later to reduce lag
         foreach (GameObject c in camcount)
             Destroy(c); */
       // if (!isAnimal && ob.GetComponent<Crate>().index == 0) //if not a crate and not in infinity slot 


            animalPopup = ob;
        var newCam = Instantiate(Camera, new Vector3(-900 * Player.CameraCount,1000, 900), Quaternion.identity);//spawn camera
        newCam.transform.Rotate(19, 0, 0);
        NewCamera = newCam;
        var CameraTexture = new RenderTexture(400, 400, 24); //make new rendertexture
        newCam.GetComponent<Camera>().targetTexture = CameraTexture; //assign rendertexture to camera
        RT.texture = CameraTexture; //assignt rendertexture to raw image
        var camIt = Instantiate(ob, new Vector3(-900 * Player.CameraCount, 900, 1200), Quaternion.identity); //spawn new pet to camera
        camIt.tag = "PopUp";
        Player.CameraCount++;

            if (isAnimal)
            {
                AnimalName.text = ob.name;
                BonusText.text = ob.GetComponent<AnimalStats>().BonusText;

                if (ob.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Common)
                    Rarity.text = "Common";
                if (ob.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Rare)
                    Rarity.text = "Rare";
                if (ob.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Epic)
                    Rarity.text = "Epic";
                if (ob.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Legendary)
                    Rarity.text = "Legendary";

                Title.text = "New Critter!";
            }
            else
            {
                Rarity.text = "";
                Title.text = "NewCrate!";
                //string bonustext = (ob.GetComponent<Crate>().distancetoopen / 1000).ToString();
                BonusText.text = "Walk to open and see what's inside.";

                if (ob.GetComponent<Crate>().rarity == Crate.Rarity.Common)
                {
                    AnimalName.text = "Common Crate";

                }
                if (ob.GetComponent<Crate>().rarity == Crate.Rarity.Rare)
                {
                    AnimalName.text = "Rare Crate";
                }
                if (ob.GetComponent<Crate>().rarity == Crate.Rarity.Epic)
                {
                    AnimalName.text = "Epic Crate";
                }
                if (ob.GetComponent<Crate>().rarity == Crate.Rarity.Legendary)
                {
                    AnimalName.text = "Legendary Crate";
                }
            }


    }
    public void AddToCraft()
    {
       
        
        //start of get rid of non appropriate crafting types based on selection
        GameObject[] listitems = GameObject.FindGameObjectsWithTag("ListItem");

        if (ScreenState.currentScreen==ScreenState.Screen.CraftAnimal)
        {
            foreach (GameObject o in listitems)
            {
                if (o.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().rarity != whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().rarity
                    || o.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().Albino != whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().Albino)//check for matching rarity and albino trait
                { Destroy(o); }
            }
        }
        if (ScreenState.currentScreen==ScreenState.Screen.CraftAlbinoAnimal)
        {
            foreach (GameObject o in listitems)
            {
                if (o.GetComponent<InventoryGUI>().animalTiedToIcon.name != whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon.name) //check for matching names       
                    Destroy(o);
            }
        }
        //end of getting rid of non appropriate types based on selection
       

            if ((ScreenState.currentScreen == ScreenState.Screen.CraftCrate && Crafting.AnimalCraft.Count < 2)
                ||(ScreenState.currentScreen == ScreenState.Screen.CraftAlbinoAnimal || ScreenState.currentScreen == ScreenState.Screen.CraftAnimal) 
                && Crafting.AnimalCraft.Count < 5)//dont overflow other crafting list
            {
                Crafting.AnimalCraft.Add(whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon);//may need to add index to animal to track it
                Destroy(whoCreatedMe);
            }

        if (ScreenState.currentScreen == ScreenState.Screen.AnimalSelect)
        {
            int parser = 0;
            GameObject player = GameObject.FindWithTag("Player");
            foreach (GameObject g in player.GetComponent<Player>().Zoo)
            {
                g.GetComponent<AnimalStats>().isActive = false;
                player.GetComponent<Player>().Zoo[parser].GetComponent<AnimalStats>().index = parser; //assign index for easy save 
                parser++;
            }
            player.GetComponent<Player>().SelectBuddy(PickedAnimal); //apply new buddy
            ScrollViewDestroyer = GameObject.FindWithTag("ScrollView");
            Destroy(ScrollViewDestroyer);//go back to main screen after
            ScreenState.currentScreen = ScreenState.Screen.Home;
           

        }

        if (whoCreatedMe.GetComponent<InventoryGUI>().animalTiedToIcon.GetComponent<AnimalStats>().bonus[0] == AnimalStats.Bonus.Crafting2x && !craft2xFlag)
        {
            craft2xFlag = true;
            AddToCraft(); //for 2x crafting slot bonus animals
        }

    }
    // Update is called once per frame
    void Update()
    {
        if(isAnimator)
        {

            currenttime += Time.deltaTime;
            //fade color in here

            if (currenttime >= timer)
            {
                Destroy(NewCamera);
                Destroy(RT);
                Destroy(gameObject);
            }
        }
    }
}
