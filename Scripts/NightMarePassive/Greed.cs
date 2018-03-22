using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Greed : MonoBehaviour {
    public float magnetThres = 100;
    public float magnetSpeed = 75;
	// Use this for initialization
	void Start () {
		
	}

    // Update is called once per frame

    //passive: buff on AI
    void Update () {
        if (GetComponent<AIScript>() != null)
        {
            foreach (PickupRotate pickup in FindObjectsOfType<PickupRotate>())
            {
                if ((transform.position - pickup.transform.position).magnitude < magnetThres)
                {
                    float deltaDist = Time.deltaTime * magnetSpeed;
                    float currDist = (transform.position - pickup.transform.position).magnitude;
                    Vector3 newPosition = (transform.position - pickup.transform.position) * (deltaDist / currDist) + pickup.transform.position;
                    pickup.transform.position = newPosition;
                }
            }
        }
	}
}
