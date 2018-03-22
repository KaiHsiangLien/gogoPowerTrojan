using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MapPickUp : MonoBehaviour {

	public Button confirmText;
	public Text title;
	public Text value;
	public Image routePreview;
	public static int routePicked;
	public Sprite star;
	public GameObject starsPan;
	public Button[] maps;
    public Sprite[] miniMaps;
    public Sprite[] sMaps;
    public Sprite[] nightmareMiniMaps;
    public Sprite[] nightmareSMaps;
    private string[] titles = { "D o w n t o w n  L A", "V i t e r b i", "M a r s h a l l", "K e c k", "C i n e m a", "G o u l d", "T r o j a n" };
    private bool isNight;
    private string[] nightmareTitles = {"L u s t", "G l u t t o n y", "G r e e d", "S l o t h", "W r a t h", "E n v y", "P r i d e" };
	private int[] difficulty = { 1, 2, 1, 3, 4, 3, 5 };
	private string[] distance = { "Medium", "Long", "Short", "Short", "Medium", "Short", "Long" };
    public Sprite lockSprite;
    // Use this for initialization
    void Start () {
        isNight = StaticVariables.playingNightmare;
        for (int i = 0; i < maps.Length; ++i)
        {
            if (i > StaticVariables.saveData["progress"].n + 1)
            {
                maps[i].GetComponent<Image>().sprite = lockSprite;
                maps[i].interactable = false;
            }
            else
            {
                if (StaticVariables.playingNightmare)
                {
                    maps[i].GetComponent<Image>().sprite = nightmareSMaps[i];
                }
                else
                {
                    maps[i].GetComponent<Image>().sprite = sMaps[i];
                }
                maps[i].interactable = true;
            }

        }
        confirmText = confirmText.GetComponent<Button> ();
		routePreview = routePreview.GetComponent<Image> ();
		routePicked = StaticVariables.mapID;//0;
		ChangeMapDetail (routePicked);
	}
	
	// Update is called once per frame
	void Update () {
        if (isNight != StaticVariables.playingNightmare)
        {
            isNight = StaticVariables.playingNightmare;
            for (int i = 0; i < maps.Length; ++i)
            {
                if (i > StaticVariables.saveData["progress"].n + 1)
                {
                    maps[i].GetComponent<Image>().sprite = lockSprite;
                    maps[i].interactable = false;
                }
                else
                {
                    if (StaticVariables.playingNightmare)
                    {
                        maps[i].GetComponent<Image>().sprite = nightmareSMaps[i];
                    }
                    else
                    {
                        maps[i].GetComponent<Image>().sprite = sMaps[i];
                    }
                    maps[i].interactable = true;
                }

            }
            confirmText = confirmText.GetComponent<Button>();
            routePreview = routePreview.GetComponent<Image>();
            routePicked = StaticVariables.mapID;//0;
            ChangeMapDetail(routePicked);
        }
	}



	public void Confirm() {
        //PlayerPrefs.SetInt("CourseID", routePicked-1);
        StaticVariables.mapID = routePicked;

        SceneManager.LoadScene ("CharacterPickUp");
	}

	public void GoBack() {
		SceneManager.LoadScene ("Story");
	}

	public void PickRouteAt(int mapNumber) {
		routePicked = mapNumber;
		ChangeMapDetail (routePicked);
	}

	private void ShowStarsFor(int number) {
        Image[] stars = starsPan.GetComponentsInChildren<Image>();

        for (int i = 0; i < stars.Length; i++) {
            stars[i].sprite = null;
            stars[i].enabled = false;

        }
		for(int i = 0; i < number; i++)
        {
            stars[i].enabled = true;
            stars[i].sprite = star;
		}
	}

	private void ChangeMapDetail(int mapNumber) {
		title.text = titles[mapNumber];
        if (StaticVariables.playingNightmare)
        {
            title.text = nightmareTitles[mapNumber];
        }
        if (StaticVariables.playingNightmare)
        {
            routePreview.sprite = nightmareMiniMaps[mapNumber];
        }
        else
        {
            routePreview.sprite = miniMaps[mapNumber];
        }
        if (StaticVariables.playingNightmare)
        {
            ShowStarsFor(6);
        }
        else
        {
            ShowStarsFor(difficulty[mapNumber]);
        }
		string valueStr = distance[mapNumber] + "\n";

        if (StaticVariables.playingNightmare)
        {
            valueStr += StaticVariables.GetMaxRecordOfMap(mapNumber + 7);
        }
        else
        {
            valueStr += StaticVariables.GetMaxRecordOfMap(mapNumber);
        }
		value.text = valueStr;
	}

}
