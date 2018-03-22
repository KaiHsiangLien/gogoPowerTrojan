using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.SceneManagement;

public class StoreBackButtonListener : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OnClickBack()
    {
        FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.prevUIPanelNumber);
        if (FindObjectOfType<CarPickUp>())
        {
            FindObjectOfType<CarPickUp>().PickCar(StaticVariables.carID);
            FindObjectOfType<CarPickUp>().ChangeCarDetail(StaticVariables.carID);
        }
    }
}
