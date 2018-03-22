using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class OpeningPlayer : MonoBehaviour
{
    public float waitTime = 0;
    private float waitTimer = 0;
    public GameObject openingCanvas;
    public GameObject musicController;
    public GameObject generalCanvas;
    public MediaPlayerCtrl mController;
    public string videoName;
    private bool lateSetFlag = false;
    // Use this for initialization
    void Start()
    {
        if (videoName.Length > 0)
        {
            mController.gameObject.SetActive(true);
            mController.Load(videoName);

            if (musicController)
                musicController.SetActive(false);
            if (openingCanvas)
                openingCanvas.SetActive(false);
            if(generalCanvas)
                generalCanvas.SetActive(false);
        }
        else
            lateSetFlag = true;
    }
    
    void Update()
    {
        waitTimer += Time.deltaTime;
        if (lateSetFlag)
        {
            if (videoName.Length > 0)
            {
                mController.gameObject.SetActive(true);
                mController.Load(videoName);
                lateSetFlag = false;

                if (musicController)
                    musicController.SetActive(false);
                if (openingCanvas)
                    openingCanvas.SetActive(false);
                if (generalCanvas)
                    generalCanvas.SetActive(false);
            }
            return;
        }
        if ((mController.GetCurrentState() == MediaPlayerCtrl.MEDIAPLAYER_STATE.END || Input.GetButton("Fire1") )&& (waitTimer >= waitTime))
        {
            OnQuitVideo();
        }

    }

    void OnQuitVideo()
    {
        if (musicController)
            musicController.SetActive(true);
        if(openingCanvas)
            openingCanvas.SetActive(true);
        if (generalCanvas)
            generalCanvas.SetActive(true);
        gameObject.SetActive(false);
    }
    
}
