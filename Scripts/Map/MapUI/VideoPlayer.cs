using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VideoPlayer : MonoBehaviour
{
    public bool isCoursePreview = false;
    public string videoName;
    public MediaPlayerCtrl mediaPlayerCtrl;
    public GameObject UIStart;
    public GameObject miniMapBorderUI;
    public Camera miniMapCam;
    public bool enableNightMarePreview = false;

    private void Start()
    {
        if (!isCoursePreview && videoName.Length >0)
        {
            Debug.Log("videoName = " + videoName);
            mediaPlayerCtrl.Load(videoName);
            
        }
        /*foreach (Camera cam in FindObjectsOfType<Camera>())
        {
            cam.enabled = false;
        }
        GetComponent<Camera>().enabled = true;*/
    }

    // Use this for initialization
    public void SetMoviePlay (string name = "") {
        if (name.Length > 0)
        {
            Debug.Log("videoName = " + name);
            mediaPlayerCtrl.Load(name);
            return;

        }
        if (enableNightMarePreview && StaticVariables.playingNightmare)
        {
            if (StaticVariables.mapID == 0)
            {
                videoName = "Nightmare1_Lust.mp4";
            }
            else if (StaticVariables.mapID == 1)
            {
                videoName = "Nightmare2_Gluttony.mp4";
            }
            else if (StaticVariables.mapID == 2)
            {
                videoName = "Nightmare3_Greed.mp4";
            }
            else if (StaticVariables.mapID == 3)
            {
                videoName = "Nightmare4_Sloth.mp4";
            }
            else if (StaticVariables.mapID == 4)
            {
                videoName = "Nightmare5_Wrath.mp4";
            }
            else if (StaticVariables.mapID == 5)
            {
                videoName = "Nightmare6_Envy.mp4";
            }
            else if (StaticVariables.mapID == 6)
            {
                videoName = "Nightmare7_Pride.mp4";
            }

            mediaPlayerCtrl.Load(videoName);
        }
        else if (isCoursePreview)
        {
            videoName = "Course" + (StaticVariables.mapID + 1) + ".mp4";
            Debug.Log("videoName = " + videoName);
            mediaPlayerCtrl.Load(videoName);
        }
        else
        {
            Debug.Log("videoName = " + videoName);
            mediaPlayerCtrl.Load(videoName);
        }

        if (UIStart != null)
            UIStart.SetActive(false);
        if (miniMapBorderUI)
            miniMapBorderUI.SetActive(false);

    }
    private void Update()
    {
        if (mediaPlayerCtrl.GetCurrentState() == MediaPlayerCtrl.MEDIAPLAYER_STATE.END)
        {
            if(miniMapBorderUI)
                miniMapBorderUI.SetActive(true);
            if (miniMapCam)
                miniMapCam.enabled = true;
            if(UIStart)
                UIStart.SetActive(true);
            gameObject.SetActive(false);
        }
    }
}
