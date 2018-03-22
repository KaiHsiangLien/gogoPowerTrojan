using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiniMapBorderGUI : MonoBehaviour {
    public Texture boxTexture;
    // Use this for initialization
    private GUIStyle currentStyle = null;

    private void InitStyles()
    {
        if (currentStyle == null)
        {
            float xOffSet = 0.75f * Screen.width;
            float yOffSet = 0.25f * Screen.height;
            currentStyle = new GUIStyle(GUI.skin.box);
            currentStyle.border  = new RectOffset((int)xOffSet,0,0, (int)yOffSet);
        }
    }

    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnGUI()
    {
        // Make a background box

       InitStyles();
        float xOffSet = 0.75f * Screen.width;
        float yLength = 0.25f * Screen.height;
        float yOffSet = 0.25f * Screen.height;
        float xLength = 0.25f * Screen.width;
        GUI.Box(new Rect(xOffSet, 0, xLength, yLength), boxTexture, currentStyle);
       // GUI.Box(new Rect(xOffSet, yOffSet, xLength, 10), boxTexture);

       // GUI.Box(new Rect(xOffSet, yOffSet, xLength, yLength), boxTexture);
    }
}
