using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScrollListInit : MonoBehaviour {

	// Use this for initialization
	void Start () {
        GetComponent<Scrollbar>().value = 1;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
