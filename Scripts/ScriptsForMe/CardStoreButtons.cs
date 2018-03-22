using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardStoreButtons : MonoBehaviour {

    public GameObject buttons;
    public GameObject scrollView;
    public GameObject scrollViewContent;
    public GameObject scrollViewButtonPrefab;
    public IconController iconController;

    public DetailPanelController detailController;

    // Use this for initialization
    void Start () {
        detailController.clearPanel();

    }
	
	// Update is called once per frame
	void Update () {
		
	}
    public void OnClickBack()
    {
        if(scrollView.GetComponentInChildren<Scrollbar>())
            scrollView.GetComponentInChildren<Scrollbar>().value = 1;
        scrollView.SetActive(false);
        foreach (Transform child in scrollViewContent.transform)
        {
            Destroy(child.gameObject);
        }
        buttons.SetActive(true);

        detailController.clearPanel();

    }
    
    public void OnClickSell(string attribute)
    {
        scrollView.SetActive(true);
        buttons.SetActive(false);
        JSONObject cardList = StaticVariables.GetCardList();
        float height = 155;
        float margin = 5;
        float offset = -80;
        float offsetOrigin = offset;
        int counter = 0;
        float totalHeight = 0;
        if (attribute.Equals( "ATK") || attribute.Equals("DEF") || attribute.Equals("SPE"))
        {
            foreach (JSONObject card in cardList[attribute].list)
            {
                totalHeight += (height + margin);
                offset = generateScrollViewContent(card, attribute, counter++, height, margin, offset);
               // offset -= (margin + height);
            }
        }/*
        else if (attribute.Equals("DEF"))
        {
            foreach (JSONObject card in cardList["DEF"].list)
            {
                totalHeight += (height + margin);
                offset = generateScrollViewContent(card, "DEF", counter++, height, margin, offset);
                //offset -= (margin + height);
            }
        }
        else if (attribute.Equals("SPE"))
        {
            foreach (JSONObject card in cardList["SPE"].list)
            {
                totalHeight += (height + margin);
                offset = generateScrollViewContent(card, "SPE", counter++, height, margin, offset);
               // offset -= (margin + height);
            }
        }*/
        Vector2 size = scrollViewContent.GetComponent<RectTransform>().sizeDelta;
        scrollViewContent.GetComponent<RectTransform>().sizeDelta = new Vector2(size.x, Mathf.Abs(offset - offsetOrigin)+2*margin);
    }

    public float generateScrollViewContent(JSONObject card,string cardName,int id, float height, float margin, float offset)
    {
        if (StaticVariables.GetCardMaxCount(cardName, id) == 0)
        {
            return offset;
        }
        GameObject newBtn = Instantiate(scrollViewButtonPrefab, new Vector3(), new Quaternion(), scrollViewContent.transform);
        Vector2 size = newBtn.GetComponent<RectTransform>().sizeDelta;
        newBtn.GetComponent<RectTransform>().sizeDelta = new Vector2(size.x, height);
        newBtn.transform.localPosition = new Vector3(size.x/2 + margin , offset, 0);
        // Debug.Log("new button local position = " + newBtn.transform.localPosition.ToString());

        string rank = StaticVariables.cardData[cardName][id]["rank"].str;
        string iconName = cardName + rank;
        newBtn.GetComponentsInChildren<Image>()[1].sprite = iconController.setCardImage(iconName);

        string title = StaticVariables.cardData[cardName][id]["shortName"].str;// + "\n[" + StaticVariables.GetCardCount(cardName,id)+"/" + StaticVariables.GetCardMaxCount(cardName, id)+"]";
        newBtn.GetComponentInChildren<Text>().text = title + "\nSell Price: $"+ StaticVariables.cardData["price"][rank].n;
        
        string description = StaticVariables.GetCardDescription(cardName, id);

        float price = StaticVariables.cardData["price"][rank].n;

        newBtn.GetComponent<Button>().onClick.AddListener(()=>OnClickCardButton(title, description,"Sell", -price, iconController.setCardImage(iconName),cardName,id));
        return offset - (margin + height);
    }

    public void OnClickBuyCards()
    {
        scrollView.SetActive(true);
        buttons.SetActive(false);

        
        float height = 155;
        float margin = 5;
        float offset = -80;
        float totalHeight = 5*height + 8*margin;
        Sprite sprite = iconController.setCardImage("buyNormal");
        generateCardPackButtons(height, margin, offset, "Normal Card Pack","Normal",sprite );
        offset -= (height + margin);

        sprite = iconController.setCardImage("buyGold");
        generateCardPackButtons(height, margin, offset, "Golden Card Pack","Gold", sprite);
        offset -= (height + margin);


        sprite = iconController.setCardImage("buyATK");
        generateCardPackButtons(height, margin, offset, "Attack Card Pack","ATK", sprite);
        offset -= (height + margin);

        sprite = iconController.setCardImage("buyDEF");
        generateCardPackButtons(height, margin, offset, "Defense Card Pack","DEF", sprite);
        offset -= (height + margin);

        sprite = iconController.setCardImage("buySPE");
        generateCardPackButtons(height, margin, offset, "Special Card Pack","SPE", sprite);
        offset -= (height + margin);

        Vector2 size = scrollViewContent.GetComponent<RectTransform>().sizeDelta;
        scrollViewContent.GetComponent<RectTransform>().sizeDelta = new Vector2(size.x, totalHeight + margin * 2);
    }

    private void generateCardPackButtons(float height,float margin,float offset,string title, string jsonKey,Sprite sprite)
    {
        GameObject newBtn = Instantiate(scrollViewButtonPrefab, new Vector3(), new Quaternion(), scrollViewContent.transform);
        Vector2 size = newBtn.GetComponent<RectTransform>().sizeDelta;
        newBtn.GetComponent<RectTransform>().sizeDelta = new Vector2(size.x, height);
        newBtn.transform.localPosition = new Vector3(size.x / 2 + margin, offset, 0);

        newBtn.GetComponentsInChildren<Image>()[1].sprite = sprite;
        newBtn.GetComponentsInChildren<Image>()[1].rectTransform.sizeDelta = new Vector2(200, 200);
        newBtn.GetComponentInChildren<Text>().text = title + "\nPrice: $" + StaticVariables.cardData["cardProbability"][jsonKey]["cost"].n;
        string typeDescription = (title.Equals("buyGold") || title.Equals("buyNormal")) ?"random":title.Split(' ')[0];
        string description = "Get " + typeDescription + " type cards with \nprobability :\n";
        string probKey = jsonKey.ToLower();
        if (jsonKey.Equals("Normal") || jsonKey.Equals("Gold"))
            probKey = "any";
        description += "[Rank C]: " + StaticVariables.cardData["cardProbability"][jsonKey]["probability"][probKey+"C"].n*100 + "%\n";
        description += "[Rank B]: " + StaticVariables.cardData["cardProbability"][jsonKey]["probability"][probKey+"B"].n*100 + "%\n";
        description += "[Rank A]: " + StaticVariables.cardData["cardProbability"][jsonKey]["probability"][probKey+"A"].n*100 + "%\n";
        description += "[Rank S]: " + StaticVariables.cardData["cardProbability"][jsonKey]["probability"][probKey+"S"].n*100 + "%\n";
        float price = StaticVariables.cardData["cardProbability"][jsonKey]["cost"].n;
        newBtn.GetComponent<Button>().onClick.AddListener(() => OnClickCardButton(title, description,"Buy", price, sprite, jsonKey));

    }

    public void OnClickCardButton(string name, string description, string buttonText, float price, Sprite sprite, string myKey = "", int sellID = -1)
    {

        if (myKey.Length > 0)
        {
            if (sellID == -1)
            {
                detailController.buyKey = myKey;
                detailController.sellCardID = -1;
                detailController.sellCardAttr = "";

            }
            else
            {
                detailController.buyKey = "";
                detailController.sellCardID = sellID;
                detailController.sellCardAttr = myKey;
            }
        }
        detailController.showPanel();
        detailController.setName(name);
        detailController.setDesciption(description);
        detailController.setActionButtonText(buttonText, price);
        detailController.setImageSprite(sprite);
    }

}
