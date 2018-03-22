using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ExpBar : MonoBehaviour
{
    public float debugExp = -1;
    private float pointsToGain;
    private float speed = 100;
    public float totalTime = 3;
    public float maxWidth = 500;
    public bool isFinished = false;
    // Use this for initialization

    public float accExp = 0;

    private bool setProgressIsOver = false;
    Button[] btns;
    
    public Text description;
    void Start()
    {
        
        if (debugExp != -1)
        {
            StaticVariables.expGained = debugExp;
        }

        pointsToGain = StaticVariables.expGained * (1 + StaticVariables.expModifier)+0.001f;

        speed = StaticVariables.expGained / totalTime;
        description.text = "Level = " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("level").n;
        description.text += "\nHP = " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("hp").n;
        description.text += "\nMP = " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("mp").n;
        description.text += "\nAttack = " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("attack").n;
        description.text += "\nDefense = " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("defense").n;
        description.text += "\nSpeed = " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("speed").n;
        description.text += "\nMP Regen. = " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("CD").n;
        if (StaticVariables.expGained == 0)
            return;
        btns = FindObjectsOfType<Button>();
        foreach (Button btn in btns)
        {
            btn.gameObject.SetActive(false);
        }

    }

    // Update is called once per frame
    void Update()
    {
        float level = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("level").n;
        float currExp = StaticVariables.GetCharacterAttribute(StaticVariables.characterID)["currentExp"].n;
        float maxExp = StaticVariables.GetCharacterAttribute(StaticVariables.characterID)["maxExpForThisLevel"].n;
        if (level >= StaticVariables.characterData["maxLevel"].n)
        {
            currExp = 0;
            pointsToGain = 0;
            StaticVariables.saveData.GetField("characters").list[StaticVariables.characterID].SetField("exp", currExp);
        }
        float width = maxWidth * currExp / maxExp;
        GetComponent<RectTransform>().sizeDelta = new Vector2(width, GetComponent<RectTransform>().sizeDelta.y);
               
        if (pointsToGain > 0)
        {
            ExpGrow();
        }
        else if (!isFinished)
        {
            isFinished = true;

            foreach (Button btn in btns)
            {
                btn.gameObject.SetActive(true);
            }

            if (StaticVariables.ranking == 1)
            {
                if (!setProgressIsOver)
                {
                    setProgressIsOver = true;
                    Debug.Log("first clear debug = " + StaticVariables.GetProgress() + "; " + StaticVariables.mapID);
                    StaticVariables.firstClear = ((StaticVariables.GetProgress() != 6) && (StaticVariables.mapID == 6));
                    //StaticVariables.SetProgress(StaticVariables.mapID);
                    
                    StaticVariables.SetProgress(StaticVariables.mapID);
                    
                }
            }
            StaticVariables.saveData.GetField("characters").list[StaticVariables.characterID].SetField("exp", currExp);
            Debug.Log("progress = " + StaticVariables.GetProgress()+ " before saving");
            Save.saveState();
        }

    }

    private void ExpGrow()
    {
        float maxExp = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("maxExpForThisLevel").n;
        float currExp = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("currentExp").n;
        float level = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("level").n;

        float expGrowInUpdate = Mathf.Min(Time.deltaTime * speed, pointsToGain);
        float expGrow = Mathf.Min(expGrowInUpdate, maxExp - currExp);
        //Debug.Log("expGrow = " + expGrow);
        StaticVariables.saveData["characters"].list[StaticVariables.characterID]["exp"].n = expGrow + currExp;
        pointsToGain -= expGrow;
        accExp += expGrow;

        if (expGrow + currExp == maxExp)
        {
            LevelUp();
            float previousLv = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("level").n;
            if (previousLv >= StaticVariables.characterData["maxLevel"].n)
            {
                StaticVariables.saveData.GetField("characters").list[StaticVariables.characterID].SetField("exp", 0);
                pointsToGain = 0;
            }
        }
        
        //StaticVariables.characterID
    }

    private void LevelUp()
    {

        float previousLv = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("level").n;
        if (previousLv >= StaticVariables.characterData.GetField("maxLevel").n)
        {
            pointsToGain = 0;
            return;
        }
        float previousHp = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("hp").n;
        float previousMp = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("mp").n;
        float previousAttack = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("attack").n;
        float previousDefense = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("defense").n;
        float previousSpeed = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("speed").n;
        float previousCD = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("CD").n;

        StaticVariables.saveData.GetField("characters").list[StaticVariables.characterID].SetField("exp", 0);
        float currLevel = StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("level").n;
        StaticVariables.saveData.GetField("characters").list[StaticVariables.characterID].SetField("level", currLevel + 1);

        description.text = "Level = " + previousLv + "  →  " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("level").n;
        description.text += "\nHP = " + previousHp + "  →  " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("hp").n;
        description.text += "\nMP = " + previousMp + "  →  " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("mp").n;
        description.text += "\nAttack = " + previousAttack + "  →  " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("attack").n;
        description.text += "\nDefense = " + previousDefense + "  →  " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("defense").n;
        description.text += "\nSpeed = " + previousSpeed + "  →  " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("speed").n;
        description.text += "\nMP Regen. = " + previousCD + "  →  " + StaticVariables.GetCharacterAttribute(StaticVariables.characterID).GetField("CD").n;

    }
}
