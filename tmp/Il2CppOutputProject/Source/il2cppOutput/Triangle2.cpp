#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>
struct Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>
struct Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9;
// System.Func`1<TriangleNet.IPredicates>
struct Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85;
// System.Func`1<TriangleNet.TrianglePool>
struct Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E;
// System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>
struct Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD;
// System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle>
struct IEnumerable_1_t9A6E1D399FA719D00C531640E72ABD1D808184AA;
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>
struct IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24;
// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>
struct ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9;
// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>
struct List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>
struct Stack_1_tD61E39E91DF948FEF880CFB7B5C05BECDBFCC552;
// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>
struct Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA;
// TriangleNet.Topology.Triangle[][]
struct TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TriangleNet.Topology.Osub[]
struct OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629;
// TriangleNet.Topology.Otri[]
struct OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TriangleNet.Topology.Triangle[]
struct TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003;
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70;
// TriangleNet.Behavior
struct Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// TriangleNet.IPredicates
struct IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// TriangleNet.Mesh
struct Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// TriangleNet.Geometry.Point
struct Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73;
// TriangleNet.Meshing.QualityMesher
struct QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// TriangleNet.Geometry.Rectangle
struct Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83;
// TriangleNet.RobustPredicates
struct RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// TriangleNet.Geometry.Segment
struct Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4;
// System.String
struct String_t;
// TriangleNet.Topology.SubSegment
struct SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// TriangleNet.Topology.Triangle
struct Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769;
// TriangleNet.TriangleLocator
struct TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC;
// TriangleNet.TrianglePool
struct TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7;
// TriangleNet.TriangleSampler
struct TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A;
// TriangleNet.Geometry.Vertex
struct Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8;
// TriangleNet.Tools.VertexSorter
struct VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// TriangleNet.Configuration/<>c
struct U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7;
// TriangleNet.Meshing.Iterators.RegionIterator/<>c
struct U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD;
// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E;
// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8;
// TriangleNet.TrianglePool/<Sample>d__9
struct U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917;
// TriangleNet.TrianglePool/Enumerator
struct Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC;

IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9A6E1D399FA719D00C531640E72ABD1D808184AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D;
IL2CPP_EXTERN_C String_t* _stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisTriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_mB44FBF1E88D2D06833E12F2E81021A6A343191ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Segment_GetVertex_m040AF6479EBA2EBB916C7BB04587CB51EA7897D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m404B01AB176E4F0058C225D51A0D2425190BAF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m536BD02DD251E79DF7F12966F9ABD37A3CC6E56E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF5FBDB41C42591BF6A595D5659949DD1A057AA84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m0914A0C5393C5C750B304D97FDEC085F4A24E85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m832EE5E78C80A0454D522E1172123DC49356D8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrianglePool_Add_m8338D5F431E1DCDA542B341555BF150FCFBCAEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrianglePool_Remove_mA26728B675F137898C4655B9B4E7217A56A4D250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSampleU3Ed__9_System_Collections_IEnumerator_Reset_mC48B5E4F1BEE129E7254447641F133E47E0BC7CF_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629;
struct OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175;
struct TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003;
struct VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>
struct Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA, ____array_0)); }
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* get__array_0() const { return ____array_0; }
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// TriangleNet.Mesh
struct Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B  : public RuntimeObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Mesh::predicates
	RuntimeObject* ___predicates_0;
	// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.Mesh::logger
	RuntimeObject* ___logger_1;
	// TriangleNet.Meshing.QualityMesher TriangleNet.Mesh::qualityMesher
	QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * ___qualityMesher_2;
	// System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri> TriangleNet.Mesh::flipstack
	Stack_1_tD61E39E91DF948FEF880CFB7B5C05BECDBFCC552 * ___flipstack_3;
	// TriangleNet.TrianglePool TriangleNet.Mesh::triangles
	TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * ___triangles_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment> TriangleNet.Mesh::subsegs
	Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * ___subsegs_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex> TriangleNet.Mesh::vertices
	Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9 * ___vertices_6;
	// System.Int32 TriangleNet.Mesh::hash_vtx
	int32_t ___hash_vtx_7;
	// System.Int32 TriangleNet.Mesh::hash_seg
	int32_t ___hash_seg_8;
	// System.Int32 TriangleNet.Mesh::hash_tri
	int32_t ___hash_tri_9;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Point> TriangleNet.Mesh::holes
	List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * ___holes_10;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer> TriangleNet.Mesh::regions
	List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * ___regions_11;
	// TriangleNet.Geometry.Rectangle TriangleNet.Mesh::bounds
	Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * ___bounds_12;
	// System.Int32 TriangleNet.Mesh::invertices
	int32_t ___invertices_13;
	// System.Int32 TriangleNet.Mesh::insegments
	int32_t ___insegments_14;
	// System.Int32 TriangleNet.Mesh::undeads
	int32_t ___undeads_15;
	// System.Int32 TriangleNet.Mesh::mesh_dim
	int32_t ___mesh_dim_16;
	// System.Int32 TriangleNet.Mesh::nextras
	int32_t ___nextras_17;
	// System.Int32 TriangleNet.Mesh::hullsize
	int32_t ___hullsize_18;
	// System.Int32 TriangleNet.Mesh::steinerleft
	int32_t ___steinerleft_19;
	// System.Boolean TriangleNet.Mesh::checksegments
	bool ___checksegments_20;
	// System.Boolean TriangleNet.Mesh::checkquality
	bool ___checkquality_21;
	// TriangleNet.Geometry.Vertex TriangleNet.Mesh::infvertex1
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___infvertex1_22;
	// TriangleNet.Geometry.Vertex TriangleNet.Mesh::infvertex2
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___infvertex2_23;
	// TriangleNet.Geometry.Vertex TriangleNet.Mesh::infvertex3
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___infvertex3_24;
	// TriangleNet.TriangleLocator TriangleNet.Mesh::locator
	TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC * ___locator_25;
	// TriangleNet.Behavior TriangleNet.Mesh::behavior
	Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * ___behavior_26;
	// TriangleNet.Topology.Triangle TriangleNet.Mesh::dummytri
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___dummytri_27;
	// TriangleNet.Topology.SubSegment TriangleNet.Mesh::dummysub
	SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___dummysub_28;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___predicates_0)); }
	inline RuntimeObject* get_predicates_0() const { return ___predicates_0; }
	inline RuntimeObject** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(RuntimeObject* value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicates_0), (void*)value);
	}

	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_qualityMesher_2() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___qualityMesher_2)); }
	inline QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * get_qualityMesher_2() const { return ___qualityMesher_2; }
	inline QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 ** get_address_of_qualityMesher_2() { return &___qualityMesher_2; }
	inline void set_qualityMesher_2(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * value)
	{
		___qualityMesher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qualityMesher_2), (void*)value);
	}

	inline static int32_t get_offset_of_flipstack_3() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___flipstack_3)); }
	inline Stack_1_tD61E39E91DF948FEF880CFB7B5C05BECDBFCC552 * get_flipstack_3() const { return ___flipstack_3; }
	inline Stack_1_tD61E39E91DF948FEF880CFB7B5C05BECDBFCC552 ** get_address_of_flipstack_3() { return &___flipstack_3; }
	inline void set_flipstack_3(Stack_1_tD61E39E91DF948FEF880CFB7B5C05BECDBFCC552 * value)
	{
		___flipstack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipstack_3), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___triangles_4)); }
	inline TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * get_triangles_4() const { return ___triangles_4; }
	inline TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 ** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_4), (void*)value);
	}

	inline static int32_t get_offset_of_subsegs_5() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___subsegs_5)); }
	inline Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * get_subsegs_5() const { return ___subsegs_5; }
	inline Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D ** get_address_of_subsegs_5() { return &___subsegs_5; }
	inline void set_subsegs_5(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * value)
	{
		___subsegs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsegs_5), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___vertices_6)); }
	inline Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9 * get_vertices_6() const { return ___vertices_6; }
	inline Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9 ** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9 * value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_hash_vtx_7() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___hash_vtx_7)); }
	inline int32_t get_hash_vtx_7() const { return ___hash_vtx_7; }
	inline int32_t* get_address_of_hash_vtx_7() { return &___hash_vtx_7; }
	inline void set_hash_vtx_7(int32_t value)
	{
		___hash_vtx_7 = value;
	}

	inline static int32_t get_offset_of_hash_seg_8() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___hash_seg_8)); }
	inline int32_t get_hash_seg_8() const { return ___hash_seg_8; }
	inline int32_t* get_address_of_hash_seg_8() { return &___hash_seg_8; }
	inline void set_hash_seg_8(int32_t value)
	{
		___hash_seg_8 = value;
	}

	inline static int32_t get_offset_of_hash_tri_9() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___hash_tri_9)); }
	inline int32_t get_hash_tri_9() const { return ___hash_tri_9; }
	inline int32_t* get_address_of_hash_tri_9() { return &___hash_tri_9; }
	inline void set_hash_tri_9(int32_t value)
	{
		___hash_tri_9 = value;
	}

	inline static int32_t get_offset_of_holes_10() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___holes_10)); }
	inline List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * get_holes_10() const { return ___holes_10; }
	inline List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 ** get_address_of_holes_10() { return &___holes_10; }
	inline void set_holes_10(List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * value)
	{
		___holes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holes_10), (void*)value);
	}

	inline static int32_t get_offset_of_regions_11() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___regions_11)); }
	inline List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * get_regions_11() const { return ___regions_11; }
	inline List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 ** get_address_of_regions_11() { return &___regions_11; }
	inline void set_regions_11(List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * value)
	{
		___regions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regions_11), (void*)value);
	}

	inline static int32_t get_offset_of_bounds_12() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___bounds_12)); }
	inline Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * get_bounds_12() const { return ___bounds_12; }
	inline Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 ** get_address_of_bounds_12() { return &___bounds_12; }
	inline void set_bounds_12(Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * value)
	{
		___bounds_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bounds_12), (void*)value);
	}

	inline static int32_t get_offset_of_invertices_13() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___invertices_13)); }
	inline int32_t get_invertices_13() const { return ___invertices_13; }
	inline int32_t* get_address_of_invertices_13() { return &___invertices_13; }
	inline void set_invertices_13(int32_t value)
	{
		___invertices_13 = value;
	}

	inline static int32_t get_offset_of_insegments_14() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___insegments_14)); }
	inline int32_t get_insegments_14() const { return ___insegments_14; }
	inline int32_t* get_address_of_insegments_14() { return &___insegments_14; }
	inline void set_insegments_14(int32_t value)
	{
		___insegments_14 = value;
	}

	inline static int32_t get_offset_of_undeads_15() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___undeads_15)); }
	inline int32_t get_undeads_15() const { return ___undeads_15; }
	inline int32_t* get_address_of_undeads_15() { return &___undeads_15; }
	inline void set_undeads_15(int32_t value)
	{
		___undeads_15 = value;
	}

	inline static int32_t get_offset_of_mesh_dim_16() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___mesh_dim_16)); }
	inline int32_t get_mesh_dim_16() const { return ___mesh_dim_16; }
	inline int32_t* get_address_of_mesh_dim_16() { return &___mesh_dim_16; }
	inline void set_mesh_dim_16(int32_t value)
	{
		___mesh_dim_16 = value;
	}

	inline static int32_t get_offset_of_nextras_17() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___nextras_17)); }
	inline int32_t get_nextras_17() const { return ___nextras_17; }
	inline int32_t* get_address_of_nextras_17() { return &___nextras_17; }
	inline void set_nextras_17(int32_t value)
	{
		___nextras_17 = value;
	}

	inline static int32_t get_offset_of_hullsize_18() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___hullsize_18)); }
	inline int32_t get_hullsize_18() const { return ___hullsize_18; }
	inline int32_t* get_address_of_hullsize_18() { return &___hullsize_18; }
	inline void set_hullsize_18(int32_t value)
	{
		___hullsize_18 = value;
	}

	inline static int32_t get_offset_of_steinerleft_19() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___steinerleft_19)); }
	inline int32_t get_steinerleft_19() const { return ___steinerleft_19; }
	inline int32_t* get_address_of_steinerleft_19() { return &___steinerleft_19; }
	inline void set_steinerleft_19(int32_t value)
	{
		___steinerleft_19 = value;
	}

	inline static int32_t get_offset_of_checksegments_20() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___checksegments_20)); }
	inline bool get_checksegments_20() const { return ___checksegments_20; }
	inline bool* get_address_of_checksegments_20() { return &___checksegments_20; }
	inline void set_checksegments_20(bool value)
	{
		___checksegments_20 = value;
	}

	inline static int32_t get_offset_of_checkquality_21() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___checkquality_21)); }
	inline bool get_checkquality_21() const { return ___checkquality_21; }
	inline bool* get_address_of_checkquality_21() { return &___checkquality_21; }
	inline void set_checkquality_21(bool value)
	{
		___checkquality_21 = value;
	}

	inline static int32_t get_offset_of_infvertex1_22() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___infvertex1_22)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_infvertex1_22() const { return ___infvertex1_22; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_infvertex1_22() { return &___infvertex1_22; }
	inline void set_infvertex1_22(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___infvertex1_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infvertex1_22), (void*)value);
	}

	inline static int32_t get_offset_of_infvertex2_23() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___infvertex2_23)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_infvertex2_23() const { return ___infvertex2_23; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_infvertex2_23() { return &___infvertex2_23; }
	inline void set_infvertex2_23(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___infvertex2_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infvertex2_23), (void*)value);
	}

	inline static int32_t get_offset_of_infvertex3_24() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___infvertex3_24)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_infvertex3_24() const { return ___infvertex3_24; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_infvertex3_24() { return &___infvertex3_24; }
	inline void set_infvertex3_24(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___infvertex3_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infvertex3_24), (void*)value);
	}

	inline static int32_t get_offset_of_locator_25() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___locator_25)); }
	inline TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC * get_locator_25() const { return ___locator_25; }
	inline TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC ** get_address_of_locator_25() { return &___locator_25; }
	inline void set_locator_25(TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC * value)
	{
		___locator_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locator_25), (void*)value);
	}

	inline static int32_t get_offset_of_behavior_26() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___behavior_26)); }
	inline Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * get_behavior_26() const { return ___behavior_26; }
	inline Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 ** get_address_of_behavior_26() { return &___behavior_26; }
	inline void set_behavior_26(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * value)
	{
		___behavior_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___behavior_26), (void*)value);
	}

	inline static int32_t get_offset_of_dummytri_27() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___dummytri_27)); }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * get_dummytri_27() const { return ___dummytri_27; }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** get_address_of_dummytri_27() { return &___dummytri_27; }
	inline void set_dummytri_27(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		___dummytri_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dummytri_27), (void*)value);
	}

	inline static int32_t get_offset_of_dummysub_28() { return static_cast<int32_t>(offsetof(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B, ___dummysub_28)); }
	inline SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * get_dummysub_28() const { return ___dummysub_28; }
	inline SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A ** get_address_of_dummysub_28() { return &___dummysub_28; }
	inline void set_dummysub_28(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * value)
	{
		___dummysub_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dummysub_28), (void*)value);
	}
};


// TriangleNet.Geometry.Point
struct Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Geometry.Point::id
	int32_t ___id_0;
	// System.Int32 TriangleNet.Geometry.Point::label
	int32_t ___label_1;
	// System.Double TriangleNet.Geometry.Point::x
	double ___x_2;
	// System.Double TriangleNet.Geometry.Point::y
	double ___y_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_label_1() { return static_cast<int32_t>(offsetof(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73, ___label_1)); }
	inline int32_t get_label_1() const { return ___label_1; }
	inline int32_t* get_address_of_label_1() { return &___label_1; }
	inline void set_label_1(int32_t value)
	{
		___label_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73, ___x_2)); }
	inline double get_x_2() const { return ___x_2; }
	inline double* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(double value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73, ___y_3)); }
	inline double get_y_3() const { return ___y_3; }
	inline double* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(double value)
	{
		___y_3 = value;
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// TriangleNet.RobustPredicates
struct RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D  : public RuntimeObject
{
public:
	// System.Double[] TriangleNet.RobustPredicates::fin1
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___fin1_11;
	// System.Double[] TriangleNet.RobustPredicates::fin2
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___fin2_12;
	// System.Double[] TriangleNet.RobustPredicates::abdet
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___abdet_13;
	// System.Double[] TriangleNet.RobustPredicates::axbc
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___axbc_14;
	// System.Double[] TriangleNet.RobustPredicates::axxbc
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___axxbc_15;
	// System.Double[] TriangleNet.RobustPredicates::aybc
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___aybc_16;
	// System.Double[] TriangleNet.RobustPredicates::ayybc
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___ayybc_17;
	// System.Double[] TriangleNet.RobustPredicates::adet
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___adet_18;
	// System.Double[] TriangleNet.RobustPredicates::bxca
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___bxca_19;
	// System.Double[] TriangleNet.RobustPredicates::bxxca
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___bxxca_20;
	// System.Double[] TriangleNet.RobustPredicates::byca
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___byca_21;
	// System.Double[] TriangleNet.RobustPredicates::byyca
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___byyca_22;
	// System.Double[] TriangleNet.RobustPredicates::bdet
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___bdet_23;
	// System.Double[] TriangleNet.RobustPredicates::cxab
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___cxab_24;
	// System.Double[] TriangleNet.RobustPredicates::cxxab
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___cxxab_25;
	// System.Double[] TriangleNet.RobustPredicates::cyab
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___cyab_26;
	// System.Double[] TriangleNet.RobustPredicates::cyyab
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___cyyab_27;
	// System.Double[] TriangleNet.RobustPredicates::cdet
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___cdet_28;
	// System.Double[] TriangleNet.RobustPredicates::temp8
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___temp8_29;
	// System.Double[] TriangleNet.RobustPredicates::temp16a
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___temp16a_30;
	// System.Double[] TriangleNet.RobustPredicates::temp16b
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___temp16b_31;
	// System.Double[] TriangleNet.RobustPredicates::temp16c
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___temp16c_32;
	// System.Double[] TriangleNet.RobustPredicates::temp32a
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___temp32a_33;
	// System.Double[] TriangleNet.RobustPredicates::temp32b
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___temp32b_34;
	// System.Double[] TriangleNet.RobustPredicates::temp48
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___temp48_35;
	// System.Double[] TriangleNet.RobustPredicates::temp64
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___temp64_36;

public:
	inline static int32_t get_offset_of_fin1_11() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___fin1_11)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_fin1_11() const { return ___fin1_11; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_fin1_11() { return &___fin1_11; }
	inline void set_fin1_11(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___fin1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fin1_11), (void*)value);
	}

	inline static int32_t get_offset_of_fin2_12() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___fin2_12)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_fin2_12() const { return ___fin2_12; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_fin2_12() { return &___fin2_12; }
	inline void set_fin2_12(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___fin2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fin2_12), (void*)value);
	}

	inline static int32_t get_offset_of_abdet_13() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___abdet_13)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_abdet_13() const { return ___abdet_13; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_abdet_13() { return &___abdet_13; }
	inline void set_abdet_13(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___abdet_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abdet_13), (void*)value);
	}

	inline static int32_t get_offset_of_axbc_14() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___axbc_14)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_axbc_14() const { return ___axbc_14; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_axbc_14() { return &___axbc_14; }
	inline void set_axbc_14(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___axbc_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axbc_14), (void*)value);
	}

	inline static int32_t get_offset_of_axxbc_15() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___axxbc_15)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_axxbc_15() const { return ___axxbc_15; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_axxbc_15() { return &___axxbc_15; }
	inline void set_axxbc_15(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___axxbc_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axxbc_15), (void*)value);
	}

	inline static int32_t get_offset_of_aybc_16() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___aybc_16)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_aybc_16() const { return ___aybc_16; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_aybc_16() { return &___aybc_16; }
	inline void set_aybc_16(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___aybc_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aybc_16), (void*)value);
	}

	inline static int32_t get_offset_of_ayybc_17() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___ayybc_17)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_ayybc_17() const { return ___ayybc_17; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_ayybc_17() { return &___ayybc_17; }
	inline void set_ayybc_17(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___ayybc_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ayybc_17), (void*)value);
	}

	inline static int32_t get_offset_of_adet_18() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___adet_18)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_adet_18() const { return ___adet_18; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_adet_18() { return &___adet_18; }
	inline void set_adet_18(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___adet_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adet_18), (void*)value);
	}

	inline static int32_t get_offset_of_bxca_19() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___bxca_19)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_bxca_19() const { return ___bxca_19; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_bxca_19() { return &___bxca_19; }
	inline void set_bxca_19(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___bxca_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bxca_19), (void*)value);
	}

	inline static int32_t get_offset_of_bxxca_20() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___bxxca_20)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_bxxca_20() const { return ___bxxca_20; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_bxxca_20() { return &___bxxca_20; }
	inline void set_bxxca_20(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___bxxca_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bxxca_20), (void*)value);
	}

	inline static int32_t get_offset_of_byca_21() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___byca_21)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_byca_21() const { return ___byca_21; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_byca_21() { return &___byca_21; }
	inline void set_byca_21(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___byca_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byca_21), (void*)value);
	}

	inline static int32_t get_offset_of_byyca_22() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___byyca_22)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_byyca_22() const { return ___byyca_22; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_byyca_22() { return &___byyca_22; }
	inline void set_byyca_22(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___byyca_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byyca_22), (void*)value);
	}

	inline static int32_t get_offset_of_bdet_23() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___bdet_23)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_bdet_23() const { return ___bdet_23; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_bdet_23() { return &___bdet_23; }
	inline void set_bdet_23(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___bdet_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bdet_23), (void*)value);
	}

	inline static int32_t get_offset_of_cxab_24() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___cxab_24)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_cxab_24() const { return ___cxab_24; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_cxab_24() { return &___cxab_24; }
	inline void set_cxab_24(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___cxab_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cxab_24), (void*)value);
	}

	inline static int32_t get_offset_of_cxxab_25() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___cxxab_25)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_cxxab_25() const { return ___cxxab_25; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_cxxab_25() { return &___cxxab_25; }
	inline void set_cxxab_25(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___cxxab_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cxxab_25), (void*)value);
	}

	inline static int32_t get_offset_of_cyab_26() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___cyab_26)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_cyab_26() const { return ___cyab_26; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_cyab_26() { return &___cyab_26; }
	inline void set_cyab_26(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___cyab_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cyab_26), (void*)value);
	}

	inline static int32_t get_offset_of_cyyab_27() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___cyyab_27)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_cyyab_27() const { return ___cyyab_27; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_cyyab_27() { return &___cyyab_27; }
	inline void set_cyyab_27(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___cyyab_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cyyab_27), (void*)value);
	}

	inline static int32_t get_offset_of_cdet_28() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___cdet_28)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_cdet_28() const { return ___cdet_28; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_cdet_28() { return &___cdet_28; }
	inline void set_cdet_28(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___cdet_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cdet_28), (void*)value);
	}

	inline static int32_t get_offset_of_temp8_29() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___temp8_29)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_temp8_29() const { return ___temp8_29; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_temp8_29() { return &___temp8_29; }
	inline void set_temp8_29(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___temp8_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp8_29), (void*)value);
	}

	inline static int32_t get_offset_of_temp16a_30() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___temp16a_30)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_temp16a_30() const { return ___temp16a_30; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_temp16a_30() { return &___temp16a_30; }
	inline void set_temp16a_30(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___temp16a_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp16a_30), (void*)value);
	}

	inline static int32_t get_offset_of_temp16b_31() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___temp16b_31)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_temp16b_31() const { return ___temp16b_31; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_temp16b_31() { return &___temp16b_31; }
	inline void set_temp16b_31(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___temp16b_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp16b_31), (void*)value);
	}

	inline static int32_t get_offset_of_temp16c_32() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___temp16c_32)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_temp16c_32() const { return ___temp16c_32; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_temp16c_32() { return &___temp16c_32; }
	inline void set_temp16c_32(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___temp16c_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp16c_32), (void*)value);
	}

	inline static int32_t get_offset_of_temp32a_33() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___temp32a_33)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_temp32a_33() const { return ___temp32a_33; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_temp32a_33() { return &___temp32a_33; }
	inline void set_temp32a_33(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___temp32a_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp32a_33), (void*)value);
	}

	inline static int32_t get_offset_of_temp32b_34() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___temp32b_34)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_temp32b_34() const { return ___temp32b_34; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_temp32b_34() { return &___temp32b_34; }
	inline void set_temp32b_34(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___temp32b_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp32b_34), (void*)value);
	}

	inline static int32_t get_offset_of_temp48_35() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___temp48_35)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_temp48_35() const { return ___temp48_35; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_temp48_35() { return &___temp48_35; }
	inline void set_temp48_35(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___temp48_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp48_35), (void*)value);
	}

	inline static int32_t get_offset_of_temp64_36() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D, ___temp64_36)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_temp64_36() const { return ___temp64_36; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_temp64_36() { return &___temp64_36; }
	inline void set_temp64_36(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___temp64_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp64_36), (void*)value);
	}
};

struct RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields
{
public:
	// System.Object TriangleNet.RobustPredicates::creationLock
	RuntimeObject * ___creationLock_0;
	// TriangleNet.RobustPredicates TriangleNet.RobustPredicates::_default
	RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * ____default_1;
	// System.Double TriangleNet.RobustPredicates::epsilon
	double ___epsilon_2;
	// System.Double TriangleNet.RobustPredicates::splitter
	double ___splitter_3;
	// System.Double TriangleNet.RobustPredicates::resulterrbound
	double ___resulterrbound_4;
	// System.Double TriangleNet.RobustPredicates::ccwerrboundA
	double ___ccwerrboundA_5;
	// System.Double TriangleNet.RobustPredicates::ccwerrboundB
	double ___ccwerrboundB_6;
	// System.Double TriangleNet.RobustPredicates::ccwerrboundC
	double ___ccwerrboundC_7;
	// System.Double TriangleNet.RobustPredicates::iccerrboundA
	double ___iccerrboundA_8;
	// System.Double TriangleNet.RobustPredicates::iccerrboundB
	double ___iccerrboundB_9;
	// System.Double TriangleNet.RobustPredicates::iccerrboundC
	double ___iccerrboundC_10;

public:
	inline static int32_t get_offset_of_creationLock_0() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___creationLock_0)); }
	inline RuntimeObject * get_creationLock_0() const { return ___creationLock_0; }
	inline RuntimeObject ** get_address_of_creationLock_0() { return &___creationLock_0; }
	inline void set_creationLock_0(RuntimeObject * value)
	{
		___creationLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___creationLock_0), (void*)value);
	}

	inline static int32_t get_offset_of__default_1() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ____default_1)); }
	inline RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * get__default_1() const { return ____default_1; }
	inline RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D ** get_address_of__default_1() { return &____default_1; }
	inline void set__default_1(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * value)
	{
		____default_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____default_1), (void*)value);
	}

	inline static int32_t get_offset_of_epsilon_2() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___epsilon_2)); }
	inline double get_epsilon_2() const { return ___epsilon_2; }
	inline double* get_address_of_epsilon_2() { return &___epsilon_2; }
	inline void set_epsilon_2(double value)
	{
		___epsilon_2 = value;
	}

	inline static int32_t get_offset_of_splitter_3() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___splitter_3)); }
	inline double get_splitter_3() const { return ___splitter_3; }
	inline double* get_address_of_splitter_3() { return &___splitter_3; }
	inline void set_splitter_3(double value)
	{
		___splitter_3 = value;
	}

	inline static int32_t get_offset_of_resulterrbound_4() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___resulterrbound_4)); }
	inline double get_resulterrbound_4() const { return ___resulterrbound_4; }
	inline double* get_address_of_resulterrbound_4() { return &___resulterrbound_4; }
	inline void set_resulterrbound_4(double value)
	{
		___resulterrbound_4 = value;
	}

	inline static int32_t get_offset_of_ccwerrboundA_5() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___ccwerrboundA_5)); }
	inline double get_ccwerrboundA_5() const { return ___ccwerrboundA_5; }
	inline double* get_address_of_ccwerrboundA_5() { return &___ccwerrboundA_5; }
	inline void set_ccwerrboundA_5(double value)
	{
		___ccwerrboundA_5 = value;
	}

	inline static int32_t get_offset_of_ccwerrboundB_6() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___ccwerrboundB_6)); }
	inline double get_ccwerrboundB_6() const { return ___ccwerrboundB_6; }
	inline double* get_address_of_ccwerrboundB_6() { return &___ccwerrboundB_6; }
	inline void set_ccwerrboundB_6(double value)
	{
		___ccwerrboundB_6 = value;
	}

	inline static int32_t get_offset_of_ccwerrboundC_7() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___ccwerrboundC_7)); }
	inline double get_ccwerrboundC_7() const { return ___ccwerrboundC_7; }
	inline double* get_address_of_ccwerrboundC_7() { return &___ccwerrboundC_7; }
	inline void set_ccwerrboundC_7(double value)
	{
		___ccwerrboundC_7 = value;
	}

	inline static int32_t get_offset_of_iccerrboundA_8() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___iccerrboundA_8)); }
	inline double get_iccerrboundA_8() const { return ___iccerrboundA_8; }
	inline double* get_address_of_iccerrboundA_8() { return &___iccerrboundA_8; }
	inline void set_iccerrboundA_8(double value)
	{
		___iccerrboundA_8 = value;
	}

	inline static int32_t get_offset_of_iccerrboundB_9() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___iccerrboundB_9)); }
	inline double get_iccerrboundB_9() const { return ___iccerrboundB_9; }
	inline double* get_address_of_iccerrboundB_9() { return &___iccerrboundB_9; }
	inline void set_iccerrboundB_9(double value)
	{
		___iccerrboundB_9 = value;
	}

	inline static int32_t get_offset_of_iccerrboundC_10() { return static_cast<int32_t>(offsetof(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields, ___iccerrboundC_10)); }
	inline double get_iccerrboundC_10() const { return ___iccerrboundC_10; }
	inline double* get_address_of_iccerrboundC_10() { return &___iccerrboundC_10; }
	inline void set_iccerrboundC_10(double value)
	{
		___iccerrboundC_10 = value;
	}
};


// TriangleNet.Geometry.Segment
struct Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4  : public RuntimeObject
{
public:
	// TriangleNet.Geometry.Vertex TriangleNet.Geometry.Segment::v0
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0_0;
	// TriangleNet.Geometry.Vertex TriangleNet.Geometry.Segment::v1
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v1_1;
	// System.Int32 TriangleNet.Geometry.Segment::label
	int32_t ___label_2;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4, ___v0_0)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_v0_0() const { return ___v0_0; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___v0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___v0_0), (void*)value);
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4, ___v1_1)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_v1_1() const { return ___v1_1; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___v1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___v1_1), (void*)value);
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4, ___label_2)); }
	inline int32_t get_label_2() const { return ___label_2; }
	inline int32_t* get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(int32_t value)
	{
		___label_2 = value;
	}
};


// TriangleNet.Tools.Statistic
struct Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C  : public RuntimeObject
{
public:

public:
};

struct Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields
{
public:
	// System.Int64 TriangleNet.Tools.Statistic::InCircleCount
	int64_t ___InCircleCount_0;
	// System.Int64 TriangleNet.Tools.Statistic::InCircleAdaptCount
	int64_t ___InCircleAdaptCount_1;
	// System.Int64 TriangleNet.Tools.Statistic::CounterClockwiseCount
	int64_t ___CounterClockwiseCount_2;
	// System.Int64 TriangleNet.Tools.Statistic::CounterClockwiseAdaptCount
	int64_t ___CounterClockwiseAdaptCount_3;
	// System.Int64 TriangleNet.Tools.Statistic::Orient3dCount
	int64_t ___Orient3dCount_4;
	// System.Int64 TriangleNet.Tools.Statistic::HyperbolaCount
	int64_t ___HyperbolaCount_5;
	// System.Int64 TriangleNet.Tools.Statistic::CircumcenterCount
	int64_t ___CircumcenterCount_6;
	// System.Int64 TriangleNet.Tools.Statistic::CircleTopCount
	int64_t ___CircleTopCount_7;
	// System.Int64 TriangleNet.Tools.Statistic::RelocationCount
	int64_t ___RelocationCount_8;
	// System.Int32[] TriangleNet.Tools.Statistic::plus1Mod3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___plus1Mod3_9;
	// System.Int32[] TriangleNet.Tools.Statistic::minus1Mod3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___minus1Mod3_10;

public:
	inline static int32_t get_offset_of_InCircleCount_0() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___InCircleCount_0)); }
	inline int64_t get_InCircleCount_0() const { return ___InCircleCount_0; }
	inline int64_t* get_address_of_InCircleCount_0() { return &___InCircleCount_0; }
	inline void set_InCircleCount_0(int64_t value)
	{
		___InCircleCount_0 = value;
	}

	inline static int32_t get_offset_of_InCircleAdaptCount_1() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___InCircleAdaptCount_1)); }
	inline int64_t get_InCircleAdaptCount_1() const { return ___InCircleAdaptCount_1; }
	inline int64_t* get_address_of_InCircleAdaptCount_1() { return &___InCircleAdaptCount_1; }
	inline void set_InCircleAdaptCount_1(int64_t value)
	{
		___InCircleAdaptCount_1 = value;
	}

	inline static int32_t get_offset_of_CounterClockwiseCount_2() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___CounterClockwiseCount_2)); }
	inline int64_t get_CounterClockwiseCount_2() const { return ___CounterClockwiseCount_2; }
	inline int64_t* get_address_of_CounterClockwiseCount_2() { return &___CounterClockwiseCount_2; }
	inline void set_CounterClockwiseCount_2(int64_t value)
	{
		___CounterClockwiseCount_2 = value;
	}

	inline static int32_t get_offset_of_CounterClockwiseAdaptCount_3() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___CounterClockwiseAdaptCount_3)); }
	inline int64_t get_CounterClockwiseAdaptCount_3() const { return ___CounterClockwiseAdaptCount_3; }
	inline int64_t* get_address_of_CounterClockwiseAdaptCount_3() { return &___CounterClockwiseAdaptCount_3; }
	inline void set_CounterClockwiseAdaptCount_3(int64_t value)
	{
		___CounterClockwiseAdaptCount_3 = value;
	}

	inline static int32_t get_offset_of_Orient3dCount_4() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___Orient3dCount_4)); }
	inline int64_t get_Orient3dCount_4() const { return ___Orient3dCount_4; }
	inline int64_t* get_address_of_Orient3dCount_4() { return &___Orient3dCount_4; }
	inline void set_Orient3dCount_4(int64_t value)
	{
		___Orient3dCount_4 = value;
	}

	inline static int32_t get_offset_of_HyperbolaCount_5() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___HyperbolaCount_5)); }
	inline int64_t get_HyperbolaCount_5() const { return ___HyperbolaCount_5; }
	inline int64_t* get_address_of_HyperbolaCount_5() { return &___HyperbolaCount_5; }
	inline void set_HyperbolaCount_5(int64_t value)
	{
		___HyperbolaCount_5 = value;
	}

	inline static int32_t get_offset_of_CircumcenterCount_6() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___CircumcenterCount_6)); }
	inline int64_t get_CircumcenterCount_6() const { return ___CircumcenterCount_6; }
	inline int64_t* get_address_of_CircumcenterCount_6() { return &___CircumcenterCount_6; }
	inline void set_CircumcenterCount_6(int64_t value)
	{
		___CircumcenterCount_6 = value;
	}

	inline static int32_t get_offset_of_CircleTopCount_7() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___CircleTopCount_7)); }
	inline int64_t get_CircleTopCount_7() const { return ___CircleTopCount_7; }
	inline int64_t* get_address_of_CircleTopCount_7() { return &___CircleTopCount_7; }
	inline void set_CircleTopCount_7(int64_t value)
	{
		___CircleTopCount_7 = value;
	}

	inline static int32_t get_offset_of_RelocationCount_8() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___RelocationCount_8)); }
	inline int64_t get_RelocationCount_8() const { return ___RelocationCount_8; }
	inline int64_t* get_address_of_RelocationCount_8() { return &___RelocationCount_8; }
	inline void set_RelocationCount_8(int64_t value)
	{
		___RelocationCount_8 = value;
	}

	inline static int32_t get_offset_of_plus1Mod3_9() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___plus1Mod3_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_plus1Mod3_9() const { return ___plus1Mod3_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_plus1Mod3_9() { return &___plus1Mod3_9; }
	inline void set_plus1Mod3_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___plus1Mod3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plus1Mod3_9), (void*)value);
	}

	inline static int32_t get_offset_of_minus1Mod3_10() { return static_cast<int32_t>(offsetof(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields, ___minus1Mod3_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_minus1Mod3_10() const { return ___minus1Mod3_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_minus1Mod3_10() { return &___minus1Mod3_10; }
	inline void set_minus1Mod3_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___minus1Mod3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minus1Mod3_10), (void*)value);
	}
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


// TriangleNet.Topology.SubSegment
struct SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Topology.SubSegment::hash
	int32_t ___hash_0;
	// TriangleNet.Topology.Osub[] TriangleNet.Topology.SubSegment::subsegs
	OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* ___subsegs_1;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Topology.SubSegment::vertices
	VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ___vertices_2;
	// TriangleNet.Topology.Otri[] TriangleNet.Topology.SubSegment::triangles
	OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* ___triangles_3;
	// System.Int32 TriangleNet.Topology.SubSegment::boundary
	int32_t ___boundary_4;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A, ___hash_0)); }
	inline int32_t get_hash_0() const { return ___hash_0; }
	inline int32_t* get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(int32_t value)
	{
		___hash_0 = value;
	}

	inline static int32_t get_offset_of_subsegs_1() { return static_cast<int32_t>(offsetof(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A, ___subsegs_1)); }
	inline OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* get_subsegs_1() const { return ___subsegs_1; }
	inline OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629** get_address_of_subsegs_1() { return &___subsegs_1; }
	inline void set_subsegs_1(OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* value)
	{
		___subsegs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsegs_1), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A, ___vertices_2)); }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* get_vertices_2() const { return ___vertices_2; }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_2), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_3() { return static_cast<int32_t>(offsetof(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A, ___triangles_3)); }
	inline OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* get_triangles_3() const { return ___triangles_3; }
	inline OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175** get_address_of_triangles_3() { return &___triangles_3; }
	inline void set_triangles_3(OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* value)
	{
		___triangles_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A, ___boundary_4)); }
	inline int32_t get_boundary_4() const { return ___boundary_4; }
	inline int32_t* get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(int32_t value)
	{
		___boundary_4 = value;
	}
};


// TriangleNet.Topology.Triangle
struct Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Topology.Triangle::hash
	int32_t ___hash_0;
	// System.Int32 TriangleNet.Topology.Triangle::id
	int32_t ___id_1;
	// TriangleNet.Topology.Otri[] TriangleNet.Topology.Triangle::neighbors
	OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* ___neighbors_2;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Topology.Triangle::vertices
	VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ___vertices_3;
	// TriangleNet.Topology.Osub[] TriangleNet.Topology.Triangle::subsegs
	OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* ___subsegs_4;
	// System.Int32 TriangleNet.Topology.Triangle::label
	int32_t ___label_5;
	// System.Double TriangleNet.Topology.Triangle::area
	double ___area_6;
	// System.Boolean TriangleNet.Topology.Triangle::infected
	bool ___infected_7;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769, ___hash_0)); }
	inline int32_t get_hash_0() const { return ___hash_0; }
	inline int32_t* get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(int32_t value)
	{
		___hash_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_neighbors_2() { return static_cast<int32_t>(offsetof(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769, ___neighbors_2)); }
	inline OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* get_neighbors_2() const { return ___neighbors_2; }
	inline OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175** get_address_of_neighbors_2() { return &___neighbors_2; }
	inline void set_neighbors_2(OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* value)
	{
		___neighbors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neighbors_2), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_3() { return static_cast<int32_t>(offsetof(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769, ___vertices_3)); }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* get_vertices_3() const { return ___vertices_3; }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70** get_address_of_vertices_3() { return &___vertices_3; }
	inline void set_vertices_3(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* value)
	{
		___vertices_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_3), (void*)value);
	}

	inline static int32_t get_offset_of_subsegs_4() { return static_cast<int32_t>(offsetof(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769, ___subsegs_4)); }
	inline OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* get_subsegs_4() const { return ___subsegs_4; }
	inline OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629** get_address_of_subsegs_4() { return &___subsegs_4; }
	inline void set_subsegs_4(OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* value)
	{
		___subsegs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsegs_4), (void*)value);
	}

	inline static int32_t get_offset_of_label_5() { return static_cast<int32_t>(offsetof(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769, ___label_5)); }
	inline int32_t get_label_5() const { return ___label_5; }
	inline int32_t* get_address_of_label_5() { return &___label_5; }
	inline void set_label_5(int32_t value)
	{
		___label_5 = value;
	}

	inline static int32_t get_offset_of_area_6() { return static_cast<int32_t>(offsetof(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769, ___area_6)); }
	inline double get_area_6() const { return ___area_6; }
	inline double* get_address_of_area_6() { return &___area_6; }
	inline void set_area_6(double value)
	{
		___area_6 = value;
	}

	inline static int32_t get_offset_of_infected_7() { return static_cast<int32_t>(offsetof(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769, ___infected_7)); }
	inline bool get_infected_7() const { return ___infected_7; }
	inline bool* get_address_of_infected_7() { return &___infected_7; }
	inline void set_infected_7(bool value)
	{
		___infected_7 = value;
	}
};


// TriangleNet.TrianglePool
struct TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.TrianglePool::size
	int32_t ___size_0;
	// System.Int32 TriangleNet.TrianglePool::count
	int32_t ___count_1;
	// TriangleNet.Topology.Triangle[][] TriangleNet.TrianglePool::pool
	TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* ___pool_2;
	// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::stack
	Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * ___stack_3;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7, ___pool_2)); }
	inline TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* get_pool_2() const { return ___pool_2; }
	inline TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_2), (void*)value);
	}

	inline static int32_t get_offset_of_stack_3() { return static_cast<int32_t>(offsetof(TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7, ___stack_3)); }
	inline Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * get_stack_3() const { return ___stack_3; }
	inline Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA ** get_address_of_stack_3() { return &___stack_3; }
	inline void set_stack_3(Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * value)
	{
		___stack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stack_3), (void*)value);
	}
};


// TriangleNet.TriangleSampler
struct TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A  : public RuntimeObject
{
public:
	// System.Random TriangleNet.TriangleSampler::random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random_0;
	// TriangleNet.Mesh TriangleNet.TriangleSampler::mesh
	Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh_1;
	// System.Int32 TriangleNet.TriangleSampler::samples
	int32_t ___samples_2;
	// System.Int32 TriangleNet.TriangleSampler::triangleCount
	int32_t ___triangleCount_3;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A, ___random_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_random_0() const { return ___random_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_0), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A, ___mesh_1)); }
	inline Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_samples_2() { return static_cast<int32_t>(offsetof(TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A, ___samples_2)); }
	inline int32_t get_samples_2() const { return ___samples_2; }
	inline int32_t* get_address_of_samples_2() { return &___samples_2; }
	inline void set_samples_2(int32_t value)
	{
		___samples_2 = value;
	}

	inline static int32_t get_offset_of_triangleCount_3() { return static_cast<int32_t>(offsetof(TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A, ___triangleCount_3)); }
	inline int32_t get_triangleCount_3() const { return ___triangleCount_3; }
	inline int32_t* get_address_of_triangleCount_3() { return &___triangleCount_3; }
	inline void set_triangleCount_3(int32_t value)
	{
		___triangleCount_3 = value;
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

// TriangleNet.Tools.VertexSorter
struct VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F  : public RuntimeObject
{
public:
	// System.Random TriangleNet.Tools.VertexSorter::rand
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___rand_0;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Tools.VertexSorter::points
	VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ___points_1;

public:
	inline static int32_t get_offset_of_rand_0() { return static_cast<int32_t>(offsetof(VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F, ___rand_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_rand_0() const { return ___rand_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_rand_0() { return &___rand_0; }
	inline void set_rand_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___rand_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rand_0), (void*)value);
	}

	inline static int32_t get_offset_of_points_1() { return static_cast<int32_t>(offsetof(VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F, ___points_1)); }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* get_points_1() const { return ___points_1; }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70** get_address_of_points_1() { return &___points_1; }
	inline void set_points_1(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* value)
	{
		___points_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_1), (void*)value);
	}
};


// TriangleNet.Configuration/<>c
struct U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_StaticFields
{
public:
	// TriangleNet.Configuration/<>c TriangleNet.Configuration/<>c::<>9
	U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 * ___U3CU3E9_0;
	// System.Func`1<TriangleNet.IPredicates> TriangleNet.Configuration/<>c::<>9__0_0
	Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * ___U3CU3E9__0_0_1;
	// System.Func`1<TriangleNet.TrianglePool> TriangleNet.Configuration/<>c::<>9__0_1
	Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// TriangleNet.Meshing.Iterators.RegionIterator/<>c
struct U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_StaticFields
{
public:
	// TriangleNet.Meshing.Iterators.RegionIterator/<>c TriangleNet.Meshing.Iterators.RegionIterator/<>c::<>9
	U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD * ___U3CU3E9_0;
	// System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean> TriangleNet.Meshing.Iterators.RegionIterator/<>c::<>9__3_0
	Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E  : public RuntimeObject
{
public:
	// TriangleNet.Topology.Triangle TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0::triangle
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___triangle_0;

public:
	inline static int32_t get_offset_of_triangle_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E, ___triangle_0)); }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * get_triangle_0() const { return ___triangle_0; }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** get_address_of_triangle_0() { return &___triangle_0; }
	inline void set_triangle_0(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		___triangle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangle_0), (void*)value);
	}
};


// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0::boundary
	int32_t ___boundary_0;

public:
	inline static int32_t get_offset_of_boundary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8, ___boundary_0)); }
	inline int32_t get_boundary_0() const { return ___boundary_0; }
	inline int32_t* get_address_of_boundary_0() { return &___boundary_0; }
	inline void set_boundary_0(int32_t value)
	{
		___boundary_0 = value;
	}
};


// TriangleNet.TrianglePool/<Sample>d__9
struct U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/<Sample>d__9::<>2__current
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___U3CU3E2__current_1;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::k
	int32_t ___k_3;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<>3__k
	int32_t ___U3CU3E3__k_4;
	// System.Random TriangleNet.TrianglePool/<Sample>d__9::random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random_5;
	// System.Random TriangleNet.TrianglePool/<Sample>d__9::<>3__random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___U3CU3E3__random_6;
	// TriangleNet.TrianglePool TriangleNet.TrianglePool/<Sample>d__9::<>4__this
	TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * ___U3CU3E4__this_7;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<i>5__1
	int32_t ___U3CiU3E5__1_8;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<count>5__2
	int32_t ___U3CcountU3E5__2_9;
	// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/<Sample>d__9::<t>5__3
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___U3CtU3E5__3_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CU3E2__current_1)); }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_k_3() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___k_3)); }
	inline int32_t get_k_3() const { return ___k_3; }
	inline int32_t* get_address_of_k_3() { return &___k_3; }
	inline void set_k_3(int32_t value)
	{
		___k_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__k_4() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CU3E3__k_4)); }
	inline int32_t get_U3CU3E3__k_4() const { return ___U3CU3E3__k_4; }
	inline int32_t* get_address_of_U3CU3E3__k_4() { return &___U3CU3E3__k_4; }
	inline void set_U3CU3E3__k_4(int32_t value)
	{
		___U3CU3E3__k_4 = value;
	}

	inline static int32_t get_offset_of_random_5() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___random_5)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_random_5() const { return ___random_5; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_random_5() { return &___random_5; }
	inline void set_random_5(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___random_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__random_6() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CU3E3__random_6)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_U3CU3E3__random_6() const { return ___U3CU3E3__random_6; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_U3CU3E3__random_6() { return &___U3CU3E3__random_6; }
	inline void set_U3CU3E3__random_6(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___U3CU3E3__random_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__random_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CU3E4__this_7)); }
	inline TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CiU3E5__1_8)); }
	inline int32_t get_U3CiU3E5__1_8() const { return ___U3CiU3E5__1_8; }
	inline int32_t* get_address_of_U3CiU3E5__1_8() { return &___U3CiU3E5__1_8; }
	inline void set_U3CiU3E5__1_8(int32_t value)
	{
		___U3CiU3E5__1_8 = value;
	}

	inline static int32_t get_offset_of_U3CcountU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CcountU3E5__2_9)); }
	inline int32_t get_U3CcountU3E5__2_9() const { return ___U3CcountU3E5__2_9; }
	inline int32_t* get_address_of_U3CcountU3E5__2_9() { return &___U3CcountU3E5__2_9; }
	inline void set_U3CcountU3E5__2_9(int32_t value)
	{
		___U3CcountU3E5__2_9 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917, ___U3CtU3E5__3_10)); }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * get_U3CtU3E5__3_10() const { return ___U3CtU3E5__3_10; }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** get_address_of_U3CtU3E5__3_10() { return &___U3CtU3E5__3_10; }
	inline void set_U3CtU3E5__3_10(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		___U3CtU3E5__3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtU3E5__3_10), (void*)value);
	}
};


// TriangleNet.TrianglePool/Enumerator
struct Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.TrianglePool/Enumerator::count
	int32_t ___count_0;
	// TriangleNet.Topology.Triangle[][] TriangleNet.TrianglePool/Enumerator::pool
	TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* ___pool_1;
	// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/Enumerator::current
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___current_2;
	// System.Int32 TriangleNet.TrianglePool/Enumerator::index
	int32_t ___index_3;
	// System.Int32 TriangleNet.TrianglePool/Enumerator::offset
	int32_t ___offset_4;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_pool_1() { return static_cast<int32_t>(offsetof(Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC, ___pool_1)); }
	inline TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* get_pool_1() const { return ___pool_1; }
	inline TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0** get_address_of_pool_1() { return &___pool_1; }
	inline void set_pool_1(TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* value)
	{
		___pool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_1), (void*)value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC, ___current_2)); }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * get_current_2() const { return ___current_2; }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
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


// TriangleNet.Topology.Osub
struct Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 
{
public:
	// TriangleNet.Topology.SubSegment TriangleNet.Topology.Osub::seg
	SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___seg_0;
	// System.Int32 TriangleNet.Topology.Osub::orient
	int32_t ___orient_1;

public:
	inline static int32_t get_offset_of_seg_0() { return static_cast<int32_t>(offsetof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677, ___seg_0)); }
	inline SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * get_seg_0() const { return ___seg_0; }
	inline SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A ** get_address_of_seg_0() { return &___seg_0; }
	inline void set_seg_0(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * value)
	{
		___seg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seg_0), (void*)value);
	}

	inline static int32_t get_offset_of_orient_1() { return static_cast<int32_t>(offsetof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677, ___orient_1)); }
	inline int32_t get_orient_1() const { return ___orient_1; }
	inline int32_t* get_address_of_orient_1() { return &___orient_1; }
	inline void set_orient_1(int32_t value)
	{
		___orient_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TriangleNet.Topology.Osub
struct Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshaled_pinvoke
{
	SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___seg_0;
	int32_t ___orient_1;
};
// Native definition for COM marshalling of TriangleNet.Topology.Osub
struct Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshaled_com
{
	SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___seg_0;
	int32_t ___orient_1;
};

// TriangleNet.Topology.Otri
struct Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 
{
public:
	// TriangleNet.Topology.Triangle TriangleNet.Topology.Otri::tri
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___tri_0;
	// System.Int32 TriangleNet.Topology.Otri::orient
	int32_t ___orient_1;

public:
	inline static int32_t get_offset_of_tri_0() { return static_cast<int32_t>(offsetof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93, ___tri_0)); }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * get_tri_0() const { return ___tri_0; }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** get_address_of_tri_0() { return &___tri_0; }
	inline void set_tri_0(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		___tri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tri_0), (void*)value);
	}

	inline static int32_t get_offset_of_orient_1() { return static_cast<int32_t>(offsetof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93, ___orient_1)); }
	inline int32_t get_orient_1() const { return ___orient_1; }
	inline int32_t* get_address_of_orient_1() { return &___orient_1; }
	inline void set_orient_1(int32_t value)
	{
		___orient_1 = value;
	}
};

struct Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields
{
public:
	// System.Int32[] TriangleNet.Topology.Otri::plus1Mod3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___plus1Mod3_2;
	// System.Int32[] TriangleNet.Topology.Otri::minus1Mod3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___minus1Mod3_3;

public:
	inline static int32_t get_offset_of_plus1Mod3_2() { return static_cast<int32_t>(offsetof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields, ___plus1Mod3_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_plus1Mod3_2() const { return ___plus1Mod3_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_plus1Mod3_2() { return &___plus1Mod3_2; }
	inline void set_plus1Mod3_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___plus1Mod3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plus1Mod3_2), (void*)value);
	}

	inline static int32_t get_offset_of_minus1Mod3_3() { return static_cast<int32_t>(offsetof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields, ___minus1Mod3_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_minus1Mod3_3() const { return ___minus1Mod3_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_minus1Mod3_3() { return &___minus1Mod3_3; }
	inline void set_minus1Mod3_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___minus1Mod3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minus1Mod3_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TriangleNet.Topology.Otri
struct Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshaled_pinvoke
{
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___tri_0;
	int32_t ___orient_1;
};
// Native definition for COM marshalling of TriangleNet.Topology.Otri
struct Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshaled_com
{
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___tri_0;
	int32_t ___orient_1;
};

// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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

// TriangleNet.LocateResult
struct LocateResult_tC70522EC04C61E3D77E0FDBAAA58C279954F7700 
{
public:
	// System.Int32 TriangleNet.LocateResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocateResult_tC70522EC04C61E3D77E0FDBAAA58C279954F7700, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriangleNet.TriangleLocator
struct TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC  : public RuntimeObject
{
public:
	// TriangleNet.TriangleSampler TriangleNet.TriangleLocator::sampler
	TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * ___sampler_0;
	// TriangleNet.Mesh TriangleNet.TriangleLocator::mesh
	Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh_1;
	// TriangleNet.IPredicates TriangleNet.TriangleLocator::predicates
	RuntimeObject* ___predicates_2;
	// TriangleNet.Topology.Otri TriangleNet.TriangleLocator::recenttri
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  ___recenttri_3;

public:
	inline static int32_t get_offset_of_sampler_0() { return static_cast<int32_t>(offsetof(TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC, ___sampler_0)); }
	inline TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * get_sampler_0() const { return ___sampler_0; }
	inline TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A ** get_address_of_sampler_0() { return &___sampler_0; }
	inline void set_sampler_0(TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * value)
	{
		___sampler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampler_0), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC, ___mesh_1)); }
	inline Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_predicates_2() { return static_cast<int32_t>(offsetof(TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC, ___predicates_2)); }
	inline RuntimeObject* get_predicates_2() const { return ___predicates_2; }
	inline RuntimeObject** get_address_of_predicates_2() { return &___predicates_2; }
	inline void set_predicates_2(RuntimeObject* value)
	{
		___predicates_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicates_2), (void*)value);
	}

	inline static int32_t get_offset_of_recenttri_3() { return static_cast<int32_t>(offsetof(TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC, ___recenttri_3)); }
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  get_recenttri_3() const { return ___recenttri_3; }
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * get_address_of_recenttri_3() { return &___recenttri_3; }
	inline void set_recenttri_3(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  value)
	{
		___recenttri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___recenttri_3))->___tri_0), (void*)NULL);
	}
};


// TriangleNet.VertexType
struct VertexType_t6D90E6B6B5BB477CB5E2FEF3A59BB2C41016F0A2 
{
public:
	// System.Int32 TriangleNet.VertexType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexType_t6D90E6B6B5BB477CB5E2FEF3A59BB2C41016F0A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TriangleNet.Geometry.Vertex
struct Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8  : public Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73
{
public:
	// System.Int32 TriangleNet.Geometry.Vertex::hash
	int32_t ___hash_4;
	// System.Double[] TriangleNet.Geometry.Vertex::attributes
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___attributes_5;
	// TriangleNet.VertexType TriangleNet.Geometry.Vertex::type
	int32_t ___type_6;
	// TriangleNet.Topology.Otri TriangleNet.Geometry.Vertex::tri
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  ___tri_7;

public:
	inline static int32_t get_offset_of_hash_4() { return static_cast<int32_t>(offsetof(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8, ___hash_4)); }
	inline int32_t get_hash_4() const { return ___hash_4; }
	inline int32_t* get_address_of_hash_4() { return &___hash_4; }
	inline void set_hash_4(int32_t value)
	{
		___hash_4 = value;
	}

	inline static int32_t get_offset_of_attributes_5() { return static_cast<int32_t>(offsetof(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8, ___attributes_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_attributes_5() const { return ___attributes_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_attributes_5() { return &___attributes_5; }
	inline void set_attributes_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___attributes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_5), (void*)value);
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_tri_7() { return static_cast<int32_t>(offsetof(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8, ___tri_7)); }
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  get_tri_7() const { return ___tri_7; }
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * get_address_of_tri_7() { return &___tri_7; }
	inline void set_tri_7(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  value)
	{
		___tri_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tri_7))->___tri_0), (void*)NULL);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * m_Items[1];

public:
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TriangleNet.Topology.Osub[]
struct OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  m_Items[1];

public:
	inline Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___seg_0), (void*)NULL);
	}
	inline Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___seg_0), (void*)NULL);
	}
};
// TriangleNet.Topology.Otri[]
struct OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  m_Items[1];

public:
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tri_0), (void*)NULL);
	}
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tri_0), (void*)NULL);
	}
};
// TriangleNet.Topology.Triangle[]
struct TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * m_Items[1];

public:
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TriangleNet.Topology.Triangle[][]
struct TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* m_Items[1];

public:
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mAE1FB95F74EC6E95E880BF1B3E7CC57000321DA4_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);

// System.Void TriangleNet.Geometry.Segment::.ctor(TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_m01523C299BD90891A680032385C1D7BAAD285CA1 (Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v00, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v11, int32_t ___label2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleSampler::.ctor(TriangleNet.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_mCD79F3A39688F9FBBF3820FB4739F84328BC096B (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Copy(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Org()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Dest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Apex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m47967B2F87B7C49AA15C03BD7B3B1AADE82506A3 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lnext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m1E2682AFFB16CAD4A924C523412746C09CF02D10 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Sym(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Pivot(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Topology.Otri::IsDead(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_IsDead_mC83C3F128DE68E8AE8518DF130CEFBD11DCDC424 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___tria0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleSampler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler_Update_mCD74FE8B65BE83A413687517C53AF4699637AE29 (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TriangleSampler::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_GetEnumerator_m0F395E86E7214D0C7DE9B89AB41428F69EB9FB3C (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Sym()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_m43364285D327C00BAB254022919ACC49566AE8E9 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// TriangleNet.LocateResult TriangleNet.TriangleLocator::PreciseLocate(TriangleNet.Geometry.Point,TriangleNet.Topology.Otri&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleLocator_PreciseLocate_mD13CEA3470E55338B4BCE6F87C864BE4AAC05306 (TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___searchpoint0, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___searchtri1, bool ___stopatsubsegment2, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::.ctor(System.Int32)
inline void Stack_1__ctor_m0914A0C5393C5C750B304D97FDEC085F4A24E85F (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA *, int32_t, const RuntimeMethod*))Stack_1__ctor_mAE1FB95F74EC6E95E880BF1B3E7CC57000321DA4_gshared)(__this, ___capacity0, method);
}
// System.Int32 System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::get_Count()
inline int32_t Stack_1_get_Count_m832EE5E78C80A0454D522E1172123DC49356D8E5_inline (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::Pop()
inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * Stack_1_Pop_m536BD02DD251E79DF7F12966F9ABD37A3CC6E56E (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * __this, const RuntimeMethod* method)
{
	return ((  Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * (*) (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Void TriangleNet.TrianglePool::Cleanup(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Cleanup_mE25746074803B18DE7CBB87995C6562F52BFB1F8 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___triangle0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Triangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle__ctor_mAD400A1F90068FF5221A3C075D086B9128AA8419 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<TriangleNet.Topology.Triangle[]>(!!0[]&,System.Int32)
inline void Array_Resize_TisTriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_mB44FBF1E88D2D06833E12F2E81021A6A343191ED (TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::Push(!0)
inline void Stack_1_Push_mF5FBDB41C42591BF6A595D5659949DD1A057AA84 (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA *, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Void TriangleNet.TrianglePool/<Sample>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__9__ctor_m6494018DCB255A428F6E42EB67EB8ED264DC6E42 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::Clear()
inline void Stack_1_Clear_m404B01AB176E4F0058C225D51A0D2425190BAF28 (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA *, const RuntimeMethod*))Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_GetEnumerator_mEB6D2A03906B1D2B074F1E3DF7F33BF269E53411 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.TrianglePool/Enumerator::.ctor(TriangleNet.TrianglePool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB9199B9BA5754DD7B08DA89719518D03DDBC399E (Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC * __this, TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * ___pool0, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, int32_t ___Seed0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleSampler::.ctor(TriangleNet.Mesh,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_mA47F7CA0A38B714EF864B4633A12F9E8D4FD51FC (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh0, Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random1, const RuntimeMethod* method);
// System.Int32 TriangleNet.TrianglePool::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrianglePool_get_Count_m102532C98782E7382EEAEBDF1CD10EE3366AB967 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::Sample(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_Sample_m4159A65BE9FBC99A6039C2D19F92C49D530B2C24 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, int32_t ___k0, Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random1, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m0D80EBCF4D788A02DA86505A125FA384E75F8DEB (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * __this, double ___x0, double ___y1, int32_t ___mark2, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Point::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m7A91AF5B4270707B1947805925BE2913F7EE38B6 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, double ___x0, double ___y1, int32_t ___label2, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::.ctor(TriangleNet.Geometry.Vertex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter__ctor_m1A771194C3DD46958B7C0E2FD46247EB3B5E6C91 (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ___points0, int32_t ___seed1, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::QuickSort(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_QuickSort_mEBC0B182AC20E28E8247424C33DD51AABB7A5668 (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, int32_t ___left0, int32_t ___right1, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::AlternateAxes(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_AlternateAxes_m6492595CA940955473007488523ED4C8682A8E5A (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, int32_t ___left0, int32_t ___right1, int32_t ___axis2, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::VertexMedianX(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianX_m888B919653A2936574A0A7A1857D030AE952279F (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, int32_t ___left0, int32_t ___right1, int32_t ___median2, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::VertexMedianY(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianY_m72B7085C6CCA9EF32F54EFCF780988F2993679B7 (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, int32_t ___left0, int32_t ___right1, int32_t ___median2, const RuntimeMethod* method);
// System.Void TriangleNet.Configuration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1AAD862C863CAD6347D1B3F73D934800E4946788 (U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 * __this, const RuntimeMethod* method);
// TriangleNet.RobustPredicates TriangleNet.RobustPredicates::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * RobustPredicates_get_Default_m6B2D1F4BFA42232CD3811AFA687BA72CB54C20FE (const RuntimeMethod* method);
// System.Void TriangleNet.TrianglePool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool__ctor_mC4F50512B89BDF25FAE6F8847325A89960D8EFE8 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4401ECCC69836CBBD26883A32BF2E11E6DACE257 (U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool/<Sample>d__9::System.Collections.Generic.IEnumerable<TriangleNet.Topology.Triangle>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__9_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m64F896D396C4B7AF7ECC98F3F58B8FF0BC9BD500 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 TriangleNet.Geometry.Segment::get_Label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_Label_mB3B6562ACF34C100D018E78A14AAF484BAA25C57 (Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_label_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void TriangleNet.Geometry.Segment::.ctor(TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_mA5A58D8E95622CDC94F68A3A77F514AE4862EA98 (Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v00, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v11, const RuntimeMethod* method)
{
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_0 = ___v00;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_1 = ___v11;
		Segment__ctor_m01523C299BD90891A680032385C1D7BAAD285CA1(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Geometry.Segment::.ctor(TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_m01523C299BD90891A680032385C1D7BAAD285CA1 (Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v00, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v11, int32_t ___label2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_0 = ___v00;
		__this->set_v0_0(L_0);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_1 = ___v11;
		__this->set_v1_1(L_1);
		int32_t L_2 = ___label2;
		__this->set_label_2(L_2);
		return;
	}
}
// TriangleNet.Geometry.Vertex TriangleNet.Geometry.Segment::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Segment_GetVertex_m040AF6479EBA2EBB916C7BB04587CB51EA7897D2 (Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_1 = NULL;
	bool V_2 = false;
	{
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_2 = __this->get_v0_0();
		V_1 = L_2;
		goto IL_002b;
	}

IL_0013:
	{
		int32_t L_3 = ___index0;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_5 = __this->get_v1_1();
		V_1 = L_5;
		goto IL_002b;
	}

IL_0025:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_6 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Segment_GetVertex_m040AF6479EBA2EBB916C7BB04587CB51EA7897D2_RuntimeMethod_var)));
	}

IL_002b:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_7 = V_1;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Tools.Statistic::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Statistic__cctor_m060A8DB4D4EB2BD0FF5EECC8D8A8D2E5320CA91C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_InCircleCount_0(((int64_t)((int64_t)0)));
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_InCircleAdaptCount_1(((int64_t)((int64_t)0)));
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CounterClockwiseCount_2(((int64_t)((int64_t)0)));
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CounterClockwiseAdaptCount_3(((int64_t)((int64_t)0)));
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_Orient3dCount_4(((int64_t)((int64_t)0)));
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_HyperbolaCount_5(((int64_t)((int64_t)0)));
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CircumcenterCount_6(((int64_t)((int64_t)0)));
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CircleTopCount_7(((int64_t)((int64_t)0)));
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_RelocationCount_8(((int64_t)((int64_t)0)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_plus1Mod3_9(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_minus1Mod3_10(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Topology.SubSegment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubSegment__ctor_mCC91A8065966DC452B6CC843E9755D9328BF63A5 (SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_0 = (VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70*)(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70*)SZArrayNew(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_vertices_2(L_0);
		__this->set_boundary_4(0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = (OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629*)(OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629*)SZArrayNew(OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_subsegs_1(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = (OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175*)(OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175*)SZArrayNew(OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_triangles_3(L_2);
		return;
	}
}
// System.Int32 TriangleNet.Topology.SubSegment::get_Label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubSegment_get_Label_mC5155C8602CC8788A988CD93284C5433C26BF91E (SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_boundary_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.SubSegment::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * SubSegment_GetVertex_mA55D2AB0A58554AAA3D9BA295E1EB5E21880DB0E (SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_0 = __this->get_vertices_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4 = V_0;
		return L_4;
	}
}
// System.Int32 TriangleNet.Topology.SubSegment::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubSegment_GetHashCode_mD51B45FD1528B11702ACDD060079CA0C74106CFD (SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_hash_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String TriangleNet.Topology.SubSegment::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubSegment_ToString_mFFC4F34860381AD61D62C60FA58EE7DBEA1A4DFF (SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = __this->get_hash_0();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Topology.Triangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle__ctor_mAD400A1F90068FF5221A3C075D086B9128AA8419 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_0 = (VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70*)(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70*)SZArrayNew(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_vertices_3(L_0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = (OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629*)(OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629*)SZArrayNew(OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_subsegs_4(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = (OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175*)(OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175*)SZArrayNew(OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_neighbors_2(L_2);
		return;
	}
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Triangle::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Triangle_GetVertex_m56410681A51FF7A66791867F2EBF5CDD250992FA (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_0 = __this->get_vertices_3();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4 = V_0;
		return L_4;
	}
}
// System.Int32 TriangleNet.Topology.Triangle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangle_GetHashCode_mFA4623E1BADAE50D024BF3E835942DC1C7464BD7 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_hash_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String TriangleNet.Topology.Triangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Triangle_ToString_mFC68D0F2485171979D8EF46B2E519D3EEFD44FE6 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = __this->get_hash_0();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.TriangleLocator::.ctor(TriangleNet.Mesh,TriangleNet.IPredicates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleLocator__ctor_m31F44DB449F3E272BFB4E232DEE4796B8D2EA22B (TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC * __this, Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh0, RuntimeObject* ___predicates1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_0 = ___mesh0;
		__this->set_mesh_1(L_0);
		RuntimeObject* L_1 = ___predicates1;
		__this->set_predicates_2(L_1);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_2 = ___mesh0;
		TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * L_3 = (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A *)il2cpp_codegen_object_new(TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A_il2cpp_TypeInfo_var);
		TriangleSampler__ctor_mCD79F3A39688F9FBBF3820FB4739F84328BC096B(L_3, L_2, /*hidden argument*/NULL);
		__this->set_sampler_0(L_3);
		return;
	}
}
// System.Void TriangleNet.TriangleLocator::Update(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleLocator_Update_m3C9B97A653F71560B56C5172768932A153B523F3 (TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___otri0, const RuntimeMethod* method)
{
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___otri0;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_1 = __this->get_address_of_recenttri_3();
		Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_0, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// TriangleNet.LocateResult TriangleNet.TriangleLocator::PreciseLocate(TriangleNet.Geometry.Point,TriangleNet.Topology.Otri&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleLocator_PreciseLocate_mD13CEA3470E55338B4BCE6F87C864BE4AAC05306 (TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___searchpoint0, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___searchtri1, bool ___stopatsubsegment2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_2 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_3 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_4 = NULL;
	double V_5 = 0.0;
	double V_6 = 0.0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		il2cpp_codegen_initobj((&V_1), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___searchtri1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_1;
		L_1 = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_2 = ___searchtri1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3;
		L_3 = Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_4 = ___searchtri1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_5;
		L_5 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		goto IL_020a;
	}

IL_002c:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_6 = V_4;
		NullCheck(L_6);
		double L_7 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_6)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_8 = ___searchpoint0;
		NullCheck(L_8);
		double L_9 = L_8->get_x_2();
		if ((!(((double)L_7) == ((double)L_9))))
		{
			goto IL_004d;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_10 = V_4;
		NullCheck(L_10);
		double L_11 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_10)->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_12 = ___searchpoint0;
		NullCheck(L_12);
		double L_13 = L_12->get_y_3();
		G_B4_0 = ((((double)L_11) == ((double)L_13))? 1 : 0);
		goto IL_004e;
	}

IL_004d:
	{
		G_B4_0 = 0;
	}

IL_004e:
	{
		V_8 = (bool)G_B4_0;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_15 = ___searchtri1;
		Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_15, /*hidden argument*/NULL);
		V_9 = 2;
		goto IL_0212;
	}

IL_0064:
	{
		RuntimeObject* L_16 = __this->get_predicates_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_17 = V_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_18 = V_4;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_19 = ___searchpoint0;
		NullCheck(L_16);
		double L_20;
		L_20 = InterfaceFuncInvoker3< double, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * >::Invoke(0 /* System.Double TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19);
		V_6 = L_20;
		RuntimeObject* L_21 = __this->get_predicates_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_22 = V_4;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_23 = V_3;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_24 = ___searchpoint0;
		NullCheck(L_21);
		double L_25;
		L_25 = InterfaceFuncInvoker3< double, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * >::Invoke(0 /* System.Double TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var, L_21, L_22, L_23, L_24);
		V_5 = L_25;
		double L_26 = V_6;
		V_10 = (bool)((((double)L_26) > ((double)(0.0)))? 1 : 0);
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_00ff;
		}
	}
	{
		double L_28 = V_5;
		V_11 = (bool)((((double)L_28) > ((double)(0.0)))? 1 : 0);
		bool L_29 = V_11;
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_30 = V_4;
		NullCheck(L_30);
		double L_31 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_30)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_32 = ___searchpoint0;
		NullCheck(L_32);
		double L_33 = L_32->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_34 = V_3;
		NullCheck(L_34);
		double L_35 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_34)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_36 = V_2;
		NullCheck(L_36);
		double L_37 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_36)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_38 = V_4;
		NullCheck(L_38);
		double L_39 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_38)->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_40 = ___searchpoint0;
		NullCheck(L_40);
		double L_41 = L_40->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_42 = V_3;
		NullCheck(L_42);
		double L_43 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_42)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_44 = V_2;
		NullCheck(L_44);
		double L_45 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_44)->get_y_3();
		V_7 = (bool)((((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_31, (double)L_33)), (double)((double)il2cpp_codegen_subtract((double)L_35, (double)L_37)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_39, (double)L_41)), (double)((double)il2cpp_codegen_subtract((double)L_43, (double)L_45))))))) > ((double)(0.0)))? 1 : 0);
		goto IL_00fc;
	}

IL_00f7:
	{
		V_7 = (bool)1;
	}

IL_00fc:
	{
		goto IL_016a;
	}

IL_00ff:
	{
		double L_46 = V_5;
		V_12 = (bool)((((double)L_46) > ((double)(0.0)))? 1 : 0);
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_011a;
		}
	}
	{
		V_7 = (bool)0;
		goto IL_0169;
	}

IL_011a:
	{
		double L_48 = V_6;
		V_13 = (bool)((((double)L_48) == ((double)(0.0)))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_013e;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_50 = ___searchtri1;
		Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_50, /*hidden argument*/NULL);
		V_9 = 1;
		goto IL_0212;
	}

IL_013e:
	{
		double L_51 = V_5;
		V_14 = (bool)((((double)L_51) == ((double)(0.0)))? 1 : 0);
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_0161;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_53 = ___searchtri1;
		Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_53, /*hidden argument*/NULL);
		V_9 = 1;
		goto IL_0212;
	}

IL_0161:
	{
		V_9 = 0;
		goto IL_0212;
	}

IL_0169:
	{
	}

IL_016a:
	{
		bool L_54 = V_7;
		V_15 = L_54;
		bool L_55 = V_15;
		if (!L_55)
		{
			goto IL_0182;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_56 = ___searchtri1;
		Otri_Lprev_m47967B2F87B7C49AA15C03BD7B3B1AADE82506A3((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_56, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_57 = V_4;
		V_3 = L_57;
		goto IL_0190;
	}

IL_0182:
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_58 = ___searchtri1;
		Otri_Lnext_m1E2682AFFB16CAD4A924C523412746C09CF02D10((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_58, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_59 = V_4;
		V_2 = L_59;
	}

IL_0190:
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_60 = ___searchtri1;
		Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_60, /*hidden argument*/NULL);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_61 = __this->get_mesh_1();
		NullCheck(L_61);
		bool L_62 = L_61->get_checksegments_20();
		bool L_63 = ___stopatsubsegment2;
		V_16 = (bool)((int32_t)((int32_t)L_62&(int32_t)L_63));
		bool L_64 = V_16;
		if (!L_64)
		{
			goto IL_01de;
		}
	}
	{
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_1), /*hidden argument*/NULL);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_65 = V_1;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_66 = L_65.get_seg_0();
		NullCheck(L_66);
		int32_t L_67 = L_66->get_hash_0();
		V_17 = (bool)((((int32_t)((((int32_t)L_67) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_01dd;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_69 = ___searchtri1;
		Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_69, /*hidden argument*/NULL);
		V_9 = 3;
		goto IL_0212;
	}

IL_01dd:
	{
	}

IL_01de:
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_70 = ___searchtri1;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_71 = L_70->get_tri_0();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_id_1();
		V_18 = (bool)((((int32_t)L_72) == ((int32_t)(-1)))? 1 : 0);
		bool L_73 = V_18;
		if (!L_73)
		{
			goto IL_0201;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_74 = ___searchtri1;
		Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_74, /*hidden argument*/NULL);
		V_9 = 3;
		goto IL_0212;
	}

IL_0201:
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_75 = ___searchtri1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_76;
		L_76 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_75, /*hidden argument*/NULL);
		V_4 = L_76;
	}

IL_020a:
	{
		V_19 = (bool)1;
		goto IL_002c;
	}

IL_0212:
	{
		int32_t L_77 = V_9;
		return L_77;
	}
}
// TriangleNet.LocateResult TriangleNet.TriangleLocator::Locate(TriangleNet.Geometry.Point,TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleLocator_Locate_mB6D00D0FE89348CCB8036165D335CDD50095FC5D (TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___searchpoint0, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___searchtri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_1 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_2 = NULL;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	RuntimeObject* V_11 = NULL;
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B5_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B39_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___searchtri1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_1;
		L_1 = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_2 = ___searchpoint0;
		NullCheck(L_2);
		double L_3 = L_2->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4 = V_1;
		NullCheck(L_4);
		double L_5 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_4)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_6 = ___searchpoint0;
		NullCheck(L_6);
		double L_7 = L_6->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_8 = V_1;
		NullCheck(L_8);
		double L_9 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_8)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_10 = ___searchpoint0;
		NullCheck(L_10);
		double L_11 = L_10->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_12 = V_1;
		NullCheck(L_12);
		double L_13 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_12)->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_14 = ___searchpoint0;
		NullCheck(L_14);
		double L_15 = L_14->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_16 = V_1;
		NullCheck(L_16);
		double L_17 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_16)->get_y_3();
		V_3 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_3, (double)L_5)), (double)((double)il2cpp_codegen_subtract((double)L_7, (double)L_9)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_11, (double)L_13)), (double)((double)il2cpp_codegen_subtract((double)L_15, (double)L_17))))));
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_18 = __this->get_address_of_recenttri_3();
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_19 = L_18->get_tri_0();
		V_6 = (bool)((!(((RuntimeObject*)(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)L_19) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_011c;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_21 = __this->get_address_of_recenttri_3();
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_22 = L_21->get_tri_0();
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Otri_IsDead_mC83C3F128DE68E8AE8518DF130CEFBD11DCDC424(L_22, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_011b;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_25 = __this->get_address_of_recenttri_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_26;
		L_26 = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_27 = V_1;
		NullCheck(L_27);
		double L_28 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_27)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_29 = ___searchpoint0;
		NullCheck(L_29);
		double L_30 = L_29->get_x_2();
		if ((!(((double)L_28) == ((double)L_30))))
		{
			goto IL_00a7;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_31 = V_1;
		NullCheck(L_31);
		double L_32 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_31)->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_33 = ___searchpoint0;
		NullCheck(L_33);
		double L_34 = L_33->get_y_3();
		G_B5_0 = ((((double)L_32) == ((double)L_34))? 1 : 0);
		goto IL_00a8;
	}

IL_00a7:
	{
		G_B5_0 = 0;
	}

IL_00a8:
	{
		V_8 = (bool)G_B5_0;
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_00c4;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_36 = __this->get_address_of_recenttri_3();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_37 = ___searchtri1;
		Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_36, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_37, /*hidden argument*/NULL);
		V_9 = 2;
		goto IL_02e6;
	}

IL_00c4:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_38 = ___searchpoint0;
		NullCheck(L_38);
		double L_39 = L_38->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_40 = V_1;
		NullCheck(L_40);
		double L_41 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_40)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_42 = ___searchpoint0;
		NullCheck(L_42);
		double L_43 = L_42->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_44 = V_1;
		NullCheck(L_44);
		double L_45 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_44)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_46 = ___searchpoint0;
		NullCheck(L_46);
		double L_47 = L_46->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_48 = V_1;
		NullCheck(L_48);
		double L_49 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_48)->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_50 = ___searchpoint0;
		NullCheck(L_50);
		double L_51 = L_50->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_52 = V_1;
		NullCheck(L_52);
		double L_53 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_52)->get_y_3();
		V_4 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_39, (double)L_41)), (double)((double)il2cpp_codegen_subtract((double)L_43, (double)L_45)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_47, (double)L_49)), (double)((double)il2cpp_codegen_subtract((double)L_51, (double)L_53))))));
		double L_54 = V_4;
		double L_55 = V_3;
		V_10 = (bool)((((double)L_54) < ((double)L_55))? 1 : 0);
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_011a;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_57 = __this->get_address_of_recenttri_3();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_58 = ___searchtri1;
		Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_57, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_58, /*hidden argument*/NULL);
		double L_59 = V_4;
		V_3 = L_59;
	}

IL_011a:
	{
	}

IL_011b:
	{
	}

IL_011c:
	{
		TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * L_60 = __this->get_sampler_0();
		NullCheck(L_60);
		TriangleSampler_Update_mCD74FE8B65BE83A413687517C53AF4699637AE29(L_60, /*hidden argument*/NULL);
		TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * L_61 = __this->get_sampler_0();
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = TriangleSampler_GetEnumerator_m0F395E86E7214D0C7DE9B89AB41428F69EB9FB3C(L_61, /*hidden argument*/NULL);
		V_11 = L_62;
	}

IL_0136:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01bf;
		}

IL_013b:
		{
			RuntimeObject* L_63 = V_11;
			NullCheck(L_63);
			Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_64;
			L_64 = InterfaceFuncInvoker0< Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>::get_Current() */, IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var, L_63);
			V_12 = L_64;
			Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_65 = V_12;
			(&V_0)->set_tri_0(L_65);
			Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_66 = V_0;
			Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_67 = L_66.get_tri_0();
			IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
			bool L_68;
			L_68 = Otri_IsDead_mC83C3F128DE68E8AE8518DF130CEFBD11DCDC424(L_67, /*hidden argument*/NULL);
			V_13 = (bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0);
			bool L_69 = V_13;
			if (!L_69)
			{
				goto IL_01be;
			}
		}

IL_0162:
		{
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_70;
			L_70 = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
			V_1 = L_70;
			Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_71 = ___searchpoint0;
			NullCheck(L_71);
			double L_72 = L_71->get_x_2();
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_73 = V_1;
			NullCheck(L_73);
			double L_74 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_73)->get_x_2();
			Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_75 = ___searchpoint0;
			NullCheck(L_75);
			double L_76 = L_75->get_x_2();
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_77 = V_1;
			NullCheck(L_77);
			double L_78 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_77)->get_x_2();
			Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_79 = ___searchpoint0;
			NullCheck(L_79);
			double L_80 = L_79->get_y_3();
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_81 = V_1;
			NullCheck(L_81);
			double L_82 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_81)->get_y_3();
			Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_83 = ___searchpoint0;
			NullCheck(L_83);
			double L_84 = L_83->get_y_3();
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_85 = V_1;
			NullCheck(L_85);
			double L_86 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_85)->get_y_3();
			V_4 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_72, (double)L_74)), (double)((double)il2cpp_codegen_subtract((double)L_76, (double)L_78)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_80, (double)L_82)), (double)((double)il2cpp_codegen_subtract((double)L_84, (double)L_86))))));
			double L_87 = V_4;
			double L_88 = V_3;
			V_14 = (bool)((((double)L_87) < ((double)L_88))? 1 : 0);
			bool L_89 = V_14;
			if (!L_89)
			{
				goto IL_01bd;
			}
		}

IL_01af:
		{
			Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_90 = ___searchtri1;
			Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_90, /*hidden argument*/NULL);
			double L_91 = V_4;
			V_3 = L_91;
		}

IL_01bd:
		{
		}

IL_01be:
		{
		}

IL_01bf:
		{
			RuntimeObject* L_92 = V_11;
			NullCheck(L_92);
			bool L_93;
			L_93 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_92);
			if (L_93)
			{
				goto IL_013b;
			}
		}

IL_01cb:
		{
			IL2CPP_LEAVE(0x1DA, FINALLY_01cd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01cd;
	}

FINALLY_01cd:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_94 = V_11;
			if (!L_94)
			{
				goto IL_01d9;
			}
		}

IL_01d1:
		{
			RuntimeObject* L_95 = V_11;
			NullCheck(L_95);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_95);
		}

IL_01d9:
		{
			IL2CPP_END_FINALLY(461)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(461)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1DA, IL_01da)
	}

IL_01da:
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_96 = ___searchtri1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_97;
		L_97 = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_96, /*hidden argument*/NULL);
		V_1 = L_97;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_98 = ___searchtri1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_99;
		L_99 = Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_98, /*hidden argument*/NULL);
		V_2 = L_99;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_100 = V_1;
		NullCheck(L_100);
		double L_101 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_100)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_102 = ___searchpoint0;
		NullCheck(L_102);
		double L_103 = L_102->get_x_2();
		if ((!(((double)L_101) == ((double)L_103))))
		{
			goto IL_0206;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_104 = V_1;
		NullCheck(L_104);
		double L_105 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_104)->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_106 = ___searchpoint0;
		NullCheck(L_106);
		double L_107 = L_106->get_y_3();
		G_B26_0 = ((((double)L_105) == ((double)L_107))? 1 : 0);
		goto IL_0207;
	}

IL_0206:
	{
		G_B26_0 = 0;
	}

IL_0207:
	{
		V_15 = (bool)G_B26_0;
		bool L_108 = V_15;
		if (!L_108)
		{
			goto IL_0216;
		}
	}
	{
		V_9 = 2;
		goto IL_02e6;
	}

IL_0216:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_109 = V_2;
		NullCheck(L_109);
		double L_110 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_109)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_111 = ___searchpoint0;
		NullCheck(L_111);
		double L_112 = L_111->get_x_2();
		if ((!(((double)L_110) == ((double)L_112))))
		{
			goto IL_0234;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_113 = V_2;
		NullCheck(L_113);
		double L_114 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_113)->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_115 = ___searchpoint0;
		NullCheck(L_115);
		double L_116 = L_115->get_y_3();
		G_B31_0 = ((((double)L_114) == ((double)L_116))? 1 : 0);
		goto IL_0235;
	}

IL_0234:
	{
		G_B31_0 = 0;
	}

IL_0235:
	{
		V_16 = (bool)G_B31_0;
		bool L_117 = V_16;
		if (!L_117)
		{
			goto IL_024b;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_118 = ___searchtri1;
		Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_118, /*hidden argument*/NULL);
		V_9 = 2;
		goto IL_02e6;
	}

IL_024b:
	{
		RuntimeObject* L_119 = __this->get_predicates_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_120 = V_1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_121 = V_2;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_122 = ___searchpoint0;
		NullCheck(L_119);
		double L_123;
		L_123 = InterfaceFuncInvoker3< double, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * >::Invoke(0 /* System.Double TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var, L_119, L_120, L_121, L_122);
		V_5 = L_123;
		double L_124 = V_5;
		V_17 = (bool)((((double)L_124) < ((double)(0.0)))? 1 : 0);
		bool L_125 = V_17;
		if (!L_125)
		{
			goto IL_0279;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_126 = ___searchtri1;
		Otri_Sym_m43364285D327C00BAB254022919ACC49566AE8E9((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_126, /*hidden argument*/NULL);
		goto IL_02d9;
	}

IL_0279:
	{
		double L_127 = V_5;
		V_18 = (bool)((((double)L_127) == ((double)(0.0)))? 1 : 0);
		bool L_128 = V_18;
		if (!L_128)
		{
			goto IL_02d9;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_129 = V_1;
		NullCheck(L_129);
		double L_130 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_129)->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_131 = ___searchpoint0;
		NullCheck(L_131);
		double L_132 = L_131->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_133 = ___searchpoint0;
		NullCheck(L_133);
		double L_134 = L_133->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_135 = V_2;
		NullCheck(L_135);
		double L_136 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_135)->get_x_2();
		if ((!(((uint32_t)((((double)L_130) < ((double)L_132))? 1 : 0)) == ((uint32_t)((((double)L_134) < ((double)L_136))? 1 : 0)))))
		{
			goto IL_02cb;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_137 = V_1;
		NullCheck(L_137);
		double L_138 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_137)->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_139 = ___searchpoint0;
		NullCheck(L_139);
		double L_140 = L_139->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_141 = ___searchpoint0;
		NullCheck(L_141);
		double L_142 = L_141->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_143 = V_2;
		NullCheck(L_143);
		double L_144 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_143)->get_y_3();
		G_B39_0 = ((((int32_t)((((double)L_138) < ((double)L_140))? 1 : 0)) == ((int32_t)((((double)L_142) < ((double)L_144))? 1 : 0)))? 1 : 0);
		goto IL_02cc;
	}

IL_02cb:
	{
		G_B39_0 = 0;
	}

IL_02cc:
	{
		V_19 = (bool)G_B39_0;
		bool L_145 = V_19;
		if (!L_145)
		{
			goto IL_02d8;
		}
	}
	{
		V_9 = 1;
		goto IL_02e6;
	}

IL_02d8:
	{
	}

IL_02d9:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_146 = ___searchpoint0;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_147 = ___searchtri1;
		int32_t L_148;
		L_148 = TriangleLocator_PreciseLocate_mD13CEA3470E55338B4BCE6F87C864BE4AAC05306(__this, L_146, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_147, (bool)0, /*hidden argument*/NULL);
		V_9 = L_148;
		goto IL_02e6;
	}

IL_02e6:
	{
		int32_t L_149 = V_9;
		return L_149;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.TrianglePool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool__ctor_mC4F50512B89BDF25FAE6F8847325A89960D8EFE8 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m0914A0C5393C5C750B304D97FDEC085F4A24E85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_size_0(0);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(1, ((int32_t)64), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_2 = (TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0*)(TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0*)SZArrayNew(TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_pool_2(L_2);
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_3 = __this->get_pool_2();
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_4 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)SZArrayNew(TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)L_4);
		Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * L_5 = (Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA *)il2cpp_codegen_object_new(Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA_il2cpp_TypeInfo_var);
		Stack_1__ctor_m0914A0C5393C5C750B304D97FDEC085F4A24E85F(L_5, ((int32_t)1024), /*hidden argument*/Stack_1__ctor_m0914A0C5393C5C750B304D97FDEC085F4A24E85F_RuntimeMethod_var);
		__this->set_stack_3(L_5);
		return;
	}
}
// TriangleNet.Topology.Triangle TriangleNet.TrianglePool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * TrianglePool_Get_mB6255EF3A96B5BB116B2C50E1EACC54A6283A4BA (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisTriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_mB44FBF1E88D2D06833E12F2E81021A6A343191ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m536BD02DD251E79DF7F12966F9ABD37A3CC6E56E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m832EE5E78C80A0454D522E1172123DC49356D8E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * V_7 = NULL;
	{
		Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * L_0 = __this->get_stack_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_m832EE5E78C80A0454D522E1172123DC49356D8E5_inline(L_0, /*hidden argument*/Stack_1_get_Count_m832EE5E78C80A0454D522E1172123DC49356D8E5_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * L_3 = __this->get_stack_3();
		NullCheck(L_3);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4;
		L_4 = Stack_1_Pop_m536BD02DD251E79DF7F12966F9ABD37A3CC6E56E(L_3, /*hidden argument*/Stack_1_Pop_m536BD02DD251E79DF7F12966F9ABD37A3CC6E56E_RuntimeMethod_var);
		V_0 = L_4;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = V_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_hash_0();
		NullCheck(L_5);
		L_5->set_hash_0(((int32_t)il2cpp_codegen_subtract((int32_t)((-L_7)), (int32_t)1)));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_8 = V_0;
		TrianglePool_Cleanup_mE25746074803B18DE7CBB87995C6562F52BFB1F8(__this, L_8, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_003d:
	{
		int32_t L_9 = __this->get_count_1();
		int32_t L_10 = __this->get_size_0();
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0099;
		}
	}
	{
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_12 = __this->get_pool_2();
		int32_t L_13 = __this->get_count_1();
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)((int32_t)L_13/(int32_t)((int32_t)1024)));
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_15 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = __this->get_count_1();
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)((int32_t)L_16%(int32_t)((int32_t)1024)));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = L_18;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_19 = V_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_hash_0();
		NullCheck(L_19);
		L_19->set_id_1(L_21);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_22 = V_0;
		TrianglePool_Cleanup_mE25746074803B18DE7CBB87995C6562F52BFB1F8(__this, L_22, /*hidden argument*/NULL);
		int32_t L_23 = __this->get_count_1();
		__this->set_count_1(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		goto IL_0146;
	}

IL_0099:
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_24 = (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)il2cpp_codegen_object_new(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769_il2cpp_TypeInfo_var);
		Triangle__ctor_mAD400A1F90068FF5221A3C075D086B9128AA8419(L_24, /*hidden argument*/NULL);
		V_0 = L_24;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_25 = V_0;
		int32_t L_26 = __this->get_size_0();
		NullCheck(L_25);
		L_25->set_hash_0(L_26);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_27 = V_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_hash_0();
		NullCheck(L_27);
		L_27->set_id_1(L_29);
		int32_t L_30 = __this->get_size_0();
		V_3 = ((int32_t)((int32_t)L_30/(int32_t)((int32_t)1024)));
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_31 = __this->get_pool_2();
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_34 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = (bool)((((RuntimeObject*)(TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)L_34) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_35 = V_4;
		if (!L_35)
		{
			goto IL_0115;
		}
	}
	{
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_36 = __this->get_pool_2();
		int32_t L_37 = V_3;
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_38 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)SZArrayNew(TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)L_38);
		int32_t L_39 = V_3;
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_40 = __this->get_pool_2();
		NullCheck(L_40);
		V_5 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))? 1 : 0);
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_0114;
		}
	}
	{
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0** L_42 = __this->get_address_of_pool_2();
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_43 = __this->get_pool_2();
		NullCheck(L_43);
		Array_Resize_TisTriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_mB44FBF1E88D2D06833E12F2E81021A6A343191ED((TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0**)L_42, ((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))), /*hidden argument*/Array_Resize_TisTriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003_mB44FBF1E88D2D06833E12F2E81021A6A343191ED_RuntimeMethod_var);
	}

IL_0114:
	{
	}

IL_0115:
	{
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_44 = __this->get_pool_2();
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_47 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = __this->get_size_0();
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_49 = V_0;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_49);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_48%(int32_t)((int32_t)1024)))), (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)L_49);
		int32_t L_50 = __this->get_size_0();
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = V_6;
		__this->set_size_0(L_51);
		int32_t L_52 = V_6;
		__this->set_count_1(L_52);
	}

IL_0146:
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_53 = V_0;
		V_7 = L_53;
		goto IL_014b;
	}

IL_014b:
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_54 = V_7;
		return L_54;
	}
}
// System.Void TriangleNet.TrianglePool::Release(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Release_mE0C863F4E75F0936EB540CEA154D9972855869F7 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___triangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF5FBDB41C42591BF6A595D5659949DD1A057AA84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * L_0 = __this->get_stack_3();
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = ___triangle0;
		NullCheck(L_0);
		Stack_1_Push_mF5FBDB41C42591BF6A595D5659949DD1A057AA84(L_0, L_1, /*hidden argument*/Stack_1_Push_mF5FBDB41C42591BF6A595D5659949DD1A057AA84_RuntimeMethod_var);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_2 = ___triangle0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_3 = ___triangle0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_hash_0();
		NullCheck(L_2);
		L_2->set_hash_0(((int32_t)il2cpp_codegen_subtract((int32_t)((-L_4)), (int32_t)1)));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::Sample(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_Sample_m4159A65BE9FBC99A6039C2D19F92C49D530B2C24 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, int32_t ___k0, Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_0 = (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 *)il2cpp_codegen_object_new(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917_il2cpp_TypeInfo_var);
		U3CSampleU3Ed__9__ctor_m6494018DCB255A428F6E42EB67EB8ED264DC6E42(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_7(__this);
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_2 = L_1;
		int32_t L_3 = ___k0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__k_4(L_3);
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_4 = L_2;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = ___random1;
		NullCheck(L_4);
		L_4->set_U3CU3E3__random_6(L_5);
		return L_4;
	}
}
// System.Void TriangleNet.TrianglePool::Cleanup(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Cleanup_mE25746074803B18DE7CBB87995C6562F52BFB1F8 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___triangle0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = ___triangle0;
		NullCheck(L_0);
		L_0->set_label_5(0);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = ___triangle0;
		NullCheck(L_1);
		L_1->set_area_6((0.0));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_2 = ___triangle0;
		NullCheck(L_2);
		L_2->set_infected_7((bool)0);
		V_0 = 0;
		goto IL_0055;
	}

IL_0022:
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_3 = ___triangle0;
		NullCheck(L_3);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_4 = L_3->get_vertices_3();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, NULL);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)NULL);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_6 = ___triangle0;
		NullCheck(L_6);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_7 = L_6->get_subsegs_4();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_initobj(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_9 = ___triangle0;
		NullCheck(L_9);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_10 = L_9->get_neighbors_2();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		il2cpp_codegen_initobj(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_13 = V_0;
		V_1 = (bool)((((int32_t)L_13) < ((int32_t)3))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// System.Void TriangleNet.TrianglePool::Add(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Add_m8338D5F431E1DCDA542B341555BF150FCFBCAEFB (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___item0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrianglePool_Add_m8338D5F431E1DCDA542B341555BF150FCFBCAEFB_RuntimeMethod_var)));
	}
}
// System.Void TriangleNet.TrianglePool::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Clear_mF95F42C3F9DB3DCB7D363851CC61429F85D9E506 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m404B01AB176E4F0058C225D51A0D2425190BAF28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	{
		Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * L_0 = __this->get_stack_3();
		NullCheck(L_0);
		Stack_1_Clear_m404B01AB176E4F0058C225D51A0D2425190BAF28(L_0, /*hidden argument*/Stack_1_Clear_m404B01AB176E4F0058C225D51A0D2425190BAF28_RuntimeMethod_var);
		int32_t L_1 = __this->get_size_0();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_1/(int32_t)((int32_t)1024))), (int32_t)1));
		V_1 = 0;
		goto IL_0061;
	}

IL_0020:
	{
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_2 = __this->get_pool_2();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_5 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = __this->get_size_0();
		int32_t L_7 = V_1;
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)1024)))))%(int32_t)((int32_t)1024)));
		V_4 = 0;
		goto IL_0051;
	}

IL_0044:
	{
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_8 = V_2;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, NULL);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)NULL);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		V_5 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_18 = 0;
		V_7 = L_18;
		__this->set_count_1(L_18);
		int32_t L_19 = V_7;
		__this->set_size_0(L_19);
		return;
	}
}
// System.Boolean TriangleNet.TrianglePool::Contains(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_Contains_mD45AB7AF175BE00BD1ACEBA1DAF848C25E5E3D43 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_hash_0();
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_size_0();
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0045;
	}

IL_0021:
	{
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_6 = __this->get_pool_2();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((int32_t)L_7/(int32_t)((int32_t)1024)));
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_9 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)((int32_t)L_10%(int32_t)((int32_t)1024)));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		int32_t L_13 = L_12->get_hash_0();
		V_2 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0045:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void TriangleNet.TrianglePool::CopyTo(TriangleNet.Topology.Triangle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_CopyTo_m55EA765524E2293E501EEA16C7004B1E9730B3CA (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = TrianglePool_GetEnumerator_mEB6D2A03906B1D2B074F1E3DF7F33BF269E53411(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000a:
	{
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_1 = ___array0;
		int32_t L_2 = ___index1;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4;
		L_4 = InterfaceFuncInvoker0< Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>::get_Current() */, IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)L_4);
		int32_t L_5 = ___index1;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001a:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Int32 TriangleNet.TrianglePool::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrianglePool_get_Count_m102532C98782E7382EEAEBDF1CD10EE3366AB967 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m832EE5E78C80A0454D522E1172123DC49356D8E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_count_1();
		Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA * L_1 = __this->get_stack_3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Stack_1_get_Count_m832EE5E78C80A0454D522E1172123DC49356D8E5_inline(L_1, /*hidden argument*/Stack_1_get_Count_m832EE5E78C80A0454D522E1172123DC49356D8E5_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2));
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean TriangleNet.TrianglePool::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_get_IsReadOnly_m2AD0349E1F5BDF02A951AC8AD6F2C7E4884DE8E4 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean TriangleNet.TrianglePool::Remove(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_Remove_mA26728B675F137898C4655B9B4E7217A56A4D250 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___item0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrianglePool_Remove_mA26728B675F137898C4655B9B4E7217A56A4D250_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_GetEnumerator_mEB6D2A03906B1D2B074F1E3DF7F33BF269E53411 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC * L_0 = (Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC *)il2cpp_codegen_object_new(Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC_il2cpp_TypeInfo_var);
		Enumerator__ctor_mB9199B9BA5754DD7B08DA89719518D03DDBC399E(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator TriangleNet.TrianglePool::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_System_Collections_IEnumerable_GetEnumerator_mDE9B2017D37645B2A0DB0CA05F66D913340E7B3C (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = TrianglePool_GetEnumerator_mEB6D2A03906B1D2B074F1E3DF7F33BF269E53411(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.TriangleSampler::.ctor(TriangleNet.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_mCD79F3A39688F9FBBF3820FB4739F84328BC096B (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_0 = ___mesh0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4(L_1, ((int32_t)110503), /*hidden argument*/NULL);
		TriangleSampler__ctor_mA47F7CA0A38B714EF864B4633A12F9E8D4FD51FC(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.TriangleSampler::.ctor(TriangleNet.Mesh,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_mA47F7CA0A38B714EF864B4633A12F9E8D4FD51FC (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh0, Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random1, const RuntimeMethod* method)
{
	{
		__this->set_samples_2(1);
		__this->set_triangleCount_3(0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_0 = ___mesh0;
		__this->set_mesh_1(L_0);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = ___random1;
		__this->set_random_0(L_1);
		return;
	}
}
// System.Void TriangleNet.TriangleSampler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler_Update_mCD74FE8B65BE83A413687517C53AF4699637AE29 (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_0 = __this->get_mesh_1();
		NullCheck(L_0);
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_1 = L_0->get_triangles_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TrianglePool_get_Count_m102532C98782E7382EEAEBDF1CD10EE3366AB967(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = __this->get_triangleCount_3();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_6 = V_0;
		__this->set_triangleCount_3(L_6);
		goto IL_003c;
	}

IL_002c:
	{
		int32_t L_7 = __this->get_samples_2();
		__this->set_samples_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_003c:
	{
		int32_t L_8 = __this->get_samples_2();
		int32_t L_9 = __this->get_samples_2();
		int32_t L_10 = __this->get_samples_2();
		int32_t L_11 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)11), (int32_t)L_8)), (int32_t)L_9)), (int32_t)L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_002c;
		}
	}
	{
	}

IL_005b:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TriangleSampler::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_GetEnumerator_m0F395E86E7214D0C7DE9B89AB41428F69EB9FB3C (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9A6E1D399FA719D00C531640E72ABD1D808184AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_0 = __this->get_mesh_1();
		NullCheck(L_0);
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_1 = L_0->get_triangles_4();
		int32_t L_2 = __this->get_samples_2();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_3 = __this->get_random_0();
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = TrianglePool_Sample_m4159A65BE9FBC99A6039C2D19F92C49D530B2C24(L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle>::GetEnumerator() */, IEnumerable_1_t9A6E1D399FA719D00C531640E72ABD1D808184AA_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator TriangleNet.TriangleSampler::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_System_Collections_IEnumerable_GetEnumerator_m8AF46E0323CCBD11C4746DEC5A1DB84130427271 (TriangleSampler_tDF92E929459B63118C834A3614A8AF2F952A426A * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = TriangleSampler_GetEnumerator_m0F395E86E7214D0C7DE9B89AB41428F69EB9FB3C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mF1D1BB39539F7DBD48BF36A8FBE7803701450AA8 (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * __this, double ___x0, double ___y1, const RuntimeMethod* method)
{
	{
		double L_0 = ___x0;
		double L_1 = ___y1;
		Vertex__ctor_m0D80EBCF4D788A02DA86505A125FA384E75F8DEB(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m0D80EBCF4D788A02DA86505A125FA384E75F8DEB (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * __this, double ___x0, double ___y1, int32_t ___mark2, const RuntimeMethod* method)
{
	{
		double L_0 = ___x0;
		double L_1 = ___y1;
		int32_t L_2 = ___mark2;
		Point__ctor_m7A91AF5B4270707B1947805925BE2913F7EE38B6(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_type_6(0);
		return;
	}
}
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Double,System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mCD6917C5503DAFB577D0E0A470129994192BF4ED (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * __this, double ___x0, double ___y1, int32_t ___mark2, int32_t ___attribs3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		double L_0 = ___x0;
		double L_1 = ___y1;
		int32_t L_2 = ___mark2;
		Vertex__ctor_m0D80EBCF4D788A02DA86505A125FA384E75F8DEB(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___attribs3;
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_5 = ___attribs3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_6 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->set_attributes_5(L_6);
	}

IL_0023:
	{
		return;
	}
}
// System.Int32 TriangleNet.Geometry.Vertex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vertex_GetHashCode_m6E805DCF3811AF5AB228F2D2654ACE9653F3D0DF (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_hash_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Tools.VertexSorter::.ctor(TriangleNet.Geometry.Vertex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter__ctor_m1A771194C3DD46958B7C0E2FD46247EB3B5E6C91 (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ___points0, int32_t ___seed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_0 = ___points0;
		__this->set_points_1(L_0);
		int32_t L_1 = ___seed1;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4(L_2, L_1, /*hidden argument*/NULL);
		__this->set_rand_0(L_2);
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::Sort(TriangleNet.Geometry.Vertex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_Sort_m1A32A3889031AFDE0753A57FB95756EC0E54DF5E (VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ___array0, int32_t ___seed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * V_0 = NULL;
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_0 = ___array0;
		int32_t L_1 = ___seed1;
		VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * L_2 = (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F *)il2cpp_codegen_object_new(VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F_il2cpp_TypeInfo_var);
		VertexSorter__ctor_m1A771194C3DD46958B7C0E2FD46247EB3B5E6C91(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * L_3 = V_0;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_4 = ___array0;
		NullCheck(L_4);
		NullCheck(L_3);
		VertexSorter_QuickSort_mEBC0B182AC20E28E8247424C33DD51AABB7A5668(L_3, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::Alternate(TriangleNet.Geometry.Vertex[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_Alternate_mF01144919CDF9B4A90FEB30BBDB45A3CC0866228 (VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ___array0, int32_t ___length1, int32_t ___seed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_0 = ___array0;
		int32_t L_1 = ___seed2;
		VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * L_2 = (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F *)il2cpp_codegen_object_new(VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F_il2cpp_TypeInfo_var);
		VertexSorter__ctor_m1A771194C3DD46958B7C0E2FD46247EB3B5E6C91(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = ___length1;
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)1));
		int32_t L_4 = ___length1;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		VertexSorter_AlternateAxes_m6492595CA940955473007488523ED4C8682A8E5A(L_9, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), 1, /*hidden argument*/NULL);
	}

IL_0034:
	{
		VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = ___length1;
		NullCheck(L_11);
		VertexSorter_AlternateAxes_m6492595CA940955473007488523ED4C8682A8E5A(L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), 1, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::QuickSort(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_QuickSort_mEBC0B182AC20E28E8247424C33DD51AABB7A5668 (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, int32_t ___left0, int32_t ___right1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_6 = NULL;
	VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B38_0 = 0;
	{
		int32_t L_0 = ___left0;
		V_0 = L_0;
		int32_t L_1 = ___right1;
		V_1 = L_1;
		int32_t L_2 = ___right1;
		int32_t L_3 = ___left0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), (int32_t)1));
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_4 = __this->get_points_1();
		V_7 = L_4;
		int32_t L_5 = V_2;
		V_8 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_7 = ___left0;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_00ad;
	}

IL_002c:
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_8 = V_7;
		int32_t L_9 = V_9;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_10 = L_11;
		int32_t L_12 = V_9;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		goto IL_0050;
	}

IL_003c:
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_13 = V_7;
		int32_t L_14 = V_11;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_15 = V_7;
		int32_t L_16 = V_11;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_18);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_18);
		int32_t L_19 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_20 = V_11;
		int32_t L_21 = ___left0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0096;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_22 = V_7;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		double L_26 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_25)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_27 = V_10;
		NullCheck(L_27);
		double L_28 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_27)->get_x_2();
		if ((((double)L_26) > ((double)L_28)))
		{
			goto IL_0093;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_29 = V_7;
		int32_t L_30 = V_11;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		double L_33 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_32)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_34 = V_10;
		NullCheck(L_34);
		double L_35 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_34)->get_x_2();
		if ((!(((double)L_33) == ((double)L_35))))
		{
			goto IL_0090;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_36 = V_7;
		int32_t L_37 = V_11;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		double L_40 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_39)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_41 = V_10;
		NullCheck(L_41);
		double L_42 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_41)->get_y_3();
		G_B9_0 = ((((double)L_40) > ((double)L_42))? 1 : 0);
		goto IL_0091;
	}

IL_0090:
	{
		G_B9_0 = 0;
	}

IL_0091:
	{
		G_B11_0 = G_B9_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B11_0 = 1;
	}

IL_0094:
	{
		G_B13_0 = G_B11_0;
		goto IL_0097;
	}

IL_0096:
	{
		G_B13_0 = 0;
	}

IL_0097:
	{
		V_12 = (bool)G_B13_0;
		bool L_43 = V_12;
		if (L_43)
		{
			goto IL_003c;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_44 = V_7;
		int32_t L_45 = V_11;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_46 = V_10;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_46);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1))), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_46);
		int32_t L_47 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00ad:
	{
		int32_t L_48 = V_9;
		int32_t L_49 = ___right1;
		V_13 = (bool)((((int32_t)((((int32_t)L_48) > ((int32_t)L_49))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_13;
		if (L_50)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01d5;
	}

IL_00c3:
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_51 = __this->get_rand_0();
		int32_t L_52 = ___left0;
		int32_t L_53 = ___right1;
		NullCheck(L_51);
		int32_t L_54;
		L_54 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_51, L_52, L_53);
		V_3 = L_54;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_55 = V_7;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		double L_59 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_58)->get_x_2();
		V_4 = L_59;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_60 = V_7;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		double L_64 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_63)->get_y_3();
		V_5 = L_64;
		int32_t L_65 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		int32_t L_66 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		goto IL_019a;
	}

IL_00f6:
	{
	}

IL_00f7:
	{
		int32_t L_67 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		int32_t L_68 = ___left0;
		int32_t L_69 = ___right1;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_0131;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_70 = V_7;
		int32_t L_71 = ___left0;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		double L_74 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_73)->get_x_2();
		double L_75 = V_4;
		if ((((double)L_74) < ((double)L_75)))
		{
			goto IL_012e;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_76 = V_7;
		int32_t L_77 = ___left0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		double L_80 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_79)->get_x_2();
		double L_81 = V_4;
		if ((!(((double)L_80) == ((double)L_81))))
		{
			goto IL_012b;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_82 = V_7;
		int32_t L_83 = ___left0;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		double L_86 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_85)->get_y_3();
		double L_87 = V_5;
		G_B24_0 = ((((double)L_86) < ((double)L_87))? 1 : 0);
		goto IL_012c;
	}

IL_012b:
	{
		G_B24_0 = 0;
	}

IL_012c:
	{
		G_B26_0 = G_B24_0;
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		G_B28_0 = G_B26_0;
		goto IL_0132;
	}

IL_0131:
	{
		G_B28_0 = 0;
	}

IL_0132:
	{
		V_14 = (bool)G_B28_0;
		bool L_88 = V_14;
		if (L_88)
		{
			goto IL_00f7;
		}
	}

IL_0138:
	{
		int32_t L_89 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1));
		int32_t L_90 = ___left0;
		int32_t L_91 = ___right1;
		if ((((int32_t)L_90) > ((int32_t)L_91)))
		{
			goto IL_0172;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_92 = V_7;
		int32_t L_93 = ___right1;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		double L_96 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_95)->get_x_2();
		double L_97 = V_4;
		if ((((double)L_96) > ((double)L_97)))
		{
			goto IL_016f;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_98 = V_7;
		int32_t L_99 = ___right1;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		double L_102 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_101)->get_x_2();
		double L_103 = V_4;
		if ((!(((double)L_102) == ((double)L_103))))
		{
			goto IL_016c;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_104 = V_7;
		int32_t L_105 = ___right1;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		double L_108 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_107)->get_y_3();
		double L_109 = V_5;
		G_B34_0 = ((((double)L_108) > ((double)L_109))? 1 : 0);
		goto IL_016d;
	}

IL_016c:
	{
		G_B34_0 = 0;
	}

IL_016d:
	{
		G_B36_0 = G_B34_0;
		goto IL_0170;
	}

IL_016f:
	{
		G_B36_0 = 1;
	}

IL_0170:
	{
		G_B38_0 = G_B36_0;
		goto IL_0173;
	}

IL_0172:
	{
		G_B38_0 = 0;
	}

IL_0173:
	{
		V_15 = (bool)G_B38_0;
		bool L_110 = V_15;
		if (L_110)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_111 = ___left0;
		int32_t L_112 = ___right1;
		V_16 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_16;
		if (!L_113)
		{
			goto IL_0199;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_114 = V_7;
		int32_t L_115 = ___left0;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_6 = L_117;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_118 = V_7;
		int32_t L_119 = ___left0;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_120 = V_7;
		int32_t L_121 = ___right1;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_123);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_123);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_124 = V_7;
		int32_t L_125 = ___right1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_126 = V_6;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_126);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_126);
	}

IL_0199:
	{
	}

IL_019a:
	{
		int32_t L_127 = ___left0;
		int32_t L_128 = ___right1;
		V_17 = (bool)((((int32_t)L_127) < ((int32_t)L_128))? 1 : 0);
		bool L_129 = V_17;
		if (L_129)
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_130 = ___left0;
		int32_t L_131 = V_0;
		V_18 = (bool)((((int32_t)L_130) > ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_18;
		if (!L_132)
		{
			goto IL_01bc;
		}
	}
	{
		int32_t L_133 = V_0;
		int32_t L_134 = ___left0;
		VertexSorter_QuickSort_mEBC0B182AC20E28E8247424C33DD51AABB7A5668(__this, L_133, L_134, /*hidden argument*/NULL);
	}

IL_01bc:
	{
		int32_t L_135 = V_1;
		int32_t L_136 = ___right1;
		V_19 = (bool)((((int32_t)L_135) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1))))? 1 : 0);
		bool L_137 = V_19;
		if (!L_137)
		{
			goto IL_01d5;
		}
	}
	{
		int32_t L_138 = ___right1;
		int32_t L_139 = V_1;
		VertexSorter_QuickSort_mEBC0B182AC20E28E8247424C33DD51AABB7A5668(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1)), L_139, /*hidden argument*/NULL);
	}

IL_01d5:
	{
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::AlternateAxes(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_AlternateAxes_m6492595CA940955473007488523ED4C8682A8E5A (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, int32_t ___left0, int32_t ___right1, int32_t ___axis2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = ___right1;
		int32_t L_1 = ___left0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)1));
		int32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		___axis2 = 0;
	}

IL_001b:
	{
		int32_t L_5 = ___axis2;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___left0;
		int32_t L_8 = ___right1;
		int32_t L_9 = ___left0;
		int32_t L_10 = V_1;
		VertexSorter_VertexMedianX_m888B919653A2936574A0A7A1857D030AE952279F(__this, L_7, L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0033:
	{
		int32_t L_11 = ___left0;
		int32_t L_12 = ___right1;
		int32_t L_13 = ___left0;
		int32_t L_14 = V_1;
		VertexSorter_VertexMedianY_m72B7085C6CCA9EF32F54EFCF780988F2993679B7(__this, L_11, L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), /*hidden argument*/NULL);
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_18 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_20 = ___left0;
		int32_t L_21 = ___left0;
		int32_t L_22 = V_1;
		int32_t L_23 = ___axis2;
		VertexSorter_AlternateAxes_m6492595CA940955473007488523ED4C8682A8E5A(__this, L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)), (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_23)), /*hidden argument*/NULL);
	}

IL_0070:
	{
		int32_t L_24 = ___left0;
		int32_t L_25 = V_1;
		int32_t L_26 = ___right1;
		int32_t L_27 = ___axis2;
		VertexSorter_AlternateAxes_m6492595CA940955473007488523ED4C8682A8E5A(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25)), L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_27)), /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::VertexMedianX(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianX_m888B919653A2936574A0A7A1857D030AE952279F (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, int32_t ___left0, int32_t ___right1, int32_t ___median2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_6 = NULL;
	VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B31_0 = 0;
	{
		int32_t L_0 = ___right1;
		int32_t L_1 = ___left0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		int32_t L_2 = ___left0;
		V_1 = L_2;
		int32_t L_3 = ___right1;
		V_2 = L_3;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_4 = __this->get_points_1();
		V_7 = L_4;
		int32_t L_5 = V_0;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_7 = V_7;
		int32_t L_8 = ___left0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		double L_11 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_10)->get_x_2();
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_12 = V_7;
		int32_t L_13 = ___right1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		double L_16 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_15)->get_x_2();
		if ((((double)L_11) > ((double)L_16)))
		{
			goto IL_005f;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_17 = V_7;
		int32_t L_18 = ___left0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		double L_21 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_20)->get_x_2();
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_22 = V_7;
		int32_t L_23 = ___right1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		double L_26 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_25)->get_x_2();
		if ((!(((double)L_21) == ((double)L_26))))
		{
			goto IL_005c;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_27 = V_7;
		int32_t L_28 = ___left0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		double L_31 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_30)->get_y_3();
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_32 = V_7;
		int32_t L_33 = ___right1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		double L_36 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_35)->get_y_3();
		G_B5_0 = ((((double)L_31) > ((double)L_36))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
	}

IL_005d:
	{
		G_B7_0 = G_B5_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 1;
	}

IL_0060:
	{
		V_9 = (bool)G_B7_0;
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_007c;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_38 = V_7;
		int32_t L_39 = ___right1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_6 = L_41;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_42 = V_7;
		int32_t L_43 = ___right1;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_44 = V_7;
		int32_t L_45 = ___left0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_47);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_47);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_48 = V_7;
		int32_t L_49 = ___left0;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_50 = V_6;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_50);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_50);
	}

IL_007c:
	{
		goto IL_0197;
	}

IL_0081:
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_51 = __this->get_rand_0();
		int32_t L_52 = ___left0;
		int32_t L_53 = ___right1;
		NullCheck(L_51);
		int32_t L_54;
		L_54 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_51, L_52, L_53);
		V_3 = L_54;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_55 = V_7;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		double L_59 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_58)->get_x_2();
		V_4 = L_59;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_60 = V_7;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		double L_64 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_63)->get_y_3();
		V_5 = L_64;
		int32_t L_65 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		int32_t L_66 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		goto IL_0158;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		int32_t L_67 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		int32_t L_68 = ___left0;
		int32_t L_69 = ___right1;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_00ef;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_70 = V_7;
		int32_t L_71 = ___left0;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		double L_74 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_73)->get_x_2();
		double L_75 = V_4;
		if ((((double)L_74) < ((double)L_75)))
		{
			goto IL_00ec;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_76 = V_7;
		int32_t L_77 = ___left0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		double L_80 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_79)->get_x_2();
		double L_81 = V_4;
		if ((!(((double)L_80) == ((double)L_81))))
		{
			goto IL_00e9;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_82 = V_7;
		int32_t L_83 = ___left0;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		double L_86 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_85)->get_y_3();
		double L_87 = V_5;
		G_B17_0 = ((((double)L_86) < ((double)L_87))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B17_0 = 0;
	}

IL_00ea:
	{
		G_B19_0 = G_B17_0;
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B19_0 = 1;
	}

IL_00ed:
	{
		G_B21_0 = G_B19_0;
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B21_0 = 0;
	}

IL_00f0:
	{
		V_10 = (bool)G_B21_0;
		bool L_88 = V_10;
		if (L_88)
		{
			goto IL_00b5;
		}
	}

IL_00f6:
	{
		int32_t L_89 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1));
		int32_t L_90 = ___left0;
		int32_t L_91 = ___right1;
		if ((((int32_t)L_90) > ((int32_t)L_91)))
		{
			goto IL_0130;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_92 = V_7;
		int32_t L_93 = ___right1;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		double L_96 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_95)->get_x_2();
		double L_97 = V_4;
		if ((((double)L_96) > ((double)L_97)))
		{
			goto IL_012d;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_98 = V_7;
		int32_t L_99 = ___right1;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		double L_102 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_101)->get_x_2();
		double L_103 = V_4;
		if ((!(((double)L_102) == ((double)L_103))))
		{
			goto IL_012a;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_104 = V_7;
		int32_t L_105 = ___right1;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		double L_108 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_107)->get_y_3();
		double L_109 = V_5;
		G_B27_0 = ((((double)L_108) > ((double)L_109))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B27_0 = 0;
	}

IL_012b:
	{
		G_B29_0 = G_B27_0;
		goto IL_012e;
	}

IL_012d:
	{
		G_B29_0 = 1;
	}

IL_012e:
	{
		G_B31_0 = G_B29_0;
		goto IL_0131;
	}

IL_0130:
	{
		G_B31_0 = 0;
	}

IL_0131:
	{
		V_11 = (bool)G_B31_0;
		bool L_110 = V_11;
		if (L_110)
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_111 = ___left0;
		int32_t L_112 = ___right1;
		V_12 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_12;
		if (!L_113)
		{
			goto IL_0157;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_114 = V_7;
		int32_t L_115 = ___left0;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_6 = L_117;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_118 = V_7;
		int32_t L_119 = ___left0;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_120 = V_7;
		int32_t L_121 = ___right1;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_123);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_123);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_124 = V_7;
		int32_t L_125 = ___right1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_126 = V_6;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_126);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_126);
	}

IL_0157:
	{
	}

IL_0158:
	{
		int32_t L_127 = ___left0;
		int32_t L_128 = ___right1;
		V_13 = (bool)((((int32_t)L_127) < ((int32_t)L_128))? 1 : 0);
		bool L_129 = V_13;
		if (L_129)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_130 = ___left0;
		int32_t L_131 = ___median2;
		V_14 = (bool)((((int32_t)L_130) > ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_14;
		if (!L_132)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_133 = V_1;
		int32_t L_134 = ___left0;
		int32_t L_135 = ___median2;
		VertexSorter_VertexMedianX_m888B919653A2936574A0A7A1857D030AE952279F(__this, L_133, ((int32_t)il2cpp_codegen_subtract((int32_t)L_134, (int32_t)1)), L_135, /*hidden argument*/NULL);
	}

IL_017d:
	{
		int32_t L_136 = ___right1;
		int32_t L_137 = ___median2;
		V_15 = (bool)((((int32_t)L_136) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)1))))? 1 : 0);
		bool L_138 = V_15;
		if (!L_138)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_139 = ___right1;
		int32_t L_140 = V_2;
		int32_t L_141 = ___median2;
		VertexSorter_VertexMedianX_m888B919653A2936574A0A7A1857D030AE952279F(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1)), L_140, L_141, /*hidden argument*/NULL);
	}

IL_0197:
	{
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::VertexMedianY(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianY_m72B7085C6CCA9EF32F54EFCF780988F2993679B7 (VertexSorter_tCFFD8971B8D39161A39DDEB7C196E852F950121F * __this, int32_t ___left0, int32_t ___right1, int32_t ___median2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_6 = NULL;
	VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B31_0 = 0;
	{
		int32_t L_0 = ___right1;
		int32_t L_1 = ___left0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		int32_t L_2 = ___left0;
		V_1 = L_2;
		int32_t L_3 = ___right1;
		V_2 = L_3;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_4 = __this->get_points_1();
		V_7 = L_4;
		int32_t L_5 = V_0;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_7 = V_7;
		int32_t L_8 = ___left0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		double L_11 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_10)->get_y_3();
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_12 = V_7;
		int32_t L_13 = ___right1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		double L_16 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_15)->get_y_3();
		if ((((double)L_11) > ((double)L_16)))
		{
			goto IL_005f;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_17 = V_7;
		int32_t L_18 = ___left0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		double L_21 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_20)->get_y_3();
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_22 = V_7;
		int32_t L_23 = ___right1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		double L_26 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_25)->get_y_3();
		if ((!(((double)L_21) == ((double)L_26))))
		{
			goto IL_005c;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_27 = V_7;
		int32_t L_28 = ___left0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		double L_31 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_30)->get_x_2();
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_32 = V_7;
		int32_t L_33 = ___right1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		double L_36 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_35)->get_x_2();
		G_B5_0 = ((((double)L_31) > ((double)L_36))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
	}

IL_005d:
	{
		G_B7_0 = G_B5_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 1;
	}

IL_0060:
	{
		V_9 = (bool)G_B7_0;
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_007c;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_38 = V_7;
		int32_t L_39 = ___right1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_6 = L_41;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_42 = V_7;
		int32_t L_43 = ___right1;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_44 = V_7;
		int32_t L_45 = ___left0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_47);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_47);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_48 = V_7;
		int32_t L_49 = ___left0;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_50 = V_6;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_50);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_50);
	}

IL_007c:
	{
		goto IL_0197;
	}

IL_0081:
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_51 = __this->get_rand_0();
		int32_t L_52 = ___left0;
		int32_t L_53 = ___right1;
		NullCheck(L_51);
		int32_t L_54;
		L_54 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_51, L_52, L_53);
		V_3 = L_54;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_55 = V_7;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		double L_59 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_58)->get_y_3();
		V_4 = L_59;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_60 = V_7;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		double L_64 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_63)->get_x_2();
		V_5 = L_64;
		int32_t L_65 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		int32_t L_66 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		goto IL_0158;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		int32_t L_67 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		int32_t L_68 = ___left0;
		int32_t L_69 = ___right1;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_00ef;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_70 = V_7;
		int32_t L_71 = ___left0;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		double L_74 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_73)->get_y_3();
		double L_75 = V_4;
		if ((((double)L_74) < ((double)L_75)))
		{
			goto IL_00ec;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_76 = V_7;
		int32_t L_77 = ___left0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		double L_80 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_79)->get_y_3();
		double L_81 = V_4;
		if ((!(((double)L_80) == ((double)L_81))))
		{
			goto IL_00e9;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_82 = V_7;
		int32_t L_83 = ___left0;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		double L_86 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_85)->get_x_2();
		double L_87 = V_5;
		G_B17_0 = ((((double)L_86) < ((double)L_87))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B17_0 = 0;
	}

IL_00ea:
	{
		G_B19_0 = G_B17_0;
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B19_0 = 1;
	}

IL_00ed:
	{
		G_B21_0 = G_B19_0;
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B21_0 = 0;
	}

IL_00f0:
	{
		V_10 = (bool)G_B21_0;
		bool L_88 = V_10;
		if (L_88)
		{
			goto IL_00b5;
		}
	}

IL_00f6:
	{
		int32_t L_89 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1));
		int32_t L_90 = ___left0;
		int32_t L_91 = ___right1;
		if ((((int32_t)L_90) > ((int32_t)L_91)))
		{
			goto IL_0130;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_92 = V_7;
		int32_t L_93 = ___right1;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		double L_96 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_95)->get_y_3();
		double L_97 = V_4;
		if ((((double)L_96) > ((double)L_97)))
		{
			goto IL_012d;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_98 = V_7;
		int32_t L_99 = ___right1;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		double L_102 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_101)->get_y_3();
		double L_103 = V_4;
		if ((!(((double)L_102) == ((double)L_103))))
		{
			goto IL_012a;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_104 = V_7;
		int32_t L_105 = ___right1;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		double L_108 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_107)->get_x_2();
		double L_109 = V_5;
		G_B27_0 = ((((double)L_108) > ((double)L_109))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B27_0 = 0;
	}

IL_012b:
	{
		G_B29_0 = G_B27_0;
		goto IL_012e;
	}

IL_012d:
	{
		G_B29_0 = 1;
	}

IL_012e:
	{
		G_B31_0 = G_B29_0;
		goto IL_0131;
	}

IL_0130:
	{
		G_B31_0 = 0;
	}

IL_0131:
	{
		V_11 = (bool)G_B31_0;
		bool L_110 = V_11;
		if (L_110)
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_111 = ___left0;
		int32_t L_112 = ___right1;
		V_12 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_12;
		if (!L_113)
		{
			goto IL_0157;
		}
	}
	{
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_114 = V_7;
		int32_t L_115 = ___left0;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_6 = L_117;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_118 = V_7;
		int32_t L_119 = ___left0;
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_120 = V_7;
		int32_t L_121 = ___right1;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_123);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_123);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_124 = V_7;
		int32_t L_125 = ___right1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_126 = V_6;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_126);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_126);
	}

IL_0157:
	{
	}

IL_0158:
	{
		int32_t L_127 = ___left0;
		int32_t L_128 = ___right1;
		V_13 = (bool)((((int32_t)L_127) < ((int32_t)L_128))? 1 : 0);
		bool L_129 = V_13;
		if (L_129)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_130 = ___left0;
		int32_t L_131 = ___median2;
		V_14 = (bool)((((int32_t)L_130) > ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_14;
		if (!L_132)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_133 = V_1;
		int32_t L_134 = ___left0;
		int32_t L_135 = ___median2;
		VertexSorter_VertexMedianY_m72B7085C6CCA9EF32F54EFCF780988F2993679B7(__this, L_133, ((int32_t)il2cpp_codegen_subtract((int32_t)L_134, (int32_t)1)), L_135, /*hidden argument*/NULL);
	}

IL_017d:
	{
		int32_t L_136 = ___right1;
		int32_t L_137 = ___median2;
		V_15 = (bool)((((int32_t)L_136) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)1))))? 1 : 0);
		bool L_138 = V_15;
		if (!L_138)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_139 = ___right1;
		int32_t L_140 = V_2;
		int32_t L_141 = ___median2;
		VertexSorter_VertexMedianY_m72B7085C6CCA9EF32F54EFCF780988F2993679B7(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1)), L_140, L_141, /*hidden argument*/NULL);
	}

IL_0197:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void TriangleNet.Configuration/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8F70B7C63AB2850D96EF61DE12657C1BB4CE852E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 * L_0 = (U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 *)il2cpp_codegen_object_new(U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1AAD862C863CAD6347D1B3F73D934800E4946788(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TriangleNet.Configuration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1AAD862C863CAD6347D1B3F73D934800E4946788 (U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// TriangleNet.IPredicates TriangleNet.Configuration/<>c::<.ctor>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__0_0_mF31DB0844DA81C833C76C90073BAC18C5BF7656E (U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * L_0;
		L_0 = RobustPredicates_get_Default_m6B2D1F4BFA42232CD3811AFA687BA72CB54C20FE(/*hidden argument*/NULL);
		return L_0;
	}
}
// TriangleNet.TrianglePool TriangleNet.Configuration/<>c::<.ctor>b__0_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * U3CU3Ec_U3C_ctorU3Eb__0_1_m134B3A3ED7A14F271E870D73DCB58744A28AEAE7 (U3CU3Ec_t75E5CBA87BFD499A9DAB29BCE9C06F72DB0E4BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_0 = (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 *)il2cpp_codegen_object_new(TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7_il2cpp_TypeInfo_var);
		TrianglePool__ctor_mC4F50512B89BDF25FAE6F8847325A89960D8EFE8(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m32118B75997FB1A8A03EA6FD162DA2E5444AD72D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD * L_0 = (U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD *)il2cpp_codegen_object_new(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4401ECCC69836CBBD26883A32BF2E11E6DACE257(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4401ECCC69836CBBD26883A32BF2E11E6DACE257 (U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TriangleNet.Meshing.Iterators.RegionIterator/<>c::<Process>b__3_0(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CProcessU3Eb__3_0_m5183BE7354C0190E7E8B1CB0757ECE3E05EF5217 (U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___seg0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = ___seg0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_hash_0();
		return (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE27EEE1A1133AD3DA60CFE655E54B5EED9D8D3EB (U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0::<Process>b__0(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CProcessU3Eb__0_m9D7177A56555A884127520D3C1E15DED9776CF1D (U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___tri0, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = ___tri0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_triangle_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_label_5();
		NullCheck(L_0);
		L_0->set_label_5(L_2);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_3 = ___tri0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4 = __this->get_triangle_0();
		NullCheck(L_4);
		double L_5 = L_4->get_area_6();
		NullCheck(L_3);
		L_3->set_area_6(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD7ABC9B865D62E64624A6A56B04BA78EA609C8DC (U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0::<Process>b__1(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CProcessU3Eb__1_mB36ADEFF5E662D133C6EF3156E68751BB9172F8B (U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___seg0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = ___seg0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_boundary_4();
		int32_t L_2 = __this->get_boundary_0();
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.TrianglePool/<Sample>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__9__ctor_m6494018DCB255A428F6E42EB67EB8ED264DC6E42 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void TriangleNet.TrianglePool/<Sample>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__9_System_IDisposable_Dispose_m76F09C0C96902F3AFC4A88D9FA846132B9CACA32 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TriangleNet.TrianglePool/<Sample>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSampleU3Ed__9_MoveNext_mCCB294F076FA508F27780FEF6BEB97D1E22FC806 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00d8;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_3 = __this->get_U3CU3E4__this_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TrianglePool_get_Count_m102532C98782E7382EEAEBDF1CD10EE3366AB967(L_3, /*hidden argument*/NULL);
		__this->set_U3CcountU3E5__2_9(L_4);
		int32_t L_5 = __this->get_k_3();
		int32_t L_6 = __this->get_U3CcountU3E5__2_9();
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_8 = __this->get_U3CcountU3E5__2_9();
		__this->set_k_3(L_8);
	}

IL_0054:
	{
		goto IL_00e1;
	}

IL_0059:
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_9 = __this->get_random_5();
		int32_t L_10 = __this->get_U3CcountU3E5__2_9();
		NullCheck(L_9);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_9, 0, L_10);
		__this->set_U3CiU3E5__1_8(L_11);
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_12 = __this->get_U3CU3E4__this_7();
		NullCheck(L_12);
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_13 = L_12->get_pool_2();
		int32_t L_14 = __this->get_U3CiU3E5__1_8();
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)((int32_t)L_14/(int32_t)((int32_t)1024)));
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_16 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = __this->get_U3CiU3E5__1_8();
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int32_t)L_17%(int32_t)((int32_t)1024)));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->set_U3CtU3E5__3_10(L_19);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_20 = __this->get_U3CtU3E5__3_10();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_hash_0();
		V_2 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_23 = __this->get_k_3();
		V_3 = L_23;
		int32_t L_24 = V_3;
		__this->set_k_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_25 = __this->get_U3CtU3E5__3_10();
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00e0:
	{
	}

IL_00e1:
	{
		int32_t L_26 = __this->get_k_3();
		V_4 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_4;
		if (L_27)
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}
}
// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/<Sample>d__9::System.Collections.Generic.IEnumerator<TriangleNet.Topology.Triangle>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * U3CSampleU3Ed__9_System_Collections_Generic_IEnumeratorU3CTriangleNet_Topology_TriangleU3E_get_Current_mCC2654FE71FA6E7BCC634944E2AEF029CF167CD2 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TriangleNet.TrianglePool/<Sample>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__9_System_Collections_IEnumerator_Reset_mC48B5E4F1BEE129E7254447641F133E47E0BC7CF (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSampleU3Ed__9_System_Collections_IEnumerator_Reset_mC48B5E4F1BEE129E7254447641F133E47E0BC7CF_RuntimeMethod_var)));
	}
}
// System.Object TriangleNet.TrianglePool/<Sample>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSampleU3Ed__9_System_Collections_IEnumerator_get_Current_m39237B2376427EC70B3D73C16CA33BE91BC13CF8 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool/<Sample>d__9::System.Collections.Generic.IEnumerable<TriangleNet.Topology.Triangle>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__9_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m64F896D396C4B7AF7ECC98F3F58B8FF0BC9BD500 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_4 = (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 *)il2cpp_codegen_object_new(U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917_il2cpp_TypeInfo_var);
		U3CSampleU3Ed__9__ctor_m6494018DCB255A428F6E42EB67EB8ED264DC6E42(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_5 = V_0;
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_6 = __this->get_U3CU3E4__this_7();
		NullCheck(L_5);
		L_5->set_U3CU3E4__this_7(L_6);
	}

IL_003a:
	{
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_7 = V_0;
		int32_t L_8 = __this->get_U3CU3E3__k_4();
		NullCheck(L_7);
		L_7->set_k_3(L_8);
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_9 = V_0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_10 = __this->get_U3CU3E3__random_6();
		NullCheck(L_9);
		L_9->set_random_5(L_10);
		U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator TriangleNet.TrianglePool/<Sample>d__9::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__9_System_Collections_IEnumerable_GetEnumerator_m7BBB4C23270EEC276C8124C326285CFFF2538E68 (U3CSampleU3Ed__9_t6471374BDDD2937E10A003CAA26373858FA94917 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSampleU3Ed__9_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m64F896D396C4B7AF7ECC98F3F58B8FF0BC9BD500(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.TrianglePool/Enumerator::.ctor(TriangleNet.TrianglePool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB9199B9BA5754DD7B08DA89719518D03DDBC399E (Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC * __this, TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * ___pool0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_0 = ___pool0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TrianglePool_get_Count_m102532C98782E7382EEAEBDF1CD10EE3366AB967(L_0, /*hidden argument*/NULL);
		__this->set_count_0(L_1);
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_2 = ___pool0;
		NullCheck(L_2);
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_3 = L_2->get_pool_2();
		__this->set_pool_1(L_3);
		__this->set_index_3(0);
		__this->set_offset_4(0);
		return;
	}
}
// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * Enumerator_get_Current_m8D04C9BBAA36DCF4F150975117711DA5A7E43391 (Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC * __this, const RuntimeMethod* method)
{
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * V_0 = NULL;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_current_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = V_0;
		return L_1;
	}
}
// System.Void TriangleNet.TrianglePool/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBFA417779C13324080C8257E5D7C6B5BCD8907A7 (Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Object TriangleNet.TrianglePool/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m7E1B508EFE29126DB42BB58FE3E7FB1CB8FE58A5 (Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_current_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean TriangleNet.TrianglePool/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m28F3A41BF44DD185BB3A69E732F4CE1721145BD7 (Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_0061;
	}

IL_0003:
	{
		TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0* L_0 = __this->get_pool_1();
		int32_t L_1 = __this->get_offset_4();
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)1024)));
		TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* L_3 = (TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003*)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->get_offset_4();
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)((int32_t)L_4%(int32_t)((int32_t)1024)));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->set_current_2(L_6);
		int32_t L_7 = __this->get_offset_4();
		__this->set_offset_4(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_8 = __this->get_current_2();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_hash_0();
		V_0 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		V_1 = (bool)1;
		goto IL_0077;
	}

IL_0060:
	{
	}

IL_0061:
	{
		int32_t L_12 = __this->get_index_3();
		int32_t L_13 = __this->get_count_0();
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0003;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0077;
	}

IL_0077:
	{
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Void TriangleNet.TrianglePool/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m898FB378E53BB2FF8483ECF43E186D1D65CD96D9 (Enumerator_tE523801761A318AC35FA4EF3821D2AC39E923BBC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->set_offset_4(L_0);
		int32_t L_1 = V_0;
		__this->set_index_3(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
