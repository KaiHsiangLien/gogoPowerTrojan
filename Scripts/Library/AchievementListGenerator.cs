using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AchievementListGenerator : MonoBehaviour {
    public Sprite[] achievementSprites;
    public GameObject buttonPrefab;
    public GameObject contentParent;
    public AchievementPanelController achievementPanelController;
    // Use this for initialization
    void Start () {
        InitList();
    }

    void InitList()
    {
        achievementPanelController.buttonParents = new Transform[achievementSprites.Length];
        for (int i = 0; i < achievementSprites.Length; ++i)
        {
            GameObject button =Instantiate(buttonPrefab, new Vector3(), new Quaternion(), contentParent.transform);
            button.GetComponent<Image>().sprite = achievementSprites[i];
            int temp = i;
                        achievementPanelController.buttonParents[i] = button.transform;
            if (StaticVariables.saveData["records"][6 + i].n == -1)
            {
                button.GetComponent<Image>().color = Color.black;
                button.GetComponent<Button>().interactable = false;
            }
            else
            {
                button.GetComponent<Button>().onClick.AddListener(() => { achievementPanelController.OnClickAchievement(temp); });
                button.GetComponent<Button>().interactable = true;
            }
        }
    }
	// Update is called once per frame
	void Update () {
		
	}
    
}
