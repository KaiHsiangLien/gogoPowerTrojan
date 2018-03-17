#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PathManager
struct PathManager_t2373741454;
// StartPointManager
struct StartPointManager_t1606019317;
// GoalManager
struct GoalManager_t1283300174;
// RankingSystem
struct RankingSystem_t855688853;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CourseManager
struct  CourseManager_t1315701656  : public MonoBehaviour_t1158329972
{
public:
	// PathManager CourseManager::path
	PathManager_t2373741454 * ___path_2;
	// StartPointManager CourseManager::startPoint
	StartPointManager_t1606019317 * ___startPoint_3;
	// GoalManager CourseManager::goalPoint
	GoalManager_t1283300174 * ___goalPoint_4;
	// RankingSystem CourseManager::ranking
	RankingSystem_t855688853 * ___ranking_5;
	// UnityEngine.GameObject CourseManager::myRoad
	GameObject_t1756533147 * ___myRoad_6;
	// System.Single CourseManager::coinProb
	float ___coinProb_7;
	// System.Single CourseManager::itemProb
	float ___itemProb_8;
	// System.Single CourseManager::obsProb
	float ___obsProb_9;
	// System.Single CourseManager::coinMargin
	float ___coinMargin_10;
	// System.Single CourseManager::itemMargin
	float ___itemMargin_11;
	// UnityEngine.GameObject CourseManager::checkPointPrefab
	GameObject_t1756533147 * ___checkPointPrefab_12;
	// UnityEngine.GameObject CourseManager::obstaclePrefab
	GameObject_t1756533147 * ___obstaclePrefab_13;
	// UnityEngine.GameObject CourseManager::coinPrefab
	GameObject_t1756533147 * ___coinPrefab_14;
	// UnityEngine.GameObject CourseManager::lightPrefab
	GameObject_t1756533147 * ___lightPrefab_15;
	// UnityEngine.GameObject CourseManager::itemPrefab
	GameObject_t1756533147 * ___itemPrefab_16;
	// UnityEngine.GameObject CourseManager::potionPrefab
	GameObject_t1756533147 * ___potionPrefab_17;
	// UnityEngine.Transform CourseManager::coinParent
	Transform_t3275118058 * ___coinParent_18;
	// UnityEngine.Transform CourseManager::itemParent
	Transform_t3275118058 * ___itemParent_19;
	// UnityEngine.Transform[] CourseManager::checkPointTrans
	TransformU5BU5D_t3764228911* ___checkPointTrans_20;

public:
	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___path_2)); }
	inline PathManager_t2373741454 * get_path_2() const { return ___path_2; }
	inline PathManager_t2373741454 ** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(PathManager_t2373741454 * value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier(&___path_2, value);
	}

	inline static int32_t get_offset_of_startPoint_3() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___startPoint_3)); }
	inline StartPointManager_t1606019317 * get_startPoint_3() const { return ___startPoint_3; }
	inline StartPointManager_t1606019317 ** get_address_of_startPoint_3() { return &___startPoint_3; }
	inline void set_startPoint_3(StartPointManager_t1606019317 * value)
	{
		___startPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___startPoint_3, value);
	}

	inline static int32_t get_offset_of_goalPoint_4() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___goalPoint_4)); }
	inline GoalManager_t1283300174 * get_goalPoint_4() const { return ___goalPoint_4; }
	inline GoalManager_t1283300174 ** get_address_of_goalPoint_4() { return &___goalPoint_4; }
	inline void set_goalPoint_4(GoalManager_t1283300174 * value)
	{
		___goalPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___goalPoint_4, value);
	}

	inline static int32_t get_offset_of_ranking_5() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___ranking_5)); }
	inline RankingSystem_t855688853 * get_ranking_5() const { return ___ranking_5; }
	inline RankingSystem_t855688853 ** get_address_of_ranking_5() { return &___ranking_5; }
	inline void set_ranking_5(RankingSystem_t855688853 * value)
	{
		___ranking_5 = value;
		Il2CppCodeGenWriteBarrier(&___ranking_5, value);
	}

	inline static int32_t get_offset_of_myRoad_6() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___myRoad_6)); }
	inline GameObject_t1756533147 * get_myRoad_6() const { return ___myRoad_6; }
	inline GameObject_t1756533147 ** get_address_of_myRoad_6() { return &___myRoad_6; }
	inline void set_myRoad_6(GameObject_t1756533147 * value)
	{
		___myRoad_6 = value;
		Il2CppCodeGenWriteBarrier(&___myRoad_6, value);
	}

	inline static int32_t get_offset_of_coinProb_7() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___coinProb_7)); }
	inline float get_coinProb_7() const { return ___coinProb_7; }
	inline float* get_address_of_coinProb_7() { return &___coinProb_7; }
	inline void set_coinProb_7(float value)
	{
		___coinProb_7 = value;
	}

	inline static int32_t get_offset_of_itemProb_8() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___itemProb_8)); }
	inline float get_itemProb_8() const { return ___itemProb_8; }
	inline float* get_address_of_itemProb_8() { return &___itemProb_8; }
	inline void set_itemProb_8(float value)
	{
		___itemProb_8 = value;
	}

	inline static int32_t get_offset_of_obsProb_9() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___obsProb_9)); }
	inline float get_obsProb_9() const { return ___obsProb_9; }
	inline float* get_address_of_obsProb_9() { return &___obsProb_9; }
	inline void set_obsProb_9(float value)
	{
		___obsProb_9 = value;
	}

	inline static int32_t get_offset_of_coinMargin_10() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___coinMargin_10)); }
	inline float get_coinMargin_10() const { return ___coinMargin_10; }
	inline float* get_address_of_coinMargin_10() { return &___coinMargin_10; }
	inline void set_coinMargin_10(float value)
	{
		___coinMargin_10 = value;
	}

	inline static int32_t get_offset_of_itemMargin_11() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___itemMargin_11)); }
	inline float get_itemMargin_11() const { return ___itemMargin_11; }
	inline float* get_address_of_itemMargin_11() { return &___itemMargin_11; }
	inline void set_itemMargin_11(float value)
	{
		___itemMargin_11 = value;
	}

	inline static int32_t get_offset_of_checkPointPrefab_12() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___checkPointPrefab_12)); }
	inline GameObject_t1756533147 * get_checkPointPrefab_12() const { return ___checkPointPrefab_12; }
	inline GameObject_t1756533147 ** get_address_of_checkPointPrefab_12() { return &___checkPointPrefab_12; }
	inline void set_checkPointPrefab_12(GameObject_t1756533147 * value)
	{
		___checkPointPrefab_12 = value;
		Il2CppCodeGenWriteBarrier(&___checkPointPrefab_12, value);
	}

	inline static int32_t get_offset_of_obstaclePrefab_13() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___obstaclePrefab_13)); }
	inline GameObject_t1756533147 * get_obstaclePrefab_13() const { return ___obstaclePrefab_13; }
	inline GameObject_t1756533147 ** get_address_of_obstaclePrefab_13() { return &___obstaclePrefab_13; }
	inline void set_obstaclePrefab_13(GameObject_t1756533147 * value)
	{
		___obstaclePrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___obstaclePrefab_13, value);
	}

	inline static int32_t get_offset_of_coinPrefab_14() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___coinPrefab_14)); }
	inline GameObject_t1756533147 * get_coinPrefab_14() const { return ___coinPrefab_14; }
	inline GameObject_t1756533147 ** get_address_of_coinPrefab_14() { return &___coinPrefab_14; }
	inline void set_coinPrefab_14(GameObject_t1756533147 * value)
	{
		___coinPrefab_14 = value;
		Il2CppCodeGenWriteBarrier(&___coinPrefab_14, value);
	}

	inline static int32_t get_offset_of_lightPrefab_15() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___lightPrefab_15)); }
	inline GameObject_t1756533147 * get_lightPrefab_15() const { return ___lightPrefab_15; }
	inline GameObject_t1756533147 ** get_address_of_lightPrefab_15() { return &___lightPrefab_15; }
	inline void set_lightPrefab_15(GameObject_t1756533147 * value)
	{
		___lightPrefab_15 = value;
		Il2CppCodeGenWriteBarrier(&___lightPrefab_15, value);
	}

	inline static int32_t get_offset_of_itemPrefab_16() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___itemPrefab_16)); }
	inline GameObject_t1756533147 * get_itemPrefab_16() const { return ___itemPrefab_16; }
	inline GameObject_t1756533147 ** get_address_of_itemPrefab_16() { return &___itemPrefab_16; }
	inline void set_itemPrefab_16(GameObject_t1756533147 * value)
	{
		___itemPrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&___itemPrefab_16, value);
	}

	inline static int32_t get_offset_of_potionPrefab_17() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___potionPrefab_17)); }
	inline GameObject_t1756533147 * get_potionPrefab_17() const { return ___potionPrefab_17; }
	inline GameObject_t1756533147 ** get_address_of_potionPrefab_17() { return &___potionPrefab_17; }
	inline void set_potionPrefab_17(GameObject_t1756533147 * value)
	{
		___potionPrefab_17 = value;
		Il2CppCodeGenWriteBarrier(&___potionPrefab_17, value);
	}

	inline static int32_t get_offset_of_coinParent_18() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___coinParent_18)); }
	inline Transform_t3275118058 * get_coinParent_18() const { return ___coinParent_18; }
	inline Transform_t3275118058 ** get_address_of_coinParent_18() { return &___coinParent_18; }
	inline void set_coinParent_18(Transform_t3275118058 * value)
	{
		___coinParent_18 = value;
		Il2CppCodeGenWriteBarrier(&___coinParent_18, value);
	}

	inline static int32_t get_offset_of_itemParent_19() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___itemParent_19)); }
	inline Transform_t3275118058 * get_itemParent_19() const { return ___itemParent_19; }
	inline Transform_t3275118058 ** get_address_of_itemParent_19() { return &___itemParent_19; }
	inline void set_itemParent_19(Transform_t3275118058 * value)
	{
		___itemParent_19 = value;
		Il2CppCodeGenWriteBarrier(&___itemParent_19, value);
	}

	inline static int32_t get_offset_of_checkPointTrans_20() { return static_cast<int32_t>(offsetof(CourseManager_t1315701656, ___checkPointTrans_20)); }
	inline TransformU5BU5D_t3764228911* get_checkPointTrans_20() const { return ___checkPointTrans_20; }
	inline TransformU5BU5D_t3764228911** get_address_of_checkPointTrans_20() { return &___checkPointTrans_20; }
	inline void set_checkPointTrans_20(TransformU5BU5D_t3764228911* value)
	{
		___checkPointTrans_20 = value;
		Il2CppCodeGenWriteBarrier(&___checkPointTrans_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
