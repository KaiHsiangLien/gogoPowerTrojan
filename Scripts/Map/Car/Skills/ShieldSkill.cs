using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldSkill : Skill
{
    public GameObject shieldParticle;
    private float timer = 0;
    private float skillTime = 3;
    private GameObject shieldInstance;
    // Use this for initialization
    void Start () {
		
	}

    public override bool ableToActivate()
    {
        return !isSkillUsing;

    }
    // Update is called once per frame
    void Update () {
		if(isSkillUsing)
        {
            timer += Time.deltaTime;
            if (timer > skillTime)
            {
                stopSkill();
            }
        }
	}

  
    public override void stopSkill()
    {
        if (!isSkillUsing)
        {
            return;
        }
        GetComponent<CarStatus>().damageReduction -= 1;
        isSkillUsing = false;
        timer = 0;
        if (shieldInstance)
        {
            Destroy(shieldInstance);
        }
    }
    public override void activateSkill()
    {
        if (ableToActivate())
        {

            GetComponent<CarStatus>().damageReduction +=  1;
            isSkillUsing = true;
            Quaternion spawnRot = Quaternion.Euler(transform.rotation.eulerAngles + new Vector3(90, 0, 0));
            shieldInstance = Instantiate(shieldParticle, transform.position, spawnRot, transform);
            shieldInstance.GetComponent<ParticleSystem>().Play();
            timer = 0;
        }
    }


}
