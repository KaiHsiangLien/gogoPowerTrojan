using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndingVideoSelector : MonoBehaviour {

	// Use this for initialization
	void Start () {
        if (StaticVariables.firstClear)
        {
            FindObjectOfType<OpeningPlayer>().videoName = "EndingVideo.mp4";
        }
        else if (StaticVariables.firstClearNightmare)
        {
            FindObjectOfType<OpeningPlayer>().videoName = "Nightmare_Ending.mp4";

        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
