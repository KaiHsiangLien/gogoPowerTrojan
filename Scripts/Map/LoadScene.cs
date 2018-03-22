using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScene : MonoBehaviour {
    public string nextSceneName;
    // Use this for initialization
    public bool useAsyncMethod = false;
	void Start () {
        if (nextSceneName != "")
        {
            LoadSceneByName(nextSceneName);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void LoadSceneByName(string name)
    {

        if (useAsyncMethod)
        {
            SceneManager.LoadSceneAsync(name);
        }
        else
        {
            SceneManager.LoadScene(name);

        }
    }

    public void LoadUI(int num)
    {
        StaticVariables.currSceneNumber = num;
        //FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.prevUIPanelNumber);

        SceneManager.LoadScene("UI");
    }
}
