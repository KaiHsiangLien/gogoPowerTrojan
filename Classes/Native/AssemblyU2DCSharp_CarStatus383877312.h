#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CarStatus
struct CarStatus_t383877312;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarStatus
struct  CarStatus_t383877312  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CarStatus::currHP
	float ___currHP_2;
	// System.Single CarStatus::maxHPBase
	float ___maxHPBase_3;
	// System.Single CarStatus::maxHPModifier
	float ___maxHPModifier_4;
	// System.Single CarStatus::currMP
	float ___currMP_5;
	// System.Single CarStatus::maxMPBase
	float ___maxMPBase_6;
	// System.Single CarStatus::maxMPModifier
	float ___maxMPModifier_7;
	// System.Single CarStatus::attackBase
	float ___attackBase_8;
	// System.Single CarStatus::attackModifier
	float ___attackModifier_9;
	// System.Single CarStatus::topSpeedBase
	float ___topSpeedBase_10;
	// System.Single CarStatus::topSpeedModifier
	float ___topSpeedModifier_11;
	// System.Single CarStatus::topSpeedTimeModifier
	float ___topSpeedTimeModifier_13;
	// System.Single CarStatus::accelerationRatio
	float ___accelerationRatio_14;
	// System.Single CarStatus::defenseBase
	float ___defenseBase_15;
	// System.Single CarStatus::defenseModifier
	float ___defenseModifier_16;
	// System.Single CarStatus::skillCDBase
	float ___skillCDBase_17;
	// System.Single CarStatus::skillCDModifier
	float ___skillCDModifier_18;
	// System.Boolean CarStatus::isPoisoned
	bool ___isPoisoned_19;
	// System.Single CarStatus::poisonTimer
	float ___poisonTimer_21;
	// System.Single CarStatus::poisonDPS
	float ___poisonDPS_22;
	// CarStatus CarStatus::poisonAttacker
	CarStatus_t383877312 * ___poisonAttacker_23;
	// System.Boolean CarStatus::isStunned
	bool ___isStunned_24;
	// System.Single CarStatus::stunningTime
	float ___stunningTime_25;
	// System.Single CarStatus::stunnedTimer
	float ___stunnedTimer_26;
	// System.Single CarStatus::speedDebuffTime
	float ___speedDebuffTime_27;
	// System.Boolean CarStatus::isSpeedDebuffing
	bool ___isSpeedDebuffing_28;
	// System.Single CarStatus::speedDebuffTimer
	float ___speedDebuffTimer_29;
	// System.Single CarStatus::speedDebuffRate
	float ___speedDebuffRate_30;
	// System.Single CarStatus::hpRecover
	float ___hpRecover_31;
	// System.Single CarStatus::mpRecover
	float ___mpRecover_32;
	// System.Single CarStatus::damageReduction
	float ___damageReduction_33;
	// System.Single CarStatus::armorPenetration
	float ___armorPenetration_34;
	// System.Single CarStatus::criticalChance
	float ___criticalChance_35;
	// System.Single CarStatus::criticalDamage
	float ___criticalDamage_36;
	// System.Boolean CarStatus::reflectAbility
	bool ___reflectAbility_37;
	// System.Int32 CarStatus::reviveAbility
	int32_t ___reviveAbility_38;
	// System.Single CarStatus::poisonAbility
	float ___poisonAbility_39;
	// System.Single CarStatus::poisonAbilityTime
	float ___poisonAbilityTime_40;
	// System.Single CarStatus::lifeStealAbility
	float ___lifeStealAbility_41;
	// System.Boolean CarStatus::stunAbility
	bool ___stunAbility_42;
	// System.Single CarStatus::globalAttackChance
	float ___globalAttackChance_43;
	// System.Single CarStatus::receivedExpModifier
	float ___receivedExpModifier_44;
	// System.Single CarStatus::receivedCoinModifier
	float ___receivedCoinModifier_45;
	// System.Single CarStatus::speedReductionAttack
	float ___speedReductionAttack_46;
	// System.Single CarStatus::accuracy
	float ___accuracy_47;
	// System.Single CarStatus::evasion
	float ___evasion_48;
	// System.Int32 CarStatus::shieldNumber
	int32_t ___shieldNumber_49;
	// System.Single CarStatus::mpCostReduction
	float ___mpCostReduction_50;
	// UnityEngine.ParticleSystem CarStatus::reviveAnime
	ParticleSystem_t3394631041 * ___reviveAnime_51;
	// UnityEngine.ParticleSystem CarStatus::explosionOnDead
	ParticleSystem_t3394631041 * ___explosionOnDead_52;
	// UnityEngine.GameObject CarStatus::stunAnime
	GameObject_t1756533147 * ___stunAnime_53;
	// System.Boolean CarStatus::debug
	bool ___debug_54;

public:
	inline static int32_t get_offset_of_currHP_2() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___currHP_2)); }
	inline float get_currHP_2() const { return ___currHP_2; }
	inline float* get_address_of_currHP_2() { return &___currHP_2; }
	inline void set_currHP_2(float value)
	{
		___currHP_2 = value;
	}

	inline static int32_t get_offset_of_maxHPBase_3() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___maxHPBase_3)); }
	inline float get_maxHPBase_3() const { return ___maxHPBase_3; }
	inline float* get_address_of_maxHPBase_3() { return &___maxHPBase_3; }
	inline void set_maxHPBase_3(float value)
	{
		___maxHPBase_3 = value;
	}

	inline static int32_t get_offset_of_maxHPModifier_4() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___maxHPModifier_4)); }
	inline float get_maxHPModifier_4() const { return ___maxHPModifier_4; }
	inline float* get_address_of_maxHPModifier_4() { return &___maxHPModifier_4; }
	inline void set_maxHPModifier_4(float value)
	{
		___maxHPModifier_4 = value;
	}

	inline static int32_t get_offset_of_currMP_5() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___currMP_5)); }
	inline float get_currMP_5() const { return ___currMP_5; }
	inline float* get_address_of_currMP_5() { return &___currMP_5; }
	inline void set_currMP_5(float value)
	{
		___currMP_5 = value;
	}

	inline static int32_t get_offset_of_maxMPBase_6() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___maxMPBase_6)); }
	inline float get_maxMPBase_6() const { return ___maxMPBase_6; }
	inline float* get_address_of_maxMPBase_6() { return &___maxMPBase_6; }
	inline void set_maxMPBase_6(float value)
	{
		___maxMPBase_6 = value;
	}

	inline static int32_t get_offset_of_maxMPModifier_7() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___maxMPModifier_7)); }
	inline float get_maxMPModifier_7() const { return ___maxMPModifier_7; }
	inline float* get_address_of_maxMPModifier_7() { return &___maxMPModifier_7; }
	inline void set_maxMPModifier_7(float value)
	{
		___maxMPModifier_7 = value;
	}

	inline static int32_t get_offset_of_attackBase_8() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___attackBase_8)); }
	inline float get_attackBase_8() const { return ___attackBase_8; }
	inline float* get_address_of_attackBase_8() { return &___attackBase_8; }
	inline void set_attackBase_8(float value)
	{
		___attackBase_8 = value;
	}

	inline static int32_t get_offset_of_attackModifier_9() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___attackModifier_9)); }
	inline float get_attackModifier_9() const { return ___attackModifier_9; }
	inline float* get_address_of_attackModifier_9() { return &___attackModifier_9; }
	inline void set_attackModifier_9(float value)
	{
		___attackModifier_9 = value;
	}

	inline static int32_t get_offset_of_topSpeedBase_10() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___topSpeedBase_10)); }
	inline float get_topSpeedBase_10() const { return ___topSpeedBase_10; }
	inline float* get_address_of_topSpeedBase_10() { return &___topSpeedBase_10; }
	inline void set_topSpeedBase_10(float value)
	{
		___topSpeedBase_10 = value;
	}

	inline static int32_t get_offset_of_topSpeedModifier_11() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___topSpeedModifier_11)); }
	inline float get_topSpeedModifier_11() const { return ___topSpeedModifier_11; }
	inline float* get_address_of_topSpeedModifier_11() { return &___topSpeedModifier_11; }
	inline void set_topSpeedModifier_11(float value)
	{
		___topSpeedModifier_11 = value;
	}

	inline static int32_t get_offset_of_topSpeedTimeModifier_13() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___topSpeedTimeModifier_13)); }
	inline float get_topSpeedTimeModifier_13() const { return ___topSpeedTimeModifier_13; }
	inline float* get_address_of_topSpeedTimeModifier_13() { return &___topSpeedTimeModifier_13; }
	inline void set_topSpeedTimeModifier_13(float value)
	{
		___topSpeedTimeModifier_13 = value;
	}

	inline static int32_t get_offset_of_accelerationRatio_14() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___accelerationRatio_14)); }
	inline float get_accelerationRatio_14() const { return ___accelerationRatio_14; }
	inline float* get_address_of_accelerationRatio_14() { return &___accelerationRatio_14; }
	inline void set_accelerationRatio_14(float value)
	{
		___accelerationRatio_14 = value;
	}

	inline static int32_t get_offset_of_defenseBase_15() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___defenseBase_15)); }
	inline float get_defenseBase_15() const { return ___defenseBase_15; }
	inline float* get_address_of_defenseBase_15() { return &___defenseBase_15; }
	inline void set_defenseBase_15(float value)
	{
		___defenseBase_15 = value;
	}

	inline static int32_t get_offset_of_defenseModifier_16() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___defenseModifier_16)); }
	inline float get_defenseModifier_16() const { return ___defenseModifier_16; }
	inline float* get_address_of_defenseModifier_16() { return &___defenseModifier_16; }
	inline void set_defenseModifier_16(float value)
	{
		___defenseModifier_16 = value;
	}

	inline static int32_t get_offset_of_skillCDBase_17() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___skillCDBase_17)); }
	inline float get_skillCDBase_17() const { return ___skillCDBase_17; }
	inline float* get_address_of_skillCDBase_17() { return &___skillCDBase_17; }
	inline void set_skillCDBase_17(float value)
	{
		___skillCDBase_17 = value;
	}

	inline static int32_t get_offset_of_skillCDModifier_18() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___skillCDModifier_18)); }
	inline float get_skillCDModifier_18() const { return ___skillCDModifier_18; }
	inline float* get_address_of_skillCDModifier_18() { return &___skillCDModifier_18; }
	inline void set_skillCDModifier_18(float value)
	{
		___skillCDModifier_18 = value;
	}

	inline static int32_t get_offset_of_isPoisoned_19() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___isPoisoned_19)); }
	inline bool get_isPoisoned_19() const { return ___isPoisoned_19; }
	inline bool* get_address_of_isPoisoned_19() { return &___isPoisoned_19; }
	inline void set_isPoisoned_19(bool value)
	{
		___isPoisoned_19 = value;
	}

	inline static int32_t get_offset_of_poisonTimer_21() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___poisonTimer_21)); }
	inline float get_poisonTimer_21() const { return ___poisonTimer_21; }
	inline float* get_address_of_poisonTimer_21() { return &___poisonTimer_21; }
	inline void set_poisonTimer_21(float value)
	{
		___poisonTimer_21 = value;
	}

	inline static int32_t get_offset_of_poisonDPS_22() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___poisonDPS_22)); }
	inline float get_poisonDPS_22() const { return ___poisonDPS_22; }
	inline float* get_address_of_poisonDPS_22() { return &___poisonDPS_22; }
	inline void set_poisonDPS_22(float value)
	{
		___poisonDPS_22 = value;
	}

	inline static int32_t get_offset_of_poisonAttacker_23() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___poisonAttacker_23)); }
	inline CarStatus_t383877312 * get_poisonAttacker_23() const { return ___poisonAttacker_23; }
	inline CarStatus_t383877312 ** get_address_of_poisonAttacker_23() { return &___poisonAttacker_23; }
	inline void set_poisonAttacker_23(CarStatus_t383877312 * value)
	{
		___poisonAttacker_23 = value;
		Il2CppCodeGenWriteBarrier(&___poisonAttacker_23, value);
	}

	inline static int32_t get_offset_of_isStunned_24() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___isStunned_24)); }
	inline bool get_isStunned_24() const { return ___isStunned_24; }
	inline bool* get_address_of_isStunned_24() { return &___isStunned_24; }
	inline void set_isStunned_24(bool value)
	{
		___isStunned_24 = value;
	}

	inline static int32_t get_offset_of_stunningTime_25() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___stunningTime_25)); }
	inline float get_stunningTime_25() const { return ___stunningTime_25; }
	inline float* get_address_of_stunningTime_25() { return &___stunningTime_25; }
	inline void set_stunningTime_25(float value)
	{
		___stunningTime_25 = value;
	}

	inline static int32_t get_offset_of_stunnedTimer_26() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___stunnedTimer_26)); }
	inline float get_stunnedTimer_26() const { return ___stunnedTimer_26; }
	inline float* get_address_of_stunnedTimer_26() { return &___stunnedTimer_26; }
	inline void set_stunnedTimer_26(float value)
	{
		___stunnedTimer_26 = value;
	}

	inline static int32_t get_offset_of_speedDebuffTime_27() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___speedDebuffTime_27)); }
	inline float get_speedDebuffTime_27() const { return ___speedDebuffTime_27; }
	inline float* get_address_of_speedDebuffTime_27() { return &___speedDebuffTime_27; }
	inline void set_speedDebuffTime_27(float value)
	{
		___speedDebuffTime_27 = value;
	}

	inline static int32_t get_offset_of_isSpeedDebuffing_28() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___isSpeedDebuffing_28)); }
	inline bool get_isSpeedDebuffing_28() const { return ___isSpeedDebuffing_28; }
	inline bool* get_address_of_isSpeedDebuffing_28() { return &___isSpeedDebuffing_28; }
	inline void set_isSpeedDebuffing_28(bool value)
	{
		___isSpeedDebuffing_28 = value;
	}

	inline static int32_t get_offset_of_speedDebuffTimer_29() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___speedDebuffTimer_29)); }
	inline float get_speedDebuffTimer_29() const { return ___speedDebuffTimer_29; }
	inline float* get_address_of_speedDebuffTimer_29() { return &___speedDebuffTimer_29; }
	inline void set_speedDebuffTimer_29(float value)
	{
		___speedDebuffTimer_29 = value;
	}

	inline static int32_t get_offset_of_speedDebuffRate_30() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___speedDebuffRate_30)); }
	inline float get_speedDebuffRate_30() const { return ___speedDebuffRate_30; }
	inline float* get_address_of_speedDebuffRate_30() { return &___speedDebuffRate_30; }
	inline void set_speedDebuffRate_30(float value)
	{
		___speedDebuffRate_30 = value;
	}

	inline static int32_t get_offset_of_hpRecover_31() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___hpRecover_31)); }
	inline float get_hpRecover_31() const { return ___hpRecover_31; }
	inline float* get_address_of_hpRecover_31() { return &___hpRecover_31; }
	inline void set_hpRecover_31(float value)
	{
		___hpRecover_31 = value;
	}

	inline static int32_t get_offset_of_mpRecover_32() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___mpRecover_32)); }
	inline float get_mpRecover_32() const { return ___mpRecover_32; }
	inline float* get_address_of_mpRecover_32() { return &___mpRecover_32; }
	inline void set_mpRecover_32(float value)
	{
		___mpRecover_32 = value;
	}

	inline static int32_t get_offset_of_damageReduction_33() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___damageReduction_33)); }
	inline float get_damageReduction_33() const { return ___damageReduction_33; }
	inline float* get_address_of_damageReduction_33() { return &___damageReduction_33; }
	inline void set_damageReduction_33(float value)
	{
		___damageReduction_33 = value;
	}

	inline static int32_t get_offset_of_armorPenetration_34() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___armorPenetration_34)); }
	inline float get_armorPenetration_34() const { return ___armorPenetration_34; }
	inline float* get_address_of_armorPenetration_34() { return &___armorPenetration_34; }
	inline void set_armorPenetration_34(float value)
	{
		___armorPenetration_34 = value;
	}

	inline static int32_t get_offset_of_criticalChance_35() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___criticalChance_35)); }
	inline float get_criticalChance_35() const { return ___criticalChance_35; }
	inline float* get_address_of_criticalChance_35() { return &___criticalChance_35; }
	inline void set_criticalChance_35(float value)
	{
		___criticalChance_35 = value;
	}

	inline static int32_t get_offset_of_criticalDamage_36() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___criticalDamage_36)); }
	inline float get_criticalDamage_36() const { return ___criticalDamage_36; }
	inline float* get_address_of_criticalDamage_36() { return &___criticalDamage_36; }
	inline void set_criticalDamage_36(float value)
	{
		___criticalDamage_36 = value;
	}

	inline static int32_t get_offset_of_reflectAbility_37() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___reflectAbility_37)); }
	inline bool get_reflectAbility_37() const { return ___reflectAbility_37; }
	inline bool* get_address_of_reflectAbility_37() { return &___reflectAbility_37; }
	inline void set_reflectAbility_37(bool value)
	{
		___reflectAbility_37 = value;
	}

	inline static int32_t get_offset_of_reviveAbility_38() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___reviveAbility_38)); }
	inline int32_t get_reviveAbility_38() const { return ___reviveAbility_38; }
	inline int32_t* get_address_of_reviveAbility_38() { return &___reviveAbility_38; }
	inline void set_reviveAbility_38(int32_t value)
	{
		___reviveAbility_38 = value;
	}

	inline static int32_t get_offset_of_poisonAbility_39() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___poisonAbility_39)); }
	inline float get_poisonAbility_39() const { return ___poisonAbility_39; }
	inline float* get_address_of_poisonAbility_39() { return &___poisonAbility_39; }
	inline void set_poisonAbility_39(float value)
	{
		___poisonAbility_39 = value;
	}

	inline static int32_t get_offset_of_poisonAbilityTime_40() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___poisonAbilityTime_40)); }
	inline float get_poisonAbilityTime_40() const { return ___poisonAbilityTime_40; }
	inline float* get_address_of_poisonAbilityTime_40() { return &___poisonAbilityTime_40; }
	inline void set_poisonAbilityTime_40(float value)
	{
		___poisonAbilityTime_40 = value;
	}

	inline static int32_t get_offset_of_lifeStealAbility_41() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___lifeStealAbility_41)); }
	inline float get_lifeStealAbility_41() const { return ___lifeStealAbility_41; }
	inline float* get_address_of_lifeStealAbility_41() { return &___lifeStealAbility_41; }
	inline void set_lifeStealAbility_41(float value)
	{
		___lifeStealAbility_41 = value;
	}

	inline static int32_t get_offset_of_stunAbility_42() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___stunAbility_42)); }
	inline bool get_stunAbility_42() const { return ___stunAbility_42; }
	inline bool* get_address_of_stunAbility_42() { return &___stunAbility_42; }
	inline void set_stunAbility_42(bool value)
	{
		___stunAbility_42 = value;
	}

	inline static int32_t get_offset_of_globalAttackChance_43() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___globalAttackChance_43)); }
	inline float get_globalAttackChance_43() const { return ___globalAttackChance_43; }
	inline float* get_address_of_globalAttackChance_43() { return &___globalAttackChance_43; }
	inline void set_globalAttackChance_43(float value)
	{
		___globalAttackChance_43 = value;
	}

	inline static int32_t get_offset_of_receivedExpModifier_44() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___receivedExpModifier_44)); }
	inline float get_receivedExpModifier_44() const { return ___receivedExpModifier_44; }
	inline float* get_address_of_receivedExpModifier_44() { return &___receivedExpModifier_44; }
	inline void set_receivedExpModifier_44(float value)
	{
		___receivedExpModifier_44 = value;
	}

	inline static int32_t get_offset_of_receivedCoinModifier_45() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___receivedCoinModifier_45)); }
	inline float get_receivedCoinModifier_45() const { return ___receivedCoinModifier_45; }
	inline float* get_address_of_receivedCoinModifier_45() { return &___receivedCoinModifier_45; }
	inline void set_receivedCoinModifier_45(float value)
	{
		___receivedCoinModifier_45 = value;
	}

	inline static int32_t get_offset_of_speedReductionAttack_46() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___speedReductionAttack_46)); }
	inline float get_speedReductionAttack_46() const { return ___speedReductionAttack_46; }
	inline float* get_address_of_speedReductionAttack_46() { return &___speedReductionAttack_46; }
	inline void set_speedReductionAttack_46(float value)
	{
		___speedReductionAttack_46 = value;
	}

	inline static int32_t get_offset_of_accuracy_47() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___accuracy_47)); }
	inline float get_accuracy_47() const { return ___accuracy_47; }
	inline float* get_address_of_accuracy_47() { return &___accuracy_47; }
	inline void set_accuracy_47(float value)
	{
		___accuracy_47 = value;
	}

	inline static int32_t get_offset_of_evasion_48() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___evasion_48)); }
	inline float get_evasion_48() const { return ___evasion_48; }
	inline float* get_address_of_evasion_48() { return &___evasion_48; }
	inline void set_evasion_48(float value)
	{
		___evasion_48 = value;
	}

	inline static int32_t get_offset_of_shieldNumber_49() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___shieldNumber_49)); }
	inline int32_t get_shieldNumber_49() const { return ___shieldNumber_49; }
	inline int32_t* get_address_of_shieldNumber_49() { return &___shieldNumber_49; }
	inline void set_shieldNumber_49(int32_t value)
	{
		___shieldNumber_49 = value;
	}

	inline static int32_t get_offset_of_mpCostReduction_50() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___mpCostReduction_50)); }
	inline float get_mpCostReduction_50() const { return ___mpCostReduction_50; }
	inline float* get_address_of_mpCostReduction_50() { return &___mpCostReduction_50; }
	inline void set_mpCostReduction_50(float value)
	{
		___mpCostReduction_50 = value;
	}

	inline static int32_t get_offset_of_reviveAnime_51() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___reviveAnime_51)); }
	inline ParticleSystem_t3394631041 * get_reviveAnime_51() const { return ___reviveAnime_51; }
	inline ParticleSystem_t3394631041 ** get_address_of_reviveAnime_51() { return &___reviveAnime_51; }
	inline void set_reviveAnime_51(ParticleSystem_t3394631041 * value)
	{
		___reviveAnime_51 = value;
		Il2CppCodeGenWriteBarrier(&___reviveAnime_51, value);
	}

	inline static int32_t get_offset_of_explosionOnDead_52() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___explosionOnDead_52)); }
	inline ParticleSystem_t3394631041 * get_explosionOnDead_52() const { return ___explosionOnDead_52; }
	inline ParticleSystem_t3394631041 ** get_address_of_explosionOnDead_52() { return &___explosionOnDead_52; }
	inline void set_explosionOnDead_52(ParticleSystem_t3394631041 * value)
	{
		___explosionOnDead_52 = value;
		Il2CppCodeGenWriteBarrier(&___explosionOnDead_52, value);
	}

	inline static int32_t get_offset_of_stunAnime_53() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___stunAnime_53)); }
	inline GameObject_t1756533147 * get_stunAnime_53() const { return ___stunAnime_53; }
	inline GameObject_t1756533147 ** get_address_of_stunAnime_53() { return &___stunAnime_53; }
	inline void set_stunAnime_53(GameObject_t1756533147 * value)
	{
		___stunAnime_53 = value;
		Il2CppCodeGenWriteBarrier(&___stunAnime_53, value);
	}

	inline static int32_t get_offset_of_debug_54() { return static_cast<int32_t>(offsetof(CarStatus_t383877312, ___debug_54)); }
	inline bool get_debug_54() const { return ___debug_54; }
	inline bool* get_address_of_debug_54() { return &___debug_54; }
	inline void set_debug_54(bool value)
	{
		___debug_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
