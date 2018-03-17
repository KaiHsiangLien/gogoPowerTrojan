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

// ObstaclesPoint
struct  ObstaclesPoint_t1254168648  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] ObstaclesPoint::obstacles
	GameObjectU5BU5D_t3057952154* ___obstacles_2;
	// System.Single ObstaclesPoint::horizontalMargin
	float ___horizontalMargin_3;
	// System.Single ObstaclesPoint::verticalMargin
	float ___verticalMargin_4;
	// System.Single ObstaclesPoint::initProb
	float ___initProb_5;

public:
	inline static int32_t get_offset_of_obstacles_2() { return static_cast<int32_t>(offsetof(ObstaclesPoint_t1254168648, ___obstacles_2)); }
	inline GameObjectU5BU5D_t3057952154* get_obstacles_2() const { return ___obstacles_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_obstacles_2() { return &___obstacles_2; }
	inline void set_obstacles_2(GameObjectU5BU5D_t3057952154* value)
	{
		___obstacles_2 = value;
		Il2CppCodeGenWriteBarrier(&___obstacles_2, value);
	}

	inline static int32_t get_offset_of_horizontalMargin_3() { return static_cast<int32_t>(offsetof(ObstaclesPoint_t1254168648, ___horizontalMargin_3)); }
	inline float get_horizontalMargin_3() const { return ___horizontalMargin_3; }
	inline float* get_address_of_horizontalMargin_3() { return &___horizontalMargin_3; }
	inline void set_horizontalMargin_3(float value)
	{
		___horizontalMargin_3 = value;
	}

	inline static int32_t get_offset_of_verticalMargin_4() { return static_cast<int32_t>(offsetof(ObstaclesPoint_t1254168648, ___verticalMargin_4)); }
	inline float get_verticalMargin_4() const { return ___verticalMargin_4; }
	inline float* get_address_of_verticalMargin_4() { return &___verticalMargin_4; }
	inline void set_verticalMargin_4(float value)
	{
		___verticalMargin_4 = value;
	}

	inline static int32_t get_offset_of_initProb_5() { return static_cast<int32_t>(offsetof(ObstaclesPoint_t1254168648, ___initProb_5)); }
	inline float get_initProb_5() const { return ___initProb_5; }
	inline float* get_address_of_initProb_5() { return &___initProb_5; }
	inline void set_initProb_5(float value)
	{
		___initProb_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
