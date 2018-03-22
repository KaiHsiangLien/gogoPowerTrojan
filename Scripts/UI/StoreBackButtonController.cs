using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StoreBackButtonController : MonoBehaviour {
    private string mySceneName;
	// Use this for initialization
	void Start () {
        mySceneName = SceneManager.GetActiveScene().name;
        //Debug.Log("my scene name is " + mySceneName);
        StaticVariables.storeBackButtonSceneName = mySceneName;

    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
