using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class OpeningCanvas : MonoBehaviour {
    public bool isEnding = false;
    public bool clickable = false;
    public Text clickText;
    public Image backGround;
    public Image title;
    public float renderTime = 2;
    public float textTime = 0.5f;

    public string nextSceneName;
    // Use this for initialization
    void Start () {

        clickText.text = "";
        clickable = false;
        BecomeClickable();

    }
	
	// Update is called once per frame
	void Update () {
        if (clickable && clickText.canvasRenderer.GetColor().a == 1)
        {
            clickText.CrossFadeAlpha(0, textTime, true);
        }
        if (clickable && clickText.canvasRenderer.GetColor().a == 0)
        {
            clickText.CrossFadeAlpha(1, textTime, true);
        }
        if (clickable && Input.GetButton("Fire1"))
        {
            clickable = false;
            if (!isEnding)
            {
                if (FindObjectOfType<UIController>())
                {
                    FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.LOBBY_UI_ID);
                }
            }
            else
            {

                SceneManager.LoadSceneAsync(nextSceneName);
            }
        }
    }

    void BecomeClickable()
    {
        backGround.canvasRenderer.SetAlpha(0.0f);
        backGround.CrossFadeAlpha(1, renderTime, true);

        title.canvasRenderer.SetAlpha(0.0f);
        title.CrossFadeAlpha(1, renderTime, true);

        
        StartCoroutine( WaitForClickable());
    }

    IEnumerator WaitForClickable()
    {
            yield return new WaitForSeconds(renderTime);
            clickable = true;
            clickText.text = "Touch The Screen To Continue"; 
            //print("WaitAndPrint " + Time.time);
    }
}
