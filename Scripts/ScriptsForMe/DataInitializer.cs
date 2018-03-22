using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataInitializer : MonoBehaviour {
    public bool debugInit = false;
	// Use this for initialization
	void Start () {
        if (StaticVariables.saveData == null)
        {
            Load.initialize(debugInit);
            Debug.Log("initialize here and only here");
        }
	}
	
}
