using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NightController : MonoBehaviour {
    // Use this for initialization
    public Sprite nightSprite, daySprite;
	void Start () {
        if (StaticVariables.playingNightmare)
        {
            GetComponent<Image>().sprite = nightSprite;
        }
        else
        {
            GetComponent<Image>().sprite = daySprite;
        }

    }
	
	// Update is called once per frame
	void Update () {
        if (StaticVariables.playingNightmare )
        {
            if(!GetComponent<Image>().sprite.Equals(nightSprite))
                GetComponent<Image>().sprite = nightSprite;
        }
        else  
        {
            if(!GetComponent<Image>().sprite.Equals(nightSprite))
                GetComponent<Image>().sprite = daySprite;
        }
    }
}
