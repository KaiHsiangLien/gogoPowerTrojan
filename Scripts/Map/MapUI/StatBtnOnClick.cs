﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using UnityEngine.SceneManagement;
public class StatBtnOnClick : MonoBehaviour
{
    public bool pauseFlag;
    public Button leaveBtn, againBtn;
    public StatImageManager statManager;
    public GameObject reloadImage;
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void LeaveButtonOnClick()
    {
        if (pauseFlag)
        {
            //resume game
            setPauseFlag(false);
            statManager.setPauseFlag(false);
            statManager.gameObject.SetActive(false);
            Time.timeScale = 1;
            foreach (AudioSource audio in FindObjectsOfType<AudioSource>())
            {
                if(!audio.isPlaying)
                    audio.Play();
            }
            return;
        }
        //clean Car flags on leaving la_large scene; 
        Debug.Log("StaticVariables.firstClear = " + StaticVariables.firstClear);
        if (StaticVariables.firstClear || StaticVariables.firstClearNightmare)
        {
            SceneManager.LoadScene("EndScene");
        }
        else
        {
            SceneManager.LoadScene("RaceSummary");
        }
    }

    public void PlayAgainOnClick()
    {
        if (pauseFlag)
        {
            //leave game
            Time.timeScale = 1;
            setPauseFlag(false);
            statManager.setPauseFlag(false);
            statManager.gameObject.SetActive(false);
            StaticVariables.ranking = 999;
            SceneManager.LoadScene("RaceSummary");
            return;
        }
        //clean Car flags on leaving la_large scene; 
        
        SceneManager.LoadScene("LoadScene");
    }


    public void setPauseFlag(bool flag)
    {
        pauseFlag = flag;
    }
}
