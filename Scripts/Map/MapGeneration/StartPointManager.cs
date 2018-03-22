﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartPointManager : MonoBehaviour {

    private Transform[] startPoints;
    private void OnDrawGizmos()
    {
        //transform = 
        startPoints = GetComponentsInChildren<Transform>();
        for (int i = 1; i < startPoints.Length; ++i)
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(startPoints[i].position, 1);
        }
        
    }
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    

    public Vector3[] startPositions()
    {
        startPoints = GetComponentsInChildren<Transform>();
        Vector3[] ret = new Vector3[startPoints.Length-1];
        for (int i = 1; i < startPoints.Length; ++i)
        {
            ret[i-1] = startPoints[i].position;
        }

        return ret;
    }


}
