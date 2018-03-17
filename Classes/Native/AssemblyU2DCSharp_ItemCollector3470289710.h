#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemCollector
struct  ItemCollector_t3470289710  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ItemCollector::itemIdx
	int32_t ___itemIdx_3;
	// System.Single ItemCollector::itemPutOffset
	float ___itemPutOffset_4;
	// UnityEngine.GameObject[] ItemCollector::itemLists
	GameObjectU5BU5D_t3057952154* ___itemLists_5;
	// System.Int32 ItemCollector::coinCount
	int32_t ___coinCount_6;
	// System.Single ItemCollector::lightningDamage
	float ___lightningDamage_7;

public:
	inline static int32_t get_offset_of_itemIdx_3() { return static_cast<int32_t>(offsetof(ItemCollector_t3470289710, ___itemIdx_3)); }
	inline int32_t get_itemIdx_3() const { return ___itemIdx_3; }
	inline int32_t* get_address_of_itemIdx_3() { return &___itemIdx_3; }
	inline void set_itemIdx_3(int32_t value)
	{
		___itemIdx_3 = value;
	}

	inline static int32_t get_offset_of_itemPutOffset_4() { return static_cast<int32_t>(offsetof(ItemCollector_t3470289710, ___itemPutOffset_4)); }
	inline float get_itemPutOffset_4() const { return ___itemPutOffset_4; }
	inline float* get_address_of_itemPutOffset_4() { return &___itemPutOffset_4; }
	inline void set_itemPutOffset_4(float value)
	{
		___itemPutOffset_4 = value;
	}

	inline static int32_t get_offset_of_itemLists_5() { return static_cast<int32_t>(offsetof(ItemCollector_t3470289710, ___itemLists_5)); }
	inline GameObjectU5BU5D_t3057952154* get_itemLists_5() const { return ___itemLists_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_itemLists_5() { return &___itemLists_5; }
	inline void set_itemLists_5(GameObjectU5BU5D_t3057952154* value)
	{
		___itemLists_5 = value;
		Il2CppCodeGenWriteBarrier(&___itemLists_5, value);
	}

	inline static int32_t get_offset_of_coinCount_6() { return static_cast<int32_t>(offsetof(ItemCollector_t3470289710, ___coinCount_6)); }
	inline int32_t get_coinCount_6() const { return ___coinCount_6; }
	inline int32_t* get_address_of_coinCount_6() { return &___coinCount_6; }
	inline void set_coinCount_6(int32_t value)
	{
		___coinCount_6 = value;
	}

	inline static int32_t get_offset_of_lightningDamage_7() { return static_cast<int32_t>(offsetof(ItemCollector_t3470289710, ___lightningDamage_7)); }
	inline float get_lightningDamage_7() const { return ___lightningDamage_7; }
	inline float* get_address_of_lightningDamage_7() { return &___lightningDamage_7; }
	inline void set_lightningDamage_7(float value)
	{
		___lightningDamage_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
