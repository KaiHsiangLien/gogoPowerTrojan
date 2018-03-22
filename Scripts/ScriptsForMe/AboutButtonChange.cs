using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AboutButtonChange : MonoBehaviour
{
    public GameObject aboutCanvas;
    public GameObject settingCanvas;
    public GameObject confirmPanel;
    private Dictionary<Button, bool> btnInteractables;

    // Use this for initialization
    void Start()
    {
        btnInteractables = new Dictionary<Button, bool>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    //change back to setting
    public void OnClickBack()
    {
        settingCanvas.SetActive(true);
        aboutCanvas.SetActive(false);
    }

    //go to about
    public void OnClickAbout()
    {
        settingCanvas.SetActive(false);
        aboutCanvas.SetActive(true);
    }


    //close setting panel
    public void OnClickClose()
    {
        aboutCanvas.SetActive(false);

        foreach (Button btn in FindObjectsOfType<Button>())
        {
            if (btnInteractables.ContainsKey(btn))
                btn.interactable = btnInteractables[btn];
            else
                btn.interactable = true;
        }
        Save.saveState();
        settingCanvas.SetActive(false);
    }

    //enter setting panel
    public void OnClickSetting()
    {
        foreach (Button btn in FindObjectsOfType<Button>())
        {
            btnInteractables[btn] = btn.interactable;
            btn.interactable = false;
        }
        settingCanvas.SetActive(true);
        aboutCanvas.SetActive(false);
    }

    public void OnClickReset()
    {
        confirmPanel.SetActive(true);
    }
    public void OnClickResetConfirm()
    {
        confirmPanel.SetActive(false);
        Load.initialize(true);
        SceneManager.LoadScene("LobbyDebug");
    }
    public void OnClickResetCancel()
    {
        confirmPanel.SetActive(false);
    }

}
