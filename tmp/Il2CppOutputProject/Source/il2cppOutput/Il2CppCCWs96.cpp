﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Guid>
struct Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B;
// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object>
struct Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator>
struct Dictionary_2_t61D48E9743D3D1BFB65A51CFC11E34C427D9CB37;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>
struct Dictionary_2_tA8C8FFB7A47C9FB7B674C55FD89E22DE745F3817;
// System.EventHandler`1<System.Diagnostics.Tracing.EventCommandEventArgs>
struct EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E;
// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EtwSession>
struct List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Threading.IAsyncLocal>
struct List_1_t053589A158AAF0B471CF80825616560409AF43D4;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>
struct List_1_t38912F902D9C744F820377C455C418170687B159;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences>
struct List_1_t20A03C0EAD3AC0F8F21ADF1230E047F1F37A1950;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Diagnostics.Tracing.EtwSession[]
struct EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Diagnostics.Tracing.EventSource/EventMetadata[]
struct EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65;
// System.Diagnostics.Tracing.ActivityTracker
struct ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Diagnostics.Tracing.EventCommandEventArgs
struct EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F;
// System.Diagnostics.Tracing.EventDispatcher
struct EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine
struct GazePointerVisibilityStateMachine_t1014214D167062CC7B80D26EC79B67A0FCFA3E33;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPrimaryPointerSelector
struct IMixedRealityPrimaryPointerSelector_tCD72F8D80255F21FED27C79023501AB9A8BD5B15;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t37E1E92066EA816628E60A45958488D2F5439D6D;
// System.Runtime.Remoting.Messaging.IllogicalCallContext
struct IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler
struct PrimaryPointerChangedHandler_tCBBBBD55175D6B1274E81A1659083A3D818C30A4;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IReference`1<System.Exception>
struct NOVTABLE IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAA3D5310A328BC7561FCA472E95A3A358367ADBD(int32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Security.Policy.Evidence
struct Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___assemblyEvidenceList_2;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ___hostEvidenceList_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostEvidenceList_1), (void*)value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ___assemblyEvidenceList_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyEvidenceList_2), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
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

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// Windows.Foundation.EventRegistrationToken
struct EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80 
{
public:
	// System.Int64 Windows.Foundation.EventRegistrationToken::Value
	int64_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80, ___Value_0)); }
	inline int64_t get_Value_0() const { return ___Value_0; }
	inline int64_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int64_t value)
	{
		___Value_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// System.Diagnostics.Tracing.SessionMask
struct SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C 
{
public:
	// System.UInt32 System.Diagnostics.Tracing.SessionMask::m_mask
	uint32_t ___m_mask_0;

public:
	inline static int32_t get_offset_of_m_mask_0() { return static_cast<int32_t>(offsetof(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C, ___m_mask_0)); }
	inline uint32_t get_m_mask_0() const { return ___m_mask_0; }
	inline uint32_t* get_address_of_m_mask_0() { return &___m_mask_0; }
	inline void set_m_mask_0(uint32_t value)
	{
		___m_mask_0 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

// Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct NOVTABLE IReference_1_t82B0826F980A0BBB661F5A0C4BD9B330E91AE4C1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mFCD922CB39830ECA5957B4BAC7CAE15DF2ABF0D3(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>
struct NOVTABLE IReference_1_tF1B87B1788B0F90F05EFA35AD46061966A1CDA0E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m62FED3523F963FB744D260180C5F7E82E18C5249(EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80 * comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// System.Diagnostics.Tracing.EventKeywords
struct EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC 
{
public:
	// System.Int64 System.Diagnostics.Tracing.EventKeywords::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventLevel
struct EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventSourceSettings
struct EventSourceSettings_t8D2D1F0C067D425607BA72DC3DB857A15F0A8E57 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventSourceSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventSourceSettings_t8D2D1F0C067D425607BA72DC3DB857A15F0A8E57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.PointerBehavior
struct PointerBehavior_tC7B4045CC6EAC9F5C4739F1217EE3BAEAF613C8E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerBehavior_tC7B4045CC6EAC9F5C4739F1217EE3BAEAF613C8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.ExecutionContext/Flags
struct Flags_t84E4B7439C575026B3A9D10B43AC61B9709011E4 
{
public:
	// System.Int32 System.Threading.ExecutionContext/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t84E4B7439C575026B3A9D10B43AC61B9709011E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5  : public BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481 * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173 * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___postponedActions_15)); }
	inline List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_tCBCC559E472FFE1F547661BA38961FEA157E610E * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___postponedObjectActions_16)); }
	inline List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481 * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481 ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_t3FD44D9B4073D45F5043F02E045D2D7AE8A81481 * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173 * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_t2DCDF01C81B9244A5794A0927B4527FEFA140173 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};


// System.Diagnostics.Tracing.EventSource
struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A  : public RuntimeObject
{
public:
	// System.Byte[] System.Diagnostics.Tracing.EventSource::providerMetadata
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___providerMetadata_0;
	// System.String System.Diagnostics.Tracing.EventSource::m_name
	String_t* ___m_name_1;
	// System.Int32 System.Diagnostics.Tracing.EventSource::m_id
	int32_t ___m_id_2;
	// System.Guid System.Diagnostics.Tracing.EventSource::m_guid
	Guid_t  ___m_guid_3;
	// System.Diagnostics.Tracing.EventSource/EventMetadata[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_eventData
	EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* ___m_eventData_4;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_rawManifest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_rawManifest_5;
	// System.EventHandler`1<System.Diagnostics.Tracing.EventCommandEventArgs> System.Diagnostics.Tracing.EventSource::m_eventCommandExecuted
	EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * ___m_eventCommandExecuted_6;
	// System.Diagnostics.Tracing.EventSourceSettings System.Diagnostics.Tracing.EventSource::m_config
	int32_t ___m_config_7;
	// System.Boolean System.Diagnostics.Tracing.EventSource::m_eventSourceEnabled
	bool ___m_eventSourceEnabled_8;
	// System.Diagnostics.Tracing.EventLevel System.Diagnostics.Tracing.EventSource::m_level
	int32_t ___m_level_9;
	// System.Diagnostics.Tracing.EventKeywords System.Diagnostics.Tracing.EventSource::m_matchAnyKeyword
	int64_t ___m_matchAnyKeyword_10;
	// System.Diagnostics.Tracing.EventDispatcher modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_Dispatchers
	EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * ___m_Dispatchers_11;
	// System.Diagnostics.Tracing.EventSource/OverideEventProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_provider
	OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * ___m_provider_12;
	// System.Boolean System.Diagnostics.Tracing.EventSource::m_completelyInited
	bool ___m_completelyInited_13;
	// System.Exception System.Diagnostics.Tracing.EventSource::m_constructionException
	Exception_t * ___m_constructionException_14;
	// System.Byte System.Diagnostics.Tracing.EventSource::m_outOfBandMessageCount
	uint8_t ___m_outOfBandMessageCount_15;
	// System.Diagnostics.Tracing.EventCommandEventArgs System.Diagnostics.Tracing.EventSource::m_deferredCommands
	EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * ___m_deferredCommands_16;
	// System.String[] System.Diagnostics.Tracing.EventSource::m_traits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_traits_17;
	// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.EventSource::m_curLiveSessions
	SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  ___m_curLiveSessions_20;
	// System.Diagnostics.Tracing.EtwSession[] System.Diagnostics.Tracing.EventSource::m_etwSessionIdMap
	EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* ___m_etwSessionIdMap_21;
	// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EtwSession> System.Diagnostics.Tracing.EventSource::m_legacySessions
	List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * ___m_legacySessions_22;
	// System.Int64 System.Diagnostics.Tracing.EventSource::m_keywordTriggers
	int64_t ___m_keywordTriggers_23;
	// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.EventSource::m_activityFilteringForETWEnabled
	SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  ___m_activityFilteringForETWEnabled_24;
	// System.Diagnostics.Tracing.ActivityTracker System.Diagnostics.Tracing.EventSource::m_activityTracker
	ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * ___m_activityTracker_26;

public:
	inline static int32_t get_offset_of_providerMetadata_0() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___providerMetadata_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_providerMetadata_0() const { return ___providerMetadata_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_providerMetadata_0() { return &___providerMetadata_0; }
	inline void set_providerMetadata_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___providerMetadata_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___providerMetadata_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_1() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_name_1)); }
	inline String_t* get_m_name_1() const { return ___m_name_1; }
	inline String_t** get_address_of_m_name_1() { return &___m_name_1; }
	inline void set_m_name_1(String_t* value)
	{
		___m_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_id_2() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_id_2)); }
	inline int32_t get_m_id_2() const { return ___m_id_2; }
	inline int32_t* get_address_of_m_id_2() { return &___m_id_2; }
	inline void set_m_id_2(int32_t value)
	{
		___m_id_2 = value;
	}

	inline static int32_t get_offset_of_m_guid_3() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_guid_3)); }
	inline Guid_t  get_m_guid_3() const { return ___m_guid_3; }
	inline Guid_t * get_address_of_m_guid_3() { return &___m_guid_3; }
	inline void set_m_guid_3(Guid_t  value)
	{
		___m_guid_3 = value;
	}

	inline static int32_t get_offset_of_m_eventData_4() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventData_4)); }
	inline EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* get_m_eventData_4() const { return ___m_eventData_4; }
	inline EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65** get_address_of_m_eventData_4() { return &___m_eventData_4; }
	inline void set_m_eventData_4(EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* value)
	{
		___m_eventData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventData_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_rawManifest_5() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_rawManifest_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_rawManifest_5() const { return ___m_rawManifest_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_rawManifest_5() { return &___m_rawManifest_5; }
	inline void set_m_rawManifest_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_rawManifest_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rawManifest_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventCommandExecuted_6() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventCommandExecuted_6)); }
	inline EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * get_m_eventCommandExecuted_6() const { return ___m_eventCommandExecuted_6; }
	inline EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 ** get_address_of_m_eventCommandExecuted_6() { return &___m_eventCommandExecuted_6; }
	inline void set_m_eventCommandExecuted_6(EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * value)
	{
		___m_eventCommandExecuted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventCommandExecuted_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_config_7() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_config_7)); }
	inline int32_t get_m_config_7() const { return ___m_config_7; }
	inline int32_t* get_address_of_m_config_7() { return &___m_config_7; }
	inline void set_m_config_7(int32_t value)
	{
		___m_config_7 = value;
	}

	inline static int32_t get_offset_of_m_eventSourceEnabled_8() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventSourceEnabled_8)); }
	inline bool get_m_eventSourceEnabled_8() const { return ___m_eventSourceEnabled_8; }
	inline bool* get_address_of_m_eventSourceEnabled_8() { return &___m_eventSourceEnabled_8; }
	inline void set_m_eventSourceEnabled_8(bool value)
	{
		___m_eventSourceEnabled_8 = value;
	}

	inline static int32_t get_offset_of_m_level_9() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_level_9)); }
	inline int32_t get_m_level_9() const { return ___m_level_9; }
	inline int32_t* get_address_of_m_level_9() { return &___m_level_9; }
	inline void set_m_level_9(int32_t value)
	{
		___m_level_9 = value;
	}

	inline static int32_t get_offset_of_m_matchAnyKeyword_10() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_matchAnyKeyword_10)); }
	inline int64_t get_m_matchAnyKeyword_10() const { return ___m_matchAnyKeyword_10; }
	inline int64_t* get_address_of_m_matchAnyKeyword_10() { return &___m_matchAnyKeyword_10; }
	inline void set_m_matchAnyKeyword_10(int64_t value)
	{
		___m_matchAnyKeyword_10 = value;
	}

	inline static int32_t get_offset_of_m_Dispatchers_11() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_Dispatchers_11)); }
	inline EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * get_m_Dispatchers_11() const { return ___m_Dispatchers_11; }
	inline EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 ** get_address_of_m_Dispatchers_11() { return &___m_Dispatchers_11; }
	inline void set_m_Dispatchers_11(EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * value)
	{
		___m_Dispatchers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dispatchers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_provider_12() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_provider_12)); }
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * get_m_provider_12() const { return ___m_provider_12; }
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 ** get_address_of_m_provider_12() { return &___m_provider_12; }
	inline void set_m_provider_12(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * value)
	{
		___m_provider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_provider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_completelyInited_13() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_completelyInited_13)); }
	inline bool get_m_completelyInited_13() const { return ___m_completelyInited_13; }
	inline bool* get_address_of_m_completelyInited_13() { return &___m_completelyInited_13; }
	inline void set_m_completelyInited_13(bool value)
	{
		___m_completelyInited_13 = value;
	}

	inline static int32_t get_offset_of_m_constructionException_14() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_constructionException_14)); }
	inline Exception_t * get_m_constructionException_14() const { return ___m_constructionException_14; }
	inline Exception_t ** get_address_of_m_constructionException_14() { return &___m_constructionException_14; }
	inline void set_m_constructionException_14(Exception_t * value)
	{
		___m_constructionException_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_constructionException_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_outOfBandMessageCount_15() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_outOfBandMessageCount_15)); }
	inline uint8_t get_m_outOfBandMessageCount_15() const { return ___m_outOfBandMessageCount_15; }
	inline uint8_t* get_address_of_m_outOfBandMessageCount_15() { return &___m_outOfBandMessageCount_15; }
	inline void set_m_outOfBandMessageCount_15(uint8_t value)
	{
		___m_outOfBandMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_deferredCommands_16() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_deferredCommands_16)); }
	inline EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * get_m_deferredCommands_16() const { return ___m_deferredCommands_16; }
	inline EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F ** get_address_of_m_deferredCommands_16() { return &___m_deferredCommands_16; }
	inline void set_m_deferredCommands_16(EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * value)
	{
		___m_deferredCommands_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_deferredCommands_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_traits_17() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_traits_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_traits_17() const { return ___m_traits_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_traits_17() { return &___m_traits_17; }
	inline void set_m_traits_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_traits_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_traits_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_curLiveSessions_20() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_curLiveSessions_20)); }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  get_m_curLiveSessions_20() const { return ___m_curLiveSessions_20; }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C * get_address_of_m_curLiveSessions_20() { return &___m_curLiveSessions_20; }
	inline void set_m_curLiveSessions_20(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  value)
	{
		___m_curLiveSessions_20 = value;
	}

	inline static int32_t get_offset_of_m_etwSessionIdMap_21() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_etwSessionIdMap_21)); }
	inline EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* get_m_etwSessionIdMap_21() const { return ___m_etwSessionIdMap_21; }
	inline EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281** get_address_of_m_etwSessionIdMap_21() { return &___m_etwSessionIdMap_21; }
	inline void set_m_etwSessionIdMap_21(EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* value)
	{
		___m_etwSessionIdMap_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_etwSessionIdMap_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_legacySessions_22() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_legacySessions_22)); }
	inline List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * get_m_legacySessions_22() const { return ___m_legacySessions_22; }
	inline List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D ** get_address_of_m_legacySessions_22() { return &___m_legacySessions_22; }
	inline void set_m_legacySessions_22(List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * value)
	{
		___m_legacySessions_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_legacySessions_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_keywordTriggers_23() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_keywordTriggers_23)); }
	inline int64_t get_m_keywordTriggers_23() const { return ___m_keywordTriggers_23; }
	inline int64_t* get_address_of_m_keywordTriggers_23() { return &___m_keywordTriggers_23; }
	inline void set_m_keywordTriggers_23(int64_t value)
	{
		___m_keywordTriggers_23 = value;
	}

	inline static int32_t get_offset_of_m_activityFilteringForETWEnabled_24() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_activityFilteringForETWEnabled_24)); }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  get_m_activityFilteringForETWEnabled_24() const { return ___m_activityFilteringForETWEnabled_24; }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C * get_address_of_m_activityFilteringForETWEnabled_24() { return &___m_activityFilteringForETWEnabled_24; }
	inline void set_m_activityFilteringForETWEnabled_24(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  value)
	{
		___m_activityFilteringForETWEnabled_24 = value;
	}

	inline static int32_t get_offset_of_m_activityTracker_26() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_activityTracker_26)); }
	inline ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * get_m_activityTracker_26() const { return ___m_activityTracker_26; }
	inline ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 ** get_address_of_m_activityTracker_26() { return &___m_activityTracker_26; }
	inline void set_m_activityTracker_26(ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * value)
	{
		___m_activityTracker_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_activityTracker_26), (void*)value);
	}
};

struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields
{
public:
	// System.UInt32 System.Diagnostics.Tracing.EventSource::s_currentPid
	uint32_t ___s_currentPid_18;
	// System.Action`1<System.Guid> System.Diagnostics.Tracing.EventSource::s_activityDying
	Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * ___s_activityDying_25;
	// System.Byte[] System.Diagnostics.Tracing.EventSource::namespaceBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___namespaceBytes_27;
	// System.Guid System.Diagnostics.Tracing.EventSource::AspNetEventSourceGuid
	Guid_t  ___AspNetEventSourceGuid_28;

public:
	inline static int32_t get_offset_of_s_currentPid_18() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___s_currentPid_18)); }
	inline uint32_t get_s_currentPid_18() const { return ___s_currentPid_18; }
	inline uint32_t* get_address_of_s_currentPid_18() { return &___s_currentPid_18; }
	inline void set_s_currentPid_18(uint32_t value)
	{
		___s_currentPid_18 = value;
	}

	inline static int32_t get_offset_of_s_activityDying_25() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___s_activityDying_25)); }
	inline Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * get_s_activityDying_25() const { return ___s_activityDying_25; }
	inline Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 ** get_address_of_s_activityDying_25() { return &___s_activityDying_25; }
	inline void set_s_activityDying_25(Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * value)
	{
		___s_activityDying_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activityDying_25), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceBytes_27() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___namespaceBytes_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_namespaceBytes_27() const { return ___namespaceBytes_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_namespaceBytes_27() { return &___namespaceBytes_27; }
	inline void set_namespaceBytes_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___namespaceBytes_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceBytes_27), (void*)value);
	}

	inline static int32_t get_offset_of_AspNetEventSourceGuid_28() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___AspNetEventSourceGuid_28)); }
	inline Guid_t  get_AspNetEventSourceGuid_28() const { return ___AspNetEventSourceGuid_28; }
	inline Guid_t * get_address_of_AspNetEventSourceGuid_28() { return &___AspNetEventSourceGuid_28; }
	inline void set_AspNetEventSourceGuid_28(Guid_t  value)
	{
		___AspNetEventSourceGuid_28 = value;
	}
};

struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ThreadStaticFields
{
public:
	// System.Byte System.Diagnostics.Tracing.EventSource::m_EventSourceExceptionRecurenceCount
	uint8_t ___m_EventSourceExceptionRecurenceCount_19;

public:
	inline static int32_t get_offset_of_m_EventSourceExceptionRecurenceCount_19() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ThreadStaticFields, ___m_EventSourceExceptionRecurenceCount_19)); }
	inline uint8_t get_m_EventSourceExceptionRecurenceCount_19() const { return ___m_EventSourceExceptionRecurenceCount_19; }
	inline uint8_t* get_address_of_m_EventSourceExceptionRecurenceCount_19() { return &___m_EventSourceExceptionRecurenceCount_19; }
	inline void set_m_EventSourceExceptionRecurenceCount_19(uint8_t value)
	{
		___m_EventSourceExceptionRecurenceCount_19 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____syncContext_0;
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContextNoFlow
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____syncContextNoFlow_1;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Threading.ExecutionContext::_logicalCallContext
	LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * ____logicalCallContext_2;
	// System.Runtime.Remoting.Messaging.IllogicalCallContext System.Threading.ExecutionContext::_illogicalCallContext
	IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * ____illogicalCallContext_3;
	// System.Threading.ExecutionContext/Flags System.Threading.ExecutionContext::_flags
	int32_t ____flags_4;
	// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object> System.Threading.ExecutionContext::_localValues
	Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * ____localValues_5;
	// System.Collections.Generic.List`1<System.Threading.IAsyncLocal> System.Threading.ExecutionContext::_localChangeNotifications
	List_1_t053589A158AAF0B471CF80825616560409AF43D4 * ____localChangeNotifications_6;

public:
	inline static int32_t get_offset_of__syncContext_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____syncContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__syncContext_0() const { return ____syncContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__syncContext_0() { return &____syncContext_0; }
	inline void set__syncContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____syncContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncContext_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncContextNoFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____syncContextNoFlow_1)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__syncContextNoFlow_1() const { return ____syncContextNoFlow_1; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__syncContextNoFlow_1() { return &____syncContextNoFlow_1; }
	inline void set__syncContextNoFlow_1(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____syncContextNoFlow_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncContextNoFlow_1), (void*)value);
	}

	inline static int32_t get_offset_of__logicalCallContext_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____logicalCallContext_2)); }
	inline LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * get__logicalCallContext_2() const { return ____logicalCallContext_2; }
	inline LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 ** get_address_of__logicalCallContext_2() { return &____logicalCallContext_2; }
	inline void set__logicalCallContext_2(LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * value)
	{
		____logicalCallContext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicalCallContext_2), (void*)value);
	}

	inline static int32_t get_offset_of__illogicalCallContext_3() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____illogicalCallContext_3)); }
	inline IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * get__illogicalCallContext_3() const { return ____illogicalCallContext_3; }
	inline IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E ** get_address_of__illogicalCallContext_3() { return &____illogicalCallContext_3; }
	inline void set__illogicalCallContext_3(IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * value)
	{
		____illogicalCallContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____illogicalCallContext_3), (void*)value);
	}

	inline static int32_t get_offset_of__flags_4() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____flags_4)); }
	inline int32_t get__flags_4() const { return ____flags_4; }
	inline int32_t* get_address_of__flags_4() { return &____flags_4; }
	inline void set__flags_4(int32_t value)
	{
		____flags_4 = value;
	}

	inline static int32_t get_offset_of__localValues_5() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____localValues_5)); }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * get__localValues_5() const { return ____localValues_5; }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 ** get_address_of__localValues_5() { return &____localValues_5; }
	inline void set__localValues_5(Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * value)
	{
		____localValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localValues_5), (void*)value);
	}

	inline static int32_t get_offset_of__localChangeNotifications_6() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____localChangeNotifications_6)); }
	inline List_1_t053589A158AAF0B471CF80825616560409AF43D4 * get__localChangeNotifications_6() const { return ____localChangeNotifications_6; }
	inline List_1_t053589A158AAF0B471CF80825616560409AF43D4 ** get_address_of__localChangeNotifications_6() { return &____localChangeNotifications_6; }
	inline void set__localChangeNotifications_6(List_1_t053589A158AAF0B471CF80825616560409AF43D4 * value)
	{
		____localChangeNotifications_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localChangeNotifications_6), (void*)value);
	}
};

struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_StaticFields
{
public:
	// System.Threading.ExecutionContext System.Threading.ExecutionContext::s_dummyDefaultEC
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___s_dummyDefaultEC_7;

public:
	inline static int32_t get_offset_of_s_dummyDefaultEC_7() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_StaticFields, ___s_dummyDefaultEC_7)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_s_dummyDefaultEC_7() const { return ___s_dummyDefaultEC_7; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_s_dummyDefaultEC_7() { return &___s_dummyDefaultEC_7; }
	inline void set_s_dummyDefaultEC_7(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___s_dummyDefaultEC_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyDefaultEC_7), (void*)value);
	}
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t093531A22CC9FCFCA718CA9048E8C1EA4A9BEF02  : public BaseEventSystem_tDD2BE7105F6C0C841CA36C6899B2899525BECCD5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t093531A22CC9FCFCA718CA9048E8C1EA4A9BEF02, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider
struct FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B  : public BaseCoreSystem_t093531A22CC9FCFCA718CA9048E8C1EA4A9BEF02
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pointers
	Dictionary_2_tA8C8FFB7A47C9FB7B674C55FD89E22DE745F3817 * ___pointers_21;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pointersList
	List_1_t38912F902D9C744F820377C455C418170687B159 * ___pointersList_22;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingOverallFocusEnterSet
	HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * ___pendingOverallFocusEnterSet_23;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingOverallFocusExitSet
	Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * ___pendingOverallFocusExitSet_24;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingPointerSpecificFocusChange
	List_1_t38912F902D9C744F820377C455C418170687B159 * ___pendingPointerSpecificFocusChange_25;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pointerMediators
	Dictionary_2_t61D48E9743D3D1BFB65A51CFC11E34C427D9CB37 * ___pointerMediators_26;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::hitResult3d
	PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * ___hitResult3d_27;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::hitResultUi
	PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * ___hitResultUi_28;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.FocusProvider::inputSystemProfile
	MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * ___inputSystemProfile_29;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::maxQuerySceneResults
	int32_t ___maxQuerySceneResults_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider::shouldUseGraphicsRaycast
	bool ___shouldUseGraphicsRaycast_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_32;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::<NumNearPointersActive>k__BackingField
	int32_t ___U3CNumNearPointersActiveU3Ek__BackingField_33;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::<NumFarPointersActive>k__BackingField
	int32_t ___U3CNumFarPointersActiveU3Ek__BackingField_34;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusProvider::primaryPointer
	RuntimeObject* ___primaryPointer_35;
	// System.String Microsoft.MixedReality.Toolkit.Input.FocusProvider::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_36;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.FocusProvider::focusLayerMasks
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___focusLayerMasks_37;
	// UnityEngine.RenderTexture Microsoft.MixedReality.Toolkit.Input.FocusProvider::uiRaycastCameraTargetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___uiRaycastCameraTargetTexture_38;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.FocusProvider::uiRaycastCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___uiRaycastCamera_39;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider::newUiRaycastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newUiRaycastPosition_40;
	// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazePointerStateMachine
	GazePointerVisibilityStateMachine_t1014214D167062CC7B80D26EC79B67A0FCFA3E33 * ___gazePointerStateMachine_41;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPrimaryPointerSelector Microsoft.MixedReality.Toolkit.Input.FocusProvider::primaryPointerSelector
	RuntimeObject* ___primaryPointerSelector_42;
	// Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler Microsoft.MixedReality.Toolkit.Input.FocusProvider::PrimaryPointerChanged
	PrimaryPointerChangedHandler_tCBBBBD55175D6B1274E81A1659083A3D818C30A4 * ___PrimaryPointerChanged_43;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Input.FocusProvider::inputSystem
	RuntimeObject* ___inputSystem_44;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazeProviderPointingData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___gazeProviderPointingData_47;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazeHitResult
	PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * ___gazeHitResult_48;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences> Microsoft.MixedReality.Toolkit.Input.FocusProvider::customPointerBehaviors
	List_1_t20A03C0EAD3AC0F8F21ADF1230E047F1F37A1950 * ___customPointerBehaviors_68;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider::<GazePointerBehavior>k__BackingField
	int32_t ___U3CGazePointerBehaviorU3Ek__BackingField_69;

public:
	inline static int32_t get_offset_of_pointers_21() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___pointers_21)); }
	inline Dictionary_2_tA8C8FFB7A47C9FB7B674C55FD89E22DE745F3817 * get_pointers_21() const { return ___pointers_21; }
	inline Dictionary_2_tA8C8FFB7A47C9FB7B674C55FD89E22DE745F3817 ** get_address_of_pointers_21() { return &___pointers_21; }
	inline void set_pointers_21(Dictionary_2_tA8C8FFB7A47C9FB7B674C55FD89E22DE745F3817 * value)
	{
		___pointers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointers_21), (void*)value);
	}

	inline static int32_t get_offset_of_pointersList_22() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___pointersList_22)); }
	inline List_1_t38912F902D9C744F820377C455C418170687B159 * get_pointersList_22() const { return ___pointersList_22; }
	inline List_1_t38912F902D9C744F820377C455C418170687B159 ** get_address_of_pointersList_22() { return &___pointersList_22; }
	inline void set_pointersList_22(List_1_t38912F902D9C744F820377C455C418170687B159 * value)
	{
		___pointersList_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersList_22), (void*)value);
	}

	inline static int32_t get_offset_of_pendingOverallFocusEnterSet_23() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___pendingOverallFocusEnterSet_23)); }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * get_pendingOverallFocusEnterSet_23() const { return ___pendingOverallFocusEnterSet_23; }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 ** get_address_of_pendingOverallFocusEnterSet_23() { return &___pendingOverallFocusEnterSet_23; }
	inline void set_pendingOverallFocusEnterSet_23(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * value)
	{
		___pendingOverallFocusEnterSet_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingOverallFocusEnterSet_23), (void*)value);
	}

	inline static int32_t get_offset_of_pendingOverallFocusExitSet_24() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___pendingOverallFocusExitSet_24)); }
	inline Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * get_pendingOverallFocusExitSet_24() const { return ___pendingOverallFocusExitSet_24; }
	inline Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B ** get_address_of_pendingOverallFocusExitSet_24() { return &___pendingOverallFocusExitSet_24; }
	inline void set_pendingOverallFocusExitSet_24(Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * value)
	{
		___pendingOverallFocusExitSet_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingOverallFocusExitSet_24), (void*)value);
	}

	inline static int32_t get_offset_of_pendingPointerSpecificFocusChange_25() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___pendingPointerSpecificFocusChange_25)); }
	inline List_1_t38912F902D9C744F820377C455C418170687B159 * get_pendingPointerSpecificFocusChange_25() const { return ___pendingPointerSpecificFocusChange_25; }
	inline List_1_t38912F902D9C744F820377C455C418170687B159 ** get_address_of_pendingPointerSpecificFocusChange_25() { return &___pendingPointerSpecificFocusChange_25; }
	inline void set_pendingPointerSpecificFocusChange_25(List_1_t38912F902D9C744F820377C455C418170687B159 * value)
	{
		___pendingPointerSpecificFocusChange_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingPointerSpecificFocusChange_25), (void*)value);
	}

	inline static int32_t get_offset_of_pointerMediators_26() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___pointerMediators_26)); }
	inline Dictionary_2_t61D48E9743D3D1BFB65A51CFC11E34C427D9CB37 * get_pointerMediators_26() const { return ___pointerMediators_26; }
	inline Dictionary_2_t61D48E9743D3D1BFB65A51CFC11E34C427D9CB37 ** get_address_of_pointerMediators_26() { return &___pointerMediators_26; }
	inline void set_pointerMediators_26(Dictionary_2_t61D48E9743D3D1BFB65A51CFC11E34C427D9CB37 * value)
	{
		___pointerMediators_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerMediators_26), (void*)value);
	}

	inline static int32_t get_offset_of_hitResult3d_27() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___hitResult3d_27)); }
	inline PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * get_hitResult3d_27() const { return ___hitResult3d_27; }
	inline PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 ** get_address_of_hitResult3d_27() { return &___hitResult3d_27; }
	inline void set_hitResult3d_27(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * value)
	{
		___hitResult3d_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitResult3d_27), (void*)value);
	}

	inline static int32_t get_offset_of_hitResultUi_28() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___hitResultUi_28)); }
	inline PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * get_hitResultUi_28() const { return ___hitResultUi_28; }
	inline PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 ** get_address_of_hitResultUi_28() { return &___hitResultUi_28; }
	inline void set_hitResultUi_28(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * value)
	{
		___hitResultUi_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitResultUi_28), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_29() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___inputSystemProfile_29)); }
	inline MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * get_inputSystemProfile_29() const { return ___inputSystemProfile_29; }
	inline MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 ** get_address_of_inputSystemProfile_29() { return &___inputSystemProfile_29; }
	inline void set_inputSystemProfile_29(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * value)
	{
		___inputSystemProfile_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_29), (void*)value);
	}

	inline static int32_t get_offset_of_maxQuerySceneResults_30() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___maxQuerySceneResults_30)); }
	inline int32_t get_maxQuerySceneResults_30() const { return ___maxQuerySceneResults_30; }
	inline int32_t* get_address_of_maxQuerySceneResults_30() { return &___maxQuerySceneResults_30; }
	inline void set_maxQuerySceneResults_30(int32_t value)
	{
		___maxQuerySceneResults_30 = value;
	}

	inline static int32_t get_offset_of_shouldUseGraphicsRaycast_31() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___shouldUseGraphicsRaycast_31)); }
	inline bool get_shouldUseGraphicsRaycast_31() const { return ___shouldUseGraphicsRaycast_31; }
	inline bool* get_address_of_shouldUseGraphicsRaycast_31() { return &___shouldUseGraphicsRaycast_31; }
	inline void set_shouldUseGraphicsRaycast_31(bool value)
	{
		___shouldUseGraphicsRaycast_31 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_32() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___focusIndividualCompoundCollider_32)); }
	inline bool get_focusIndividualCompoundCollider_32() const { return ___focusIndividualCompoundCollider_32; }
	inline bool* get_address_of_focusIndividualCompoundCollider_32() { return &___focusIndividualCompoundCollider_32; }
	inline void set_focusIndividualCompoundCollider_32(bool value)
	{
		___focusIndividualCompoundCollider_32 = value;
	}

	inline static int32_t get_offset_of_U3CNumNearPointersActiveU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___U3CNumNearPointersActiveU3Ek__BackingField_33)); }
	inline int32_t get_U3CNumNearPointersActiveU3Ek__BackingField_33() const { return ___U3CNumNearPointersActiveU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CNumNearPointersActiveU3Ek__BackingField_33() { return &___U3CNumNearPointersActiveU3Ek__BackingField_33; }
	inline void set_U3CNumNearPointersActiveU3Ek__BackingField_33(int32_t value)
	{
		___U3CNumNearPointersActiveU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CNumFarPointersActiveU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___U3CNumFarPointersActiveU3Ek__BackingField_34)); }
	inline int32_t get_U3CNumFarPointersActiveU3Ek__BackingField_34() const { return ___U3CNumFarPointersActiveU3Ek__BackingField_34; }
	inline int32_t* get_address_of_U3CNumFarPointersActiveU3Ek__BackingField_34() { return &___U3CNumFarPointersActiveU3Ek__BackingField_34; }
	inline void set_U3CNumFarPointersActiveU3Ek__BackingField_34(int32_t value)
	{
		___U3CNumFarPointersActiveU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_primaryPointer_35() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___primaryPointer_35)); }
	inline RuntimeObject* get_primaryPointer_35() const { return ___primaryPointer_35; }
	inline RuntimeObject** get_address_of_primaryPointer_35() { return &___primaryPointer_35; }
	inline void set_primaryPointer_35(RuntimeObject* value)
	{
		___primaryPointer_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryPointer_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___U3CNameU3Ek__BackingField_36)); }
	inline String_t* get_U3CNameU3Ek__BackingField_36() const { return ___U3CNameU3Ek__BackingField_36; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_36() { return &___U3CNameU3Ek__BackingField_36; }
	inline void set_U3CNameU3Ek__BackingField_36(String_t* value)
	{
		___U3CNameU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_focusLayerMasks_37() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___focusLayerMasks_37)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_focusLayerMasks_37() const { return ___focusLayerMasks_37; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_focusLayerMasks_37() { return &___focusLayerMasks_37; }
	inline void set_focusLayerMasks_37(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___focusLayerMasks_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusLayerMasks_37), (void*)value);
	}

	inline static int32_t get_offset_of_uiRaycastCameraTargetTexture_38() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___uiRaycastCameraTargetTexture_38)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_uiRaycastCameraTargetTexture_38() const { return ___uiRaycastCameraTargetTexture_38; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_uiRaycastCameraTargetTexture_38() { return &___uiRaycastCameraTargetTexture_38; }
	inline void set_uiRaycastCameraTargetTexture_38(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___uiRaycastCameraTargetTexture_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiRaycastCameraTargetTexture_38), (void*)value);
	}

	inline static int32_t get_offset_of_uiRaycastCamera_39() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___uiRaycastCamera_39)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_uiRaycastCamera_39() const { return ___uiRaycastCamera_39; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_uiRaycastCamera_39() { return &___uiRaycastCamera_39; }
	inline void set_uiRaycastCamera_39(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___uiRaycastCamera_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiRaycastCamera_39), (void*)value);
	}

	inline static int32_t get_offset_of_newUiRaycastPosition_40() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___newUiRaycastPosition_40)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newUiRaycastPosition_40() const { return ___newUiRaycastPosition_40; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newUiRaycastPosition_40() { return &___newUiRaycastPosition_40; }
	inline void set_newUiRaycastPosition_40(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newUiRaycastPosition_40 = value;
	}

	inline static int32_t get_offset_of_gazePointerStateMachine_41() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___gazePointerStateMachine_41)); }
	inline GazePointerVisibilityStateMachine_t1014214D167062CC7B80D26EC79B67A0FCFA3E33 * get_gazePointerStateMachine_41() const { return ___gazePointerStateMachine_41; }
	inline GazePointerVisibilityStateMachine_t1014214D167062CC7B80D26EC79B67A0FCFA3E33 ** get_address_of_gazePointerStateMachine_41() { return &___gazePointerStateMachine_41; }
	inline void set_gazePointerStateMachine_41(GazePointerVisibilityStateMachine_t1014214D167062CC7B80D26EC79B67A0FCFA3E33 * value)
	{
		___gazePointerStateMachine_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazePointerStateMachine_41), (void*)value);
	}

	inline static int32_t get_offset_of_primaryPointerSelector_42() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___primaryPointerSelector_42)); }
	inline RuntimeObject* get_primaryPointerSelector_42() const { return ___primaryPointerSelector_42; }
	inline RuntimeObject** get_address_of_primaryPointerSelector_42() { return &___primaryPointerSelector_42; }
	inline void set_primaryPointerSelector_42(RuntimeObject* value)
	{
		___primaryPointerSelector_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryPointerSelector_42), (void*)value);
	}

	inline static int32_t get_offset_of_PrimaryPointerChanged_43() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___PrimaryPointerChanged_43)); }
	inline PrimaryPointerChangedHandler_tCBBBBD55175D6B1274E81A1659083A3D818C30A4 * get_PrimaryPointerChanged_43() const { return ___PrimaryPointerChanged_43; }
	inline PrimaryPointerChangedHandler_tCBBBBD55175D6B1274E81A1659083A3D818C30A4 ** get_address_of_PrimaryPointerChanged_43() { return &___PrimaryPointerChanged_43; }
	inline void set_PrimaryPointerChanged_43(PrimaryPointerChangedHandler_tCBBBBD55175D6B1274E81A1659083A3D818C30A4 * value)
	{
		___PrimaryPointerChanged_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrimaryPointerChanged_43), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystem_44() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___inputSystem_44)); }
	inline RuntimeObject* get_inputSystem_44() const { return ___inputSystem_44; }
	inline RuntimeObject** get_address_of_inputSystem_44() { return &___inputSystem_44; }
	inline void set_inputSystem_44(RuntimeObject* value)
	{
		___inputSystem_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystem_44), (void*)value);
	}

	inline static int32_t get_offset_of_gazeProviderPointingData_47() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___gazeProviderPointingData_47)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_gazeProviderPointingData_47() const { return ___gazeProviderPointingData_47; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_gazeProviderPointingData_47() { return &___gazeProviderPointingData_47; }
	inline void set_gazeProviderPointingData_47(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___gazeProviderPointingData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeProviderPointingData_47), (void*)value);
	}

	inline static int32_t get_offset_of_gazeHitResult_48() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___gazeHitResult_48)); }
	inline PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * get_gazeHitResult_48() const { return ___gazeHitResult_48; }
	inline PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 ** get_address_of_gazeHitResult_48() { return &___gazeHitResult_48; }
	inline void set_gazeHitResult_48(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * value)
	{
		___gazeHitResult_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeHitResult_48), (void*)value);
	}

	inline static int32_t get_offset_of_customPointerBehaviors_68() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___customPointerBehaviors_68)); }
	inline List_1_t20A03C0EAD3AC0F8F21ADF1230E047F1F37A1950 * get_customPointerBehaviors_68() const { return ___customPointerBehaviors_68; }
	inline List_1_t20A03C0EAD3AC0F8F21ADF1230E047F1F37A1950 ** get_address_of_customPointerBehaviors_68() { return &___customPointerBehaviors_68; }
	inline void set_customPointerBehaviors_68(List_1_t20A03C0EAD3AC0F8F21ADF1230E047F1F37A1950 * value)
	{
		___customPointerBehaviors_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customPointerBehaviors_68), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazePointerBehaviorU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B, ___U3CGazePointerBehaviorU3Ek__BackingField_69)); }
	inline int32_t get_U3CGazePointerBehaviorU3Ek__BackingField_69() const { return ___U3CGazePointerBehaviorU3Ek__BackingField_69; }
	inline int32_t* get_address_of_U3CGazePointerBehaviorU3Ek__BackingField_69() { return &___U3CGazePointerBehaviorU3Ek__BackingField_69; }
	inline void set_U3CGazePointerBehaviorU3Ek__BackingField_69(int32_t value)
	{
		___U3CGazePointerBehaviorU3Ek__BackingField_69 = value;
	}
};

struct FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_45;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdateGazeProviderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateGazeProviderPerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GetFocusedObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetFocusedObjectPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryGetFocusDetailsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetFocusDetailsPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryOverrideFocusDetailsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryOverrideFocusDetailsPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GenerateNewPointerIdPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GenerateNewPointerIdPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RegisterPointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RegisterPointerPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RegisterPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RegisterPointersPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UnregisterPointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnregisterPointerPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryGetPointerDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetPointerDataPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePointersPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePointerPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GetPrioritizedHitResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetPrioritizedHitResultPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::ReconcilePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReconcilePointersPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::QueryScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___QueryScenePerfMarker_61;
	// UnityEngine.Collider[] Microsoft.MixedReality.Toolkit.Input.FocusProvider::colliders
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___colliders_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RaycastGraphicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaycastGraphicsPerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RaycastGraphicsStepPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaycastGraphicsStepPerfMarker_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdateFocusedObjectsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateFocusedObjectsPerfMarker_65;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::OnSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceDetectedPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::OnSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceLostPerfMarker_67;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_45() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___UpdatePerfMarker_45)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_45() const { return ___UpdatePerfMarker_45; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_45() { return &___UpdatePerfMarker_45; }
	inline void set_UpdatePerfMarker_45(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_45 = value;
	}

	inline static int32_t get_offset_of_UpdateGazeProviderPerfMarker_46() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___UpdateGazeProviderPerfMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateGazeProviderPerfMarker_46() const { return ___UpdateGazeProviderPerfMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateGazeProviderPerfMarker_46() { return &___UpdateGazeProviderPerfMarker_46; }
	inline void set_UpdateGazeProviderPerfMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateGazeProviderPerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_GetFocusedObjectPerfMarker_49() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___GetFocusedObjectPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetFocusedObjectPerfMarker_49() const { return ___GetFocusedObjectPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetFocusedObjectPerfMarker_49() { return &___GetFocusedObjectPerfMarker_49; }
	inline void set_GetFocusedObjectPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetFocusedObjectPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_TryGetFocusDetailsPerfMarker_50() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___TryGetFocusDetailsPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetFocusDetailsPerfMarker_50() const { return ___TryGetFocusDetailsPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetFocusDetailsPerfMarker_50() { return &___TryGetFocusDetailsPerfMarker_50; }
	inline void set_TryGetFocusDetailsPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetFocusDetailsPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_TryOverrideFocusDetailsPerfMarker_51() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___TryOverrideFocusDetailsPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryOverrideFocusDetailsPerfMarker_51() const { return ___TryOverrideFocusDetailsPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryOverrideFocusDetailsPerfMarker_51() { return &___TryOverrideFocusDetailsPerfMarker_51; }
	inline void set_TryOverrideFocusDetailsPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryOverrideFocusDetailsPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_GenerateNewPointerIdPerfMarker_52() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___GenerateNewPointerIdPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GenerateNewPointerIdPerfMarker_52() const { return ___GenerateNewPointerIdPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GenerateNewPointerIdPerfMarker_52() { return &___GenerateNewPointerIdPerfMarker_52; }
	inline void set_GenerateNewPointerIdPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GenerateNewPointerIdPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_RegisterPointerPerfMarker_53() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___RegisterPointerPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RegisterPointerPerfMarker_53() const { return ___RegisterPointerPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RegisterPointerPerfMarker_53() { return &___RegisterPointerPerfMarker_53; }
	inline void set_RegisterPointerPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RegisterPointerPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_RegisterPointersPerfMarker_54() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___RegisterPointersPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RegisterPointersPerfMarker_54() const { return ___RegisterPointersPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RegisterPointersPerfMarker_54() { return &___RegisterPointersPerfMarker_54; }
	inline void set_RegisterPointersPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RegisterPointersPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_UnregisterPointerPerfMarker_55() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___UnregisterPointerPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnregisterPointerPerfMarker_55() const { return ___UnregisterPointerPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnregisterPointerPerfMarker_55() { return &___UnregisterPointerPerfMarker_55; }
	inline void set_UnregisterPointerPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnregisterPointerPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_TryGetPointerDataPerfMarker_56() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___TryGetPointerDataPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetPointerDataPerfMarker_56() const { return ___TryGetPointerDataPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetPointerDataPerfMarker_56() { return &___TryGetPointerDataPerfMarker_56; }
	inline void set_TryGetPointerDataPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetPointerDataPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_UpdatePointersPerfMarker_57() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___UpdatePointersPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePointersPerfMarker_57() const { return ___UpdatePointersPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePointersPerfMarker_57() { return &___UpdatePointersPerfMarker_57; }
	inline void set_UpdatePointersPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePointersPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdatePointerPerfMarker_58() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___UpdatePointerPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePointerPerfMarker_58() const { return ___UpdatePointerPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePointerPerfMarker_58() { return &___UpdatePointerPerfMarker_58; }
	inline void set_UpdatePointerPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePointerPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_GetPrioritizedHitResultPerfMarker_59() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___GetPrioritizedHitResultPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetPrioritizedHitResultPerfMarker_59() const { return ___GetPrioritizedHitResultPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetPrioritizedHitResultPerfMarker_59() { return &___GetPrioritizedHitResultPerfMarker_59; }
	inline void set_GetPrioritizedHitResultPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetPrioritizedHitResultPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_ReconcilePointersPerfMarker_60() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___ReconcilePointersPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReconcilePointersPerfMarker_60() const { return ___ReconcilePointersPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReconcilePointersPerfMarker_60() { return &___ReconcilePointersPerfMarker_60; }
	inline void set_ReconcilePointersPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReconcilePointersPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_QueryScenePerfMarker_61() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___QueryScenePerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_QueryScenePerfMarker_61() const { return ___QueryScenePerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_QueryScenePerfMarker_61() { return &___QueryScenePerfMarker_61; }
	inline void set_QueryScenePerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___QueryScenePerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_colliders_62() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___colliders_62)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_colliders_62() const { return ___colliders_62; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_colliders_62() { return &___colliders_62; }
	inline void set_colliders_62(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___colliders_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_62), (void*)value);
	}

	inline static int32_t get_offset_of_RaycastGraphicsPerfMarker_63() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___RaycastGraphicsPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaycastGraphicsPerfMarker_63() const { return ___RaycastGraphicsPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaycastGraphicsPerfMarker_63() { return &___RaycastGraphicsPerfMarker_63; }
	inline void set_RaycastGraphicsPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaycastGraphicsPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_RaycastGraphicsStepPerfMarker_64() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___RaycastGraphicsStepPerfMarker_64)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaycastGraphicsStepPerfMarker_64() const { return ___RaycastGraphicsStepPerfMarker_64; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaycastGraphicsStepPerfMarker_64() { return &___RaycastGraphicsStepPerfMarker_64; }
	inline void set_RaycastGraphicsStepPerfMarker_64(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaycastGraphicsStepPerfMarker_64 = value;
	}

	inline static int32_t get_offset_of_UpdateFocusedObjectsPerfMarker_65() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___UpdateFocusedObjectsPerfMarker_65)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateFocusedObjectsPerfMarker_65() const { return ___UpdateFocusedObjectsPerfMarker_65; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateFocusedObjectsPerfMarker_65() { return &___UpdateFocusedObjectsPerfMarker_65; }
	inline void set_UpdateFocusedObjectsPerfMarker_65(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateFocusedObjectsPerfMarker_65 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedPerfMarker_66() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___OnSourceDetectedPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceDetectedPerfMarker_66() const { return ___OnSourceDetectedPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceDetectedPerfMarker_66() { return &___OnSourceDetectedPerfMarker_66; }
	inline void set_OnSourceDetectedPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceDetectedPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_67() { return static_cast<int32_t>(offsetof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_StaticFields, ___OnSourceLostPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceLostPerfMarker_67() const { return ___OnSourceLostPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceLostPerfMarker_67() { return &___OnSourceLostPerfMarker_67; }
	inline void set_OnSourceLostPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceLostPerfMarker_67 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);



// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_ComCallableWrapper>, IReference_1_t82B0826F980A0BBB661F5A0C4BD9B330E91AE4C1, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t82B0826F980A0BBB661F5A0C4BD9B330E91AE4C1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t82B0826F980A0BBB661F5A0C4BD9B330E91AE4C1*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t82B0826F980A0BBB661F5A0C4BD9B330E91AE4C1::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mFCD922CB39830ECA5957B4BAC7CAE15DF2ABF0D3(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  returnValue;
		try
		{
			returnValue = *static_cast<EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 *>(UnBox(GetManagedObjectInline(), EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.EventRegistrationToken
struct EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_ComCallableWrapper>, IReference_1_tF1B87B1788B0F90F05EFA35AD46061966A1CDA0E, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tF1B87B1788B0F90F05EFA35AD46061966A1CDA0E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tF1B87B1788B0F90F05EFA35AD46061966A1CDA0E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tF1B87B1788B0F90F05EFA35AD46061966A1CDA0E::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m62FED3523F963FB744D260180C5F7E82E18C5249(EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80  returnValue;
		try
		{
			returnValue = *static_cast<EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80 *>(UnBox(GetManagedObjectInline(), EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventRegistrationToken_t89B2D261C83F93E18C0CA4AC746CCABDBD493A80_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.EventSource
struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Policy.Evidence
struct Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Exception
struct Exception_t_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Exception_t_ComCallableWrapper>, IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Exception_t_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Exception_t_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAA3D5310A328BC7561FCA472E95A3A358367ADBD(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			returnValue = static_cast<Exception_t *>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Exception_t(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Exception_t_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Exception_t_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.FocusProvider
struct FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FocusProvider_t42D5B6EA603A9D945DAEA252914B921B4363A24B_ComCallableWrapper(obj));
}
