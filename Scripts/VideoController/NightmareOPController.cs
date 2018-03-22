using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NightmareOPController : MonoBehaviour {

    public GameObject nightmareOpeningPlayer;
    public GameObject UICanvas;
	// Use this for initialization
	void Start () {
        if (!StaticVariables.saveData["nightmareInit"].b && StaticVariables.playingNightmare)
        {
            Debug.Log("init nightmare");
            StaticVariables.saveData.SetField("nightmareInit", true);
            Save.saveState();
            UICanvas.SetActive(false);
            nightmareOpeningPlayer.SetActive(true);
        }
        else
        {
            UICanvas.SetActive(true);
            nightmareOpeningPlayer.SetActive(false);

        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
