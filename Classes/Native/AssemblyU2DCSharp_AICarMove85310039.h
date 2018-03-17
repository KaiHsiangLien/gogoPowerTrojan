#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AICarMove
struct  AICarMove_t85310039  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AICarMove::targetAICar
	GameObject_t1756533147 * ___targetAICar_2;
	// UnityEngine.GameObject[] AICarMove::targetNavMeshObjects
	GameObjectU5BU5D_t3057952154* ___targetNavMeshObjects_3;
	// System.Int32 AICarMove::targetNavMeshObjectCounts
	int32_t ___targetNavMeshObjectCounts_4;
	// System.Int32 AICarMove::targetNavMeshObjectNow
	int32_t ___targetNavMeshObjectNow_5;
	// UnityEngine.Vector3 AICarMove::startPos
	Vector3_t2243707580  ___startPos_6;
	// UnityEngine.Vector3 AICarMove::startRot
	Vector3_t2243707580  ___startRot_7;
	// UnityEngine.AI.NavMeshAgent AICarMove::navMeshAgentCompornent
	NavMeshAgent_t2761625415 * ___navMeshAgentCompornent_8;

public:
	inline static int32_t get_offset_of_targetAICar_2() { return static_cast<int32_t>(offsetof(AICarMove_t85310039, ___targetAICar_2)); }
	inline GameObject_t1756533147 * get_targetAICar_2() const { return ___targetAICar_2; }
	inline GameObject_t1756533147 ** get_address_of_targetAICar_2() { return &___targetAICar_2; }
	inline void set_targetAICar_2(GameObject_t1756533147 * value)
	{
		___targetAICar_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetAICar_2, value);
	}

	inline static int32_t get_offset_of_targetNavMeshObjects_3() { return static_cast<int32_t>(offsetof(AICarMove_t85310039, ___targetNavMeshObjects_3)); }
	inline GameObjectU5BU5D_t3057952154* get_targetNavMeshObjects_3() const { return ___targetNavMeshObjects_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_targetNavMeshObjects_3() { return &___targetNavMeshObjects_3; }
	inline void set_targetNavMeshObjects_3(GameObjectU5BU5D_t3057952154* value)
	{
		___targetNavMeshObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetNavMeshObjects_3, value);
	}

	inline static int32_t get_offset_of_targetNavMeshObjectCounts_4() { return static_cast<int32_t>(offsetof(AICarMove_t85310039, ___targetNavMeshObjectCounts_4)); }
	inline int32_t get_targetNavMeshObjectCounts_4() const { return ___targetNavMeshObjectCounts_4; }
	inline int32_t* get_address_of_targetNavMeshObjectCounts_4() { return &___targetNavMeshObjectCounts_4; }
	inline void set_targetNavMeshObjectCounts_4(int32_t value)
	{
		___targetNavMeshObjectCounts_4 = value;
	}

	inline static int32_t get_offset_of_targetNavMeshObjectNow_5() { return static_cast<int32_t>(offsetof(AICarMove_t85310039, ___targetNavMeshObjectNow_5)); }
	inline int32_t get_targetNavMeshObjectNow_5() const { return ___targetNavMeshObjectNow_5; }
	inline int32_t* get_address_of_targetNavMeshObjectNow_5() { return &___targetNavMeshObjectNow_5; }
	inline void set_targetNavMeshObjectNow_5(int32_t value)
	{
		___targetNavMeshObjectNow_5 = value;
	}

	inline static int32_t get_offset_of_startPos_6() { return static_cast<int32_t>(offsetof(AICarMove_t85310039, ___startPos_6)); }
	inline Vector3_t2243707580  get_startPos_6() const { return ___startPos_6; }
	inline Vector3_t2243707580 * get_address_of_startPos_6() { return &___startPos_6; }
	inline void set_startPos_6(Vector3_t2243707580  value)
	{
		___startPos_6 = value;
	}

	inline static int32_t get_offset_of_startRot_7() { return static_cast<int32_t>(offsetof(AICarMove_t85310039, ___startRot_7)); }
	inline Vector3_t2243707580  get_startRot_7() const { return ___startRot_7; }
	inline Vector3_t2243707580 * get_address_of_startRot_7() { return &___startRot_7; }
	inline void set_startRot_7(Vector3_t2243707580  value)
	{
		___startRot_7 = value;
	}

	inline static int32_t get_offset_of_navMeshAgentCompornent_8() { return static_cast<int32_t>(offsetof(AICarMove_t85310039, ___navMeshAgentCompornent_8)); }
	inline NavMeshAgent_t2761625415 * get_navMeshAgentCompornent_8() const { return ___navMeshAgentCompornent_8; }
	inline NavMeshAgent_t2761625415 ** get_address_of_navMeshAgentCompornent_8() { return &___navMeshAgentCompornent_8; }
	inline void set_navMeshAgentCompornent_8(NavMeshAgent_t2761625415 * value)
	{
		___navMeshAgentCompornent_8 = value;
		Il2CppCodeGenWriteBarrier(&___navMeshAgentCompornent_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
