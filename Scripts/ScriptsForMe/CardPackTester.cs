using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardPackTester : MonoBehaviour {

	// Use this for initialization
	void Start ()
    {
        TestCardPack("Normal", 10000);
        TestCardPack("Gold", 10000);
        TestCardPack("ATK", 10000);
        TestCardPack("SPE", 10000);
        TestCardPack("DEF", 10000);
    }

    // Update is called once per frame
    void Update () {

    }

    void TestCardPack(string buyKey,int testLoops)
    {
        
    int a = 0, b = 0, c = 0, s = 0;
        for (int i = 0; i<testLoops; ++i)
        {
            string rank = TestRNG(buyKey);
            if (rank == "A")
            {
                ++a;
            }
            else if (rank == "B")
            {
                ++b;
            }
            else if (rank == "C")
            {
                ++c;
            }
            else if (rank == "S")
            {
                ++s;
            }
        }
        Debug.Log("Test result for " + buyKey + " C: " + (float)c / (float)testLoops + " B: " + (float)b / (float)testLoops + " A: " + (float)a / (float)testLoops + " S: " + (float)s / (float)testLoops);

    }
    public string TestRNG(string RNGKey)
    {
        float rng = Random.value;
        Dictionary<string, string> myDict = StaticVariables.cardData["cardProbability"][RNGKey]["probability"].ToDictionary();
        float probAcc = 0;
        string cardKey = "";
        foreach (string key in myDict.Keys)
        {
            probAcc += float.Parse(myDict[key]);
            if (rng < probAcc)
            {
                cardKey = key;
                break;
            }

        }
        int idx = Random.Range(0, StaticVariables.cardPackData[cardKey].list.Count);
        string cardAttr = StaticVariables.cardPackData[cardKey].list[idx]["attribute"].str;
        int cardID = (int)(StaticVariables.cardPackData[cardKey].list[idx]["id"].n);
        return StaticVariables.cardData[cardAttr][cardID]["rank"].str;
    }
}
