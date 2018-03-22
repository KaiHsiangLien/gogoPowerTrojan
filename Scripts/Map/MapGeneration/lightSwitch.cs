using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lightSwitch : MonoBehaviour {
    private Light lightSource;

    public GameObject FlameParticles;
    public bool isTriggered = false;
    public float triggerThres = 20;
    public float triggerChance = 0.2f;
    private Transform target;
    public Vector3 flameOffset = new Vector3(10, 0, -10);
    private void OnDrawGizmos()
    {
        LightSwitch();
    }
    // Use this for initialization
    void Start () {
        if (Random.value > triggerChance || !(StaticVariables.playingNightmare && StaticVariables.mapID==4))
        {
            isTriggered = true;
        }
        else
        {
            isTriggered = false;
            target = FindObjectOfType<PlayerController>().transform;
        }
        LightSwitch();
    }
    


    // Update is called once per frame
    void Update () {
        if (!isTriggered && target)
        {
            if ((transform.position - target.position).magnitude < triggerThres)
            {
                isTriggered = true;
                GameObject flame = Instantiate(FlameParticles, new Vector3(), new Quaternion(), transform);
                flame.GetComponent<FlameDamage>().myVelocity = 0;
                flame.transform.localPosition = flameOffset*Random.Range(0.5f,1.5f);
                float randomRotX = Random.Range(-30, 30), randomRotY = Random.Range(-30, 30);
                flame.transform.localRotation = Quaternion.Euler(new Vector3(randomRotX, randomRotY, 0));
                
            }
        }
    }

    void LightSwitch()
    {
        bool lightOn = !FindObjectOfType<Skybox>().material.name.StartsWith("Sunny");
        lightSource = GetComponentInChildren<Light>();
        if (lightSource != null)
        {
            lightSource.enabled = lightOn;
        }
    }
}
