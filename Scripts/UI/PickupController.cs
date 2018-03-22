using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PickupController : MonoBehaviour {
    public GameObject [] pickupScenes;
	// Use this for initialization
	void Start () {
        LoadMyScene(0);

    }

    public void LoadMyScene(int num = -1)
    {
        if (num < 0 || num >= pickupScenes.Length)
        {
            num = StaticVariables.currSceneNumber;
        }
        StaticVariables.currSceneNumber = num;
        foreach (GameObject scene in pickupScenes)
        {
            scene.SetActive(false);
        }
        if (StaticVariables.currSceneNumber < 0 || StaticVariables.currSceneNumber >= pickupScenes.Length)
        {
            StaticVariables.currSceneNumber = 0;
        }
        pickupScenes[StaticVariables.currSceneNumber].SetActive(true);
    }
	
	// Update is called once per frame
	void Update () {
    }

    public void OnClickNext()
    {
      
        if (StaticVariables.currSceneNumber == 0)
        {
            StaticVariables.mapID = MapPickUp.routePicked;

        }
        else if (StaticVariables.currSceneNumber == 1)
        {
            StaticVariables.characterID = CharacterPickUp.characterPicked;        }
        else if (StaticVariables.currSceneNumber == 2)
        {
            StaticVariables.carID = CarPickUp.carPicked;
        }

        if (StaticVariables.currSceneNumber == pickupScenes.Length - 1)
        {
            StaticVariables.currSceneNumber = 0;
            SceneManager.LoadScene("LoadScene");
        }
        else
        {
            ++StaticVariables.currSceneNumber;
            LoadMyScene();
        }
        if (FindObjectOfType<CarPickUp>())
        {
            FindObjectOfType<CarPickUp>().ChangeCarDetail(StaticVariables.carID);
            FindObjectOfType<CarPickUp>().charIcon.sprite = FindObjectOfType<CarPickUp>().charIconList[StaticVariables.characterID];
            FindObjectOfType<CarPickUp>().carIcon.sprite = FindObjectOfType<CarPickUp>().carIconList[StaticVariables.carID];
        }
        if (FindObjectOfType<CharacterPickUp>())
        {
            FindObjectOfType<CharacterPickUp>().characterIcon.sprite = FindObjectOfType<CharacterPickUp>().characterIcons[StaticVariables.characterID];

        }
    }

    

    public void OnClickBack()
    {
        
        if (StaticVariables.currSceneNumber == 0)
        {
            StaticVariables.mapID = MapPickUp.routePicked;
        }
        else if (StaticVariables.currSceneNumber == 1)
        {
            StaticVariables.characterID = CharacterPickUp.characterPicked;
        }
        else if (StaticVariables.currSceneNumber == 2)
        {
            StaticVariables.carID = CarPickUp.carPicked;
        }
        if (StaticVariables.currSceneNumber == 0)
        {
            StaticVariables.currSceneNumber = 0;
            FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.LOBBY_UI_ID);
            
        }
        else
        {
            --StaticVariables.currSceneNumber;
            LoadMyScene();
        }
        if (FindObjectOfType<CarPickUp>())
        {
            FindObjectOfType<CarPickUp>().ChangeCarDetail(StaticVariables.carID);
            FindObjectOfType<CarPickUp>().charIcon.sprite = FindObjectOfType<CarPickUp>().charIconList[StaticVariables.characterID];
            FindObjectOfType<CarPickUp>().carIcon.sprite = FindObjectOfType<CarPickUp>().carIconList[StaticVariables.carID];
        }
        if (FindObjectOfType<CharacterPickUp>())
        {
            FindObjectOfType<CharacterPickUp>().characterIcon.sprite = FindObjectOfType<CharacterPickUp>().characterIcons[StaticVariables.characterID];

        }

    }
}
