using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class VideoPanelController : MonoBehaviour {

    public GameObject homePanel;
    public int videoIDX = -1;
    public Image videoPreview;
    public Text videoLength;
    public Sprite[] videoPreviews;
    public Sprite blackSprite;
    public GameObject videoFullScreen;
    public Image cover;
    private string[] videoList;
    // Use this for initialization
    void Start () {
        InitVideoList();
        videoPreviews = new Sprite[videoList.Length];
        for (int i = 0; i < videoPreviews.Length; ++i)
        {
            string fileName = "VideoPreviews/" + videoList[i] ;
            Debug.Log("trying loading " + fileName);
            videoPreviews[i] = Resources.Load<Sprite>(fileName);
        }
       // videoPreviews = Resources.LoadAll<Sprite>("VideoPreviews");
        videoIDX = -1;
    }
    void InitVideoList()
    {
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

        videoList = new string[fileNum];
        foreach (FileInfo info in dir.GetFiles())
        {
            if (info.Extension != ".meta")
            {
                videoList[i++] = Path.GetFileNameWithoutExtension(info.Name);
            }
        }
    }

	
	// Update is called once per frame
	void Update () {
        if (videoIDX == -1)
        {
            videoLength.text = "\nVideo Length: ----:----";
            cover.sprite = blackSprite;

        }
        else
        {
            AudioClip clip = Resources.Load<AudioClip>("VideoSounds/"+ videoList[videoIDX]); 
            videoLength.text = (videoIDX+1).ToString() +". " + clip.name +  "\nVideo Length: " 
                +  SecondToString(clip.length);
            cover.sprite = videoPreviews[videoIDX];
        }
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

    public void OnClickPlay()
    {
        //Debug.Log("list length = " + videoList.videoPathList.Length + "; curr idx = " + videoIDX);
        string name = videoList[videoIDX] + ".mp4";
        //videoFullScreen.GetComponent<VideoPlayer>().videoName = name;
        videoFullScreen.SetActive(true);
        videoFullScreen.GetComponent<VideoPlayer>().SetMoviePlay(name);

        gameObject.SetActive(false);
    }


    public void OnClickClose()
    {
        foreach (Scrollbar scrollBar in GetComponentsInChildren<Scrollbar>())
        {
            scrollBar.value = 1;
        }
        videoIDX = -1;
        videoLength.text = "\nVideo Length: ----:----";
        cover.sprite = blackSprite;
        homePanel.SetActive(true);
        gameObject.SetActive(false);
    }
}
