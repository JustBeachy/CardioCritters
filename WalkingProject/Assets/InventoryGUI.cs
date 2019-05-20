using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryGUI : MonoBehaviour
{
    public GameObject player;
    public List<GameObject> zooList;
    int parser=0;
    public GameObject listItem;
    public Sprite locked;
    

    
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
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

        for (int i = 0; i < AnimalLists.AllAnimals.Count; i++)
        {

            if (zooList.Contains(AnimalLists.AllAnimals[i]))
            {
                foreach (GameObject sameAnim in zooList)
                {
                    if (sameAnim.name == AnimalLists.AllAnimals[i].name)
                    {
                        var toList =Instantiate(listItem, new Vector2(1.5f * ((i+parser) % 3), 1.5f * ((i+parser)/3)), Quaternion.identity); //display animal
                        toList.GetComponent<Image>().sprite = zooList[parser].GetComponent<AnimalStats>().Icon;
                        toList.GetComponentInChildren<Text>().text = zooList[parser].name;
                        toList.transform.parent = transform.parent;

                        parser++;
                    }
                }
            }
            else
            {
                var toList =Instantiate(listItem, new Vector2(1.5f * ((i+parser) % 3), 1.5f * ((i+parser) / 3)), Quaternion.identity); //display locked animal
                toList.GetComponent<Image>().sprite = locked;
                toList.GetComponentInChildren<Text>().text = "Unknown";
                toList.transform.parent = transform.parent;
                parser++;
            }

        }
        parser = 0;
    }
}

        
   


 
