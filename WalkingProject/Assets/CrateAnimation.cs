﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CrateAnimation : MonoBehaviour
{
    public Image BG;
    public RawImage RT;
    public Camera cam;
    public Text Title;
    float spin = 1;
    bool start = false;
    float timer = 0;
    GameObject camIt;
    Camera newCam;
    RenderTexture CameraTexture;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void Open()
    {
        start = true;
    }

    public void CrateOpeningAnimation(GameObject ob)
    {

        
        newCam = Instantiate(cam, new Vector3(-900 * Player.CameraCount, 1000, 950), Quaternion.identity);//spawn camera
        newCam.transform.Rotate(22, 0, 0);
        CameraTexture = new RenderTexture(400, 400, 24); //make new rendertexture
        newCam.GetComponent<Camera>().targetTexture = CameraTexture; //assign rendertexture to camera
        RT.texture = CameraTexture; //assignt rendertexture to raw image
        camIt = Instantiate(ob, new Vector3(-900 * Player.CameraCount, 900, 1200), Quaternion.identity); //spawn crate to camera
        camIt.tag = "PopUp";
        Player.CameraCount++;

       
    }

    // Update is called once per frame
    void Update()
    {
        if (start)
        {
            Title.text = "";
            timer += Time.deltaTime;

            if (timer > 3)
            {
                
                Destroy(newCam);
                Destroy(camIt);
                Destroy(RT);
                Destroy(CameraTexture);
                Destroy(gameObject);
            }

            if (timer > 1.5)
            {
                var tempColor = BG.color;
                tempColor.a += .66f * Time.deltaTime;
                BG.color = tempColor; //tint screen
            }
            spin *= 1.03f;
            camIt.transform.Rotate(new Vector3(0, spin) * Time.deltaTime);

        }
        else
        {
            // floaty animation?
        }
    }
}
