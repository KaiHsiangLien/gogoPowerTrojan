using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class VideoListGeneration : MonoBehaviour {

    public RectTransform content;
    public GameObject buttonPrefab;
    public AudioClip[] videoList;
    public string[] videoPathList;
    private float buttonHeight = 100;
    // Use this for initialization
    void Start () {
        DirectoryInfo dir = new DirectoryInfo(Application.streamingAssetsPath + "/VideoSounds");
        //videoPathList = new string[dir.GetFiles().Length / 2];
        int i = 0, fileNum = 0;
        foreach (FileInfo info in dir.GetFiles())
        {
            if (info.Extension != ".meta")
            {
                ++fileNum;
            }
        }

        videoPathList = new string[fileNum];
        foreach (FileInfo info in dir.GetFiles())
        {
            if (info.Extension != ".meta")
            {
                videoPathList[i++] = Path.GetFileNameWithoutExtension(info.Name);
            }
        }
        //videoList = Resources.LoadAll<AudioClip>("VideoSounds");
        InitVideoList();

    }
	
	// Update is called once per frame
	void Update () {
	}

    void InitVideoList()
    {
        Vector2 contetSize = content.sizeDelta;
        content.sizeDelta = new Vector2(contetSize.x, buttonHeight * videoPathList.Length);

        for (int i = 0; i < videoPathList.Length; ++i)
        {
            GameObject buttonObject = Instantiate(buttonPrefab, new Vector3(), new Quaternion(), content.transform);
            RectTransform buttonTransform = buttonObject.GetComponent<RectTransform>();
            Text buttonText = buttonObject.GetComponentInChildren<Text>();

            buttonTransform.anchoredPosition = new Vector2(0, -50 - i * buttonHeight);
            Vector2 buttonSize = buttonTransform.sizeDelta;
            buttonTransform.sizeDelta = new Vector2(buttonSize.x, buttonHeight);

            buttonText.text = (i + 1).ToString() + ". " + videoPathList[i];
            int temp = i;
            //Debug.Log("AddListener = " + temp + "; videoList length = " + videoList.Length);
            buttonObject.GetComponent<Button>().onClick.AddListener(() => { OnClickVideoList(temp); });

        }
    }


    void OnClickVideoList(int idx)
    {

       // FindObjectOfType<VideoPanelController>().ChangePlayButtonSprite(true);
        FindObjectOfType<VideoPanelController>().videoIDX = idx;
        /*
        audioSource.Stop();
        audioSource.clip = musicList[songIDX];

        FindObjectOfType<MusicPanelController>().ChangePlayButtonSprite(true);
        FindObjectOfType<MusicPanelController>().musicIDX = songIDX;
        audioSource.Play();*/
    }
}
