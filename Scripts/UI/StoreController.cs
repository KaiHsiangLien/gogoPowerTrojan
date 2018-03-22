using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StoreController : MonoBehaviour {
    public GameObject[] storeControllers;
    public bool insideStoreScene = true;
    private int currStoreNum;
	// Use this for initialization
	void Start () {
        currStoreNum = StaticVariables.currStoreNumber;
        if (insideStoreScene)
        {
            LoadMyStore();
        }

    }

    void LoadMyStore()
    {
        if (StaticVariables.currStoreNumber < 0 || StaticVariables.currStoreNumber >= storeControllers.Length)
        {
            StaticVariables.currStoreNumber = 0;
        }
        foreach (GameObject store in storeControllers)
        {
            store.SetActive(false);
        }
        storeControllers[StaticVariables.currStoreNumber].SetActive(true);
    }
	
	// Update is called once per frame
	void Update () {
        if (currStoreNum != StaticVariables.currStoreNumber && insideStoreScene)
        {
            currStoreNum = StaticVariables.currStoreNumber;

            LoadMyStore();
        }

    }

    public void OnClickStoreInterChange(int idx)
    {
        if (!insideStoreScene)
        {
            return;
        }
        StaticVariables.currStoreNumber = idx;
        LoadMyStore();
    }

    public void OnClickLoadStore(int idx)
    {
        if (insideStoreScene)
        {
            return;
        }
        StaticVariables.currStoreNumber = idx;

        FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.CARDSTORE_UI_ID);
        //SceneManager.LoadScene("CardStore");
    }

}
