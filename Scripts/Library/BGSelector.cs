using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BGSelector : MonoBehaviour {

    public Sprite normalBG;
    public Sprite nightmareBG;
    private bool isNight;
    // Use this for initialization
    void Start () {
        isNight = StaticVariables.playingNightmare;
        if (StaticVariables.playingNightmare)
        {
            GetComponent<Image>().sprite = nightmareBG;
        }
        else
        {
            GetComponent<Image>().sprite = normalBG;
        }
	}
	
	// Update is called once per frame
	void Update () {
        if (isNight != StaticVariables.playingNightmare)
        {

            isNight = StaticVariables.playingNightmare;
            if (StaticVariables.playingNightmare)
            {
                GetComponent<Image>().sprite = nightmareBG;
            }
            else
            {
                GetComponent<Image>().sprite = normalBG;
            }
        }
		
	}
}
