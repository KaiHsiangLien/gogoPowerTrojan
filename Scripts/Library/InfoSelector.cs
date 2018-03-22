using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InfoSelector : MonoBehaviour
{
    private bool isNight;
    public Image Background;
    // Use this for initialization
    void Start () {
        isNight = StaticVariables.playingNightmare;
        if (StaticVariables.playingNightmare)
        {
            Background.color = Color.black;
            GetComponent<Image>().color = Color.black;
            foreach (Text txt in GetComponentsInChildren<Text>())
            {
                txt.color = Color.white;
            }
        }
        else
        {
            Background.color = Color.white;
            GetComponent<Image>().color = Color.white;
            foreach (Text txt in GetComponentsInChildren<Text>())
            {
                txt.color = Color.black;
            }
        }
	}
	
	// Update is called once per frame
	void Update () {
        if (isNight != StaticVariables.playingNightmare)
        {
            isNight = StaticVariables.playingNightmare;
            if (StaticVariables.playingNightmare)
            {
                Background.color = Color.black;
                GetComponent<Image>().color = Color.black;
                foreach (Text txt in GetComponentsInChildren<Text>())
                {
                    txt.color = Color.white;
                }
            }
            else
            {
                Background.color = Color.white;
                GetComponent<Image>().color = Color.white;
                foreach (Text txt in GetComponentsInChildren<Text>())
                {
                    txt.color = Color.black;
                }
            }
        }
	}
}
