﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BouncingWall : MonoBehaviour
{
   // public ParticleSystem sparkOnContact;
    private Rigidbody rb;
    public float maxTorque = 100;
    private Car m;
    // Use this for initialization
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.maxAngularVelocity = 25;
        m = GetComponent<Car>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnCollisionEnter(Collision collision)
    {
        foreach (ContactPoint contact in collision.contacts)
        {
            /*if (contact.otherCollider.CompareTag("Wall"))
            {
                Vector3 localContactPoint = transform.InverseTransformPoint(contact.point);
                Vector3 localContactNormal = transform.InverseTransformDirection(contact.normal);
                Vector3 torque = -Mathf.Sign(localContactPoint.x) * transform.up * maxTorque * Mathf.Abs(localContactNormal.z);
                Debug.Log("torque = " + torque.ToString());
                rb.AddTorque(torque, ForceMode.Acceleration);
            }*/

        }

    }

    private void OnCollisionStay(Collision collision)
    {
        foreach (ContactPoint contact in collision.contacts)
        {
            if (/*contact.otherCollider.CompareTag("Wall") */contact.otherCollider.GetComponent<wallTransform>() != null || contact.otherCollider.GetComponent<Car>()!=null || contact.otherCollider.GetComponent<wallHeightAdjust>() != null)
            {

                Vector3 localContactPoint = transform.InverseTransformPoint(contact.point);
                Vector3 localContactNormal = transform.InverseTransformDirection(contact.normal);
                Vector3 torque = -Mathf.Sign(localContactPoint.x) * transform.up * maxTorque * Mathf.Abs(localContactNormal.z);
               // Debug.Log("torque = " + torque.ToString());
                rb.AddTorque(torque, ForceMode.Acceleration);
                if (m)
                {
                    m.ApplyBrake(1);
                }
               /* Quaternion sparkRotation = new Quaternion();
                sparkRotation.eulerAngles = contact.normal;
                Vector3 sparkPosition = new Vector3(contact.point.x, contact.point.y * 0.5f, contact.point.z);
                Instantiate(sparkOnContact, sparkPosition, sparkRotation, contact.thisCollider.transform);*/

            }
        }
    }
}
