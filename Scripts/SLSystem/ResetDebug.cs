using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetDebug : MonoBehaviour {

    public GameObject confirmPanel;
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OnClickResetDebug()
    {
        Load.loadStateDebug();
        confirmPanel.SetActive(false);

        FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.LOBBY_UI_ID);
        //SceneManager.LoadScene("LobbyDebug");
    }
}
