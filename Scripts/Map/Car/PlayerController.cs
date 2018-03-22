using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    private Car car;

	// Use this for initialization
	void Start () {
        car = GetComponent<Car>();
	}
	
	// Update is called once per frame
	void Update () {
	}

    private void FixedUpdate()
    {
        

        if (Input.GetKeyDown(KeyCode.N))
        {
            car.useSkill();
        }
        if (Input.GetKeyDown(KeyCode.M))
        {
            car.GetComponent<ItemCollector>().useItem();
        }

        float motorTorqueFactor = 1;// * Input.GetAxis("Vertical");
        float brakeTorqueFactor = 0;//Input.GetAxis("Jump");

        car.ApplyPedal(motorTorqueFactor, brakeTorqueFactor);

        


        float steerFactor = Input.acceleration.x;// Input.GetAxis("Horizontal");    //
        if (Input.acceleration.x == 0)
        {
            steerFactor = Input.GetAxis("Horizontal");
        }
        car.ApplySteer(steerFactor);

    }

}
