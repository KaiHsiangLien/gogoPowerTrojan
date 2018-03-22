using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Envy : MonoBehaviour {

    public float envyDebuffRate = 4;

    private bool isDebuffed = false;
    // Use this for initialization
    void Start () {
		
	}

    // Update is called once per frame
    //passive: debuff on Player
    void Update () {
        if (GetComponent<PlayerController>())
        {
            Car car = GetComponent<Car>();
            CarStatus carStatus = GetComponent<CarStatus>();
            if (isDebuffed && FindObjectOfType<RankingSystem>())
            {
                if (FindObjectOfType<RankingSystem>().GetCarRanking(car) != 1)
                {
                    //remove debuff
                    isDebuffed = false;
                    RemoveEnvyDebuff(carStatus);
                }

            }
            else if (!isDebuffed && FindObjectOfType<RankingSystem>())
            {
                if (FindObjectOfType<RankingSystem>().GetCarRanking(car) == 1)
                {
                    //put debuff
                    isDebuffed = true;
                    PutEnvyDebuff(carStatus);
                }
            }

        }
    }

    void RemoveEnvyDebuff(CarStatus status)
    {
        status.attackBase *= envyDebuffRate;
        status.defenseBase *= envyDebuffRate;
        status.skillCDBase *= envyDebuffRate;
        status.topSpeedBase *= envyDebuffRate;
    }
    void PutEnvyDebuff(CarStatus status)
    {
        status.attackBase /= envyDebuffRate;
        status.defenseBase /= envyDebuffRate;
        status.skillCDBase /= envyDebuffRate;
        status.topSpeedBase /= envyDebuffRate;
    }

}
