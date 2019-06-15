using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoreInfoAnimal : MonoBehaviour
{
    public Text AnimalName;
    public Text BonusText;
    public GameObject PickedAnimal;
    public GameObject whoCreatedMe;
    // Start is called before the first frame update
    void Start()
    {
       
    }
    public void CloseWindow()
    {
        Destroy(gameObject);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
