﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// UnityEngine.InputSystem.Layouts.InputControlAttribute
struct InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8;
// UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute
struct InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566;
// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Type
struct Type_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.InputSystem.Layouts.InputControlAttribute
struct InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<layout>k__BackingField
	String_t* ___U3ClayoutU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<variants>k__BackingField
	String_t* ___U3CvariantsU3Ek__BackingField_1;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<format>k__BackingField
	String_t* ___U3CformatU3Ek__BackingField_3;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<usage>k__BackingField
	String_t* ___U3CusageU3Ek__BackingField_4;
	// System.String[] UnityEngine.InputSystem.Layouts.InputControlAttribute::<usages>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CusagesU3Ek__BackingField_5;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<parameters>k__BackingField
	String_t* ___U3CparametersU3Ek__BackingField_6;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<processors>k__BackingField
	String_t* ___U3CprocessorsU3Ek__BackingField_7;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<alias>k__BackingField
	String_t* ___U3CaliasU3Ek__BackingField_8;
	// System.String[] UnityEngine.InputSystem.Layouts.InputControlAttribute::<aliases>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CaliasesU3Ek__BackingField_9;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<useStateFrom>k__BackingField
	String_t* ___U3CuseStateFromU3Ek__BackingField_10;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlAttribute::<bit>k__BackingField
	uint32_t ___U3CbitU3Ek__BackingField_11;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlAttribute::<offset>k__BackingField
	uint32_t ___U3CoffsetU3Ek__BackingField_12;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlAttribute::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_13;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlAttribute::<arraySize>k__BackingField
	int32_t ___U3CarraySizeU3Ek__BackingField_14;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_15;
	// System.String UnityEngine.InputSystem.Layouts.InputControlAttribute::<shortDisplayName>k__BackingField
	String_t* ___U3CshortDisplayNameU3Ek__BackingField_16;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlAttribute::<noisy>k__BackingField
	bool ___U3CnoisyU3Ek__BackingField_17;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlAttribute::<synthetic>k__BackingField
	bool ___U3CsyntheticU3Ek__BackingField_18;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlAttribute::<dontReset>k__BackingField
	bool ___U3CdontResetU3Ek__BackingField_19;
	// System.Object UnityEngine.InputSystem.Layouts.InputControlAttribute::<defaultState>k__BackingField
	RuntimeObject * ___U3CdefaultStateU3Ek__BackingField_20;
	// System.Object UnityEngine.InputSystem.Layouts.InputControlAttribute::<minValue>k__BackingField
	RuntimeObject * ___U3CminValueU3Ek__BackingField_21;
	// System.Object UnityEngine.InputSystem.Layouts.InputControlAttribute::<maxValue>k__BackingField
	RuntimeObject * ___U3CmaxValueU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3ClayoutU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3ClayoutU3Ek__BackingField_0)); }
	inline String_t* get_U3ClayoutU3Ek__BackingField_0() const { return ___U3ClayoutU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClayoutU3Ek__BackingField_0() { return &___U3ClayoutU3Ek__BackingField_0; }
	inline void set_U3ClayoutU3Ek__BackingField_0(String_t* value)
	{
		___U3ClayoutU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClayoutU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvariantsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CvariantsU3Ek__BackingField_1)); }
	inline String_t* get_U3CvariantsU3Ek__BackingField_1() const { return ___U3CvariantsU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CvariantsU3Ek__BackingField_1() { return &___U3CvariantsU3Ek__BackingField_1; }
	inline void set_U3CvariantsU3Ek__BackingField_1(String_t* value)
	{
		___U3CvariantsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvariantsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CformatU3Ek__BackingField_3)); }
	inline String_t* get_U3CformatU3Ek__BackingField_3() const { return ___U3CformatU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CformatU3Ek__BackingField_3() { return &___U3CformatU3Ek__BackingField_3; }
	inline void set_U3CformatU3Ek__BackingField_3(String_t* value)
	{
		___U3CformatU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CformatU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CusageU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CusageU3Ek__BackingField_4)); }
	inline String_t* get_U3CusageU3Ek__BackingField_4() const { return ___U3CusageU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CusageU3Ek__BackingField_4() { return &___U3CusageU3Ek__BackingField_4; }
	inline void set_U3CusageU3Ek__BackingField_4(String_t* value)
	{
		___U3CusageU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CusageU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CusagesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CusagesU3Ek__BackingField_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CusagesU3Ek__BackingField_5() const { return ___U3CusagesU3Ek__BackingField_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CusagesU3Ek__BackingField_5() { return &___U3CusagesU3Ek__BackingField_5; }
	inline void set_U3CusagesU3Ek__BackingField_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CusagesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CusagesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CparametersU3Ek__BackingField_6)); }
	inline String_t* get_U3CparametersU3Ek__BackingField_6() const { return ___U3CparametersU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CparametersU3Ek__BackingField_6() { return &___U3CparametersU3Ek__BackingField_6; }
	inline void set_U3CparametersU3Ek__BackingField_6(String_t* value)
	{
		___U3CparametersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CparametersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprocessorsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CprocessorsU3Ek__BackingField_7)); }
	inline String_t* get_U3CprocessorsU3Ek__BackingField_7() const { return ___U3CprocessorsU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CprocessorsU3Ek__BackingField_7() { return &___U3CprocessorsU3Ek__BackingField_7; }
	inline void set_U3CprocessorsU3Ek__BackingField_7(String_t* value)
	{
		___U3CprocessorsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprocessorsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaliasU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CaliasU3Ek__BackingField_8)); }
	inline String_t* get_U3CaliasU3Ek__BackingField_8() const { return ___U3CaliasU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CaliasU3Ek__BackingField_8() { return &___U3CaliasU3Ek__BackingField_8; }
	inline void set_U3CaliasU3Ek__BackingField_8(String_t* value)
	{
		___U3CaliasU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaliasU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaliasesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CaliasesU3Ek__BackingField_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CaliasesU3Ek__BackingField_9() const { return ___U3CaliasesU3Ek__BackingField_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CaliasesU3Ek__BackingField_9() { return &___U3CaliasesU3Ek__BackingField_9; }
	inline void set_U3CaliasesU3Ek__BackingField_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CaliasesU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaliasesU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseStateFromU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CuseStateFromU3Ek__BackingField_10)); }
	inline String_t* get_U3CuseStateFromU3Ek__BackingField_10() const { return ___U3CuseStateFromU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CuseStateFromU3Ek__BackingField_10() { return &___U3CuseStateFromU3Ek__BackingField_10; }
	inline void set_U3CuseStateFromU3Ek__BackingField_10(String_t* value)
	{
		___U3CuseStateFromU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuseStateFromU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbitU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CbitU3Ek__BackingField_11)); }
	inline uint32_t get_U3CbitU3Ek__BackingField_11() const { return ___U3CbitU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CbitU3Ek__BackingField_11() { return &___U3CbitU3Ek__BackingField_11; }
	inline void set_U3CbitU3Ek__BackingField_11(uint32_t value)
	{
		___U3CbitU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CoffsetU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CoffsetU3Ek__BackingField_12)); }
	inline uint32_t get_U3CoffsetU3Ek__BackingField_12() const { return ___U3CoffsetU3Ek__BackingField_12; }
	inline uint32_t* get_address_of_U3CoffsetU3Ek__BackingField_12() { return &___U3CoffsetU3Ek__BackingField_12; }
	inline void set_U3CoffsetU3Ek__BackingField_12(uint32_t value)
	{
		___U3CoffsetU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CsizeInBitsU3Ek__BackingField_13)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_13() const { return ___U3CsizeInBitsU3Ek__BackingField_13; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_13() { return &___U3CsizeInBitsU3Ek__BackingField_13; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_13(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CarraySizeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CarraySizeU3Ek__BackingField_14)); }
	inline int32_t get_U3CarraySizeU3Ek__BackingField_14() const { return ___U3CarraySizeU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CarraySizeU3Ek__BackingField_14() { return &___U3CarraySizeU3Ek__BackingField_14; }
	inline void set_U3CarraySizeU3Ek__BackingField_14(int32_t value)
	{
		___U3CarraySizeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CdisplayNameU3Ek__BackingField_15)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_15() const { return ___U3CdisplayNameU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_15() { return &___U3CdisplayNameU3Ek__BackingField_15; }
	inline void set_U3CdisplayNameU3Ek__BackingField_15(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshortDisplayNameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CshortDisplayNameU3Ek__BackingField_16)); }
	inline String_t* get_U3CshortDisplayNameU3Ek__BackingField_16() const { return ___U3CshortDisplayNameU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CshortDisplayNameU3Ek__BackingField_16() { return &___U3CshortDisplayNameU3Ek__BackingField_16; }
	inline void set_U3CshortDisplayNameU3Ek__BackingField_16(String_t* value)
	{
		___U3CshortDisplayNameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshortDisplayNameU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoisyU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CnoisyU3Ek__BackingField_17)); }
	inline bool get_U3CnoisyU3Ek__BackingField_17() const { return ___U3CnoisyU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CnoisyU3Ek__BackingField_17() { return &___U3CnoisyU3Ek__BackingField_17; }
	inline void set_U3CnoisyU3Ek__BackingField_17(bool value)
	{
		___U3CnoisyU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CsyntheticU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CsyntheticU3Ek__BackingField_18)); }
	inline bool get_U3CsyntheticU3Ek__BackingField_18() const { return ___U3CsyntheticU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CsyntheticU3Ek__BackingField_18() { return &___U3CsyntheticU3Ek__BackingField_18; }
	inline void set_U3CsyntheticU3Ek__BackingField_18(bool value)
	{
		___U3CsyntheticU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CdontResetU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CdontResetU3Ek__BackingField_19)); }
	inline bool get_U3CdontResetU3Ek__BackingField_19() const { return ___U3CdontResetU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CdontResetU3Ek__BackingField_19() { return &___U3CdontResetU3Ek__BackingField_19; }
	inline void set_U3CdontResetU3Ek__BackingField_19(bool value)
	{
		___U3CdontResetU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultStateU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CdefaultStateU3Ek__BackingField_20)); }
	inline RuntimeObject * get_U3CdefaultStateU3Ek__BackingField_20() const { return ___U3CdefaultStateU3Ek__BackingField_20; }
	inline RuntimeObject ** get_address_of_U3CdefaultStateU3Ek__BackingField_20() { return &___U3CdefaultStateU3Ek__BackingField_20; }
	inline void set_U3CdefaultStateU3Ek__BackingField_20(RuntimeObject * value)
	{
		___U3CdefaultStateU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultStateU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CminValueU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CminValueU3Ek__BackingField_21)); }
	inline RuntimeObject * get_U3CminValueU3Ek__BackingField_21() const { return ___U3CminValueU3Ek__BackingField_21; }
	inline RuntimeObject ** get_address_of_U3CminValueU3Ek__BackingField_21() { return &___U3CminValueU3Ek__BackingField_21; }
	inline void set_U3CminValueU3Ek__BackingField_21(RuntimeObject * value)
	{
		___U3CminValueU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CminValueU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmaxValueU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8, ___U3CmaxValueU3Ek__BackingField_22)); }
	inline RuntimeObject * get_U3CmaxValueU3Ek__BackingField_22() const { return ___U3CmaxValueU3Ek__BackingField_22; }
	inline RuntimeObject ** get_address_of_U3CmaxValueU3Ek__BackingField_22() { return &___U3CmaxValueU3Ek__BackingField_22; }
	inline void set_U3CmaxValueU3Ek__BackingField_22(RuntimeObject * value)
	{
		___U3CmaxValueU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmaxValueU3Ek__BackingField_22), (void*)value);
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute
struct InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<stateType>k__BackingField
	Type_t * ___U3CstateTypeU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<stateFormat>k__BackingField
	String_t* ___U3CstateFormatU3Ek__BackingField_1;
	// System.String[] UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<commonUsages>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CcommonUsagesU3Ek__BackingField_2;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<variants>k__BackingField
	String_t* ___U3CvariantsU3Ek__BackingField_3;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<isNoisy>k__BackingField
	bool ___U3CisNoisyU3Ek__BackingField_4;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::canRunInBackgroundInternal
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___canRunInBackgroundInternal_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::updateBeforeRenderInternal
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___updateBeforeRenderInternal_6;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<isGenericTypeOfDevice>k__BackingField
	bool ___U3CisGenericTypeOfDeviceU3Ek__BackingField_7;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_8;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_9;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::<hideInUI>k__BackingField
	bool ___U3ChideInUIU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CstateTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3CstateTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CstateTypeU3Ek__BackingField_0() const { return ___U3CstateTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CstateTypeU3Ek__BackingField_0() { return &___U3CstateTypeU3Ek__BackingField_0; }
	inline void set_U3CstateTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CstateTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstateTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateFormatU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3CstateFormatU3Ek__BackingField_1)); }
	inline String_t* get_U3CstateFormatU3Ek__BackingField_1() const { return ___U3CstateFormatU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstateFormatU3Ek__BackingField_1() { return &___U3CstateFormatU3Ek__BackingField_1; }
	inline void set_U3CstateFormatU3Ek__BackingField_1(String_t* value)
	{
		___U3CstateFormatU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstateFormatU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcommonUsagesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3CcommonUsagesU3Ek__BackingField_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CcommonUsagesU3Ek__BackingField_2() const { return ___U3CcommonUsagesU3Ek__BackingField_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CcommonUsagesU3Ek__BackingField_2() { return &___U3CcommonUsagesU3Ek__BackingField_2; }
	inline void set_U3CcommonUsagesU3Ek__BackingField_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CcommonUsagesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcommonUsagesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvariantsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3CvariantsU3Ek__BackingField_3)); }
	inline String_t* get_U3CvariantsU3Ek__BackingField_3() const { return ___U3CvariantsU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CvariantsU3Ek__BackingField_3() { return &___U3CvariantsU3Ek__BackingField_3; }
	inline void set_U3CvariantsU3Ek__BackingField_3(String_t* value)
	{
		___U3CvariantsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvariantsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisNoisyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3CisNoisyU3Ek__BackingField_4)); }
	inline bool get_U3CisNoisyU3Ek__BackingField_4() const { return ___U3CisNoisyU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisNoisyU3Ek__BackingField_4() { return &___U3CisNoisyU3Ek__BackingField_4; }
	inline void set_U3CisNoisyU3Ek__BackingField_4(bool value)
	{
		___U3CisNoisyU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_canRunInBackgroundInternal_5() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___canRunInBackgroundInternal_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_canRunInBackgroundInternal_5() const { return ___canRunInBackgroundInternal_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_canRunInBackgroundInternal_5() { return &___canRunInBackgroundInternal_5; }
	inline void set_canRunInBackgroundInternal_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___canRunInBackgroundInternal_5 = value;
	}

	inline static int32_t get_offset_of_updateBeforeRenderInternal_6() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___updateBeforeRenderInternal_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_updateBeforeRenderInternal_6() const { return ___updateBeforeRenderInternal_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_updateBeforeRenderInternal_6() { return &___updateBeforeRenderInternal_6; }
	inline void set_updateBeforeRenderInternal_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___updateBeforeRenderInternal_6 = value;
	}

	inline static int32_t get_offset_of_U3CisGenericTypeOfDeviceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3CisGenericTypeOfDeviceU3Ek__BackingField_7)); }
	inline bool get_U3CisGenericTypeOfDeviceU3Ek__BackingField_7() const { return ___U3CisGenericTypeOfDeviceU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CisGenericTypeOfDeviceU3Ek__BackingField_7() { return &___U3CisGenericTypeOfDeviceU3Ek__BackingField_7; }
	inline void set_U3CisGenericTypeOfDeviceU3Ek__BackingField_7(bool value)
	{
		___U3CisGenericTypeOfDeviceU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3CdisplayNameU3Ek__BackingField_8)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_8() const { return ___U3CdisplayNameU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_8() { return &___U3CdisplayNameU3Ek__BackingField_8; }
	inline void set_U3CdisplayNameU3Ek__BackingField_8(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3CdescriptionU3Ek__BackingField_9)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_9() const { return ___U3CdescriptionU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_9() { return &___U3CdescriptionU3Ek__BackingField_9; }
	inline void set_U3CdescriptionU3Ek__BackingField_9(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdescriptionU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChideInUIU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65, ___U3ChideInUIU3Ek__BackingField_10)); }
	inline bool get_U3ChideInUIU3Ek__BackingField_10() const { return ___U3ChideInUIU3Ek__BackingField_10; }
	inline bool* get_address_of_U3ChideInUIU3Ek__BackingField_10() { return &___U3ChideInUIU3Ek__BackingField_10; }
	inline void set_U3ChideInUIU3Ek__BackingField_10(bool value)
	{
		___U3ChideInUIU3Ek__BackingField_10 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * __this, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlLayoutAttribute__ctor_m0718E255A0D6275D67FCA92ACDA4FD005D73896E (InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2 (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Layouts.InputControlAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlAttribute__ctor_m5D34A3FC37D30BEF5CE9633F9CA33452914109AC (InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8 * __this, const RuntimeMethod* method);
static void Unity_XR_ARSubsystems_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[0];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[1];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[2];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[3];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_CustomAttributesCacheGenerator_U3CsupportsTrackableAttachmentsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_CustomAttributesCacheGenerator_XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CproviderTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CsubsystemTypeOverrideU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CsubsystemImplementationTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CsupportsTrackableAttachmentsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_CustomAttributesCacheGenerator_U3CdescriptorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_CustomAttributesCacheGenerator_U3CfeaturesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_CustomAttributesCacheGenerator_Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_CustomAttributesCacheGenerator_Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void FeatureExtensions_t3AE82EEF9BA5B67267E4A8371D344F93AA983603_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void FeatureExtensions_t3AE82EEF9BA5B67267E4A8371D344F93AA983603_CustomAttributesCacheGenerator_FeatureExtensions_LowestBit_mD88FDDA9224F7FB3B74A3EC59BB76C86B4923267(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void FeatureExtensions_t3AE82EEF9BA5B67267E4A8371D344F93AA983603_CustomAttributesCacheGenerator_FeatureExtensions_ToStringList_m1B8E6CA945AE2E060DB1D4DFA60CCD72AADC082D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65 * tmp = (InputControlLayoutAttribute_tFA34A1F9B4C31D0823092C90DC3E174F64D68D65 *)cache->attributes[0];
		InputControlLayoutAttribute__ctor_m0718E255A0D6275D67FCA92ACDA4FD005D73896E(tmp, NULL);
	}
	{
		PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * tmp = (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 *)cache->attributes[1];
		PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_U3CdevicePositionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_U3CdeviceRotationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_get_devicePosition_mD8B73B3B591DD79C645AF21C8620537371324629(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_set_devicePosition_m94DFACB4F814D951C3B691CAFA67CF9AA489FE38(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_get_deviceRotation_m09F690E24EBA07A0F3EEB97B189E868F014D6379(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_set_deviceRotation_m33CEC2CEA47EC817180EE7978958D008AADF885C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321____devicePosition_PropertyInfo(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * tmp = (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 *)cache->attributes[0];
		PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2(tmp, NULL);
	}
	{
		InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8 * tmp = (InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8 *)cache->attributes[1];
		InputControlAttribute__ctor_m5D34A3FC37D30BEF5CE9633F9CA33452914109AC(tmp, NULL);
	}
}
static void HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321____deviceRotation_PropertyInfo(CustomAttributesCache* cache)
{
	{
		InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8 * tmp = (InputControlAttribute_t67E306CBA0B2CAC554B4B6DF05E53491585A7BF8 *)cache->attributes[0];
		InputControlAttribute__ctor_m5D34A3FC37D30BEF5CE9633F9CA33452914109AC(tmp, NULL);
	}
	{
		PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * tmp = (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 *)cache->attributes[1];
		PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2(tmp, NULL);
	}
}
static void PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsBoundaryVerticesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsClassificationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_get_supportsBoundaryVertices_m4345B5F3CA73C685A3F741C4EDFF6B69EEEB8431(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CproviderTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsubsystemTypeOverrideU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsubsystemImplementationTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsBoundaryVerticesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsClassificationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Promise_1_t67DF2322A3622F9AF4DF69F148FEC9072AC77630_CustomAttributesCacheGenerator_U3CresultU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Promise_1_t67DF2322A3622F9AF4DF69F148FEC9072AC77630_CustomAttributesCacheGenerator_Promise_1_set_result_m46AE0C162539A2B8F9BA3C9BA280F8575C9F4081(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_U3CsupportsViewportBasedRaycastU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_U3CsupportsWorldBasedRaycastU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_U3CsupportedTrackableTypesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_U3CsupportsTrackedRaycastsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_get_supportsViewportBasedRaycast_mB431E0A243FBE6F37AEAB566B124E502FEEC267B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_get_supportsWorldBasedRaycast_m242C4F2136709274DAF885FCC520546E682AD0DF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_mD10EA0CD0E6F8FB9D499544B0DE27A5EBCED30C9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CproviderTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsubsystemTypeOverrideU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsubsystemImplementationTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsupportsViewportBasedRaycastU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsupportsWorldBasedRaycastU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsupportedTrackableTypesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsupportsTrackedRaycastsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_CustomAttributesCacheGenerator_U3CsupportsInstallU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_CustomAttributesCacheGenerator_U3CsupportsMatchFrameRateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_CustomAttributesCacheGenerator_XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_CustomAttributesCacheGenerator_XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CsupportsInstallU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CsupportsMatchFrameRateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CproviderTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CsubsystemTypeOverrideU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CsubsystemImplementationTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_CustomAttributesCacheGenerator_U3CscreenOrientationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_CustomAttributesCacheGenerator_U3CscreenDimensionsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_CustomAttributesCacheGenerator_XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_CustomAttributesCacheGenerator_XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackableChanges_1_tD84050D3C16367D192E4F9CC81F9B988AD2F734A_CustomAttributesCacheGenerator_U3CisCreatedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackableChanges_1_tD84050D3C16367D192E4F9CC81F9B988AD2F734A_CustomAttributesCacheGenerator_TrackableChanges_1_get_isCreated_m2B50612D608A70CB7860C0D8AB217C0F5A1AC3FD(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackableChanges_1_tD84050D3C16367D192E4F9CC81F9B988AD2F734A_CustomAttributesCacheGenerator_TrackableChanges_1_set_isCreated_m605EFDE8ADD44FADC44AABFBA5C7C98B2BA5A8F9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Unity_XR_ARSubsystems_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Unity_XR_ARSubsystems_AttributeGenerators[133] = 
{
	Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83_CustomAttributesCacheGenerator,
	FeatureExtensions_t3AE82EEF9BA5B67267E4A8371D344F93AA983603_CustomAttributesCacheGenerator,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator,
	PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD_CustomAttributesCacheGenerator,
	TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F_CustomAttributesCacheGenerator,
	SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD_CustomAttributesCacheGenerator,
	XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_CustomAttributesCacheGenerator_U3CsupportsTrackableAttachmentsU3Ek__BackingField,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CproviderTypeU3Ek__BackingField,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CsubsystemTypeOverrideU3Ek__BackingField,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CsubsystemImplementationTypeU3Ek__BackingField,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_U3CsupportsTrackableAttachmentsU3Ek__BackingField,
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_CustomAttributesCacheGenerator_U3CdescriptorU3Ek__BackingField,
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_CustomAttributesCacheGenerator_U3CfeaturesU3Ek__BackingField,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_U3CdevicePositionU3Ek__BackingField,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_U3CdeviceRotationU3Ek__BackingField,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsBoundaryVerticesU3Ek__BackingField,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_U3CsupportsClassificationU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CproviderTypeU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsubsystemTypeOverrideU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsubsystemImplementationTypeU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsBoundaryVerticesU3Ek__BackingField,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_U3CsupportsClassificationU3Ek__BackingField,
	Promise_1_t67DF2322A3622F9AF4DF69F148FEC9072AC77630_CustomAttributesCacheGenerator_U3CresultU3Ek__BackingField,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_U3CsupportsViewportBasedRaycastU3Ek__BackingField,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_U3CsupportsWorldBasedRaycastU3Ek__BackingField,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_U3CsupportedTrackableTypesU3Ek__BackingField,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_U3CsupportsTrackedRaycastsU3Ek__BackingField,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CproviderTypeU3Ek__BackingField,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsubsystemTypeOverrideU3Ek__BackingField,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsubsystemImplementationTypeU3Ek__BackingField,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsupportsViewportBasedRaycastU3Ek__BackingField,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsupportsWorldBasedRaycastU3Ek__BackingField,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsupportedTrackableTypesU3Ek__BackingField,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_U3CsupportsTrackedRaycastsU3Ek__BackingField,
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_CustomAttributesCacheGenerator_U3CsupportsInstallU3Ek__BackingField,
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_CustomAttributesCacheGenerator_U3CsupportsMatchFrameRateU3Ek__BackingField,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CsupportsInstallU3Ek__BackingField,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CsupportsMatchFrameRateU3Ek__BackingField,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CproviderTypeU3Ek__BackingField,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CsubsystemTypeOverrideU3Ek__BackingField,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_U3CsubsystemImplementationTypeU3Ek__BackingField,
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_CustomAttributesCacheGenerator_U3CscreenOrientationU3Ek__BackingField,
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_CustomAttributesCacheGenerator_U3CscreenDimensionsU3Ek__BackingField,
	TrackableChanges_1_tD84050D3C16367D192E4F9CC81F9B988AD2F734A_CustomAttributesCacheGenerator_U3CisCreatedU3Ek__BackingField,
	XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_CustomAttributesCacheGenerator_XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8,
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_CustomAttributesCacheGenerator_Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995,
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_CustomAttributesCacheGenerator_Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA,
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_CustomAttributesCacheGenerator_Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A,
	FeatureExtensions_t3AE82EEF9BA5B67267E4A8371D344F93AA983603_CustomAttributesCacheGenerator_FeatureExtensions_LowestBit_mD88FDDA9224F7FB3B74A3EC59BB76C86B4923267,
	FeatureExtensions_t3AE82EEF9BA5B67267E4A8371D344F93AA983603_CustomAttributesCacheGenerator_FeatureExtensions_ToStringList_m1B8E6CA945AE2E060DB1D4DFA60CCD72AADC082D,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_get_devicePosition_mD8B73B3B591DD79C645AF21C8620537371324629,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_set_devicePosition_m94DFACB4F814D951C3B691CAFA67CF9AA489FE38,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_get_deviceRotation_m09F690E24EBA07A0F3EEB97B189E868F014D6379,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_set_deviceRotation_m33CEC2CEA47EC817180EE7978958D008AADF885C,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_get_supportsBoundaryVertices_m4345B5F3CA73C685A3F741C4EDFF6B69EEEB8431,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747,
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_CustomAttributesCacheGenerator_XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E,
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_CustomAttributesCacheGenerator_Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C,
	Promise_1_t67DF2322A3622F9AF4DF69F148FEC9072AC77630_CustomAttributesCacheGenerator_Promise_1_set_result_m46AE0C162539A2B8F9BA3C9BA280F8575C9F4081,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_get_supportsViewportBasedRaycast_mB431E0A243FBE6F37AEAB566B124E502FEEC267B,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_get_supportsWorldBasedRaycast_m242C4F2136709274DAF885FCC520546E682AD0DF,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53,
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_CustomAttributesCacheGenerator_XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_mD10EA0CD0E6F8FB9D499544B0DE27A5EBCED30C9,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A,
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_CustomAttributesCacheGenerator_Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C,
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_CustomAttributesCacheGenerator_XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2,
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_CustomAttributesCacheGenerator_XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D,
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_CustomAttributesCacheGenerator_Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6,
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_CustomAttributesCacheGenerator_XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A,
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_CustomAttributesCacheGenerator_XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118,
	TrackableChanges_1_tD84050D3C16367D192E4F9CC81F9B988AD2F734A_CustomAttributesCacheGenerator_TrackableChanges_1_get_isCreated_m2B50612D608A70CB7860C0D8AB217C0F5A1AC3FD,
	TrackableChanges_1_tD84050D3C16367D192E4F9CC81F9B988AD2F734A_CustomAttributesCacheGenerator_TrackableChanges_1_set_isCreated_m605EFDE8ADD44FADC44AABFBA5C7C98B2BA5A8F9,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321____devicePosition_PropertyInfo,
	HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321_CustomAttributesCacheGenerator_HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321____deviceRotation_PropertyInfo,
	Unity_XR_ARSubsystems_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
