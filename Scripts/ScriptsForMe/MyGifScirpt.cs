using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MyGifScirpt : MonoBehaviour
{
    public Sprite[] sprites;
    public string folderName;
    [Range (0.01f,3f)]
    public float cycleTime;
    public float whiteTime;
    private const int CYCLE_NUM = 1;
    public int cycles;
    private int idx = 0;
    private float timer = 0;

    // Use this for initialization
    void Start () {
        if(cycles<=0)
            cycles = CYCLE_NUM;
        sprites = Resources.LoadAll<Sprite>(folderName);
        GetComponent<Image>().sprite = sprites[0];
    }
	
	// Update is called once per frame
	void Update ()
    {
        timer += Time.deltaTime;
        if (cycles <= 0)
        {
            GetComponent<Image>().sprite = null;
            if (timer >= whiteTime)
            {
                cycles = CYCLE_NUM;
                gameObject.SetActive(false);
            }
            return;
        }
        if (timer >= (cycleTime/(float)(sprites.Length)))
        {
            timer = 0;
            idx = (idx + 1) % sprites.Length;
            if (idx == 0)
            {
                --cycles;
            }
            GetComponent<Image>().sprite = sprites[idx];
        }
	}
}
