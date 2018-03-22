﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarStatus : MonoBehaviour
{
    //basic status
    public float currHP = 100;
    public float maxHPBase = 100;
    public float maxHPModifier = 1;

    public float currMP = 0;
    public float maxMPBase = 100;
    public float maxMPModifier = 1;

    public float attackBase = 100;
    public float attackModifier = 1;

    public float topSpeedBase = 100 * 1000 / 3600;//(100 km/h)
    public float topSpeedModifier = 1;
    private const float INITIAL_SPEED_TIME_MODIFIER = 0.2f;
    public float topSpeedTimeModifier = INITIAL_SPEED_TIME_MODIFIER;
    private float accelerationRatio = 0.1f; // get to full speed in 1/(accelerationRatio) seconds; TODO - make it public?

    public float defenseBase = 100;
    public float defenseModifier = 1;

    public float skillCDBase = 10; // how many seconds to fully charge MP
    public float skillCDModifier = 1;
    
    // negative effects
    public bool isPoisoned = false;
    public const float poisonTime = 5.0f; // TODO - fixed ??
    public float poisonTimer = 0.0f;
    public float poisonDPS = 0.0f;
    private CarStatus poisonAttacker;

    public bool isStunned = false;
    private float stunningTime = 1.0f;
    private float stunnedTimer = 0.0f;

    private float speedDebuffTime = 2;
    private bool isSpeedDebuffing = false;
    private float speedDebuffTimer = 0;
    private float speedDebuffRate = 1;

    //card abilities
    public float hpRecover = 0; // recover how many points per second
    public float mpRecover = 0; // recover how many points per second

    public float damageReduction = 0; // modifier of damage received
    public float armorPenetration = 0;
    public float criticalChance = 0.0f;
    private float criticalDamage = 0.5f;//TODO - fixed?
    public bool reflectAbility; // reflect poison, stun and 50% damage
    public int reviveAbility = 0; // how many times it could revive(full HP, MP, remove all debuffs)

    public float poisonAbility = 0;
    public float poisonAbilityTime = 5;// TODO - fixed ??

    public float lifeStealAbility = 0;

    public bool stunAbility;

    public float globalAttackChance = 0;

    public float receivedExpModifier = 1;
    public float receivedCoinModifier = 1;

    public float speedReductionAttack = 0;

    public float accuracy = 1;
    public float evasion = 0;

    public int shieldNumber = 0;

    public float mpCostReduction = 0;
    

    /*
    public int speedUpNumbers = 0;
    public Vector2[] speedUpThres = new Vector2[3];
    */

    // Particles and prefabs
    public ParticleSystem reviveAnime;
    public ParticleSystem explosionOnDead;
    public GameObject stunAnime;
    public bool debug = false;

    public void SetCardOnCar(string cardAttr, int cardId)
    {
        JSONObject numbers = StaticVariables.cardData[cardAttr][cardId]["attributes"];
        string cardName = StaticVariables.cardData[cardAttr][cardId]["name"].str;
        if (cardAttr.Equals("ATK"))
        {
            if (cardName.StartsWith("atkIncrease"))
            {
                attackModifier += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("lifeSteal"))
            {
                lifeStealAbility += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("poison"))
            {
                poisonAbility += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("stun"))
            {
                stunAbility = true;
                return;
            }
            //discard
            if (cardName.StartsWith("singleToGlobal"))
            {
                //implement
                globalAttackChance += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("speedReuction"))
            {
                speedReductionAttack += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("crit"))
            {
                criticalChance += numbers.list[0].n;
                criticalDamage += numbers.list[1].n-1;
                return;
            }
            if (cardName.StartsWith("trade"))
            {
                maxHPModifier -= numbers.list[0].n;
                attackModifier += numbers.list[1].n;
                return;
            }
            if (cardName.StartsWith("increaseAccu"))
            {
                accuracy += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("atkPen"))
            {
                armorPenetration += numbers.list[0].n;
                return;
            }

        }
        else if (cardAttr.Equals("DEF"))
        {
            if (cardName.StartsWith("increaseHP"))
            {
                maxHPModifier += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("hpRecover"))
            {
                hpRecover += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("damRedction"))
            {
                damageReduction += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("reflect"))
            {
                reflectAbility = true;
                return;
            }
            if (cardName.StartsWith("revive"))
            {
                reviveAbility += (int)numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("startWithShield"))
            {
                shieldNumber += (int)numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("defIncrease"))
            {
                defenseModifier += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("evasionIncrease"))
            {
                evasion += numbers.list[0].n;
                return;
            }
        }
        else if (cardAttr.Equals("SPE"))
        {
            if (cardName.StartsWith("mpIncrease"))
            {
                maxMPModifier += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("CDIncrease"))
            {
                skillCDModifier += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("mpCostReduction"))
            {
                mpCostReduction += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("speedIncrease"))
            {
                topSpeedModifier += numbers.list[0].n;
                return;
            }
            if (cardName.StartsWith("coinIncrease"))
            {
                receivedCoinModifier += numbers.list[0].n;
                StaticVariables.coinModifier += receivedCoinModifier;
                return;
            }
            if (cardName.StartsWith("expIncrease"))
            {
                receivedExpModifier += numbers.list[0].n;
                StaticVariables.expModifier += receivedExpModifier;
                return;
            }
            /*
            if (cardName.StartsWith("healthBelow"))
            {
                //implement
                speedUpThres[speedUpNumbers++] = new Vector2(numbers.list[0].n, numbers.list[1].n);
                return;
            }*/
            if (cardName.StartsWith("tradeHealth"))
            {
                maxHPModifier -= numbers.list[0].n;
                topSpeedModifier += numbers.list[1].n;
                return;
            }
        }
    }

    private void FixedUpdate()
    {
        if (StaticVariables.gameIsOver)
        {
            return;
        }
        if (GetComponent<Car>().notStopped())
        {
            topSpeedTimeModifier = Mathf.Clamp(topSpeedTimeModifier + accelerationRatio * Time.deltaTime, INITIAL_SPEED_TIME_MODIFIER, 1);
        }
        if (debug)
        {
            Quaternion spwanRot = Quaternion.Euler(transform.rotation.eulerAngles + new Vector3(90, 0, 0));
            Instantiate(reviveAnime, transform.position, spwanRot, transform);
            debug = false;
        }
        if (isStunned)
        {
            if (GetComponentInChildren<StunningStar>() == null)
            {
                Instantiate(stunAnime, transform.position + new Vector3(0, 1.5f, 0), transform.rotation, transform);
            }
            stunnedTimer += Time.deltaTime;
            if (stunnedTimer > stunningTime)
            {
                isStunned = false;
                stunnedTimer = 0;
                //GetComponent<Rigidbody>().mass = 1000;
                GetComponent<Car>().stunned = false;
            }
            else
            {
                //GetComponent<Rigidbody>().mass = 1;
                GetComponent<Car>().stunned = true;
            }
        }

        if (isPoisoned)
        {
            poisonTimer += Time.deltaTime;
            if (poisonTimer > poisonTime)
            {
                isPoisoned = false;
                poisonTimer = poisonDPS = 0;
                poisonAttacker = null;
            }
            //poison has no critical chance and cannot trigger other special effect(stun, poison and reflect)
            float damage = poisonDPS * getMaxHP() * Time.deltaTime;
            decreaseHP(damage, poisonAttacker);

        }

        Car car = GetComponent<Car>();
        if (car && !car.stopFlag && !car.stoppedBySkill)
        {
            increaseHP(hpRecover * Time.deltaTime);
            if (!GetComponent<Skill>().isSkillUsing)
            {
                increaseMP(mpRecover * Time.deltaTime);
                increaseMP(Time.deltaTime * getSkillCD() / 10);
            }
        }

        if (isSpeedDebuffing)
        {
            speedDebuffTimer += Time.deltaTime;
            if (speedDebuffTimer >= speedDebuffTime)
            {
                removeSpeedDebuff();
            }
        }

        if (getHP() == 0)
        {

            Instantiate(explosionOnDead, transform.position, transform.rotation);
            Destroy(gameObject);
        }

    }

    public void decreaseTopSpeedModifier(float ratio)
    {
        //called when turn or collision
        //Debug.Log("decreaseTopSpeedModifier is called");
        topSpeedTimeModifier = Mathf.Clamp(topSpeedTimeModifier - ratio * accelerationRatio * Time.deltaTime, INITIAL_SPEED_TIME_MODIFIER, 1);

    }

    public void HPInitialize(float baseHP, float hpModifier = 1)
    {
        maxHPBase = baseHP;
        currHP = baseHP * hpModifier;
        maxHPModifier = hpModifier;
    }

    public float getMaxHP()
    {
        return maxHPBase * maxHPModifier;
    }

    public float getHP()
    {
        return currHP;
    }

    public void decreaseHP(float point, CarStatus attacker = null)
    {
        if (shieldNumber > 0)
        {
            shieldNumber--;
            return;
        }
        float decreasedAmount = Mathf.Min(point * Mathf.Max(0, 1 - damageReduction), currHP);

        // it is possible being attack by yourself if your poison ability is reflected
        if (attacker != null && attacker != this && attacker.lifeStealAbility > 0)
        {
            float lsAmount = decreasedAmount * attacker.lifeStealAbility;
            if (lsAmount > 0)
            {
                attacker.increaseHP(lsAmount);
            }
        }
        currHP = Mathf.Clamp(currHP - decreasedAmount, 0, currHP);
        if(GetComponent<ShieldSkill>() && GetComponent<ShieldSkill>() .isSkillUsing&& decreasedAmount>0 )
        {
            Debug.Log("HP decreased by "+decreasedAmount + " during shield skill; current DR = "+ damageReduction);
        }
        // destroy  car
        if (currHP <= 0)
        {
            if (reviveAbility > 0)
            {
                --reviveAbility;
                currHP = getMaxHP();
                currMP = getMaxMP();
                poisonTimer = poisonTime + 1;
                stunnedTimer = stunningTime + 1;
                Quaternion spwanRot = Quaternion.Euler(transform.rotation.eulerAngles + new Vector3(90, 0, 0));
                Instantiate(reviveAnime, transform.position, spwanRot, transform);
            }
            else
            {
                Instantiate(explosionOnDead, transform.position, transform.rotation);
                Destroy(gameObject);
            }
        }
    }

    public void increaseHP(float point)
    {
        currHP = Mathf.Clamp(currHP + point, currHP, getMaxHP());
    }

    public void MPInitialize(float baseMP, float mpModifier = 1)
    {
        maxMPBase = baseMP;
        currMP = 0;
        maxMPModifier = mpModifier;
    }

    public float getMaxMP()
    {
        return maxMPBase * maxMPModifier;
    }

    public float getMP()
    {
        return currMP;
    }

    public void decreaseMP(float point)
    {
        currMP = Mathf.Clamp(currMP - point, 0, currMP);
    }

    public void increaseMP(float point)
    {
        currMP = Mathf.Clamp(currMP + point, currMP, getMaxMP());
    }
    public void attackInitialize(float baseAtk, float modifier = 1)
    {
        attackBase = baseAtk;
        attackModifier = modifier;
    }

    public float getAttackPower()
    {
        return attackBase * attackModifier;
    }

    public void decreaseAttackPower(float point)
    {
        attackBase = Mathf.Max(attackBase - point, 0);
    }

    public void increaseAttackPower(float point)
    {
        attackBase = Mathf.Max(attackBase + point, 0);
    }

    public void skillCDInitialize(float basePoint, float modifier = 1)
    {
        skillCDBase = basePoint;
        skillCDModifier = modifier;
    }

    public float getSkillCD()
    {
        return skillCDBase * skillCDModifier;
    }

    public void decreaseSkillCD(float point)
    {
        skillCDBase = Mathf.Max(skillCDBase - point, 0);
    }

    public void increaseSkillCD(float point)
    {
        skillCDBase += point;
    }

    public void setTopSpeed(float baseSpeed, float modifier = 1)
    {
        topSpeedBase = baseSpeed;
        topSpeedModifier = modifier;
    }

    public float getSpeed()
    {
        return topSpeedBase * topSpeedModifier * topSpeedTimeModifier;
    }

    public void speedDebuff(float debuffRate = 0.5f)
    {
        speedDebuffRate = debuffRate;
        topSpeedModifier *= speedDebuffRate;
        isSpeedDebuffing = true;
        speedDebuffTimer = 0;
    }

    public void removeSpeedDebuff()
    {
        topSpeedModifier /= speedDebuffRate;
        speedDebuffRate = 1;
        isSpeedDebuffing = false;
        speedDebuffTimer = 0;
    }

    public float getAttack()
    {
        return attackBase * attackModifier;
    }

    public float getDefense()
    {
        return defenseBase * defenseModifier;
    }

    public float damageValue(CarStatus attacker, CarStatus defenser, float weaponModifier)
    {
        float atkFactor = attacker.getAttack() * weaponModifier;
        float defFactor = 1 + 0.01f * (Mathf.Max(defenser.getDefense() - attacker.armorPenetration, 0));

        bool isCritical = (Random.value < criticalChance);

        if (isCritical)
        {
            atkFactor *= (1 + criticalDamage);//CRITICAL
        }

        return atkFactor / defFactor;
    }

    public void isAttackedBy(CarStatus attacker, float weaponModifier = 1)
    {
        if (attacker==null)//enviromental attack
        {
            if (GetComponent<AIScript>() != null)
            {
                return;//AI is immune to enviromental attack
            }
            //enviromental attack can be seen as an attacker with 50 attack power and 99999 armor penetration
            float enviromentalAttack = 50;
            float enviromentalDamage = enviromentalAttack * weaponModifier;
            decreaseHP(enviromentalDamage);
            return;
        }
        float rng = Random.value;

        if (rng > (attacker.accuracy - evasion))
        {
            //attack is evaded
            return;
        }
        // check attacker abilities(poison, liseSteal, stun)
        // check self ability(reflect == true)
        float reflectedDamage = 0;//give attacker damage(if has reflect ability)
        float receivedDamage = damageValue(attacker, this, weaponModifier);
        //Debug.Log("receivedDamage = " + receivedDamage);

        CarStatus negativeEffectReciever = this;
        if (reflectAbility)
        {
            receivedDamage = receivedDamage / 2;
            reflectedDamage = receivedDamage;
            negativeEffectReciever = attacker;
        }

        if (attacker != null)
        {
            if (attacker.poisonAbility > 0)
            {
                Debug.Log(negativeEffectReciever.name + " is poisoned by " + attacker.name);
                negativeEffectReciever.isPoisoned = true;
                negativeEffectReciever.poisonTimer = 0;
                negativeEffectReciever.poisonAttacker = this;
                negativeEffectReciever.poisonDPS = attacker.poisonAbility;
            }
            if (attacker.stunAbility)
            {
                negativeEffectReciever.stunnedTimer = 0;
                negativeEffectReciever.isStunned = true;
                Transform spawnTrans = negativeEffectReciever.transform;
                GameObject stunObj = Instantiate(stunAnime, spawnTrans.position + new Vector3(0, 1.5f, 0), spawnTrans.rotation, spawnTrans);
                stunObj.GetComponent<StunningStar>().setLifetime(negativeEffectReciever.stunningTime);
            }
            if (attacker.speedReductionAttack != 0)
            {
                negativeEffectReciever.speedDebuffRate = Mathf.Clamp(1 - attacker.speedReductionAttack, 0, 1);
                negativeEffectReciever.isSpeedDebuffing = true;
            }

            if (reflectedDamage > 0)
            {
                //reflecting damage has no critical chance and cannot trigger other special effect(stun, poison and reflect)
                attacker.decreaseHP(reflectedDamage);
            }
        }

        decreaseHP(receivedDamage,attacker);

    }
}
