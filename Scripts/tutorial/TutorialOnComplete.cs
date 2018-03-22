using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialOnComplete : MonoBehaviour {
    public AudioSource musicController;
    public GameObject PlayerCanvas;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        if (Input.GetButton("Fire1"))
        {
            musicController.Play(); 
            
            PlayerCanvas.SetActive(true);
            gameObject.SetActive(false);
        }	
	}

}
