#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingObject
struct  MovingObject_t4252805171  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MovingObject::moveTime
	float ___moveTime_2;
	// UnityEngine.LayerMask MovingObject::blockingLayer
	LayerMask_t3188175821  ___blockingLayer_3;
	// UnityEngine.BoxCollider2D MovingObject::boxColider
	BoxCollider2D_t948534547 * ___boxColider_4;
	// UnityEngine.Rigidbody2D MovingObject::rb2D
	Rigidbody2D_t502193897 * ___rb2D_5;
	// System.Single MovingObject::inverseMoveTime
	float ___inverseMoveTime_6;

public:
	inline static int32_t get_offset_of_moveTime_2() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___moveTime_2)); }
	inline float get_moveTime_2() const { return ___moveTime_2; }
	inline float* get_address_of_moveTime_2() { return &___moveTime_2; }
	inline void set_moveTime_2(float value)
	{
		___moveTime_2 = value;
	}

	inline static int32_t get_offset_of_blockingLayer_3() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___blockingLayer_3)); }
	inline LayerMask_t3188175821  get_blockingLayer_3() const { return ___blockingLayer_3; }
	inline LayerMask_t3188175821 * get_address_of_blockingLayer_3() { return &___blockingLayer_3; }
	inline void set_blockingLayer_3(LayerMask_t3188175821  value)
	{
		___blockingLayer_3 = value;
	}

	inline static int32_t get_offset_of_boxColider_4() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___boxColider_4)); }
	inline BoxCollider2D_t948534547 * get_boxColider_4() const { return ___boxColider_4; }
	inline BoxCollider2D_t948534547 ** get_address_of_boxColider_4() { return &___boxColider_4; }
	inline void set_boxColider_4(BoxCollider2D_t948534547 * value)
	{
		___boxColider_4 = value;
		Il2CppCodeGenWriteBarrier(&___boxColider_4, value);
	}

	inline static int32_t get_offset_of_rb2D_5() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___rb2D_5)); }
	inline Rigidbody2D_t502193897 * get_rb2D_5() const { return ___rb2D_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2D_5() { return &___rb2D_5; }
	inline void set_rb2D_5(Rigidbody2D_t502193897 * value)
	{
		___rb2D_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb2D_5, value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_6() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___inverseMoveTime_6)); }
	inline float get_inverseMoveTime_6() const { return ___inverseMoveTime_6; }
	inline float* get_address_of_inverseMoveTime_6() { return &___inverseMoveTime_6; }
	inline void set_inverseMoveTime_6(float value)
	{
		___inverseMoveTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
