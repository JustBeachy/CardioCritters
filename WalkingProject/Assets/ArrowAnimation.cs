using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowAnimation : MonoBehaviour
{
    float timer;
    int flip = 1;
    // Start is called before the first frame update
    void Start()
    {
        timer = .5f;
    }

    // Update is called once per frame
    void Update()
    {
        timer -= Time.deltaTime;

        if(timer<=0)
        {
            timer = .5f;
            flip *= -1;
        }

        transform.position = new Vector2(transform.position.x, transform.position.y + (64 * Time.deltaTime * flip));
    }
}
