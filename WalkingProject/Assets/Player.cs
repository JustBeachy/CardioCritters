using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using System.Text;

[Serializable]
public class Player : MonoBehaviour
{
    //1 mi is 1.609344 km
    //.2 km  in 30 sec is fastest they should be able to go.
    //steps are .4 height. 
    //use FileInfo for key to encryption


    public GameObject crate;
    public string username = "";
    public GameObject selectedAnimal;
    public float height = 0;
    public int gold = 0;
    public float xp = 0;
    public int level = 0;
    public float steps = 0;
    public float prevLevel = 0;
    public float totaldistance = 0;
    public bool stepMode = false;
    public List<Crate.Rarity> crateRarity = new List<Crate.Rarity>();
    public List<GameObject> Zoo = new List<GameObject>();
    public List<bool> ShinyFinder = new List<bool>();
    public GameObject [] slots = new GameObject[3];//slot list -may need to change //limit of 5
    public List<float> DistanceSaves = new List<float>();
    public float dailyDistance = 0;
    public int dayCount;
    DateTime timeNow;
    DateTime timeToCompare = new DateTime(2000, 1, 1);
    public float cooldown = 0;
    public float currentCooldown = 0;
    public List<int> crateIndex = new List<int>();
    public static int CameraCount = 0;

    string path = "Macintosh HD\\Users\\abeach\\Desktop\\SaveFile.json";

    public static Player PL = new Player();



    // Start is called before the first frame update
    private void Awake()
    {

    }
    void Start()
    {
        //CrateIntoInventory(0);//put crate in 1st slot

        timeNow = DateTime.Today;
        
        if ((timeNow - timeToCompare).Days!=dayCount)
        {

            Debug.Log("Welcome back, here's a prize for you!");//check to see if new day. -reset dailies

        }
      

        level = ((int)xp / 1000) + 1;
        prevLevel = level;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            //gameObject.GetComponent<Crafting>().CraftAnimal(Zoo.ToArray());
            SaveGame();
        }
        if (Input.GetKeyDown(KeyCode.L))
        {
            //LoadGame.Load();
            Load();//LoadGame.PL);
        }
        if (Input.GetKeyDown(KeyCode.C))
        {

           
                
               ApplyDistance(100);//give distance to crates


         
        }
        if (Input.GetKeyDown(KeyCode.N))
        {
            CrateIntoInventory(0);
        }

            if (Input.GetKeyDown(KeyCode.I))
        {
            gameObject.GetComponent<InventoryGUI>().LoadInventory();
        }



    }

    public void ApplyDistance(float dis)
    {

        if (stepMode)
        {
            dis = ConvertToDistance(steps);
            steps = 0;
        }
        
        
        totaldistance += dis;
        dailyDistance += dis;

        foreach (GameObject c in slots)
        {
            if(c!=null)
            c.GetComponent<Crate>().ApplyDistance(dis);//give distance to crates

        }
        dis = 0;


    }

    public void ActiveAnimal(GameObject anim)
    {
        selectedAnimal = anim;
    }

    public float ConvertToDistance(float st)
    {
        return st * (.4f*height);
    }

    public void SaveGame()
    {
      

        foreach (GameObject animal in Zoo)
        {
            ShinyFinder.Add(animal.GetComponent<AnimalStats>().Albino);//hold shiny trait in save file
        }


        foreach (GameObject c in slots)
        {
            if(c!=null)
            DistanceSaves.Add(c.GetComponent<Crate>().currentdistance); //hold crate distances in save file
        }

            foreach (GameObject i in slots)
        {
            if (i != null)
                crateIndex.Add(i.GetComponent<Crate>().index); //hold crate index in save file
            
            
        }

        foreach (GameObject r in slots)
        {
            if (r != null)
                crateRarity.Add(r.GetComponent<Crate>().rarity); //hold crate rarity in save file
        }

        //for (int g = 0; g < slots.Length; g++)
        //{
        //   if(slots[g]!=null)
        //    slots[g] = crate;
        //}

        Player saveFile = gameObject.GetComponent<Player>();
        saveFile.username = username;
        saveFile.dayCount = (timeNow - timeToCompare).Days;
        saveFile.xp = xp;
        saveFile.level = level;
        saveFile.Zoo = Zoo;
        saveFile.slots = slots;
        saveFile.totaldistance = totaldistance;
        saveFile.height = height;
        saveFile.gold = gold;
        saveFile.dailyDistance = dailyDistance;

        string json = JsonUtility.ToJson(saveFile);
        print(json);
        File.WriteAllText(@path, json);
        //File.WriteAllText(@path, EncryptDecrypt(json,1)); //comment out for testing -encryption

        ShinyFinder.Clear(); //remove the temp values in the save lists
        ShinyFinder.TrimExcess();
        DistanceSaves.Clear();
        DistanceSaves.TrimExcess();
        crateIndex.Clear();
        crateIndex.TrimExcess();
        crateRarity.Clear();
        crateRarity.TrimExcess();


    }
    public void Load()
    {
        string loadedString = File.ReadAllText(@path);
        //loadedString=EncryptDecrypt(loadedString, 1); //comment out for testing -encryption
        JsonUtility.FromJsonOverwrite(loadedString, PL );
        username = PL.username;
        dayCount = PL.dayCount;
        xp = PL.xp;
        level = PL.level;
        Zoo = PL.Zoo;
        slots = PL.slots;
        totaldistance = PL.totaldistance;
        height = PL.height;
        gold = PL.gold;
        dailyDistance = PL.dailyDistance;
        //may need to add more properties to load in

        for (int i = 0; i < PL.crateIndex.Count; i++)
        {

            slots[i] = Instantiate(crate); //assign blank crate to slots 
        }

        for (int z = 0; z < PL.ShinyFinder.Count;z++)
        {
            Zoo[z].GetComponent<AnimalStats>().Albino = PL.ShinyFinder[z];//load in albino trait
        }

        for (int j = 0; j < PL.DistanceSaves.Count; j++)
        {
            
            slots[j].GetComponent<Crate>().currentdistance = PL.DistanceSaves[j];//load in distance for crates
        }

        for (int j = 0; j < PL.crateIndex.Count; j++)
        {
            slots[j].GetComponent<Crate>().index = j;//PL.crateIndex[j];//set index for crates
        }

        for (int j = 0; j < PL.crateRarity.Count; j++)
        {
            slots[j].GetComponent<Crate>().rarity = (Crate.Rarity)PL.crateRarity[j];//load in rarity for crates
            print(slots[j].GetComponent<Crate>().rarity);
        }


    }

    public void CheckLevelUp()
    {
        level = ((int)xp / 1000) + 1;

        if(prevLevel<level)
        {
            //level up actions
        }
    }

    public void CrateIntoInventory(int slotindex)
    {
        if (slotindex < slots.Length)
        {
            if (slots[slotindex] == null)
            {
                GameObject makecrate = gameObject.GetComponent<Crafting>().CraftCrate();
                makecrate.GetComponent<Crate>().index = slotindex; //assign index so crate can delete itself out of list
                slots[slotindex] = makecrate;
                SaveGame();
            }
            else
                CrateIntoInventory(slotindex + 1); //fill in any empty slots
        }

    }

    public void SelectBuddy(GameObject selected)
    {

        //* add check for new day (if)
        Bonuses.ClearBonuses();
        Destroy(GameObject.FindWithTag("Pet"));///remove old pet from camera
        selectedAnimal = selected;
        selectedAnimal.GetComponent<AnimalStats>().isActive = true;
        selectedAnimal.GetComponent<AnimalStats>().ApplyBonus();
        var camIt = Instantiate(selectedAnimal, new Vector3(900, 900, 1200), Quaternion.identity); //spawn new pet to camera
        camIt.tag = "Pet";
    }


    public string EncryptDecrypt(string szPlainText, int szEncryptionKey) //encrypt save
    {
        StringBuilder szInputStringBuild = new StringBuilder(szPlainText);
        StringBuilder szOutStringBuild = new StringBuilder(szPlainText.Length);
        char Textch;
        for (int iCount = 0; iCount < szPlainText.Length; iCount++)
        {
            Textch = szInputStringBuild[iCount];
            Textch = (char)(Textch ^ szEncryptionKey);
            szOutStringBuild.Append(Textch);
        }
        return szOutStringBuild.ToString();
    }


}
