#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t53D39D9E218198F2F824B2D998BBE401596AA8FD 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Decimal
struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CplatformSpecificIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CplatformSpecificIDU3Ek__BackingField_0() const { return ___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return &___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline void set_U3CplatformSpecificIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CplatformSpecificIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CpriceU3Ek__BackingField_1)); }
	inline String_t* get_U3CpriceU3Ek__BackingField_1() const { return ___U3CpriceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpriceU3Ek__BackingField_1() { return &___U3CpriceU3Ek__BackingField_1; }
	inline void set_U3CpriceU3Ek__BackingField_1(String_t* value)
	{
		___U3CpriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpriceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CtitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CtitleU3Ek__BackingField_2() const { return ___U3CtitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtitleU3Ek__BackingField_2() { return &___U3CtitleU3Ek__BackingField_2; }
	inline void set_U3CtitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CtitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtitleU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CdescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_3() const { return ___U3CdescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_3() { return &___U3CdescriptionU3Ek__BackingField_3; }
	inline void set_U3CdescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdescriptionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CISOCurrencyCodeU3Ek__BackingField_4)); }
	inline String_t* get_U3CISOCurrencyCodeU3Ek__BackingField_4() const { return ___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return &___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline void set_U3CISOCurrencyCodeU3Ek__BackingField_4(String_t* value)
	{
		___U3CISOCurrencyCodeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceDecimalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CpriceDecimalU3Ek__BackingField_5)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_U3CpriceDecimalU3Ek__BackingField_5() const { return ___U3CpriceDecimalU3Ek__BackingField_5; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_U3CpriceDecimalU3Ek__BackingField_5() { return &___U3CpriceDecimalU3Ek__BackingField_5; }
	inline void set_U3CpriceDecimalU3Ek__BackingField_5(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___U3CpriceDecimalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CreceiptU3Ek__BackingField_6)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_6() const { return ___U3CreceiptU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_6() { return &___U3CreceiptU3Ek__BackingField_6; }
	inline void set_U3CreceiptU3Ek__BackingField_6(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CtransactionIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_7() const { return ___U3CtransactionIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_7() { return &___U3CtransactionIDU3Ek__BackingField_7; }
	inline void set_U3CtransactionIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconsumableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1, ___U3CconsumableU3Ek__BackingField_8)); }
	inline bool get_U3CconsumableU3Ek__BackingField_8() const { return ___U3CconsumableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CconsumableU3Ek__BackingField_8() { return &___U3CconsumableU3Ek__BackingField_8; }
	inline void set_U3CconsumableU3Ek__BackingField_8(bool value)
	{
		___U3CconsumableU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_mD4701C4E28051F847C02EC3C1CE4D1DD0C3769B4_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m623FAE1D0091A7D0B113BEF5347FB92E9BA54724_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_title_mCE36BB2FF4659A6A846FA0C45994F62D5FD637B2_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_description_mD2965A1AC36B44059041A34CE56BF2B499ECEB54_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m91B04D46899B5379062B2A937144370F8DACAFC8_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_m0B6EAEBC442DC5177D43FC2A3342CED18CEBA032_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m7E9151054E3326B57EA2422A9A841800F3C3C64C_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_m6004C6C1FA49533DE3250FBB32115BD5E7402EE1_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m5CDA6B314C648E02F1E2CEB75BE6D5146AEB9C00_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, bool ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_mD4701C4E28051F847C02EC3C1CE4D1DD0C3769B4 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string platformSpecificID { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CplatformSpecificIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m623FAE1D0091A7D0B113BEF5347FB92E9BA54724 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string price { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CpriceU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_title_mCE36BB2FF4659A6A846FA0C45994F62D5FD637B2 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string title { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CtitleU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_description_mD2965A1AC36B44059041A34CE56BF2B499ECEB54 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string description { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CdescriptionU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m91B04D46899B5379062B2A937144370F8DACAFC8 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ISOCurrencyCode { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CISOCurrencyCodeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_m0B6EAEBC442DC5177D43FC2A3342CED18CEBA032 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		// public decimal priceDecimal { get; private set; }
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_0 = ___value0;
		__this->set_U3CpriceDecimalU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m7E9151054E3326B57EA2422A9A841800F3C3C64C (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string receipt { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CreceiptU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_m6004C6C1FA49533DE3250FBB32115BD5E7402EE1 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string transactionID { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m5CDA6B314C648E02F1E2CEB75BE6D5146AEB9C00 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool consumable { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CconsumableU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_m4F63EF3D6687F8B1B81F586EE8D56C581CE6CC26 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method)
{
	{
		// public WinProductDescription (string id, string price, string title, string description,
		//                            string isoCode, decimal priceD, string receipt = null, string transactionId = null, bool consumable = false) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// platformSpecificID = id;
		String_t* L_0 = ___id0;
		WinProductDescription_set_platformSpecificID_mD4701C4E28051F847C02EC3C1CE4D1DD0C3769B4_inline(__this, L_0, /*hidden argument*/NULL);
		// this.price = price;
		String_t* L_1 = ___price1;
		WinProductDescription_set_price_m623FAE1D0091A7D0B113BEF5347FB92E9BA54724_inline(__this, L_1, /*hidden argument*/NULL);
		// this.title = title;
		String_t* L_2 = ___title2;
		WinProductDescription_set_title_mCE36BB2FF4659A6A846FA0C45994F62D5FD637B2_inline(__this, L_2, /*hidden argument*/NULL);
		// this.description = description;
		String_t* L_3 = ___description3;
		WinProductDescription_set_description_mD2965A1AC36B44059041A34CE56BF2B499ECEB54_inline(__this, L_3, /*hidden argument*/NULL);
		// this.ISOCurrencyCode = isoCode;
		String_t* L_4 = ___isoCode4;
		WinProductDescription_set_ISOCurrencyCode_m91B04D46899B5379062B2A937144370F8DACAFC8_inline(__this, L_4, /*hidden argument*/NULL);
		// this.priceDecimal = priceD;
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_5 = ___priceD5;
		WinProductDescription_set_priceDecimal_m0B6EAEBC442DC5177D43FC2A3342CED18CEBA032_inline(__this, L_5, /*hidden argument*/NULL);
		// this.receipt = receipt;
		String_t* L_6 = ___receipt6;
		WinProductDescription_set_receipt_m7E9151054E3326B57EA2422A9A841800F3C3C64C_inline(__this, L_6, /*hidden argument*/NULL);
		// this.transactionID = transactionId;
		String_t* L_7 = ___transactionId7;
		WinProductDescription_set_transactionID_m6004C6C1FA49533DE3250FBB32115BD5E7402EE1_inline(__this, L_7, /*hidden argument*/NULL);
		// this.consumable = consumable;
		bool L_8 = ___consumable8;
		WinProductDescription_set_consumable_m5CDA6B314C648E02F1E2CEB75BE6D5146AEB9C00_inline(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_mD4701C4E28051F847C02EC3C1CE4D1DD0C3769B4_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string platformSpecificID { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CplatformSpecificIDU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m623FAE1D0091A7D0B113BEF5347FB92E9BA54724_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string price { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CpriceU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_title_mCE36BB2FF4659A6A846FA0C45994F62D5FD637B2_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string title { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CtitleU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_description_mD2965A1AC36B44059041A34CE56BF2B499ECEB54_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string description { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CdescriptionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m91B04D46899B5379062B2A937144370F8DACAFC8_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ISOCurrencyCode { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CISOCurrencyCodeU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_m0B6EAEBC442DC5177D43FC2A3342CED18CEBA032_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		// public decimal priceDecimal { get; private set; }
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_0 = ___value0;
		__this->set_U3CpriceDecimalU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m7E9151054E3326B57EA2422A9A841800F3C3C64C_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string receipt { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CreceiptU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_m6004C6C1FA49533DE3250FBB32115BD5E7402EE1_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string transactionID { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m5CDA6B314C648E02F1E2CEB75BE6D5146AEB9C00_inline (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool consumable { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CconsumableU3Ek__BackingField_8(L_0);
		return;
	}
}
