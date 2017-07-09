#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioListener
struct AudioListener_t1996719162;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialInfo
struct  TutorialInfo_t1898032234  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TutorialInfo::showAtStart
	bool ___showAtStart_2;
	// System.String TutorialInfo::url
	String_t* ___url_3;
	// UnityEngine.GameObject TutorialInfo::overlay
	GameObject_t1756533147 * ___overlay_4;
	// UnityEngine.AudioListener TutorialInfo::mainListener
	AudioListener_t1996719162 * ___mainListener_5;
	// UnityEngine.UI.Toggle TutorialInfo::showAtStartToggle
	Toggle_t3976754468 * ___showAtStartToggle_6;

public:
	inline static int32_t get_offset_of_showAtStart_2() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___showAtStart_2)); }
	inline bool get_showAtStart_2() const { return ___showAtStart_2; }
	inline bool* get_address_of_showAtStart_2() { return &___showAtStart_2; }
	inline void set_showAtStart_2(bool value)
	{
		___showAtStart_2 = value;
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier(&___url_3, value);
	}

	inline static int32_t get_offset_of_overlay_4() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___overlay_4)); }
	inline GameObject_t1756533147 * get_overlay_4() const { return ___overlay_4; }
	inline GameObject_t1756533147 ** get_address_of_overlay_4() { return &___overlay_4; }
	inline void set_overlay_4(GameObject_t1756533147 * value)
	{
		___overlay_4 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_4, value);
	}

	inline static int32_t get_offset_of_mainListener_5() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___mainListener_5)); }
	inline AudioListener_t1996719162 * get_mainListener_5() const { return ___mainListener_5; }
	inline AudioListener_t1996719162 ** get_address_of_mainListener_5() { return &___mainListener_5; }
	inline void set_mainListener_5(AudioListener_t1996719162 * value)
	{
		___mainListener_5 = value;
		Il2CppCodeGenWriteBarrier(&___mainListener_5, value);
	}

	inline static int32_t get_offset_of_showAtStartToggle_6() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___showAtStartToggle_6)); }
	inline Toggle_t3976754468 * get_showAtStartToggle_6() const { return ___showAtStartToggle_6; }
	inline Toggle_t3976754468 ** get_address_of_showAtStartToggle_6() { return &___showAtStartToggle_6; }
	inline void set_showAtStartToggle_6(Toggle_t3976754468 * value)
	{
		___showAtStartToggle_6 = value;
		Il2CppCodeGenWriteBarrier(&___showAtStartToggle_6, value);
	}
};

struct TutorialInfo_t1898032234_StaticFields
{
public:
	// System.String TutorialInfo::showAtStartPrefsKey
	String_t* ___showAtStartPrefsKey_7;
	// System.Boolean TutorialInfo::alreadyShownThisSession
	bool ___alreadyShownThisSession_8;

public:
	inline static int32_t get_offset_of_showAtStartPrefsKey_7() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234_StaticFields, ___showAtStartPrefsKey_7)); }
	inline String_t* get_showAtStartPrefsKey_7() const { return ___showAtStartPrefsKey_7; }
	inline String_t** get_address_of_showAtStartPrefsKey_7() { return &___showAtStartPrefsKey_7; }
	inline void set_showAtStartPrefsKey_7(String_t* value)
	{
		___showAtStartPrefsKey_7 = value;
		Il2CppCodeGenWriteBarrier(&___showAtStartPrefsKey_7, value);
	}

	inline static int32_t get_offset_of_alreadyShownThisSession_8() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234_StaticFields, ___alreadyShownThisSession_8)); }
	inline bool get_alreadyShownThisSession_8() const { return ___alreadyShownThisSession_8; }
	inline bool* get_address_of_alreadyShownThisSession_8() { return &___alreadyShownThisSession_8; }
	inline void set_alreadyShownThisSession_8(bool value)
	{
		___alreadyShownThisSession_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
