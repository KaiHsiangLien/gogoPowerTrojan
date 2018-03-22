using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardListButtonGen : MonoBehaviour {
    
    public GameObject buttonPrefab;
    public GameObject content;
    private float buttonHeight = 100;

    public Text title;
    public Text description;
	// Use this for initialization
	void Start () {
        InitCardList();
        title.text = description.text =  "";

    }

    void InitCardList()
    {
        JSONObject cardList = StaticVariables.GetCardList();
        JSONObject atkList = cardList.GetField("ATK"), defList = cardList.GetField("DEF"), speList = cardList.GetField("SPE");
        for (int i = 0; i < atkList.list.Count; ++i)
        {
            //instantiate atkList buttons
            GameObject btnObj = Instantiate(buttonPrefab, new Vector3(), new Quaternion(), content.transform);
            btnObj.GetComponentInChildren<Text>().text = "ATK"+ ((i + 1).ToString().PadLeft(3,'0')) + ": "+ StaticVariables.GetCardInfo("ATK", i)["shortName"].str;
            btnObj.GetComponentInChildren<Image>().color = new Color(0.8f, 0, 0);
            int temp = i;
            btnObj.GetComponent<Button>().onClick.AddListener(() => { OnClickCardButton("ATK", temp); });

            if (!atkList.list[i]["unlocked"].b)
            {
                btnObj.GetComponentInChildren<Text>().text = "ATK" + ((i + 1).ToString().PadLeft(3, '0')) + ": " + "?????";
                btnObj.GetComponent<Button>().interactable = false;
            }

        }
        for (int i = 0; i < defList.list.Count; ++i)
        {
            //instantiate defList buttons
            GameObject btnObj = Instantiate(buttonPrefab, new Vector3(), new Quaternion(), content.transform);
            btnObj.GetComponentInChildren<Text>().text = "DEF" + ((i + 1).ToString().PadLeft(3, '0')) + ": " + StaticVariables.GetCardInfo("DEF", i)["shortName"].str;
            btnObj.GetComponentInChildren<Image>().color = new Color(0, 0, 0.8f);
            int temp = i;
            btnObj.GetComponent<Button>().onClick.AddListener(() => { OnClickCardButton("DEF", temp); });
            if (!defList.list[i]["unlocked"].b)
            {
                btnObj.GetComponentInChildren<Text>().text = "DEF" + ((i + 1).ToString().PadLeft(3, '0')) + ": " + "?????";
                btnObj.GetComponent<Button>().interactable = false;
            }

        }
        for (int i = 0; i < speList.list.Count; ++i)
        {
            //instantiate speList buttons
            GameObject btnObj = Instantiate(buttonPrefab, new Vector3(), new Quaternion(), content.transform);
            btnObj.GetComponentInChildren<Text>().text = "SPE" + ((i + 1).ToString().PadLeft(3, '0')) + ": " + StaticVariables.GetCardInfo("SPE", i)["shortName"].str;
            btnObj.GetComponentInChildren<Image>().color = new Color(0, 0.8f, 0);
            int temp = i;
            btnObj.GetComponent<Button>().onClick.AddListener(() => { OnClickCardButton("SPE", temp); });

            if (!speList.list[i]["unlocked"].b)
            {
                btnObj.GetComponentInChildren<Text>().text = "SPE" + ((i+1).ToString().PadLeft(3, '0')) + ": " + "?????";
                btnObj.GetComponent<Button>().interactable = false;
            }
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OnClickCardButton(string attr, int id)
    {

        string fullAttr = "Attack type";
        if (attr.Equals("DEF"))
        {
            fullAttr = "Defense type";
        }
        else if (attr.Equals("SPE"))
        {
            fullAttr = "Special type";
        }
        JSONObject cardINFO = StaticVariables.GetCardInfo(attr, id);
        title.text = attr + ((id + 1).ToString().PadLeft(3, '0')) + ": " + cardINFO["shortName"].str;
        description.text = "\nType: " + fullAttr + "\n\n";
        description.text += "Rank: " + cardINFO["rank"].str + "\n\n";
        description.text += StaticVariables.GetCardDescription(attr, id);
        
    }
}
