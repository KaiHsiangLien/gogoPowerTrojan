using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TipSelector : MonoBehaviour
{
    public Texture[] tips;
    public Texture[] nightMareTips;
    // Use this for initialization
    void Start () {
        if (StaticVariables.playingNightmare)
        {

            GetComponent<RawImage>().texture = nightMareTips[StaticVariables.mapID];
            StaticVariables.myTipTexture = nightMareTips[StaticVariables.mapID];
            return;
        }
        if (tips.Length != 0)
        {
            int tipIdx = Random.Range(0, tips.Length);
            GetComponent<RawImage>().texture = tips[tipIdx];
            StaticVariables.myTipTexture = tips[tipIdx];

        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
