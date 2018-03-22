using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MyContentFitter : MonoBehaviour {

	// Use this for initialization
	void Start () {
        foreach (RectTransform rect in GetComponentsInChildren<RectTransform>())
        {
            Debug.Log(rect.name +" size = " + rect.sizeDelta.ToString());
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
