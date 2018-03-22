﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlameDamage : TrapWeapons
{
    private ParticleSystem FlameParticles;
    public float damageValue = 0.1f;//(DPS)
    

    public float myVelocity = 150;
    
    void Start () {
        FlameParticles = GetComponent<ParticleSystem>();

    }
	
	// Update is called once per frame
	void Update () {
        GetComponent<Rigidbody>().velocity = transform.up * myVelocity;
    }


    private void OnTriggerStay(Collider other)
    {
        attacker = GetComponentInParent<CarStatus>();

        if (other.GetComponent<CarStatus>() && other.GetComponent<CarStatus>().Equals(attacker))
            return;
        CarStatus carStatus = other.GetComponent<CarStatus>();
        if (carStatus)
        {
            if (other.GetComponent<TimeStopSkill>() != null && other.GetComponent<TimeStopSkill>().isSkillUsing)
            {
                return;
            }
            other.GetComponent<CarStatus>().isAttackedBy(attacker, damageValue*Time.deltaTime);
            //other.GetComponent<CarStatus>().decreaseHP(damageValue);
        }
    }

    private void OnParticleCollision(GameObject other)
    {
        attacker = GetComponentInParent<CarStatus>();

        if (other.GetComponent<CarStatus>() && other.GetComponent<CarStatus>().Equals(attacker))
            return;
        CarStatus carStatus = other.GetComponent<CarStatus>();
        if (carStatus)
        {
            if (other.GetComponent<TimeStopSkill>() != null && other.GetComponent<TimeStopSkill>().isSkillUsing)
            {
                return;
            }
            other.GetComponent<CarStatus>().isAttackedBy(attacker, damageValue);
            //other.GetComponent<CarStatus>().decreaseHP(damageValue);
        }
    }
}
