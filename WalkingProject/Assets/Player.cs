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
    public int gold = 100;
    public float xp = 0;
    public int level = 0;
    public float steps = 0;
    public float prevLevel = 0;
    public float totaldistance = 0;
    public bool stepMode = false;
    public List<string> AnimalSaves = new List<string>();
    public List<Crate.Rarity> crateRarity = new List<Crate.Rarity>();
    public List<GameObject> Zoo = new List<GameObject>();
    public List<bool> ShinyFinder = new List<bool>();
    public int selectedAnimalIndex=0;
    public GameObject [] slots = new GameObject[3];//slot list -may need to change //limit of 5
    public List<float> DistanceSaves = new List<float>();
    public float dailyDistance = 0;
    public int dayCount;
    public DateTime timeNow;
    DateTime timeFromStart=new DateTime(2018,11,11);
    public float cooldown = 0;
    public float currentCooldown = 0;
    public List<int> crateIndex = new List<int>();
    public static int CameraCount = 0;
    public float dailyTime = 0;
    public bool dailyQuest = false;
    public GameObject CrateSlotsFullMessage;
    public bool tutorialDone = false;
    public GameObject tutorial;
    public GameObject levelUpScreen;
    public GameObject DailyLoginReward;

    string path; 

    public static Player PL = new Player();



    // Start is called before the first frame update
    private void Awake()
    {
        path = Application.persistentDataPath + "/SaveFile.json"; //"Macintosh HD\\Users\\abeach\\Desktop\\SaveFile.json";
        
    }
    void Start()
    {
        Load();
        
        //Application.targetFrameRate = 60;
        //QualitySettings.vSyncCount = 0;

        level = ((int)xp / 1000) + 1;
        prevLevel = level;

        timeNow = DateTime.Today;
        if ((timeNow - timeFromStart).Days!=dayCount)//check to see if new day. -reset dailies
        {
            dailyDistance = 0;
            dailyTime = 0;
            dailyQuest = false;
            if(tutorialDone) //make daily login bonus popup
            Instantiate(DailyLoginReward, GameObject.FindGameObjectWithTag("Canvas").transform);
        }

        
        

        
    }

    // Update is called once per frame
    void Update()
    {
         if(Input.GetKeyDown(KeyCode.Space))
         {
             //gameObject.GetComponent<Crafting>().CraftAnimal(Zoo.ToArray());
           //  SaveGame();
         }
         if (Input.GetKeyDown(KeyCode.L))
         {
             //LoadGame.Load();
            // Load();//LoadGame.PL);
         }
         if (Input.GetKeyDown(KeyCode.C))
         {



                //ApplyDistance(100);//give distance to crates



         }
         if (Input.GetKeyDown(KeyCode.Escape))
         {
            // CrateIntoInventory(0);
         }
         
         //cheats disabled

       

    }

    public void ApplyDistance(float dis, bool forceAnt = false)
    {
        if (!forceAnt) //dont add to stats from tutorial force
        {
            if (stepMode)
            {
                dis = ConvertToDistance(steps);
                steps = 0;
            }


            totaldistance += dis;
            dailyDistance += dis;
            dailyTime += .5f;
        }
        foreach (GameObject c in slots)
        {
            if(c!=null)
            c.GetComponent<Crate>().ApplyDistance(dis,forceAnt);//give distance to crates

        }
        dis = 0;

        SaveGame();
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
            string trimmed= animal.name.Replace("Albino ", ""); //trim file name for albinos
            AnimalSaves.Add(trimmed); //Add animal name to save file
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

        int parser2 = 0;
        foreach (GameObject g in Zoo)
        {
            //Zoo[parser2].GetComponent<AnimalStats>().index = parser2; //assign index for easy save 
            if(g.GetComponent<AnimalStats>().isActive)
            selectedAnimalIndex = parser2; //re-assign selected animal for save (can change after crafting)
            parser2++;
        }

        Player saveFile = gameObject.GetComponent<Player>();
        saveFile.username = username;
        saveFile.dayCount = (DateTime.Now - timeFromStart).Days;
        saveFile.xp = xp;
        saveFile.level = level;
        saveFile.slots = slots;
        saveFile.totaldistance = totaldistance;
        saveFile.height = height;
        saveFile.gold = gold;
        saveFile.dailyDistance = dailyDistance;
        saveFile.dailyTime = dailyTime;
        saveFile.dailyQuest = dailyQuest;
        saveFile.tutorialDone = tutorialDone;

        string json = JsonUtility.ToJson(saveFile);
        print(json);
        File.WriteAllText(@path, json);
        File.WriteAllText(@path, EncryptDecrypt(json,1337)); //comment out for testing -encryption

        ShinyFinder.Clear(); //remove the temp values in the save lists
        ShinyFinder.TrimExcess();
        DistanceSaves.Clear();
        DistanceSaves.TrimExcess();
        crateIndex.Clear();
        crateIndex.TrimExcess();
        crateRarity.Clear();
        crateRarity.TrimExcess();
        AnimalSaves.Clear();
        AnimalSaves.TrimExcess();

        GetComponent<FitnessStats>().SaveStats(); //save fitness stats
        print("game saved");

    }
    public void Load()
    {
        try {
            if (File.Exists(@path))
            {
                string loadedString = File.ReadAllText(@path);
                loadedString = EncryptDecrypt(loadedString, 1337); //comment out for testing -encryption
                JsonUtility.FromJsonOverwrite(loadedString, PL);
                username = PL.username;
                dayCount = PL.dayCount;
                xp = PL.xp;
                level = PL.level;
                Zoo = new List<GameObject>();
                //slots = PL.slots;
                totaldistance = PL.totaldistance;
                height = PL.height;
                gold = PL.gold;
                dailyDistance = PL.dailyDistance;
                dailyTime = PL.dailyTime;
                dailyQuest = PL.dailyQuest;
                tutorialDone = PL.tutorialDone;
                //may need to add more properties to load in

                foreach (string name in PL.AnimalSaves)
                {
                   
                    for (int g = 0; g < AnimalLists.AllAnimals.Count; g++)
                    {
                        
                        if (name == AnimalLists.AllAnimals[g].name)
                        {
                            Zoo.Add(AnimalLists.AllAnimals[g]);//add animal based on name to zoo
                            
                        }
                    }
                }
                
                for (int i = 0; i < PL.crateIndex.Count; i++)
                {

                    slots[i] = Instantiate(crate); //assign blank crate to slots 
                }

                for (int z = 0; z < PL.ShinyFinder.Count; z++)
                {
                    if (PL.ShinyFinder[z])
                        Zoo[z] = Zoo[z].GetComponent<AnimalStats>().albinoform; //load in albino version
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

                }

                if (Zoo.Count > 0)
                {
                    Zoo[PL.selectedAnimalIndex].GetComponent<AnimalStats>().isActive = true; //load current animal
                    SelectBuddy(Zoo[PL.selectedAnimalIndex], false);//set buddy and set save to false
                }

                //GetComponent<FitnessStats>().LoadStats(); //load fitness stats
                
                
            }
            else
            {
                Instantiate(tutorial);//start tutorial
                gold = 100;
            }

        }
        catch (Exception e)
        {

            //Debug.LogException(e, this);
            //selectedAnimal.name += e.ToString();

        } 
        
    }
    

    public void CheckLevelUp()
    {
        level = ((int)xp / 1000) + 1;

        if(prevLevel<level)
        {
            gold += Mathf.CeilToInt( 20*Bonuses.goldMultiplier);
            prevLevel = level;
            SaveGame();
            Instantiate(levelUpScreen, GameObject.FindGameObjectWithTag("Canvas").transform);
            
        }
    }

    public void CrateIntoInventory(int slotindex, int forcecraterarity=-1)
    {
        if (slotindex < slots.Length)
        {
            if (slots[slotindex] == null)
            {
                GameObject makecrate;
                if (slotindex==0)
                    makecrate = gameObject.GetComponent<Crafting>().CraftCrate(forcecraterarity,false);//no notification when making crate
                else
                    makecrate = gameObject.GetComponent<Crafting>().CraftCrate(forcecraterarity);//notification when making crate

                makecrate.GetComponent<Crate>().index = slotindex; //assign index so crate can delete itself out of list
                slots[slotindex] = makecrate;
                SaveGame();
            }
            else
                CrateIntoInventory(slotindex + 1,forcecraterarity); //retry - fill in any empty slots
        }
        else
        {
            Instantiate(CrateSlotsFullMessage,GameObject.FindGameObjectWithTag("Canvas").transform);//tell user crates are full
        }

    }

    public void SelectBuddy(GameObject selected, bool SaveAfter=true)
    {
        foreach (GameObject a in Zoo)
        {
            a.GetComponent<AnimalStats>().isActive = false; //clear active state of others
        }
        //* add check for new day (if)
        Bonuses.ClearBonuses();
        Destroy(GameObject.FindWithTag("Pet"));///remove old pet from camera
        selectedAnimalIndex = selected.GetComponent<AnimalStats>().index; //save index of buddy
        selectedAnimal = selected;
        selectedAnimal.GetComponent<AnimalStats>().isActive = true;
        selectedAnimal.GetComponent<AnimalStats>().ApplyBonus();
        var camIt = Instantiate(selectedAnimal, new Vector3(900, 900, 1200), selectedAnimal.transform.rotation); //spawn new pet to camera
        camIt.tag = "Pet";
        if(SaveAfter) //sometimes don't want to save (like on load -causes daily time bug)
        SaveGame();
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
