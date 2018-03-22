using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicController : MonoBehaviour {
    public AudioClip[] musicList;
    private AudioSource audioSource;
	// Use this for initialization
	void Start () {
        audioSource = GetComponent<AudioSource>();
        AudioClip clip = musicList[StaticVariables.mapID];
        audioSource.clip = clip;
        audioSource.Play();

    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
