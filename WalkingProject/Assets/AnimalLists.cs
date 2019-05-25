using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalLists : MonoBehaviour
{
    public List<GameObject> lcommons;
    public List<GameObject> lrares;
    public List<GameObject> lepics;
    public List<GameObject> llegendaries;

    public static List<GameObject> iconList = new List<GameObject>(); //stores icons in inventory screen

    static public List<GameObject> commons = new List<GameObject>();
    static public List<GameObject> rares = new List<GameObject>();
    static public List<GameObject> epics = new List<GameObject>();
    static public List<GameObject> legendaries = new List<GameObject>();
    static public List<GameObject> AllAnimals = new List<GameObject>();
    // Start is called before the first frame update
    void Awake()
    {
        commons = lcommons;
        rares = lrares;
        epics = lepics;
        legendaries = llegendaries;
        AllAnimals.AddRange(commons);
        AllAnimals.AddRange(rares);
        AllAnimals.AddRange(epics);
        AllAnimals.AddRange(legendaries);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
