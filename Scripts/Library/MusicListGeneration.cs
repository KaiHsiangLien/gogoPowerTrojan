using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class MusicListGeneration : MonoBehaviour {
    public RectTransform content;
    public GameObject buttonPrefab;
    public AudioClip[] musicList;
    public AudioSource audioSource;
    public string[] musicPath;

    private float buttonHeight = 100;
	// Use this for initialization
	void Start () {

        Debug.Log("dataPath:" + Application.streamingAssetsPath);
        DirectoryInfo dir = new DirectoryInfo(Application.streamingAssetsPath+"/MusicRoom");
        musicPath = new string[dir.GetFiles().Length/2];
        int i = 0, fileNum = 0;
        foreach (FileInfo info in dir.GetFiles())
        {
            if (info.Extension != ".meta")
            {
                ++fileNum;
            }
        }

        musicPath = new string[fileNum];
        foreach (FileInfo info in dir.GetFiles())
        {
            if (info.Extension != ".meta")
            {
                musicPath[i++] = Path.GetFileNameWithoutExtension(info.Name);
            }
        }
        //musicList = Resources.LoadAll<AudioClip>("MusicRoom");
        InitMusicList();
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    void InitMusicList()
    {
        Vector2 contetSize = content.sizeDelta;
        content.sizeDelta = new Vector2(contetSize.x, buttonHeight * musicPath.Length);

        for(int i=0;i< musicPath.Length;++i)
        {
            GameObject buttonObject = Instantiate(buttonPrefab, new Vector3(),new Quaternion(),content.transform);
            RectTransform buttonTransform = buttonObject.GetComponent<RectTransform>();
            Text buttonText = buttonObject.GetComponentInChildren<Text>();

            buttonTransform.anchoredPosition = new Vector2(0, -50 - i * buttonHeight);
            Vector2 buttonSize = buttonTransform.sizeDelta;
            buttonTransform.sizeDelta = new Vector2(buttonSize.x, buttonHeight);

            buttonText.text = (i+1).ToString()+". "+ musicPath[i];
            int temp = i;
            buttonObject.GetComponent<Button>().onClick.AddListener(() => { OnClickSongList(temp); });

        }
    }

    void OnClickSongList(int songIDX)
    {
        //Debug.Log("songIDX = " + songIDX + "; music list length = "+ musicList.Length);
        audioSource.Stop();
        audioSource.clip = Resources.Load<AudioClip>("MusicRoom/" + musicPath[songIDX]);
            //musicList[songIDX];

        FindObjectOfType<MusicPanelController>().ChangePlayButtonSprite(true);
        FindObjectOfType<MusicPanelController>().musicIDX = songIDX;
        audioSource.Play();
    }

    

}
