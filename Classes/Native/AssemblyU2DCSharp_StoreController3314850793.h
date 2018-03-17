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

// StoreController
struct  StoreController_t3314850793  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] StoreController::storeControllers
	GameObjectU5BU5D_t3057952154* ___storeControllers_2;
	// System.Boolean StoreController::insideStoreScene
	bool ___insideStoreScene_3;
	// System.Int32 StoreController::currStoreNum
	int32_t ___currStoreNum_4;

public:
	inline static int32_t get_offset_of_storeControllers_2() { return static_cast<int32_t>(offsetof(StoreController_t3314850793, ___storeControllers_2)); }
	inline GameObjectU5BU5D_t3057952154* get_storeControllers_2() const { return ___storeControllers_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_storeControllers_2() { return &___storeControllers_2; }
	inline void set_storeControllers_2(GameObjectU5BU5D_t3057952154* value)
	{
		___storeControllers_2 = value;
		Il2CppCodeGenWriteBarrier(&___storeControllers_2, value);
	}

	inline static int32_t get_offset_of_insideStoreScene_3() { return static_cast<int32_t>(offsetof(StoreController_t3314850793, ___insideStoreScene_3)); }
	inline bool get_insideStoreScene_3() const { return ___insideStoreScene_3; }
	inline bool* get_address_of_insideStoreScene_3() { return &___insideStoreScene_3; }
	inline void set_insideStoreScene_3(bool value)
	{
		___insideStoreScene_3 = value;
	}

	inline static int32_t get_offset_of_currStoreNum_4() { return static_cast<int32_t>(offsetof(StoreController_t3314850793, ___currStoreNum_4)); }
	inline int32_t get_currStoreNum_4() const { return ___currStoreNum_4; }
	inline int32_t* get_address_of_currStoreNum_4() { return &___currStoreNum_4; }
	inline void set_currStoreNum_4(int32_t value)
	{
		___currStoreNum_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
