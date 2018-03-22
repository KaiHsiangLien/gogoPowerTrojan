using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GoalManager : MonoBehaviour {
    private bool isOver = false;
    public StatImageManager statImage;
    public bool debugIsOver = false;
    // Use this for initialization
    void Start () {

        statImage.gameObject.SetActive(false);
    }
	
	// Update is called once per frame
	void Update () {
        if (isOver )
        {
            if (!debugIsOver)
            {
                debugIsOver = true;
                if (StaticVariables.ranking == 1)
                {
                        if (StaticVariables.playingNightmare)
                        {
                            StaticVariables.expGained += StaticVariables.characterData["winExp"][StaticVariables.mapID+7].n;//FindObjectOfType<MapGen>().expWinDEBUG;

                        }
                        else
                        {
                            StaticVariables.expGained += StaticVariables.characterData["winExp"][StaticVariables.mapID].n;//FindObjectOfType<MapGen>().expWinDEBUG;

                        }
                    
                        
                        if (StaticVariables.playingNightmare)
                        {
                            StaticVariables.coinNumber += (int)StaticVariables.characterData["winCoin"][StaticVariables.mapID+7].n;//(int)FindObjectOfType<MapGen>().moneyWinDEBUG;

                        }
                        else
                        {
                            StaticVariables.coinNumber += (int)StaticVariables.characterData["winCoin"][StaticVariables.mapID].n;//(int)FindObjectOfType<MapGen>().moneyWinDEBUG;
                        }


                    //Debug.Log("first clear debug = " + StaticVariables.GetProgress() + "; " + StaticVariables.mapID);
                    StaticVariables.firstClear = ((StaticVariables.GetProgress() < 6) && (StaticVariables.mapID == 6) && (!StaticVariables.playingNightmare));
                    bool [] nightmareClearFlags = new bool[7];
                    bool nightmareAllClear = true;
                    bool firstAllClear = false;
                    for (int i = 7; i < 14; ++i)
                    {
                        nightmareClearFlags[i - 7] = (StaticVariables.saveData["records"][i].n != -1);
                        //check if all 7 stages has record
                    }
                    for (int i = 0; i < nightmareClearFlags.Length; ++i)
                    {
                        nightmareAllClear = nightmareAllClear && (nightmareClearFlags[i] || (StaticVariables.mapID == i && StaticVariables.playingNightmare));
                    }

                    
                    StaticVariables.firstClearNightmare = StaticVariables.playingNightmare && nightmareAllClear && (StaticVariables.saveData["records"][StaticVariables.mapID+7].n == -1);


                }
                else
                {
                        if (StaticVariables.playingNightmare)
                        {
                            StaticVariables.expGained += StaticVariables.characterData["loseExp"][StaticVariables.mapID+7].n; //FindObjectOfType<MapGen>().expLoseDEBUG;

                        }
                        else
                        {
                            StaticVariables.expGained += StaticVariables.characterData["loseExp"][StaticVariables.mapID].n; //FindObjectOfType<MapGen>().expLoseDEBUG;
                        }
                    

                        if (StaticVariables.playingNightmare)
                        {
                            StaticVariables.coinNumber += (int)StaticVariables.characterData["loseCoin"][StaticVariables.mapID+7].n; //(int)FindObjectOfType<MapGen>().moneyLoseDEBUG;
                        }
                        else
                        {
                            StaticVariables.coinNumber += (int)StaticVariables.characterData["loseCoin"][StaticVariables.mapID].n; //(int)FindObjectOfType<MapGen>().moneyLoseDEBUG;
                        }
                    
                }
            }
            statImage.gameObject.SetActive(true);
            if (!StaticVariables.gameIsOver)
            {
                StaticVariables.gameIsOver = true;
            }
            return;
        }
        if (FindObjectOfType<PlayerController>() == null)
        {
            statImage.isWin = false;
            isOver = true;
            StaticVariables.ranking = 999;
            return;

        }
        if (FindObjectsOfType<AIScript>().Length == 0)
        {
            statImage.isWin = true;
            isOver = true;
            StaticVariables.ranking = 1;
            return;

        }

    }

    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log(other.name);
        if (!isOver)
        {
            if (other.GetComponent<AIScript>() != null) //lose
            {
                statImage.isWin = false;
                isOver = true;

            }
            else if (other.GetComponent<PlayerController>() != null) // win
            {
                statImage.isWin = true;
                isOver = true;

            }
        }
    }
    
    
}
