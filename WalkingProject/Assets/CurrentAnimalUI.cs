using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CurrentAnimalUI : MonoBehaviour
{

    public GameObject AnimalModel;
    public GameObject player;
    public Text AnimalName, BonusText;
    public Image progressBar;
    Vector3 mouseClick = new Vector3(0, 0, 0);
    public GameObject CraftingOptions;
    public GameObject InventoryList;
    public Text albinoBonusText;
    public GameObject TutorialManager;
   
    // Start is called before the first frame update
    void Start()
    {

    }



    // Update is called once per frame
    void Update()
    {
        UpdateSelectedAnimalUI();
        progressBar.fillAmount = player.GetComponent<DistanceCalc>().currentTime / player.GetComponent<DistanceCalc>().timer;
    }

    void OnMouseDrag()
    {
        Vector3 offset = (Input.mousePosition - mouseClick);
        transform.Rotate(new Vector3(0, offset.x * 0.005f, 0));
    }

    public void UpdateSelectedAnimalUI()
    {
        AnimalModel = player.GetComponent<Player>().selectedAnimal;
        //gameObject.GetComponent<MeshFilter>().mesh = AnimalModel.GetComponent<MeshFilter>().sharedMesh;
        //gameObject.GetComponent<Image>().sprite = AnimalModel;
        AnimalName.text = player.GetComponent<Player>().selectedAnimal.name;
        BonusText.text = player.GetComponent<Player>().selectedAnimal.GetComponent<AnimalStats>().BonusText;

        if(AnimalModel.GetComponent<AnimalStats>().Albino) //double albino text
        {
            albinoBonusText.text = "Albino: Extra "+BonusText.text;
        }
        else
        {
            albinoBonusText.text = "";
        }

        if (AnimalModel.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Common) //color text
        {

            AnimalName.color = Color.white;
        }
        if (AnimalModel.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Rare)
        {

            AnimalName.color = Color.blue;
        }
        if (AnimalModel.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Epic)
        {

            AnimalName.color = Color.magenta;
        }
        if (AnimalModel.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Legendary)
        {

            AnimalName.color = Color.yellow;
        }
    }

    public void MakeCraftingOptions() //makes the crafting selection buttons
    {
        Instantiate(CraftingOptions, transform.parent);

        if (GameObject.Find("Tut3(Clone)") != null)
        {
            TutorialManager.GetComponent<Tutorial>().NextStep();//go to next tutorial step
        }
    }

    public void SetScreenState(int state) //set screen state from buttons on the crafting select menu
    {
        ScreenState.currentScreen = (ScreenState.Screen)state;
    }

    public void CreateInventory()
    {
        var inv =Instantiate(InventoryList);
        inv.transform.SetParent(GameObject.FindWithTag("Canvas").transform,false);

        if (GameObject.Find("Tut4(Clone)") != null)
        {
            TutorialManager.GetComponent<Tutorial>().NextStep();//go to next tutorial step
        }
    }

}
 

