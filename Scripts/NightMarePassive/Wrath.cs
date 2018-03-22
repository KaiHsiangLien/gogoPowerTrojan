using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wrath : MonoBehaviour {

    // Use this for initialization
    //passive: buff on AI
    void Start () {
        if (GetComponent<AIScript>())
        {
            GetComponent<CarStatus>().attackBase *= 2;
            GetComponent<CarStatus>().armorPenetration += 99999;//real damage for Wrath
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
