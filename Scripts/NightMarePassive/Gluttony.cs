using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gluttony : MonoBehaviour {
    public Camera[] cameras;
    public float gluttonyRate = 1.1f;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    //passive: debuff on Player
    public void Glutton()
    {
        if (GetComponent<PlayerController>())
        {
            foreach (Camera cam in FindObjectsOfType<Camera>())
            {
                if (cam.GetComponent<EnemyBarLookAt>())
                {
                    cam.GetComponent<EnemyBarLookAt>().MultiplyHeightDist(gluttonyRate);
                }
            }
            GetComponent<Transform>().localScale *= gluttonyRate;
            GetComponent<CarStatus>().topSpeedBase /= gluttonyRate;
        }
    }
}
