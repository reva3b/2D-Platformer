﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopMsgUP
struct  PopMsgUP_t1508724349  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image PopMsgUP::Msg
	Image_t2042527209 * ___Msg_2;
	// UnityEngine.UI.Text PopMsgUP::Text
	Text_t356221433 * ___Text_3;
	// System.Boolean PopMsgUP::enMsg
	bool ___enMsg_4;

public:
	inline static int32_t get_offset_of_Msg_2() { return static_cast<int32_t>(offsetof(PopMsgUP_t1508724349, ___Msg_2)); }
	inline Image_t2042527209 * get_Msg_2() const { return ___Msg_2; }
	inline Image_t2042527209 ** get_address_of_Msg_2() { return &___Msg_2; }
	inline void set_Msg_2(Image_t2042527209 * value)
	{
		___Msg_2 = value;
		Il2CppCodeGenWriteBarrier(&___Msg_2, value);
	}

	inline static int32_t get_offset_of_Text_3() { return static_cast<int32_t>(offsetof(PopMsgUP_t1508724349, ___Text_3)); }
	inline Text_t356221433 * get_Text_3() const { return ___Text_3; }
	inline Text_t356221433 ** get_address_of_Text_3() { return &___Text_3; }
	inline void set_Text_3(Text_t356221433 * value)
	{
		___Text_3 = value;
		Il2CppCodeGenWriteBarrier(&___Text_3, value);
	}

	inline static int32_t get_offset_of_enMsg_4() { return static_cast<int32_t>(offsetof(PopMsgUP_t1508724349, ___enMsg_4)); }
	inline bool get_enMsg_4() const { return ___enMsg_4; }
	inline bool* get_address_of_enMsg_4() { return &___enMsg_4; }
	inline void set_enMsg_4(bool value)
	{
		___enMsg_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
