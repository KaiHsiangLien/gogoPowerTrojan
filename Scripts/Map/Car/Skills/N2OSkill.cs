using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class N2OSkill : Skill
{

    private Rigidbody rb;
    private float N2OPower = 5;
    private float N2OTopSpeedModifier = 2f;
    private float N2ORBAngularDrag = 2f;
    public ParticleSystem[] N2OParticles;

    private float N2OTimer = 0;
    private float N2OTime = 3;
    private bool isN2OReady = true;
    

    // Use this for initialization
    void Start()
    {
        isSkillUsing = false;
        rb = GetComponent<Rigidbody>();
        skillSound = SetUpEngineAudioSource(skillAudio);
    }

    // Update is called once per frame
    void Update()
    {

    }
    public override bool ableToActivate()
    {
        return isN2OReady && !isSkillUsing;

    }

    private void FixedUpdate()
    {
        if (isSkillUsing)
        {
            if (Time.time - N2OTimer < N2OTime)
            { 
                rb.AddForce(transform.forward * N2OPower, ForceMode.Acceleration);
            }
            else
            {
                stopSkill();

            }
        }
    }

    public override void stopSkill()
    {
        if(skillSound)
            skillSound.volume = 0;
        isN2OReady = true;
        isSkillUsing = false;
        foreach (ParticleSystem N2O in N2OParticles)
        {
            N2O.Stop();
        }

        GetComponent<CarStatus>().topSpeedModifier = 1;
        GetComponent<Car>().angularDragModifier = 1;
        N2OTimer = 0;
    }

    public override void activateSkill()
    {

        //originalTopSpeed = GetComponent<CarStatus>().topSpeed;
        if (ableToActivate())
        {
            //Debug.Log("inheritance called");
            skillSound.volume = 1;
            GetComponent<CarStatus>().topSpeedModifier = N2OTopSpeedModifier;
            GetComponent<Car>().angularDragModifier = N2ORBAngularDrag;
            isN2OReady = false;
            isSkillUsing = true;
            foreach (ParticleSystem N2O in N2OParticles)
            {
                N2O.Play();
            }
            N2OTimer = Time.time;
        }
        
    }
}
