#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// MovingObject
struct MovingObject_t4252805171;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingObject/<SmoothMovement>c__Iterator0
struct  U3CSmoothMovementU3Ec__Iterator0_t3387582786  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 MovingObject/<SmoothMovement>c__Iterator0::end
	Vector3_t2243707580  ___end_0;
	// System.Single MovingObject/<SmoothMovement>c__Iterator0::<sqrRemainingDistance>__0
	float ___U3CsqrRemainingDistanceU3E__0_1;
	// UnityEngine.Vector3 MovingObject/<SmoothMovement>c__Iterator0::<newPosition>__1
	Vector3_t2243707580  ___U3CnewPositionU3E__1_2;
	// MovingObject MovingObject/<SmoothMovement>c__Iterator0::$this
	MovingObject_t4252805171 * ___U24this_3;
	// System.Object MovingObject/<SmoothMovement>c__Iterator0::$current
	Il2CppObject * ___U24current_4;
	// System.Boolean MovingObject/<SmoothMovement>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 MovingObject/<SmoothMovement>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_end_0() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t3387582786, ___end_0)); }
	inline Vector3_t2243707580  get_end_0() const { return ___end_0; }
	inline Vector3_t2243707580 * get_address_of_end_0() { return &___end_0; }
	inline void set_end_0(Vector3_t2243707580  value)
	{
		___end_0 = value;
	}

	inline static int32_t get_offset_of_U3CsqrRemainingDistanceU3E__0_1() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t3387582786, ___U3CsqrRemainingDistanceU3E__0_1)); }
	inline float get_U3CsqrRemainingDistanceU3E__0_1() const { return ___U3CsqrRemainingDistanceU3E__0_1; }
	inline float* get_address_of_U3CsqrRemainingDistanceU3E__0_1() { return &___U3CsqrRemainingDistanceU3E__0_1; }
	inline void set_U3CsqrRemainingDistanceU3E__0_1(float value)
	{
		___U3CsqrRemainingDistanceU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CnewPositionU3E__1_2() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t3387582786, ___U3CnewPositionU3E__1_2)); }
	inline Vector3_t2243707580  get_U3CnewPositionU3E__1_2() const { return ___U3CnewPositionU3E__1_2; }
	inline Vector3_t2243707580 * get_address_of_U3CnewPositionU3E__1_2() { return &___U3CnewPositionU3E__1_2; }
	inline void set_U3CnewPositionU3E__1_2(Vector3_t2243707580  value)
	{
		___U3CnewPositionU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t3387582786, ___U24this_3)); }
	inline MovingObject_t4252805171 * get_U24this_3() const { return ___U24this_3; }
	inline MovingObject_t4252805171 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(MovingObject_t4252805171 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t3387582786, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t3387582786, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t3387582786, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
