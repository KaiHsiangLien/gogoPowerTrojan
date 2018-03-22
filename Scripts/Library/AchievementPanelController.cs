using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AchievementPanelController : MonoBehaviour {

    public GameObject homePanel;
    public GameObject dialogPrefab1;
    public GameObject dialogPrefab2;
    private string[] descriptions = { "Clear all stages in normal mode", "Clear Nightmare stage, \'LUST\'"
            , "Clear Nightmare stage, \'GLUTTONY\'", "Clear Nightmare stage, \'GREED\'"
            , "Clear Nightmare stage, \'SLOTH\'", "Clear Nightmare stage, \'WRATH\'"
            , "Clear Nightmare stage, \'ENVY\'", "Clear Nightmare stage, \'PRIDE\'" };

    public Transform[] buttonParents;
    public Transform canvasParent;
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OnClickClose()
    {
        foreach (Scrollbar scrollBar in GetComponentsInChildren<Scrollbar>())
        {
            scrollBar.value = 1;
        }
        homePanel.SetActive(true);
        gameObject.SetActive(false);

    }

    public void OnClickAchievement(int idx)
    {
        string description = descriptions[idx];
        Transform parent = buttonParents[idx];
        if (idx % 2 == 0)
        {
            GameObject dialog = Instantiate(dialogPrefab1, parent.position, parent.rotation, canvasParent);
            float xOff = dialog.GetComponent<RectTransform>().sizeDelta.x / 2;
            float yOff = dialog.GetComponent<RectTransform>().sizeDelta.y / 2;
            Vector3 offSet = new Vector3(xOff, yOff, 0);
            //dialog.transform.position = dialog.transform.position + offSet;
            dialog.GetComponent<DialogBoxController>().SetText(description);
        }
        else
        {

            GameObject dialog = Instantiate(dialogPrefab2, parent.position, parent.rotation, canvasParent);
            float xOff = -dialog.GetComponent<RectTransform>().sizeDelta.x / 2;
            float yOff = dialog.GetComponent<RectTransform>().sizeDelta.y / 2;
            Vector3 offSet = new Vector3(xOff, yOff, 0);
            //dialog.transform.position = dialog.transform.position + offSet;
            dialog.GetComponent<DialogBoxController>().SetText(description);
        }

    }
}
