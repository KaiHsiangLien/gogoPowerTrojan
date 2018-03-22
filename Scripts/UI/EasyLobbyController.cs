using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class EasyLobbyController : MonoBehaviour {
    public Button NightmareBtn;
    public Button NormalBtn;
    public Button ProfileBtn;
    public Button TutorialBtn;
    //public Image line;

    // Use this for initialization
    void Start()
    {
        StaticVariables.currSceneNumber = 0;
        //		Load.initialize ();
        //		StaticVariables.SetProgress (6);

        if (StaticVariables.GetProgress() < 6)
        {
            NightmareBtn.gameObject.SetActive(false);
            //NightmareBtn.interactable = false;
        }
        else
        {

            NightmareBtn.gameObject.SetActive(true);
        }
        /*
        else
        {

            NightmareBtn.gameObject.SetActive(true);
            //NightmareBtn.interactable = true;

            Vector3 normalPos = NormalBtn.transform.position;
            normalPos.y -= 55f;
            NormalBtn.transform.position = normalPos;

            Vector3 profilePos = ProfileBtn.transform.position;
            profilePos.y -= 55f;
            ProfileBtn.transform.position = profilePos;

            Vector3 tutorialPos = TutorialBtn.transform.position;
            tutorialPos.y -= 55f;
            TutorialBtn.transform.position = tutorialPos;

            Vector3 linePos = line.transform.position;
            linePos.y -= 55f;
            line.transform.position = linePos;


        }*/

    }/*
    public Button NightmareBtn;
	// Use this for initialization
	void Start () {
        if (StaticVariables.GetProgress() < 6)
        {
            NightmareBtn.interactable = false;
        }
        else
        {
            NightmareBtn.interactable = true;
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}*/

    public void OnClickNormal()
    {
        StaticVariables.playingNightmare = false;
        FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.PICKUP_UI_ID);
       // SceneManager.LoadScene("CarPickUp");
    }
    public void OnClickNightmare()
    {
        StaticVariables.playingNightmare = true;
        FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.PICKUP_UI_ID);
        //SceneManager.LoadScene("CarPickUp");
    }
    public void OnClickLibrary()
    {
        FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.ACHIVEMENT_UI_ID);
        //SceneManager.LoadScene("Achievements");
    }
    public void OnClickTutorial()
    {
        SceneManager.LoadScene("TutorialLoadScene");
    }
}
