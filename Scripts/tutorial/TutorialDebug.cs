using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TutorialDebug : MonoBehaviour {
    // Use this for initialization
    private AIScript[] ais;
    [Range(0,1)]
    public float mytimescale = 1;


    public bool tutorialOfSkill = false;
    public GameObject skillTutorial;
    public bool tutorialOfItem = false;
    public GameObject itemTutorial;
    public bool tutorialOfTilt = false;
    public GameObject tiltTutorial;
    public bool tutorialOfRanking = false;
    public GameObject rankingTutorial;
    public bool tutorialOfEnd = false;
    public GameObject endTutorial;

    private float timeMargin = 1;
    private float timer = 0;

    private bool isStopped = false;
	void Start () {

    }

    // Update is called once per frame
    void Update () {
        if (FindObjectOfType<PlayerController>()&&!tutorialOfSkill && !isStopped)
        {

            if (FindObjectOfType<PlayerController>().GetComponent<Car>().ableToUseSkill())
            {
                tutorialOfSkill = true;
                skillTutorial.SetActive(true);
                Time.timeScale = 0;
                isStopped = true;
            }
        }
        else if (FindObjectOfType<PlayerController>()&&!tutorialOfItem && !isStopped)
        {
            if (FindObjectOfType<PlayerController>().GetComponent<ItemCollector>().itemIdx != -1)
            {
                tutorialOfItem = true;
                itemTutorial.SetActive(true);
                Time.timeScale = 0;
                isStopped = true;
            }
        }
        if (FindObjectOfType<PlayerTimer>() && !tutorialOfTilt && !isStopped)
        {
            //Debug.Log("FindObjectOfType<PlayerTimer>().testTime = " + FindObjectOfType<PlayerTimer>().testTime);
            if (FindObjectOfType<PlayerTimer>().testTime <0)
            {
                tutorialOfTilt = true;
                tiltTutorial.SetActive(true);
                Time.timeScale = 0;
                isStopped = true;
            }
        }
        
        if (tutorialOfTilt && !isStopped && !tutorialOfRanking)
        {
            timer += Time.deltaTime;
            if (timer >= timeMargin)
            {
                timer = 0;
                tutorialOfRanking = true;
                rankingTutorial.SetActive(true);
                Time.timeScale = 0;
                isStopped = true;
            }
            
        }

        if (tutorialOfSkill&&tutorialOfRanking&&tutorialOfItem&&tutorialOfTilt && !isStopped && !tutorialOfEnd)
        {
            timer += Time.deltaTime;
            if (timer >= timeMargin)
            {
                tutorialOfEnd = true;
                endTutorial.SetActive(true);
                Time.timeScale = 0;
                isStopped = true;
            }

        }

        if (isStopped && Input.GetButton("Fire1"))
        {
            if (tutorialOfSkill )
            {
                skillTutorial.SetActive(false);
            }
            if (tutorialOfItem)
            {
                itemTutorial.SetActive(false);
            }
            if (tutorialOfTilt)
            {
                tiltTutorial.SetActive(false);
            }
            if (tutorialOfRanking)
            {
                rankingTutorial.SetActive(false);
            }
            if (tutorialOfEnd)
            {
                endTutorial.SetActive(false);
            }
            Time.timeScale = 1;
            isStopped = false;


        }

        CarStatus[] carStatuses = FindObjectsOfType<CarStatus>();
        foreach (CarStatus carStatus in carStatuses)
        {
            if (carStatus.reviveAbility == 0)
            {
                carStatus.reviveAbility = 9999;
            }
        }

        ais = FindObjectsOfType<AIScript>();
        foreach (AIScript ai in ais)
        {
            ai.tutorialDebug = true;
        }

        Car[] cars = FindObjectsOfType<Car>();
        foreach (Car car in cars)
        {
            car.tutorialDebug = true;
        }
    }

    public void OnClickLeave()
    {
        StaticVariables.currUIPanelNumber = StaticVariables.LOBBY_UI_ID;
        //FindObjectOfType<UIController>().LoadUserInterfaceByNumber(StaticVariables.prevUIPanelNumber);

        SceneManager.LoadScene("TutorialSummary");
    }
    public void OnClickResume()
    {

    }
}
