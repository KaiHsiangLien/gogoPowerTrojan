using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapGen : MonoBehaviour
{

    public Camera mainCamera;
    public Camera backGroundCamera;
    public const int stageNum = 2;
    public const int maxRacerNum = 4;
    public GameObject miniMap;
    public GameObject[] characterList;
    public GameObject[] miniMarkList;
    public GameObject miniMapIcon;
    public Material[] miniMapIconMaterials;

    public CourseManager[] courseList = new CourseManager[stageNum];
    public Material[] skyBoxes = new Material[stageNum];
    public Light dayLight, nightLight;
    private int skyBoxIdx;

    private Car[] racers = new Car[maxRacerNum];
    private MiniMapMark[] marks = new MiniMapMark[maxRacerNum];
    public int racersLength = 0;

    /*public int[] carinitDebug;
    public int courseinitDebug;
    public int skyBoxInitDebug;
    private float maxHPDebug = 100;
    private float maxMPDebug = 100;
    private float maxATKDebug = 100;
    
    public bool debugFlag = false;*/

    public itemBtnOnClick itemBtn;
    public moveBtnOnClick moveBtn;
    public StatImageManager statImage;
    private float basicTopSpeed = 18;

    private AudioSource audio;
    private const float NIGHTMARE_ENEMY_MODIFIER = 2; // use it on HP, defense


    // for debug
    [Range(-1,6)]
    public int courseDebug = -1;
    public Vector2[] carListsForDebug;
    public Vector2[] charListsForDebug;
    public float moneyWinDEBUG = -1;
    public float moneyLoseDEBUG = -1;
    public float expWinDEBUG = -1;
    public float expLoseDEBUG = -1;
    public int myCarDebug = -1;
    void Start()
    {
        
        audio = GetComponentInChildren<AudioSource>();
        resetMap();
        StaticVariables.ResetVariables();
        skyBoxIdx = (StaticVariables.playingNightmare) ? 1 : 0;// StaticVariables.skyBoxID;
        if (courseDebug!=-1)
        {
            StaticVariables.mapID = courseDebug;
        }
        setCourse(StaticVariables.mapID);
        

        //TODO - generate real code
        //if(myCarDebug!=-1)
        //    initCharacter(StaticVariables.mapID, myCarDebug, StaticVariables.characterID, 0, true);

        if (StaticVariables.playingNightmare)
        {
            int enemyCharLv = 15;
            int enemyCarLv = 6;
            initCharacter(StaticVariables.mapID, StaticVariables.carID, StaticVariables.characterID, 0, true);
            
            int[] char1 = { 2, 1, 1, 2, 1, 2, 3 };
            int[] char2 = { 4, 3, 1, 4, 5, 0, 4 };
            int[] car1 =  { 3, 4, 4, 2, 4, 2, 3 };
            int[] car2 =  { 2, 3, 3, 2, 4, 4, 2 };
            int carID = car1[StaticVariables.mapID], charID = char1[StaticVariables.mapID];
            initCharacter(StaticVariables.mapID, carID, charID, 1, false, enemyCarLv, enemyCharLv);
            carID = car2[StaticVariables.mapID];
            charID = char2[StaticVariables.mapID];
            initCharacter(StaticVariables.mapID, carID, charID,2, false, enemyCarLv, enemyCharLv);

        }
        else
        {
            int enemyNum = (StaticVariables.mapID >= 3) ? 2 : 1;
            int enemyCharLv = Mathf.Clamp(StaticVariables.mapID * 2 + 3, 1, 15);
            int enemyCarLv = Mathf.Clamp(StaticVariables.mapID, 1, 6);
            initCharacter(StaticVariables.mapID, StaticVariables.carID, StaticVariables.characterID, 0, true);

            for (int i = 0; i < enemyNum; ++i)
            {
                int randomCarID = Random.Range(0, 5), randomCharID = 0;
                if (StaticVariables.mapID == 6 && i == 0)
                {
                    randomCharID = 5;
                }
                else
                {
                    randomCharID = Random.Range(0, 5);
                }
                initCharacter(StaticVariables.mapID, randomCarID, randomCharID, i + 1, false, enemyCarLv, enemyCharLv);
            }
        }
        

        //there are carinitDebug.Length cars; init them in time stop skill users' enemy lists 
        initTimeStopskillUsers();
        
    }
    // Update is called once per frame
    void Update () {
        if (StaticVariables.musicStartFlag && !audio.isPlaying && !FindObjectOfType<StatBtnOnClick>().pauseFlag)
        {
            audio.Play();
        }
        racersLength = countRacers();
	}

    public void resetMap()
    {
        audio.Stop();
        foreach (Car car in racers)
        {
            if (car != null)
            {
                Destroy(car.gameObject);
            }
        }
        foreach (MiniMapMark mark in marks)
        {
            if (mark != null)
            {
                Destroy(mark.gameObject);
            }
        }
        racersLength = 0;
    }

    public int countRacers()
    {
        int ret = 0;
        foreach (Car car in racers)
        {
            if (car != null)
            {
                ret++;
            }
        }
        return ret;
    }

    public void initTimeStopskillUsers()
    {
        foreach (Car car in racers)
        {
            if (car != null)
            {
                if (car.gameObject.GetComponent<TimeStopSkill>() != null)
                {
                    /*if (racersLength >= 1)
                    {
                        car.gameObject.GetComponent<TimeStopSkill>().enemies = new GameObject[racersLength - 1];
                    }*/
                    /*int idx = 0;
                    for (int i = 0; i < racers.Length; ++i)
                    {
                        if (racers[i]!=null && !racers[i].Equals(car))
                        {
                            car.gameObject.GetComponent<TimeStopSkill>().enemies[idx++] = racers[i].gameObject;
                        }
                    }*/
                }
            }
        }
    }
    public void setCourse(int courseID)
    {
        //disable all course except for 'courseID' course
        for (int i = 0; i < courseList.Length; ++i)
        {
            courseList[i].gameObject.SetActive(false);
            courseList[i].myRoad.SetActive(false);
        }

        courseList[courseID].gameObject.SetActive(true);
        courseList[courseID].myRoad.SetActive(true);
    }

    public void initCharacter(int courseID , int carId,int charID, int racerNum, bool isPlayer, int carLV = -1, int charLV = -1)
    {
        Debug.Log("generating char = " + carId);
        Vector3 position = courseList[courseID].GetStartPositions()[racerNum + 1];
        Quaternion rotation = Quaternion.Euler(0, courseList[courseID].GetStartRotation().eulerAngles.y, 0);
        PathManager path = courseList[courseID].GetPath();

        Car car = Instantiate(characterList[carId], position, rotation).GetComponent<Car>();
        Debug.Log("rotation of the car = " + car.transform.rotation.eulerAngles.ToString());
        car.myCharID = charID;
        //car.GetComponentInChildren<EnemyBarLookAt>().mainCameraTrans = backGroundCamera.transform;
        CarStatus carStatus = car.GetComponent<CarStatus>();
        MiniMapMark mark = Instantiate(miniMarkList[carId], position, rotation).GetComponent<MiniMapMark>();
        //InitCarStatus(carStatus, carId, charID);
        if (StaticVariables.playingNightmare)
        {
            if (StaticVariables.mapID == 0)
            {
                car.gameObject.AddComponent<Lust>();
            }
            else if (StaticVariables.mapID == 1)
            {
                car.gameObject.AddComponent<Gluttony>();
            }
            else if (StaticVariables.mapID == 2)
            {
                car.gameObject.AddComponent<Greed>();
            }
            else if (StaticVariables.mapID == 3)
            {
                car.gameObject.AddComponent<Sloth>();
            }
            else if (StaticVariables.mapID == 4 && !isPlayer)
            {
                car.gameObject.AddComponent<Wrath>();
            }
            else if (StaticVariables.mapID == 5)
            {
                car.gameObject.AddComponent<Envy>();
            }
            else if (StaticVariables.mapID == 6)
            {
                car.gameObject.AddComponent<Pride>();
            }
        }
        if (charID != 0)
        {
            DestroyImmediate(car.GetComponent<FlameSkill>());
        }
        if (charID != 1)
        {
            DestroyImmediate(car.GetComponent<CoinAttackSkill>());
        }
        if (charID != 2)
        {
            DestroyImmediate(car.GetComponent<ShieldSkill>());
        }
        if (charID != 3)
        {
            DestroyImmediate(car.GetComponent<TimeStopSkill>());
        }
        if (charID != 4)
        {
            DestroyImmediate(car.GetComponent<N2OSkill>());
        }
        if (charID != 5)
        {
            DestroyImmediate(car.GetComponent<SpearSkill>());
        }


        //init car params
        // return [hp, mp, speed,CD, attack, defense]
        if (isPlayer)
        {
            if (car.GetComponent<CoinPassive>())
            {
                StaticVariables.coinModifier += 1;
            }
            if (car.GetComponent<ExpPassive>())
            {
                StaticVariables.expModifier += 1;
            }
            carLV = (int)StaticVariables.GetCurrentCarLevel(carId);
            charLV = (int)StaticVariables.GetCurrentCharLevel(charID);
        }
        List<float> carAbility = StaticVariables.GetCurrentCarAttribute(carId,carLV);
        
        List<float> charAbility = StaticVariables.GetCurrentCharAttribute(charID,charLV);
        float modifier = 1;
        if (!isPlayer && StaticVariables.playingNightmare)
        {
            modifier = NIGHTMARE_ENEMY_MODIFIER;
            // randomly choose any 3 from 
            //{ 0.CriticalChance(S), 1.LifeSteal(S), 2.Stun, 3.Revive(once)
            //      , 4.evasion(S), 5.Poison(S), 6.Reflect 7. None}
            for (int i = 0; i < 3; ++i)
            {
                int idx = Random.Range(0, 8);
                if (idx == 0)
                {
                    Debug.Log(carStatus.name + " equips CC card");
                    carStatus.criticalChance += 0.5f;
                }
                else if (idx == 1)
                {
                    Debug.Log(carStatus.name + " equips LS card");
                    carStatus.lifeStealAbility += 0.8f;
                }
                else if (idx == 2)
                {
                    Debug.Log(carStatus.name + " equips Stun card");
                    carStatus.stunAbility = true;
                }
                else if (idx == 3)
                {
                    Debug.Log(carStatus.name + " equips Revive card");
                    carStatus.reviveAbility += 1;
                }
                else if (idx == 4)
                {
                    Debug.Log(carStatus.name + " equips Evaison card");
                    carStatus.evasion += 0.25f;
                }
                else if (idx == 5)
                {
                    Debug.Log(carStatus.name + " equips Poison card");
                    carStatus.poisonAbility += 0.06f;
                }
                else if (idx == 6)
                {
                    Debug.Log(carStatus.name + " equips Reflect card");
                    carStatus.reflectAbility = true;
                }
                else
                {

                    Debug.Log(carStatus.name + " equips None");
                }
            }

        }
        carStatus.HPInitialize((carAbility[0]+charAbility[0])*modifier);
        carStatus.MPInitialize((carAbility[1] + charAbility[1])*modifier);
        carStatus.setTopSpeed(basicTopSpeed * (1 + (modifier*(carAbility[2] + charAbility[2] )/ 1000f)));//speed = 100pt = 1.1times, 200pt = 1.2times ...
        carStatus.skillCDInitialize((carAbility[3] + charAbility[3])* modifier);
        carStatus.attackInitialize(carAbility[4] + charAbility[4]);
        carStatus.defenseBase = (carAbility[5] + charAbility[5])*modifier;

        if (isPlayer)//set cards on player
        {
            for (int i = 0; i < StaticVariables.saveData["cars"][carId]["slots"].list.Count; ++i)
            {
                if (StaticVariables.saveData["cars"][carId]["slots"][i].n != -1)
                {
                    string cardAttr = StaticVariables.GetCarSlotAttribute(carId, i);
                    int cardID = (int)StaticVariables.saveData["cars"][carId]["slots"][i].n;
                    carStatus.SetCardOnCar(cardAttr, cardID);
                }
            }
            
        }


        mark.transform.parent = miniMap.transform;
        marks[racerNum] = mark;
        racers[racerNum] = car;
        racersLength++;
        mark.transform.localPosition = new Vector3(0, 0, 0);
        mark.MyCar = car.transform;
        /*GameObject miniMapIconObj = Instantiate(miniMapIcon, mark.transform);
        miniMapIconObj.GetComponent<MeshRenderer>().material = miniMapIconMaterials[charID];
        if (racerNum == 1)
        {
            miniMapIconObj.transform.localEulerAngles = new Vector3(90,180,90);
            miniMapIconObj.transform.localPosition = new Vector3(3,1,0.5f);
        }
        else if (racerNum == 2)
        {
           // miniMapIconObj.transform.localEulerAngles = new Vector3(90,0,90);
            miniMapIconObj.transform.localPosition = new Vector3(0,1,-5);
        }*/
        //car.GetComponentInChildren<EnemyBarLookAt>().mainCameraTrans = backGroundCamera.transform;

        if (car.GetComponent<TimeStopSkill>() != null)
        {
            car.GetComponent<TimeStopSkill>().backGroundCamera = backGroundCamera;
            car.GetComponent<TimeStopSkill>().mainCamera = mainCamera;

        }

        if (isPlayer)//player
        {
            statImage.collector = car.GetComponent<ItemCollector>();
            SetCamera(car, skyBoxIdx);

            itemBtn.setCollector( car.GetComponent<ItemCollector>());
            moveBtn.setPlayerCar(car);

            DestroyImmediate(car.gameObject.GetComponent<AIScript>()); // delete player car's ai script
            miniMap.GetComponent<MiniMapManager>().setCamTarget(mark.transform);
        }
        else // AI
        {

            DestroyImmediate(car.gameObject.GetComponent<PlayerController>());// delete ai car's player script
            foreach (Camera cam in car.gameObject.GetComponentsInChildren<Camera>())
            {
                // disable ai car's camera
                cam.gameObject.SetActive(false);
            }
            car.gameObject.GetComponent<AIScript>().path = path;
        }
    }



    private void SetCamera(Car car, int skyBoxID)
    {
        float h = 2f, d = 2.8f;
        if (StaticVariables.carID == 3 || myCarDebug==3)
        {
            h = 2.5f;
            d = 3.5f;
        }
        mainCamera.transform.position = car.transform.position + (h) * car.transform.up - d* car.transform.forward;
        backGroundCamera.transform.position = mainCamera.transform.position;
        /* mainCamera.transform.rotation =  Quaternion.Euler(new Vector3(
             car.transform.rotation.eulerAngles.x,
             car.transform.rotation.eulerAngles.y - 30,
             car.transform.rotation.eulerAngles.z));*/
        mainCamera.transform.rotation = car.transform.rotation;
        backGroundCamera.transform.rotation = mainCamera.transform.rotation;

        Transform target = car.transform;
        mainCamera.transform.LookAt(target);
        backGroundCamera.transform.LookAt(target);
        mainCamera.GetComponent<EnemyBarLookAt>().setTarget(target);
        backGroundCamera.GetComponent<EnemyBarLookAt>().setTarget(target);

        mainCamera.GetComponent<EnemyBarLookAt>().SetHeightDist(h,d);
        backGroundCamera.GetComponent<EnemyBarLookAt>().SetHeightDist(h, d);
        if (backGroundCamera.GetComponent<Skybox>() != null)
        {
            backGroundCamera.GetComponent<Skybox>().material = skyBoxes[skyBoxID];
        }

        if (isNight(skyBoxID))
        {
            dayLight.enabled = false;
            nightLight.enabled = true;
        }
        else
        {
            dayLight.enabled = true;
            nightLight.enabled = true;
        }
    }

    private bool isNight(int skyBoxID)
    {
        if (skyBoxes[skyBoxID].name.StartsWith("Sunny"))
        {
            //Debug.Log("It's  not night for skybox(" + skyBoxes[skyBoxID].name + ")");
            return false;
        }

        //Debug.Log("It's night for skybox(" + skyBoxes[skyBoxID].name + ")");
        return true;
    }
}
