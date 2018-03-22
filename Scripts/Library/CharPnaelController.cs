using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharPnaelController : MonoBehaviour {
    public GameObject homePanel;
    private int charIdx;
    private const int CHAR_NUM = 6;
    private const int MAX_LV = 15;
    private int[] charLv ;
    public Text title;
    public Text description;
    public Text levelText;
    public Sprite[] iconSprites;
    public Image icon;
    // Use this for initialization
    void Start () {
        CleanAll();
    }
    void CleanAll()
    {
        charIdx = 0;
        charLv = new int[CHAR_NUM];
        for (int i = 0; i < charLv.Length; ++i)
        {
            charLv[i] = 1;
        }
        UpdateInfo();

    }
    void UpdateInfo()
    {
        icon.sprite = iconSprites[charIdx];
        levelText.text = "Level: " + charLv[charIdx].ToString();
        title.text = "Abilities for " + StaticVariables.characterData["characters"][charIdx]["charName"].str + " at level " + charLv[charIdx].ToString();
        JSONObject charInfo = StaticVariables.GetCharacterAttribute(charIdx, charLv[charIdx]);
        description.text = "\nSkillName: " + charInfo["skillName"].str + "\n\n";
        description.text += "HP: " + charInfo["hp"].n + "\n\n";
        description.text += "MP: " + charInfo["mp"].n + "\n\n";
        description.text += "Attack: " + charInfo["attack"].n + "\n\n";
        description.text += "Defense: " + charInfo["defense"].n + "\n\n";
        description.text += "Speed: " + charInfo["speed"].n + "\n\n";
        description.text += "MP Regeneration: " + charInfo["CD"].n + "\n\n";
    }
	// Update is called once per frame
	void Update () {
		
	}

    public void OnClickClose()
    {
        CleanAll();
        foreach (Scrollbar scrollBar in GetComponentsInChildren<Scrollbar>())
        {
            scrollBar.value = 1;
        }
        homePanel.SetActive(true);
        gameObject.SetActive(false);
    }

    public void OnClickPrev()
    {
        if (charIdx == 0)
        {
            return;
        }
        charIdx--;
        UpdateInfo();
    }

    public void OnClickNext()
    {
        if (charIdx == CHAR_NUM-1)
        {
            return;
        }
        charIdx++;
        UpdateInfo();
    }

    public void OnClickLevelUp()
    {
        if (charLv[charIdx] == MAX_LV)
        {
            return;
        }
        charLv[charIdx]++;
        UpdateInfo();
    }

    public void OnClickLevelDown()
    { 
        if (charLv[charIdx] == 1)
        {
            return;
        }
        charLv[charIdx]--;
        UpdateInfo();
    }

}
