using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Setting : MonoBehaviour
{
    public Dictionary<Button, bool> btnInteractables;
    public Slider musicSlider;
	public GameObject confirmPanel;
	public Button aboutBtn;
	public Button resetBtn;
	public Button yesBtn;
	public Button noBtn;
	public Button backBtn;

	//	public AudioSource musicSource;

	void Start() {
        btnInteractables = new Dictionary<Button, bool>();
        musicSlider.value = AudioListener.volume;

        enableBtns ();
		confirmPanel.SetActive (false);

	}

	void Update () {
        //		musicSource.volume = musicSlider.value;
    }

    public void OnChangeVolume()
    {
        AudioListener.volume = musicSlider.value;
        StaticVariables.SetVolume(musicSlider.value);
    }

	public void gameReset() {
		disableBtns ();
		confirmPanel.SetActive (true);
	}

	public void yes() {
		Load.initialize (true);
		confirmPanel.SetActive (false);
        enableBtns();

        //SceneManager.LoadScene("LobbyDebug");

        FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.LOBBY_UI_ID);
        SceneManager.LoadScene("UI");
    }

    public void OnClickResetDebug()
    {
        disableBtns();
        confirmPanel.SetActive(true);
    }
    public void OnClickResetDebugYes()
    {
        enableBtns();
        Load.loadStateDebug();
        confirmPanel.SetActive(false);
        Debug.Log(confirmPanel.name + " is set to false");
        //FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.LOBBY_UI_ID);

        FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.LOBBY_UI_ID);
        SceneManager.LoadScene("UI");
    }


    public void no() {
		confirmPanel.SetActive (false);
		enableBtns ();
	}

	private void enableBtns() {
        foreach (Button btn in FindObjectsOfType<Button>())
        {
            if (btnInteractables.ContainsKey(btn))
            {
                btn.interactable = btnInteractables[btn];
            }
            else
            {
                btn.interactable = true;
            }
        }
        foreach (Slider slider in FindObjectsOfType<Slider>())
        {
            slider.interactable = true;
        }

        foreach (Scrollbar scroll in FindObjectsOfType<Scrollbar>())
        {
            scroll.interactable = true;
        }
    }

	private void disableBtns() {
        foreach (Button btn in FindObjectsOfType<Button>())
        {
            if (btnInteractables.ContainsKey(btn))
            {
                btnInteractables[btn] = btn.interactable;
            }
            else
            {
                btnInteractables.Add(btn, btn.interactable);
            }
            Debug.Log(btn.name + " previous status = " + btn.interactable);
            btn.interactable = false;
        }
        foreach (Slider slider in FindObjectsOfType<Slider>())
        {
            slider.interactable = false;
        }

        foreach (Scrollbar scroll in FindObjectsOfType<Scrollbar>())
        {
            scroll.interactable = false;
        }

    }
}