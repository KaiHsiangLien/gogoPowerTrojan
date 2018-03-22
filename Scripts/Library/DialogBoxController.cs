using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogBoxController : MonoBehaviour {
    public Text myText;
    private Dictionary<Button, bool> interactableValues = new Dictionary<Button, bool>();
	// Use this for initialization
	void Start ()
    {
        foreach (Button btn in FindObjectsOfType<Button>())
        {
            interactableValues.Add( btn, btn.interactable);
            btn.interactable = false;
        }
        foreach (ScrollRect scrollRect in FindObjectsOfType<ScrollRect>())
        {
            scrollRect.vertical = false;
        }

    }
	
	// Update is called once per frame
	void Update () {
        if (Input.GetButton("Fire1"))
        {
            foreach (Button btn in FindObjectsOfType<Button>())
            {
                if (interactableValues.ContainsKey(btn))
                {
                    btn.interactable = interactableValues[btn];
                }
                else
                {
                    btn.interactable = true;
                }
            }
            foreach (ScrollRect scrollRect in FindObjectsOfType<ScrollRect>())
            {
                scrollRect.vertical = true;
            }
            Destroy(gameObject);

        }
	}

    public void SetText(string text)
    {
        myText.text = text;
    }
}
