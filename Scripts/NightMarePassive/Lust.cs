using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lust : MonoBehaviour {
    public float lustRate = 70; // 70 points persecond in collision
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    //passive: debuff on Player
    private void OnCollisionStay(Collision collision)
    {
        if (GetComponent<PlayerController>() != null)
        {
            GetComponent<CarStatus>().decreaseMP(Time.deltaTime * lustRate);
            GetComponent<CarStatus>().decreaseHP(Time.deltaTime * lustRate*0.5f);
        }
    }
}
