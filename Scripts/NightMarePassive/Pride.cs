using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pride : MonoBehaviour {
    public float prideBuffRate = 4;
    public float prideHPRecover = 100;
    public float prideMPRecover = 70;

    private bool isBuffed = false;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (GetComponent<AIScript>())
        {
            Car car = GetComponent<Car>();
            CarStatus carStatus = GetComponent<CarStatus>();
            if (isBuffed && FindObjectOfType<RankingSystem>())
            {
                if (FindObjectOfType<RankingSystem>().GetCarRanking(car) != 1)
                {
                    //remove buff
                    isBuffed = false;
                    RemovePrideBuff(carStatus);
                }

            }
            else if (!isBuffed && FindObjectOfType<RankingSystem>())
            {
                //put buff
                if (FindObjectOfType<RankingSystem>().GetCarRanking(car) == 1)
                {
                    isBuffed = true;
                    PutPrideBuff(carStatus);
                }
            }

        }
	}

    void PutPrideBuff(CarStatus status)
    {
        status.attackBase *= prideBuffRate;
        status.defenseBase *= prideBuffRate;
        status.skillCDBase *= prideBuffRate;
        status.mpRecover += prideMPRecover;
        status.hpRecover += prideHPRecover;
        status.topSpeedBase *= prideBuffRate;
    }

    void RemovePrideBuff(CarStatus status)
    {
        status.attackBase /= prideBuffRate;
        status.defenseBase /= prideBuffRate;
        status.skillCDBase /= prideBuffRate;
        status.mpRecover -= prideMPRecover;
        status.hpRecover -= prideHPRecover;
        status.topSpeedBase /= prideBuffRate;
    } 
}
