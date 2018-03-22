using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sloth : MonoBehaviour {
    public float slothRate = 0.99f;
    private float slothPeriod = 1;
    private float slothTimer = 0;
	// Use this for initialization
	void Start () {
		
	}

    // Update is called once per frame
    //passive: debuff on Player
    void Update () {
        if (GetComponent<PlayerController>())
        {
            slothTimer += Time.deltaTime;
            if (slothTimer >= slothPeriod)
            {
                slothTimer = 0;
                GetComponent<CarStatus>().topSpeedBase *= slothRate;
            }
        }

    }
}
