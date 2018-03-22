using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LoadCompleteUI : MonoBehaviour {
    
    public VideoPlayer startVideo;
    // Use this for initialization
    void Awake () {
        GetComponent<RawImage>().texture = StaticVariables.myTipTexture;
        //
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButton("Fire1"))
        {

            startVideo.gameObject.SetActive(true);
            startVideo.SetMoviePlay();
            gameObject.SetActive(false);
        }
    }
}
