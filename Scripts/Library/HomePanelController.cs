using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HomePanelController : MonoBehaviour {
    public GameObject musicPanel, videoPanel, cardPanel, carPanel, charPanel,achievementPanel;
    public Text title1, title2;
    
    private MusicStreamingController bgmController;
	// Use this for initialization
	void Start () {
        bgmController = FindObjectOfType<MusicStreamingController>();

    }
	
	// Update is called once per frame
	void Update () {
        
        if (!title1.text.Equals("Career Profile"))
        {
            title1.text = "Career Profile";
            title2.text = "Career Profile";
        }
        if (!bgmController.IsPlaying())
        {
            bgmController.PlayMusic();
        }

    }

    public void OnClickMusic()
    {
        if (musicPanel)
        {
            bgmController.PauseMusic();

            title1.text = "Music Room";
            title2.text = "Music Room";
            musicPanel.SetActive(true);
            gameObject.SetActive(false);
        }
    }
    public void OnClickVideo()
    {
        if (videoPanel)
        {
            bgmController.PauseMusic();

            title1.text = "Video Room";
            title2.text = "Video Room";
            videoPanel.SetActive(true);
            gameObject.SetActive(false);
        }
    }
    public void OnClickCarTome()
    {
        if (carPanel)
        {
            title1.text = "Car Calculator";
            title2.text = "Car Calculator";
            carPanel.SetActive(true);
            gameObject.SetActive(false);
        }
    }
    public void OnClickCardTome()
    {
        if (cardPanel)
        {
            title1.text = "Card Tome";
            title2.text = "Card Tome";
            cardPanel.SetActive(true);
            gameObject.SetActive(false);
        }
    }
    public void OnClickCharTome()
    {
        if (charPanel)
        {
            title1.text = "Character Calculator";
            title2.text = "Character Calculator";
            charPanel.SetActive(true);
            gameObject.SetActive(false);
        }
    }
    public void OnClickAchievement()
    {
        if (achievementPanel)
        {
            title1.text = "Achievements";
            title2.text = "Achievements";
            achievementPanel.SetActive(true);
            gameObject.SetActive(false);
        }
    }
}
