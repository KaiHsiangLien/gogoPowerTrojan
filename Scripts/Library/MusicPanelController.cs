using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MusicPanelController : MonoBehaviour
{
    public GameObject homePanel;
    public Sprite playButtonSprite, pauseButtonSprite;
    private AudioSource audioSource;
    public Button playButton;

    public Text musicTitle, musicTime;
    public int musicIDX;

    // Use this for initialization
    void Start () {
        audioSource = GetComponent<AudioSource>();

    }
	
	// Update is called once per frame
	void Update () {
        if (!audioSource.isPlaying && audioSource.time == 0)
        {
            musicTitle.text = "";
            musicTime.text =  "----:---- / ----:----";
            return;
        }
        MusicListGeneration musicList = FindObjectOfType<MusicListGeneration>();
        musicTitle.text = (musicIDX + 1).ToString() + ".\n" + musicList.musicPath[musicIDX];
        string totalTime = SecondToString(GetComponent<AudioSource>().clip.length);
        string currTime = SecondToString(audioSource.time);
        musicTime.text = currTime + " / " + totalTime;

    }

    string SecondToString(float second)
    {
        int secondInt = Mathf.RoundToInt(second);
        string secondStr = (secondInt % 60).ToString();
        secondStr = secondStr.PadLeft(2, '0');
        string minStr = ((int)secondInt / 60).ToString();
        minStr = minStr.PadLeft(2, '0');
        return minStr + ":" + secondStr;
    }

    public void ChangePlayButtonSprite(bool forcePlay = false)
    {
        if (audioSource.isPlaying && !forcePlay)
        {
            playButton.GetComponent<Image>().sprite = playButtonSprite;
        }
        else
        {
            playButton.GetComponent<Image>().sprite = pauseButtonSprite;
        }
    }

    public void OnClickPlay()
    {
        if (audioSource.clip == null)
        {
            return;
        }
        ChangePlayButtonSprite();
        if (audioSource.isPlaying)
        {
            //Debug.Log("Pause");
            audioSource.Pause();
        }
        else
        {
            //Debug.Log("Play");
            audioSource.Play();
        }
    }

    public void OnClickStop()
    {
        if (audioSource.clip == null)
        {
            return;
        }
        playButton.GetComponent<Image>().sprite = playButtonSprite;
        audioSource.Stop();
        audioSource.clip = null;
    }

    public void OnClickReplay()
    {
        if (audioSource.clip == null)
        {
            return;
        }
        playButton.GetComponent<Image>().sprite = pauseButtonSprite;
        audioSource.Play();
    }

    public void OnClickPrev()
    {
        if (audioSource.clip == null)
        {
            return;
        }
        playButton.GetComponent<Image>().sprite = pauseButtonSprite;
        audioSource.Stop();
        MusicListGeneration musicList = FindObjectOfType<MusicListGeneration>();
        musicIDX = Mathf.Clamp(musicIDX - 1, 0, musicList.musicPath.Length-1);

        audioSource.clip = Resources.Load<AudioClip>("MusicRoom/" + musicList.musicPath[musicIDX]);
        audioSource.Play();
    }

    public void OnClickNext()
    {
        if (audioSource.clip == null)
        {
            return;
        }
        playButton.GetComponent<Image>().sprite = pauseButtonSprite;
        audioSource.Stop();
        MusicListGeneration musicList = FindObjectOfType<MusicListGeneration>();
        musicIDX = Mathf.Clamp(musicIDX + 1, 0, musicList.musicPath.Length - 1);

        audioSource.clip = Resources.Load<AudioClip>("MusicRoom/" + musicList.musicPath[musicIDX]);
        audioSource.Play();
    }

    public void OnClickClose()
    {
        foreach (Scrollbar scrollBar in GetComponentsInChildren<Scrollbar>())
        {
            scrollBar.value = 1;
        }
        OnClickStop();
        homePanel.SetActive(true);
        gameObject.SetActive(false);
    }
}
