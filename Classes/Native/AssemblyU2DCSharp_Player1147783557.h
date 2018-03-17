#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// Stat
struct Stat_t780276378;
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Player::coinText
	Text_t356221433 * ___coinText_2;
	// System.Int32 Player::initialCoins
	int32_t ___initialCoins_3;
	// System.Int32 Player::initialHealthCount
	int32_t ___initialHealthCount_4;
	// System.Int32 Player::initialManaCount
	int32_t ___initialManaCount_5;
	// System.Int32 Player::initialSpeedCount
	int32_t ___initialSpeedCount_6;
	// System.Int32 Player::initialSkillCount
	int32_t ___initialSkillCount_7;
	// System.Int32 Player::initialPowerCount
	int32_t ___initialPowerCount_8;
	// Stat Player::health
	Stat_t780276378 * ___health_9;
	// UnityEngine.UI.Text Player::healthText
	Text_t356221433 * ___healthText_10;
	// System.Single Player::defaultHealth
	float ___defaultHealth_11;
	// System.Single Player::healthVal
	float ___healthVal_12;
	// System.Int32 Player::healthCost
	int32_t ___healthCost_13;
	// UnityEngine.UI.Button Player::addHealthBtn
	Button_t2872111280 * ___addHealthBtn_14;
	// UnityEngine.UI.Button Player::subHealthBtn
	Button_t2872111280 * ___subHealthBtn_15;
	// System.Single Player::initialHealth
	float ___initialHealth_16;
	// Stat Player::mana
	Stat_t780276378 * ___mana_17;
	// UnityEngine.UI.Text Player::manaText
	Text_t356221433 * ___manaText_18;
	// System.Single Player::manaVal
	float ___manaVal_19;
	// System.Int32 Player::manaCost
	int32_t ___manaCost_20;
	// UnityEngine.UI.Button Player::addManaBtn
	Button_t2872111280 * ___addManaBtn_21;
	// UnityEngine.UI.Button Player::subManaBtn
	Button_t2872111280 * ___subManaBtn_22;
	// System.Single Player::initialMana
	float ___initialMana_23;
	// Stat Player::speed
	Stat_t780276378 * ___speed_24;
	// UnityEngine.UI.Text Player::speedText
	Text_t356221433 * ___speedText_25;
	// System.Single Player::speedVal
	float ___speedVal_26;
	// System.Int32 Player::speedCost
	int32_t ___speedCost_27;
	// UnityEngine.UI.Button Player::addSpeedBtn
	Button_t2872111280 * ___addSpeedBtn_28;
	// UnityEngine.UI.Button Player::subSpeedBtn
	Button_t2872111280 * ___subSpeedBtn_29;
	// System.Single Player::initialSpeed
	float ___initialSpeed_30;
	// Stat Player::skill
	Stat_t780276378 * ___skill_31;
	// UnityEngine.UI.Text Player::skillText
	Text_t356221433 * ___skillText_32;
	// System.Single Player::skillVal
	float ___skillVal_33;
	// System.Int32 Player::skillCost
	int32_t ___skillCost_34;
	// UnityEngine.UI.Button Player::addSkillBtn
	Button_t2872111280 * ___addSkillBtn_35;
	// UnityEngine.UI.Button Player::subSkillBtn
	Button_t2872111280 * ___subSkillBtn_36;
	// System.Single Player::initialSkill
	float ___initialSkill_37;
	// Stat Player::power
	Stat_t780276378 * ___power_38;
	// UnityEngine.UI.Text Player::powerText
	Text_t356221433 * ___powerText_39;
	// System.Single Player::powerVal
	float ___powerVal_40;
	// System.Int32 Player::powerCost
	int32_t ___powerCost_41;
	// UnityEngine.UI.Button Player::addPowerBtn
	Button_t2872111280 * ___addPowerBtn_42;
	// UnityEngine.UI.Button Player::subPowerBtn
	Button_t2872111280 * ___subPowerBtn_43;
	// System.Single Player::initialPower
	float ___initialPower_44;

public:
	inline static int32_t get_offset_of_coinText_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___coinText_2)); }
	inline Text_t356221433 * get_coinText_2() const { return ___coinText_2; }
	inline Text_t356221433 ** get_address_of_coinText_2() { return &___coinText_2; }
	inline void set_coinText_2(Text_t356221433 * value)
	{
		___coinText_2 = value;
		Il2CppCodeGenWriteBarrier(&___coinText_2, value);
	}

	inline static int32_t get_offset_of_initialCoins_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialCoins_3)); }
	inline int32_t get_initialCoins_3() const { return ___initialCoins_3; }
	inline int32_t* get_address_of_initialCoins_3() { return &___initialCoins_3; }
	inline void set_initialCoins_3(int32_t value)
	{
		___initialCoins_3 = value;
	}

	inline static int32_t get_offset_of_initialHealthCount_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialHealthCount_4)); }
	inline int32_t get_initialHealthCount_4() const { return ___initialHealthCount_4; }
	inline int32_t* get_address_of_initialHealthCount_4() { return &___initialHealthCount_4; }
	inline void set_initialHealthCount_4(int32_t value)
	{
		___initialHealthCount_4 = value;
	}

	inline static int32_t get_offset_of_initialManaCount_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialManaCount_5)); }
	inline int32_t get_initialManaCount_5() const { return ___initialManaCount_5; }
	inline int32_t* get_address_of_initialManaCount_5() { return &___initialManaCount_5; }
	inline void set_initialManaCount_5(int32_t value)
	{
		___initialManaCount_5 = value;
	}

	inline static int32_t get_offset_of_initialSpeedCount_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialSpeedCount_6)); }
	inline int32_t get_initialSpeedCount_6() const { return ___initialSpeedCount_6; }
	inline int32_t* get_address_of_initialSpeedCount_6() { return &___initialSpeedCount_6; }
	inline void set_initialSpeedCount_6(int32_t value)
	{
		___initialSpeedCount_6 = value;
	}

	inline static int32_t get_offset_of_initialSkillCount_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialSkillCount_7)); }
	inline int32_t get_initialSkillCount_7() const { return ___initialSkillCount_7; }
	inline int32_t* get_address_of_initialSkillCount_7() { return &___initialSkillCount_7; }
	inline void set_initialSkillCount_7(int32_t value)
	{
		___initialSkillCount_7 = value;
	}

	inline static int32_t get_offset_of_initialPowerCount_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialPowerCount_8)); }
	inline int32_t get_initialPowerCount_8() const { return ___initialPowerCount_8; }
	inline int32_t* get_address_of_initialPowerCount_8() { return &___initialPowerCount_8; }
	inline void set_initialPowerCount_8(int32_t value)
	{
		___initialPowerCount_8 = value;
	}

	inline static int32_t get_offset_of_health_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___health_9)); }
	inline Stat_t780276378 * get_health_9() const { return ___health_9; }
	inline Stat_t780276378 ** get_address_of_health_9() { return &___health_9; }
	inline void set_health_9(Stat_t780276378 * value)
	{
		___health_9 = value;
		Il2CppCodeGenWriteBarrier(&___health_9, value);
	}

	inline static int32_t get_offset_of_healthText_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___healthText_10)); }
	inline Text_t356221433 * get_healthText_10() const { return ___healthText_10; }
	inline Text_t356221433 ** get_address_of_healthText_10() { return &___healthText_10; }
	inline void set_healthText_10(Text_t356221433 * value)
	{
		___healthText_10 = value;
		Il2CppCodeGenWriteBarrier(&___healthText_10, value);
	}

	inline static int32_t get_offset_of_defaultHealth_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___defaultHealth_11)); }
	inline float get_defaultHealth_11() const { return ___defaultHealth_11; }
	inline float* get_address_of_defaultHealth_11() { return &___defaultHealth_11; }
	inline void set_defaultHealth_11(float value)
	{
		___defaultHealth_11 = value;
	}

	inline static int32_t get_offset_of_healthVal_12() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___healthVal_12)); }
	inline float get_healthVal_12() const { return ___healthVal_12; }
	inline float* get_address_of_healthVal_12() { return &___healthVal_12; }
	inline void set_healthVal_12(float value)
	{
		___healthVal_12 = value;
	}

	inline static int32_t get_offset_of_healthCost_13() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___healthCost_13)); }
	inline int32_t get_healthCost_13() const { return ___healthCost_13; }
	inline int32_t* get_address_of_healthCost_13() { return &___healthCost_13; }
	inline void set_healthCost_13(int32_t value)
	{
		___healthCost_13 = value;
	}

	inline static int32_t get_offset_of_addHealthBtn_14() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___addHealthBtn_14)); }
	inline Button_t2872111280 * get_addHealthBtn_14() const { return ___addHealthBtn_14; }
	inline Button_t2872111280 ** get_address_of_addHealthBtn_14() { return &___addHealthBtn_14; }
	inline void set_addHealthBtn_14(Button_t2872111280 * value)
	{
		___addHealthBtn_14 = value;
		Il2CppCodeGenWriteBarrier(&___addHealthBtn_14, value);
	}

	inline static int32_t get_offset_of_subHealthBtn_15() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___subHealthBtn_15)); }
	inline Button_t2872111280 * get_subHealthBtn_15() const { return ___subHealthBtn_15; }
	inline Button_t2872111280 ** get_address_of_subHealthBtn_15() { return &___subHealthBtn_15; }
	inline void set_subHealthBtn_15(Button_t2872111280 * value)
	{
		___subHealthBtn_15 = value;
		Il2CppCodeGenWriteBarrier(&___subHealthBtn_15, value);
	}

	inline static int32_t get_offset_of_initialHealth_16() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialHealth_16)); }
	inline float get_initialHealth_16() const { return ___initialHealth_16; }
	inline float* get_address_of_initialHealth_16() { return &___initialHealth_16; }
	inline void set_initialHealth_16(float value)
	{
		___initialHealth_16 = value;
	}

	inline static int32_t get_offset_of_mana_17() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___mana_17)); }
	inline Stat_t780276378 * get_mana_17() const { return ___mana_17; }
	inline Stat_t780276378 ** get_address_of_mana_17() { return &___mana_17; }
	inline void set_mana_17(Stat_t780276378 * value)
	{
		___mana_17 = value;
		Il2CppCodeGenWriteBarrier(&___mana_17, value);
	}

	inline static int32_t get_offset_of_manaText_18() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___manaText_18)); }
	inline Text_t356221433 * get_manaText_18() const { return ___manaText_18; }
	inline Text_t356221433 ** get_address_of_manaText_18() { return &___manaText_18; }
	inline void set_manaText_18(Text_t356221433 * value)
	{
		___manaText_18 = value;
		Il2CppCodeGenWriteBarrier(&___manaText_18, value);
	}

	inline static int32_t get_offset_of_manaVal_19() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___manaVal_19)); }
	inline float get_manaVal_19() const { return ___manaVal_19; }
	inline float* get_address_of_manaVal_19() { return &___manaVal_19; }
	inline void set_manaVal_19(float value)
	{
		___manaVal_19 = value;
	}

	inline static int32_t get_offset_of_manaCost_20() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___manaCost_20)); }
	inline int32_t get_manaCost_20() const { return ___manaCost_20; }
	inline int32_t* get_address_of_manaCost_20() { return &___manaCost_20; }
	inline void set_manaCost_20(int32_t value)
	{
		___manaCost_20 = value;
	}

	inline static int32_t get_offset_of_addManaBtn_21() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___addManaBtn_21)); }
	inline Button_t2872111280 * get_addManaBtn_21() const { return ___addManaBtn_21; }
	inline Button_t2872111280 ** get_address_of_addManaBtn_21() { return &___addManaBtn_21; }
	inline void set_addManaBtn_21(Button_t2872111280 * value)
	{
		___addManaBtn_21 = value;
		Il2CppCodeGenWriteBarrier(&___addManaBtn_21, value);
	}

	inline static int32_t get_offset_of_subManaBtn_22() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___subManaBtn_22)); }
	inline Button_t2872111280 * get_subManaBtn_22() const { return ___subManaBtn_22; }
	inline Button_t2872111280 ** get_address_of_subManaBtn_22() { return &___subManaBtn_22; }
	inline void set_subManaBtn_22(Button_t2872111280 * value)
	{
		___subManaBtn_22 = value;
		Il2CppCodeGenWriteBarrier(&___subManaBtn_22, value);
	}

	inline static int32_t get_offset_of_initialMana_23() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialMana_23)); }
	inline float get_initialMana_23() const { return ___initialMana_23; }
	inline float* get_address_of_initialMana_23() { return &___initialMana_23; }
	inline void set_initialMana_23(float value)
	{
		___initialMana_23 = value;
	}

	inline static int32_t get_offset_of_speed_24() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___speed_24)); }
	inline Stat_t780276378 * get_speed_24() const { return ___speed_24; }
	inline Stat_t780276378 ** get_address_of_speed_24() { return &___speed_24; }
	inline void set_speed_24(Stat_t780276378 * value)
	{
		___speed_24 = value;
		Il2CppCodeGenWriteBarrier(&___speed_24, value);
	}

	inline static int32_t get_offset_of_speedText_25() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___speedText_25)); }
	inline Text_t356221433 * get_speedText_25() const { return ___speedText_25; }
	inline Text_t356221433 ** get_address_of_speedText_25() { return &___speedText_25; }
	inline void set_speedText_25(Text_t356221433 * value)
	{
		___speedText_25 = value;
		Il2CppCodeGenWriteBarrier(&___speedText_25, value);
	}

	inline static int32_t get_offset_of_speedVal_26() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___speedVal_26)); }
	inline float get_speedVal_26() const { return ___speedVal_26; }
	inline float* get_address_of_speedVal_26() { return &___speedVal_26; }
	inline void set_speedVal_26(float value)
	{
		___speedVal_26 = value;
	}

	inline static int32_t get_offset_of_speedCost_27() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___speedCost_27)); }
	inline int32_t get_speedCost_27() const { return ___speedCost_27; }
	inline int32_t* get_address_of_speedCost_27() { return &___speedCost_27; }
	inline void set_speedCost_27(int32_t value)
	{
		___speedCost_27 = value;
	}

	inline static int32_t get_offset_of_addSpeedBtn_28() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___addSpeedBtn_28)); }
	inline Button_t2872111280 * get_addSpeedBtn_28() const { return ___addSpeedBtn_28; }
	inline Button_t2872111280 ** get_address_of_addSpeedBtn_28() { return &___addSpeedBtn_28; }
	inline void set_addSpeedBtn_28(Button_t2872111280 * value)
	{
		___addSpeedBtn_28 = value;
		Il2CppCodeGenWriteBarrier(&___addSpeedBtn_28, value);
	}

	inline static int32_t get_offset_of_subSpeedBtn_29() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___subSpeedBtn_29)); }
	inline Button_t2872111280 * get_subSpeedBtn_29() const { return ___subSpeedBtn_29; }
	inline Button_t2872111280 ** get_address_of_subSpeedBtn_29() { return &___subSpeedBtn_29; }
	inline void set_subSpeedBtn_29(Button_t2872111280 * value)
	{
		___subSpeedBtn_29 = value;
		Il2CppCodeGenWriteBarrier(&___subSpeedBtn_29, value);
	}

	inline static int32_t get_offset_of_initialSpeed_30() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialSpeed_30)); }
	inline float get_initialSpeed_30() const { return ___initialSpeed_30; }
	inline float* get_address_of_initialSpeed_30() { return &___initialSpeed_30; }
	inline void set_initialSpeed_30(float value)
	{
		___initialSpeed_30 = value;
	}

	inline static int32_t get_offset_of_skill_31() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___skill_31)); }
	inline Stat_t780276378 * get_skill_31() const { return ___skill_31; }
	inline Stat_t780276378 ** get_address_of_skill_31() { return &___skill_31; }
	inline void set_skill_31(Stat_t780276378 * value)
	{
		___skill_31 = value;
		Il2CppCodeGenWriteBarrier(&___skill_31, value);
	}

	inline static int32_t get_offset_of_skillText_32() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___skillText_32)); }
	inline Text_t356221433 * get_skillText_32() const { return ___skillText_32; }
	inline Text_t356221433 ** get_address_of_skillText_32() { return &___skillText_32; }
	inline void set_skillText_32(Text_t356221433 * value)
	{
		___skillText_32 = value;
		Il2CppCodeGenWriteBarrier(&___skillText_32, value);
	}

	inline static int32_t get_offset_of_skillVal_33() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___skillVal_33)); }
	inline float get_skillVal_33() const { return ___skillVal_33; }
	inline float* get_address_of_skillVal_33() { return &___skillVal_33; }
	inline void set_skillVal_33(float value)
	{
		___skillVal_33 = value;
	}

	inline static int32_t get_offset_of_skillCost_34() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___skillCost_34)); }
	inline int32_t get_skillCost_34() const { return ___skillCost_34; }
	inline int32_t* get_address_of_skillCost_34() { return &___skillCost_34; }
	inline void set_skillCost_34(int32_t value)
	{
		___skillCost_34 = value;
	}

	inline static int32_t get_offset_of_addSkillBtn_35() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___addSkillBtn_35)); }
	inline Button_t2872111280 * get_addSkillBtn_35() const { return ___addSkillBtn_35; }
	inline Button_t2872111280 ** get_address_of_addSkillBtn_35() { return &___addSkillBtn_35; }
	inline void set_addSkillBtn_35(Button_t2872111280 * value)
	{
		___addSkillBtn_35 = value;
		Il2CppCodeGenWriteBarrier(&___addSkillBtn_35, value);
	}

	inline static int32_t get_offset_of_subSkillBtn_36() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___subSkillBtn_36)); }
	inline Button_t2872111280 * get_subSkillBtn_36() const { return ___subSkillBtn_36; }
	inline Button_t2872111280 ** get_address_of_subSkillBtn_36() { return &___subSkillBtn_36; }
	inline void set_subSkillBtn_36(Button_t2872111280 * value)
	{
		___subSkillBtn_36 = value;
		Il2CppCodeGenWriteBarrier(&___subSkillBtn_36, value);
	}

	inline static int32_t get_offset_of_initialSkill_37() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialSkill_37)); }
	inline float get_initialSkill_37() const { return ___initialSkill_37; }
	inline float* get_address_of_initialSkill_37() { return &___initialSkill_37; }
	inline void set_initialSkill_37(float value)
	{
		___initialSkill_37 = value;
	}

	inline static int32_t get_offset_of_power_38() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___power_38)); }
	inline Stat_t780276378 * get_power_38() const { return ___power_38; }
	inline Stat_t780276378 ** get_address_of_power_38() { return &___power_38; }
	inline void set_power_38(Stat_t780276378 * value)
	{
		___power_38 = value;
		Il2CppCodeGenWriteBarrier(&___power_38, value);
	}

	inline static int32_t get_offset_of_powerText_39() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___powerText_39)); }
	inline Text_t356221433 * get_powerText_39() const { return ___powerText_39; }
	inline Text_t356221433 ** get_address_of_powerText_39() { return &___powerText_39; }
	inline void set_powerText_39(Text_t356221433 * value)
	{
		___powerText_39 = value;
		Il2CppCodeGenWriteBarrier(&___powerText_39, value);
	}

	inline static int32_t get_offset_of_powerVal_40() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___powerVal_40)); }
	inline float get_powerVal_40() const { return ___powerVal_40; }
	inline float* get_address_of_powerVal_40() { return &___powerVal_40; }
	inline void set_powerVal_40(float value)
	{
		___powerVal_40 = value;
	}

	inline static int32_t get_offset_of_powerCost_41() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___powerCost_41)); }
	inline int32_t get_powerCost_41() const { return ___powerCost_41; }
	inline int32_t* get_address_of_powerCost_41() { return &___powerCost_41; }
	inline void set_powerCost_41(int32_t value)
	{
		___powerCost_41 = value;
	}

	inline static int32_t get_offset_of_addPowerBtn_42() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___addPowerBtn_42)); }
	inline Button_t2872111280 * get_addPowerBtn_42() const { return ___addPowerBtn_42; }
	inline Button_t2872111280 ** get_address_of_addPowerBtn_42() { return &___addPowerBtn_42; }
	inline void set_addPowerBtn_42(Button_t2872111280 * value)
	{
		___addPowerBtn_42 = value;
		Il2CppCodeGenWriteBarrier(&___addPowerBtn_42, value);
	}

	inline static int32_t get_offset_of_subPowerBtn_43() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___subPowerBtn_43)); }
	inline Button_t2872111280 * get_subPowerBtn_43() const { return ___subPowerBtn_43; }
	inline Button_t2872111280 ** get_address_of_subPowerBtn_43() { return &___subPowerBtn_43; }
	inline void set_subPowerBtn_43(Button_t2872111280 * value)
	{
		___subPowerBtn_43 = value;
		Il2CppCodeGenWriteBarrier(&___subPowerBtn_43, value);
	}

	inline static int32_t get_offset_of_initialPower_44() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___initialPower_44)); }
	inline float get_initialPower_44() const { return ___initialPower_44; }
	inline float* get_address_of_initialPower_44() { return &___initialPower_44; }
	inline void set_initialPower_44(float value)
	{
		___initialPower_44 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
