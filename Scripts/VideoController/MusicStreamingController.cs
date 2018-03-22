using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicStreamingController : MonoBehaviour {
    private AudioSource audioSource;
    public bool isPickUpScene;
    public bool isStoreScene;
    
	// Use this for initialization
	void Start () {
        audioSource = GetComponent<AudioSource>();
        if (isPickUpScene)
        {
            audioSource.time = StaticVariables.pickUpBGMTime;
        }
        else if(isStoreScene)
        {
            audioSource.time = StaticVariables.storeBGMTime;
        }
    }
	
	// Update is called once per frame
	void Update ()
    {
        StaticVariables.pickUpBGMTime = 0;
        StaticVariables.storeBGMTime = 0;
        if (isPickUpScene)
        {
            StaticVariables.pickUpBGMTime = audioSource.time;
        }
        else if (isStoreScene)
        {
            StaticVariables.storeBGMTime = audioSource.time;
        }

    }

    public float GetAudioTime()
    {
        return audioSource.time;
    }


    public void SetAudioTime(float t)
    {
        audioSource.time = t;
    }

    public void PauseMusic()
    {
        audioSource.Pause();
    }


    public void PlayMusic()
    {
        audioSource.Play();
    }

    public bool IsPlaying()
    {
        return audioSource.isPlaying;
    }
}
