using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryGUI : MonoBehaviour
{
    public GameObject player;
    public GameObject Canvas;
    public List<GameObject> zooList;
    int parser=0;
    public GameObject listItem;
    public Sprite locked;
    public bool hide = false;
    public GameObject animalTiedToIcon;
    public bool showUnknown = true;
    public GameObject SelectionScreen;
    public Text rarity;
    bool isClickedOn = false;
   

    
    // Start is called before the first frame update
    void Awake()
    {
        player = GameObject.FindWithTag("Player");

    }

    // Update is called once per frame
    void Update()
    {


        if (hide)
        {
            gameObject.SetActive(false);
        }
    }

    public Color SetColor(GameObject g)
    {


        if (g.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Common)
        {
            rarity.text = "Common";
            return Color.white;
        }
        if (g.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Rare)
        {
            rarity.text = "Rare";
            return Color.blue;
        }
        if (g.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Epic)
        {
            rarity.text = "Epic";
            return Color.magenta;
        }
        if (g.GetComponent<AnimalStats>().rarity == AnimalStats.Rarity.Legendary)
        {
            rarity.text = "Legendary";
            return Color.yellow;
        }

        return Color.cyan;
    }

    public void ShowUnknown()
    {
        showUnknown = !showUnknown;
        LoadInventory();
    }


     public void WhenClicked()//when clicked
    {
        if (GetComponent<Image>().sprite != locked) //make sure it isnt an unknoown
        {
            var moreinfo = Instantiate(SelectionScreen);
            moreinfo.transform.SetParent(GameObject.FindWithTag("Canvas").transform, false);
            moreinfo.GetComponent<MoreInfoAnimal>().AnimalName.text = animalTiedToIcon.name;
            moreinfo.GetComponent<MoreInfoAnimal>().BonusText.text = animalTiedToIcon.GetComponent<AnimalStats>().BonusText;
            isClickedOn = true;
        }

      
       
    }

    public void Cancelled()
    {
        isClickedOn = false;
    }

    public void HitYesOnSelect()
    {
        Crafting.AnimalCraft.Add(animalTiedToIcon);

    }

    public void LoadInventory()
    {
        foreach (GameObject a in player.GetComponent<Player>().Zoo)
        {

            a.GetComponent<AnimalStats>().index = parser; //assign index to animals so they can delete themselves in crafting -should be only spot in code that assigns this
            parser++;
        }
        parser = 0;

            zooList = player.GetComponent<Player>().Zoo;

        if(zooList!=null)
        {
            for (int i = 0; i < AnimalLists.AllAnimals.Count; i++) //loop through animal dictionary
            {

                if (zooList.Contains(AnimalLists.AllAnimals[i]))
                {
                    foreach (GameObject sameAnim in zooList) //loop through inventory
                    {
                        if (sameAnim == AnimalLists.AllAnimals[i])
                        {
                            var toList = Instantiate(listItem, new Vector2(1f, 1f), Quaternion.identity); //display animal
                            toList.GetComponent<InventoryGUI>().animalTiedToIcon = sameAnim; //tie animal to icon for sorting and clicking
                            AnimalLists.iconList.Add(toList); //add to a list for sorting
                            toList.GetComponent<Image>().sprite = zooList[parser].GetComponent<AnimalStats>().Icon; //icon image
                            toList.GetComponentInChildren<Text>().text = zooList[parser].name; //text name
                            toList.GetComponentInChildren<Text>().color = SetColor(AnimalLists.AllAnimals[i]); //border color
                            toList.transform.parent = transform.parent;

                        }
                        parser++;
                    }
                    parser = 0;
                }
                else
                {
                    if (showUnknown)
                    {
                        var toList = Instantiate(listItem, new Vector2(1f, 1f), Quaternion.identity); //display locked animal
                        toList.GetComponent<Image>().sprite = locked;
                        AnimalLists.iconList.Add(toList);//add to a list for sorting
                        toList.GetComponentInChildren<Text>().text = "Unknown";
                        toList.GetComponentInChildren<Text>().color = SetColor(AnimalLists.AllAnimals[i]);
                        toList.transform.parent = transform.parent;
                    }

                }
            }

        }

        parser = 0;
        Destroy(gameObject);
    }
}

        
   


 
