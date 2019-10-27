using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutorial : MonoBehaviour
{

    public GameObject pickOne;
    public List<GameObject> steps= new List<GameObject>();
    public GameObject current;
    public int count;
    GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        count = 0;
        Instantiate(pickOne, GameObject.FindGameObjectWithTag("Canvas").transform);
        
    }


    public void StartTutMessage()
    {

        count = 0;
        current = Instantiate(steps[0], GameObject.FindGameObjectWithTag("Canvas").transform);
        player = GameObject.FindGameObjectWithTag("Player");
    }

    public void NextStep()
    {
        

        Destroy(current);
        count++;
        current = Instantiate(steps[count], GameObject.FindGameObjectWithTag("Canvas").transform);

        if (count == 2)
        {
            player.GetComponent<Player>().ApplyDistance(500, true);//force ant
        }
    }

    public void FinalStep()
    {
        Destroy(current);
        Destroy(GameObject.Find("Tut5(Clone)"));
        current = Instantiate(steps[steps.Count-1], GameObject.FindGameObjectWithTag("Canvas").transform);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
