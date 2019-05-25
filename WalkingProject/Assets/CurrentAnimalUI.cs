using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CurrentAnimalUI : MonoBehaviour
{

    public Sprite AnimalModel;
    public GameObject player;
    public Text AnimalName,BonusText;
    public Image progressBar;
    Vector3 mouseClick = new Vector3(0, 0,0);
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


    void OnMouseDown()
    {
        mouseClick = Input.mousePosition;
    }

    void OnMouseDrag()
    {
        Vector3 offset = (Input.mousePosition - mouseClick);
        transform.Rotate(new Vector3(0, offset.x * 0.005f, 0));
    }

    public void UpdateSelectedAnimalUI()
    {
        AnimalModel = player.GetComponent<Player>().selectedAnimal.GetComponent<AnimalStats>().Icon;
        //gameObject.GetComponent<MeshFilter>().mesh = AnimalModel.GetComponent<MeshFilter>().sharedMesh;
        gameObject.GetComponent<Image>().sprite = AnimalModel;
        AnimalName.text = player.GetComponent<Player>().selectedAnimal.name;
        BonusText.text = player.GetComponent<Player>().selectedAnimal.GetComponent<AnimalStats>().BonusText;

    }
}
