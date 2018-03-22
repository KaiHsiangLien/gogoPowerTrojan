using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CarPnaelController : MonoBehaviour
{
    public GameObject homePanel;
    private int carIdx;
    private const int CAR_NUM = 5;
    private const int MAX_LV = 6;
    private int[] carLv;
    public Text title;
    public Text description;
    public Text levelText;
    public Sprite[] iconSprites;
    public Image icon;
    // Use this for initialization
    void Start()
    {
        CleanAll();

    }
    void UpdateInfo()
    {
        icon.sprite = iconSprites[carIdx];
        levelText.text = "Level: " + carLv[carIdx].ToString();
        title.text = "Abilities for " + StaticVariables.carData["cars"][carIdx]["name"].str + " at level " + carLv[carIdx].ToString();
        JSONObject carInfo = StaticVariables.GetCarAttribute(carIdx, carLv[carIdx]);

        description.text = "\nHP: " + carInfo["hp"].n + "\n\n";
        description.text += "MP: " + carInfo["mp"].n + "\n\n";
        description.text += "Attack: " + carInfo["attack"].n + "\n\n";
        description.text += "Defense: " + carInfo["defense"].n + "\n\n";
        description.text += "Speed: " + carInfo["speed"].n + "\n\n";
        description.text += "MP Regeneration: " + carInfo["CD"].n + "\n\n";
    }

    void CleanAll()
    {
        carIdx = 0;
        carLv = new int[CAR_NUM];
        for (int i = 0; i < carLv.Length; ++i)
        {
            carLv[i] = 1;
        }

        UpdateInfo();
    }
    // Update is called once per frame
    void Update()
    {

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
        if (carIdx == 0)
        {
            return;
        }
        carIdx--;
        UpdateInfo();
    }

    public void OnClickNext()
    {
        if (carIdx == CAR_NUM - 1)
        {
            return;
        }
        carIdx++;
        UpdateInfo();
    }

    public void OnClickLevelUp()
    {
        if (carLv[carIdx] == MAX_LV)
        {
            return;
        }
        carLv[carIdx]++;
        UpdateInfo();
    }

    public void OnClickLevelDown()
    {
        if (carLv[carIdx] == 1)
        {
            return;
        }
        carLv[carIdx]--;
        UpdateInfo();
    }
}
