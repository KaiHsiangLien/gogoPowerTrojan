﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class RaceSummary : MonoBehaviour {
    private bool isAsyncLoading = false;
    public Text description;
	public Text grade;
	private int rank;
	private int coin;
	private string time;
    public GameObject loadingRingGIF;
    
    public GameObject[] characters;

    public int debugChar = -1;
    public bool isStartDebug = false;
    // Use this for initialization
    void Start () {
        if (isStartDebug)
        {
            Load.initialize();
            StaticVariables.GetCharacterAttribute(StaticVariables.characterID);
        }
        
        if (debugChar != -1)
        {
            StaticVariables.characterID = debugChar;
        }
        for (int i =0;i< characters.Length;++i)
        {
            if (i == StaticVariables.characterID)
            {
                Debug.Log("character " + i + " is displayed");
                characters[i].SetActive(true);
            }
        }
        /*
		int playerID = PlayerPrefs.GetInt ("PlayerID");

		if(playerID == 0) {
			Destroy (character2);
		} else if(playerID == 1) {
			Destroy (character1);
		}
        */
        
        coin =(int)( StaticVariables.coinNumber *(1+ StaticVariables.coinModifier));//PlayerPrefs.GetInt ("Coins");
		rank = StaticVariables.ranking;
        time = StaticVariables.raceTimeStr;//PlayerPrefs.GetString ("TotalTime");
        if (StaticVariables.ranking == 1)//wins
        {
            string[] timeSplit = time.Split(':');
            float record = float.Parse(timeSplit[0]) * 60 + float.Parse(timeSplit[1]);
            if (StaticVariables.playingNightmare)
            {
                StaticVariables.SetMaxRecordOfMap(StaticVariables.mapID+7, record);
            }
            else
            {
                StaticVariables.SetMaxRecordOfMap(StaticVariables.mapID, record);
            }
        }
        else {
            Debug.Log("ranking = " + StaticVariables.ranking);
        }
        /*
		if (rank == 1) {
			grade.text = "A";
			description.text = "CONGRATULATIONS!\nYou were the FIRST ONE who reached the classroom!! You spent " + time + " to reach the classroom. Professor was very happy and decided to give you a BIG A!!";
		} else {
			grade.text = "B";
			description.text = "UNFORTUNATELY...\nYou were NOT the first one who reached the classroom... You spent " + time + " to reach the classroom. As a result, you are not assigned an A... Try again!!";
		}
		description.text += "\nYou've eared " + coin + " coins during the race. You can go to store to make upgration!";
        */


    }
	
	// Update is called once per frame
	void Update () {

        if (StaticVariables.ranking == 1)
        {
            grade.text = "YOU  WIN!!";
        }
        else
        {

            grade.text = "FAILED ... ";
        }

    }

    public void ToMainMenu () {
        if (isAsyncLoading)
        {
            return;
        }
        StaticVariables.currUIPanelNumber = StaticVariables.PICKUP_UI_ID;
        loadingRingGIF.SetActive(true);
        isAsyncLoading = true;

        SceneManager.LoadSceneAsync("UI");
    }
    public void ToLobby()
    {
        if (isAsyncLoading)
        {
            return;
        }
        StaticVariables.currUIPanelNumber = StaticVariables.LOBBY_UI_ID;
        loadingRingGIF.SetActive(true);
        isAsyncLoading = true;
        SceneManager.LoadSceneAsync("UI");
    }

    public void ToStore() {
		//SceneManager.LoadScene ("");
	}

	public void PlayAgain()
    {
        if (isAsyncLoading)
        {
            return;
        }
        //loadUI.SetActive(true);
        loadingRingGIF.SetActive(true);
        isAsyncLoading = true;
        SceneManager.LoadSceneAsync("LoadScene");
	}

	public void QuitGame() {
		#if UNITY_EDITOR
		UnityEditor.EditorApplication.isPlaying = false;
		#else
		Application.Quit();
		#endif
	}
}
