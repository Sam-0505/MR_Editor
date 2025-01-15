#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<TriangleNet.Topology.Triangle>
struct Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>
struct Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>
struct Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9;
// System.Func`1<TriangleNet.IPredicates>
struct Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<TriangleNet.TrianglePool>
struct Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>
struct Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD;
// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean>
struct Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291;
// System.Func`3<System.Object,System.Double,System.Boolean>
struct Func_3_t9829DA473A0894F4A06CE7861E430DF566EF6091;
// System.Collections.Generic.IEnumerable`1<TriangleNet.Geometry.ISegment>
struct IEnumerable_1_tE0DE1F95302B1806DA89B97017BA3A2DF0539B72;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<TriangleNet.Geometry.Vertex>
struct IEnumerable_1_t0709594168AFB0796E86FAC16B03D1D5798FAF36;
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>
struct IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>
struct ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,TriangleNet.Topology.SubSegment>
struct KeyCollection_t0E29E7764DD4FF610B0D6E0462B5BEEDA31B912D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,TriangleNet.Geometry.Vertex>
struct KeyCollection_tC6A4D463C1F055938E21F49AEB1EAF2C979956CC;
// System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment>
struct List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7;
// System.Collections.Generic.List`1<TriangleNet.Logging.LogItem>
struct List_1_tCE4BA4A74401AE82A6BD48312A07D06994ACFB60;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9;
// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>
struct List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20;
// System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>
struct List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>
struct List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB;
// System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg>
struct Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>
struct Stack_1_tD61E39E91DF948FEF880CFB7B5C05BECDBFCC552;
// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>
struct Stack_1_tF58AEA516B4D88BD1E2F25040EE4931F159EA3EA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriangleNet.Topology.SubSegment>
struct ValueCollection_t229C029B153F947A4549104056077BC114A5809C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriangleNet.Geometry.Vertex>
struct ValueCollection_tA34BAD9182E62B50DA96F6FE28958D0047EFE2D7;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,TriangleNet.Topology.SubSegment>[]
struct EntryU5BU5D_tDF2E052936C3D0E432CB01BEC5720B1E2E491FD5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,TriangleNet.Geometry.Vertex>[]
struct EntryU5BU5D_tB61344A86E2360302105734D2720668AD258A737;
// System.Double[][]
struct DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D;
// TriangleNet.Topology.Triangle[][]
struct TriangleU5BU5DU5BU5D_t2B23D496E9D5CB57915D99249B87AD4F66A5EDA0;
// TriangleNet.Meshing.Data.BadSubseg[]
struct BadSubsegU5BU5D_t2E8D27AFDFF62C598BC0F4E2B9B7C9CEAB4BE2B0;
// TriangleNet.Meshing.Data.BadTriangle[]
struct BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// TriangleNet.Geometry.ISegment[]
struct ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838;
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
// TriangleNet.Geometry.Point[]
struct PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415;
// TriangleNet.Geometry.RegionPointer[]
struct RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TriangleNet.Topology.Triangle[]
struct TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003;
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// TriangleNet.Meshing.Data.BadSubseg
struct BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A;
// TriangleNet.Meshing.Data.BadTriQueue
struct BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07;
// TriangleNet.Meshing.Data.BadTriangle
struct BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06;
// TriangleNet.Behavior
struct Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2;
// TriangleNet.Configuration
struct Configuration_tFD59B344AE38BF7070D6C1F6F933F10DB63BCA6A;
// TriangleNet.Geometry.Contour
struct Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// TriangleNet.IPredicates
struct IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE;
// TriangleNet.Geometry.ISegment
struct ISegment_tEAAF8539FFD2F474DC8FDF3C6B844BA3BB316BB0;
// TriangleNet.Geometry.ITriangle
struct ITriangle_t921A41DB0237BD0896214FF0036D597D7661A6A7;
// TriangleNet.Mesh
struct Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// TriangleNet.NewLocation
struct NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB;
// TriangleNet.Geometry.Point
struct Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73;
// TriangleNet.Geometry.Polygon
struct Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7;
// TriangleNet.Meshing.QualityMesher
struct QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64;
// TriangleNet.Meshing.QualityOptions
struct QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A;
// TriangleNet.Geometry.Rectangle
struct Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83;
// TriangleNet.Meshing.Iterators.RegionIterator
struct RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9;
// TriangleNet.RobustPredicates
struct RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// TriangleNet.Topology.SubSegment
struct SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A;
// TriangleNet.Topology.Triangle
struct Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769;
// TriangleNet.TriangleLocator
struct TriangleLocator_t8BD23B691230921873932BB9A63593D901A186EC;
// TriangleNet.TrianglePool
struct TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7;
// TriangleNet.Geometry.Vertex
struct Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E;
// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISegment_tEAAF8539FFD2F474DC8FDF3C6B844BA3BB316BB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1323025101F434328E1CE93FBFADA5DB3DDF8528;
IL2CPP_EXTERN_C String_t* _stringLiteral148EDDF6555695DFC66299136A88027385790545;
IL2CPP_EXTERN_C String_t* _stringLiteral233E20B74DF410EE0B17D47B5A9BC6922EEC7D75;
IL2CPP_EXTERN_C String_t* _stringLiteral47DBF536420C8C59F97BDBF94213B21ECA2F7D68;
IL2CPP_EXTERN_C String_t* _stringLiteralA06C280B0E6AAFD2970729787083CBC48A431BB0;
IL2CPP_EXTERN_C String_t* _stringLiteralA367F852CA1FC174CE282A0193B19B453FE084CA;
IL2CPP_EXTERN_C String_t* _stringLiteralC381049E38E1A72EDE3A68C5E9D6A2D49DB56B60;
IL2CPP_EXTERN_C String_t* _stringLiteralC71F94ACE0C88ACCF022CE979C4E3DDB182B58D5;
IL2CPP_EXTERN_C String_t* _stringLiteralC871619C84F41CB3D2E4B5B6C50E81482BD1DD4D;
IL2CPP_EXTERN_C String_t* _stringLiteralD2BF2B4DB9A6864C148643E8D70302A401ED7E95;
IL2CPP_EXTERN_C String_t* _stringLiteralE22EE66ACF9AC04BB6E8A0701BB8B87ECB1FB484;
IL2CPP_EXTERN_C String_t* _stringLiteralF0638EADE42E5C97E20A2FA73E4D48D397CA23FD;
IL2CPP_EXTERN_C String_t* _stringLiteralF93FD07B7FA75F795C27508A326BC5630A48EB11;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m92ED849BB80F52F93E2A9ECF1ACA7C565BA4C781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9FBA8B363DC35EE0D5DE5FA6352CB956EFB35C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFE911E8AC402B5FBA3C81CD015032BBB892BE005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mF31948F1C6D2BBB5DE8E800CF7A9613FA31CF41E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m40C2893F8E44F4D82D3685FA9AEA2B34FC884AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7A78E1BF58D4F587FF66F22E162DDB1E843164B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB01B871588B5349705854C7324E254065C3AB734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0E1983241281320035746DA5EA265BC7C7B5731B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1FED3612715EDFC96917D3EE349AD84CA125CEA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE55993B5B281B0AE3B1992C539A2FA7D8D2399B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2F93A9F525F0C6A50A544849D9868F93EC018472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8B5701BA3AF333A9E380BE7892F18DBA33A256FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBD26809EE43ACE6D364A4687CA60E99D7FF5AADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mEFC91464B8BD8F5B2D9ED47F1907A157B9BCD44B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m5C81050FBF537178A73C1267770D224CE815B192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF90E3A9B566F5593BF41AD410EC17E9EE55B51D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m8C71C03C02354FF15F1A98997F5482B98876D8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1ECA98E79C761B52F45297365E9CFD42853E8BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB597803BE315FFA8799E5D8ED62088E6539458F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3CF6E0D9C84498A837D7AA00C27670994C37B13B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m53FDCAB0BF160DB637BE3FF11DC1C4458729B348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9770C7A7EC747BB9DFA7C69EA3388E737D75A858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC37EDCCD8122CA80C27D075FAE0354E836A075FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m97D5606CCE6CCE5EDC5110EC0804875BDD4A3CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA9519E9E3DB44ACB125C355349B202C1FE7885C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m486112DA1275C74D892681B109310C1B53604894_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBBBB2B4431CB47912AE3CAED43A018A1773639D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC1776987CCD7CC8DDE109E0368F4B18280F4F7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD195654FB6D266D073A044DC195CEAA31A693B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEC53FB9587C8C44FE02CCC2BFB03E126E92BCCC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5968B1BCE589DAEFB28B829434C7C39773663F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0ECA3A5653E521522FED28F4E0B88DBD61146FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QualityMesher_SplitEncSegs_m84E0D73E180271F42FABC0E6849BCE7C57E2696A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QualityMesher_SplitTriangle_mF128D9226ADCCD04703885C418BF4202E8D5D530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mA9F73860A1D493EBDC7AB2AAC10F237E2A478481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m2C61F4E6FCBD32987153D78D93F9DE702A1B4A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCD97B3E9849986D37EB7C512026C0E4F28C3A12E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CProcessU3Eb__3_0_m5183BE7354C0190E7E8B1CB0757ECE3E05EF5217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CProcessU3Eb__0_m9D7177A56555A884127520D3C1E15DED9776CF1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CProcessU3Eb__1_mB36ADEFF5E662D133C6EF3156E68751BB9172F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m025DF0776B96878B7C65B66CB0A8276CAD0AA7AB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629;
struct OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175;
struct VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>
struct Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDF2E052936C3D0E432CB01BEC5720B1E2E491FD5* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0E29E7764DD4FF610B0D6E0462B5BEEDA31B912D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t229C029B153F947A4549104056077BC114A5809C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___entries_1)); }
	inline EntryU5BU5D_tDF2E052936C3D0E432CB01BEC5720B1E2E491FD5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDF2E052936C3D0E432CB01BEC5720B1E2E491FD5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDF2E052936C3D0E432CB01BEC5720B1E2E491FD5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___keys_7)); }
	inline KeyCollection_t0E29E7764DD4FF610B0D6E0462B5BEEDA31B912D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0E29E7764DD4FF610B0D6E0462B5BEEDA31B912D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0E29E7764DD4FF610B0D6E0462B5BEEDA31B912D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ___values_8)); }
	inline ValueCollection_t229C029B153F947A4549104056077BC114A5809C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t229C029B153F947A4549104056077BC114A5809C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t229C029B153F947A4549104056077BC114A5809C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>
struct Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB61344A86E2360302105734D2720668AD258A737* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC6A4D463C1F055938E21F49AEB1EAF2C979956CC * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA34BAD9182E62B50DA96F6FE28958D0047EFE2D7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___entries_1)); }
	inline EntryU5BU5D_tB61344A86E2360302105734D2720668AD258A737* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB61344A86E2360302105734D2720668AD258A737** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB61344A86E2360302105734D2720668AD258A737* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___keys_7)); }
	inline KeyCollection_tC6A4D463C1F055938E21F49AEB1EAF2C979956CC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC6A4D463C1F055938E21F49AEB1EAF2C979956CC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC6A4D463C1F055938E21F49AEB1EAF2C979956CC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ___values_8)); }
	inline ValueCollection_tA34BAD9182E62B50DA96F6FE28958D0047EFE2D7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA34BAD9182E62B50DA96F6FE28958D0047EFE2D7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA34BAD9182E62B50DA96F6FE28958D0047EFE2D7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment>
struct List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7, ____items_1)); }
	inline ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838* get__items_1() const { return ____items_1; }
	inline ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7_StaticFields, ____emptyArray_5)); }
	inline ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISegmentU5BU5D_tFE639CB1DB3CD032F1E7B58E5663C1D8ED8C6838* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9, ____items_1)); }
	inline PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415* get__items_1() const { return ____items_1; }
	inline PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9_StaticFields, ____emptyArray_5)); }
	inline PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PointU5BU5D_t642D8B343D2BF9C0E2EBC323DA37563FBFBA9415* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>
struct List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20, ____items_1)); }
	inline RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9* get__items_1() const { return ____items_1; }
	inline RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20_StaticFields, ____emptyArray_5)); }
	inline RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RegionPointerU5BU5D_tAE4AA7231479D2E9329E3EE2DB10F236D0F03EB9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>
struct List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A, ____items_1)); }
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* get__items_1() const { return ____items_1; }
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A_StaticFields, ____emptyArray_5)); }
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TriangleU5BU5D_t4EF87ECF9AEEE17FA140686E969719BB5B699003* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>
struct List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB, ____items_1)); }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* get__items_1() const { return ____items_1; }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB_StaticFields, ____emptyArray_5)); }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg>
struct Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	BadSubsegU5BU5D_t2E8D27AFDFF62C598BC0F4E2B9B7C9CEAB4BE2B0* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98, ____array_0)); }
	inline BadSubsegU5BU5D_t2E8D27AFDFF62C598BC0F4E2B9B7C9CEAB4BE2B0* get__array_0() const { return ____array_0; }
	inline BadSubsegU5BU5D_t2E8D27AFDFF62C598BC0F4E2B9B7C9CEAB4BE2B0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(BadSubsegU5BU5D_t2E8D27AFDFF62C598BC0F4E2B9B7C9CEAB4BE2B0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriangleNet.Topology.SubSegment>
struct ValueCollection_t229C029B153F947A4549104056077BC114A5809C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t229C029B153F947A4549104056077BC114A5809C, ___dictionary_0)); }
	inline Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// TriangleNet.Meshing.Data.BadTriQueue
struct BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07  : public RuntimeObject
{
public:
	// TriangleNet.Meshing.Data.BadTriangle[] TriangleNet.Meshing.Data.BadTriQueue::queuefront
	BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75* ___queuefront_0;
	// TriangleNet.Meshing.Data.BadTriangle[] TriangleNet.Meshing.Data.BadTriQueue::queuetail
	BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75* ___queuetail_1;
	// System.Int32[] TriangleNet.Meshing.Data.BadTriQueue::nextnonemptyq
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___nextnonemptyq_2;
	// System.Int32 TriangleNet.Meshing.Data.BadTriQueue::firstnonemptyq
	int32_t ___firstnonemptyq_3;
	// System.Int32 TriangleNet.Meshing.Data.BadTriQueue::count
	int32_t ___count_4;

public:
	inline static int32_t get_offset_of_queuefront_0() { return static_cast<int32_t>(offsetof(BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07, ___queuefront_0)); }
	inline BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75* get_queuefront_0() const { return ___queuefront_0; }
	inline BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75** get_address_of_queuefront_0() { return &___queuefront_0; }
	inline void set_queuefront_0(BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75* value)
	{
		___queuefront_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queuefront_0), (void*)value);
	}

	inline static int32_t get_offset_of_queuetail_1() { return static_cast<int32_t>(offsetof(BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07, ___queuetail_1)); }
	inline BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75* get_queuetail_1() const { return ___queuetail_1; }
	inline BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75** get_address_of_queuetail_1() { return &___queuetail_1; }
	inline void set_queuetail_1(BadTriangleU5BU5D_t0C1FC1DE2C1F122742C7724D6085F071716BCB75* value)
	{
		___queuetail_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queuetail_1), (void*)value);
	}

	inline static int32_t get_offset_of_nextnonemptyq_2() { return static_cast<int32_t>(offsetof(BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07, ___nextnonemptyq_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_nextnonemptyq_2() const { return ___nextnonemptyq_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_nextnonemptyq_2() { return &___nextnonemptyq_2; }
	inline void set_nextnonemptyq_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___nextnonemptyq_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextnonemptyq_2), (void*)value);
	}

	inline static int32_t get_offset_of_firstnonemptyq_3() { return static_cast<int32_t>(offsetof(BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07, ___firstnonemptyq_3)); }
	inline int32_t get_firstnonemptyq_3() const { return ___firstnonemptyq_3; }
	inline int32_t* get_address_of_firstnonemptyq_3() { return &___firstnonemptyq_3; }
	inline void set_firstnonemptyq_3(int32_t value)
	{
		___firstnonemptyq_3 = value;
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}
};


// TriangleNet.Behavior
struct Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2  : public RuntimeObject
{
public:
	// System.Boolean TriangleNet.Behavior::poly
	bool ___poly_0;
	// System.Boolean TriangleNet.Behavior::quality
	bool ___quality_1;
	// System.Boolean TriangleNet.Behavior::varArea
	bool ___varArea_2;
	// System.Boolean TriangleNet.Behavior::convex
	bool ___convex_3;
	// System.Boolean TriangleNet.Behavior::jettison
	bool ___jettison_4;
	// System.Boolean TriangleNet.Behavior::boundaryMarkers
	bool ___boundaryMarkers_5;
	// System.Boolean TriangleNet.Behavior::noHoles
	bool ___noHoles_6;
	// System.Boolean TriangleNet.Behavior::conformDel
	bool ___conformDel_7;
	// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean> TriangleNet.Behavior::usertest
	Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * ___usertest_8;
	// System.Int32 TriangleNet.Behavior::noBisect
	int32_t ___noBisect_9;
	// System.Double TriangleNet.Behavior::minAngle
	double ___minAngle_10;
	// System.Double TriangleNet.Behavior::maxAngle
	double ___maxAngle_11;
	// System.Double TriangleNet.Behavior::maxArea
	double ___maxArea_12;
	// System.Boolean TriangleNet.Behavior::fixedArea
	bool ___fixedArea_13;
	// System.Boolean TriangleNet.Behavior::useSegments
	bool ___useSegments_14;
	// System.Boolean TriangleNet.Behavior::useRegions
	bool ___useRegions_15;
	// System.Double TriangleNet.Behavior::goodAngle
	double ___goodAngle_16;
	// System.Double TriangleNet.Behavior::maxGoodAngle
	double ___maxGoodAngle_17;
	// System.Double TriangleNet.Behavior::offconstant
	double ___offconstant_18;

public:
	inline static int32_t get_offset_of_poly_0() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___poly_0)); }
	inline bool get_poly_0() const { return ___poly_0; }
	inline bool* get_address_of_poly_0() { return &___poly_0; }
	inline void set_poly_0(bool value)
	{
		___poly_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___quality_1)); }
	inline bool get_quality_1() const { return ___quality_1; }
	inline bool* get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(bool value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_varArea_2() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___varArea_2)); }
	inline bool get_varArea_2() const { return ___varArea_2; }
	inline bool* get_address_of_varArea_2() { return &___varArea_2; }
	inline void set_varArea_2(bool value)
	{
		___varArea_2 = value;
	}

	inline static int32_t get_offset_of_convex_3() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___convex_3)); }
	inline bool get_convex_3() const { return ___convex_3; }
	inline bool* get_address_of_convex_3() { return &___convex_3; }
	inline void set_convex_3(bool value)
	{
		___convex_3 = value;
	}

	inline static int32_t get_offset_of_jettison_4() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___jettison_4)); }
	inline bool get_jettison_4() const { return ___jettison_4; }
	inline bool* get_address_of_jettison_4() { return &___jettison_4; }
	inline void set_jettison_4(bool value)
	{
		___jettison_4 = value;
	}

	inline static int32_t get_offset_of_boundaryMarkers_5() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___boundaryMarkers_5)); }
	inline bool get_boundaryMarkers_5() const { return ___boundaryMarkers_5; }
	inline bool* get_address_of_boundaryMarkers_5() { return &___boundaryMarkers_5; }
	inline void set_boundaryMarkers_5(bool value)
	{
		___boundaryMarkers_5 = value;
	}

	inline static int32_t get_offset_of_noHoles_6() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___noHoles_6)); }
	inline bool get_noHoles_6() const { return ___noHoles_6; }
	inline bool* get_address_of_noHoles_6() { return &___noHoles_6; }
	inline void set_noHoles_6(bool value)
	{
		___noHoles_6 = value;
	}

	inline static int32_t get_offset_of_conformDel_7() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___conformDel_7)); }
	inline bool get_conformDel_7() const { return ___conformDel_7; }
	inline bool* get_address_of_conformDel_7() { return &___conformDel_7; }
	inline void set_conformDel_7(bool value)
	{
		___conformDel_7 = value;
	}

	inline static int32_t get_offset_of_usertest_8() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___usertest_8)); }
	inline Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * get_usertest_8() const { return ___usertest_8; }
	inline Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 ** get_address_of_usertest_8() { return &___usertest_8; }
	inline void set_usertest_8(Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * value)
	{
		___usertest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usertest_8), (void*)value);
	}

	inline static int32_t get_offset_of_noBisect_9() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___noBisect_9)); }
	inline int32_t get_noBisect_9() const { return ___noBisect_9; }
	inline int32_t* get_address_of_noBisect_9() { return &___noBisect_9; }
	inline void set_noBisect_9(int32_t value)
	{
		___noBisect_9 = value;
	}

	inline static int32_t get_offset_of_minAngle_10() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___minAngle_10)); }
	inline double get_minAngle_10() const { return ___minAngle_10; }
	inline double* get_address_of_minAngle_10() { return &___minAngle_10; }
	inline void set_minAngle_10(double value)
	{
		___minAngle_10 = value;
	}

	inline static int32_t get_offset_of_maxAngle_11() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___maxAngle_11)); }
	inline double get_maxAngle_11() const { return ___maxAngle_11; }
	inline double* get_address_of_maxAngle_11() { return &___maxAngle_11; }
	inline void set_maxAngle_11(double value)
	{
		___maxAngle_11 = value;
	}

	inline static int32_t get_offset_of_maxArea_12() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___maxArea_12)); }
	inline double get_maxArea_12() const { return ___maxArea_12; }
	inline double* get_address_of_maxArea_12() { return &___maxArea_12; }
	inline void set_maxArea_12(double value)
	{
		___maxArea_12 = value;
	}

	inline static int32_t get_offset_of_fixedArea_13() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___fixedArea_13)); }
	inline bool get_fixedArea_13() const { return ___fixedArea_13; }
	inline bool* get_address_of_fixedArea_13() { return &___fixedArea_13; }
	inline void set_fixedArea_13(bool value)
	{
		___fixedArea_13 = value;
	}

	inline static int32_t get_offset_of_useSegments_14() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___useSegments_14)); }
	inline bool get_useSegments_14() const { return ___useSegments_14; }
	inline bool* get_address_of_useSegments_14() { return &___useSegments_14; }
	inline void set_useSegments_14(bool value)
	{
		___useSegments_14 = value;
	}

	inline static int32_t get_offset_of_useRegions_15() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___useRegions_15)); }
	inline bool get_useRegions_15() const { return ___useRegions_15; }
	inline bool* get_address_of_useRegions_15() { return &___useRegions_15; }
	inline void set_useRegions_15(bool value)
	{
		___useRegions_15 = value;
	}

	inline static int32_t get_offset_of_goodAngle_16() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___goodAngle_16)); }
	inline double get_goodAngle_16() const { return ___goodAngle_16; }
	inline double* get_address_of_goodAngle_16() { return &___goodAngle_16; }
	inline void set_goodAngle_16(double value)
	{
		___goodAngle_16 = value;
	}

	inline static int32_t get_offset_of_maxGoodAngle_17() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___maxGoodAngle_17)); }
	inline double get_maxGoodAngle_17() const { return ___maxGoodAngle_17; }
	inline double* get_address_of_maxGoodAngle_17() { return &___maxGoodAngle_17; }
	inline void set_maxGoodAngle_17(double value)
	{
		___maxGoodAngle_17 = value;
	}

	inline static int32_t get_offset_of_offconstant_18() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2, ___offconstant_18)); }
	inline double get_offconstant_18() const { return ___offconstant_18; }
	inline double* get_address_of_offconstant_18() { return &___offconstant_18; }
	inline void set_offconstant_18(double value)
	{
		___offconstant_18 = value;
	}
};

struct Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2_StaticFields
{
public:
	// System.Boolean TriangleNet.Behavior::<NoExact>k__BackingField
	bool ___U3CNoExactU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CNoExactU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2_StaticFields, ___U3CNoExactU3Ek__BackingField_19)); }
	inline bool get_U3CNoExactU3Ek__BackingField_19() const { return ___U3CNoExactU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CNoExactU3Ek__BackingField_19() { return &___U3CNoExactU3Ek__BackingField_19; }
	inline void set_U3CNoExactU3Ek__BackingField_19(bool value)
	{
		___U3CNoExactU3Ek__BackingField_19 = value;
	}
};


// TriangleNet.Configuration
struct Configuration_tFD59B344AE38BF7070D6C1F6F933F10DB63BCA6A  : public RuntimeObject
{
public:
	// System.Func`1<TriangleNet.IPredicates> TriangleNet.Configuration::<Predicates>k__BackingField
	Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * ___U3CPredicatesU3Ek__BackingField_0;
	// System.Func`1<TriangleNet.TrianglePool> TriangleNet.Configuration::<TrianglePool>k__BackingField
	Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E * ___U3CTrianglePoolU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPredicatesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_tFD59B344AE38BF7070D6C1F6F933F10DB63BCA6A, ___U3CPredicatesU3Ek__BackingField_0)); }
	inline Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * get_U3CPredicatesU3Ek__BackingField_0() const { return ___U3CPredicatesU3Ek__BackingField_0; }
	inline Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 ** get_address_of_U3CPredicatesU3Ek__BackingField_0() { return &___U3CPredicatesU3Ek__BackingField_0; }
	inline void set_U3CPredicatesU3Ek__BackingField_0(Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * value)
	{
		___U3CPredicatesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPredicatesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrianglePoolU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_tFD59B344AE38BF7070D6C1F6F933F10DB63BCA6A, ___U3CTrianglePoolU3Ek__BackingField_1)); }
	inline Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E * get_U3CTrianglePoolU3Ek__BackingField_1() const { return ___U3CTrianglePoolU3Ek__BackingField_1; }
	inline Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E ** get_address_of_U3CTrianglePoolU3Ek__BackingField_1() { return &___U3CTrianglePoolU3Ek__BackingField_1; }
	inline void set_U3CTrianglePoolU3Ek__BackingField_1(Func_1_tC5C981A879C249CF8A174D6A46E56A2FFF53612E * value)
	{
		___U3CTrianglePoolU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrianglePoolU3Ek__BackingField_1), (void*)value);
	}
};


// TriangleNet.Geometry.Contour
struct Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Geometry.Contour::marker
	int32_t ___marker_0;
	// System.Boolean TriangleNet.Geometry.Contour::convex
	bool ___convex_1;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex> TriangleNet.Geometry.Contour::<Points>k__BackingField
	List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * ___U3CPointsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_marker_0() { return static_cast<int32_t>(offsetof(Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439, ___marker_0)); }
	inline int32_t get_marker_0() const { return ___marker_0; }
	inline int32_t* get_address_of_marker_0() { return &___marker_0; }
	inline void set_marker_0(int32_t value)
	{
		___marker_0 = value;
	}

	inline static int32_t get_offset_of_convex_1() { return static_cast<int32_t>(offsetof(Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439, ___convex_1)); }
	inline bool get_convex_1() const { return ___convex_1; }
	inline bool* get_address_of_convex_1() { return &___convex_1; }
	inline void set_convex_1(bool value)
	{
		___convex_1 = value;
	}

	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439, ___U3CPointsU3Ek__BackingField_2)); }
	inline List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * get_U3CPointsU3Ek__BackingField_2() const { return ___U3CPointsU3Ek__BackingField_2; }
	inline List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB ** get_address_of_U3CPointsU3Ek__BackingField_2() { return &___U3CPointsU3Ek__BackingField_2; }
	inline void set_U3CPointsU3Ek__BackingField_2(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * value)
	{
		___U3CPointsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointsU3Ek__BackingField_2), (void*)value);
	}
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


// TriangleNet.NewLocation
struct NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB  : public RuntimeObject
{
public:
	// TriangleNet.IPredicates TriangleNet.NewLocation::predicates
	RuntimeObject* ___predicates_0;
	// TriangleNet.Mesh TriangleNet.NewLocation::mesh
	Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh_1;
	// TriangleNet.Behavior TriangleNet.NewLocation::behavior
	Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * ___behavior_2;
	// System.Double[] TriangleNet.NewLocation::petalx
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___petalx_3;
	// System.Double[] TriangleNet.NewLocation::petaly
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___petaly_4;
	// System.Double[] TriangleNet.NewLocation::petalr
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___petalr_5;
	// System.Double[] TriangleNet.NewLocation::wedges
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___wedges_6;
	// System.Double[] TriangleNet.NewLocation::initialConvexPoly
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___initialConvexPoly_7;
	// System.Double[] TriangleNet.NewLocation::points_p
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___points_p_8;
	// System.Double[] TriangleNet.NewLocation::points_q
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___points_q_9;
	// System.Double[] TriangleNet.NewLocation::points_r
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___points_r_10;
	// System.Double[] TriangleNet.NewLocation::poly1
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___poly1_11;
	// System.Double[] TriangleNet.NewLocation::poly2
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___poly2_12;
	// System.Double[][] TriangleNet.NewLocation::polys
	DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* ___polys_13;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___predicates_0)); }
	inline RuntimeObject* get_predicates_0() const { return ___predicates_0; }
	inline RuntimeObject** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(RuntimeObject* value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicates_0), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___mesh_1)); }
	inline Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_behavior_2() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___behavior_2)); }
	inline Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * get_behavior_2() const { return ___behavior_2; }
	inline Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 ** get_address_of_behavior_2() { return &___behavior_2; }
	inline void set_behavior_2(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * value)
	{
		___behavior_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___behavior_2), (void*)value);
	}

	inline static int32_t get_offset_of_petalx_3() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___petalx_3)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_petalx_3() const { return ___petalx_3; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_petalx_3() { return &___petalx_3; }
	inline void set_petalx_3(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___petalx_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___petalx_3), (void*)value);
	}

	inline static int32_t get_offset_of_petaly_4() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___petaly_4)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_petaly_4() const { return ___petaly_4; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_petaly_4() { return &___petaly_4; }
	inline void set_petaly_4(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___petaly_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___petaly_4), (void*)value);
	}

	inline static int32_t get_offset_of_petalr_5() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___petalr_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_petalr_5() const { return ___petalr_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_petalr_5() { return &___petalr_5; }
	inline void set_petalr_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___petalr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___petalr_5), (void*)value);
	}

	inline static int32_t get_offset_of_wedges_6() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___wedges_6)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_wedges_6() const { return ___wedges_6; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_wedges_6() { return &___wedges_6; }
	inline void set_wedges_6(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___wedges_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wedges_6), (void*)value);
	}

	inline static int32_t get_offset_of_initialConvexPoly_7() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___initialConvexPoly_7)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_initialConvexPoly_7() const { return ___initialConvexPoly_7; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_initialConvexPoly_7() { return &___initialConvexPoly_7; }
	inline void set_initialConvexPoly_7(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___initialConvexPoly_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialConvexPoly_7), (void*)value);
	}

	inline static int32_t get_offset_of_points_p_8() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___points_p_8)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_points_p_8() const { return ___points_p_8; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_points_p_8() { return &___points_p_8; }
	inline void set_points_p_8(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___points_p_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_p_8), (void*)value);
	}

	inline static int32_t get_offset_of_points_q_9() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___points_q_9)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_points_q_9() const { return ___points_q_9; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_points_q_9() { return &___points_q_9; }
	inline void set_points_q_9(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___points_q_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_q_9), (void*)value);
	}

	inline static int32_t get_offset_of_points_r_10() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___points_r_10)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_points_r_10() const { return ___points_r_10; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_points_r_10() { return &___points_r_10; }
	inline void set_points_r_10(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___points_r_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_r_10), (void*)value);
	}

	inline static int32_t get_offset_of_poly1_11() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___poly1_11)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_poly1_11() const { return ___poly1_11; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_poly1_11() { return &___poly1_11; }
	inline void set_poly1_11(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___poly1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poly1_11), (void*)value);
	}

	inline static int32_t get_offset_of_poly2_12() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___poly2_12)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_poly2_12() const { return ___poly2_12; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_poly2_12() { return &___poly2_12; }
	inline void set_poly2_12(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___poly2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poly2_12), (void*)value);
	}

	inline static int32_t get_offset_of_polys_13() { return static_cast<int32_t>(offsetof(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB, ___polys_13)); }
	inline DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* get_polys_13() const { return ___polys_13; }
	inline DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D** get_address_of_polys_13() { return &___polys_13; }
	inline void set_polys_13(DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* value)
	{
		___polys_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polys_13), (void*)value);
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


// TriangleNet.Geometry.Polygon
struct Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex> TriangleNet.Geometry.Polygon::points
	List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * ___points_0;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Point> TriangleNet.Geometry.Polygon::holes
	List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * ___holes_1;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer> TriangleNet.Geometry.Polygon::regions
	List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * ___regions_2;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment> TriangleNet.Geometry.Polygon::segments
	List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * ___segments_3;
	// System.Boolean TriangleNet.Geometry.Polygon::<HasPointMarkers>k__BackingField
	bool ___U3CHasPointMarkersU3Ek__BackingField_4;
	// System.Boolean TriangleNet.Geometry.Polygon::<HasSegmentMarkers>k__BackingField
	bool ___U3CHasSegmentMarkersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7, ___points_0)); }
	inline List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * get_points_0() const { return ___points_0; }
	inline List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB ** get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * value)
	{
		___points_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_0), (void*)value);
	}

	inline static int32_t get_offset_of_holes_1() { return static_cast<int32_t>(offsetof(Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7, ___holes_1)); }
	inline List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * get_holes_1() const { return ___holes_1; }
	inline List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 ** get_address_of_holes_1() { return &___holes_1; }
	inline void set_holes_1(List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * value)
	{
		___holes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holes_1), (void*)value);
	}

	inline static int32_t get_offset_of_regions_2() { return static_cast<int32_t>(offsetof(Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7, ___regions_2)); }
	inline List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * get_regions_2() const { return ___regions_2; }
	inline List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 ** get_address_of_regions_2() { return &___regions_2; }
	inline void set_regions_2(List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * value)
	{
		___regions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regions_2), (void*)value);
	}

	inline static int32_t get_offset_of_segments_3() { return static_cast<int32_t>(offsetof(Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7, ___segments_3)); }
	inline List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * get_segments_3() const { return ___segments_3; }
	inline List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 ** get_address_of_segments_3() { return &___segments_3; }
	inline void set_segments_3(List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * value)
	{
		___segments_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___segments_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasPointMarkersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7, ___U3CHasPointMarkersU3Ek__BackingField_4)); }
	inline bool get_U3CHasPointMarkersU3Ek__BackingField_4() const { return ___U3CHasPointMarkersU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHasPointMarkersU3Ek__BackingField_4() { return &___U3CHasPointMarkersU3Ek__BackingField_4; }
	inline void set_U3CHasPointMarkersU3Ek__BackingField_4(bool value)
	{
		___U3CHasPointMarkersU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CHasSegmentMarkersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7, ___U3CHasSegmentMarkersU3Ek__BackingField_5)); }
	inline bool get_U3CHasSegmentMarkersU3Ek__BackingField_5() const { return ___U3CHasSegmentMarkersU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHasSegmentMarkersU3Ek__BackingField_5() { return &___U3CHasSegmentMarkersU3Ek__BackingField_5; }
	inline void set_U3CHasSegmentMarkersU3Ek__BackingField_5(bool value)
	{
		___U3CHasSegmentMarkersU3Ek__BackingField_5 = value;
	}
};


// TriangleNet.Meshing.QualityMesher
struct QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64  : public RuntimeObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Meshing.QualityMesher::predicates
	RuntimeObject* ___predicates_0;
	// System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg> TriangleNet.Meshing.QualityMesher::badsubsegs
	Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * ___badsubsegs_1;
	// TriangleNet.Meshing.Data.BadTriQueue TriangleNet.Meshing.QualityMesher::queue
	BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * ___queue_2;
	// TriangleNet.Mesh TriangleNet.Meshing.QualityMesher::mesh
	Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh_3;
	// TriangleNet.Behavior TriangleNet.Meshing.QualityMesher::behavior
	Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * ___behavior_4;
	// TriangleNet.NewLocation TriangleNet.Meshing.QualityMesher::newLocation
	NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB * ___newLocation_5;
	// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.Meshing.QualityMesher::logger
	RuntimeObject* ___logger_6;
	// TriangleNet.Topology.Triangle TriangleNet.Meshing.QualityMesher::newvertex_tri
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___newvertex_tri_7;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64, ___predicates_0)); }
	inline RuntimeObject* get_predicates_0() const { return ___predicates_0; }
	inline RuntimeObject** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(RuntimeObject* value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicates_0), (void*)value);
	}

	inline static int32_t get_offset_of_badsubsegs_1() { return static_cast<int32_t>(offsetof(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64, ___badsubsegs_1)); }
	inline Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * get_badsubsegs_1() const { return ___badsubsegs_1; }
	inline Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 ** get_address_of_badsubsegs_1() { return &___badsubsegs_1; }
	inline void set_badsubsegs_1(Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * value)
	{
		___badsubsegs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___badsubsegs_1), (void*)value);
	}

	inline static int32_t get_offset_of_queue_2() { return static_cast<int32_t>(offsetof(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64, ___queue_2)); }
	inline BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * get_queue_2() const { return ___queue_2; }
	inline BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 ** get_address_of_queue_2() { return &___queue_2; }
	inline void set_queue_2(BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * value)
	{
		___queue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_2), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64, ___mesh_3)); }
	inline Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * get_mesh_3() const { return ___mesh_3; }
	inline Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_behavior_4() { return static_cast<int32_t>(offsetof(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64, ___behavior_4)); }
	inline Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * get_behavior_4() const { return ___behavior_4; }
	inline Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 ** get_address_of_behavior_4() { return &___behavior_4; }
	inline void set_behavior_4(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * value)
	{
		___behavior_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___behavior_4), (void*)value);
	}

	inline static int32_t get_offset_of_newLocation_5() { return static_cast<int32_t>(offsetof(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64, ___newLocation_5)); }
	inline NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB * get_newLocation_5() const { return ___newLocation_5; }
	inline NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB ** get_address_of_newLocation_5() { return &___newLocation_5; }
	inline void set_newLocation_5(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB * value)
	{
		___newLocation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newLocation_5), (void*)value);
	}

	inline static int32_t get_offset_of_logger_6() { return static_cast<int32_t>(offsetof(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64, ___logger_6)); }
	inline RuntimeObject* get_logger_6() const { return ___logger_6; }
	inline RuntimeObject** get_address_of_logger_6() { return &___logger_6; }
	inline void set_logger_6(RuntimeObject* value)
	{
		___logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_6), (void*)value);
	}

	inline static int32_t get_offset_of_newvertex_tri_7() { return static_cast<int32_t>(offsetof(QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64, ___newvertex_tri_7)); }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * get_newvertex_tri_7() const { return ___newvertex_tri_7; }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** get_address_of_newvertex_tri_7() { return &___newvertex_tri_7; }
	inline void set_newvertex_tri_7(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		___newvertex_tri_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newvertex_tri_7), (void*)value);
	}
};


// TriangleNet.Meshing.QualityOptions
struct QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A  : public RuntimeObject
{
public:
	// System.Double TriangleNet.Meshing.QualityOptions::<MaximumAngle>k__BackingField
	double ___U3CMaximumAngleU3Ek__BackingField_0;
	// System.Double TriangleNet.Meshing.QualityOptions::<MinimumAngle>k__BackingField
	double ___U3CMinimumAngleU3Ek__BackingField_1;
	// System.Double TriangleNet.Meshing.QualityOptions::<MaximumArea>k__BackingField
	double ___U3CMaximumAreaU3Ek__BackingField_2;
	// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean> TriangleNet.Meshing.QualityOptions::<UserTest>k__BackingField
	Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * ___U3CUserTestU3Ek__BackingField_3;
	// System.Boolean TriangleNet.Meshing.QualityOptions::<VariableArea>k__BackingField
	bool ___U3CVariableAreaU3Ek__BackingField_4;
	// System.Int32 TriangleNet.Meshing.QualityOptions::<SteinerPoints>k__BackingField
	int32_t ___U3CSteinerPointsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CMaximumAngleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A, ___U3CMaximumAngleU3Ek__BackingField_0)); }
	inline double get_U3CMaximumAngleU3Ek__BackingField_0() const { return ___U3CMaximumAngleU3Ek__BackingField_0; }
	inline double* get_address_of_U3CMaximumAngleU3Ek__BackingField_0() { return &___U3CMaximumAngleU3Ek__BackingField_0; }
	inline void set_U3CMaximumAngleU3Ek__BackingField_0(double value)
	{
		___U3CMaximumAngleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumAngleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A, ___U3CMinimumAngleU3Ek__BackingField_1)); }
	inline double get_U3CMinimumAngleU3Ek__BackingField_1() const { return ___U3CMinimumAngleU3Ek__BackingField_1; }
	inline double* get_address_of_U3CMinimumAngleU3Ek__BackingField_1() { return &___U3CMinimumAngleU3Ek__BackingField_1; }
	inline void set_U3CMinimumAngleU3Ek__BackingField_1(double value)
	{
		___U3CMinimumAngleU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumAreaU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A, ___U3CMaximumAreaU3Ek__BackingField_2)); }
	inline double get_U3CMaximumAreaU3Ek__BackingField_2() const { return ___U3CMaximumAreaU3Ek__BackingField_2; }
	inline double* get_address_of_U3CMaximumAreaU3Ek__BackingField_2() { return &___U3CMaximumAreaU3Ek__BackingField_2; }
	inline void set_U3CMaximumAreaU3Ek__BackingField_2(double value)
	{
		___U3CMaximumAreaU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CUserTestU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A, ___U3CUserTestU3Ek__BackingField_3)); }
	inline Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * get_U3CUserTestU3Ek__BackingField_3() const { return ___U3CUserTestU3Ek__BackingField_3; }
	inline Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 ** get_address_of_U3CUserTestU3Ek__BackingField_3() { return &___U3CUserTestU3Ek__BackingField_3; }
	inline void set_U3CUserTestU3Ek__BackingField_3(Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * value)
	{
		___U3CUserTestU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserTestU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVariableAreaU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A, ___U3CVariableAreaU3Ek__BackingField_4)); }
	inline bool get_U3CVariableAreaU3Ek__BackingField_4() const { return ___U3CVariableAreaU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CVariableAreaU3Ek__BackingField_4() { return &___U3CVariableAreaU3Ek__BackingField_4; }
	inline void set_U3CVariableAreaU3Ek__BackingField_4(bool value)
	{
		___U3CVariableAreaU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSteinerPointsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A, ___U3CSteinerPointsU3Ek__BackingField_5)); }
	inline int32_t get_U3CSteinerPointsU3Ek__BackingField_5() const { return ___U3CSteinerPointsU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CSteinerPointsU3Ek__BackingField_5() { return &___U3CSteinerPointsU3Ek__BackingField_5; }
	inline void set_U3CSteinerPointsU3Ek__BackingField_5(int32_t value)
	{
		___U3CSteinerPointsU3Ek__BackingField_5 = value;
	}
};


// TriangleNet.Geometry.Rectangle
struct Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83  : public RuntimeObject
{
public:
	// System.Double TriangleNet.Geometry.Rectangle::xmin
	double ___xmin_0;
	// System.Double TriangleNet.Geometry.Rectangle::ymin
	double ___ymin_1;
	// System.Double TriangleNet.Geometry.Rectangle::xmax
	double ___xmax_2;
	// System.Double TriangleNet.Geometry.Rectangle::ymax
	double ___ymax_3;

public:
	inline static int32_t get_offset_of_xmin_0() { return static_cast<int32_t>(offsetof(Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83, ___xmin_0)); }
	inline double get_xmin_0() const { return ___xmin_0; }
	inline double* get_address_of_xmin_0() { return &___xmin_0; }
	inline void set_xmin_0(double value)
	{
		___xmin_0 = value;
	}

	inline static int32_t get_offset_of_ymin_1() { return static_cast<int32_t>(offsetof(Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83, ___ymin_1)); }
	inline double get_ymin_1() const { return ___ymin_1; }
	inline double* get_address_of_ymin_1() { return &___ymin_1; }
	inline void set_ymin_1(double value)
	{
		___ymin_1 = value;
	}

	inline static int32_t get_offset_of_xmax_2() { return static_cast<int32_t>(offsetof(Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83, ___xmax_2)); }
	inline double get_xmax_2() const { return ___xmax_2; }
	inline double* get_address_of_xmax_2() { return &___xmax_2; }
	inline void set_xmax_2(double value)
	{
		___xmax_2 = value;
	}

	inline static int32_t get_offset_of_ymax_3() { return static_cast<int32_t>(offsetof(Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83, ___ymax_3)); }
	inline double get_ymax_3() const { return ___ymax_3; }
	inline double* get_address_of_ymax_3() { return &___ymax_3; }
	inline void set_ymax_3(double value)
	{
		___ymax_3 = value;
	}
};


// TriangleNet.Meshing.Iterators.RegionIterator
struct RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<TriangleNet.Topology.Triangle> TriangleNet.Meshing.Iterators.RegionIterator::region
	List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * ___region_0;

public:
	inline static int32_t get_offset_of_region_0() { return static_cast<int32_t>(offsetof(RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9, ___region_0)); }
	inline List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * get_region_0() const { return ___region_0; }
	inline List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A ** get_address_of_region_0() { return &___region_0; }
	inline void set_region_0(List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * value)
	{
		___region_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_0), (void*)value);
	}
};


// TriangleNet.Geometry.RegionPointer
struct RegionPointer_t141E8E4ADED2DAD552D1A19C19A484D1CBB26D28  : public RuntimeObject
{
public:
	// TriangleNet.Geometry.Point TriangleNet.Geometry.RegionPointer::point
	Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___point_0;
	// System.Int32 TriangleNet.Geometry.RegionPointer::id
	int32_t ___id_1;
	// System.Double TriangleNet.Geometry.RegionPointer::area
	double ___area_2;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(RegionPointer_t141E8E4ADED2DAD552D1A19C19A484D1CBB26D28, ___point_0)); }
	inline Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * get_point_0() const { return ___point_0; }
	inline Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 ** get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * value)
	{
		___point_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___point_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(RegionPointer_t141E8E4ADED2DAD552D1A19C19A484D1CBB26D28, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_area_2() { return static_cast<int32_t>(offsetof(RegionPointer_t141E8E4ADED2DAD552D1A19C19A484D1CBB26D28, ___area_2)); }
	inline double get_area_2() const { return ___area_2; }
	inline double* get_address_of_area_2() { return &___area_2; }
	inline void set_area_2(double value)
	{
		___area_2 = value;
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


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<TriangleNet.Topology.Triangle>
struct Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869, ___list_0)); }
	inline List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * get_list_0() const { return ___list_0; }
	inline List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869, ___current_3)); }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * get_current_3() const { return ___current_3; }
	inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<TriangleNet.Geometry.Vertex>
struct Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A, ___list_0)); }
	inline List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * get_list_0() const { return ___list_0; }
	inline List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A, ___current_3)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_current_3() const { return ___current_3; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TriangleNet.Topology.SubSegment>
struct Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87, ___dictionary_0)); }
	inline Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87, ___currentValue_3)); }
	inline SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * get_currentValue_3() const { return ___currentValue_3; }
	inline SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
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


// TriangleNet.Meshing.Data.BadSubseg
struct BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A  : public RuntimeObject
{
public:
	// TriangleNet.Topology.Osub TriangleNet.Meshing.Data.BadSubseg::subseg
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  ___subseg_0;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadSubseg::org
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___org_1;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadSubseg::dest
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___dest_2;

public:
	inline static int32_t get_offset_of_subseg_0() { return static_cast<int32_t>(offsetof(BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A, ___subseg_0)); }
	inline Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  get_subseg_0() const { return ___subseg_0; }
	inline Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * get_address_of_subseg_0() { return &___subseg_0; }
	inline void set_subseg_0(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  value)
	{
		___subseg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___subseg_0))->___seg_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_org_1() { return static_cast<int32_t>(offsetof(BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A, ___org_1)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_org_1() const { return ___org_1; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_org_1() { return &___org_1; }
	inline void set_org_1(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___org_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___org_1), (void*)value);
	}

	inline static int32_t get_offset_of_dest_2() { return static_cast<int32_t>(offsetof(BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A, ___dest_2)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_dest_2() const { return ___dest_2; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_dest_2() { return &___dest_2; }
	inline void set_dest_2(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___dest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dest_2), (void*)value);
	}
};


// TriangleNet.Meshing.Data.BadTriangle
struct BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06  : public RuntimeObject
{
public:
	// TriangleNet.Topology.Otri TriangleNet.Meshing.Data.BadTriangle::poortri
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  ___poortri_0;
	// System.Double TriangleNet.Meshing.Data.BadTriangle::key
	double ___key_1;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadTriangle::org
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___org_2;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadTriangle::dest
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___dest_3;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadTriangle::apex
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___apex_4;
	// TriangleNet.Meshing.Data.BadTriangle TriangleNet.Meshing.Data.BadTriangle::next
	BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * ___next_5;

public:
	inline static int32_t get_offset_of_poortri_0() { return static_cast<int32_t>(offsetof(BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06, ___poortri_0)); }
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  get_poortri_0() const { return ___poortri_0; }
	inline Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * get_address_of_poortri_0() { return &___poortri_0; }
	inline void set_poortri_0(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  value)
	{
		___poortri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___poortri_0))->___tri_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06, ___key_1)); }
	inline double get_key_1() const { return ___key_1; }
	inline double* get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(double value)
	{
		___key_1 = value;
	}

	inline static int32_t get_offset_of_org_2() { return static_cast<int32_t>(offsetof(BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06, ___org_2)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_org_2() const { return ___org_2; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_org_2() { return &___org_2; }
	inline void set_org_2(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___org_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___org_2), (void*)value);
	}

	inline static int32_t get_offset_of_dest_3() { return static_cast<int32_t>(offsetof(BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06, ___dest_3)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_dest_3() const { return ___dest_3; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_dest_3() { return &___dest_3; }
	inline void set_dest_3(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___dest_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dest_3), (void*)value);
	}

	inline static int32_t get_offset_of_apex_4() { return static_cast<int32_t>(offsetof(BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06, ___apex_4)); }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * get_apex_4() const { return ___apex_4; }
	inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 ** get_address_of_apex_4() { return &___apex_4; }
	inline void set_apex_4(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * value)
	{
		___apex_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apex_4), (void*)value);
	}

	inline static int32_t get_offset_of_next_5() { return static_cast<int32_t>(offsetof(BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06, ___next_5)); }
	inline BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * get_next_5() const { return ___next_5; }
	inline BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 ** get_address_of_next_5() { return &___next_5; }
	inline void set_next_5(BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * value)
	{
		___next_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_5), (void*)value);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// TriangleNet.InsertVertexResult
struct InsertVertexResult_tBB60B8630F0B2C257C08D809BFDE63F8F76EA4F3 
{
public:
	// System.Int32 TriangleNet.InsertVertexResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InsertVertexResult_tBB60B8630F0B2C257C08D809BFDE63F8F76EA4F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriangleNet.Logging.LogLevel
struct LogLevel_t63C47111C097598B2D3EB9006D9D8F63EFBB093C 
{
public:
	// System.Int32 TriangleNet.Logging.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t63C47111C097598B2D3EB9006D9D8F63EFBB093C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// TriangleNet.Log
struct Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<TriangleNet.Logging.LogItem> TriangleNet.Log::log
	List_1_tCE4BA4A74401AE82A6BD48312A07D06994ACFB60 * ___log_1;
	// TriangleNet.Logging.LogLevel TriangleNet.Log::level
	int32_t ___level_2;

public:
	inline static int32_t get_offset_of_log_1() { return static_cast<int32_t>(offsetof(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5, ___log_1)); }
	inline List_1_tCE4BA4A74401AE82A6BD48312A07D06994ACFB60 * get_log_1() const { return ___log_1; }
	inline List_1_tCE4BA4A74401AE82A6BD48312A07D06994ACFB60 ** get_address_of_log_1() { return &___log_1; }
	inline void set_log_1(List_1_tCE4BA4A74401AE82A6BD48312A07D06994ACFB60 * value)
	{
		___log_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___log_1), (void*)value);
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}
};

struct Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_StaticFields
{
public:
	// System.Boolean TriangleNet.Log::<Verbose>k__BackingField
	bool ___U3CVerboseU3Ek__BackingField_0;
	// TriangleNet.Log TriangleNet.Log::instance
	Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5 * ___instance_3;

public:
	inline static int32_t get_offset_of_U3CVerboseU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_StaticFields, ___U3CVerboseU3Ek__BackingField_0)); }
	inline bool get_U3CVerboseU3Ek__BackingField_0() const { return ___U3CVerboseU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CVerboseU3Ek__BackingField_0() { return &___U3CVerboseU3Ek__BackingField_0; }
	inline void set_U3CVerboseU3Ek__BackingField_0(bool value)
	{
		___U3CVerboseU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_StaticFields, ___instance_3)); }
	inline Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5 * get_instance_3() const { return ___instance_3; }
	inline Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_3), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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


// System.Action`1<TriangleNet.Topology.Triangle>
struct Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<TriangleNet.IPredicates>
struct Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>
struct Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean>
struct Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,System.Double,System.Boolean>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_3_Invoke_mAF49DD630CF671691F584935F4CEC86CE53F9C8C_gshared (Func_3_t9829DA473A0894F4A06CE7861E430DF566EF6091 * __this, RuntimeObject * ___arg10, double ___arg21, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_mC9A30EEF00507C36CC34A71B88397287E6906197_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String TriangleNet.Topology.Osub::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Osub_ToString_mC38EBDC03412EC9EAA10093F86E79812E362A045 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Sym(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Sym_m27BD0BC2AD2F920A06C3690E72DF775E5693D423 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Sym()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Sym_m64F7F8194DF43AC964E72D2D8FC81CA6E72640D7 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Pivot(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Pivot_mA4CE5370D614EC5DB5108D7C4A0F162232590D6D (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Pivot(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Pivot_m973A8B45266B8FD2724CDE422326CE8A8020E9FC (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Next_m69E9CF57A957523C9560BD53136028CD86AE6B45 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::Org()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_Org_m15C17B8EADCE18F65DCB98BDD895EF200D4485A7 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::Dest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_Dest_mF2FD60A4737E666E6A7456665207A89F665FF98D (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::SetOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetOrg_m3FC7BFBC845D7B061990BE647D1D7FB7F945F446 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::SetDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetDest_m05E6C5586512CC03DC9EE47606218D7AB3E2D118 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::SegOrg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_SegOrg_mA09547EDF5590FC5416A583F27DC69EA75D717E8 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::SegDest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_SegDest_m93A9E3E3A0F58D7924C57D900761D206DA11DC41 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::SetSegOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetSegOrg_m2360FC0A43DA89A265F8FEEF24A82BFFA58FCD33 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::SetSegDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetSegDest_mB9980B528811F01AD0C4E5B6C2D0D65B713D3613 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Bond(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Bond_m7371C2076931B3418998AB1D54268E5EC0654A45 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Dissolve(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Dissolve_mFFAFDABBA7930BA20BB5AD9747B69231BB71C0F9 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___dummy0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::TriDissolve(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_TriDissolve_mDFC17130580196D67C628908928F5EED25BD4750 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___dummy0, const RuntimeMethod* method);
// System.String TriangleNet.Topology.Otri::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Otri_ToString_m3CB303745B0442936ADD471994BF519CB0C7228B (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Sym(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Sym()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_m43364285D327C00BAB254022919ACC49566AE8E9 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lnext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m1E2682AFFB16CAD4A924C523412746C09CF02D10 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m47967B2F87B7C49AA15C03BD7B3B1AADE82506A3 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Onext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Onext_mB9A85DF4FBC7C3D0FB0049ADAEACF29C8AB0B2A9 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Onext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Onext_mFF8D422993821FD9C6F2F8D0133CCC5ACA41B023 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Oprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Oprev_m05B3047F39EC4FEA90DF248E45F29BCC51F952DB (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Oprev_m41D8764009C00487ABB8E386CFBBC7DF8912C49B (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Dnext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dnext_m673290CFC27E810EF5646B9A023FE5D7FA40B859 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dnext_m90E357F83E4F830029723028405F4C7FF58B085F (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Dprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dprev_mD9D70D6E85EEE50F21E1E44750BAB4733D0BB92F (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Org()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Dest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Apex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Copy(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Topology.Otri::Equals(TriangleNet.Topology.Otri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_Equals_m2C35FC54DB28965C8E1CED4B26D49DE305979C29 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SetOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetOrg_mE90C20BB5F8286E4C488683A62D07E2C49509731 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SetDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetDest_m3C71B97E3DC3EC589490EB254FF7DE28B6CB35AE (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SetApex(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetApex_m9EFC5B7ABAC2A3542AF1741F3A287839CBA7EBBC (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Bond(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Bond_mE57DDC70F2DD2BE46224E902683DC053303F8948 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Dissolve(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dissolve_m61E99042393102C68558969B7311C6F60A67E124 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___dummy0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Infect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Infect_m90CFE2928C1F744EA9F0B65026C38ADA9EE4285E (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Uninfect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Uninfect_m803367D48EDA53074610A8DF635A4CD620513621 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Boolean TriangleNet.Topology.Otri::IsInfected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_IsInfected_m5BF69E20C96793295C28217252E1DC4F8FF999DD (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Pivot(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SegBond(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SegBond_mC206E0B964FB3B3F8D722298787C9E3786F251DB (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SegDissolve(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SegDissolve_m98A48D4ED46896926307F63551D6830781FE3CD1 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___dummy0, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Point::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m7A91AF5B4270707B1947805925BE2913F7EE38B6 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, double ___x0, double ___y1, int32_t ___label2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean TriangleNet.Geometry.Point::Equals(TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m57C0E43E9CC1F10D8FED1303FFE498FE4B07DFFD (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___p0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Geometry.Point::op_Equality(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m2114AF7F1C6AC57993521F2065E32E9B969D88AB (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___a0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___b1, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39 (double* __this, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Polygon::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m59530A0AE314847FAFF19721349AF0CEBFA33F0D (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, int32_t ___capacity0, bool ___markers1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::.ctor(System.Int32)
inline void List_1__ctor_m486112DA1275C74D892681B109310C1B53604894 (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.Point>::.ctor()
inline void List_1__ctor_mC1776987CCD7CC8DDE109E0368F4B18280F4F7E4 (List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>::.ctor()
inline void List_1__ctor_mEC53FB9587C8C44FE02CCC2BFB03E126E92BCCC1 (List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment>::.ctor()
inline void List_1__ctor_mD195654FB6D266D073A044DC195CEAA31A693B37 (List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void TriangleNet.Geometry.Polygon::set_HasPointMarkers(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Polygon_set_HasPointMarkers_m7C006A810718B1CD01A850C32473FC9B8F59E1F5_inline (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Polygon::set_HasSegmentMarkers(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Polygon_set_HasSegmentMarkers_m49F0F472CA961F78A06BBD38C0F7DF8AF1F09E1C_inline (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::Add(!0)
inline void List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274 (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB *, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment>::Add(!0)
inline void List_1_Add_m9770C7A7EC747BB9DFA7C69EA3388E737D75A858 (List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// TriangleNet.Geometry.Point TriangleNet.Geometry.Contour::FindInteriorPoint(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * Contour_FindInteriorPoint_m1A7A2A2BA997C03A6CF1EA916CB01D458012E194 (Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * __this, int32_t ___limit0, double ___eps1, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Polygon::Add(TriangleNet.Geometry.Contour,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Add_m828CC6E83AABBA02EC1FA35A4FED50B85A379303 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * ___contour0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___hole1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex> TriangleNet.Geometry.Contour::get_Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * Contour_get_Points_mFA3722D831337289B75BB3F4615AB7443FA05A49_inline (Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m1ECA98E79C761B52F45297365E9CFD42853E8BA7 (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment> TriangleNet.Geometry.Contour::GetSegments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * Contour_GetSegments_mB61BA53A1C2CA21246FBFB781383865432234790 (Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mB597803BE315FFA8799E5D8ED62088E6539458F2 (List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.Point>::Add(!0)
inline void List_1_Add_m53FDCAB0BF160DB637BE3FF11DC1C4458729B348 (List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.Log::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Log_get_Instance_m9F89292951CF0C5A1D381B987F500F96DEEDC298 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg>::.ctor()
inline void Queue_1__ctor_mCD97B3E9849986D37EB7C512026C0E4F28C3A12E (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void TriangleNet.Meshing.Data.BadTriQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTriQueue__ctor_m278F02BCAE85B04F80E66056DE9DE12FC124A6B7 (BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * __this, const RuntimeMethod* method);
// System.Func`1<TriangleNet.IPredicates> TriangleNet.Configuration::get_Predicates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * Configuration_get_Predicates_m4880A56350B9F09D038B6D879259E12C91861186_inline (Configuration_tFD59B344AE38BF7070D6C1F6F933F10DB63BCA6A * __this, const RuntimeMethod* method);
// !0 System.Func`1<TriangleNet.IPredicates>::Invoke()
inline RuntimeObject* Func_1_Invoke_mEFC91464B8BD8F5B2D9ED47F1907A157B9BCD44B (Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void TriangleNet.NewLocation::.ctor(TriangleNet.Mesh,TriangleNet.IPredicates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation__ctor_mDB95D3D91D877C307BAA7FF0CB3EC3DA6EF73891 (NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB * __this, Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh0, RuntimeObject* ___predicates1, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Triangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle__ctor_mAD400A1F90068FF5221A3C075D086B9128AA8419 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Behavior::set_Quality(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_set_Quality_m659FBFC774C63948F93FF57442287A474CBF58BD (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Double TriangleNet.Meshing.QualityOptions::get_MinimumAngle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QualityOptions_get_MinimumAngle_m3E83BF7091D2043B8FA901970B22A0F3CC929042_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Behavior::set_MinAngle(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_set_MinAngle_m87E23E64625CB58BB6B72FDC681D4F8A7DCA2B0E (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, double ___value0, const RuntimeMethod* method);
// System.Double TriangleNet.Meshing.QualityOptions::get_MaximumAngle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QualityOptions_get_MaximumAngle_mA2D29A8BEC2EE2722CB44D2039CDF2FEA0B9C44C_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Behavior::set_MaxAngle(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_set_MaxAngle_mFFE480697153F220F653FD8A6FAF6D4AA6CB6E86 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, double ___value0, const RuntimeMethod* method);
// System.Double TriangleNet.Meshing.QualityOptions::get_MaximumArea()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QualityOptions_get_MaximumArea_m6A15C115B021E467D6A20AEB960CA4CFD1AC8917_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Behavior::set_MaxArea(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_set_MaxArea_m7F8EB6C85A08ACBD940A3ABB8966CD4087ED9BAE (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, double ___value0, const RuntimeMethod* method);
// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean> TriangleNet.Meshing.QualityOptions::get_UserTest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * QualityOptions_get_UserTest_mC959A07AAE40E40F4D4B4FE229CF55928FC06AF5_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Behavior::set_UserTest(System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_set_UserTest_m4B28B877934454FF8CBFD804B9CBB401E70187D7 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * ___value0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Meshing.QualityOptions::get_VariableArea()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QualityOptions_get_VariableArea_m808C194D46BA7BA9D86BB555D456CE5BA078BAB0_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Behavior::set_VarArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_set_VarArea_mAA1AE283B6081565DEDA69204B2ACCB5B102D6D1 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Behavior::get_ConformingDelaunay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_ConformingDelaunay_mD63F63D5DF9AF3816D108FF84670DDFC5C8A1F23 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Behavior::set_ConformingDelaunay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_set_ConformingDelaunay_m70C689DEA436FC5B8D3D1D78F9AD0B980AADDDC1 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 TriangleNet.Meshing.QualityOptions::get_SteinerPoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QualityOptions_get_SteinerPoints_m7D14C075B0107749B3B7D2392FA3ED62AA6481F4_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method);
// System.Boolean TriangleNet.Behavior::get_Poly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_Poly_m7069098F8120A9F87EF5B962CB0BC817B585E46E (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Boolean TriangleNet.Behavior::get_Quality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_Quality_m9834C42C08B3BDF45532DC89C849903822A476A9 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Int32 TriangleNet.TrianglePool::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrianglePool_get_Count_m102532C98782E7382EEAEBDF1CD10EE3366AB967 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::EnforceQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_EnforceQuality_m8E5E511F6BCE17A0E026ECC8A0B6B1F429069FB6 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg>::Enqueue(!0)
inline void Queue_1_Enqueue_m2C61F4E6FCBD32987153D78D93F9DE702A1B4A9F (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * __this, BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 *, BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Int32 TriangleNet.Behavior::get_NoBisect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Behavior_get_NoBisect_mC2AFE3BAA7B94ED892FDD0F32D74C90B744A42C7 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.Data.BadSubseg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadSubseg__ctor_m5B12862C0A64CC6DE95E58719A6047D08F0C3766 (BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * __this, const RuntimeMethod* method);
// System.Boolean TriangleNet.Behavior::get_VarArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_VarArea_mE5B69713B9AE4AF07B976E650943EB44F0C87799 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean> TriangleNet.Behavior::get_UserTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * Behavior_get_UserTest_m88D08B5256CF00A3F0FABD7EE6F1DC7D6867E8EA (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Double TriangleNet.Behavior::get_MaxArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Behavior_get_MaxArea_m60B01E1E462EAE0FC42185AD702F8DD6F4022A8B (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.Data.BadTriQueue::Enqueue(TriangleNet.Topology.Otri&,System.Double,TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTriQueue_Enqueue_m1CEB3720166F896F52FC316BA2DABF3A2B34D324 (BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___enqtri0, double ___minedge1, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___apex2, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___org3, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___dest4, const RuntimeMethod* method);
// !2 System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_m8C71C03C02354FF15F1A98997F5482B98876D8CB (Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * __this, RuntimeObject* ___arg10, double ___arg21, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 *, RuntimeObject*, double, const RuntimeMethod*))Func_3_Invoke_mAF49DD630CF671691F584935F4CEC86CE53F9C8C_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Double TriangleNet.Behavior::get_MaxAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Behavior_get_MaxAngle_m27BA9A50A46DC5CE98F02A9FF6E3696EEC0BD6C0 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Boolean TriangleNet.Geometry.Point::op_Inequality(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Inequality_m3FE5FD8D46076A8BD9AEDCAC1E9B29E7650C561F (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___a0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___b1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>::get_Values()
inline ValueCollection_t229C029B153F947A4549104056077BC114A5809C * Dictionary_2_get_Values_mF31948F1C6D2BBB5DE8E800CF7A9613FA31CF41E (Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t229C029B153F947A4549104056077BC114A5809C * (*) (Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D *, const RuntimeMethod*))Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriangleNet.Topology.SubSegment>::GetEnumerator()
inline Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87  ValueCollection_GetEnumerator_m025DF0776B96878B7C65B66CB0A8276CAD0AA7AB (ValueCollection_t229C029B153F947A4549104056077BC114A5809C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87  (*) (ValueCollection_t229C029B153F947A4549104056077BC114A5809C *, const RuntimeMethod*))ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TriangleNet.Topology.SubSegment>::get_Current()
inline SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * Enumerator_get_Current_mBD26809EE43ACE6D364A4687CA60E99D7FF5AADC_inline (Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 * __this, const RuntimeMethod* method)
{
	return ((  SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * (*) (Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 *, const RuntimeMethod*))Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline)(__this, method);
}
// System.Int32 TriangleNet.Meshing.QualityMesher::CheckSeg4Encroach(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualityMesher_CheckSeg4Encroach_m1A87F52F5AD575C13D69B73603A81DB6E8E058E7 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___testsubseg0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TriangleNet.Topology.SubSegment>::MoveNext()
inline bool Enumerator_MoveNext_mE55993B5B281B0AE3B1992C539A2FA7D8D2399B2 (Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 *, const RuntimeMethod*))Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TriangleNet.Topology.SubSegment>::Dispose()
inline void Enumerator_Dispose_m40C2893F8E44F4D82D3685FA9AEA2B34FC884AA2 (Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 *, const RuntimeMethod*))Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg>::Dequeue()
inline BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * Queue_1_Dequeue_mA9F73860A1D493EBDC7AB2AAC10F237E2A478481 (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * __this, const RuntimeMethod* method)
{
	return ((  BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * (*) (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Boolean TriangleNet.Topology.Osub::IsDead(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Osub_IsDead_mA282919A0206629C820EF0EAA56DD970CDF0AE6E (SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___sub0, const RuntimeMethod* method);
// System.Void TriangleNet.Mesh::DeleteVertex(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_DeleteVertex_m3E47118643B2B66849E91169FEA79D869118EB46 (Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___deltri0, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Double,System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mCD6917C5503DAFB577D0E0A470129994192BF4ED (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * __this, double ___x0, double ___y1, int32_t ___mark2, int32_t ___attribs3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>::Add(!0,!1)
inline void Dictionary_2_Add_mFE911E8AC402B5FBA3C81CD015032BBB892BE005 (Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9 * __this, int32_t ___key0, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9 *, int32_t, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean TriangleNet.Behavior::get_NoExact()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_NoExact_mCDCFEFF0B67EE543B5D67F2167FC7456311731B5_inline (const RuntimeMethod* method);
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347 (double ___d0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// TriangleNet.InsertVertexResult TriangleNet.Mesh::InsertVertex(TriangleNet.Geometry.Vertex,TriangleNet.Topology.Otri&,TriangleNet.Topology.Osub&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_InsertVertex_m984D754C3AC83DECBE5E4E11FA5DE718B4FF04C5 (Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___newvertex0, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___searchtri1, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___splitseg2, bool ___segmentflaws3, bool ___triflaws4, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg>::get_Count()
inline int32_t Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_inline (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_GetEnumerator_mEB6D2A03906B1D2B074F1E3DF7F33BF269E53411 (TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::TestTriangle(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_TestTriangle_mDCDCF5E19B0FDC98CD9A585E6B30A521AA17930C (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___testtri0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Topology.Otri::IsDead(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_IsDead_mC83C3F128DE68E8AE8518DF130CEFBD11DCDC424 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___tria0, const RuntimeMethod* method);
// TriangleNet.Geometry.Point TriangleNet.NewLocation::FindLocation(TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex,System.Double&,System.Double&,System.Boolean,TriangleNet.Topology.Otri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * NewLocation_FindLocation_m0F21576C797AD079A280C554106862A42BFBC20C (NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___org0, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___dest1, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___apex2, double* ___xi3, double* ___eta4, bool ___offcenter5, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  ___badotri6, const RuntimeMethod* method);
// System.Boolean TriangleNet.Log::get_Verbose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Log_get_Verbose_mA93BCB438872D26EB2B864FF197A2691637ED4C9_inline (const RuntimeMethod* method);
// System.Void TriangleNet.Tools.Interpolation::InterpolateAttributes(TriangleNet.Geometry.Vertex,TriangleNet.Geometry.ITriangle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolation_InterpolateAttributes_mD82444D63246924F1733E9FA68AD96B78C4ED7AE (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, RuntimeObject* ___triangle1, int32_t ___n2, const RuntimeMethod* method);
// System.Void TriangleNet.Mesh::UndoVertex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UndoVertex_m9C0898A139CF4D118FC35BA828BA5086B5A79C26 (Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::TallyEncs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_TallyEncs_m03686BE888432E0C2F0A2498246E17562EF38C33 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::SplitEncSegs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_SplitEncSegs_m84E0D73E180271F42FABC0E6849BCE7C57E2696A (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, bool ___triflaws0, const RuntimeMethod* method);
// System.Double TriangleNet.Behavior::get_MinAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Behavior_get_MinAngle_m93B71E21C4108C459183D6E7EE4E5739E127B980 (Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::TallyFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_TallyFaces_mA0E3320A4B1683A4557B414D148B9E9150548E15 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, const RuntimeMethod* method);
// TriangleNet.Meshing.Data.BadTriangle TriangleNet.Meshing.Data.BadTriQueue::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * BadTriQueue_Dequeue_mC1E4C8831F359E5AFDFF42D8BB77901FC690DBED (BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::SplitTriangle(TriangleNet.Meshing.Data.BadTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_SplitTriangle_mF128D9226ADCCD04703885C418BF4202E8D5D530 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * ___badtri0, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.Data.BadTriQueue::Enqueue(TriangleNet.Meshing.Data.BadTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTriQueue_Enqueue_m536863CB4684602737C939985BD69528ACB188E6 (BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * __this, BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * ___badtri0, const RuntimeMethod* method);
// System.Int32 TriangleNet.Meshing.Data.BadTriQueue::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BadTriQueue_get_Count_mEC85E2DE873D11D0D2B5A03AD9FFFFC41ABFE1A6 (BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * __this, const RuntimeMethod* method);
// System.Double System.Math::Min(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Double System.Math::Max(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::GetEnumerator()
inline Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A  List_1_GetEnumerator_mA9519E9E3DB44ACB125C355349B202C1FE7885C9 (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A  (*) (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<TriangleNet.Geometry.Vertex>::get_Current()
inline Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Enumerator_get_Current_m8B5701BA3AF333A9E380BE7892F18DBA33A256FA_inline (Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A * __this, const RuntimeMethod* method)
{
	return ((  Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * (*) (Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void TriangleNet.Geometry.Rectangle::Expand(TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_Expand_m9CBC60D962C559D0B00690A0209C826E21B15EB4 (Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<TriangleNet.Geometry.Vertex>::MoveNext()
inline bool Enumerator_MoveNext_m0E1983241281320035746DA5EA265BC7C7B5731B (Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TriangleNet.Geometry.Vertex>::Dispose()
inline void Enumerator_Dispose_mB01B871588B5349705854C7324E254065C3AB734 (Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean TriangleNet.Geometry.Rectangle::Contains(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_mD32362C130CE13FB67A6C8E23574D5EA51E8853E (Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * __this, double ___x0, double ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>::.ctor()
inline void List_1__ctor_mBBBB2B4431CB47912AE3CAED43A018A1773639D3 (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE27EEE1A1133AD3DA60CFE655E54B5EED9D8D3EB (U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<TriangleNet.Topology.Triangle>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9FBA8B363DC35EE0D5DE5FA6352CB956EFB35C64 (Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator::Process(TriangleNet.Topology.Triangle,System.Action`1<TriangleNet.Topology.Triangle>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionIterator_Process_m3133058E20D7E4B49791E29C7A68F010B5889C9F (RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___triangle0, Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * ___action1, int32_t ___boundary2, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD7ABC9B865D62E64624A6A56B04BA78EA609C8DC (U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>::Add(!0)
inline void List_1_Add_m3CF6E0D9C84498A837D7AA00C27670994C37B13B (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A *, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF90E3A9B566F5593BF41AD410EC17E9EE55B51D7 (Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator::ProcessRegion(System.Action`1<TriangleNet.Topology.Triangle>,System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionIterator_ProcessRegion_m7FD9215526AE024C428D7F0D7D461C16F0379CC2 (RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9 * __this, Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * ___action0, Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * ___protector1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>::Clear()
inline void List_1_Clear_mC37EDCCD8122CA80C27D075FAE0354E836A075FD (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>::get_Item(System.Int32)
inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * List_1_get_Item_m0ECA3A5653E521522FED28F4E0B88DBD61146FE3_inline (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * (*) (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action`1<TriangleNet.Topology.Triangle>::Invoke(!0)
inline void Action_1_Invoke_m92ED849BB80F52F93E2A9ECF1ACA7C565BA4C781 (Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 *, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// !1 System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_m5C81050FBF537178A73C1267770D224CE815B192 (Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD *, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A *, const RuntimeMethod*))Func_2_Invoke_mC9A30EEF00507C36CC34A71B88397287E6906197_gshared)(__this, ___arg0, method);
}
// System.Int32 System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>::get_Count()
inline int32_t List_1_get_Count_m5968B1BCE589DAEFB28B829434C7C39773663F61_inline (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>::GetEnumerator()
inline Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869  List_1_GetEnumerator_m97D5606CCE6CCE5EDC5110EC0804875BDD4A3CA7 (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869  (*) (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<TriangleNet.Topology.Triangle>::get_Current()
inline Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * Enumerator_get_Current_m2F93A9F525F0C6A50A544849D9868F93EC018472_inline (Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 * __this, const RuntimeMethod* method)
{
	return ((  Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * (*) (Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TriangleNet.Topology.Triangle>::MoveNext()
inline bool Enumerator_MoveNext_m1FED3612715EDFC96917D3EE349AD84CA125CEA5 (Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TriangleNet.Topology.Triangle>::Dispose()
inline void Enumerator_Dispose_m7A78E1BF58D4F587FF66F22E162DDB1E843164B1 (Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void TriangleNet.RobustPredicates::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates__ctor_m002AF1CBBEBB7D07FCE72CEE3F03F23113D7E7F1 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void TriangleNet.RobustPredicates::AllocateWorkspace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates_AllocateWorkspace_m5D2D85B716DD5B276C6617CDEDDCF310A59AE798 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, const RuntimeMethod* method);
// System.Double TriangleNet.RobustPredicates::CounterClockwiseAdapt(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_CounterClockwiseAdapt_m13DAED25B6D1EF247046087A878F0BEAB89A440E (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pa0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pb1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pc2, double ___detsum3, const RuntimeMethod* method);
// System.Double TriangleNet.RobustPredicates::InCircleAdapt(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_InCircleAdapt_mDC258332D1B41EF4AA3BDE47FA98BB3D63393716 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pa0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pb1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pc2, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pd3, double ___permanent4, const RuntimeMethod* method);
// System.Double TriangleNet.RobustPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_CounterClockwise_m56542951636095435EAFB298383C9ED9337D1085 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pa0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pb1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pc2, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Point::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m38BE7730A08F86B090D72D4F66297D7D8ACF5681 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, double ___x0, double ___y1, const RuntimeMethod* method);
// System.Double TriangleNet.RobustPredicates::Estimate(System.Int32,System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_Estimate_m0A4C1ECAEA23C146A54F2191C79B3F72C2B4B096 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, int32_t ___elen0, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___e1, const RuntimeMethod* method);
// System.Int32 TriangleNet.RobustPredicates::FastExpansionSumZeroElim(System.Int32,System.Double[],System.Int32,System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, int32_t ___elen0, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___e1, int32_t ___flen2, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___f3, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___h4, const RuntimeMethod* method);
// System.Int32 TriangleNet.RobustPredicates::ScaleExpansionZeroElim(System.Int32,System.Double[],System.Double,System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, int32_t ___elen0, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___e1, double ___b2, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___h3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TriangleNet.Topology.Osub
IL2CPP_EXTERN_C void Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshal_pinvoke(const Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677& unmarshaled, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshaled_pinvoke& marshaled)
{
	Exception_t* ___seg_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'seg' of type 'Osub': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___seg_0Exception, NULL);
}
IL2CPP_EXTERN_C void Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshal_pinvoke_back(const Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshaled_pinvoke& marshaled, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677& unmarshaled)
{
	Exception_t* ___seg_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'seg' of type 'Osub': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___seg_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TriangleNet.Topology.Osub
IL2CPP_EXTERN_C void Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshal_pinvoke_cleanup(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TriangleNet.Topology.Osub
IL2CPP_EXTERN_C void Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshal_com(const Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677& unmarshaled, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshaled_com& marshaled)
{
	Exception_t* ___seg_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'seg' of type 'Osub': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___seg_0Exception, NULL);
}
IL2CPP_EXTERN_C void Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshal_com_back(const Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshaled_com& marshaled, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677& unmarshaled)
{
	Exception_t* ___seg_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'seg' of type 'Osub': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___seg_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TriangleNet.Topology.Osub
IL2CPP_EXTERN_C void Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshal_com_cleanup(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677_marshaled_com& marshaled)
{
}
// System.String TriangleNet.Topology.Osub::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Osub_ToString_mC38EBDC03412EC9EAA10093F86E79812E362A045 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148EDDF6555695DFC66299136A88027385790545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC381049E38E1A72EDE3A68C5E9D6A2D49DB56B60);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		V_0 = (bool)((((RuntimeObject*)(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = _stringLiteral148EDDF6555695DFC66299136A88027385790545;
		goto IL_0034;
	}

IL_0017:
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_2 = __this->get_seg_0();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_hash_0();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC381049E38E1A72EDE3A68C5E9D6A2D49DB56B60, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0034;
	}

IL_0034:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Osub_ToString_mC38EBDC03412EC9EAA10093F86E79812E362A045_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Osub_ToString_mC38EBDC03412EC9EAA10093F86E79812E362A045(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TriangleNet.Topology.Osub::Sym(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Sym_m27BD0BC2AD2F920A06C3690E72DF775E5693D423 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	{
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_0 = ___os0;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_1 = __this->get_seg_0();
		L_0->set_seg_0(L_1);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_2 = ___os0;
		int32_t L_3 = __this->get_orient_1();
		L_2->set_orient_1(((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_3)));
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_Sym_m27BD0BC2AD2F920A06C3690E72DF775E5693D423_AdjustorThunk (RuntimeObject * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_Sym_m27BD0BC2AD2F920A06C3690E72DF775E5693D423(_thisAdjusted, ___os0, method);
}
// System.Void TriangleNet.Topology.Osub::Sym()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Sym_m64F7F8194DF43AC964E72D2D8FC81CA6E72640D7 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_orient_1();
		__this->set_orient_1(((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_0)));
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_Sym_m64F7F8194DF43AC964E72D2D8FC81CA6E72640D7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_Sym_m64F7F8194DF43AC964E72D2D8FC81CA6E72640D7(_thisAdjusted, method);
}
// System.Void TriangleNet.Topology.Osub::Pivot(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Pivot_mA4CE5370D614EC5DB5108D7C4A0F162232590D6D (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	{
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_0 = ___os0;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_1 = __this->get_seg_0();
		NullCheck(L_1);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_2 = L_1->get_subsegs_1();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		*(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_0)->___seg_0), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_Pivot_mA4CE5370D614EC5DB5108D7C4A0F162232590D6D_AdjustorThunk (RuntimeObject * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_Pivot_mA4CE5370D614EC5DB5108D7C4A0F162232590D6D(_thisAdjusted, ___os0, method);
}
// System.Void TriangleNet.Topology.Osub::Pivot(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Pivot_m973A8B45266B8FD2724CDE422326CE8A8020E9FC (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_1 = __this->get_seg_0();
		NullCheck(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = L_1->get_triangles_3();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		*(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_0)->___tri_0), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_Pivot_m973A8B45266B8FD2724CDE422326CE8A8020E9FC_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_Pivot_m973A8B45266B8FD2724CDE422326CE8A8020E9FC(_thisAdjusted, ___ot0, method);
}
// System.Void TriangleNet.Topology.Osub::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Next_m69E9CF57A957523C9560BD53136028CD86AE6B45 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = L_0->get_subsegs_1();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_2));
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)__this = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)__this)->___seg_0), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_Next_m69E9CF57A957523C9560BD53136028CD86AE6B45_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_Next_m69E9CF57A957523C9560BD53136028CD86AE6B45(_thisAdjusted, method);
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::Org()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_Org_m15C17B8EADCE18F65DCB98BDD895EF200D4485A7 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method)
{
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_2();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_Org_m15C17B8EADCE18F65DCB98BDD895EF200D4485A7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * _returnValue;
	_returnValue = Osub_Org_m15C17B8EADCE18F65DCB98BDD895EF200D4485A7(_thisAdjusted, method);
	return _returnValue;
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::Dest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_Dest_mF2FD60A4737E666E6A7456665207A89F665FF98D (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method)
{
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_2();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_2));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_Dest_mF2FD60A4737E666E6A7456665207A89F665FF98D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * _returnValue;
	_returnValue = Osub_Dest_mF2FD60A4737E666E6A7456665207A89F665FF98D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TriangleNet.Topology.Osub::SetOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetOrg_m3FC7BFBC845D7B061990BE647D1D7FB7F945F446 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_2();
		int32_t L_2 = __this->get_orient_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3 = ___vertex0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_SetOrg_m3FC7BFBC845D7B061990BE647D1D7FB7F945F446_AdjustorThunk (RuntimeObject * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_SetOrg_m3FC7BFBC845D7B061990BE647D1D7FB7F945F446(_thisAdjusted, ___vertex0, method);
}
// System.Void TriangleNet.Topology.Osub::SetDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetDest_m05E6C5586512CC03DC9EE47606218D7AB3E2D118 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_2();
		int32_t L_2 = __this->get_orient_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3 = ___vertex0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_2))), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_SetDest_m05E6C5586512CC03DC9EE47606218D7AB3E2D118_AdjustorThunk (RuntimeObject * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_SetDest_m05E6C5586512CC03DC9EE47606218D7AB3E2D118(_thisAdjusted, ___vertex0, method);
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::SegOrg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_SegOrg_mA09547EDF5590FC5416A583F27DC69EA75D717E8 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method)
{
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_2();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_2));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_SegOrg_mA09547EDF5590FC5416A583F27DC69EA75D717E8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * _returnValue;
	_returnValue = Osub_SegOrg_mA09547EDF5590FC5416A583F27DC69EA75D717E8(_thisAdjusted, method);
	return _returnValue;
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::SegDest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_SegDest_m93A9E3E3A0F58D7924C57D900761D206DA11DC41 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, const RuntimeMethod* method)
{
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_2();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_2));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Osub_SegDest_m93A9E3E3A0F58D7924C57D900761D206DA11DC41_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * _returnValue;
	_returnValue = Osub_SegDest_m93A9E3E3A0F58D7924C57D900761D206DA11DC41(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TriangleNet.Topology.Osub::SetSegOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetSegOrg_m2360FC0A43DA89A265F8FEEF24A82BFFA58FCD33 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_2();
		int32_t L_2 = __this->get_orient_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3 = ___vertex0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_2))), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_SetSegOrg_m2360FC0A43DA89A265F8FEEF24A82BFFA58FCD33_AdjustorThunk (RuntimeObject * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_SetSegOrg_m2360FC0A43DA89A265F8FEEF24A82BFFA58FCD33(_thisAdjusted, ___vertex0, method);
}
// System.Void TriangleNet.Topology.Osub::SetSegDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetSegDest_mB9980B528811F01AD0C4E5B6C2D0D65B713D3613 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_2();
		int32_t L_2 = __this->get_orient_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3 = ___vertex0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_2))), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_SetSegDest_mB9980B528811F01AD0C4E5B6C2D0D65B713D3613_AdjustorThunk (RuntimeObject * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_SetSegDest_mB9980B528811F01AD0C4E5B6C2D0D65B713D3613(_thisAdjusted, ___vertex0, method);
}
// System.Void TriangleNet.Topology.Osub::Bond(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Bond_m7371C2076931B3418998AB1D54268E5EC0654A45 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = L_0->get_subsegs_1();
		int32_t L_2 = __this->get_orient_1();
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_3 = ___os0;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_4 = (*(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_3);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 )L_4);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_5 = ___os0;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_6 = L_5->get_seg_0();
		NullCheck(L_6);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_7 = L_6->get_subsegs_1();
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_8 = ___os0;
		int32_t L_9 = L_8->get_orient_1();
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_10 = (*(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)__this);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 )L_10);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_Bond_m7371C2076931B3418998AB1D54268E5EC0654A45_AdjustorThunk (RuntimeObject * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_Bond_m7371C2076931B3418998AB1D54268E5EC0654A45(_thisAdjusted, ___os0, method);
}
// System.Void TriangleNet.Topology.Osub::Dissolve(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Dissolve_mFFAFDABBA7930BA20BB5AD9747B69231BB71C0F9 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___dummy0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = L_0->get_subsegs_1();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_3 = ___dummy0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->set_seg_0(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_Dissolve_mFFAFDABBA7930BA20BB5AD9747B69231BB71C0F9_AdjustorThunk (RuntimeObject * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___dummy0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_Dissolve_mFFAFDABBA7930BA20BB5AD9747B69231BB71C0F9(_thisAdjusted, ___dummy0, method);
}
// System.Void TriangleNet.Topology.Osub::TriDissolve(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_TriDissolve_mDFC17130580196D67C628908928F5EED25BD4750 (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___dummy0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = __this->get_seg_0();
		NullCheck(L_0);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_1 = L_0->get_triangles_3();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_3 = ___dummy0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->set_tri_0(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Osub_TriDissolve_mDFC17130580196D67C628908928F5EED25BD4750_AdjustorThunk (RuntimeObject * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___dummy0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * _thisAdjusted = reinterpret_cast<Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *>(__this + _offset);
	Osub_TriDissolve_mDFC17130580196D67C628908928F5EED25BD4750(_thisAdjusted, ___dummy0, method);
}
// System.Boolean TriangleNet.Topology.Osub::IsDead(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Osub_IsDead_mA282919A0206629C820EF0EAA56DD970CDF0AE6E (SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___sub0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = ___sub0;
		NullCheck(L_0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = L_0->get_subsegs_1();
		NullCheck(L_1);
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_seg_0();
		V_0 = (bool)((((RuntimeObject*)(SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0018;
	}

IL_0018:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void TriangleNet.Topology.Osub::Kill(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Kill_m1169634F828AC4BD4344FB5D0A1DEC50C205188C (SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___sub0, const RuntimeMethod* method)
{
	{
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_0 = ___sub0;
		NullCheck(L_0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = L_0->get_subsegs_1();
		NullCheck(L_1);
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_seg_0((SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A *)NULL);
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_2 = ___sub0;
		NullCheck(L_2);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_3 = L_2->get_subsegs_1();
		NullCheck(L_3);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_seg_0((SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A *)NULL);
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
// Conversion methods for marshalling of: TriangleNet.Topology.Otri
IL2CPP_EXTERN_C void Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshal_pinvoke(const Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93& unmarshaled, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshaled_pinvoke& marshaled)
{
	Exception_t* ___tri_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tri' of type 'Otri': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tri_0Exception, NULL);
}
IL2CPP_EXTERN_C void Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshal_pinvoke_back(const Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshaled_pinvoke& marshaled, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93& unmarshaled)
{
	Exception_t* ___tri_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tri' of type 'Otri': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tri_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TriangleNet.Topology.Otri
IL2CPP_EXTERN_C void Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshal_pinvoke_cleanup(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TriangleNet.Topology.Otri
IL2CPP_EXTERN_C void Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshal_com(const Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93& unmarshaled, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshaled_com& marshaled)
{
	Exception_t* ___tri_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tri' of type 'Otri': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tri_0Exception, NULL);
}
IL2CPP_EXTERN_C void Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshal_com_back(const Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshaled_com& marshaled, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93& unmarshaled)
{
	Exception_t* ___tri_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tri' of type 'Otri': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tri_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TriangleNet.Topology.Otri
IL2CPP_EXTERN_C void Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshal_com_cleanup(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_marshaled_com& marshaled)
{
}
// System.String TriangleNet.Topology.Otri::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Otri_ToString_m3CB303745B0442936ADD471994BF519CB0C7228B (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148EDDF6555695DFC66299136A88027385790545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2BF2B4DB9A6864C148643E8D70302A401ED7E95);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		V_0 = (bool)((((RuntimeObject*)(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = _stringLiteral148EDDF6555695DFC66299136A88027385790545;
		goto IL_0034;
	}

IL_0017:
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_2 = __this->get_tri_0();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_hash_0();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD2BF2B4DB9A6864C148643E8D70302A401ED7E95, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0034;
	}

IL_0034:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Otri_ToString_m3CB303745B0442936ADD471994BF519CB0C7228B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Otri_ToString_m3CB303745B0442936ADD471994BF519CB0C7228B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TriangleNet.Topology.Otri::Sym(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		NullCheck(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = L_1->get_neighbors_2();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_tri_0();
		L_0->set_tri_0(L_4);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_5 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_6 = __this->get_tri_0();
		NullCheck(L_6);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_7 = L_6->get_neighbors_2();
		int32_t L_8 = __this->get_orient_1();
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_orient_1();
		L_5->set_orient_1(L_9);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92(_thisAdjusted, ___ot0, method);
}
// System.Void TriangleNet.Topology.Otri::Sym()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_m43364285D327C00BAB254022919ACC49566AE8E9 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_orient_1();
		V_0 = L_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		NullCheck(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = L_1->get_neighbors_2();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_orient_1();
		__this->set_orient_1(L_4);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = __this->get_tri_0();
		NullCheck(L_5);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_6 = L_5->get_neighbors_2();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_tri_0();
		__this->set_tri_0(L_8);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Sym_m43364285D327C00BAB254022919ACC49566AE8E9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Sym_m43364285D327C00BAB254022919ACC49566AE8E9(_thisAdjusted, method);
}
// System.Void TriangleNet.Topology.Otri::Lnext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m1E2682AFFB16CAD4A924C523412746C09CF02D10 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		L_0->set_tri_0(L_1);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_2 = ___ot0;
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_plus1Mod3_2();
		int32_t L_4 = __this->get_orient_1();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		L_2->set_orient_1(L_6);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Lnext_m1E2682AFFB16CAD4A924C523412746C09CF02D10_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Lnext_m1E2682AFFB16CAD4A924C523412746C09CF02D10(_thisAdjusted, ___ot0, method);
}
// System.Void TriangleNet.Topology.Otri::Lnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_plus1Mod3_2();
		int32_t L_1 = __this->get_orient_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_orient_1(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA(_thisAdjusted, method);
}
// System.Void TriangleNet.Topology.Otri::Lprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m47967B2F87B7C49AA15C03BD7B3B1AADE82506A3 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		L_0->set_tri_0(L_1);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_2 = ___ot0;
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_minus1Mod3_3();
		int32_t L_4 = __this->get_orient_1();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		L_2->set_orient_1(L_6);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Lprev_m47967B2F87B7C49AA15C03BD7B3B1AADE82506A3_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Lprev_m47967B2F87B7C49AA15C03BD7B3B1AADE82506A3(_thisAdjusted, ___ot0, method);
}
// System.Void TriangleNet.Topology.Otri::Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_minus1Mod3_3();
		int32_t L_1 = __this->get_orient_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_orient_1(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273(_thisAdjusted, method);
}
// System.Void TriangleNet.Topology.Otri::Onext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Onext_mB9A85DF4FBC7C3D0FB0049ADAEACF29C8AB0B2A9 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		L_0->set_tri_0(L_1);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_2 = ___ot0;
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_minus1Mod3_3();
		int32_t L_4 = __this->get_orient_1();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		L_2->set_orient_1(L_6);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_7 = ___ot0;
		int32_t L_8 = L_7->get_orient_1();
		V_0 = L_8;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_9 = ___ot0;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_10 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_11 = L_10->get_tri_0();
		NullCheck(L_11);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_12 = L_11->get_neighbors_2();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_orient_1();
		L_9->set_orient_1(L_14);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_15 = ___ot0;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_16 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_17 = L_16->get_tri_0();
		NullCheck(L_17);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_18 = L_17->get_neighbors_2();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_tri_0();
		L_15->set_tri_0(L_20);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Onext_mB9A85DF4FBC7C3D0FB0049ADAEACF29C8AB0B2A9_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Onext_mB9A85DF4FBC7C3D0FB0049ADAEACF29C8AB0B2A9(_thisAdjusted, ___ot0, method);
}
// System.Void TriangleNet.Topology.Otri::Onext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Onext_mFF8D422993821FD9C6F2F8D0133CCC5ACA41B023 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_minus1Mod3_3();
		int32_t L_1 = __this->get_orient_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_orient_1(L_3);
		int32_t L_4 = __this->get_orient_1();
		V_0 = L_4;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = __this->get_tri_0();
		NullCheck(L_5);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_6 = L_5->get_neighbors_2();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_orient_1();
		__this->set_orient_1(L_8);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_9 = __this->get_tri_0();
		NullCheck(L_9);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_10 = L_9->get_neighbors_2();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_tri_0();
		__this->set_tri_0(L_12);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Onext_mFF8D422993821FD9C6F2F8D0133CCC5ACA41B023_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Onext_mFF8D422993821FD9C6F2F8D0133CCC5ACA41B023(_thisAdjusted, method);
}
// System.Void TriangleNet.Topology.Otri::Oprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Oprev_m05B3047F39EC4FEA90DF248E45F29BCC51F952DB (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		NullCheck(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = L_1->get_neighbors_2();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_tri_0();
		L_0->set_tri_0(L_4);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_5 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_6 = __this->get_tri_0();
		NullCheck(L_6);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_7 = L_6->get_neighbors_2();
		int32_t L_8 = __this->get_orient_1();
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_orient_1();
		L_5->set_orient_1(L_9);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_10 = ___ot0;
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_plus1Mod3_2();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_12 = ___ot0;
		int32_t L_13 = L_12->get_orient_1();
		NullCheck(L_11);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		L_10->set_orient_1(L_15);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Oprev_m05B3047F39EC4FEA90DF248E45F29BCC51F952DB_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Oprev_m05B3047F39EC4FEA90DF248E45F29BCC51F952DB(_thisAdjusted, ___ot0, method);
}
// System.Void TriangleNet.Topology.Otri::Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Oprev_m41D8764009C00487ABB8E386CFBBC7DF8912C49B (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_orient_1();
		V_0 = L_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		NullCheck(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = L_1->get_neighbors_2();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_orient_1();
		__this->set_orient_1(L_4);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = __this->get_tri_0();
		NullCheck(L_5);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_6 = L_5->get_neighbors_2();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_tri_0();
		__this->set_tri_0(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_plus1Mod3_2();
		int32_t L_10 = __this->get_orient_1();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_orient_1(L_12);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Oprev_m41D8764009C00487ABB8E386CFBBC7DF8912C49B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Oprev_m41D8764009C00487ABB8E386CFBBC7DF8912C49B(_thisAdjusted, method);
}
// System.Void TriangleNet.Topology.Otri::Dnext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dnext_m673290CFC27E810EF5646B9A023FE5D7FA40B859 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		NullCheck(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = L_1->get_neighbors_2();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_tri_0();
		L_0->set_tri_0(L_4);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_5 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_6 = __this->get_tri_0();
		NullCheck(L_6);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_7 = L_6->get_neighbors_2();
		int32_t L_8 = __this->get_orient_1();
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_orient_1();
		L_5->set_orient_1(L_9);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_10 = ___ot0;
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_minus1Mod3_3();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_12 = ___ot0;
		int32_t L_13 = L_12->get_orient_1();
		NullCheck(L_11);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		L_10->set_orient_1(L_15);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Dnext_m673290CFC27E810EF5646B9A023FE5D7FA40B859_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Dnext_m673290CFC27E810EF5646B9A023FE5D7FA40B859(_thisAdjusted, ___ot0, method);
}
// System.Void TriangleNet.Topology.Otri::Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dnext_m90E357F83E4F830029723028405F4C7FF58B085F (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_orient_1();
		V_0 = L_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		NullCheck(L_1);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_2 = L_1->get_neighbors_2();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_orient_1();
		__this->set_orient_1(L_4);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = __this->get_tri_0();
		NullCheck(L_5);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_6 = L_5->get_neighbors_2();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_tri_0();
		__this->set_tri_0(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_minus1Mod3_3();
		int32_t L_10 = __this->get_orient_1();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_orient_1(L_12);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Dnext_m90E357F83E4F830029723028405F4C7FF58B085F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Dnext_m90E357F83E4F830029723028405F4C7FF58B085F(_thisAdjusted, method);
}
// System.Void TriangleNet.Topology.Otri::Dprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dprev_mD9D70D6E85EEE50F21E1E44750BAB4733D0BB92F (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		L_0->set_tri_0(L_1);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_2 = ___ot0;
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_plus1Mod3_2();
		int32_t L_4 = __this->get_orient_1();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		L_2->set_orient_1(L_6);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_7 = ___ot0;
		int32_t L_8 = L_7->get_orient_1();
		V_0 = L_8;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_9 = ___ot0;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_10 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_11 = L_10->get_tri_0();
		NullCheck(L_11);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_12 = L_11->get_neighbors_2();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_orient_1();
		L_9->set_orient_1(L_14);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_15 = ___ot0;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_16 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_17 = L_16->get_tri_0();
		NullCheck(L_17);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_18 = L_17->get_neighbors_2();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_tri_0();
		L_15->set_tri_0(L_20);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Dprev_mD9D70D6E85EEE50F21E1E44750BAB4733D0BB92F_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Dprev_mD9D70D6E85EEE50F21E1E44750BAB4733D0BB92F(_thisAdjusted, ___ot0, method);
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Org()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_3();
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_plus1Mod3_2();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		int32_t L_6 = L_5;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_7 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		goto IL_001c;
	}

IL_001c:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * _returnValue;
	_returnValue = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495(_thisAdjusted, method);
	return _returnValue;
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Dest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_3();
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_minus1Mod3_3();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		int32_t L_6 = L_5;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_7 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		goto IL_001c;
	}

IL_001c:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * _returnValue;
	_returnValue = Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481(_thisAdjusted, method);
	return _returnValue;
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Apex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_0 = NULL;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_3();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * _returnValue;
	_returnValue = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TriangleNet.Topology.Otri::Copy(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		L_0->set_tri_0(L_1);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_2 = ___ot0;
		int32_t L_3 = __this->get_orient_1();
		L_2->set_orient_1(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1(_thisAdjusted, ___ot0, method);
}
// System.Boolean TriangleNet.Topology.Otri::Equals(TriangleNet.Topology.Otri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_Equals_m2C35FC54DB28965C8E1CED4B26D49DE305979C29 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  ___ot0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_1 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_2 = L_1.get_tri_0();
		if ((!(((RuntimeObject*)(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)L_0) == ((RuntimeObject*)(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = __this->get_orient_1();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_4 = ___ot0;
		int32_t L_5 = L_4.get_orient_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool Otri_Equals_m2C35FC54DB28965C8E1CED4B26D49DE305979C29_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Otri_Equals_m2C35FC54DB28965C8E1CED4B26D49DE305979C29(_thisAdjusted, ___ot0, method);
	return _returnValue;
}
// System.Void TriangleNet.Topology.Otri::SetOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetOrg_mE90C20BB5F8286E4C488683A62D07E2C49509731 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_3();
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_plus1Mod3_2();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_6 = ___v0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_6);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_SetOrg_mE90C20BB5F8286E4C488683A62D07E2C49509731_AdjustorThunk (RuntimeObject * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_SetOrg_mE90C20BB5F8286E4C488683A62D07E2C49509731(_thisAdjusted, ___v0, method);
}
// System.Void TriangleNet.Topology.Otri::SetDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetDest_m3C71B97E3DC3EC589490EB254FF7DE28B6CB35AE (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_3();
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->get_minus1Mod3_3();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_6 = ___v0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_6);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_SetDest_m3C71B97E3DC3EC589490EB254FF7DE28B6CB35AE_AdjustorThunk (RuntimeObject * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_SetDest_m3C71B97E3DC3EC589490EB254FF7DE28B6CB35AE(_thisAdjusted, ___v0, method);
}
// System.Void TriangleNet.Topology.Otri::SetApex(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetApex_m9EFC5B7ABAC2A3542AF1741F3A287839CBA7EBBC (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70* L_1 = L_0->get_vertices_3();
		int32_t L_2 = __this->get_orient_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3 = ___v0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_SetApex_m9EFC5B7ABAC2A3542AF1741F3A287839CBA7EBBC_AdjustorThunk (RuntimeObject * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_SetApex_m9EFC5B7ABAC2A3542AF1741F3A287839CBA7EBBC(_thisAdjusted, ___v0, method);
}
// System.Void TriangleNet.Topology.Otri::Bond(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Bond_mE57DDC70F2DD2BE46224E902683DC053303F8948 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_1 = L_0->get_neighbors_2();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_3 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4 = L_3->get_tri_0();
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->set_tri_0(L_4);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = __this->get_tri_0();
		NullCheck(L_5);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_6 = L_5->get_neighbors_2();
		int32_t L_7 = __this->get_orient_1();
		NullCheck(L_6);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_8 = ___ot0;
		int32_t L_9 = L_8->get_orient_1();
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->set_orient_1(L_9);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_10 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_11 = L_10->get_tri_0();
		NullCheck(L_11);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_12 = L_11->get_neighbors_2();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_13 = ___ot0;
		int32_t L_14 = L_13->get_orient_1();
		NullCheck(L_12);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_15 = __this->get_tri_0();
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_tri_0(L_15);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_16 = ___ot0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_17 = L_16->get_tri_0();
		NullCheck(L_17);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_18 = L_17->get_neighbors_2();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_19 = ___ot0;
		int32_t L_20 = L_19->get_orient_1();
		NullCheck(L_18);
		int32_t L_21 = __this->get_orient_1();
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_orient_1(L_21);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Bond_mE57DDC70F2DD2BE46224E902683DC053303F8948_AdjustorThunk (RuntimeObject * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___ot0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Bond_mE57DDC70F2DD2BE46224E902683DC053303F8948(_thisAdjusted, ___ot0, method);
}
// System.Void TriangleNet.Topology.Otri::Dissolve(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dissolve_m61E99042393102C68558969B7311C6F60A67E124 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___dummy0, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_1 = L_0->get_neighbors_2();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_3 = ___dummy0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->set_tri_0(L_3);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4 = __this->get_tri_0();
		NullCheck(L_4);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_5 = L_4->get_neighbors_2();
		int32_t L_6 = __this->get_orient_1();
		NullCheck(L_5);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_orient_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Dissolve_m61E99042393102C68558969B7311C6F60A67E124_AdjustorThunk (RuntimeObject * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___dummy0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Dissolve_m61E99042393102C68558969B7311C6F60A67E124(_thisAdjusted, ___dummy0, method);
}
// System.Void TriangleNet.Topology.Otri::Infect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Infect_m90CFE2928C1F744EA9F0B65026C38ADA9EE4285E (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		L_0->set_infected_7((bool)1);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Infect_m90CFE2928C1F744EA9F0B65026C38ADA9EE4285E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Infect_m90CFE2928C1F744EA9F0B65026C38ADA9EE4285E(_thisAdjusted, method);
}
// System.Void TriangleNet.Topology.Otri::Uninfect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Uninfect_m803367D48EDA53074610A8DF635A4CD620513621 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		L_0->set_infected_7((bool)0);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Uninfect_m803367D48EDA53074610A8DF635A4CD620513621_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Uninfect_m803367D48EDA53074610A8DF635A4CD620513621(_thisAdjusted, method);
}
// System.Boolean TriangleNet.Topology.Otri::IsInfected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_IsInfected_m5BF69E20C96793295C28217252E1DC4F8FF999DD (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		bool L_1 = L_0->get_infected_7();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Otri_IsInfected_m5BF69E20C96793295C28217252E1DC4F8FF999DD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Otri_IsInfected_m5BF69E20C96793295C28217252E1DC4F8FF999DD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TriangleNet.Topology.Otri::Pivot(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	{
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_0 = ___os0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_1 = __this->get_tri_0();
		NullCheck(L_1);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_2 = L_1->get_subsegs_4();
		int32_t L_3 = __this->get_orient_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		*(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_0)->___seg_0), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35_AdjustorThunk (RuntimeObject * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35(_thisAdjusted, ___os0, method);
}
// System.Void TriangleNet.Topology.Otri::SegBond(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SegBond_mC206E0B964FB3B3F8D722298787C9E3786F251DB (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = L_0->get_subsegs_4();
		int32_t L_2 = __this->get_orient_1();
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_3 = ___os0;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_4 = (*(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_3);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 )L_4);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_5 = ___os0;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_6 = L_5->get_seg_0();
		NullCheck(L_6);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_7 = L_6->get_triangles_3();
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_8 = ___os0;
		int32_t L_9 = L_8->get_orient_1();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_10 = (*(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)__this);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 )L_10);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_SegBond_mC206E0B964FB3B3F8D722298787C9E3786F251DB_AdjustorThunk (RuntimeObject * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___os0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_SegBond_mC206E0B964FB3B3F8D722298787C9E3786F251DB(_thisAdjusted, ___os0, method);
}
// System.Void TriangleNet.Topology.Otri::SegDissolve(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SegDissolve_m98A48D4ED46896926307F63551D6830781FE3CD1 (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___dummy0, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = __this->get_tri_0();
		NullCheck(L_0);
		OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629* L_1 = L_0->get_subsegs_4();
		int32_t L_2 = __this->get_orient_1();
		NullCheck(L_1);
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_3 = ___dummy0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->set_seg_0(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_SegDissolve_m98A48D4ED46896926307F63551D6830781FE3CD1_AdjustorThunk (RuntimeObject * __this, SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * ___dummy0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * _thisAdjusted = reinterpret_cast<Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *>(__this + _offset);
	Otri_SegDissolve_m98A48D4ED46896926307F63551D6830781FE3CD1(_thisAdjusted, ___dummy0, method);
}
// System.Boolean TriangleNet.Topology.Otri::IsDead(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_IsDead_mC83C3F128DE68E8AE8518DF130CEFBD11DCDC424 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___tria0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = ___tria0;
		NullCheck(L_0);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_1 = L_0->get_neighbors_2();
		NullCheck(L_1);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_tri_0();
		V_0 = (bool)((((RuntimeObject*)(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0018;
	}

IL_0018:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void TriangleNet.Topology.Otri::Kill(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Kill_mCD39ADD0B3B562EC4480D6EA2EA39D7891201A95 (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___tri0, const RuntimeMethod* method)
{
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_0 = ___tri0;
		NullCheck(L_0);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_1 = L_0->get_neighbors_2();
		NullCheck(L_1);
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_tri_0((Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)NULL);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_2 = ___tri0;
		NullCheck(L_2);
		OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175* L_3 = L_2->get_neighbors_2();
		NullCheck(L_3);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_tri_0((Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)NULL);
		return;
	}
}
// System.Void TriangleNet.Topology.Otri::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri__cctor_mF0EBAA0329B1307F984B37DF7A71C897535BB3D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->set_plus1Mod3_2(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_StaticFields*)il2cpp_codegen_static_fields_for(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var))->set_minus1Mod3_3(L_5);
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
// System.Void TriangleNet.Geometry.Point::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mF7DBC5AE3B3AAE9C16E839FB8B4ED0569380A682 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, const RuntimeMethod* method)
{
	{
		Point__ctor_m7A91AF5B4270707B1947805925BE2913F7EE38B6(__this, (0.0), (0.0), 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Geometry.Point::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m38BE7730A08F86B090D72D4F66297D7D8ACF5681 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, double ___x0, double ___y1, const RuntimeMethod* method)
{
	{
		double L_0 = ___x0;
		double L_1 = ___y1;
		Point__ctor_m7A91AF5B4270707B1947805925BE2913F7EE38B6(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Geometry.Point::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m7A91AF5B4270707B1947805925BE2913F7EE38B6 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, double ___x0, double ___y1, int32_t ___label2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		double L_0 = ___x0;
		__this->set_x_2(L_0);
		double L_1 = ___y1;
		__this->set_y_3(L_1);
		int32_t L_2 = ___label2;
		__this->set_label_1(L_2);
		return;
	}
}
// System.Double TriangleNet.Geometry.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_m71B7A8403C16415A171F7CA4C345082D63BCF3AD (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = __this->get_x_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Double TriangleNet.Geometry.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m378383A2240D4D373A366FC3197B3AD216E3B835 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = __this->get_y_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Boolean TriangleNet.Geometry.Point::op_Equality(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m2114AF7F1C6AC57993521F2065E32E9B969D88AB (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___a0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_0 = ___a0;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_1 = ___b1;
		V_0 = (bool)((((RuntimeObject*)(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_0) == ((RuntimeObject*)(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_002b;
	}

IL_000e:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_3 = ___a0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_4 = ___b1;
		G_B5_0 = ((((RuntimeObject*)(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
	}

IL_0018:
	{
		V_2 = (bool)G_B5_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002b;
	}

IL_0021:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_6 = ___a0;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_7 = ___b1;
		NullCheck(L_6);
		bool L_8;
		L_8 = Point_Equals_m57C0E43E9CC1F10D8FED1303FFE498FE4B07DFFD(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean TriangleNet.Geometry.Point::op_Inequality(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Inequality_m3FE5FD8D46076A8BD9AEDCAC1E9B29E7650C561F (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___a0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_0 = ___a0;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_1 = ___b1;
		bool L_2;
		L_2 = Point_op_Equality_m2114AF7F1C6AC57993521F2065E32E9B969D88AB(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean TriangleNet.Geometry.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mFFAD85F8F453F21E85404F67C01E755CC19052F5 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0044;
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)IsInstClass((RuntimeObject*)L_2, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73_il2cpp_TypeInfo_var));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_3 = V_0;
		V_3 = (bool)((((RuntimeObject*)(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0044;
	}

IL_0022:
	{
		double L_5 = __this->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_6 = V_0;
		NullCheck(L_6);
		double L_7 = L_6->get_x_2();
		if ((!(((double)L_5) == ((double)L_7))))
		{
			goto IL_0040;
		}
	}
	{
		double L_8 = __this->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_9 = V_0;
		NullCheck(L_9);
		double L_10 = L_9->get_y_3();
		G_B7_0 = ((((double)L_8) == ((double)L_10))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B7_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B7_0;
		goto IL_0044;
	}

IL_0044:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Boolean TriangleNet.Geometry.Point::Equals(TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m57C0E43E9CC1F10D8FED1303FFE498FE4B07DFFD (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___p0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_0 = ___p0;
		V_0 = (bool)((((RuntimeObject*)(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0030;
	}

IL_000e:
	{
		double L_2 = __this->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_3 = ___p0;
		NullCheck(L_3);
		double L_4 = L_3->get_x_2();
		if ((!(((double)L_2) == ((double)L_4))))
		{
			goto IL_002c;
		}
	}
	{
		double L_5 = __this->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_6 = ___p0;
		NullCheck(L_6);
		double L_7 = L_6->get_y_3();
		G_B5_0 = ((((double)L_5) == ((double)L_7))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Int32 TriangleNet.Geometry.Point::CompareTo(TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_CompareTo_mD814377D334EF45642DAC9F341753922B1290DFB (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	{
		double L_0 = __this->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_1 = ___other0;
		NullCheck(L_1);
		double L_2 = L_1->get_x_2();
		if ((!(((double)L_0) == ((double)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		double L_3 = __this->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_4 = ___other0;
		NullCheck(L_4);
		double L_5 = L_4->get_y_3();
		G_B3_0 = ((((double)L_3) == ((double)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = 0;
		goto IL_005a;
	}

IL_0029:
	{
		double L_7 = __this->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_8 = ___other0;
		NullCheck(L_8);
		double L_9 = L_8->get_x_2();
		if ((((double)L_7) < ((double)L_9)))
		{
			goto IL_0056;
		}
	}
	{
		double L_10 = __this->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_11 = ___other0;
		NullCheck(L_11);
		double L_12 = L_11->get_x_2();
		if ((!(((double)L_10) == ((double)L_12))))
		{
			goto IL_0053;
		}
	}
	{
		double L_13 = __this->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_14 = ___other0;
		NullCheck(L_14);
		double L_15 = L_14->get_y_3();
		if ((((double)L_13) < ((double)L_15)))
		{
			goto IL_0056;
		}
	}

IL_0053:
	{
		G_B10_0 = 1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B10_0 = (-1);
	}

IL_0057:
	{
		V_1 = G_B10_0;
		goto IL_005a;
	}

IL_005a:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Int32 TriangleNet.Geometry.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_mC2A4D72F74AFE83232FE985D04E909A0F8730740 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)19);
		int32_t L_0 = V_0;
		double* L_1 = __this->get_address_of_x_2();
		int32_t L_2;
		L_2 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)31))), (int32_t)L_2));
		int32_t L_3 = V_0;
		double* L_4 = __this->get_address_of_y_3();
		int32_t L_5;
		L_5 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31))), (int32_t)L_5));
		int32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_7 = V_1;
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
// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex> TriangleNet.Geometry.Polygon::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * Polygon_get_Points_mC7EF3EB913D2625891C86AFB03138BDDEA0C4200 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, const RuntimeMethod* method)
{
	List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * V_0 = NULL;
	{
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_0 = __this->get_points_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point> TriangleNet.Geometry.Polygon::get_Holes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * Polygon_get_Holes_mEE7BAFAB585668134A4CD3157003329B21BA3857 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, const RuntimeMethod* method)
{
	List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * V_0 = NULL;
	{
		List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * L_0 = __this->get_holes_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer> TriangleNet.Geometry.Polygon::get_Regions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * Polygon_get_Regions_mBA4725E817F53065FA2EDC8C94C23DD79349AE5C (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, const RuntimeMethod* method)
{
	List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * V_0 = NULL;
	{
		List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * L_0 = __this->get_regions_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment> TriangleNet.Geometry.Polygon::get_Segments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * Polygon_get_Segments_mC3D32BCB64DD93E83C6D7ECECB50081F146134AD (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, const RuntimeMethod* method)
{
	List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * V_0 = NULL;
	{
		List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * L_0 = __this->get_segments_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * L_1 = V_0;
		return L_1;
	}
}
// System.Void TriangleNet.Geometry.Polygon::set_HasPointMarkers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_set_HasPointMarkers_m7C006A810718B1CD01A850C32473FC9B8F59E1F5 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasPointMarkersU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void TriangleNet.Geometry.Polygon::set_HasSegmentMarkers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_set_HasSegmentMarkers_m49F0F472CA961F78A06BBD38C0F7DF8AF1F09E1C (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasSegmentMarkersU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void TriangleNet.Geometry.Polygon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m0D3E417511F7EA9943C0BF75D8FE02AA331F3D93 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, const RuntimeMethod* method)
{
	{
		Polygon__ctor_m59530A0AE314847FAFF19721349AF0CEBFA33F0D(__this, 3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Geometry.Polygon::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m59530A0AE314847FAFF19721349AF0CEBFA33F0D (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, int32_t ___capacity0, bool ___markers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m486112DA1275C74D892681B109310C1B53604894_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC1776987CCD7CC8DDE109E0368F4B18280F4F7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD195654FB6D266D073A044DC195CEAA31A693B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEC53FB9587C8C44FE02CCC2BFB03E126E92BCCC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity0;
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_1 = (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB *)il2cpp_codegen_object_new(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB_il2cpp_TypeInfo_var);
		List_1__ctor_m486112DA1275C74D892681B109310C1B53604894(L_1, L_0, /*hidden argument*/List_1__ctor_m486112DA1275C74D892681B109310C1B53604894_RuntimeMethod_var);
		__this->set_points_0(L_1);
		List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * L_2 = (List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 *)il2cpp_codegen_object_new(List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9_il2cpp_TypeInfo_var);
		List_1__ctor_mC1776987CCD7CC8DDE109E0368F4B18280F4F7E4(L_2, /*hidden argument*/List_1__ctor_mC1776987CCD7CC8DDE109E0368F4B18280F4F7E4_RuntimeMethod_var);
		__this->set_holes_1(L_2);
		List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 * L_3 = (List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20 *)il2cpp_codegen_object_new(List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20_il2cpp_TypeInfo_var);
		List_1__ctor_mEC53FB9587C8C44FE02CCC2BFB03E126E92BCCC1(L_3, /*hidden argument*/List_1__ctor_mEC53FB9587C8C44FE02CCC2BFB03E126E92BCCC1_RuntimeMethod_var);
		__this->set_regions_2(L_3);
		List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * L_4 = (List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 *)il2cpp_codegen_object_new(List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7_il2cpp_TypeInfo_var);
		List_1__ctor_mD195654FB6D266D073A044DC195CEAA31A693B37(L_4, /*hidden argument*/List_1__ctor_mD195654FB6D266D073A044DC195CEAA31A693B37_RuntimeMethod_var);
		__this->set_segments_3(L_4);
		bool L_5 = ___markers1;
		Polygon_set_HasPointMarkers_m7C006A810718B1CD01A850C32473FC9B8F59E1F5_inline(__this, L_5, /*hidden argument*/NULL);
		bool L_6 = ___markers1;
		Polygon_set_HasSegmentMarkers_m49F0F472CA961F78A06BBD38C0F7DF8AF1F09E1C_inline(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Geometry.Polygon::Add(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Add_m305462A09C1E595B096452B92D0B3FF28F2B4D12 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_0 = __this->get_points_0();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_1 = ___vertex0;
		NullCheck(L_0);
		List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274(L_0, L_1, /*hidden argument*/List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var);
		return;
	}
}
// System.Void TriangleNet.Geometry.Polygon::Add(TriangleNet.Geometry.ISegment,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Add_m5A1F21BA963DBE52DEDE8E3509C0D8ADA4EDAD8C (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, RuntimeObject* ___segment0, bool ___insert1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISegment_tEAAF8539FFD2F474DC8FDF3C6B844BA3BB316BB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9770C7A7EC747BB9DFA7C69EA3388E737D75A858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * L_0 = __this->get_segments_3();
		RuntimeObject* L_1 = ___segment0;
		NullCheck(L_0);
		List_1_Add_m9770C7A7EC747BB9DFA7C69EA3388E737D75A858(L_0, L_1, /*hidden argument*/List_1_Add_m9770C7A7EC747BB9DFA7C69EA3388E737D75A858_RuntimeMethod_var);
		bool L_2 = ___insert1;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_4 = __this->get_points_0();
		RuntimeObject* L_5 = ___segment0;
		NullCheck(L_5);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_6;
		L_6 = InterfaceFuncInvoker1< Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, int32_t >::Invoke(0 /* TriangleNet.Geometry.Vertex TriangleNet.Geometry.ISegment::GetVertex(System.Int32) */, ISegment_tEAAF8539FFD2F474DC8FDF3C6B844BA3BB316BB0_il2cpp_TypeInfo_var, L_5, 0);
		NullCheck(L_4);
		List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274(L_4, L_6, /*hidden argument*/List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var);
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_7 = __this->get_points_0();
		RuntimeObject* L_8 = ___segment0;
		NullCheck(L_8);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_9;
		L_9 = InterfaceFuncInvoker1< Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, int32_t >::Invoke(0 /* TriangleNet.Geometry.Vertex TriangleNet.Geometry.ISegment::GetVertex(System.Int32) */, ISegment_tEAAF8539FFD2F474DC8FDF3C6B844BA3BB316BB0_il2cpp_TypeInfo_var, L_8, 1);
		NullCheck(L_7);
		List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274(L_7, L_9, /*hidden argument*/List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TriangleNet.Geometry.Polygon::Add(TriangleNet.Geometry.Contour,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Add_m5F77BB572D74DA889AF89ED2BC7F46CC6CAB45C9 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * ___contour0, bool ___hole1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1ECA98E79C761B52F45297365E9CFD42853E8BA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB597803BE315FFA8799E5D8ED62088E6539458F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___hole1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * L_2 = ___contour0;
		Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * L_3 = ___contour0;
		NullCheck(L_3);
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_4;
		L_4 = Contour_FindInteriorPoint_m1A7A2A2BA997C03A6CF1EA916CB01D458012E194(L_3, 5, (2.0000000000000002E-05), /*hidden argument*/NULL);
		Polygon_Add_m828CC6E83AABBA02EC1FA35A4FED50B85A379303(__this, L_2, L_4, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_0022:
	{
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_5 = __this->get_points_0();
		Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * L_6 = ___contour0;
		NullCheck(L_6);
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_7;
		L_7 = Contour_get_Points_mFA3722D831337289B75BB3F4615AB7443FA05A49_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_AddRange_m1ECA98E79C761B52F45297365E9CFD42853E8BA7(L_5, L_7, /*hidden argument*/List_1_AddRange_m1ECA98E79C761B52F45297365E9CFD42853E8BA7_RuntimeMethod_var);
		List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * L_8 = __this->get_segments_3();
		Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * L_9 = ___contour0;
		NullCheck(L_9);
		List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * L_10;
		L_10 = Contour_GetSegments_mB61BA53A1C2CA21246FBFB781383865432234790(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_AddRange_mB597803BE315FFA8799E5D8ED62088E6539458F2(L_8, L_10, /*hidden argument*/List_1_AddRange_mB597803BE315FFA8799E5D8ED62088E6539458F2_RuntimeMethod_var);
	}

IL_0048:
	{
		return;
	}
}
// System.Void TriangleNet.Geometry.Polygon::Add(TriangleNet.Geometry.Contour,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Add_m828CC6E83AABBA02EC1FA35A4FED50B85A379303 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * ___contour0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___hole1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1ECA98E79C761B52F45297365E9CFD42853E8BA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB597803BE315FFA8799E5D8ED62088E6539458F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m53FDCAB0BF160DB637BE3FF11DC1C4458729B348_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_0 = __this->get_points_0();
		Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * L_1 = ___contour0;
		NullCheck(L_1);
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_2;
		L_2 = Contour_get_Points_mFA3722D831337289B75BB3F4615AB7443FA05A49_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_m1ECA98E79C761B52F45297365E9CFD42853E8BA7(L_0, L_2, /*hidden argument*/List_1_AddRange_m1ECA98E79C761B52F45297365E9CFD42853E8BA7_RuntimeMethod_var);
		List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * L_3 = __this->get_segments_3();
		Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * L_4 = ___contour0;
		NullCheck(L_4);
		List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7 * L_5;
		L_5 = Contour_GetSegments_mB61BA53A1C2CA21246FBFB781383865432234790(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_AddRange_mB597803BE315FFA8799E5D8ED62088E6539458F2(L_3, L_5, /*hidden argument*/List_1_AddRange_mB597803BE315FFA8799E5D8ED62088E6539458F2_RuntimeMethod_var);
		List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9 * L_6 = __this->get_holes_1();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_7 = ___hole1;
		NullCheck(L_6);
		List_1_Add_m53FDCAB0BF160DB637BE3FF11DC1C4458729B348(L_6, L_7, /*hidden argument*/List_1_Add_m53FDCAB0BF160DB637BE3FF11DC1C4458729B348_RuntimeMethod_var);
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
// System.Void TriangleNet.Meshing.QualityMesher::.ctor(TriangleNet.Mesh,TriangleNet.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher__ctor_mE99E643287381916C5732798107FE56E8C15A155 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh0, Configuration_tFD59B344AE38BF7070D6C1F6F933F10DB63BCA6A * ___config1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mEFC91464B8BD8F5B2D9ED47F1907A157B9BCD44B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCD97B3E9849986D37EB7C512026C0E4F28C3A12E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Log_get_Instance_m9F89292951CF0C5A1D381B987F500F96DEEDC298(/*hidden argument*/NULL);
		__this->set_logger_6(L_0);
		Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * L_1 = (Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 *)il2cpp_codegen_object_new(Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCD97B3E9849986D37EB7C512026C0E4F28C3A12E(L_1, /*hidden argument*/Queue_1__ctor_mCD97B3E9849986D37EB7C512026C0E4F28C3A12E_RuntimeMethod_var);
		__this->set_badsubsegs_1(L_1);
		BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * L_2 = (BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 *)il2cpp_codegen_object_new(BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07_il2cpp_TypeInfo_var);
		BadTriQueue__ctor_m278F02BCAE85B04F80E66056DE9DE12FC124A6B7(L_2, /*hidden argument*/NULL);
		__this->set_queue_2(L_2);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_3 = ___mesh0;
		__this->set_mesh_3(L_3);
		Configuration_tFD59B344AE38BF7070D6C1F6F933F10DB63BCA6A * L_4 = ___config1;
		NullCheck(L_4);
		Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * L_5;
		L_5 = Configuration_get_Predicates_m4880A56350B9F09D038B6D879259E12C91861186_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Func_1_Invoke_mEFC91464B8BD8F5B2D9ED47F1907A157B9BCD44B(L_5, /*hidden argument*/Func_1_Invoke_mEFC91464B8BD8F5B2D9ED47F1907A157B9BCD44B_RuntimeMethod_var);
		__this->set_predicates_0(L_6);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_7 = ___mesh0;
		NullCheck(L_7);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_8 = L_7->get_behavior_26();
		__this->set_behavior_4(L_8);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_9 = ___mesh0;
		RuntimeObject* L_10 = __this->get_predicates_0();
		NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB * L_11 = (NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB *)il2cpp_codegen_object_new(NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB_il2cpp_TypeInfo_var);
		NewLocation__ctor_mDB95D3D91D877C307BAA7FF0CB3EC3DA6EF73891(L_11, L_9, L_10, /*hidden argument*/NULL);
		__this->set_newLocation_5(L_11);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_12 = (Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 *)il2cpp_codegen_object_new(Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769_il2cpp_TypeInfo_var);
		Triangle__ctor_mAD400A1F90068FF5221A3C075D086B9128AA8419(L_12, /*hidden argument*/NULL);
		__this->set_newvertex_tri_7(L_12);
		return;
	}
}
// System.Void TriangleNet.Meshing.QualityMesher::Apply(TriangleNet.Meshing.QualityOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_Apply_m4FE2E3A96D71566E7ED1B159A38FFD5E0F5BF403 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * ___quality0, bool ___delaunay1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * G_B3_0 = NULL;
	Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * G_B4_1 = NULL;
	int32_t G_B12_0 = 0;
	{
		QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * L_0 = ___quality0;
		V_0 = (bool)((!(((RuntimeObject*)(QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00aa;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_2 = __this->get_behavior_4();
		NullCheck(L_2);
		Behavior_set_Quality_m659FBFC774C63948F93FF57442287A474CBF58BD(L_2, (bool)1, /*hidden argument*/NULL);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_3 = __this->get_behavior_4();
		QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * L_4 = ___quality0;
		NullCheck(L_4);
		double L_5;
		L_5 = QualityOptions_get_MinimumAngle_m3E83BF7091D2043B8FA901970B22A0F3CC929042_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Behavior_set_MinAngle_m87E23E64625CB58BB6B72FDC681D4F8A7DCA2B0E(L_3, L_5, /*hidden argument*/NULL);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_6 = __this->get_behavior_4();
		QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * L_7 = ___quality0;
		NullCheck(L_7);
		double L_8;
		L_8 = QualityOptions_get_MaximumAngle_mA2D29A8BEC2EE2722CB44D2039CDF2FEA0B9C44C_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Behavior_set_MaxAngle_mFFE480697153F220F653FD8A6FAF6D4AA6CB6E86(L_6, L_8, /*hidden argument*/NULL);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_9 = __this->get_behavior_4();
		QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * L_10 = ___quality0;
		NullCheck(L_10);
		double L_11;
		L_11 = QualityOptions_get_MaximumArea_m6A15C115B021E467D6A20AEB960CA4CFD1AC8917_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Behavior_set_MaxArea_m7F8EB6C85A08ACBD940A3ABB8966CD4087ED9BAE(L_9, L_11, /*hidden argument*/NULL);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_12 = __this->get_behavior_4();
		QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * L_13 = ___quality0;
		NullCheck(L_13);
		Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * L_14;
		L_14 = QualityOptions_get_UserTest_mC959A07AAE40E40F4D4B4FE229CF55928FC06AF5_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Behavior_set_UserTest_m4B28B877934454FF8CBFD804B9CBB401E70187D7(L_12, L_14, /*hidden argument*/NULL);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_15 = __this->get_behavior_4();
		QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * L_16 = ___quality0;
		NullCheck(L_16);
		bool L_17;
		L_17 = QualityOptions_get_VariableArea_m808C194D46BA7BA9D86BB555D456CE5BA078BAB0_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Behavior_set_VarArea_mAA1AE283B6081565DEDA69204B2ACCB5B102D6D1(L_15, L_17, /*hidden argument*/NULL);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_18 = __this->get_behavior_4();
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_19 = __this->get_behavior_4();
		NullCheck(L_19);
		bool L_20;
		L_20 = Behavior_get_ConformingDelaunay_mD63F63D5DF9AF3816D108FF84670DDFC5C8A1F23(L_19, /*hidden argument*/NULL);
		bool L_21 = ___delaunay1;
		NullCheck(L_18);
		Behavior_set_ConformingDelaunay_m70C689DEA436FC5B8D3D1D78F9AD0B980AADDDC1(L_18, (bool)((int32_t)((int32_t)L_20|(int32_t)L_21)), /*hidden argument*/NULL);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_22 = __this->get_mesh_3();
		QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * L_23 = ___quality0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = QualityOptions_get_SteinerPoints_m7D14C075B0107749B3B7D2392FA3ED62AA6481F4_inline(L_23, /*hidden argument*/NULL);
		G_B2_0 = L_22;
		if (!L_24)
		{
			G_B3_0 = L_22;
			goto IL_00a3;
		}
	}
	{
		QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * L_25 = ___quality0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = QualityOptions_get_SteinerPoints_m7D14C075B0107749B3B7D2392FA3ED62AA6481F4_inline(L_25, /*hidden argument*/NULL);
		G_B4_0 = L_26;
		G_B4_1 = G_B2_0;
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B4_0 = (-1);
		G_B4_1 = G_B3_0;
	}

IL_00a4:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_steinerleft_19(G_B4_0);
	}

IL_00aa:
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_27 = __this->get_behavior_4();
		NullCheck(L_27);
		bool L_28;
		L_28 = Behavior_get_Poly_m7069098F8120A9F87EF5B962CB0BC817B585E46E(L_27, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_30 = __this->get_behavior_4();
		NullCheck(L_30);
		Behavior_set_VarArea_mAA1AE283B6081565DEDA69204B2ACCB5B102D6D1(L_30, (bool)0, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_31 = __this->get_mesh_3();
		NullCheck(L_31);
		L_31->set_infvertex1_22((Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)NULL);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_32 = __this->get_mesh_3();
		NullCheck(L_32);
		L_32->set_infvertex2_23((Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)NULL);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_33 = __this->get_mesh_3();
		NullCheck(L_33);
		L_33->set_infvertex3_24((Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)NULL);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_34 = __this->get_behavior_4();
		NullCheck(L_34);
		bool L_35 = L_34->get_useSegments_14();
		V_2 = L_35;
		bool L_36 = V_2;
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_37 = __this->get_mesh_3();
		NullCheck(L_37);
		L_37->set_checksegments_20((bool)1);
	}

IL_010c:
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_38 = __this->get_behavior_4();
		NullCheck(L_38);
		bool L_39;
		L_39 = Behavior_get_Quality_m9834C42C08B3BDF45532DC89C849903822A476A9(L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_012e;
		}
	}
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_40 = __this->get_mesh_3();
		NullCheck(L_40);
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_41 = L_40->get_triangles_4();
		NullCheck(L_41);
		int32_t L_42;
		L_42 = TrianglePool_get_Count_m102532C98782E7382EEAEBDF1CD10EE3366AB967(L_41, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_42) > ((int32_t)0))? 1 : 0);
		goto IL_012f;
	}

IL_012e:
	{
		G_B12_0 = 0;
	}

IL_012f:
	{
		V_3 = (bool)G_B12_0;
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_013c;
		}
	}
	{
		QualityMesher_EnforceQuality_m8E5E511F6BCE17A0E026ECC8A0B6B1F429069FB6(__this, /*hidden argument*/NULL);
	}

IL_013c:
	{
		return;
	}
}
// System.Void TriangleNet.Meshing.QualityMesher::AddBadSubseg(TriangleNet.Meshing.Data.BadSubseg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_AddBadSubseg_mA584DB47238A9752C81D234BD18FAC02DCBE3895 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * ___badseg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m2C61F4E6FCBD32987153D78D93F9DE702A1B4A9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * L_0 = __this->get_badsubsegs_1();
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_1 = ___badseg0;
		NullCheck(L_0);
		Queue_1_Enqueue_m2C61F4E6FCBD32987153D78D93F9DE702A1B4A9F(L_0, L_1, /*hidden argument*/Queue_1_Enqueue_m2C61F4E6FCBD32987153D78D93F9DE702A1B4A9F_RuntimeMethod_var);
		return;
	}
}
// System.Int32 TriangleNet.Meshing.QualityMesher::CheckSeg4Encroach(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualityMesher_CheckSeg4Encroach_m1A87F52F5AD575C13D69B73603A81DB6E8E058E7 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * ___testsubseg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m2C61F4E6FCBD32987153D78D93F9DE702A1B4A9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * V_2 = NULL;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_6 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_7 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B27_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		il2cpp_codegen_initobj((&V_1), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		V_4 = 0;
		V_5 = 0;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_0 = ___testsubseg0;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_1;
		L_1 = Osub_Org_m15C17B8EADCE18F65DCB98BDD895EF200D4485A7((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_0, /*hidden argument*/NULL);
		V_6 = L_1;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_2 = ___testsubseg0;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3;
		L_3 = Osub_Dest_mF2FD60A4737E666E6A7456665207A89F665FF98D((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_2, /*hidden argument*/NULL);
		V_7 = L_3;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_4 = ___testsubseg0;
		Osub_Pivot_m973A8B45266B8FD2724CDE422326CE8A8020E9FC((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_4, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_5 = V_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_6 = L_5.get_tri_0();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_id_1();
		V_9 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_9;
		if (!L_8)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_10;
		L_10 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		V_8 = L_10;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_11 = V_6;
		NullCheck(L_11);
		double L_12 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_11)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_13 = V_8;
		NullCheck(L_13);
		double L_14 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_13)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_15 = V_7;
		NullCheck(L_15);
		double L_16 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_15)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_17 = V_8;
		NullCheck(L_17);
		double L_18 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_17)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_19 = V_6;
		NullCheck(L_19);
		double L_20 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_19)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_21 = V_8;
		NullCheck(L_21);
		double L_22 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_21)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_23 = V_7;
		NullCheck(L_23);
		double L_24 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_23)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_25 = V_8;
		NullCheck(L_25);
		double L_26 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_25)->get_y_3();
		V_3 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_12, (double)L_14)), (double)((double)il2cpp_codegen_subtract((double)L_16, (double)L_18)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_20, (double)L_22)), (double)((double)il2cpp_codegen_subtract((double)L_24, (double)L_26))))));
		double L_27 = V_3;
		V_10 = (bool)((((double)L_27) < ((double)(0.0)))? 1 : 0);
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_0196;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_29 = __this->get_behavior_4();
		NullCheck(L_29);
		bool L_30;
		L_30 = Behavior_get_ConformingDelaunay_mD63F63D5DF9AF3816D108FF84670DDFC5C8A1F23(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0189;
		}
	}
	{
		double L_31 = V_3;
		double L_32 = V_3;
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_33 = __this->get_behavior_4();
		NullCheck(L_33);
		double L_34 = L_33->get_goodAngle_16();
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_35 = __this->get_behavior_4();
		NullCheck(L_35);
		double L_36 = L_35->get_goodAngle_16();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_37 = V_6;
		NullCheck(L_37);
		double L_38 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_37)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_39 = V_8;
		NullCheck(L_39);
		double L_40 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_39)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_41 = V_6;
		NullCheck(L_41);
		double L_42 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_41)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_43 = V_8;
		NullCheck(L_43);
		double L_44 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_43)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_45 = V_6;
		NullCheck(L_45);
		double L_46 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_45)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_47 = V_8;
		NullCheck(L_47);
		double L_48 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_47)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_49 = V_6;
		NullCheck(L_49);
		double L_50 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_49)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_51 = V_8;
		NullCheck(L_51);
		double L_52 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_51)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_53 = V_7;
		NullCheck(L_53);
		double L_54 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_53)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_55 = V_8;
		NullCheck(L_55);
		double L_56 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_55)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_57 = V_7;
		NullCheck(L_57);
		double L_58 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_57)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_59 = V_8;
		NullCheck(L_59);
		double L_60 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_59)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_61 = V_7;
		NullCheck(L_61);
		double L_62 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_61)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_63 = V_8;
		NullCheck(L_63);
		double L_64 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_63)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_65 = V_7;
		NullCheck(L_65);
		double L_66 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_65)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_67 = V_8;
		NullCheck(L_67);
		double L_68 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_67)->get_y_3();
		G_B5_0 = ((((int32_t)((!(((double)((double)il2cpp_codegen_multiply((double)L_31, (double)L_32))) >= ((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_34)), (double)(1.0))), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_36)), (double)(1.0))))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_38, (double)L_40)), (double)((double)il2cpp_codegen_subtract((double)L_42, (double)L_44)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_46, (double)L_48)), (double)((double)il2cpp_codegen_subtract((double)L_50, (double)L_52)))))))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_54, (double)L_56)), (double)((double)il2cpp_codegen_subtract((double)L_58, (double)L_60)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_62, (double)L_64)), (double)((double)il2cpp_codegen_subtract((double)L_66, (double)L_68)))))))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_018a;
	}

IL_0189:
	{
		G_B5_0 = 1;
	}

IL_018a:
	{
		V_11 = (bool)G_B5_0;
		bool L_69 = V_11;
		if (!L_69)
		{
			goto IL_0195;
		}
	}
	{
		V_4 = 1;
	}

IL_0195:
	{
	}

IL_0196:
	{
	}

IL_0197:
	{
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_70 = ___testsubseg0;
		Osub_Sym_m27BD0BC2AD2F920A06C3690E72DF775E5693D423((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_70, (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_1), /*hidden argument*/NULL);
		Osub_Pivot_m973A8B45266B8FD2724CDE422326CE8A8020E9FC((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_1), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_71 = V_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_72 = L_71.get_tri_0();
		NullCheck(L_72);
		int32_t L_73 = L_72->get_id_1();
		V_12 = (bool)((((int32_t)((((int32_t)L_73) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_12;
		if (!L_74)
		{
			goto IL_0314;
		}
	}
	{
		int32_t L_75 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_76;
		L_76 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		V_8 = L_76;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_77 = V_6;
		NullCheck(L_77);
		double L_78 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_77)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_79 = V_8;
		NullCheck(L_79);
		double L_80 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_79)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_81 = V_7;
		NullCheck(L_81);
		double L_82 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_81)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_83 = V_8;
		NullCheck(L_83);
		double L_84 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_83)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_85 = V_6;
		NullCheck(L_85);
		double L_86 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_85)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_87 = V_8;
		NullCheck(L_87);
		double L_88 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_87)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_89 = V_7;
		NullCheck(L_89);
		double L_90 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_89)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_91 = V_8;
		NullCheck(L_91);
		double L_92 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_91)->get_y_3();
		V_3 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_78, (double)L_80)), (double)((double)il2cpp_codegen_subtract((double)L_82, (double)L_84)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_86, (double)L_88)), (double)((double)il2cpp_codegen_subtract((double)L_90, (double)L_92))))));
		double L_93 = V_3;
		V_13 = (bool)((((double)L_93) < ((double)(0.0)))? 1 : 0);
		bool L_94 = V_13;
		if (!L_94)
		{
			goto IL_0313;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_95 = __this->get_behavior_4();
		NullCheck(L_95);
		bool L_96;
		L_96 = Behavior_get_ConformingDelaunay_mD63F63D5DF9AF3816D108FF84670DDFC5C8A1F23(L_95, /*hidden argument*/NULL);
		if (L_96)
		{
			goto IL_0303;
		}
	}
	{
		double L_97 = V_3;
		double L_98 = V_3;
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_99 = __this->get_behavior_4();
		NullCheck(L_99);
		double L_100 = L_99->get_goodAngle_16();
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_101 = __this->get_behavior_4();
		NullCheck(L_101);
		double L_102 = L_101->get_goodAngle_16();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_103 = V_6;
		NullCheck(L_103);
		double L_104 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_103)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_105 = V_8;
		NullCheck(L_105);
		double L_106 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_105)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_107 = V_6;
		NullCheck(L_107);
		double L_108 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_107)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_109 = V_8;
		NullCheck(L_109);
		double L_110 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_109)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_111 = V_6;
		NullCheck(L_111);
		double L_112 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_111)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_113 = V_8;
		NullCheck(L_113);
		double L_114 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_113)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_115 = V_6;
		NullCheck(L_115);
		double L_116 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_115)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_117 = V_8;
		NullCheck(L_117);
		double L_118 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_117)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_119 = V_7;
		NullCheck(L_119);
		double L_120 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_119)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_121 = V_8;
		NullCheck(L_121);
		double L_122 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_121)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_123 = V_7;
		NullCheck(L_123);
		double L_124 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_123)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_125 = V_8;
		NullCheck(L_125);
		double L_126 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_125)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_127 = V_7;
		NullCheck(L_127);
		double L_128 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_127)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_129 = V_8;
		NullCheck(L_129);
		double L_130 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_129)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_131 = V_7;
		NullCheck(L_131);
		double L_132 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_131)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_133 = V_8;
		NullCheck(L_133);
		double L_134 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_133)->get_y_3();
		G_B14_0 = ((((int32_t)((!(((double)((double)il2cpp_codegen_multiply((double)L_97, (double)L_98))) >= ((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_100)), (double)(1.0))), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_102)), (double)(1.0))))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_104, (double)L_106)), (double)((double)il2cpp_codegen_subtract((double)L_108, (double)L_110)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_112, (double)L_114)), (double)((double)il2cpp_codegen_subtract((double)L_116, (double)L_118)))))))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_120, (double)L_122)), (double)((double)il2cpp_codegen_subtract((double)L_124, (double)L_126)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_128, (double)L_130)), (double)((double)il2cpp_codegen_subtract((double)L_132, (double)L_134)))))))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0304;
	}

IL_0303:
	{
		G_B14_0 = 1;
	}

IL_0304:
	{
		V_14 = (bool)G_B14_0;
		bool L_135 = V_14;
		if (!L_135)
		{
			goto IL_0312;
		}
	}
	{
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)2));
	}

IL_0312:
	{
	}

IL_0313:
	{
	}

IL_0314:
	{
		int32_t L_137 = V_4;
		if ((((int32_t)L_137) <= ((int32_t)0)))
		{
			goto IL_0341;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_138 = __this->get_behavior_4();
		NullCheck(L_138);
		int32_t L_139;
		L_139 = Behavior_get_NoBisect_mC2AFE3BAA7B94ED892FDD0F32D74C90B744A42C7(L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_033e;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_140 = __this->get_behavior_4();
		NullCheck(L_140);
		int32_t L_141;
		L_141 = Behavior_get_NoBisect_mC2AFE3BAA7B94ED892FDD0F32D74C90B744A42C7(L_140, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_141) == ((uint32_t)1))))
		{
			goto IL_033b;
		}
	}
	{
		int32_t L_142 = V_5;
		G_B23_0 = ((((int32_t)L_142) == ((int32_t)2))? 1 : 0);
		goto IL_033c;
	}

IL_033b:
	{
		G_B23_0 = 0;
	}

IL_033c:
	{
		G_B25_0 = G_B23_0;
		goto IL_033f;
	}

IL_033e:
	{
		G_B25_0 = 1;
	}

IL_033f:
	{
		G_B27_0 = G_B25_0;
		goto IL_0342;
	}

IL_0341:
	{
		G_B27_0 = 0;
	}

IL_0342:
	{
		V_15 = (bool)G_B27_0;
		bool L_143 = V_15;
		if (!L_143)
		{
			goto IL_03a1;
		}
	}
	{
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_144 = (BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A *)il2cpp_codegen_object_new(BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A_il2cpp_TypeInfo_var);
		BadSubseg__ctor_m5B12862C0A64CC6DE95E58719A6047D08F0C3766(L_144, /*hidden argument*/NULL);
		V_2 = L_144;
		int32_t L_145 = V_4;
		V_16 = (bool)((((int32_t)L_145) == ((int32_t)1))? 1 : 0);
		bool L_146 = V_16;
		if (!L_146)
		{
			goto IL_037a;
		}
	}
	{
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_147 = V_2;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 * L_148 = ___testsubseg0;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_149 = (*(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)L_148);
		NullCheck(L_147);
		L_147->set_subseg_0(L_149);
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_150 = V_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_151 = V_6;
		NullCheck(L_150);
		L_150->set_org_1(L_151);
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_152 = V_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_153 = V_7;
		NullCheck(L_152);
		L_152->set_dest_2(L_153);
		goto IL_0393;
	}

IL_037a:
	{
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_154 = V_2;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_155 = V_1;
		NullCheck(L_154);
		L_154->set_subseg_0(L_155);
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_156 = V_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_157 = V_7;
		NullCheck(L_156);
		L_156->set_org_1(L_157);
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_158 = V_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_159 = V_6;
		NullCheck(L_158);
		L_158->set_dest_2(L_159);
	}

IL_0393:
	{
		Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * L_160 = __this->get_badsubsegs_1();
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_161 = V_2;
		NullCheck(L_160);
		Queue_1_Enqueue_m2C61F4E6FCBD32987153D78D93F9DE702A1B4A9F(L_160, L_161, /*hidden argument*/Queue_1_Enqueue_m2C61F4E6FCBD32987153D78D93F9DE702A1B4A9F_RuntimeMethod_var);
	}

IL_03a1:
	{
		int32_t L_162 = V_4;
		V_17 = L_162;
		goto IL_03a7;
	}

IL_03a7:
	{
		int32_t L_163 = V_17;
		return L_163;
	}
}
// System.Void TriangleNet.Meshing.QualityMesher::TestTriangle(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_TestTriangle_mDCDCF5E19B0FDC98CD9A585E6B30A521AA17930C (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * ___testtri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m8C71C03C02354FF15F1A98997F5482B98876D8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_3 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_4 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_5 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_6 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_7 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_8 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_9 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_10 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_11 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_12 = NULL;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	double V_20 = 0.0;
	double V_21 = 0.0;
	double V_22 = 0.0;
	double V_23 = 0.0;
	double V_24 = 0.0;
	double V_25 = 0.0;
	double V_26 = 0.0;
	double V_27 = 0.0;
	double V_28 = 0.0;
	double V_29 = 0.0;
	double V_30 = 0.0;
	double V_31 = 0.0;
	double V_32 = 0.0;
	double V_33 = 0.0;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	bool V_50 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B68_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		il2cpp_codegen_initobj((&V_2), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_0 = ___testtri0;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_1;
		L_1 = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_0, /*hidden argument*/NULL);
		V_3 = L_1;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_2 = ___testtri0;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3;
		L_3 = Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_4 = ___testtri0;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_5;
		L_5 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_4, /*hidden argument*/NULL);
		V_5 = L_5;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_6 = V_3;
		NullCheck(L_6);
		double L_7 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_6)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_8 = V_4;
		NullCheck(L_8);
		double L_9 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_8)->get_x_2();
		V_13 = ((double)il2cpp_codegen_subtract((double)L_7, (double)L_9));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_10 = V_3;
		NullCheck(L_10);
		double L_11 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_10)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_12 = V_4;
		NullCheck(L_12);
		double L_13 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_12)->get_y_3();
		V_14 = ((double)il2cpp_codegen_subtract((double)L_11, (double)L_13));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_14 = V_4;
		NullCheck(L_14);
		double L_15 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_14)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_16 = V_5;
		NullCheck(L_16);
		double L_17 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_16)->get_x_2();
		V_15 = ((double)il2cpp_codegen_subtract((double)L_15, (double)L_17));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_18 = V_4;
		NullCheck(L_18);
		double L_19 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_18)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_20 = V_5;
		NullCheck(L_20);
		double L_21 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_20)->get_y_3();
		V_16 = ((double)il2cpp_codegen_subtract((double)L_19, (double)L_21));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_22 = V_5;
		NullCheck(L_22);
		double L_23 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_22)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_24 = V_3;
		NullCheck(L_24);
		double L_25 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_24)->get_x_2();
		V_17 = ((double)il2cpp_codegen_subtract((double)L_23, (double)L_25));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_26 = V_5;
		NullCheck(L_26);
		double L_27 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_26)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_28 = V_3;
		NullCheck(L_28);
		double L_29 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_28)->get_y_3();
		V_18 = ((double)il2cpp_codegen_subtract((double)L_27, (double)L_29));
		double L_30 = V_13;
		double L_31 = V_13;
		V_19 = ((double)il2cpp_codegen_multiply((double)L_30, (double)L_31));
		double L_32 = V_14;
		double L_33 = V_14;
		V_20 = ((double)il2cpp_codegen_multiply((double)L_32, (double)L_33));
		double L_34 = V_15;
		double L_35 = V_15;
		V_21 = ((double)il2cpp_codegen_multiply((double)L_34, (double)L_35));
		double L_36 = V_16;
		double L_37 = V_16;
		V_22 = ((double)il2cpp_codegen_multiply((double)L_36, (double)L_37));
		double L_38 = V_17;
		double L_39 = V_17;
		V_23 = ((double)il2cpp_codegen_multiply((double)L_38, (double)L_39));
		double L_40 = V_18;
		double L_41 = V_18;
		V_24 = ((double)il2cpp_codegen_multiply((double)L_40, (double)L_41));
		double L_42 = V_19;
		double L_43 = V_20;
		V_25 = ((double)il2cpp_codegen_add((double)L_42, (double)L_43));
		double L_44 = V_21;
		double L_45 = V_22;
		V_26 = ((double)il2cpp_codegen_add((double)L_44, (double)L_45));
		double L_46 = V_23;
		double L_47 = V_24;
		V_27 = ((double)il2cpp_codegen_add((double)L_46, (double)L_47));
		double L_48 = V_25;
		double L_49 = V_26;
		if ((!(((double)L_48) < ((double)L_49))))
		{
			goto IL_00df;
		}
	}
	{
		double L_50 = V_25;
		double L_51 = V_27;
		G_B3_0 = ((((double)L_50) < ((double)L_51))? 1 : 0);
		goto IL_00e0;
	}

IL_00df:
	{
		G_B3_0 = 0;
	}

IL_00e0:
	{
		V_34 = (bool)G_B3_0;
		bool L_52 = V_34;
		if (!L_52)
		{
			goto IL_0118;
		}
	}
	{
		double L_53 = V_25;
		V_28 = L_53;
		double L_54 = V_15;
		double L_55 = V_17;
		double L_56 = V_16;
		double L_57 = V_18;
		V_29 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_54, (double)L_55)), (double)((double)il2cpp_codegen_multiply((double)L_56, (double)L_57))));
		double L_58 = V_29;
		double L_59 = V_29;
		double L_60 = V_26;
		double L_61 = V_27;
		V_29 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_58, (double)L_59))/(double)((double)il2cpp_codegen_multiply((double)L_60, (double)L_61))));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_62 = V_3;
		V_6 = L_62;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_63 = V_4;
		V_7 = L_63;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_64 = ___testtri0;
		Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_64, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		goto IL_0187;
	}

IL_0118:
	{
		double L_65 = V_26;
		double L_66 = V_27;
		V_35 = (bool)((((double)L_65) < ((double)L_66))? 1 : 0);
		bool L_67 = V_35;
		if (!L_67)
		{
			goto IL_0157;
		}
	}
	{
		double L_68 = V_26;
		V_28 = L_68;
		double L_69 = V_13;
		double L_70 = V_17;
		double L_71 = V_14;
		double L_72 = V_18;
		V_29 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_69, (double)L_70)), (double)((double)il2cpp_codegen_multiply((double)L_71, (double)L_72))));
		double L_73 = V_29;
		double L_74 = V_29;
		double L_75 = V_25;
		double L_76 = V_27;
		V_29 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_73, (double)L_74))/(double)((double)il2cpp_codegen_multiply((double)L_75, (double)L_76))));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_77 = V_4;
		V_6 = L_77;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_78 = V_5;
		V_7 = L_78;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_79 = ___testtri0;
		Otri_Lnext_m1E2682AFFB16CAD4A924C523412746C09CF02D10((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_79, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		goto IL_0187;
	}

IL_0157:
	{
		double L_80 = V_27;
		V_28 = L_80;
		double L_81 = V_13;
		double L_82 = V_15;
		double L_83 = V_14;
		double L_84 = V_16;
		V_29 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_81, (double)L_82)), (double)((double)il2cpp_codegen_multiply((double)L_83, (double)L_84))));
		double L_85 = V_29;
		double L_86 = V_29;
		double L_87 = V_25;
		double L_88 = V_26;
		V_29 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_85, (double)L_86))/(double)((double)il2cpp_codegen_multiply((double)L_87, (double)L_88))));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_89 = V_5;
		V_6 = L_89;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_90 = V_3;
		V_7 = L_90;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_91 = ___testtri0;
		Otri_Lprev_m47967B2F87B7C49AA15C03BD7B3B1AADE82506A3((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_91, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0187:
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_92 = __this->get_behavior_4();
		NullCheck(L_92);
		bool L_93;
		L_93 = Behavior_get_VarArea_mE5B69713B9AE4AF07B976E650943EB44F0C87799(L_92, /*hidden argument*/NULL);
		if (L_93)
		{
			goto IL_01b1;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_94 = __this->get_behavior_4();
		NullCheck(L_94);
		bool L_95 = L_94->get_fixedArea_13();
		if (L_95)
		{
			goto IL_01b1;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_96 = __this->get_behavior_4();
		NullCheck(L_96);
		Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * L_97;
		L_97 = Behavior_get_UserTest_m88D08B5256CF00A3F0FABD7EE6F1DC7D6867E8EA(L_96, /*hidden argument*/NULL);
		G_B12_0 = ((!(((RuntimeObject*)(Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 *)L_97) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_01b2;
	}

IL_01b1:
	{
		G_B12_0 = 1;
	}

IL_01b2:
	{
		V_36 = (bool)G_B12_0;
		bool L_98 = V_36;
		if (!L_98)
		{
			goto IL_02b0;
		}
	}
	{
		double L_99 = V_13;
		double L_100 = V_16;
		double L_101 = V_14;
		double L_102 = V_15;
		V_30 = ((double)il2cpp_codegen_multiply((double)(0.5), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_99, (double)L_100)), (double)((double)il2cpp_codegen_multiply((double)L_101, (double)L_102))))));
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_103 = __this->get_behavior_4();
		NullCheck(L_103);
		bool L_104 = L_103->get_fixedArea_13();
		if (!L_104)
		{
			goto IL_01f1;
		}
	}
	{
		double L_105 = V_30;
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_106 = __this->get_behavior_4();
		NullCheck(L_106);
		double L_107;
		L_107 = Behavior_get_MaxArea_m60B01E1E462EAE0FC42185AD702F8DD6F4022A8B(L_106, /*hidden argument*/NULL);
		G_B16_0 = ((((double)L_105) > ((double)L_107))? 1 : 0);
		goto IL_01f2;
	}

IL_01f1:
	{
		G_B16_0 = 0;
	}

IL_01f2:
	{
		V_37 = (bool)G_B16_0;
		bool L_108 = V_37;
		if (!L_108)
		{
			goto IL_0212;
		}
	}
	{
		BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * L_109 = __this->get_queue_2();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_110 = ___testtri0;
		double L_111 = V_28;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_112 = V_5;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_113 = V_3;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_114 = V_4;
		NullCheck(L_109);
		BadTriQueue_Enqueue_m1CEB3720166F896F52FC316BA2DABF3A2B34D324(L_109, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_110, L_111, L_112, L_113, L_114, /*hidden argument*/NULL);
		goto IL_057b;
	}

IL_0212:
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_115 = __this->get_behavior_4();
		NullCheck(L_115);
		bool L_116;
		L_116 = Behavior_get_VarArea_mE5B69713B9AE4AF07B976E650943EB44F0C87799(L_115, /*hidden argument*/NULL);
		if (!L_116)
		{
			goto IL_0246;
		}
	}
	{
		double L_117 = V_30;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_118 = ___testtri0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_119 = L_118->get_tri_0();
		NullCheck(L_119);
		double L_120 = L_119->get_area_6();
		if ((!(((double)L_117) > ((double)L_120))))
		{
			goto IL_0246;
		}
	}
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_121 = ___testtri0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_122 = L_121->get_tri_0();
		NullCheck(L_122);
		double L_123 = L_122->get_area_6();
		G_B22_0 = ((((double)L_123) > ((double)(0.0)))? 1 : 0);
		goto IL_0247;
	}

IL_0246:
	{
		G_B22_0 = 0;
	}

IL_0247:
	{
		V_38 = (bool)G_B22_0;
		bool L_124 = V_38;
		if (!L_124)
		{
			goto IL_0267;
		}
	}
	{
		BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * L_125 = __this->get_queue_2();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_126 = ___testtri0;
		double L_127 = V_28;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_128 = V_5;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_129 = V_3;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_130 = V_4;
		NullCheck(L_125);
		BadTriQueue_Enqueue_m1CEB3720166F896F52FC316BA2DABF3A2B34D324(L_125, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_126, L_127, L_128, L_129, L_130, /*hidden argument*/NULL);
		goto IL_057b;
	}

IL_0267:
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_131 = __this->get_behavior_4();
		NullCheck(L_131);
		Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * L_132;
		L_132 = Behavior_get_UserTest_m88D08B5256CF00A3F0FABD7EE6F1DC7D6867E8EA(L_131, /*hidden argument*/NULL);
		if (!L_132)
		{
			goto IL_028e;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_133 = __this->get_behavior_4();
		NullCheck(L_133);
		Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * L_134;
		L_134 = Behavior_get_UserTest_m88D08B5256CF00A3F0FABD7EE6F1DC7D6867E8EA(L_133, /*hidden argument*/NULL);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_135 = ___testtri0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_136 = L_135->get_tri_0();
		double L_137 = V_30;
		NullCheck(L_134);
		bool L_138;
		L_138 = Func_3_Invoke_m8C71C03C02354FF15F1A98997F5482B98876D8CB(L_134, L_136, L_137, /*hidden argument*/Func_3_Invoke_m8C71C03C02354FF15F1A98997F5482B98876D8CB_RuntimeMethod_var);
		G_B27_0 = ((int32_t)(L_138));
		goto IL_028f;
	}

IL_028e:
	{
		G_B27_0 = 0;
	}

IL_028f:
	{
		V_39 = (bool)G_B27_0;
		bool L_139 = V_39;
		if (!L_139)
		{
			goto IL_02af;
		}
	}
	{
		BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * L_140 = __this->get_queue_2();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_141 = ___testtri0;
		double L_142 = V_28;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_143 = V_5;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_144 = V_3;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_145 = V_4;
		NullCheck(L_140);
		BadTriQueue_Enqueue_m1CEB3720166F896F52FC316BA2DABF3A2B34D324(L_140, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_141, L_142, L_143, L_144, L_145, /*hidden argument*/NULL);
		goto IL_057b;
	}

IL_02af:
	{
	}

IL_02b0:
	{
		double L_146 = V_25;
		double L_147 = V_26;
		if ((!(((double)L_146) > ((double)L_147))))
		{
			goto IL_02be;
		}
	}
	{
		double L_148 = V_25;
		double L_149 = V_27;
		G_B33_0 = ((((double)L_148) > ((double)L_149))? 1 : 0);
		goto IL_02bf;
	}

IL_02be:
	{
		G_B33_0 = 0;
	}

IL_02bf:
	{
		V_40 = (bool)G_B33_0;
		bool L_150 = V_40;
		if (!L_150)
		{
			goto IL_02e8;
		}
	}
	{
		double L_151 = V_26;
		double L_152 = V_27;
		double L_153 = V_25;
		double L_154 = V_26;
		double L_155 = V_27;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_156;
		L_156 = sqrt(((double)il2cpp_codegen_multiply((double)L_154, (double)L_155)));
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)L_151, (double)L_152)), (double)L_153))/(double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_156))));
		goto IL_0338;
	}

IL_02e8:
	{
		double L_157 = V_26;
		double L_158 = V_27;
		V_41 = (bool)((((double)L_157) > ((double)L_158))? 1 : 0);
		bool L_159 = V_41;
		if (!L_159)
		{
			goto IL_0317;
		}
	}
	{
		double L_160 = V_25;
		double L_161 = V_27;
		double L_162 = V_26;
		double L_163 = V_25;
		double L_164 = V_27;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_165;
		L_165 = sqrt(((double)il2cpp_codegen_multiply((double)L_163, (double)L_164)));
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)L_160, (double)L_161)), (double)L_162))/(double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_165))));
		goto IL_0338;
	}

IL_0317:
	{
		double L_166 = V_25;
		double L_167 = V_26;
		double L_168 = V_27;
		double L_169 = V_25;
		double L_170 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_171;
		L_171 = sqrt(((double)il2cpp_codegen_multiply((double)L_169, (double)L_170)));
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)L_166, (double)L_167)), (double)L_168))/(double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_171))));
	}

IL_0338:
	{
		double L_172 = V_29;
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_173 = __this->get_behavior_4();
		NullCheck(L_173);
		double L_174 = L_173->get_goodAngle_16();
		if ((((double)L_172) > ((double)L_174)))
		{
			goto IL_0374;
		}
	}
	{
		double L_175 = V_33;
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_176 = __this->get_behavior_4();
		NullCheck(L_176);
		double L_177 = L_176->get_maxGoodAngle_17();
		if ((!(((double)L_175) < ((double)L_177))))
		{
			goto IL_0371;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_178 = __this->get_behavior_4();
		NullCheck(L_178);
		double L_179;
		L_179 = Behavior_get_MaxAngle_m27BA9A50A46DC5CE98F02A9FF6E3696EEC0BD6C0(L_178, /*hidden argument*/NULL);
		G_B42_0 = ((((int32_t)((((double)L_179) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0372;
	}

IL_0371:
	{
		G_B42_0 = 0;
	}

IL_0372:
	{
		G_B44_0 = G_B42_0;
		goto IL_0375;
	}

IL_0374:
	{
		G_B44_0 = 1;
	}

IL_0375:
	{
		V_42 = (bool)G_B44_0;
		bool L_180 = V_42;
		if (!L_180)
		{
			goto IL_057b;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_181 = V_6;
		NullCheck(L_181);
		int32_t L_182 = L_181->get_type_6();
		if ((!(((uint32_t)L_182) == ((uint32_t)1))))
		{
			goto IL_0395;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_183 = V_7;
		NullCheck(L_183);
		int32_t L_184 = L_183->get_type_6();
		G_B48_0 = ((((int32_t)L_184) == ((int32_t)1))? 1 : 0);
		goto IL_0396;
	}

IL_0395:
	{
		G_B48_0 = 0;
	}

IL_0396:
	{
		V_43 = (bool)G_B48_0;
		bool L_185 = V_43;
		if (!L_185)
		{
			goto IL_0566;
		}
	}
	{
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_186 = V_2;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_187 = L_186.get_seg_0();
		NullCheck(L_187);
		int32_t L_188 = L_187->get_hash_0();
		V_44 = (bool)((((int32_t)L_188) == ((int32_t)(-1)))? 1 : 0);
		bool L_189 = V_44;
		if (!L_189)
		{
			goto IL_0565;
		}
	}
	{
		Otri_Copy_m77E5E547CE669B6060FFE5B8933E511498A637D1((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
	}

IL_03cc:
	{
		Otri_Oprev_m41D8764009C00487ABB8E386CFBBC7DF8912C49B((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_190 = V_2;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_191 = L_190.get_seg_0();
		NullCheck(L_191);
		int32_t L_192 = L_191->get_hash_0();
		V_45 = (bool)((((int32_t)L_192) == ((int32_t)(-1)))? 1 : 0);
		bool L_193 = V_45;
		if (L_193)
		{
			goto IL_03cc;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_194;
		L_194 = Osub_SegOrg_mA09547EDF5590FC5416A583F27DC69EA75D717E8((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		V_8 = L_194;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_195;
		L_195 = Osub_SegDest_m93A9E3E3A0F58D7924C57D900761D206DA11DC41((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		V_9 = L_195;
	}

IL_0406:
	{
		Otri_Dnext_m90E357F83E4F830029723028405F4C7FF58B085F((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_196 = V_2;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_197 = L_196.get_seg_0();
		NullCheck(L_197);
		int32_t L_198 = L_197->get_hash_0();
		V_46 = (bool)((((int32_t)L_198) == ((int32_t)(-1)))? 1 : 0);
		bool L_199 = V_46;
		if (L_199)
		{
			goto IL_0406;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_200;
		L_200 = Osub_SegOrg_mA09547EDF5590FC5416A583F27DC69EA75D717E8((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		V_10 = L_200;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_201;
		L_201 = Osub_SegDest_m93A9E3E3A0F58D7924C57D900761D206DA11DC41((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		V_11 = L_201;
		V_12 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)NULL;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_202 = V_9;
		NullCheck(L_202);
		double L_203 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_202)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_204 = V_10;
		NullCheck(L_204);
		double L_205 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_204)->get_x_2();
		if ((!(((double)L_203) == ((double)L_205))))
		{
			goto IL_0465;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_206 = V_9;
		NullCheck(L_206);
		double L_207 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_206)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_208 = V_10;
		NullCheck(L_208);
		double L_209 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_208)->get_y_3();
		G_B57_0 = ((((double)L_207) == ((double)L_209))? 1 : 0);
		goto IL_0466;
	}

IL_0465:
	{
		G_B57_0 = 0;
	}

IL_0466:
	{
		V_47 = (bool)G_B57_0;
		bool L_210 = V_47;
		if (!L_210)
		{
			goto IL_0474;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_211 = V_9;
		V_12 = L_211;
		goto IL_04a3;
	}

IL_0474:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_212 = V_8;
		NullCheck(L_212);
		double L_213 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_212)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_214 = V_11;
		NullCheck(L_214);
		double L_215 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_214)->get_x_2();
		if ((!(((double)L_213) == ((double)L_215))))
		{
			goto IL_0496;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_216 = V_8;
		NullCheck(L_216);
		double L_217 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_216)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_218 = V_11;
		NullCheck(L_218);
		double L_219 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_218)->get_y_3();
		G_B62_0 = ((((double)L_217) == ((double)L_219))? 1 : 0);
		goto IL_0497;
	}

IL_0496:
	{
		G_B62_0 = 0;
	}

IL_0497:
	{
		V_48 = (bool)G_B62_0;
		bool L_220 = V_48;
		if (!L_220)
		{
			goto IL_04a3;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_221 = V_8;
		V_12 = L_221;
	}

IL_04a3:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_222 = V_12;
		bool L_223;
		L_223 = Point_op_Inequality_m3FE5FD8D46076A8BD9AEDCAC1E9B29E7650C561F(L_222, (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)NULL, /*hidden argument*/NULL);
		V_49 = L_223;
		bool L_224 = V_49;
		if (!L_224)
		{
			goto IL_0564;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_225 = V_6;
		NullCheck(L_225);
		double L_226 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_225)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_227 = V_12;
		NullCheck(L_227);
		double L_228 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_227)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_229 = V_6;
		NullCheck(L_229);
		double L_230 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_229)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_231 = V_12;
		NullCheck(L_231);
		double L_232 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_231)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_233 = V_6;
		NullCheck(L_233);
		double L_234 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_233)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_235 = V_12;
		NullCheck(L_235);
		double L_236 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_235)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_237 = V_6;
		NullCheck(L_237);
		double L_238 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_237)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_239 = V_12;
		NullCheck(L_239);
		double L_240 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_239)->get_y_3();
		V_31 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_226, (double)L_228)), (double)((double)il2cpp_codegen_subtract((double)L_230, (double)L_232)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_234, (double)L_236)), (double)((double)il2cpp_codegen_subtract((double)L_238, (double)L_240))))));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_241 = V_7;
		NullCheck(L_241);
		double L_242 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_241)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_243 = V_12;
		NullCheck(L_243);
		double L_244 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_243)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_245 = V_7;
		NullCheck(L_245);
		double L_246 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_245)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_247 = V_12;
		NullCheck(L_247);
		double L_248 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_247)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_249 = V_7;
		NullCheck(L_249);
		double L_250 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_249)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_251 = V_12;
		NullCheck(L_251);
		double L_252 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_251)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_253 = V_7;
		NullCheck(L_253);
		double L_254 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_253)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_255 = V_12;
		NullCheck(L_255);
		double L_256 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_255)->get_y_3();
		V_32 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_242, (double)L_244)), (double)((double)il2cpp_codegen_subtract((double)L_246, (double)L_248)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_250, (double)L_252)), (double)((double)il2cpp_codegen_subtract((double)L_254, (double)L_256))))));
		double L_257 = V_31;
		double L_258 = V_32;
		if ((!(((double)L_257) < ((double)((double)il2cpp_codegen_multiply((double)(1.0009999999999999), (double)L_258))))))
		{
			goto IL_0559;
		}
	}
	{
		double L_259 = V_31;
		double L_260 = V_32;
		G_B68_0 = ((((double)L_259) > ((double)((double)il2cpp_codegen_multiply((double)(0.999), (double)L_260))))? 1 : 0);
		goto IL_055a;
	}

IL_0559:
	{
		G_B68_0 = 0;
	}

IL_055a:
	{
		V_50 = (bool)G_B68_0;
		bool L_261 = V_50;
		if (!L_261)
		{
			goto IL_0563;
		}
	}
	{
		goto IL_057b;
	}

IL_0563:
	{
	}

IL_0564:
	{
	}

IL_0565:
	{
	}

IL_0566:
	{
		BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * L_262 = __this->get_queue_2();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_263 = ___testtri0;
		double L_264 = V_28;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_265 = V_5;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_266 = V_3;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_267 = V_4;
		NullCheck(L_262);
		BadTriQueue_Enqueue_m1CEB3720166F896F52FC316BA2DABF3A2B34D324(L_262, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)L_263, L_264, L_265, L_266, L_267, /*hidden argument*/NULL);
	}

IL_057b:
	{
		return;
	}
}
// System.Void TriangleNet.Meshing.QualityMesher::TallyEncs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_TallyEncs_m03686BE888432E0C2F0A2498246E17562EF38C33 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mF31948F1C6D2BBB5DE8E800CF7A9613FA31CF41E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40C2893F8E44F4D82D3685FA9AEA2B34FC884AA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE55993B5B281B0AE3B1992C539A2FA7D8D2399B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD26809EE43ACE6D364A4687CA60E99D7FF5AADC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m025DF0776B96878B7C65B66CB0A8276CAD0AA7AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		(&V_0)->set_orient_1(0);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_0 = __this->get_mesh_3();
		NullCheck(L_0);
		Dictionary_2_t69973F4CD0F80B7E54FCBCDC6AC4A9FAAD28A69D * L_1 = L_0->get_subsegs_5();
		NullCheck(L_1);
		ValueCollection_t229C029B153F947A4549104056077BC114A5809C * L_2;
		L_2 = Dictionary_2_get_Values_mF31948F1C6D2BBB5DE8E800CF7A9613FA31CF41E(L_1, /*hidden argument*/Dictionary_2_get_Values_mF31948F1C6D2BBB5DE8E800CF7A9613FA31CF41E_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87  L_3;
		L_3 = ValueCollection_GetEnumerator_m025DF0776B96878B7C65B66CB0A8276CAD0AA7AB(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m025DF0776B96878B7C65B66CB0A8276CAD0AA7AB_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_002a:
		{
			SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_4;
			L_4 = Enumerator_get_Current_mBD26809EE43ACE6D364A4687CA60E99D7FF5AADC_inline((Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mBD26809EE43ACE6D364A4687CA60E99D7FF5AADC_RuntimeMethod_var);
			V_2 = L_4;
			SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_5 = V_2;
			(&V_0)->set_seg_0(L_5);
			int32_t L_6;
			L_6 = QualityMesher_CheckSeg4Encroach_m1A87F52F5AD575C13D69B73603A81DB6E8E058E7(__this, (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_0), /*hidden argument*/NULL);
		}

IL_0045:
		{
			bool L_7;
			L_7 = Enumerator_MoveNext_mE55993B5B281B0AE3B1992C539A2FA7D8D2399B2((Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mE55993B5B281B0AE3B1992C539A2FA7D8D2399B2_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_002a;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m40C2893F8E44F4D82D3685FA9AEA2B34FC884AA2((Enumerator_tB6AEB29E5F0FBF4481413C8BAECC2028936EBA87 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m40C2893F8E44F4D82D3685FA9AEA2B34FC884AA2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		return;
	}
}
// System.Void TriangleNet.Meshing.QualityMesher::SplitEncSegs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_SplitEncSegs_m84E0D73E180271F42FABC0E6849BCE7C57E2696A (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, bool ___triflaws0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFE911E8AC402B5FBA3C81CD015032BBB892BE005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mA9F73860A1D493EBDC7AB2AAC10F237E2A478481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  V_3;
	memset((&V_3), 0, sizeof(V_3));
	BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * V_4 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_5 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_6 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_7 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_8 = NULL;
	int32_t V_9 = 0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B64_0 = 0;
	int32_t G_B69_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		il2cpp_codegen_initobj((&V_2), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		il2cpp_codegen_initobj((&V_3), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		goto IL_06a8;
	}

IL_0026:
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_0 = __this->get_mesh_3();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_steinerleft_19();
		V_19 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_19;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_06bf;
	}

IL_0041:
	{
		Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * L_3 = __this->get_badsubsegs_1();
		NullCheck(L_3);
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_4;
		L_4 = Queue_1_Dequeue_mA9F73860A1D493EBDC7AB2AAC10F237E2A478481(L_3, /*hidden argument*/Queue_1_Dequeue_mA9F73860A1D493EBDC7AB2AAC10F237E2A478481_RuntimeMethod_var);
		V_4 = L_4;
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_5 = V_4;
		NullCheck(L_5);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_6 = L_5->get_subseg_0();
		V_3 = L_6;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_7;
		L_7 = Osub_Org_m15C17B8EADCE18F65DCB98BDD895EF200D4485A7((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_3), /*hidden argument*/NULL);
		V_5 = L_7;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_8;
		L_8 = Osub_Dest_mF2FD60A4737E666E6A7456665207A89F665FF98D((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_3), /*hidden argument*/NULL);
		V_6 = L_8;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_9 = V_3;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_10 = L_9.get_seg_0();
		bool L_11;
		L_11 = Osub_IsDead_mA282919A0206629C820EF0EAA56DD970CDF0AE6E(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0095;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_12 = V_5;
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_13 = V_4;
		NullCheck(L_13);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_14 = L_13->get_org_1();
		bool L_15;
		L_15 = Point_op_Equality_m2114AF7F1C6AC57993521F2065E32E9B969D88AB(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0095;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_16 = V_6;
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_17 = V_4;
		NullCheck(L_17);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_18 = L_17->get_dest_2();
		bool L_19;
		L_19 = Point_op_Equality_m2114AF7F1C6AC57993521F2065E32E9B969D88AB(L_16, L_18, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_19));
		goto IL_0096;
	}

IL_0095:
	{
		G_B7_0 = 0;
	}

IL_0096:
	{
		V_20 = (bool)G_B7_0;
		bool L_20 = V_20;
		if (!L_20)
		{
			goto IL_069f;
		}
	}
	{
		Osub_Pivot_m973A8B45266B8FD2724CDE422326CE8A8020E9FC((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_3), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		Otri_Lnext_m1E2682AFFB16CAD4A924C523412746C09CF02D10((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_21 = V_2;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_22 = L_21.get_seg_0();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_hash_0();
		V_15 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_24 = V_2;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_25 = L_24.get_seg_0();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_hash_0();
		V_17 = (bool)((((int32_t)((((int32_t)L_26) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_27 = __this->get_behavior_4();
		NullCheck(L_27);
		bool L_28;
		L_28 = Behavior_get_ConformingDelaunay_mD63F63D5DF9AF3816D108FF84670DDFC5C8A1F23(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_010e;
		}
	}
	{
		bool L_29 = V_15;
		if (L_29)
		{
			goto IL_010e;
		}
	}
	{
		bool L_30 = V_17;
		G_B12_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_010f;
	}

IL_010e:
	{
		G_B12_0 = 0;
	}

IL_010f:
	{
		V_21 = (bool)G_B12_0;
		bool L_31 = V_21;
		if (!L_31)
		{
			goto IL_01b2;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_32;
		L_32 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		V_7 = L_32;
		goto IL_0151;
	}

IL_0124:
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_33 = __this->get_mesh_3();
		NullCheck(L_33);
		Mesh_DeleteVertex_m3E47118643B2B66849E91169FEA79D869118EB46(L_33, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Osub_Pivot_m973A8B45266B8FD2724CDE422326CE8A8020E9FC((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_3), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_34;
		L_34 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		V_7 = L_34;
		Otri_Lprev_m47967B2F87B7C49AA15C03BD7B3B1AADE82506A3((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
	}

IL_0151:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_35 = V_7;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_type_6();
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_01a7;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_37 = V_5;
		NullCheck(L_37);
		double L_38 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_37)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_39 = V_7;
		NullCheck(L_39);
		double L_40 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_39)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_41 = V_6;
		NullCheck(L_41);
		double L_42 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_41)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_43 = V_7;
		NullCheck(L_43);
		double L_44 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_43)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_45 = V_5;
		NullCheck(L_45);
		double L_46 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_45)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_47 = V_7;
		NullCheck(L_47);
		double L_48 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_47)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_49 = V_6;
		NullCheck(L_49);
		double L_50 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_49)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_51 = V_7;
		NullCheck(L_51);
		double L_52 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_51)->get_y_3();
		G_B18_0 = ((((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_38, (double)L_40)), (double)((double)il2cpp_codegen_subtract((double)L_42, (double)L_44)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_46, (double)L_48)), (double)((double)il2cpp_codegen_subtract((double)L_50, (double)L_52))))))) < ((double)(0.0)))? 1 : 0);
		goto IL_01a8;
	}

IL_01a7:
	{
		G_B18_0 = 0;
	}

IL_01a8:
	{
		V_22 = (bool)G_B18_0;
		bool L_53 = V_22;
		if (L_53)
		{
			goto IL_0124;
		}
	}
	{
	}

IL_01b2:
	{
		Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_54 = V_1;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_55 = L_54.get_tri_0();
		NullCheck(L_55);
		int32_t L_56 = L_55->get_id_1();
		V_23 = (bool)((((int32_t)((((int32_t)L_56) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_23;
		if (!L_57)
		{
			goto IL_02ea;
		}
	}
	{
		Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_58 = V_2;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_59 = L_58.get_seg_0();
		NullCheck(L_59);
		int32_t L_60 = L_59->get_hash_0();
		V_18 = (bool)((((int32_t)((((int32_t)L_60) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_61 = V_17;
		bool L_62 = V_18;
		V_17 = (bool)((int32_t)((int32_t)L_61|(int32_t)L_62));
		Otri_Lnext_m440475603E34CEFDF00FE1AFA9C2DA97CACA68FA((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_63 = V_2;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_64 = L_63.get_seg_0();
		NullCheck(L_64);
		int32_t L_65 = L_64->get_hash_0();
		V_16 = (bool)((((int32_t)((((int32_t)L_65) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_15;
		bool L_67 = V_16;
		V_15 = (bool)((int32_t)((int32_t)L_66|(int32_t)L_67));
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_68 = __this->get_behavior_4();
		NullCheck(L_68);
		bool L_69;
		L_69 = Behavior_get_ConformingDelaunay_mD63F63D5DF9AF3816D108FF84670DDFC5C8A1F23(L_68, /*hidden argument*/NULL);
		if (L_69)
		{
			goto IL_0247;
		}
	}
	{
		bool L_70 = V_16;
		if (L_70)
		{
			goto IL_0247;
		}
	}
	{
		bool L_71 = V_18;
		G_B25_0 = ((((int32_t)L_71) == ((int32_t)0))? 1 : 0);
		goto IL_0248;
	}

IL_0247:
	{
		G_B25_0 = 0;
	}

IL_0248:
	{
		V_24 = (bool)G_B25_0;
		bool L_72 = V_24;
		if (!L_72)
		{
			goto IL_02e9;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_73;
		L_73 = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		V_7 = L_73;
		goto IL_0288;
	}

IL_025d:
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_74 = __this->get_mesh_3();
		NullCheck(L_74);
		Mesh_DeleteVertex_m3E47118643B2B66849E91169FEA79D869118EB46(L_74, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_75;
		L_75 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		V_7 = L_75;
		Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
	}

IL_0288:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_76 = V_7;
		NullCheck(L_76);
		int32_t L_77 = L_76->get_type_6();
		if ((!(((uint32_t)L_77) == ((uint32_t)2))))
		{
			goto IL_02de;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_78 = V_5;
		NullCheck(L_78);
		double L_79 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_78)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_80 = V_7;
		NullCheck(L_80);
		double L_81 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_80)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_82 = V_6;
		NullCheck(L_82);
		double L_83 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_82)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_84 = V_7;
		NullCheck(L_84);
		double L_85 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_84)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_86 = V_5;
		NullCheck(L_86);
		double L_87 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_86)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_88 = V_7;
		NullCheck(L_88);
		double L_89 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_88)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_90 = V_6;
		NullCheck(L_90);
		double L_91 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_90)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_92 = V_7;
		NullCheck(L_92);
		double L_93 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_92)->get_y_3();
		G_B31_0 = ((((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_79, (double)L_81)), (double)((double)il2cpp_codegen_subtract((double)L_83, (double)L_85)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_87, (double)L_89)), (double)((double)il2cpp_codegen_subtract((double)L_91, (double)L_93))))))) < ((double)(0.0)))? 1 : 0);
		goto IL_02df;
	}

IL_02de:
	{
		G_B31_0 = 0;
	}

IL_02df:
	{
		V_25 = (bool)G_B31_0;
		bool L_94 = V_25;
		if (L_94)
		{
			goto IL_025d;
		}
	}
	{
	}

IL_02e9:
	{
	}

IL_02ea:
	{
		bool L_95 = V_15;
		bool L_96 = V_17;
		V_26 = (bool)((int32_t)((int32_t)L_95|(int32_t)L_96));
		bool L_97 = V_26;
		if (!L_97)
		{
			goto IL_03bc;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_98 = V_6;
		NullCheck(L_98);
		double L_99 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_98)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_100 = V_5;
		NullCheck(L_100);
		double L_101 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_100)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_102 = V_6;
		NullCheck(L_102);
		double L_103 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_102)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_104 = V_5;
		NullCheck(L_104);
		double L_105 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_104)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_106 = V_6;
		NullCheck(L_106);
		double L_107 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_106)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_108 = V_5;
		NullCheck(L_108);
		double L_109 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_108)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_110 = V_6;
		NullCheck(L_110);
		double L_111 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_110)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_112 = V_5;
		NullCheck(L_112);
		double L_113 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_112)->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_114;
		L_114 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_99, (double)L_101)), (double)((double)il2cpp_codegen_subtract((double)L_103, (double)L_105)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_107, (double)L_109)), (double)((double)il2cpp_codegen_subtract((double)L_111, (double)L_113)))))));
		V_10 = L_114;
		V_11 = (1.0);
		goto IL_035c;
	}

IL_034c:
	{
		double L_115 = V_11;
		V_11 = ((double)il2cpp_codegen_multiply((double)L_115, (double)(2.0)));
	}

IL_035c:
	{
		double L_116 = V_10;
		double L_117 = V_11;
		V_27 = (bool)((((double)L_116) > ((double)((double)il2cpp_codegen_multiply((double)(3.0), (double)L_117))))? 1 : 0);
		bool L_118 = V_27;
		if (L_118)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0384;
	}

IL_0374:
	{
		double L_119 = V_11;
		V_11 = ((double)il2cpp_codegen_multiply((double)L_119, (double)(0.5)));
	}

IL_0384:
	{
		double L_120 = V_10;
		double L_121 = V_11;
		V_28 = (bool)((((double)L_120) < ((double)((double)il2cpp_codegen_multiply((double)(1.5), (double)L_121))))? 1 : 0);
		bool L_122 = V_28;
		if (L_122)
		{
			goto IL_0374;
		}
	}
	{
		double L_123 = V_11;
		double L_124 = V_10;
		V_12 = ((double)((double)L_123/(double)L_124));
		bool L_125 = V_17;
		V_29 = L_125;
		bool L_126 = V_29;
		if (!L_126)
		{
			goto IL_03b9;
		}
	}
	{
		double L_127 = V_12;
		V_12 = ((double)il2cpp_codegen_subtract((double)(1.0), (double)L_127));
	}

IL_03b9:
	{
		goto IL_03c9;
	}

IL_03bc:
	{
		V_12 = (0.5);
	}

IL_03c9:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_128 = V_5;
		NullCheck(L_128);
		double L_129 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_128)->get_x_2();
		double L_130 = V_12;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_131 = V_6;
		NullCheck(L_131);
		double L_132 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_131)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_133 = V_5;
		NullCheck(L_133);
		double L_134 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_133)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_135 = V_5;
		NullCheck(L_135);
		double L_136 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_135)->get_y_3();
		double L_137 = V_12;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_138 = V_6;
		NullCheck(L_138);
		double L_139 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_138)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_140 = V_5;
		NullCheck(L_140);
		double L_141 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_140)->get_y_3();
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_142 = V_3;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_143 = L_142.get_seg_0();
		NullCheck(L_143);
		int32_t L_144 = L_143->get_boundary_4();
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_145 = __this->get_mesh_3();
		NullCheck(L_145);
		int32_t L_146 = L_145->get_nextras_17();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_147 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)il2cpp_codegen_object_new(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		Vertex__ctor_mCD6917C5503DAFB577D0E0A470129994192BF4ED(L_147, ((double)il2cpp_codegen_add((double)L_129, (double)((double)il2cpp_codegen_multiply((double)L_130, (double)((double)il2cpp_codegen_subtract((double)L_132, (double)L_134)))))), ((double)il2cpp_codegen_add((double)L_136, (double)((double)il2cpp_codegen_multiply((double)L_137, (double)((double)il2cpp_codegen_subtract((double)L_139, (double)L_141)))))), L_144, L_146, /*hidden argument*/NULL);
		V_8 = L_147;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_148 = V_8;
		NullCheck(L_148);
		L_148->set_type_6(1);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_149 = V_8;
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_150 = __this->get_mesh_3();
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_151 = L_150;
		NullCheck(L_151);
		int32_t L_152 = L_151->get_hash_vtx_7();
		V_30 = L_152;
		int32_t L_153 = V_30;
		NullCheck(L_151);
		L_151->set_hash_vtx_7(((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)1)));
		int32_t L_154 = V_30;
		NullCheck(L_149);
		L_149->set_hash_4(L_154);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_155 = V_8;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_156 = V_8;
		NullCheck(L_156);
		int32_t L_157 = L_156->get_hash_4();
		NullCheck(L_155);
		((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_155)->set_id_0(L_157);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_158 = __this->get_mesh_3();
		NullCheck(L_158);
		Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9 * L_159 = L_158->get_vertices_6();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_160 = V_8;
		NullCheck(L_160);
		int32_t L_161 = L_160->get_hash_4();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_162 = V_8;
		NullCheck(L_159);
		Dictionary_2_Add_mFE911E8AC402B5FBA3C81CD015032BBB892BE005(L_159, L_161, L_162, /*hidden argument*/Dictionary_2_Add_mFE911E8AC402B5FBA3C81CD015032BBB892BE005_RuntimeMethod_var);
		V_31 = 0;
		goto IL_04a4;
	}

IL_046f:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_163 = V_8;
		NullCheck(L_163);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_164 = L_163->get_attributes_5();
		int32_t L_165 = V_31;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_166 = V_5;
		NullCheck(L_166);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_167 = L_166->get_attributes_5();
		int32_t L_168 = V_31;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		double L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		double L_171 = V_12;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_172 = V_6;
		NullCheck(L_172);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_173 = L_172->get_attributes_5();
		int32_t L_174 = V_31;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		double L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_177 = V_5;
		NullCheck(L_177);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_178 = L_177->get_attributes_5();
		int32_t L_179 = V_31;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		double L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(L_165), (double)((double)il2cpp_codegen_add((double)L_170, (double)((double)il2cpp_codegen_multiply((double)L_171, (double)((double)il2cpp_codegen_subtract((double)L_176, (double)L_181)))))));
		int32_t L_182 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)1));
	}

IL_04a4:
	{
		int32_t L_183 = V_31;
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_184 = __this->get_mesh_3();
		NullCheck(L_184);
		int32_t L_185 = L_184->get_nextras_17();
		V_32 = (bool)((((int32_t)L_183) < ((int32_t)L_185))? 1 : 0);
		bool L_186 = V_32;
		if (L_186)
		{
			goto IL_046f;
		}
	}
	{
		bool L_187;
		L_187 = Behavior_get_NoExact_mCDCFEFF0B67EE543B5D67F2167FC7456311731B5_inline(/*hidden argument*/NULL);
		V_33 = (bool)((((int32_t)L_187) == ((int32_t)0))? 1 : 0);
		bool L_188 = V_33;
		if (!L_188)
		{
			goto IL_05a1;
		}
	}
	{
		RuntimeObject* L_189 = __this->get_predicates_0();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_190 = V_5;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_191 = V_6;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_192 = V_8;
		NullCheck(L_189);
		double L_193;
		L_193 = InterfaceFuncInvoker3< double, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * >::Invoke(0 /* System.Double TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var, L_189, L_190, L_191, L_192);
		V_13 = L_193;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_194 = V_5;
		NullCheck(L_194);
		double L_195 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_194)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_196 = V_6;
		NullCheck(L_196);
		double L_197 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_196)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_198 = V_5;
		NullCheck(L_198);
		double L_199 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_198)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_200 = V_6;
		NullCheck(L_200);
		double L_201 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_200)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_202 = V_5;
		NullCheck(L_202);
		double L_203 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_202)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_204 = V_6;
		NullCheck(L_204);
		double L_205 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_204)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_206 = V_5;
		NullCheck(L_206);
		double L_207 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_206)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_208 = V_6;
		NullCheck(L_208);
		double L_209 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_208)->get_y_3();
		V_14 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_195, (double)L_197)), (double)((double)il2cpp_codegen_subtract((double)L_199, (double)L_201)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_203, (double)L_205)), (double)((double)il2cpp_codegen_subtract((double)L_207, (double)L_209))))));
		double L_210 = V_13;
		if ((((double)L_210) == ((double)(0.0))))
		{
			goto IL_053e;
		}
	}
	{
		double L_211 = V_14;
		G_B52_0 = ((((int32_t)((((double)L_211) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_053f;
	}

IL_053e:
	{
		G_B52_0 = 0;
	}

IL_053f:
	{
		V_34 = (bool)G_B52_0;
		bool L_212 = V_34;
		if (!L_212)
		{
			goto IL_05a0;
		}
	}
	{
		double L_213 = V_13;
		double L_214 = V_14;
		V_13 = ((double)((double)L_213/(double)L_214));
		double L_215 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_216;
		L_216 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_215, /*hidden argument*/NULL);
		V_35 = (bool)((((int32_t)L_216) == ((int32_t)0))? 1 : 0);
		bool L_217 = V_35;
		if (!L_217)
		{
			goto IL_059f;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_218 = V_8;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_219 = L_218;
		NullCheck(L_219);
		double L_220 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_219)->get_x_2();
		double L_221 = V_13;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_222 = V_6;
		NullCheck(L_222);
		double L_223 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_222)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_224 = V_5;
		NullCheck(L_224);
		double L_225 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_224)->get_y_3();
		NullCheck(L_219);
		((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_219)->set_x_2(((double)il2cpp_codegen_add((double)L_220, (double)((double)il2cpp_codegen_multiply((double)L_221, (double)((double)il2cpp_codegen_subtract((double)L_223, (double)L_225)))))));
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_226 = V_8;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_227 = L_226;
		NullCheck(L_227);
		double L_228 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_227)->get_y_3();
		double L_229 = V_13;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_230 = V_5;
		NullCheck(L_230);
		double L_231 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_230)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_232 = V_6;
		NullCheck(L_232);
		double L_233 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_232)->get_x_2();
		NullCheck(L_227);
		((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_227)->set_y_3(((double)il2cpp_codegen_add((double)L_228, (double)((double)il2cpp_codegen_multiply((double)L_229, (double)((double)il2cpp_codegen_subtract((double)L_231, (double)L_233)))))));
	}

IL_059f:
	{
	}

IL_05a0:
	{
	}

IL_05a1:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_234 = V_8;
		NullCheck(L_234);
		double L_235 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_234)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_236 = V_5;
		NullCheck(L_236);
		double L_237 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_236)->get_x_2();
		if ((!(((double)L_235) == ((double)L_237))))
		{
			goto IL_05c1;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_238 = V_8;
		NullCheck(L_238);
		double L_239 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_238)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_240 = V_5;
		NullCheck(L_240);
		double L_241 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_240)->get_y_3();
		if ((((double)L_239) == ((double)L_241)))
		{
			goto IL_05e6;
		}
	}

IL_05c1:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_242 = V_8;
		NullCheck(L_242);
		double L_243 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_242)->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_244 = V_6;
		NullCheck(L_244);
		double L_245 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_244)->get_x_2();
		if ((!(((double)L_243) == ((double)L_245))))
		{
			goto IL_05e3;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_246 = V_8;
		NullCheck(L_246);
		double L_247 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_246)->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_248 = V_6;
		NullCheck(L_248);
		double L_249 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_248)->get_y_3();
		G_B62_0 = ((((double)L_247) == ((double)L_249))? 1 : 0);
		goto IL_05e4;
	}

IL_05e3:
	{
		G_B62_0 = 0;
	}

IL_05e4:
	{
		G_B64_0 = G_B62_0;
		goto IL_05e7;
	}

IL_05e6:
	{
		G_B64_0 = 1;
	}

IL_05e7:
	{
		V_36 = (bool)G_B64_0;
		bool L_250 = V_36;
		if (!L_250)
		{
			goto IL_060f;
		}
	}
	{
		RuntimeObject* L_251 = __this->get_logger_6();
		NullCheck(L_251);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>::Error(System.String,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var)), L_251, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral233E20B74DF410EE0B17D47B5A9BC6922EEC7D75)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC871619C84F41CB3D2E4B5B6C50E81482BD1DD4D)));
		Exception_t * L_252 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_252, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA367F852CA1FC174CE282A0193B19B453FE084CA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_252, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QualityMesher_SplitEncSegs_m84E0D73E180271F42FABC0E6849BCE7C57E2696A_RuntimeMethod_var)));
	}

IL_060f:
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_253 = __this->get_mesh_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_254 = V_8;
		bool L_255 = ___triflaws0;
		NullCheck(L_253);
		int32_t L_256;
		L_256 = Mesh_InsertVertex_m984D754C3AC83DECBE5E4E11FA5DE718B4FF04C5(L_253, L_254, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_3), (bool)1, L_255, /*hidden argument*/NULL);
		V_9 = L_256;
		int32_t L_257 = V_9;
		if (!L_257)
		{
			goto IL_0632;
		}
	}
	{
		int32_t L_258 = V_9;
		G_B69_0 = ((((int32_t)((((int32_t)L_258) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0633;
	}

IL_0632:
	{
		G_B69_0 = 0;
	}

IL_0633:
	{
		V_37 = (bool)G_B69_0;
		bool L_259 = V_37;
		if (!L_259)
		{
			goto IL_065b;
		}
	}
	{
		RuntimeObject* L_260 = __this->get_logger_6();
		NullCheck(L_260);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>::Error(System.String,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var)), L_260, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE22EE66ACF9AC04BB6E8A0701BB8B87ECB1FB484)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC871619C84F41CB3D2E4B5B6C50E81482BD1DD4D)));
		Exception_t * L_261 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_261, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE22EE66ACF9AC04BB6E8A0701BB8B87ECB1FB484)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_261, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QualityMesher_SplitEncSegs_m84E0D73E180271F42FABC0E6849BCE7C57E2696A_RuntimeMethod_var)));
	}

IL_065b:
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_262 = __this->get_mesh_3();
		NullCheck(L_262);
		int32_t L_263 = L_262->get_steinerleft_19();
		V_38 = (bool)((((int32_t)L_263) > ((int32_t)0))? 1 : 0);
		bool L_264 = V_38;
		if (!L_264)
		{
			goto IL_0684;
		}
	}
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_265 = __this->get_mesh_3();
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_266 = L_265;
		NullCheck(L_266);
		int32_t L_267 = L_266->get_steinerleft_19();
		NullCheck(L_266);
		L_266->set_steinerleft_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_267, (int32_t)1)));
	}

IL_0684:
	{
		int32_t L_268;
		L_268 = QualityMesher_CheckSeg4Encroach_m1A87F52F5AD575C13D69B73603A81DB6E8E058E7(__this, (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_3), /*hidden argument*/NULL);
		Osub_Next_m69E9CF57A957523C9560BD53136028CD86AE6B45((Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_3), /*hidden argument*/NULL);
		int32_t L_269;
		L_269 = QualityMesher_CheckSeg4Encroach_m1A87F52F5AD575C13D69B73603A81DB6E8E058E7(__this, (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_3), /*hidden argument*/NULL);
	}

IL_069f:
	{
		BadSubseg_t54B96F38195FCE239A3AE169359232BF03A3852A * L_270 = V_4;
		NullCheck(L_270);
		L_270->set_org_1((Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)NULL);
	}

IL_06a8:
	{
		Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * L_271 = __this->get_badsubsegs_1();
		NullCheck(L_271);
		int32_t L_272;
		L_272 = Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_inline(L_271, /*hidden argument*/Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_RuntimeMethod_var);
		V_39 = (bool)((((int32_t)L_272) > ((int32_t)0))? 1 : 0);
		bool L_273 = V_39;
		if (L_273)
		{
			goto IL_0026;
		}
	}

IL_06bf:
	{
		return;
	}
}
// System.Void TriangleNet.Meshing.QualityMesher::TallyFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_TallyFaces_mA0E3320A4B1683A4557B414D148B9E9150548E15 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		(&V_0)->set_orient_1(0);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_0 = __this->get_mesh_3();
		NullCheck(L_0);
		TrianglePool_tC7AC643965349664911DB95B705637B6F4C64FD7 * L_1 = L_0->get_triangles_4();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = TrianglePool_GetEnumerator_mEB6D2A03906B1D2B074F1E3DF7F33BF269E53411(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0025:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4;
			L_4 = InterfaceFuncInvoker0< Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>::get_Current() */, IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = V_2;
			(&V_0)->set_tri_0(L_5);
			QualityMesher_TestTriangle_mDCDCF5E19B0FDC98CD9A585E6B30A521AA17930C(__this, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		}

IL_003f:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			if (!L_8)
			{
				goto IL_0053;
			}
		}

IL_004c:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		return;
	}
}
// System.Void TriangleNet.Meshing.QualityMesher::SplitTriangle(TriangleNet.Meshing.Data.BadTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_SplitTriangle_mF128D9226ADCCD04703885C418BF4202E8D5D530 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * ___badtri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFE911E8AC402B5FBA3C81CD015032BBB892BE005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1323025101F434328E1CE93FBFADA5DB3DDF8528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA06C280B0E6AAFD2970729787083CBC48A431BB0);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_1 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_2 = NULL;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_3 = NULL;
	Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * V_4 = NULL;
	double V_5 = 0.0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_13 = NULL;
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		V_5 = (0.0);
		V_6 = (0.0);
		BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * L_0 = ___badtri0;
		NullCheck(L_0);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_1 = L_0->get_poortri_0();
		V_0 = L_1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_2;
		L_2 = Otri_Org_m48027281D3BF962ED45CB9D2F3EF9EB235BF1495((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3;
		L_3 = Otri_Dest_mC91CB4559F0D88C6739E254503B613262A5AA481((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_3;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_4;
		L_4 = Otri_Apex_mF9482C5382B290EA389BFBE7D709FAE0F56F56A7((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
		V_3 = L_4;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_5 = V_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_6 = L_5.get_tri_0();
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Otri_IsDead_mC83C3F128DE68E8AE8518DF130CEFBD11DCDC424(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0075;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_8 = V_1;
		BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * L_9 = ___badtri0;
		NullCheck(L_9);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_10 = L_9->get_org_2();
		bool L_11;
		L_11 = Point_op_Equality_m2114AF7F1C6AC57993521F2065E32E9B969D88AB(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_12 = V_2;
		BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * L_13 = ___badtri0;
		NullCheck(L_13);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_14 = L_13->get_dest_3();
		bool L_15;
		L_15 = Point_op_Equality_m2114AF7F1C6AC57993521F2065E32E9B969D88AB(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_16 = V_3;
		BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * L_17 = ___badtri0;
		NullCheck(L_17);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_18 = L_17->get_apex_4();
		bool L_19;
		L_19 = Point_op_Equality_m2114AF7F1C6AC57993521F2065E32E9B969D88AB(L_16, L_18, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_19));
		goto IL_0076;
	}

IL_0075:
	{
		G_B5_0 = 0;
	}

IL_0076:
	{
		V_9 = (bool)G_B5_0;
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0317;
		}
	}
	{
		V_8 = (bool)0;
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_21 = __this->get_behavior_4();
		NullCheck(L_21);
		bool L_22 = L_21->get_fixedArea_13();
		if (L_22)
		{
			goto IL_009d;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_23 = __this->get_behavior_4();
		NullCheck(L_23);
		bool L_24;
		L_24 = Behavior_get_VarArea_mE5B69713B9AE4AF07B976E650943EB44F0C87799(L_23, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_24));
		goto IL_009e;
	}

IL_009d:
	{
		G_B9_0 = 1;
	}

IL_009e:
	{
		V_10 = (bool)G_B9_0;
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject* L_26 = __this->get_predicates_0();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_27 = V_1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_28 = V_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_29 = V_3;
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_30 = __this->get_behavior_4();
		NullCheck(L_30);
		double L_31 = L_30->get_offconstant_18();
		NullCheck(L_26);
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_32;
		L_32 = InterfaceFuncInvoker6< Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *, double*, double*, double >::Invoke(3 /* TriangleNet.Geometry.Point TriangleNet.IPredicates::FindCircumcenter(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,System.Double&,System.Double&,System.Double) */, IPredicates_t23564BCDC62CAF25AB1E251AED0739DD82878DEE_il2cpp_TypeInfo_var, L_26, L_27, L_28, L_29, (double*)(&V_5), (double*)(&V_6), L_31);
		V_4 = L_32;
		goto IL_00df;
	}

IL_00c7:
	{
		NewLocation_tE8595FA7D691A1D1FA94FAF8B8892018FF4529CB * L_33 = __this->get_newLocation_5();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_34 = V_1;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_35 = V_2;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_36 = V_3;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_37 = V_0;
		NullCheck(L_33);
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_38;
		L_38 = NewLocation_FindLocation_m0F21576C797AD079A280C554106862A42BFBC20C(L_33, L_34, L_35, L_36, (double*)(&V_5), (double*)(&V_6), (bool)1, L_37, /*hidden argument*/NULL);
		V_4 = L_38;
	}

IL_00df:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_39 = V_4;
		NullCheck(L_39);
		double L_40 = L_39->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_41 = V_1;
		NullCheck(L_41);
		double L_42 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_41)->get_x_2();
		if ((!(((double)L_40) == ((double)L_42))))
		{
			goto IL_00fd;
		}
	}
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_43 = V_4;
		NullCheck(L_43);
		double L_44 = L_43->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_45 = V_1;
		NullCheck(L_45);
		double L_46 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_45)->get_y_3();
		if ((((double)L_44) == ((double)L_46)))
		{
			goto IL_013e;
		}
	}

IL_00fd:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_47 = V_4;
		NullCheck(L_47);
		double L_48 = L_47->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_49 = V_2;
		NullCheck(L_49);
		double L_50 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_49)->get_x_2();
		if ((!(((double)L_48) == ((double)L_50))))
		{
			goto IL_011b;
		}
	}
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_51 = V_4;
		NullCheck(L_51);
		double L_52 = L_51->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_53 = V_2;
		NullCheck(L_53);
		double L_54 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_53)->get_y_3();
		if ((((double)L_52) == ((double)L_54)))
		{
			goto IL_013e;
		}
	}

IL_011b:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_55 = V_4;
		NullCheck(L_55);
		double L_56 = L_55->get_x_2();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_57 = V_3;
		NullCheck(L_57);
		double L_58 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_57)->get_x_2();
		if ((!(((double)L_56) == ((double)L_58))))
		{
			goto IL_013b;
		}
	}
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_59 = V_4;
		NullCheck(L_59);
		double L_60 = L_59->get_y_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_61 = V_3;
		NullCheck(L_61);
		double L_62 = ((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_61)->get_y_3();
		G_B19_0 = ((((double)L_60) == ((double)L_62))? 1 : 0);
		goto IL_013c;
	}

IL_013b:
	{
		G_B19_0 = 0;
	}

IL_013c:
	{
		G_B21_0 = G_B19_0;
		goto IL_013f;
	}

IL_013e:
	{
		G_B21_0 = 1;
	}

IL_013f:
	{
		V_11 = (bool)G_B21_0;
		bool L_63 = V_11;
		if (!L_63)
		{
			goto IL_0172;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Log_get_Verbose_mA93BCB438872D26EB2B864FF197A2691637ED4C9_inline(/*hidden argument*/NULL);
		V_12 = L_64;
		bool L_65 = V_12;
		if (!L_65)
		{
			goto IL_016c;
		}
	}
	{
		RuntimeObject* L_66 = __this->get_logger_6();
		NullCheck(L_66);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>::Warning(System.String,System.String) */, ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var, L_66, _stringLiteral1323025101F434328E1CE93FBFADA5DB3DDF8528, _stringLiteralA06C280B0E6AAFD2970729787083CBC48A431BB0);
		V_8 = (bool)1;
	}

IL_016c:
	{
		goto IL_02ec;
	}

IL_0172:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_67 = V_4;
		NullCheck(L_67);
		double L_68 = L_67->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_69 = V_4;
		NullCheck(L_69);
		double L_70 = L_69->get_y_3();
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_71 = __this->get_mesh_3();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_nextras_17();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_73 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)il2cpp_codegen_object_new(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		Vertex__ctor_mCD6917C5503DAFB577D0E0A470129994192BF4ED(L_73, L_68, L_70, 0, L_72, /*hidden argument*/NULL);
		V_13 = L_73;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_74 = V_13;
		NullCheck(L_74);
		L_74->set_type_6(2);
		double L_75 = V_6;
		double L_76 = V_5;
		V_15 = (bool)((((double)L_75) < ((double)L_76))? 1 : 0);
		bool L_77 = V_15;
		if (!L_77)
		{
			goto IL_01b2;
		}
	}
	{
		Otri_Lprev_m091894F9DEC95E06E4432572C677362BA01A2273((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), /*hidden argument*/NULL);
	}

IL_01b2:
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_78 = V_13;
		NullCheck(L_78);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_79 = L_78->get_address_of_tri_7();
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_80 = __this->get_newvertex_tri_7();
		L_79->set_tri_0(L_80);
		il2cpp_codegen_initobj((&V_14), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_81 = __this->get_mesh_3();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_82 = V_13;
		NullCheck(L_81);
		int32_t L_83;
		L_83 = Mesh_InsertVertex_m984D754C3AC83DECBE5E4E11FA5DE718B4FF04C5(L_81, L_82, (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_14), (bool)1, (bool)1, /*hidden argument*/NULL);
		V_7 = L_83;
		int32_t L_84 = V_7;
		V_16 = (bool)((((int32_t)L_84) == ((int32_t)0))? 1 : 0);
		bool L_85 = V_16;
		if (!L_85)
		{
			goto IL_0299;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_86 = V_13;
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_87 = __this->get_mesh_3();
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_88 = L_87;
		NullCheck(L_88);
		int32_t L_89 = L_88->get_hash_vtx_7();
		V_17 = L_89;
		int32_t L_90 = V_17;
		NullCheck(L_88);
		L_88->set_hash_vtx_7(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1)));
		int32_t L_91 = V_17;
		NullCheck(L_86);
		L_86->set_hash_4(L_91);
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_92 = V_13;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_93 = V_13;
		NullCheck(L_93);
		int32_t L_94 = L_93->get_hash_4();
		NullCheck(L_92);
		((Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)L_92)->set_id_0(L_94);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_95 = __this->get_mesh_3();
		NullCheck(L_95);
		int32_t L_96 = L_95->get_nextras_17();
		V_18 = (bool)((((int32_t)L_96) > ((int32_t)0))? 1 : 0);
		bool L_97 = V_18;
		if (!L_97)
		{
			goto IL_0253;
		}
	}
	{
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_98 = V_13;
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_99 = V_13;
		NullCheck(L_99);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 * L_100 = L_99->get_address_of_tri_7();
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_101 = L_100->get_tri_0();
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_102 = __this->get_mesh_3();
		NullCheck(L_102);
		int32_t L_103 = L_102->get_nextras_17();
		Interpolation_InterpolateAttributes_mD82444D63246924F1733E9FA68AD96B78C4ED7AE(L_98, L_101, L_103, /*hidden argument*/NULL);
	}

IL_0253:
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_104 = __this->get_mesh_3();
		NullCheck(L_104);
		Dictionary_2_tD478D2A334F10686F2F3B758CFD2304820933CB9 * L_105 = L_104->get_vertices_6();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_106 = V_13;
		NullCheck(L_106);
		int32_t L_107 = L_106->get_hash_4();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_108 = V_13;
		NullCheck(L_105);
		Dictionary_2_Add_mFE911E8AC402B5FBA3C81CD015032BBB892BE005(L_105, L_107, L_108, /*hidden argument*/Dictionary_2_Add_mFE911E8AC402B5FBA3C81CD015032BBB892BE005_RuntimeMethod_var);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_109 = __this->get_mesh_3();
		NullCheck(L_109);
		int32_t L_110 = L_109->get_steinerleft_19();
		V_19 = (bool)((((int32_t)L_110) > ((int32_t)0))? 1 : 0);
		bool L_111 = V_19;
		if (!L_111)
		{
			goto IL_0296;
		}
	}
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_112 = __this->get_mesh_3();
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_113 = L_112;
		NullCheck(L_113);
		int32_t L_114 = L_113->get_steinerleft_19();
		NullCheck(L_113);
		L_113->set_steinerleft_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_114, (int32_t)1)));
	}

IL_0296:
	{
		goto IL_02eb;
	}

IL_0299:
	{
		int32_t L_115 = V_7;
		V_20 = (bool)((((int32_t)L_115) == ((int32_t)1))? 1 : 0);
		bool L_116 = V_20;
		if (!L_116)
		{
			goto IL_02b4;
		}
	}
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_117 = __this->get_mesh_3();
		NullCheck(L_117);
		Mesh_UndoVertex_m9C0898A139CF4D118FC35BA828BA5086B5A79C26(L_117, /*hidden argument*/NULL);
		goto IL_02eb;
	}

IL_02b4:
	{
		int32_t L_118 = V_7;
		V_21 = (bool)((((int32_t)L_118) == ((int32_t)2))? 1 : 0);
		bool L_119 = V_21;
		if (!L_119)
		{
			goto IL_02c3;
		}
	}
	{
		goto IL_02eb;
	}

IL_02c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		bool L_120;
		L_120 = Log_get_Verbose_mA93BCB438872D26EB2B864FF197A2691637ED4C9_inline(/*hidden argument*/NULL);
		V_22 = L_120;
		bool L_121 = V_22;
		if (!L_121)
		{
			goto IL_02ea;
		}
	}
	{
		RuntimeObject* L_122 = __this->get_logger_6();
		NullCheck(L_122);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>::Warning(System.String,System.String) */, ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var, L_122, _stringLiteral1323025101F434328E1CE93FBFADA5DB3DDF8528, _stringLiteralA06C280B0E6AAFD2970729787083CBC48A431BB0);
		V_8 = (bool)1;
	}

IL_02ea:
	{
	}

IL_02eb:
	{
	}

IL_02ec:
	{
		bool L_123 = V_8;
		V_23 = L_123;
		bool L_124 = V_23;
		if (!L_124)
		{
			goto IL_0316;
		}
	}
	{
		RuntimeObject* L_125 = __this->get_logger_6();
		NullCheck(L_125);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>::Error(System.String,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var)), L_125, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC71F94ACE0C88ACCF022CE979C4E3DDB182B58D5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA06C280B0E6AAFD2970729787083CBC48A431BB0)));
		Exception_t * L_126 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_126, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF93FD07B7FA75F795C27508A326BC5630A48EB11)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_126, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QualityMesher_SplitTriangle_mF128D9226ADCCD04703885C418BF4202E8D5D530_RuntimeMethod_var)));
	}

IL_0316:
	{
	}

IL_0317:
	{
		return;
	}
}
// System.Void TriangleNet.Meshing.QualityMesher::EnforceQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_EnforceQuality_m8E5E511F6BCE17A0E026ECC8A0B6B1F429069FB6 (QualityMesher_tDE2D3E532B4B4FAEB24E7EA55FCF843CA6EFBB64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47DBF536420C8C59F97BDBF94213B21ECA2F7D68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0638EADE42E5C97E20A2FA73E4D48D397CA23FD);
		s_Il2CppMethodInitialized = true;
	}
	BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	{
		QualityMesher_TallyEncs_m03686BE888432E0C2F0A2498246E17562EF38C33(__this, /*hidden argument*/NULL);
		QualityMesher_SplitEncSegs_m84E0D73E180271F42FABC0E6849BCE7C57E2696A(__this, (bool)0, /*hidden argument*/NULL);
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_0 = __this->get_behavior_4();
		NullCheck(L_0);
		double L_1;
		L_1 = Behavior_get_MinAngle_m93B71E21C4108C459183D6E7EE4E5739E127B980(L_0, /*hidden argument*/NULL);
		if ((((double)L_1) > ((double)(0.0))))
		{
			goto IL_0050;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_2 = __this->get_behavior_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = Behavior_get_VarArea_mE5B69713B9AE4AF07B976E650943EB44F0C87799(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0050;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_4 = __this->get_behavior_4();
		NullCheck(L_4);
		bool L_5 = L_4->get_fixedArea_13();
		if (L_5)
		{
			goto IL_0050;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_6 = __this->get_behavior_4();
		NullCheck(L_6);
		Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * L_7;
		L_7 = Behavior_get_UserTest_m88D08B5256CF00A3F0FABD7EE6F1DC7D6867E8EA(L_6, /*hidden argument*/NULL);
		G_B5_0 = ((!(((RuntimeObject*)(Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 1;
	}

IL_0051:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00ce;
		}
	}
	{
		QualityMesher_TallyFaces_mA0E3320A4B1683A4557B414D148B9E9150548E15(__this, /*hidden argument*/NULL);
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_9 = __this->get_mesh_3();
		NullCheck(L_9);
		L_9->set_checkquality_21((bool)1);
		goto IL_00aa;
	}

IL_006b:
	{
		BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * L_10 = __this->get_queue_2();
		NullCheck(L_10);
		BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * L_11;
		L_11 = BadTriQueue_Dequeue_mC1E4C8831F359E5AFDFF42D8BB77901FC690DBED(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * L_12 = V_0;
		QualityMesher_SplitTriangle_mF128D9226ADCCD04703885C418BF4202E8D5D530(__this, L_12, /*hidden argument*/NULL);
		Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * L_13 = __this->get_badsubsegs_1();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_inline(L_13, /*hidden argument*/Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00a9;
		}
	}
	{
		BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * L_16 = __this->get_queue_2();
		BadTriangle_tA1848DF23E6993004213C44CB2551F35D793EB06 * L_17 = V_0;
		NullCheck(L_16);
		BadTriQueue_Enqueue_m536863CB4684602737C939985BD69528ACB188E6(L_16, L_17, /*hidden argument*/NULL);
		QualityMesher_SplitEncSegs_m84E0D73E180271F42FABC0E6849BCE7C57E2696A(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_00a9:
	{
	}

IL_00aa:
	{
		BadTriQueue_tD214F20512EE921DACA12B1A9CD9B8C51D95DA07 * L_18 = __this->get_queue_2();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = BadTriQueue_get_Count_mEC85E2DE873D11D0D2B5A03AD9FFFFC41ABFE1A6(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_20 = __this->get_mesh_3();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_steinerleft_19();
		G_B13_0 = ((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B13_0 = 0;
	}

IL_00c9:
	{
		V_3 = (bool)G_B13_0;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_006b;
		}
	}
	{
	}

IL_00ce:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Log_get_Verbose_mA93BCB438872D26EB2B864FF197A2691637ED4C9_inline(/*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0100;
		}
	}
	{
		Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2 * L_24 = __this->get_behavior_4();
		NullCheck(L_24);
		bool L_25;
		L_25 = Behavior_get_ConformingDelaunay_mD63F63D5DF9AF3816D108FF84670DDFC5C8A1F23(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0100;
		}
	}
	{
		Queue_1_tE8C54AE506824FD667F0DE7E6570766AEEB76E98 * L_26 = __this->get_badsubsegs_1();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_inline(L_26, /*hidden argument*/Queue_1_get_Count_mE5ECD55A16D3B1E11D9D363903DB4F695B685910_RuntimeMethod_var);
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * L_28 = __this->get_mesh_3();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_steinerleft_19();
		G_B20_0 = ((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B20_0 = 0;
	}

IL_0101:
	{
		V_4 = (bool)G_B20_0;
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_31 = __this->get_logger_6();
		NullCheck(L_31);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>::Warning(System.String,System.String) */, ILog_1_t01D22BF4EF8F33E518D725B22C5F2C92C1F97ECF_il2cpp_TypeInfo_var, L_31, _stringLiteral47DBF536420C8C59F97BDBF94213B21ECA2F7D68, _stringLiteralF0638EADE42E5C97E20A2FA73E4D48D397CA23FD);
	}

IL_011f:
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
// System.Double TriangleNet.Meshing.QualityOptions::get_MaximumAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QualityOptions_get_MaximumAngle_mA2D29A8BEC2EE2722CB44D2039CDF2FEA0B9C44C (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CMaximumAngleU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Double TriangleNet.Meshing.QualityOptions::get_MinimumAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QualityOptions_get_MinimumAngle_m3E83BF7091D2043B8FA901970B22A0F3CC929042 (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CMinimumAngleU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Double TriangleNet.Meshing.QualityOptions::get_MaximumArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QualityOptions_get_MaximumArea_m6A15C115B021E467D6A20AEB960CA4CFD1AC8917 (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CMaximumAreaU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean> TriangleNet.Meshing.QualityOptions::get_UserTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * QualityOptions_get_UserTest_mC959A07AAE40E40F4D4B4FE229CF55928FC06AF5 (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * L_0 = __this->get_U3CUserTestU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Boolean TriangleNet.Meshing.QualityOptions::get_VariableArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QualityOptions_get_VariableArea_m808C194D46BA7BA9D86BB555D456CE5BA078BAB0 (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CVariableAreaU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Int32 TriangleNet.Meshing.QualityOptions::get_SteinerPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualityOptions_get_SteinerPoints_m7D14C075B0107749B3B7D2392FA3ED62AA6481F4 (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSteinerPointsU3Ek__BackingField_5();
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
// System.Void TriangleNet.Geometry.Rectangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m699F6C4B902ED45538B53FF17E6F779CB7D733C4 (Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		double L_0 = (1.7976931348623157E+308);
		V_0 = L_0;
		__this->set_ymin_1(L_0);
		double L_1 = V_0;
		__this->set_xmin_0(L_1);
		double L_2 = (-1.7976931348623157E+308);
		V_0 = L_2;
		__this->set_ymax_3(L_2);
		double L_3 = V_0;
		__this->set_xmax_2(L_3);
		return;
	}
}
// System.Void TriangleNet.Geometry.Rectangle::Expand(TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_Expand_m9CBC60D962C559D0B00690A0209C826E21B15EB4 (Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->get_xmin_0();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_1 = ___p0;
		NullCheck(L_1);
		double L_2 = L_1->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9(L_0, L_2, /*hidden argument*/NULL);
		__this->set_xmin_0(L_3);
		double L_4 = __this->get_ymin_1();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_5 = ___p0;
		NullCheck(L_5);
		double L_6 = L_5->get_y_3();
		double L_7;
		L_7 = Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9(L_4, L_6, /*hidden argument*/NULL);
		__this->set_ymin_1(L_7);
		double L_8 = __this->get_xmax_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_9 = ___p0;
		NullCheck(L_9);
		double L_10 = L_9->get_x_2();
		double L_11;
		L_11 = Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6(L_8, L_10, /*hidden argument*/NULL);
		__this->set_xmax_2(L_11);
		double L_12 = __this->get_ymax_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_13 = ___p0;
		NullCheck(L_13);
		double L_14 = L_13->get_y_3();
		double L_15;
		L_15 = Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6(L_12, L_14, /*hidden argument*/NULL);
		__this->set_ymax_3(L_15);
		return;
	}
}
// System.Void TriangleNet.Geometry.Rectangle::Expand(System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_Expand_m23A3D072E723E503F3FCC893F1C254A164236C64 (Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * __this, List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * ___vertices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB01B871588B5349705854C7324E254065C3AB734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0E1983241281320035746DA5EA265BC7C7B5731B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8B5701BA3AF333A9E380BE7892F18DBA33A256FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA9519E9E3DB44ACB125C355349B202C1FE7885C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_0 = ___vertices0;
		NullCheck(L_0);
		Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A  L_1;
		L_1 = List_1_GetEnumerator_mA9519E9E3DB44ACB125C355349B202C1FE7885C9(L_0, /*hidden argument*/List_1_GetEnumerator_mA9519E9E3DB44ACB125C355349B202C1FE7885C9_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001d;
		}

IL_000b:
		{
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_2;
			L_2 = Enumerator_get_Current_m8B5701BA3AF333A9E380BE7892F18DBA33A256FA_inline((Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8B5701BA3AF333A9E380BE7892F18DBA33A256FA_RuntimeMethod_var);
			V_1 = L_2;
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_3 = V_1;
			Rectangle_Expand_m9CBC60D962C559D0B00690A0209C826E21B15EB4(__this, L_3, /*hidden argument*/NULL);
		}

IL_001d:
		{
			bool L_4;
			L_4 = Enumerator_MoveNext_m0E1983241281320035746DA5EA265BC7C7B5731B((Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0E1983241281320035746DA5EA265BC7C7B5731B_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000b;
			}
		}

IL_0026:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB01B871588B5349705854C7324E254065C3AB734((Enumerator_tEDD3786D968FF7BEEE6082FDE918A87089E1341A *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB01B871588B5349705854C7324E254065C3AB734_RuntimeMethod_var);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		return;
	}
}
// System.Boolean TriangleNet.Geometry.Rectangle::Contains(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_mD32362C130CE13FB67A6C8E23574D5EA51E8853E (Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * __this, double ___x0, double ___y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		double L_0 = ___x0;
		double L_1 = __this->get_xmin_0();
		if ((!(((double)L_0) >= ((double)L_1))))
		{
			goto IL_002a;
		}
	}
	{
		double L_2 = ___x0;
		double L_3 = __this->get_xmax_2();
		if ((!(((double)L_2) <= ((double)L_3))))
		{
			goto IL_002a;
		}
	}
	{
		double L_4 = ___y1;
		double L_5 = __this->get_ymin_1();
		if ((!(((double)L_4) >= ((double)L_5))))
		{
			goto IL_002a;
		}
	}
	{
		double L_6 = ___y1;
		double L_7 = __this->get_ymax_3();
		G_B5_0 = ((((int32_t)((!(((double)L_6) <= ((double)L_7)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		V_0 = (bool)G_B5_0;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean TriangleNet.Geometry.Rectangle::Contains(TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Contains_m7B4F7B15FCDC1CC14F8479462930CE7A4926AC9E (Rectangle_t3930338C3E5C62B3CA9876799DE24B7DEFFD5B83 * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pt0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_0 = ___pt0;
		NullCheck(L_0);
		double L_1 = L_0->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_2 = ___pt0;
		NullCheck(L_2);
		double L_3 = L_2->get_y_3();
		bool L_4;
		L_4 = Rectangle_Contains_mD32362C130CE13FB67A6C8E23574D5EA51E8853E(__this, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_0;
		return L_5;
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
// System.Void TriangleNet.Meshing.Iterators.RegionIterator::.ctor(TriangleNet.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionIterator__ctor_mBAB31D54AA828BA4B8920DB687969C58E0D28ED3 (RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9 * __this, Mesh_t694C1CBFCA300A151481C3125FED8FF25AB3166B * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBBBB2B4431CB47912AE3CAED43A018A1773639D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * L_0 = (List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A *)il2cpp_codegen_object_new(List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A_il2cpp_TypeInfo_var);
		List_1__ctor_mBBBB2B4431CB47912AE3CAED43A018A1773639D3(L_0, /*hidden argument*/List_1__ctor_mBBBB2B4431CB47912AE3CAED43A018A1773639D3_RuntimeMethod_var);
		__this->set_region_0(L_0);
		return;
	}
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator::Process(TriangleNet.Topology.Triangle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionIterator_Process_m3F57E1F63F0107593812C7334B69462F6D08031F (RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___triangle0, int32_t ___boundary1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9FBA8B363DC35EE0D5DE5FA6352CB956EFB35C64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CProcessU3Eb__0_m9D7177A56555A884127520D3C1E15DED9776CF1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E * L_0 = (U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mE27EEE1A1133AD3DA60CFE655E54B5EED9D8D3EB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E * L_1 = V_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_2 = ___triangle0;
		NullCheck(L_1);
		L_1->set_triangle_0(L_2);
		U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E * L_3 = V_0;
		NullCheck(L_3);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_4 = L_3->get_triangle_0();
		U3CU3Ec__DisplayClass2_0_tBCD5D3FDC6CEC1AB6855A7975A1F280448306E1E * L_5 = V_0;
		Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * L_6 = (Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 *)il2cpp_codegen_object_new(Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2_il2cpp_TypeInfo_var);
		Action_1__ctor_m9FBA8B363DC35EE0D5DE5FA6352CB956EFB35C64(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CProcessU3Eb__0_m9D7177A56555A884127520D3C1E15DED9776CF1D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9FBA8B363DC35EE0D5DE5FA6352CB956EFB35C64_RuntimeMethod_var);
		int32_t L_7 = ___boundary1;
		RegionIterator_Process_m3133058E20D7E4B49791E29C7A68F010B5889C9F(__this, L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator::Process(TriangleNet.Topology.Triangle,System.Action`1<TriangleNet.Topology.Triangle>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionIterator_Process_m3133058E20D7E4B49791E29C7A68F010B5889C9F (RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9 * __this, Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * ___triangle0, Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * ___action1, int32_t ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF90E3A9B566F5593BF41AD410EC17E9EE55B51D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3CF6E0D9C84498A837D7AA00C27670994C37B13B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC37EDCCD8122CA80C27D075FAE0354E836A075FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CProcessU3Eb__3_0_m5183BE7354C0190E7E8B1CB0757ECE3E05EF5217_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CProcessU3Eb__1_mB36ADEFF5E662D133C6EF3156E68751BB9172F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * G_B8_0 = NULL;
	Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * G_B8_1 = NULL;
	RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9 * G_B8_2 = NULL;
	Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * G_B7_0 = NULL;
	Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * G_B7_1 = NULL;
	RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9 * G_B7_2 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 * L_0 = (U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_mD7ABC9B865D62E64624A6A56B04BA78EA609C8DC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 * L_1 = V_0;
		int32_t L_2 = ___boundary2;
		NullCheck(L_1);
		L_1->set_boundary_0(L_2);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_3 = ___triangle0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_id_1();
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_001f;
		}
	}
	{
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = ___triangle0;
		IL2CPP_RUNTIME_CLASS_INIT(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Otri_IsDead_mC83C3F128DE68E8AE8518DF130CEFBD11DCDC424(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_1 = (bool)G_B3_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0095;
	}

IL_0027:
	{
		List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * L_8 = __this->get_region_0();
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_9 = ___triangle0;
		NullCheck(L_8);
		List_1_Add_m3CF6E0D9C84498A837D7AA00C27670994C37B13B(L_8, L_9, /*hidden argument*/List_1_Add_m3CF6E0D9C84498A837D7AA00C27670994C37B13B_RuntimeMethod_var);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_10 = ___triangle0;
		NullCheck(L_10);
		L_10->set_infected_7((bool)1);
		U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_boundary_0();
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * L_14 = ___action1;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var);
		Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * L_15 = ((U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * L_16 = L_15;
		G_B7_0 = L_16;
		G_B7_1 = L_14;
		G_B7_2 = __this;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = L_14;
			G_B8_2 = __this;
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var);
		U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD * L_17 = ((U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * L_18 = (Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD *)il2cpp_codegen_object_new(Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD_il2cpp_TypeInfo_var);
		Func_2__ctor_mF90E3A9B566F5593BF41AD410EC17E9EE55B51D7(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3CProcessU3Eb__3_0_m5183BE7354C0190E7E8B1CB0757ECE3E05EF5217_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF90E3A9B566F5593BF41AD410EC17E9EE55B51D7_RuntimeMethod_var);
		Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * L_19 = L_18;
		((U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFBC29D142C15BDF90EF6D5388E555AAE42D19DCD_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_19);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_006a:
	{
		NullCheck(G_B8_2);
		RegionIterator_ProcessRegion_m7FD9215526AE024C428D7F0D7D461C16F0379CC2(G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_0089;
	}

IL_0073:
	{
		Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * L_20 = ___action1;
		U3CU3Ec__DisplayClass3_0_t0B45AF9B43D233CBCFE424DA600D23AFF9167AF8 * L_21 = V_0;
		Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * L_22 = (Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD *)il2cpp_codegen_object_new(Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD_il2cpp_TypeInfo_var);
		Func_2__ctor_mF90E3A9B566F5593BF41AD410EC17E9EE55B51D7(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3CProcessU3Eb__1_mB36ADEFF5E662D133C6EF3156E68751BB9172F8B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF90E3A9B566F5593BF41AD410EC17E9EE55B51D7_RuntimeMethod_var);
		RegionIterator_ProcessRegion_m7FD9215526AE024C428D7F0D7D461C16F0379CC2(__this, L_20, L_22, /*hidden argument*/NULL);
	}

IL_0089:
	{
		List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * L_23 = __this->get_region_0();
		NullCheck(L_23);
		List_1_Clear_mC37EDCCD8122CA80C27D075FAE0354E836A075FD(L_23, /*hidden argument*/List_1_Clear_mC37EDCCD8122CA80C27D075FAE0354E836A075FD_RuntimeMethod_var);
	}

IL_0095:
	{
		return;
	}
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator::ProcessRegion(System.Action`1<TriangleNet.Topology.Triangle>,System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionIterator_ProcessRegion_m7FD9215526AE024C428D7F0D7D461C16F0379CC2 (RegionIterator_tF5337B1F49DB09050F7671516B30ADB83ABB17A9 * __this, Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * ___action0, Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * ___protector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m92ED849BB80F52F93E2A9ECF1ACA7C565BA4C781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7A78E1BF58D4F587FF66F22E162DDB1E843164B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1FED3612715EDFC96917D3EE349AD84CA125CEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2F93A9F525F0C6A50A544849D9868F93EC018472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m5C81050FBF537178A73C1267770D224CE815B192_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3CF6E0D9C84498A837D7AA00C27670994C37B13B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC37EDCCD8122CA80C27D075FAE0354E836A075FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m97D5606CCE6CCE5EDC5110EC0804875BDD4A3CA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5968B1BCE589DAEFB28B829434C7C39773663F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0ECA3A5653E521522FED28F4E0B88DBD61146FE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B6_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 ));
		il2cpp_codegen_initobj((&V_2), sizeof(Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 ));
		V_3 = 0;
		goto IL_00c9;
	}

IL_0020:
	{
		List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * L_0 = __this->get_region_0();
		int32_t L_1 = V_3;
		NullCheck(L_0);
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_2;
		L_2 = List_1_get_Item_m0ECA3A5653E521522FED28F4E0B88DBD61146FE3_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m0ECA3A5653E521522FED28F4E0B88DBD61146FE3_RuntimeMethod_var);
		(&V_0)->set_tri_0(L_2);
		Action_1_tB473F7CC7D6B8EE2E8D22275806B087E402182E2 * L_3 = ___action0;
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_4 = V_0;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_5 = L_4.get_tri_0();
		NullCheck(L_3);
		Action_1_Invoke_m92ED849BB80F52F93E2A9ECF1ACA7C565BA4C781(L_3, L_5, /*hidden argument*/Action_1_Invoke_m92ED849BB80F52F93E2A9ECF1ACA7C565BA4C781_RuntimeMethod_var);
		(&V_0)->set_orient_1(0);
		goto IL_00b5;
	}

IL_004b:
	{
		Otri_Sym_mAB5C70B868294EE42114BD5B1FD24CA7B5991D92((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		Otri_Pivot_m21ADB4B7C508A313DA4FE91920FDFD7BC079AC35((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_0), (Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677 *)(&V_2), /*hidden argument*/NULL);
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_6 = V_1;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_7 = L_6.get_tri_0();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_id_1();
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0085;
		}
	}
	{
		bool L_9;
		L_9 = Otri_IsInfected_m5BF69E20C96793295C28217252E1DC4F8FF999DD((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0085;
		}
	}
	{
		Func_2_tCD73C3C1BD05DA6FAF3DA5BF3A91B3A2778DBBAD * L_10 = ___protector1;
		Osub_t7C05D881496D6CBB6607A29AA264AFC57372E677  L_11 = V_2;
		SubSegment_tDF133F25F0DC667C5FDC2ED9571F03B28636959A * L_12 = L_11.get_seg_0();
		NullCheck(L_10);
		bool L_13;
		L_13 = Func_2_Invoke_m5C81050FBF537178A73C1267770D224CE815B192(L_10, L_12, /*hidden argument*/Func_2_Invoke_m5C81050FBF537178A73C1267770D224CE815B192_RuntimeMethod_var);
		G_B6_0 = ((int32_t)(L_13));
		goto IL_0086;
	}

IL_0085:
	{
		G_B6_0 = 0;
	}

IL_0086:
	{
		V_4 = (bool)G_B6_0;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00a8;
		}
	}
	{
		Otri_Infect_m90CFE2928C1F744EA9F0B65026C38ADA9EE4285E((Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93 *)(&V_1), /*hidden argument*/NULL);
		List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * L_15 = __this->get_region_0();
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_16 = V_1;
		Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_17 = L_16.get_tri_0();
		NullCheck(L_15);
		List_1_Add_m3CF6E0D9C84498A837D7AA00C27670994C37B13B(L_15, L_17, /*hidden argument*/List_1_Add_m3CF6E0D9C84498A837D7AA00C27670994C37B13B_RuntimeMethod_var);
	}

IL_00a8:
	{
		int32_t* L_18 = (&V_0)->get_address_of_orient_1();
		int32_t* L_19 = L_18;
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00b5:
	{
		Otri_t83E0AD128DAE4EBB4B876AE731F19836371D2E93  L_21 = V_0;
		int32_t L_22 = L_21.get_orient_1();
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)3))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_3;
		List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * L_26 = __this->get_region_0();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m5968B1BCE589DAEFB28B829434C7C39773663F61_inline(L_26, /*hidden argument*/List_1_get_Count_m5968B1BCE589DAEFB28B829434C7C39773663F61_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * L_29 = __this->get_region_0();
		NullCheck(L_29);
		Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869  L_30;
		L_30 = List_1_GetEnumerator_m97D5606CCE6CCE5EDC5110EC0804875BDD4A3CA7(L_29, /*hidden argument*/List_1_GetEnumerator_m97D5606CCE6CCE5EDC5110EC0804875BDD4A3CA7_RuntimeMethod_var);
		V_7 = L_30;
	}

IL_00ee:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0103;
		}

IL_00f0:
		{
			Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_31;
			L_31 = Enumerator_get_Current_m2F93A9F525F0C6A50A544849D9868F93EC018472_inline((Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 *)(&V_7), /*hidden argument*/Enumerator_get_Current_m2F93A9F525F0C6A50A544849D9868F93EC018472_RuntimeMethod_var);
			V_8 = L_31;
			Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_32 = V_8;
			NullCheck(L_32);
			L_32->set_infected_7((bool)0);
		}

IL_0103:
		{
			bool L_33;
			L_33 = Enumerator_MoveNext_m1FED3612715EDFC96917D3EE349AD84CA125CEA5((Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m1FED3612715EDFC96917D3EE349AD84CA125CEA5_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_00f0;
			}
		}

IL_010c:
		{
			IL2CPP_LEAVE(0x11D, FINALLY_010e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010e;
	}

FINALLY_010e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7A78E1BF58D4F587FF66F22E162DDB1E843164B1((Enumerator_tC33484AB2268D3BECE9FB7CD67AB0A83621CC869 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m7A78E1BF58D4F587FF66F22E162DDB1E843164B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(270)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(270)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11D, IL_011d)
	}

IL_011d:
	{
		List_1_t69ADF6C157523B7F998C3815F0EAD989E1B8C14A * L_34 = __this->get_region_0();
		NullCheck(L_34);
		List_1_Clear_mC37EDCCD8122CA80C27D075FAE0354E836A075FD(L_34, /*hidden argument*/List_1_Clear_mC37EDCCD8122CA80C27D075FAE0354E836A075FD_RuntimeMethod_var);
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
// TriangleNet.RobustPredicates TriangleNet.RobustPredicates::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * RobustPredicates_get_Default_m6B2D1F4BFA42232CD3811AFA687BA72CB54C20FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * L_0 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get__default_1();
		V_0 = (bool)((((RuntimeObject*)(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_creationLock_0();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
			RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * L_4 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get__default_1();
			V_2 = (bool)((((RuntimeObject*)(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_0028:
		{
			RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * L_6 = (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D *)il2cpp_codegen_object_new(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
			RobustPredicates__ctor_m002AF1CBBEBB7D07FCE72CEE3F03F23113D7E7F1(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
			((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set__default_1(L_6);
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * L_8 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get__default_1();
		V_3 = L_8;
		goto IL_0048;
	}

IL_0048:
	{
		RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * L_9 = V_3;
		return L_9;
	}
}
// System.Void TriangleNet.RobustPredicates::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates__cctor_m886CEEC9F3DB85993855F3115565F88C2FB5BE8A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_creationLock_0(L_0);
		V_3 = (bool)1;
		V_0 = (0.5);
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_epsilon_2((1.0));
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_splitter_3((1.0));
		V_1 = (1.0);
	}

IL_003d:
	{
		double L_1 = V_1;
		V_2 = L_1;
		double L_2 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_3 = V_0;
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_epsilon_2(((double)il2cpp_codegen_multiply((double)L_2, (double)L_3)));
		bool L_4 = V_3;
		V_4 = L_4;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		double L_6 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_splitter_3(((double)il2cpp_codegen_multiply((double)L_6, (double)(2.0))));
	}

IL_0069:
	{
		bool L_7 = V_3;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		double L_8 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		V_1 = ((double)il2cpp_codegen_add((double)(1.0), (double)L_8));
		double L_9 = V_1;
		if ((((double)L_9) == ((double)(1.0))))
		{
			goto IL_0094;
		}
	}
	{
		double L_10 = V_1;
		double L_11 = V_2;
		G_B6_0 = ((((int32_t)((((double)L_10) == ((double)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0095;
	}

IL_0094:
	{
		G_B6_0 = 0;
	}

IL_0095:
	{
		V_5 = (bool)G_B6_0;
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_003d;
		}
	}
	{
		double L_13 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_splitter_3(((double)il2cpp_codegen_add((double)L_13, (double)(1.0))));
		double L_14 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_15 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_resulterrbound_4(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)(3.0), (double)((double)il2cpp_codegen_multiply((double)(8.0), (double)L_14)))), (double)L_15)));
		double L_16 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_17 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_ccwerrboundA_5(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)(3.0), (double)((double)il2cpp_codegen_multiply((double)(16.0), (double)L_16)))), (double)L_17)));
		double L_18 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_19 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_ccwerrboundB_6(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)(2.0), (double)((double)il2cpp_codegen_multiply((double)(12.0), (double)L_18)))), (double)L_19)));
		double L_20 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_21 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_22 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_ccwerrboundC_7(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)(9.0), (double)((double)il2cpp_codegen_multiply((double)(64.0), (double)L_20)))), (double)L_21)), (double)L_22)));
		double L_23 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_24 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_iccerrboundA_8(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)(10.0), (double)((double)il2cpp_codegen_multiply((double)(96.0), (double)L_23)))), (double)L_24)));
		double L_25 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_26 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_iccerrboundB_9(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)(4.0), (double)((double)il2cpp_codegen_multiply((double)(48.0), (double)L_25)))), (double)L_26)));
		double L_27 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_28 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		double L_29 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_epsilon_2();
		((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->set_iccerrboundC_10(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)(44.0), (double)((double)il2cpp_codegen_multiply((double)(576.0), (double)L_27)))), (double)L_28)), (double)L_29)));
		return;
	}
}
// System.Void TriangleNet.RobustPredicates::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates__ctor_m002AF1CBBEBB7D07FCE72CEE3F03F23113D7E7F1 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RobustPredicates_AllocateWorkspace_m5D2D85B716DD5B276C6617CDEDDCF310A59AE798(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double TriangleNet.RobustPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_CounterClockwise_m56542951636095435EAFB298383C9ED9337D1085 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pa0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pb1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	bool V_5 = false;
	double V_6 = 0.0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B14_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->get_CounterClockwiseCount_2();
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CounterClockwiseCount_2(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)((int64_t)1)))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_1 = ___pa0;
		NullCheck(L_1);
		double L_2 = L_1->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_3 = ___pc2;
		NullCheck(L_3);
		double L_4 = L_3->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_5 = ___pb1;
		NullCheck(L_5);
		double L_6 = L_5->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_7 = ___pc2;
		NullCheck(L_7);
		double L_8 = L_7->get_y_3();
		V_0 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_2, (double)L_4)), (double)((double)il2cpp_codegen_subtract((double)L_6, (double)L_8))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_9 = ___pa0;
		NullCheck(L_9);
		double L_10 = L_9->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_11 = ___pc2;
		NullCheck(L_11);
		double L_12 = L_11->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_13 = ___pb1;
		NullCheck(L_13);
		double L_14 = L_13->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_15 = ___pc2;
		NullCheck(L_15);
		double L_16 = L_15->get_x_2();
		V_1 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_10, (double)L_12)), (double)((double)il2cpp_codegen_subtract((double)L_14, (double)L_16))));
		double L_17 = V_0;
		double L_18 = V_1;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_17, (double)L_18));
		bool L_19;
		L_19 = Behavior_get_NoExact_mCDCFEFF0B67EE543B5D67F2167FC7456311731B5_inline(/*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_005e;
		}
	}
	{
		double L_21 = V_2;
		V_6 = L_21;
		goto IL_0117;
	}

IL_005e:
	{
		double L_22 = V_0;
		V_7 = (bool)((((double)L_22) > ((double)(0.0)))? 1 : 0);
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_0098;
		}
	}
	{
		double L_24 = V_1;
		V_8 = (bool)((((int32_t)((!(((double)L_24) <= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_008f;
		}
	}
	{
		double L_26 = V_2;
		V_6 = L_26;
		goto IL_0117;
	}

IL_008f:
	{
		double L_27 = V_0;
		double L_28 = V_1;
		V_3 = ((double)il2cpp_codegen_add((double)L_27, (double)L_28));
		goto IL_00d6;
	}

IL_0098:
	{
		double L_29 = V_0;
		V_9 = (bool)((((double)L_29) < ((double)(0.0)))? 1 : 0);
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00d0;
		}
	}
	{
		double L_31 = V_1;
		V_10 = (bool)((((int32_t)((!(((double)L_31) >= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00c6;
		}
	}
	{
		double L_33 = V_2;
		V_6 = L_33;
		goto IL_0117;
	}

IL_00c6:
	{
		double L_34 = V_0;
		double L_35 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)((-L_34)), (double)L_35));
		goto IL_00d6;
	}

IL_00d0:
	{
		double L_36 = V_2;
		V_6 = L_36;
		goto IL_0117;
	}

IL_00d6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_37 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_ccwerrboundA_5();
		double L_38 = V_3;
		V_4 = ((double)il2cpp_codegen_multiply((double)L_37, (double)L_38));
		double L_39 = V_2;
		double L_40 = V_4;
		if ((((double)L_39) >= ((double)L_40)))
		{
			goto IL_00ef;
		}
	}
	{
		double L_41 = V_2;
		double L_42 = V_4;
		G_B14_0 = ((((int32_t)((!(((double)((-L_41))) >= ((double)L_42)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B14_0 = 1;
	}

IL_00f0:
	{
		V_11 = (bool)G_B14_0;
		bool L_43 = V_11;
		if (!L_43)
		{
			goto IL_00fc;
		}
	}
	{
		double L_44 = V_2;
		V_6 = L_44;
		goto IL_0117;
	}

IL_00fc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		int64_t L_45 = ((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->get_CounterClockwiseAdaptCount_3();
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CounterClockwiseAdaptCount_3(((int64_t)il2cpp_codegen_add((int64_t)L_45, (int64_t)((int64_t)((int64_t)1)))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_46 = ___pa0;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_47 = ___pb1;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_48 = ___pc2;
		double L_49 = V_3;
		double L_50;
		L_50 = RobustPredicates_CounterClockwiseAdapt_m13DAED25B6D1EF247046087A878F0BEAB89A440E(__this, L_46, L_47, L_48, L_49, /*hidden argument*/NULL);
		V_6 = L_50;
		goto IL_0117;
	}

IL_0117:
	{
		double L_51 = V_6;
		return L_51;
	}
}
// System.Double TriangleNet.RobustPredicates::InCircle(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_InCircle_mCA40BC5ECF9A5123F550E121B8DCC20544AA4E2F (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pa0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pb1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pc2, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pd3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	bool V_18 = false;
	double V_19 = 0.0;
	bool V_20 = false;
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->get_InCircleCount_0();
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_InCircleCount_0(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)((int64_t)1)))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_1 = ___pa0;
		NullCheck(L_1);
		double L_2 = L_1->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_3 = ___pd3;
		NullCheck(L_3);
		double L_4 = L_3->get_x_2();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_2, (double)L_4));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_5 = ___pb1;
		NullCheck(L_5);
		double L_6 = L_5->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_7 = ___pd3;
		NullCheck(L_7);
		double L_8 = L_7->get_x_2();
		V_1 = ((double)il2cpp_codegen_subtract((double)L_6, (double)L_8));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_9 = ___pc2;
		NullCheck(L_9);
		double L_10 = L_9->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_11 = ___pd3;
		NullCheck(L_11);
		double L_12 = L_11->get_x_2();
		V_2 = ((double)il2cpp_codegen_subtract((double)L_10, (double)L_12));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_13 = ___pa0;
		NullCheck(L_13);
		double L_14 = L_13->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_15 = ___pd3;
		NullCheck(L_15);
		double L_16 = L_15->get_y_3();
		V_3 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_16));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_17 = ___pb1;
		NullCheck(L_17);
		double L_18 = L_17->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_19 = ___pd3;
		NullCheck(L_19);
		double L_20 = L_19->get_y_3();
		V_4 = ((double)il2cpp_codegen_subtract((double)L_18, (double)L_20));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_21 = ___pc2;
		NullCheck(L_21);
		double L_22 = L_21->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_23 = ___pd3;
		NullCheck(L_23);
		double L_24 = L_23->get_y_3();
		V_5 = ((double)il2cpp_codegen_subtract((double)L_22, (double)L_24));
		double L_25 = V_1;
		double L_26 = V_5;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_25, (double)L_26));
		double L_27 = V_2;
		double L_28 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply((double)L_27, (double)L_28));
		double L_29 = V_0;
		double L_30 = V_0;
		double L_31 = V_3;
		double L_32 = V_3;
		V_12 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_29, (double)L_30)), (double)((double)il2cpp_codegen_multiply((double)L_31, (double)L_32))));
		double L_33 = V_2;
		double L_34 = V_3;
		V_8 = ((double)il2cpp_codegen_multiply((double)L_33, (double)L_34));
		double L_35 = V_0;
		double L_36 = V_5;
		V_9 = ((double)il2cpp_codegen_multiply((double)L_35, (double)L_36));
		double L_37 = V_1;
		double L_38 = V_1;
		double L_39 = V_4;
		double L_40 = V_4;
		V_13 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_37, (double)L_38)), (double)((double)il2cpp_codegen_multiply((double)L_39, (double)L_40))));
		double L_41 = V_0;
		double L_42 = V_4;
		V_10 = ((double)il2cpp_codegen_multiply((double)L_41, (double)L_42));
		double L_43 = V_1;
		double L_44 = V_3;
		V_11 = ((double)il2cpp_codegen_multiply((double)L_43, (double)L_44));
		double L_45 = V_2;
		double L_46 = V_2;
		double L_47 = V_5;
		double L_48 = V_5;
		V_14 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_45, (double)L_46)), (double)((double)il2cpp_codegen_multiply((double)L_47, (double)L_48))));
		double L_49 = V_12;
		double L_50 = V_6;
		double L_51 = V_7;
		double L_52 = V_13;
		double L_53 = V_8;
		double L_54 = V_9;
		double L_55 = V_14;
		double L_56 = V_10;
		double L_57 = V_11;
		V_15 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_49, (double)((double)il2cpp_codegen_subtract((double)L_50, (double)L_51)))), (double)((double)il2cpp_codegen_multiply((double)L_52, (double)((double)il2cpp_codegen_subtract((double)L_53, (double)L_54)))))), (double)((double)il2cpp_codegen_multiply((double)L_55, (double)((double)il2cpp_codegen_subtract((double)L_56, (double)L_57))))));
		bool L_58;
		L_58 = Behavior_get_NoExact_mCDCFEFF0B67EE543B5D67F2167FC7456311731B5_inline(/*hidden argument*/NULL);
		V_18 = L_58;
		bool L_59 = V_18;
		if (!L_59)
		{
			goto IL_00d9;
		}
	}
	{
		double L_60 = V_15;
		V_19 = L_60;
		goto IL_0158;
	}

IL_00d9:
	{
		double L_61 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_62;
		L_62 = fabs(L_61);
		double L_63 = V_7;
		double L_64;
		L_64 = fabs(L_63);
		double L_65 = V_12;
		double L_66 = V_8;
		double L_67;
		L_67 = fabs(L_66);
		double L_68 = V_9;
		double L_69;
		L_69 = fabs(L_68);
		double L_70 = V_13;
		double L_71 = V_10;
		double L_72;
		L_72 = fabs(L_71);
		double L_73 = V_11;
		double L_74;
		L_74 = fabs(L_73);
		double L_75 = V_14;
		V_16 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_62, (double)L_64)), (double)L_65)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_67, (double)L_69)), (double)L_70)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_72, (double)L_74)), (double)L_75))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_76 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_iccerrboundA_8();
		double L_77 = V_16;
		V_17 = ((double)il2cpp_codegen_multiply((double)L_76, (double)L_77));
		double L_78 = V_15;
		double L_79 = V_17;
		if ((((double)L_78) > ((double)L_79)))
		{
			goto IL_012c;
		}
	}
	{
		double L_80 = V_15;
		double L_81 = V_17;
		G_B5_0 = ((((double)((-L_80))) > ((double)L_81))? 1 : 0);
		goto IL_012d;
	}

IL_012c:
	{
		G_B5_0 = 1;
	}

IL_012d:
	{
		V_20 = (bool)G_B5_0;
		bool L_82 = V_20;
		if (!L_82)
		{
			goto IL_013a;
		}
	}
	{
		double L_83 = V_15;
		V_19 = L_83;
		goto IL_0158;
	}

IL_013a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		int64_t L_84 = ((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->get_InCircleAdaptCount_1();
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_InCircleAdaptCount_1(((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)((int64_t)((int64_t)1)))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_85 = ___pa0;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_86 = ___pb1;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_87 = ___pc2;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_88 = ___pd3;
		double L_89 = V_16;
		double L_90;
		L_90 = RobustPredicates_InCircleAdapt_mDC258332D1B41EF4AA3BDE47FA98BB3D63393716(__this, L_85, L_86, L_87, L_88, L_89, /*hidden argument*/NULL);
		V_19 = L_90;
		goto IL_0158;
	}

IL_0158:
	{
		double L_91 = V_19;
		return L_91;
	}
}
// TriangleNet.Geometry.Point TriangleNet.RobustPredicates::FindCircumcenter(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,System.Double&,System.Double&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * RobustPredicates_FindCircumcenter_mD640C63DCFBB00F2406F1ED356E00811E68059C4 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___org0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___dest1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___apex2, double* ___xi3, double* ___eta4, double ___offconstant5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * V_21 = NULL;
	int32_t G_B6_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->get_CircumcenterCount_6();
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CircumcenterCount_6(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)((int64_t)1)))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_1 = ___dest1;
		NullCheck(L_1);
		double L_2 = L_1->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_3 = ___org0;
		NullCheck(L_3);
		double L_4 = L_3->get_x_2();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_2, (double)L_4));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_5 = ___dest1;
		NullCheck(L_5);
		double L_6 = L_5->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_7 = ___org0;
		NullCheck(L_7);
		double L_8 = L_7->get_y_3();
		V_1 = ((double)il2cpp_codegen_subtract((double)L_6, (double)L_8));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_9 = ___apex2;
		NullCheck(L_9);
		double L_10 = L_9->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_11 = ___org0;
		NullCheck(L_11);
		double L_12 = L_11->get_x_2();
		V_2 = ((double)il2cpp_codegen_subtract((double)L_10, (double)L_12));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_13 = ___apex2;
		NullCheck(L_13);
		double L_14 = L_13->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_15 = ___org0;
		NullCheck(L_15);
		double L_16 = L_15->get_y_3();
		V_3 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_16));
		double L_17 = V_0;
		double L_18 = V_0;
		double L_19 = V_1;
		double L_20 = V_1;
		V_4 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_17, (double)L_18)), (double)((double)il2cpp_codegen_multiply((double)L_19, (double)L_20))));
		double L_21 = V_2;
		double L_22 = V_2;
		double L_23 = V_3;
		double L_24 = V_3;
		V_5 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_21, (double)L_22)), (double)((double)il2cpp_codegen_multiply((double)L_23, (double)L_24))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_25 = ___dest1;
		NullCheck(L_25);
		double L_26 = L_25->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_27 = ___apex2;
		NullCheck(L_27);
		double L_28 = L_27->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_29 = ___dest1;
		NullCheck(L_29);
		double L_30 = L_29->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_31 = ___apex2;
		NullCheck(L_31);
		double L_32 = L_31->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_33 = ___dest1;
		NullCheck(L_33);
		double L_34 = L_33->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_35 = ___apex2;
		NullCheck(L_35);
		double L_36 = L_35->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_37 = ___dest1;
		NullCheck(L_37);
		double L_38 = L_37->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_39 = ___apex2;
		NullCheck(L_39);
		double L_40 = L_39->get_y_3();
		V_6 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_26, (double)L_28)), (double)((double)il2cpp_codegen_subtract((double)L_30, (double)L_32)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_34, (double)L_36)), (double)((double)il2cpp_codegen_subtract((double)L_38, (double)L_40))))));
		bool L_41;
		L_41 = Behavior_get_NoExact_mCDCFEFF0B67EE543B5D67F2167FC7456311731B5_inline(/*hidden argument*/NULL);
		V_12 = L_41;
		bool L_42 = V_12;
		if (!L_42)
		{
			goto IL_00b3;
		}
	}
	{
		double L_43 = V_0;
		double L_44 = V_3;
		double L_45 = V_2;
		double L_46 = V_1;
		V_7 = ((double)((double)(0.5)/(double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_43, (double)L_44)), (double)((double)il2cpp_codegen_multiply((double)L_45, (double)L_46))))));
		goto IL_00d7;
	}

IL_00b3:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_47 = ___dest1;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_48 = ___apex2;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_49 = ___org0;
		double L_50;
		L_50 = RobustPredicates_CounterClockwise_m56542951636095435EAFB298383C9ED9337D1085(__this, L_47, L_48, L_49, /*hidden argument*/NULL);
		V_7 = ((double)((double)(0.5)/(double)L_50));
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		int64_t L_51 = ((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->get_CounterClockwiseCount_2();
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CounterClockwiseCount_2(((int64_t)il2cpp_codegen_subtract((int64_t)L_51, (int64_t)((int64_t)((int64_t)1)))));
	}

IL_00d7:
	{
		double L_52 = V_3;
		double L_53 = V_4;
		double L_54 = V_1;
		double L_55 = V_5;
		double L_56 = V_7;
		V_8 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_52, (double)L_53)), (double)((double)il2cpp_codegen_multiply((double)L_54, (double)L_55)))), (double)L_56));
		double L_57 = V_0;
		double L_58 = V_5;
		double L_59 = V_2;
		double L_60 = V_4;
		double L_61 = V_7;
		V_9 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_57, (double)L_58)), (double)((double)il2cpp_codegen_multiply((double)L_59, (double)L_60)))), (double)L_61));
		double L_62 = V_4;
		double L_63 = V_5;
		if ((!(((double)L_62) < ((double)L_63))))
		{
			goto IL_0101;
		}
	}
	{
		double L_64 = V_4;
		double L_65 = V_6;
		G_B6_0 = ((((double)L_64) < ((double)L_65))? 1 : 0);
		goto IL_0102;
	}

IL_0101:
	{
		G_B6_0 = 0;
	}

IL_0102:
	{
		V_13 = (bool)G_B6_0;
		bool L_66 = V_13;
		if (!L_66)
		{
			goto IL_0170;
		}
	}
	{
		double L_67 = ___offconstant5;
		V_14 = (bool)((((double)L_67) > ((double)(0.0)))? 1 : 0);
		bool L_68 = V_14;
		if (!L_68)
		{
			goto IL_016a;
		}
	}
	{
		double L_69 = V_0;
		double L_70 = ___offconstant5;
		double L_71 = V_1;
		V_10 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(0.5), (double)L_69)), (double)((double)il2cpp_codegen_multiply((double)L_70, (double)L_71))));
		double L_72 = V_1;
		double L_73 = ___offconstant5;
		double L_74 = V_0;
		V_11 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)(0.5), (double)L_72)), (double)((double)il2cpp_codegen_multiply((double)L_73, (double)L_74))));
		double L_75 = V_10;
		double L_76 = V_10;
		double L_77 = V_11;
		double L_78 = V_11;
		double L_79 = V_8;
		double L_80 = V_8;
		double L_81 = V_9;
		double L_82 = V_9;
		V_15 = (bool)((((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_75, (double)L_76)), (double)((double)il2cpp_codegen_multiply((double)L_77, (double)L_78))))) < ((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_79, (double)L_80)), (double)((double)il2cpp_codegen_multiply((double)L_81, (double)L_82))))))? 1 : 0);
		bool L_83 = V_15;
		if (!L_83)
		{
			goto IL_0169;
		}
	}
	{
		double L_84 = V_10;
		V_8 = L_84;
		double L_85 = V_11;
		V_9 = L_85;
	}

IL_0169:
	{
	}

IL_016a:
	{
		goto IL_0286;
	}

IL_0170:
	{
		double L_86 = V_5;
		double L_87 = V_6;
		V_16 = (bool)((((double)L_86) < ((double)L_87))? 1 : 0);
		bool L_88 = V_16;
		if (!L_88)
		{
			goto IL_01e4;
		}
	}
	{
		double L_89 = ___offconstant5;
		V_17 = (bool)((((double)L_89) > ((double)(0.0)))? 1 : 0);
		bool L_90 = V_17;
		if (!L_90)
		{
			goto IL_01de;
		}
	}
	{
		double L_91 = V_2;
		double L_92 = ___offconstant5;
		double L_93 = V_3;
		V_10 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)(0.5), (double)L_91)), (double)((double)il2cpp_codegen_multiply((double)L_92, (double)L_93))));
		double L_94 = V_3;
		double L_95 = ___offconstant5;
		double L_96 = V_2;
		V_11 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(0.5), (double)L_94)), (double)((double)il2cpp_codegen_multiply((double)L_95, (double)L_96))));
		double L_97 = V_10;
		double L_98 = V_10;
		double L_99 = V_11;
		double L_100 = V_11;
		double L_101 = V_8;
		double L_102 = V_8;
		double L_103 = V_9;
		double L_104 = V_9;
		V_18 = (bool)((((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_97, (double)L_98)), (double)((double)il2cpp_codegen_multiply((double)L_99, (double)L_100))))) < ((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_101, (double)L_102)), (double)((double)il2cpp_codegen_multiply((double)L_103, (double)L_104))))))? 1 : 0);
		bool L_105 = V_18;
		if (!L_105)
		{
			goto IL_01dd;
		}
	}
	{
		double L_106 = V_10;
		V_8 = L_106;
		double L_107 = V_11;
		V_9 = L_107;
	}

IL_01dd:
	{
	}

IL_01de:
	{
		goto IL_0286;
	}

IL_01e4:
	{
		double L_108 = ___offconstant5;
		V_19 = (bool)((((double)L_108) > ((double)(0.0)))? 1 : 0);
		bool L_109 = V_19;
		if (!L_109)
		{
			goto IL_0285;
		}
	}
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_110 = ___apex2;
		NullCheck(L_110);
		double L_111 = L_110->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_112 = ___dest1;
		NullCheck(L_112);
		double L_113 = L_112->get_x_2();
		double L_114 = ___offconstant5;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_115 = ___apex2;
		NullCheck(L_115);
		double L_116 = L_115->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_117 = ___dest1;
		NullCheck(L_117);
		double L_118 = L_117->get_y_3();
		V_10 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(0.5), (double)((double)il2cpp_codegen_subtract((double)L_111, (double)L_113)))), (double)((double)il2cpp_codegen_multiply((double)L_114, (double)((double)il2cpp_codegen_subtract((double)L_116, (double)L_118))))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_119 = ___apex2;
		NullCheck(L_119);
		double L_120 = L_119->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_121 = ___dest1;
		NullCheck(L_121);
		double L_122 = L_121->get_y_3();
		double L_123 = ___offconstant5;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_124 = ___apex2;
		NullCheck(L_124);
		double L_125 = L_124->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_126 = ___dest1;
		NullCheck(L_126);
		double L_127 = L_126->get_x_2();
		V_11 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)(0.5), (double)((double)il2cpp_codegen_subtract((double)L_120, (double)L_122)))), (double)((double)il2cpp_codegen_multiply((double)L_123, (double)((double)il2cpp_codegen_subtract((double)L_125, (double)L_127))))));
		double L_128 = V_10;
		double L_129 = V_10;
		double L_130 = V_11;
		double L_131 = V_11;
		double L_132 = V_8;
		double L_133 = V_0;
		double L_134 = V_8;
		double L_135 = V_0;
		double L_136 = V_9;
		double L_137 = V_1;
		double L_138 = V_9;
		double L_139 = V_1;
		V_20 = (bool)((((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_128, (double)L_129)), (double)((double)il2cpp_codegen_multiply((double)L_130, (double)L_131))))) < ((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_132, (double)L_133)), (double)((double)il2cpp_codegen_subtract((double)L_134, (double)L_135)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_136, (double)L_137)), (double)((double)il2cpp_codegen_subtract((double)L_138, (double)L_139))))))))? 1 : 0);
		bool L_140 = V_20;
		if (!L_140)
		{
			goto IL_0284;
		}
	}
	{
		double L_141 = V_0;
		double L_142 = V_10;
		V_8 = ((double)il2cpp_codegen_add((double)L_141, (double)L_142));
		double L_143 = V_1;
		double L_144 = V_11;
		V_9 = ((double)il2cpp_codegen_add((double)L_143, (double)L_144));
	}

IL_0284:
	{
	}

IL_0285:
	{
	}

IL_0286:
	{
		double* L_145 = ___xi3;
		double L_146 = V_3;
		double L_147 = V_8;
		double L_148 = V_2;
		double L_149 = V_9;
		double L_150 = V_7;
		*((double*)L_145) = (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_146, (double)L_147)), (double)((double)il2cpp_codegen_multiply((double)L_148, (double)L_149)))), (double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_150))));
		double* L_151 = ___eta4;
		double L_152 = V_0;
		double L_153 = V_9;
		double L_154 = V_1;
		double L_155 = V_8;
		double L_156 = V_7;
		*((double*)L_151) = (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_152, (double)L_153)), (double)((double)il2cpp_codegen_multiply((double)L_154, (double)L_155)))), (double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_156))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_157 = ___org0;
		NullCheck(L_157);
		double L_158 = L_157->get_x_2();
		double L_159 = V_8;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_160 = ___org0;
		NullCheck(L_160);
		double L_161 = L_160->get_y_3();
		double L_162 = V_9;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_163 = (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)il2cpp_codegen_object_new(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73_il2cpp_TypeInfo_var);
		Point__ctor_m38BE7730A08F86B090D72D4F66297D7D8ACF5681(L_163, ((double)il2cpp_codegen_add((double)L_158, (double)L_159)), ((double)il2cpp_codegen_add((double)L_161, (double)L_162)), /*hidden argument*/NULL);
		V_21 = L_163;
		goto IL_02d3;
	}

IL_02d3:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_164 = V_21;
		return L_164;
	}
}
// TriangleNet.Geometry.Point TriangleNet.RobustPredicates::FindCircumcenter(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,System.Double&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * RobustPredicates_FindCircumcenter_m55AE7F721643A225CF9813552D12E6155369A88B (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___org0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___dest1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___apex2, double* ___xi3, double* ___eta4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	bool V_9 = false;
	Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * V_10 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->get_CircumcenterCount_6();
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CircumcenterCount_6(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)((int64_t)1)))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_1 = ___dest1;
		NullCheck(L_1);
		double L_2 = L_1->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_3 = ___org0;
		NullCheck(L_3);
		double L_4 = L_3->get_x_2();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_2, (double)L_4));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_5 = ___dest1;
		NullCheck(L_5);
		double L_6 = L_5->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_7 = ___org0;
		NullCheck(L_7);
		double L_8 = L_7->get_y_3();
		V_1 = ((double)il2cpp_codegen_subtract((double)L_6, (double)L_8));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_9 = ___apex2;
		NullCheck(L_9);
		double L_10 = L_9->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_11 = ___org0;
		NullCheck(L_11);
		double L_12 = L_11->get_x_2();
		V_2 = ((double)il2cpp_codegen_subtract((double)L_10, (double)L_12));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_13 = ___apex2;
		NullCheck(L_13);
		double L_14 = L_13->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_15 = ___org0;
		NullCheck(L_15);
		double L_16 = L_15->get_y_3();
		V_3 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_16));
		double L_17 = V_0;
		double L_18 = V_0;
		double L_19 = V_1;
		double L_20 = V_1;
		V_4 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_17, (double)L_18)), (double)((double)il2cpp_codegen_multiply((double)L_19, (double)L_20))));
		double L_21 = V_2;
		double L_22 = V_2;
		double L_23 = V_3;
		double L_24 = V_3;
		V_5 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_21, (double)L_22)), (double)((double)il2cpp_codegen_multiply((double)L_23, (double)L_24))));
		bool L_25;
		L_25 = Behavior_get_NoExact_mCDCFEFF0B67EE543B5D67F2167FC7456311731B5_inline(/*hidden argument*/NULL);
		V_9 = L_25;
		bool L_26 = V_9;
		if (!L_26)
		{
			goto IL_007a;
		}
	}
	{
		double L_27 = V_0;
		double L_28 = V_3;
		double L_29 = V_2;
		double L_30 = V_1;
		V_6 = ((double)((double)(0.5)/(double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_27, (double)L_28)), (double)((double)il2cpp_codegen_multiply((double)L_29, (double)L_30))))));
		goto IL_009e;
	}

IL_007a:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_31 = ___dest1;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_32 = ___apex2;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_33 = ___org0;
		double L_34;
		L_34 = RobustPredicates_CounterClockwise_m56542951636095435EAFB298383C9ED9337D1085(__this, L_31, L_32, L_33, /*hidden argument*/NULL);
		V_6 = ((double)((double)(0.5)/(double)L_34));
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var);
		int64_t L_35 = ((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->get_CounterClockwiseCount_2();
		((Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tF00F9497D475206DE9F982372F84EAD30B4A526C_il2cpp_TypeInfo_var))->set_CounterClockwiseCount_2(((int64_t)il2cpp_codegen_subtract((int64_t)L_35, (int64_t)((int64_t)((int64_t)1)))));
	}

IL_009e:
	{
		double L_36 = V_3;
		double L_37 = V_4;
		double L_38 = V_1;
		double L_39 = V_5;
		double L_40 = V_6;
		V_7 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_36, (double)L_37)), (double)((double)il2cpp_codegen_multiply((double)L_38, (double)L_39)))), (double)L_40));
		double L_41 = V_0;
		double L_42 = V_5;
		double L_43 = V_2;
		double L_44 = V_4;
		double L_45 = V_6;
		V_8 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_41, (double)L_42)), (double)((double)il2cpp_codegen_multiply((double)L_43, (double)L_44)))), (double)L_45));
		double* L_46 = ___xi3;
		double L_47 = V_3;
		double L_48 = V_7;
		double L_49 = V_2;
		double L_50 = V_8;
		double L_51 = V_6;
		*((double*)L_46) = (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_47, (double)L_48)), (double)((double)il2cpp_codegen_multiply((double)L_49, (double)L_50)))), (double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_51))));
		double* L_52 = ___eta4;
		double L_53 = V_0;
		double L_54 = V_8;
		double L_55 = V_1;
		double L_56 = V_7;
		double L_57 = V_6;
		*((double*)L_52) = (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_53, (double)L_54)), (double)((double)il2cpp_codegen_multiply((double)L_55, (double)L_56)))), (double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_57))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_58 = ___org0;
		NullCheck(L_58);
		double L_59 = L_58->get_x_2();
		double L_60 = V_7;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_61 = ___org0;
		NullCheck(L_61);
		double L_62 = L_61->get_y_3();
		double L_63 = V_8;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_64 = (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 *)il2cpp_codegen_object_new(Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73_il2cpp_TypeInfo_var);
		Point__ctor_m38BE7730A08F86B090D72D4F66297D7D8ACF5681(L_64, ((double)il2cpp_codegen_add((double)L_59, (double)L_60)), ((double)il2cpp_codegen_add((double)L_62, (double)L_63)), /*hidden argument*/NULL);
		V_10 = L_64;
		goto IL_0107;
	}

IL_0107:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_65 = V_10;
		return L_65;
	}
}
// System.Int32 TriangleNet.RobustPredicates::FastExpansionSumZeroElim(System.Int32,System.Double[],System.Int32,System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, int32_t ___elen0, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___e1, int32_t ___flen2, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___f3, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___h4, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B37_0 = 0;
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___e1;
		NullCheck(L_0);
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_10 = L_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = ___f3;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_11 = L_5;
		int32_t L_6 = 0;
		V_8 = L_6;
		V_7 = L_6;
		double L_7 = V_11;
		double L_8 = V_10;
		double L_9 = V_11;
		double L_10 = V_10;
		V_12 = (bool)((((int32_t)((((double)L_7) > ((double)L_8))? 1 : 0)) == ((int32_t)((((double)L_9) > ((double)((-L_10))))? 1 : 0)))? 1 : 0);
		bool L_11 = V_12;
		if (!L_11)
		{
			goto IL_0039;
		}
	}
	{
		double L_12 = V_10;
		V_0 = L_12;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_13 = ___e1;
		int32_t L_14 = V_7;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		V_7 = L_15;
		NullCheck(L_13);
		int32_t L_16 = L_15;
		double L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_10 = L_17;
		goto IL_004a;
	}

IL_0039:
	{
		double L_18 = V_11;
		V_0 = L_18;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_19 = ___f3;
		int32_t L_20 = V_8;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		V_8 = L_21;
		NullCheck(L_19);
		int32_t L_22 = L_21;
		double L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_11 = L_23;
	}

IL_004a:
	{
		V_9 = 0;
		int32_t L_24 = V_7;
		int32_t L_25 = ___elen0;
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_26 = V_8;
		int32_t L_27 = ___flen2;
		G_B6_0 = ((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B6_0 = 0;
	}

IL_005a:
	{
		V_13 = (bool)G_B6_0;
		bool L_28 = V_13;
		if (!L_28)
		{
			goto IL_0190;
		}
	}
	{
		double L_29 = V_11;
		double L_30 = V_10;
		double L_31 = V_11;
		double L_32 = V_10;
		V_14 = (bool)((((int32_t)((((double)L_29) > ((double)L_30))? 1 : 0)) == ((int32_t)((((double)L_31) > ((double)((-L_32))))? 1 : 0)))? 1 : 0);
		bool L_33 = V_14;
		if (!L_33)
		{
			goto IL_0097;
		}
	}
	{
		double L_34 = V_10;
		double L_35 = V_0;
		V_1 = ((double)((double)((double)il2cpp_codegen_add((double)L_34, (double)L_35))));
		double L_36 = V_1;
		double L_37 = V_10;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_36, (double)L_37));
		double L_38 = V_0;
		double L_39 = V_3;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_38, (double)L_39));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_40 = ___e1;
		int32_t L_41 = V_7;
		int32_t L_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		V_7 = L_42;
		NullCheck(L_40);
		int32_t L_43 = L_42;
		double L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_10 = L_44;
		goto IL_00b4;
	}

IL_0097:
	{
		double L_45 = V_11;
		double L_46 = V_0;
		V_1 = ((double)((double)((double)il2cpp_codegen_add((double)L_45, (double)L_46))));
		double L_47 = V_1;
		double L_48 = V_11;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_47, (double)L_48));
		double L_49 = V_0;
		double L_50 = V_3;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_49, (double)L_50));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_51 = ___f3;
		int32_t L_52 = V_8;
		int32_t L_53 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		V_8 = L_53;
		NullCheck(L_51);
		int32_t L_54 = L_53;
		double L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_11 = L_55;
	}

IL_00b4:
	{
		double L_56 = V_1;
		V_0 = L_56;
		double L_57 = V_2;
		V_15 = (bool)((((int32_t)((((double)L_57) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_15;
		if (!L_58)
		{
			goto IL_00d8;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_59 = ___h4;
		int32_t L_60 = V_9;
		int32_t L_61 = L_60;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		double L_62 = V_2;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (double)L_62);
	}

IL_00d8:
	{
		goto IL_0179;
	}

IL_00dd:
	{
		double L_63 = V_11;
		double L_64 = V_10;
		double L_65 = V_11;
		double L_66 = V_10;
		V_16 = (bool)((((int32_t)((((double)L_63) > ((double)L_64))? 1 : 0)) == ((int32_t)((((double)L_65) > ((double)((-L_66))))? 1 : 0)))? 1 : 0);
		bool L_67 = V_16;
		if (!L_67)
		{
			goto IL_0124;
		}
	}
	{
		double L_68 = V_0;
		double L_69 = V_10;
		V_1 = ((double)((double)((double)il2cpp_codegen_add((double)L_68, (double)L_69))));
		double L_70 = V_1;
		double L_71 = V_0;
		V_3 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_70, (double)L_71))));
		double L_72 = V_1;
		double L_73 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_72, (double)L_73));
		double L_74 = V_10;
		double L_75 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_74, (double)L_75));
		double L_76 = V_0;
		double L_77 = V_4;
		V_6 = ((double)il2cpp_codegen_subtract((double)L_76, (double)L_77));
		double L_78 = V_6;
		double L_79 = V_5;
		V_2 = ((double)il2cpp_codegen_add((double)L_78, (double)L_79));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_80 = ___e1;
		int32_t L_81 = V_7;
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		V_7 = L_82;
		NullCheck(L_80);
		int32_t L_83 = L_82;
		double L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_10 = L_84;
		goto IL_0154;
	}

IL_0124:
	{
		double L_85 = V_0;
		double L_86 = V_11;
		V_1 = ((double)((double)((double)il2cpp_codegen_add((double)L_85, (double)L_86))));
		double L_87 = V_1;
		double L_88 = V_0;
		V_3 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_87, (double)L_88))));
		double L_89 = V_1;
		double L_90 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_89, (double)L_90));
		double L_91 = V_11;
		double L_92 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_91, (double)L_92));
		double L_93 = V_0;
		double L_94 = V_4;
		V_6 = ((double)il2cpp_codegen_subtract((double)L_93, (double)L_94));
		double L_95 = V_6;
		double L_96 = V_5;
		V_2 = ((double)il2cpp_codegen_add((double)L_95, (double)L_96));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_97 = ___f3;
		int32_t L_98 = V_8;
		int32_t L_99 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		V_8 = L_99;
		NullCheck(L_97);
		int32_t L_100 = L_99;
		double L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_11 = L_101;
	}

IL_0154:
	{
		double L_102 = V_1;
		V_0 = L_102;
		double L_103 = V_2;
		V_17 = (bool)((((int32_t)((((double)L_103) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_104 = V_17;
		if (!L_104)
		{
			goto IL_0178;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_105 = ___h4;
		int32_t L_106 = V_9;
		int32_t L_107 = L_106;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
		double L_108 = V_2;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(L_107), (double)L_108);
	}

IL_0178:
	{
	}

IL_0179:
	{
		int32_t L_109 = V_7;
		int32_t L_110 = ___elen0;
		if ((((int32_t)L_109) >= ((int32_t)L_110)))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_111 = V_8;
		int32_t L_112 = ___flen2;
		G_B22_0 = ((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		goto IL_0186;
	}

IL_0185:
	{
		G_B22_0 = 0;
	}

IL_0186:
	{
		V_18 = (bool)G_B22_0;
		bool L_113 = V_18;
		if (L_113)
		{
			goto IL_00dd;
		}
	}
	{
	}

IL_0190:
	{
		goto IL_01e5;
	}

IL_0192:
	{
		double L_114 = V_0;
		double L_115 = V_10;
		V_1 = ((double)((double)((double)il2cpp_codegen_add((double)L_114, (double)L_115))));
		double L_116 = V_1;
		double L_117 = V_0;
		V_3 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_116, (double)L_117))));
		double L_118 = V_1;
		double L_119 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_118, (double)L_119));
		double L_120 = V_10;
		double L_121 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_120, (double)L_121));
		double L_122 = V_0;
		double L_123 = V_4;
		V_6 = ((double)il2cpp_codegen_subtract((double)L_122, (double)L_123));
		double L_124 = V_6;
		double L_125 = V_5;
		V_2 = ((double)il2cpp_codegen_add((double)L_124, (double)L_125));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_126 = ___e1;
		int32_t L_127 = V_7;
		int32_t L_128 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
		V_7 = L_128;
		NullCheck(L_126);
		int32_t L_129 = L_128;
		double L_130 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		V_10 = L_130;
		double L_131 = V_1;
		V_0 = L_131;
		double L_132 = V_2;
		V_19 = (bool)((((int32_t)((((double)L_132) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_133 = V_19;
		if (!L_133)
		{
			goto IL_01e4;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_134 = ___h4;
		int32_t L_135 = V_9;
		int32_t L_136 = L_135;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1));
		double L_137 = V_2;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(L_136), (double)L_137);
	}

IL_01e4:
	{
	}

IL_01e5:
	{
		int32_t L_138 = V_7;
		int32_t L_139 = ___elen0;
		V_20 = (bool)((((int32_t)L_138) < ((int32_t)L_139))? 1 : 0);
		bool L_140 = V_20;
		if (L_140)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_0246;
	}

IL_01f2:
	{
		double L_141 = V_0;
		double L_142 = V_11;
		V_1 = ((double)((double)((double)il2cpp_codegen_add((double)L_141, (double)L_142))));
		double L_143 = V_1;
		double L_144 = V_0;
		V_3 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_143, (double)L_144))));
		double L_145 = V_1;
		double L_146 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_145, (double)L_146));
		double L_147 = V_11;
		double L_148 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_147, (double)L_148));
		double L_149 = V_0;
		double L_150 = V_4;
		V_6 = ((double)il2cpp_codegen_subtract((double)L_149, (double)L_150));
		double L_151 = V_6;
		double L_152 = V_5;
		V_2 = ((double)il2cpp_codegen_add((double)L_151, (double)L_152));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_153 = ___f3;
		int32_t L_154 = V_8;
		int32_t L_155 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)1));
		V_8 = L_155;
		NullCheck(L_153);
		int32_t L_156 = L_155;
		double L_157 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		V_11 = L_157;
		double L_158 = V_1;
		V_0 = L_158;
		double L_159 = V_2;
		V_21 = (bool)((((int32_t)((((double)L_159) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_160 = V_21;
		if (!L_160)
		{
			goto IL_0245;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_161 = ___h4;
		int32_t L_162 = V_9;
		int32_t L_163 = L_162;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)1));
		double L_164 = V_2;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(L_163), (double)L_164);
	}

IL_0245:
	{
	}

IL_0246:
	{
		int32_t L_165 = V_8;
		int32_t L_166 = ___flen2;
		V_22 = (bool)((((int32_t)L_165) < ((int32_t)L_166))? 1 : 0);
		bool L_167 = V_22;
		if (L_167)
		{
			goto IL_01f2;
		}
	}
	{
		double L_168 = V_0;
		if ((!(((double)L_168) == ((double)(0.0)))))
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_169 = V_9;
		G_B37_0 = ((((int32_t)L_169) == ((int32_t)0))? 1 : 0);
		goto IL_0265;
	}

IL_0264:
	{
		G_B37_0 = 1;
	}

IL_0265:
	{
		V_23 = (bool)G_B37_0;
		bool L_170 = V_23;
		if (!L_170)
		{
			goto IL_0278;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_171 = ___h4;
		int32_t L_172 = V_9;
		int32_t L_173 = L_172;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)1));
		double L_174 = V_0;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(L_173), (double)L_174);
	}

IL_0278:
	{
		int32_t L_175 = V_9;
		V_24 = L_175;
		goto IL_027e;
	}

IL_027e:
	{
		int32_t L_176 = V_24;
		return L_176;
	}
}
// System.Int32 TriangleNet.RobustPredicates::ScaleExpansionZeroElim(System.Int32,System.Double[],System.Double,System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, int32_t ___elen0, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___e1, double ___b2, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___h3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	double V_20 = 0.0;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	int32_t V_26 = 0;
	int32_t G_B12_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_0 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1 = ___b2;
		V_12 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_0, (double)L_1))));
		double L_2 = V_12;
		double L_3 = ___b2;
		V_13 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2, (double)L_3))));
		double L_4 = V_12;
		double L_5 = V_13;
		V_16 = ((double)il2cpp_codegen_subtract((double)L_4, (double)L_5));
		double L_6 = ___b2;
		double L_7 = V_16;
		V_17 = ((double)il2cpp_codegen_subtract((double)L_6, (double)L_7));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_8 = ___e1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		double L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		double L_11 = ___b2;
		V_0 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11))));
		double L_12 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_13 = ___e1;
		NullCheck(L_13);
		int32_t L_14 = 0;
		double L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_12 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_12, (double)L_15))));
		double L_16 = V_12;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17 = ___e1;
		NullCheck(L_17);
		int32_t L_18 = 0;
		double L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_13 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_16, (double)L_19))));
		double L_20 = V_12;
		double L_21 = V_13;
		V_14 = ((double)il2cpp_codegen_subtract((double)L_20, (double)L_21));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_22 = ___e1;
		NullCheck(L_22);
		int32_t L_23 = 0;
		double L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		double L_25 = V_14;
		V_15 = ((double)il2cpp_codegen_subtract((double)L_24, (double)L_25));
		double L_26 = V_0;
		double L_27 = V_14;
		double L_28 = V_16;
		V_18 = ((double)il2cpp_codegen_subtract((double)L_26, (double)((double)il2cpp_codegen_multiply((double)L_27, (double)L_28))));
		double L_29 = V_18;
		double L_30 = V_15;
		double L_31 = V_16;
		V_19 = ((double)il2cpp_codegen_subtract((double)L_29, (double)((double)il2cpp_codegen_multiply((double)L_30, (double)L_31))));
		double L_32 = V_19;
		double L_33 = V_14;
		double L_34 = V_17;
		V_20 = ((double)il2cpp_codegen_subtract((double)L_32, (double)((double)il2cpp_codegen_multiply((double)L_33, (double)L_34))));
		double L_35 = V_15;
		double L_36 = V_17;
		double L_37 = V_20;
		V_2 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_35, (double)L_36)), (double)L_37));
		V_6 = 0;
		double L_38 = V_2;
		V_21 = (bool)((((int32_t)((((double)L_38) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_21;
		if (!L_39)
		{
			goto IL_0095;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_40 = ___h3;
		int32_t L_41 = V_6;
		int32_t L_42 = L_41;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		double L_43 = V_2;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (double)L_43);
	}

IL_0095:
	{
		V_5 = 1;
		goto IL_0171;
	}

IL_009d:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_44 = ___e1;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		double L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_7 = L_47;
		double L_48 = V_7;
		double L_49 = ___b2;
		V_3 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_48, (double)L_49))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_50 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_51 = V_7;
		V_12 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_50, (double)L_51))));
		double L_52 = V_12;
		double L_53 = V_7;
		V_13 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_52, (double)L_53))));
		double L_54 = V_12;
		double L_55 = V_13;
		V_14 = ((double)il2cpp_codegen_subtract((double)L_54, (double)L_55));
		double L_56 = V_7;
		double L_57 = V_14;
		V_15 = ((double)il2cpp_codegen_subtract((double)L_56, (double)L_57));
		double L_58 = V_3;
		double L_59 = V_14;
		double L_60 = V_16;
		V_18 = ((double)il2cpp_codegen_subtract((double)L_58, (double)((double)il2cpp_codegen_multiply((double)L_59, (double)L_60))));
		double L_61 = V_18;
		double L_62 = V_15;
		double L_63 = V_16;
		V_19 = ((double)il2cpp_codegen_subtract((double)L_61, (double)((double)il2cpp_codegen_multiply((double)L_62, (double)L_63))));
		double L_64 = V_19;
		double L_65 = V_14;
		double L_66 = V_17;
		V_20 = ((double)il2cpp_codegen_subtract((double)L_64, (double)((double)il2cpp_codegen_multiply((double)L_65, (double)L_66))));
		double L_67 = V_15;
		double L_68 = V_17;
		double L_69 = V_20;
		V_4 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_67, (double)L_68)), (double)L_69));
		double L_70 = V_0;
		double L_71 = V_4;
		V_1 = ((double)((double)((double)il2cpp_codegen_add((double)L_70, (double)L_71))));
		double L_72 = V_1;
		double L_73 = V_0;
		V_8 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_72, (double)L_73))));
		double L_74 = V_1;
		double L_75 = V_8;
		V_9 = ((double)il2cpp_codegen_subtract((double)L_74, (double)L_75));
		double L_76 = V_4;
		double L_77 = V_8;
		V_10 = ((double)il2cpp_codegen_subtract((double)L_76, (double)L_77));
		double L_78 = V_0;
		double L_79 = V_9;
		V_11 = ((double)il2cpp_codegen_subtract((double)L_78, (double)L_79));
		double L_80 = V_11;
		double L_81 = V_10;
		V_2 = ((double)il2cpp_codegen_add((double)L_80, (double)L_81));
		double L_82 = V_2;
		V_22 = (bool)((((int32_t)((((double)L_82) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_83 = V_22;
		if (!L_83)
		{
			goto IL_0139;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_84 = ___h3;
		int32_t L_85 = V_6;
		int32_t L_86 = L_85;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
		double L_87 = V_2;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (double)L_87);
	}

IL_0139:
	{
		double L_88 = V_3;
		double L_89 = V_1;
		V_0 = ((double)((double)((double)il2cpp_codegen_add((double)L_88, (double)L_89))));
		double L_90 = V_0;
		double L_91 = V_3;
		V_8 = ((double)il2cpp_codegen_subtract((double)L_90, (double)L_91));
		double L_92 = V_1;
		double L_93 = V_8;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_92, (double)L_93));
		double L_94 = V_2;
		V_23 = (bool)((((int32_t)((((double)L_94) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_95 = V_23;
		if (!L_95)
		{
			goto IL_016a;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_96 = ___h3;
		int32_t L_97 = V_6;
		int32_t L_98 = L_97;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		double L_99 = V_2;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_98), (double)L_99);
	}

IL_016a:
	{
		int32_t L_100 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
	}

IL_0171:
	{
		int32_t L_101 = V_5;
		int32_t L_102 = ___elen0;
		V_24 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		bool L_103 = V_24;
		if (L_103)
		{
			goto IL_009d;
		}
	}
	{
		double L_104 = V_0;
		if ((!(((double)L_104) == ((double)(0.0)))))
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_105 = V_6;
		G_B12_0 = ((((int32_t)L_105) == ((int32_t)0))? 1 : 0);
		goto IL_0193;
	}

IL_0192:
	{
		G_B12_0 = 1;
	}

IL_0193:
	{
		V_25 = (bool)G_B12_0;
		bool L_106 = V_25;
		if (!L_106)
		{
			goto IL_01a6;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_107 = ___h3;
		int32_t L_108 = V_6;
		int32_t L_109 = L_108;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		double L_110 = V_0;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (double)L_110);
	}

IL_01a6:
	{
		int32_t L_111 = V_6;
		V_26 = L_111;
		goto IL_01ac;
	}

IL_01ac:
	{
		int32_t L_112 = V_26;
		return L_112;
	}
}
// System.Double TriangleNet.RobustPredicates::Estimate(System.Int32,System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_Estimate_m0A4C1ECAEA23C146A54F2191C79B3F72C2B4B096 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, int32_t ___elen0, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___e1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	bool V_2 = false;
	double V_3 = 0.0;
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___e1;
		NullCheck(L_0);
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		V_1 = 1;
		goto IL_0015;
	}

IL_0009:
	{
		double L_3 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = ___e1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		double L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((double)il2cpp_codegen_add((double)L_3, (double)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0015:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___elen0;
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0009;
		}
	}
	{
		double L_12 = V_0;
		V_3 = L_12;
		goto IL_0021;
	}

IL_0021:
	{
		double L_13 = V_3;
		return L_13;
	}
}
// System.Double TriangleNet.RobustPredicates::CounterClockwiseAdapt(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_CounterClockwiseAdapt_m13DAED25B6D1EF247046087A878F0BEAB89A440E (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pa0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pb1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pc2, double ___detsum3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_14 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_15 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_16 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_17 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_18 = NULL;
	double V_19 = 0.0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	double V_23 = 0.0;
	double V_24 = 0.0;
	double V_25 = 0.0;
	double V_26 = 0.0;
	double V_27 = 0.0;
	double V_28 = 0.0;
	double V_29 = 0.0;
	double V_30 = 0.0;
	double V_31 = 0.0;
	double V_32 = 0.0;
	double V_33 = 0.0;
	double V_34 = 0.0;
	double V_35 = 0.0;
	double V_36 = 0.0;
	double V_37 = 0.0;
	double V_38 = 0.0;
	double V_39 = 0.0;
	double V_40 = 0.0;
	double V_41 = 0.0;
	double V_42 = 0.0;
	double V_43 = 0.0;
	bool V_44 = false;
	double V_45 = 0.0;
	bool V_46 = false;
	bool V_47 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	double G_B14_0 = 0.0;
	double G_B14_1 = 0.0;
	double G_B13_0 = 0.0;
	double G_B13_1 = 0.0;
	double G_B15_0 = 0.0;
	double G_B15_1 = 0.0;
	double G_B15_2 = 0.0;
	int32_t G_B18_0 = 0;
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)5);
		V_14 = L_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)5);
		V_15 = L_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_16 = L_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		V_17 = L_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_18 = L_4;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_5 = ___pa0;
		NullCheck(L_5);
		double L_6 = L_5->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_7 = ___pc2;
		NullCheck(L_7);
		double L_8 = L_7->get_x_2();
		V_0 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_6, (double)L_8))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_9 = ___pb1;
		NullCheck(L_9);
		double L_10 = L_9->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_11 = ___pc2;
		NullCheck(L_11);
		double L_12 = L_11->get_x_2();
		V_2 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_10, (double)L_12))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_13 = ___pa0;
		NullCheck(L_13);
		double L_14 = L_13->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_15 = ___pc2;
		NullCheck(L_15);
		double L_16 = L_15->get_y_3();
		V_1 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_14, (double)L_16))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_17 = ___pb1;
		NullCheck(L_17);
		double L_18 = L_17->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_19 = ___pc2;
		NullCheck(L_19);
		double L_20 = L_19->get_y_3();
		V_3 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_18, (double)L_20))));
		double L_21 = V_0;
		double L_22 = V_3;
		V_8 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_21, (double)L_22))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_23 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_24 = V_0;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_23, (double)L_24))));
		double L_25 = V_32;
		double L_26 = V_0;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_25, (double)L_26))));
		double L_27 = V_32;
		double L_28 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract((double)L_27, (double)L_28));
		double L_29 = V_0;
		double L_30 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract((double)L_29, (double)L_30));
		double L_31 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_32 = V_3;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_31, (double)L_32))));
		double L_33 = V_32;
		double L_34 = V_3;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_33, (double)L_34))));
		double L_35 = V_32;
		double L_36 = V_33;
		V_36 = ((double)il2cpp_codegen_subtract((double)L_35, (double)L_36));
		double L_37 = V_3;
		double L_38 = V_36;
		V_37 = ((double)il2cpp_codegen_subtract((double)L_37, (double)L_38));
		double L_39 = V_8;
		double L_40 = V_34;
		double L_41 = V_36;
		V_38 = ((double)il2cpp_codegen_subtract((double)L_39, (double)((double)il2cpp_codegen_multiply((double)L_40, (double)L_41))));
		double L_42 = V_38;
		double L_43 = V_35;
		double L_44 = V_36;
		V_39 = ((double)il2cpp_codegen_subtract((double)L_42, (double)((double)il2cpp_codegen_multiply((double)L_43, (double)L_44))));
		double L_45 = V_39;
		double L_46 = V_34;
		double L_47 = V_37;
		V_40 = ((double)il2cpp_codegen_subtract((double)L_45, (double)((double)il2cpp_codegen_multiply((double)L_46, (double)L_47))));
		double L_48 = V_35;
		double L_49 = V_37;
		double L_50 = V_40;
		V_10 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_48, (double)L_49)), (double)L_50));
		double L_51 = V_1;
		double L_52 = V_2;
		V_9 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_51, (double)L_52))));
		double L_53 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_54 = V_1;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_53, (double)L_54))));
		double L_55 = V_32;
		double L_56 = V_1;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_55, (double)L_56))));
		double L_57 = V_32;
		double L_58 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract((double)L_57, (double)L_58));
		double L_59 = V_1;
		double L_60 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract((double)L_59, (double)L_60));
		double L_61 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_62 = V_2;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_61, (double)L_62))));
		double L_63 = V_32;
		double L_64 = V_2;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_63, (double)L_64))));
		double L_65 = V_32;
		double L_66 = V_33;
		V_36 = ((double)il2cpp_codegen_subtract((double)L_65, (double)L_66));
		double L_67 = V_2;
		double L_68 = V_36;
		V_37 = ((double)il2cpp_codegen_subtract((double)L_67, (double)L_68));
		double L_69 = V_9;
		double L_70 = V_34;
		double L_71 = V_36;
		V_38 = ((double)il2cpp_codegen_subtract((double)L_69, (double)((double)il2cpp_codegen_multiply((double)L_70, (double)L_71))));
		double L_72 = V_38;
		double L_73 = V_35;
		double L_74 = V_36;
		V_39 = ((double)il2cpp_codegen_subtract((double)L_72, (double)((double)il2cpp_codegen_multiply((double)L_73, (double)L_74))));
		double L_75 = V_39;
		double L_76 = V_34;
		double L_77 = V_37;
		V_40 = ((double)il2cpp_codegen_subtract((double)L_75, (double)((double)il2cpp_codegen_multiply((double)L_76, (double)L_77))));
		double L_78 = V_35;
		double L_79 = V_37;
		double L_80 = V_40;
		V_11 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_78, (double)L_79)), (double)L_80));
		double L_81 = V_10;
		double L_82 = V_11;
		V_41 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_81, (double)L_82))));
		double L_83 = V_10;
		double L_84 = V_41;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_83, (double)L_84))));
		double L_85 = V_41;
		double L_86 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_85, (double)L_86));
		double L_87 = V_28;
		double L_88 = V_11;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_87, (double)L_88));
		double L_89 = V_10;
		double L_90 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_89, (double)L_90));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_91 = V_14;
		double L_92 = V_31;
		double L_93 = V_30;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_92, (double)L_93)));
		double L_94 = V_8;
		double L_95 = V_41;
		V_42 = ((double)((double)((double)il2cpp_codegen_add((double)L_94, (double)L_95))));
		double L_96 = V_42;
		double L_97 = V_8;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_96, (double)L_97))));
		double L_98 = V_42;
		double L_99 = V_28;
		V_29 = ((double)il2cpp_codegen_subtract((double)L_98, (double)L_99));
		double L_100 = V_41;
		double L_101 = V_28;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_100, (double)L_101));
		double L_102 = V_8;
		double L_103 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_102, (double)L_103));
		double L_104 = V_31;
		double L_105 = V_30;
		V_43 = ((double)il2cpp_codegen_add((double)L_104, (double)L_105));
		double L_106 = V_43;
		double L_107 = V_9;
		V_41 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_106, (double)L_107))));
		double L_108 = V_43;
		double L_109 = V_41;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_108, (double)L_109))));
		double L_110 = V_41;
		double L_111 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_110, (double)L_111));
		double L_112 = V_28;
		double L_113 = V_9;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_112, (double)L_113));
		double L_114 = V_43;
		double L_115 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_114, (double)L_115));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_116 = V_14;
		double L_117 = V_31;
		double L_118 = V_30;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_117, (double)L_118)));
		double L_119 = V_42;
		double L_120 = V_41;
		V_19 = ((double)((double)((double)il2cpp_codegen_add((double)L_119, (double)L_120))));
		double L_121 = V_19;
		double L_122 = V_42;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_121, (double)L_122))));
		double L_123 = V_19;
		double L_124 = V_28;
		V_29 = ((double)il2cpp_codegen_subtract((double)L_123, (double)L_124));
		double L_125 = V_41;
		double L_126 = V_28;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_125, (double)L_126));
		double L_127 = V_42;
		double L_128 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_127, (double)L_128));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_129 = V_14;
		double L_130 = V_31;
		double L_131 = V_30;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_130, (double)L_131)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_132 = V_14;
		double L_133 = V_19;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_133);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_134 = V_14;
		double L_135;
		L_135 = RobustPredicates_Estimate_m0A4C1ECAEA23C146A54F2191C79B3F72C2B4B096(__this, 4, L_134, /*hidden argument*/NULL);
		V_12 = L_135;
		double L_136 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_ccwerrboundB_6();
		double L_137 = ___detsum3;
		V_13 = ((double)il2cpp_codegen_multiply((double)L_136, (double)L_137));
		double L_138 = V_12;
		double L_139 = V_13;
		if ((((double)L_138) >= ((double)L_139)))
		{
			goto IL_021e;
		}
	}
	{
		double L_140 = V_12;
		double L_141 = V_13;
		G_B3_0 = ((((int32_t)((!(((double)((-L_140))) >= ((double)L_141)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_021f;
	}

IL_021e:
	{
		G_B3_0 = 1;
	}

IL_021f:
	{
		V_44 = (bool)G_B3_0;
		bool L_142 = V_44;
		if (!L_142)
		{
			goto IL_022f;
		}
	}
	{
		double L_143 = V_12;
		V_45 = L_143;
		goto IL_089b;
	}

IL_022f:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_144 = ___pa0;
		NullCheck(L_144);
		double L_145 = L_144->get_x_2();
		double L_146 = V_0;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_145, (double)L_146))));
		double L_147 = V_0;
		double L_148 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_147, (double)L_148));
		double L_149 = V_28;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_150 = ___pc2;
		NullCheck(L_150);
		double L_151 = L_150->get_x_2();
		V_30 = ((double)il2cpp_codegen_subtract((double)L_149, (double)L_151));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_152 = ___pa0;
		NullCheck(L_152);
		double L_153 = L_152->get_x_2();
		double L_154 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_153, (double)L_154));
		double L_155 = V_31;
		double L_156 = V_30;
		V_4 = ((double)il2cpp_codegen_add((double)L_155, (double)L_156));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_157 = ___pb1;
		NullCheck(L_157);
		double L_158 = L_157->get_x_2();
		double L_159 = V_2;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_158, (double)L_159))));
		double L_160 = V_2;
		double L_161 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_160, (double)L_161));
		double L_162 = V_28;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_163 = ___pc2;
		NullCheck(L_163);
		double L_164 = L_163->get_x_2();
		V_30 = ((double)il2cpp_codegen_subtract((double)L_162, (double)L_164));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_165 = ___pb1;
		NullCheck(L_165);
		double L_166 = L_165->get_x_2();
		double L_167 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_166, (double)L_167));
		double L_168 = V_31;
		double L_169 = V_30;
		V_6 = ((double)il2cpp_codegen_add((double)L_168, (double)L_169));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_170 = ___pa0;
		NullCheck(L_170);
		double L_171 = L_170->get_y_3();
		double L_172 = V_1;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_171, (double)L_172))));
		double L_173 = V_1;
		double L_174 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_173, (double)L_174));
		double L_175 = V_28;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_176 = ___pc2;
		NullCheck(L_176);
		double L_177 = L_176->get_y_3();
		V_30 = ((double)il2cpp_codegen_subtract((double)L_175, (double)L_177));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_178 = ___pa0;
		NullCheck(L_178);
		double L_179 = L_178->get_y_3();
		double L_180 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_179, (double)L_180));
		double L_181 = V_31;
		double L_182 = V_30;
		V_5 = ((double)il2cpp_codegen_add((double)L_181, (double)L_182));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_183 = ___pb1;
		NullCheck(L_183);
		double L_184 = L_183->get_y_3();
		double L_185 = V_3;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_184, (double)L_185))));
		double L_186 = V_3;
		double L_187 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_186, (double)L_187));
		double L_188 = V_28;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_189 = ___pc2;
		NullCheck(L_189);
		double L_190 = L_189->get_y_3();
		V_30 = ((double)il2cpp_codegen_subtract((double)L_188, (double)L_190));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_191 = ___pb1;
		NullCheck(L_191);
		double L_192 = L_191->get_y_3();
		double L_193 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_192, (double)L_193));
		double L_194 = V_31;
		double L_195 = V_30;
		V_7 = ((double)il2cpp_codegen_add((double)L_194, (double)L_195));
		double L_196 = V_4;
		if ((!(((double)L_196) == ((double)(0.0)))))
		{
			goto IL_031d;
		}
	}
	{
		double L_197 = V_5;
		if ((!(((double)L_197) == ((double)(0.0)))))
		{
			goto IL_031d;
		}
	}
	{
		double L_198 = V_6;
		if ((!(((double)L_198) == ((double)(0.0)))))
		{
			goto IL_031d;
		}
	}
	{
		double L_199 = V_7;
		G_B10_0 = ((((double)L_199) == ((double)(0.0)))? 1 : 0);
		goto IL_031e;
	}

IL_031d:
	{
		G_B10_0 = 0;
	}

IL_031e:
	{
		V_46 = (bool)G_B10_0;
		bool L_200 = V_46;
		if (!L_200)
		{
			goto IL_032e;
		}
	}
	{
		double L_201 = V_12;
		V_45 = L_201;
		goto IL_089b;
	}

IL_032e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_202 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_ccwerrboundC_7();
		double L_203 = ___detsum3;
		double L_204 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_resulterrbound_4();
		double L_205 = V_12;
		G_B13_0 = L_204;
		G_B13_1 = ((double)il2cpp_codegen_multiply((double)L_202, (double)L_203));
		if ((((double)L_205) >= ((double)(0.0))))
		{
			G_B14_0 = L_204;
			G_B14_1 = ((double)il2cpp_codegen_multiply((double)L_202, (double)L_203));
			goto IL_034d;
		}
	}
	{
		double L_206 = V_12;
		G_B15_0 = ((-L_206));
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_034f;
	}

IL_034d:
	{
		double L_207 = V_12;
		G_B15_0 = L_207;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_034f:
	{
		V_13 = ((double)il2cpp_codegen_add((double)G_B15_2, (double)((double)il2cpp_codegen_multiply((double)G_B15_1, (double)G_B15_0))));
		double L_208 = V_12;
		double L_209 = V_0;
		double L_210 = V_7;
		double L_211 = V_3;
		double L_212 = V_4;
		double L_213 = V_1;
		double L_214 = V_6;
		double L_215 = V_2;
		double L_216 = V_5;
		V_12 = ((double)il2cpp_codegen_add((double)L_208, (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_209, (double)L_210)), (double)((double)il2cpp_codegen_multiply((double)L_211, (double)L_212)))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_213, (double)L_214)), (double)((double)il2cpp_codegen_multiply((double)L_215, (double)L_216))))))));
		double L_217 = V_12;
		double L_218 = V_13;
		if ((((double)L_217) >= ((double)L_218)))
		{
			goto IL_037d;
		}
	}
	{
		double L_219 = V_12;
		double L_220 = V_13;
		G_B18_0 = ((((int32_t)((!(((double)((-L_219))) >= ((double)L_220)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_037e;
	}

IL_037d:
	{
		G_B18_0 = 1;
	}

IL_037e:
	{
		V_47 = (bool)G_B18_0;
		bool L_221 = V_47;
		if (!L_221)
		{
			goto IL_038e;
		}
	}
	{
		double L_222 = V_12;
		V_45 = L_222;
		goto IL_089b;
	}

IL_038e:
	{
		double L_223 = V_4;
		double L_224 = V_3;
		V_24 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_223, (double)L_224))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_225 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_226 = V_4;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_225, (double)L_226))));
		double L_227 = V_32;
		double L_228 = V_4;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_227, (double)L_228))));
		double L_229 = V_32;
		double L_230 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract((double)L_229, (double)L_230));
		double L_231 = V_4;
		double L_232 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract((double)L_231, (double)L_232));
		double L_233 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_234 = V_3;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_233, (double)L_234))));
		double L_235 = V_32;
		double L_236 = V_3;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_235, (double)L_236))));
		double L_237 = V_32;
		double L_238 = V_33;
		V_36 = ((double)il2cpp_codegen_subtract((double)L_237, (double)L_238));
		double L_239 = V_3;
		double L_240 = V_36;
		V_37 = ((double)il2cpp_codegen_subtract((double)L_239, (double)L_240));
		double L_241 = V_24;
		double L_242 = V_34;
		double L_243 = V_36;
		V_38 = ((double)il2cpp_codegen_subtract((double)L_241, (double)((double)il2cpp_codegen_multiply((double)L_242, (double)L_243))));
		double L_244 = V_38;
		double L_245 = V_35;
		double L_246 = V_36;
		V_39 = ((double)il2cpp_codegen_subtract((double)L_244, (double)((double)il2cpp_codegen_multiply((double)L_245, (double)L_246))));
		double L_247 = V_39;
		double L_248 = V_34;
		double L_249 = V_37;
		V_40 = ((double)il2cpp_codegen_subtract((double)L_247, (double)((double)il2cpp_codegen_multiply((double)L_248, (double)L_249))));
		double L_250 = V_35;
		double L_251 = V_37;
		double L_252 = V_40;
		V_26 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_250, (double)L_251)), (double)L_252));
		double L_253 = V_5;
		double L_254 = V_2;
		V_25 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_253, (double)L_254))));
		double L_255 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_256 = V_5;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_255, (double)L_256))));
		double L_257 = V_32;
		double L_258 = V_5;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_257, (double)L_258))));
		double L_259 = V_32;
		double L_260 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract((double)L_259, (double)L_260));
		double L_261 = V_5;
		double L_262 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract((double)L_261, (double)L_262));
		double L_263 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_264 = V_2;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_263, (double)L_264))));
		double L_265 = V_32;
		double L_266 = V_2;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_265, (double)L_266))));
		double L_267 = V_32;
		double L_268 = V_33;
		V_36 = ((double)il2cpp_codegen_subtract((double)L_267, (double)L_268));
		double L_269 = V_2;
		double L_270 = V_36;
		V_37 = ((double)il2cpp_codegen_subtract((double)L_269, (double)L_270));
		double L_271 = V_25;
		double L_272 = V_34;
		double L_273 = V_36;
		V_38 = ((double)il2cpp_codegen_subtract((double)L_271, (double)((double)il2cpp_codegen_multiply((double)L_272, (double)L_273))));
		double L_274 = V_38;
		double L_275 = V_35;
		double L_276 = V_36;
		V_39 = ((double)il2cpp_codegen_subtract((double)L_274, (double)((double)il2cpp_codegen_multiply((double)L_275, (double)L_276))));
		double L_277 = V_39;
		double L_278 = V_34;
		double L_279 = V_37;
		V_40 = ((double)il2cpp_codegen_subtract((double)L_277, (double)((double)il2cpp_codegen_multiply((double)L_278, (double)L_279))));
		double L_280 = V_35;
		double L_281 = V_37;
		double L_282 = V_40;
		V_27 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_280, (double)L_281)), (double)L_282));
		double L_283 = V_26;
		double L_284 = V_27;
		V_41 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_283, (double)L_284))));
		double L_285 = V_26;
		double L_286 = V_41;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_285, (double)L_286))));
		double L_287 = V_41;
		double L_288 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_287, (double)L_288));
		double L_289 = V_28;
		double L_290 = V_27;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_289, (double)L_290));
		double L_291 = V_26;
		double L_292 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_291, (double)L_292));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_293 = V_15;
		double L_294 = V_31;
		double L_295 = V_30;
		NullCheck(L_293);
		(L_293)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_294, (double)L_295)));
		double L_296 = V_24;
		double L_297 = V_41;
		V_42 = ((double)((double)((double)il2cpp_codegen_add((double)L_296, (double)L_297))));
		double L_298 = V_42;
		double L_299 = V_24;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_298, (double)L_299))));
		double L_300 = V_42;
		double L_301 = V_28;
		V_29 = ((double)il2cpp_codegen_subtract((double)L_300, (double)L_301));
		double L_302 = V_41;
		double L_303 = V_28;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_302, (double)L_303));
		double L_304 = V_24;
		double L_305 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_304, (double)L_305));
		double L_306 = V_31;
		double L_307 = V_30;
		V_43 = ((double)il2cpp_codegen_add((double)L_306, (double)L_307));
		double L_308 = V_43;
		double L_309 = V_25;
		V_41 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_308, (double)L_309))));
		double L_310 = V_43;
		double L_311 = V_41;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_310, (double)L_311))));
		double L_312 = V_41;
		double L_313 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_312, (double)L_313));
		double L_314 = V_28;
		double L_315 = V_25;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_314, (double)L_315));
		double L_316 = V_43;
		double L_317 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_316, (double)L_317));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_318 = V_15;
		double L_319 = V_31;
		double L_320 = V_30;
		NullCheck(L_318);
		(L_318)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_319, (double)L_320)));
		double L_321 = V_42;
		double L_322 = V_41;
		V_23 = ((double)((double)((double)il2cpp_codegen_add((double)L_321, (double)L_322))));
		double L_323 = V_23;
		double L_324 = V_42;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_323, (double)L_324))));
		double L_325 = V_23;
		double L_326 = V_28;
		V_29 = ((double)il2cpp_codegen_subtract((double)L_325, (double)L_326));
		double L_327 = V_41;
		double L_328 = V_28;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_327, (double)L_328));
		double L_329 = V_42;
		double L_330 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_329, (double)L_330));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_331 = V_15;
		double L_332 = V_31;
		double L_333 = V_30;
		NullCheck(L_331);
		(L_331)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_332, (double)L_333)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_334 = V_15;
		double L_335 = V_23;
		NullCheck(L_334);
		(L_334)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_335);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_336 = V_14;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_337 = V_15;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_338 = V_16;
		int32_t L_339;
		L_339 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, 4, L_336, 4, L_337, L_338, /*hidden argument*/NULL);
		V_20 = L_339;
		double L_340 = V_0;
		double L_341 = V_7;
		V_24 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_340, (double)L_341))));
		double L_342 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_343 = V_0;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_342, (double)L_343))));
		double L_344 = V_32;
		double L_345 = V_0;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_344, (double)L_345))));
		double L_346 = V_32;
		double L_347 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract((double)L_346, (double)L_347));
		double L_348 = V_0;
		double L_349 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract((double)L_348, (double)L_349));
		double L_350 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_351 = V_7;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_350, (double)L_351))));
		double L_352 = V_32;
		double L_353 = V_7;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_352, (double)L_353))));
		double L_354 = V_32;
		double L_355 = V_33;
		V_36 = ((double)il2cpp_codegen_subtract((double)L_354, (double)L_355));
		double L_356 = V_7;
		double L_357 = V_36;
		V_37 = ((double)il2cpp_codegen_subtract((double)L_356, (double)L_357));
		double L_358 = V_24;
		double L_359 = V_34;
		double L_360 = V_36;
		V_38 = ((double)il2cpp_codegen_subtract((double)L_358, (double)((double)il2cpp_codegen_multiply((double)L_359, (double)L_360))));
		double L_361 = V_38;
		double L_362 = V_35;
		double L_363 = V_36;
		V_39 = ((double)il2cpp_codegen_subtract((double)L_361, (double)((double)il2cpp_codegen_multiply((double)L_362, (double)L_363))));
		double L_364 = V_39;
		double L_365 = V_34;
		double L_366 = V_37;
		V_40 = ((double)il2cpp_codegen_subtract((double)L_364, (double)((double)il2cpp_codegen_multiply((double)L_365, (double)L_366))));
		double L_367 = V_35;
		double L_368 = V_37;
		double L_369 = V_40;
		V_26 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_367, (double)L_368)), (double)L_369));
		double L_370 = V_1;
		double L_371 = V_6;
		V_25 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_370, (double)L_371))));
		double L_372 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_373 = V_1;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_372, (double)L_373))));
		double L_374 = V_32;
		double L_375 = V_1;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_374, (double)L_375))));
		double L_376 = V_32;
		double L_377 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract((double)L_376, (double)L_377));
		double L_378 = V_1;
		double L_379 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract((double)L_378, (double)L_379));
		double L_380 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_381 = V_6;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_380, (double)L_381))));
		double L_382 = V_32;
		double L_383 = V_6;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_382, (double)L_383))));
		double L_384 = V_32;
		double L_385 = V_33;
		V_36 = ((double)il2cpp_codegen_subtract((double)L_384, (double)L_385));
		double L_386 = V_6;
		double L_387 = V_36;
		V_37 = ((double)il2cpp_codegen_subtract((double)L_386, (double)L_387));
		double L_388 = V_25;
		double L_389 = V_34;
		double L_390 = V_36;
		V_38 = ((double)il2cpp_codegen_subtract((double)L_388, (double)((double)il2cpp_codegen_multiply((double)L_389, (double)L_390))));
		double L_391 = V_38;
		double L_392 = V_35;
		double L_393 = V_36;
		V_39 = ((double)il2cpp_codegen_subtract((double)L_391, (double)((double)il2cpp_codegen_multiply((double)L_392, (double)L_393))));
		double L_394 = V_39;
		double L_395 = V_34;
		double L_396 = V_37;
		V_40 = ((double)il2cpp_codegen_subtract((double)L_394, (double)((double)il2cpp_codegen_multiply((double)L_395, (double)L_396))));
		double L_397 = V_35;
		double L_398 = V_37;
		double L_399 = V_40;
		V_27 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_397, (double)L_398)), (double)L_399));
		double L_400 = V_26;
		double L_401 = V_27;
		V_41 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_400, (double)L_401))));
		double L_402 = V_26;
		double L_403 = V_41;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_402, (double)L_403))));
		double L_404 = V_41;
		double L_405 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_404, (double)L_405));
		double L_406 = V_28;
		double L_407 = V_27;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_406, (double)L_407));
		double L_408 = V_26;
		double L_409 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_408, (double)L_409));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_410 = V_15;
		double L_411 = V_31;
		double L_412 = V_30;
		NullCheck(L_410);
		(L_410)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_411, (double)L_412)));
		double L_413 = V_24;
		double L_414 = V_41;
		V_42 = ((double)((double)((double)il2cpp_codegen_add((double)L_413, (double)L_414))));
		double L_415 = V_42;
		double L_416 = V_24;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_415, (double)L_416))));
		double L_417 = V_42;
		double L_418 = V_28;
		V_29 = ((double)il2cpp_codegen_subtract((double)L_417, (double)L_418));
		double L_419 = V_41;
		double L_420 = V_28;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_419, (double)L_420));
		double L_421 = V_24;
		double L_422 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_421, (double)L_422));
		double L_423 = V_31;
		double L_424 = V_30;
		V_43 = ((double)il2cpp_codegen_add((double)L_423, (double)L_424));
		double L_425 = V_43;
		double L_426 = V_25;
		V_41 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_425, (double)L_426))));
		double L_427 = V_43;
		double L_428 = V_41;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_427, (double)L_428))));
		double L_429 = V_41;
		double L_430 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_429, (double)L_430));
		double L_431 = V_28;
		double L_432 = V_25;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_431, (double)L_432));
		double L_433 = V_43;
		double L_434 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_433, (double)L_434));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_435 = V_15;
		double L_436 = V_31;
		double L_437 = V_30;
		NullCheck(L_435);
		(L_435)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_436, (double)L_437)));
		double L_438 = V_42;
		double L_439 = V_41;
		V_23 = ((double)((double)((double)il2cpp_codegen_add((double)L_438, (double)L_439))));
		double L_440 = V_23;
		double L_441 = V_42;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_440, (double)L_441))));
		double L_442 = V_23;
		double L_443 = V_28;
		V_29 = ((double)il2cpp_codegen_subtract((double)L_442, (double)L_443));
		double L_444 = V_41;
		double L_445 = V_28;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_444, (double)L_445));
		double L_446 = V_42;
		double L_447 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_446, (double)L_447));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_448 = V_15;
		double L_449 = V_31;
		double L_450 = V_30;
		NullCheck(L_448);
		(L_448)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_449, (double)L_450)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_451 = V_15;
		double L_452 = V_23;
		NullCheck(L_451);
		(L_451)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_452);
		int32_t L_453 = V_20;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_454 = V_16;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_455 = V_15;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_456 = V_17;
		int32_t L_457;
		L_457 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_453, L_454, 4, L_455, L_456, /*hidden argument*/NULL);
		V_21 = L_457;
		double L_458 = V_4;
		double L_459 = V_7;
		V_24 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_458, (double)L_459))));
		double L_460 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_461 = V_4;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_460, (double)L_461))));
		double L_462 = V_32;
		double L_463 = V_4;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_462, (double)L_463))));
		double L_464 = V_32;
		double L_465 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract((double)L_464, (double)L_465));
		double L_466 = V_4;
		double L_467 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract((double)L_466, (double)L_467));
		double L_468 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_469 = V_7;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_468, (double)L_469))));
		double L_470 = V_32;
		double L_471 = V_7;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_470, (double)L_471))));
		double L_472 = V_32;
		double L_473 = V_33;
		V_36 = ((double)il2cpp_codegen_subtract((double)L_472, (double)L_473));
		double L_474 = V_7;
		double L_475 = V_36;
		V_37 = ((double)il2cpp_codegen_subtract((double)L_474, (double)L_475));
		double L_476 = V_24;
		double L_477 = V_34;
		double L_478 = V_36;
		V_38 = ((double)il2cpp_codegen_subtract((double)L_476, (double)((double)il2cpp_codegen_multiply((double)L_477, (double)L_478))));
		double L_479 = V_38;
		double L_480 = V_35;
		double L_481 = V_36;
		V_39 = ((double)il2cpp_codegen_subtract((double)L_479, (double)((double)il2cpp_codegen_multiply((double)L_480, (double)L_481))));
		double L_482 = V_39;
		double L_483 = V_34;
		double L_484 = V_37;
		V_40 = ((double)il2cpp_codegen_subtract((double)L_482, (double)((double)il2cpp_codegen_multiply((double)L_483, (double)L_484))));
		double L_485 = V_35;
		double L_486 = V_37;
		double L_487 = V_40;
		V_26 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_485, (double)L_486)), (double)L_487));
		double L_488 = V_5;
		double L_489 = V_6;
		V_25 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_488, (double)L_489))));
		double L_490 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_491 = V_5;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_490, (double)L_491))));
		double L_492 = V_32;
		double L_493 = V_5;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_492, (double)L_493))));
		double L_494 = V_32;
		double L_495 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract((double)L_494, (double)L_495));
		double L_496 = V_5;
		double L_497 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract((double)L_496, (double)L_497));
		double L_498 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_499 = V_6;
		V_32 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_498, (double)L_499))));
		double L_500 = V_32;
		double L_501 = V_6;
		V_33 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_500, (double)L_501))));
		double L_502 = V_32;
		double L_503 = V_33;
		V_36 = ((double)il2cpp_codegen_subtract((double)L_502, (double)L_503));
		double L_504 = V_6;
		double L_505 = V_36;
		V_37 = ((double)il2cpp_codegen_subtract((double)L_504, (double)L_505));
		double L_506 = V_25;
		double L_507 = V_34;
		double L_508 = V_36;
		V_38 = ((double)il2cpp_codegen_subtract((double)L_506, (double)((double)il2cpp_codegen_multiply((double)L_507, (double)L_508))));
		double L_509 = V_38;
		double L_510 = V_35;
		double L_511 = V_36;
		V_39 = ((double)il2cpp_codegen_subtract((double)L_509, (double)((double)il2cpp_codegen_multiply((double)L_510, (double)L_511))));
		double L_512 = V_39;
		double L_513 = V_34;
		double L_514 = V_37;
		V_40 = ((double)il2cpp_codegen_subtract((double)L_512, (double)((double)il2cpp_codegen_multiply((double)L_513, (double)L_514))));
		double L_515 = V_35;
		double L_516 = V_37;
		double L_517 = V_40;
		V_27 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_515, (double)L_516)), (double)L_517));
		double L_518 = V_26;
		double L_519 = V_27;
		V_41 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_518, (double)L_519))));
		double L_520 = V_26;
		double L_521 = V_41;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_520, (double)L_521))));
		double L_522 = V_41;
		double L_523 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_522, (double)L_523));
		double L_524 = V_28;
		double L_525 = V_27;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_524, (double)L_525));
		double L_526 = V_26;
		double L_527 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_526, (double)L_527));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_528 = V_15;
		double L_529 = V_31;
		double L_530 = V_30;
		NullCheck(L_528);
		(L_528)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_529, (double)L_530)));
		double L_531 = V_24;
		double L_532 = V_41;
		V_42 = ((double)((double)((double)il2cpp_codegen_add((double)L_531, (double)L_532))));
		double L_533 = V_42;
		double L_534 = V_24;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_533, (double)L_534))));
		double L_535 = V_42;
		double L_536 = V_28;
		V_29 = ((double)il2cpp_codegen_subtract((double)L_535, (double)L_536));
		double L_537 = V_41;
		double L_538 = V_28;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_537, (double)L_538));
		double L_539 = V_24;
		double L_540 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_539, (double)L_540));
		double L_541 = V_31;
		double L_542 = V_30;
		V_43 = ((double)il2cpp_codegen_add((double)L_541, (double)L_542));
		double L_543 = V_43;
		double L_544 = V_25;
		V_41 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_543, (double)L_544))));
		double L_545 = V_43;
		double L_546 = V_41;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_545, (double)L_546))));
		double L_547 = V_41;
		double L_548 = V_28;
		V_29 = ((double)il2cpp_codegen_add((double)L_547, (double)L_548));
		double L_549 = V_28;
		double L_550 = V_25;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_549, (double)L_550));
		double L_551 = V_43;
		double L_552 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_551, (double)L_552));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_553 = V_15;
		double L_554 = V_31;
		double L_555 = V_30;
		NullCheck(L_553);
		(L_553)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_554, (double)L_555)));
		double L_556 = V_42;
		double L_557 = V_41;
		V_23 = ((double)((double)((double)il2cpp_codegen_add((double)L_556, (double)L_557))));
		double L_558 = V_23;
		double L_559 = V_42;
		V_28 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_558, (double)L_559))));
		double L_560 = V_23;
		double L_561 = V_28;
		V_29 = ((double)il2cpp_codegen_subtract((double)L_560, (double)L_561));
		double L_562 = V_41;
		double L_563 = V_28;
		V_30 = ((double)il2cpp_codegen_subtract((double)L_562, (double)L_563));
		double L_564 = V_42;
		double L_565 = V_29;
		V_31 = ((double)il2cpp_codegen_subtract((double)L_564, (double)L_565));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_566 = V_15;
		double L_567 = V_31;
		double L_568 = V_30;
		NullCheck(L_566);
		(L_566)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_567, (double)L_568)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_569 = V_15;
		double L_570 = V_23;
		NullCheck(L_569);
		(L_569)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_570);
		int32_t L_571 = V_21;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_572 = V_17;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_573 = V_15;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_574 = V_18;
		int32_t L_575;
		L_575 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_571, L_572, 4, L_573, L_574, /*hidden argument*/NULL);
		V_22 = L_575;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_576 = V_18;
		int32_t L_577 = V_22;
		NullCheck(L_576);
		int32_t L_578 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_577, (int32_t)1));
		double L_579 = (L_576)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		V_45 = L_579;
		goto IL_089b;
	}

IL_089b:
	{
		double L_580 = V_45;
		return L_580;
	}
}
// System.Double TriangleNet.RobustPredicates::InCircleAdapt(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_InCircleAdapt_mDC258332D1B41EF4AA3BDE47FA98BB3D63393716 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pa0, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pb1, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pc2, Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * ___pd3, double ___permanent4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_20 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_21 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_22 = NULL;
	double V_23 = 0.0;
	double V_24 = 0.0;
	double V_25 = 0.0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_42 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_43 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_44 = NULL;
	int32_t V_45 = 0;
	double V_46 = 0.0;
	double V_47 = 0.0;
	double V_48 = 0.0;
	double V_49 = 0.0;
	double V_50 = 0.0;
	double V_51 = 0.0;
	double V_52 = 0.0;
	double V_53 = 0.0;
	double V_54 = 0.0;
	double V_55 = 0.0;
	double V_56 = 0.0;
	double V_57 = 0.0;
	double V_58 = 0.0;
	double V_59 = 0.0;
	double V_60 = 0.0;
	double V_61 = 0.0;
	double V_62 = 0.0;
	double V_63 = 0.0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_64 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_65 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_66 = NULL;
	double V_67 = 0.0;
	double V_68 = 0.0;
	double V_69 = 0.0;
	double V_70 = 0.0;
	double V_71 = 0.0;
	double V_72 = 0.0;
	double V_73 = 0.0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_74 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_75 = NULL;
	double V_76 = 0.0;
	double V_77 = 0.0;
	int32_t V_78 = 0;
	int32_t V_79 = 0;
	int32_t V_80 = 0;
	int32_t V_81 = 0;
	int32_t V_82 = 0;
	int32_t V_83 = 0;
	int32_t V_84 = 0;
	int32_t V_85 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_86 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_87 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_88 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_89 = NULL;
	int32_t V_90 = 0;
	int32_t V_91 = 0;
	int32_t V_92 = 0;
	int32_t V_93 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_94 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_95 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_96 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_97 = NULL;
	int32_t V_98 = 0;
	int32_t V_99 = 0;
	int32_t V_100 = 0;
	int32_t V_101 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_102 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_103 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_104 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_105 = NULL;
	int32_t V_106 = 0;
	int32_t V_107 = 0;
	int32_t V_108 = 0;
	int32_t V_109 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_110 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_111 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_112 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_113 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_114 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_115 = NULL;
	int32_t V_116 = 0;
	int32_t V_117 = 0;
	int32_t V_118 = 0;
	int32_t V_119 = 0;
	int32_t V_120 = 0;
	int32_t V_121 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_122 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_123 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_124 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_125 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_126 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_127 = NULL;
	int32_t V_128 = 0;
	int32_t V_129 = 0;
	int32_t V_130 = 0;
	int32_t V_131 = 0;
	int32_t V_132 = 0;
	int32_t V_133 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_134 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_135 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_136 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_137 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_138 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_139 = NULL;
	int32_t V_140 = 0;
	int32_t V_141 = 0;
	int32_t V_142 = 0;
	int32_t V_143 = 0;
	int32_t V_144 = 0;
	int32_t V_145 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_146 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_147 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_148 = NULL;
	int32_t V_149 = 0;
	int32_t V_150 = 0;
	int32_t V_151 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_152 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_153 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_154 = NULL;
	int32_t V_155 = 0;
	int32_t V_156 = 0;
	int32_t V_157 = 0;
	double V_158 = 0.0;
	double V_159 = 0.0;
	double V_160 = 0.0;
	double V_161 = 0.0;
	double V_162 = 0.0;
	double V_163 = 0.0;
	double V_164 = 0.0;
	double V_165 = 0.0;
	double V_166 = 0.0;
	double V_167 = 0.0;
	double V_168 = 0.0;
	double V_169 = 0.0;
	double V_170 = 0.0;
	double V_171 = 0.0;
	double V_172 = 0.0;
	double V_173 = 0.0;
	double V_174 = 0.0;
	double V_175 = 0.0;
	double V_176 = 0.0;
	double V_177 = 0.0;
	bool V_178 = false;
	double V_179 = 0.0;
	bool V_180 = false;
	bool V_181 = false;
	bool V_182 = false;
	bool V_183 = false;
	bool V_184 = false;
	bool V_185 = false;
	bool V_186 = false;
	bool V_187 = false;
	bool V_188 = false;
	bool V_189 = false;
	bool V_190 = false;
	bool V_191 = false;
	bool V_192 = false;
	bool V_193 = false;
	bool V_194 = false;
	bool V_195 = false;
	bool V_196 = false;
	bool V_197 = false;
	bool V_198 = false;
	bool V_199 = false;
	bool V_200 = false;
	bool V_201 = false;
	bool V_202 = false;
	bool V_203 = false;
	bool V_204 = false;
	bool V_205 = false;
	bool V_206 = false;
	bool V_207 = false;
	bool V_208 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B12_0 = 0;
	double G_B16_0 = 0.0;
	double G_B16_1 = 0.0;
	double G_B15_0 = 0.0;
	double G_B15_1 = 0.0;
	double G_B17_0 = 0.0;
	double G_B17_1 = 0.0;
	double G_B17_2 = 0.0;
	int32_t G_B20_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B64_0 = 0;
	int32_t G_B79_0 = 0;
	int32_t G_B85_0 = 0;
	int32_t G_B100_0 = 0;
	int32_t G_B106_0 = 0;
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_20 = L_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_21 = L_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_22 = L_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_64 = L_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_65 = L_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_5 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_66 = L_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_6 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)5);
		V_74 = L_6;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)5);
		V_75 = L_7;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_8 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_86 = L_8;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_87 = L_9;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_10 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_88 = L_10;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_11 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_89 = L_11;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_12 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_94 = L_12;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_13 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_95 = L_13;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_14 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_96 = L_14;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_15 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_97 = L_15;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_16 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_102 = L_16;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_103 = L_17;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_18 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_104 = L_18;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_19 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_105 = L_19;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_20 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_110 = L_20;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_21 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_111 = L_21;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_22 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_112 = L_22;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_23 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_113 = L_23;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_114 = L_24;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_25 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_115 = L_25;
		V_116 = 0;
		V_117 = 0;
		V_118 = 0;
		V_119 = 0;
		V_120 = 0;
		V_121 = 0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_26 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_122 = L_26;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_27 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_123 = L_27;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_28 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_124 = L_28;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_29 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_125 = L_29;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_30 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_126 = L_30;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_31 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_127 = L_31;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_32 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_134 = L_32;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_33 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_135 = L_33;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_34 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_136 = L_34;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_35 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_137 = L_35;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_36 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_138 = L_36;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_37 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_139 = L_37;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_38 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_146 = L_38;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_39 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_147 = L_39;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_40 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		V_148 = L_40;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_41 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_152 = L_41;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_42 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_153 = L_42;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_43 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_154 = L_43;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_44 = ___pa0;
		NullCheck(L_44);
		double L_45 = L_44->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_46 = ___pd3;
		NullCheck(L_46);
		double L_47 = L_46->get_x_2();
		V_0 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_45, (double)L_47))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_48 = ___pb1;
		NullCheck(L_48);
		double L_49 = L_48->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_50 = ___pd3;
		NullCheck(L_50);
		double L_51 = L_50->get_x_2();
		V_1 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_49, (double)L_51))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_52 = ___pc2;
		NullCheck(L_52);
		double L_53 = L_52->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_54 = ___pd3;
		NullCheck(L_54);
		double L_55 = L_54->get_x_2();
		V_2 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_53, (double)L_55))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_56 = ___pa0;
		NullCheck(L_56);
		double L_57 = L_56->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_58 = ___pd3;
		NullCheck(L_58);
		double L_59 = L_58->get_y_3();
		V_3 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_57, (double)L_59))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_60 = ___pb1;
		NullCheck(L_60);
		double L_61 = L_60->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_62 = ___pd3;
		NullCheck(L_62);
		double L_63 = L_62->get_y_3();
		V_4 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_61, (double)L_63))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_64 = ___pc2;
		NullCheck(L_64);
		double L_65 = L_64->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_66 = ___pd3;
		NullCheck(L_66);
		double L_67 = L_66->get_y_3();
		V_5 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_65, (double)L_67))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_68 = ___pa0;
		NullCheck(L_68);
		double L_69 = L_68->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_70 = ___pd3;
		NullCheck(L_70);
		double L_71 = L_70->get_x_2();
		V_0 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_69, (double)L_71))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_72 = ___pb1;
		NullCheck(L_72);
		double L_73 = L_72->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_74 = ___pd3;
		NullCheck(L_74);
		double L_75 = L_74->get_x_2();
		V_1 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_73, (double)L_75))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_76 = ___pc2;
		NullCheck(L_76);
		double L_77 = L_76->get_x_2();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_78 = ___pd3;
		NullCheck(L_78);
		double L_79 = L_78->get_x_2();
		V_2 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_77, (double)L_79))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_80 = ___pa0;
		NullCheck(L_80);
		double L_81 = L_80->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_82 = ___pd3;
		NullCheck(L_82);
		double L_83 = L_82->get_y_3();
		V_3 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_81, (double)L_83))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_84 = ___pb1;
		NullCheck(L_84);
		double L_85 = L_84->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_86 = ___pd3;
		NullCheck(L_86);
		double L_87 = L_86->get_y_3();
		V_4 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_85, (double)L_87))));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_88 = ___pc2;
		NullCheck(L_88);
		double L_89 = L_88->get_y_3();
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_90 = ___pd3;
		NullCheck(L_90);
		double L_91 = L_90->get_y_3();
		V_5 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_89, (double)L_91))));
		double L_92 = V_1;
		double L_93 = V_5;
		V_8 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_92, (double)L_93))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_94 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_95 = V_1;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_94, (double)L_95))));
		double L_96 = V_166;
		double L_97 = V_1;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_96, (double)L_97))));
		double L_98 = V_166;
		double L_99 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_98, (double)L_99));
		double L_100 = V_1;
		double L_101 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_100, (double)L_101));
		double L_102 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_103 = V_5;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_102, (double)L_103))));
		double L_104 = V_166;
		double L_105 = V_5;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_104, (double)L_105))));
		double L_106 = V_166;
		double L_107 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_106, (double)L_107));
		double L_108 = V_5;
		double L_109 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_108, (double)L_109));
		double L_110 = V_8;
		double L_111 = V_168;
		double L_112 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_110, (double)((double)il2cpp_codegen_multiply((double)L_111, (double)L_112))));
		double L_113 = V_172;
		double L_114 = V_169;
		double L_115 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_113, (double)((double)il2cpp_codegen_multiply((double)L_114, (double)L_115))));
		double L_116 = V_173;
		double L_117 = V_168;
		double L_118 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_116, (double)((double)il2cpp_codegen_multiply((double)L_117, (double)L_118))));
		double L_119 = V_169;
		double L_120 = V_171;
		double L_121 = V_174;
		V_14 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_119, (double)L_120)), (double)L_121));
		double L_122 = V_2;
		double L_123 = V_4;
		V_9 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_122, (double)L_123))));
		double L_124 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_125 = V_2;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_124, (double)L_125))));
		double L_126 = V_166;
		double L_127 = V_2;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_126, (double)L_127))));
		double L_128 = V_166;
		double L_129 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_128, (double)L_129));
		double L_130 = V_2;
		double L_131 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_130, (double)L_131));
		double L_132 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_133 = V_4;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_132, (double)L_133))));
		double L_134 = V_166;
		double L_135 = V_4;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_134, (double)L_135))));
		double L_136 = V_166;
		double L_137 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_136, (double)L_137));
		double L_138 = V_4;
		double L_139 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_138, (double)L_139));
		double L_140 = V_9;
		double L_141 = V_168;
		double L_142 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_140, (double)((double)il2cpp_codegen_multiply((double)L_141, (double)L_142))));
		double L_143 = V_172;
		double L_144 = V_169;
		double L_145 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_143, (double)((double)il2cpp_codegen_multiply((double)L_144, (double)L_145))));
		double L_146 = V_173;
		double L_147 = V_168;
		double L_148 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_146, (double)((double)il2cpp_codegen_multiply((double)L_147, (double)L_148))));
		double L_149 = V_169;
		double L_150 = V_171;
		double L_151 = V_174;
		V_15 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_149, (double)L_150)), (double)L_151));
		double L_152 = V_14;
		double L_153 = V_15;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_152, (double)L_153))));
		double L_154 = V_14;
		double L_155 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_154, (double)L_155))));
		double L_156 = V_175;
		double L_157 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_156, (double)L_157));
		double L_158 = V_162;
		double L_159 = V_15;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_158, (double)L_159));
		double L_160 = V_14;
		double L_161 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_160, (double)L_161));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_162 = V_20;
		double L_163 = V_165;
		double L_164 = V_164;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_163, (double)L_164)));
		double L_165 = V_8;
		double L_166 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_165, (double)L_166))));
		double L_167 = V_176;
		double L_168 = V_8;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_167, (double)L_168))));
		double L_169 = V_176;
		double L_170 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_169, (double)L_170));
		double L_171 = V_175;
		double L_172 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_171, (double)L_172));
		double L_173 = V_8;
		double L_174 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_173, (double)L_174));
		double L_175 = V_165;
		double L_176 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_175, (double)L_176));
		double L_177 = V_177;
		double L_178 = V_9;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_177, (double)L_178))));
		double L_179 = V_177;
		double L_180 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_179, (double)L_180))));
		double L_181 = V_175;
		double L_182 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_181, (double)L_182));
		double L_183 = V_162;
		double L_184 = V_9;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_183, (double)L_184));
		double L_185 = V_177;
		double L_186 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_185, (double)L_186));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_187 = V_20;
		double L_188 = V_165;
		double L_189 = V_164;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_188, (double)L_189)));
		double L_190 = V_176;
		double L_191 = V_175;
		V_23 = ((double)((double)((double)il2cpp_codegen_add((double)L_190, (double)L_191))));
		double L_192 = V_23;
		double L_193 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_192, (double)L_193))));
		double L_194 = V_23;
		double L_195 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_194, (double)L_195));
		double L_196 = V_175;
		double L_197 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_196, (double)L_197));
		double L_198 = V_176;
		double L_199 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_198, (double)L_199));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_200 = V_20;
		double L_201 = V_165;
		double L_202 = V_164;
		NullCheck(L_200);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_201, (double)L_202)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_203 = V_20;
		double L_204 = V_23;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_204);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_205 = V_20;
		double L_206 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_207 = __this->get_axbc_14();
		int32_t L_208;
		L_208 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_205, L_206, L_207, /*hidden argument*/NULL);
		V_26 = L_208;
		int32_t L_209 = V_26;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_210 = __this->get_axbc_14();
		double L_211 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_212 = __this->get_axxbc_15();
		int32_t L_213;
		L_213 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_209, L_210, L_211, L_212, /*hidden argument*/NULL);
		V_27 = L_213;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_214 = V_20;
		double L_215 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_216 = __this->get_aybc_16();
		int32_t L_217;
		L_217 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_214, L_215, L_216, /*hidden argument*/NULL);
		V_28 = L_217;
		int32_t L_218 = V_28;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_219 = __this->get_aybc_16();
		double L_220 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_221 = __this->get_ayybc_17();
		int32_t L_222;
		L_222 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_218, L_219, L_220, L_221, /*hidden argument*/NULL);
		V_29 = L_222;
		int32_t L_223 = V_27;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_224 = __this->get_axxbc_15();
		int32_t L_225 = V_29;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_226 = __this->get_ayybc_17();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_227 = __this->get_adet_18();
		int32_t L_228;
		L_228 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_223, L_224, L_225, L_226, L_227, /*hidden argument*/NULL);
		V_30 = L_228;
		double L_229 = V_2;
		double L_230 = V_3;
		V_10 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_229, (double)L_230))));
		double L_231 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_232 = V_2;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_231, (double)L_232))));
		double L_233 = V_166;
		double L_234 = V_2;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_233, (double)L_234))));
		double L_235 = V_166;
		double L_236 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_235, (double)L_236));
		double L_237 = V_2;
		double L_238 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_237, (double)L_238));
		double L_239 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_240 = V_3;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_239, (double)L_240))));
		double L_241 = V_166;
		double L_242 = V_3;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_241, (double)L_242))));
		double L_243 = V_166;
		double L_244 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_243, (double)L_244));
		double L_245 = V_3;
		double L_246 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_245, (double)L_246));
		double L_247 = V_10;
		double L_248 = V_168;
		double L_249 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_247, (double)((double)il2cpp_codegen_multiply((double)L_248, (double)L_249))));
		double L_250 = V_172;
		double L_251 = V_169;
		double L_252 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_250, (double)((double)il2cpp_codegen_multiply((double)L_251, (double)L_252))));
		double L_253 = V_173;
		double L_254 = V_168;
		double L_255 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_253, (double)((double)il2cpp_codegen_multiply((double)L_254, (double)L_255))));
		double L_256 = V_169;
		double L_257 = V_171;
		double L_258 = V_174;
		V_16 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_256, (double)L_257)), (double)L_258));
		double L_259 = V_0;
		double L_260 = V_5;
		V_11 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_259, (double)L_260))));
		double L_261 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_262 = V_0;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_261, (double)L_262))));
		double L_263 = V_166;
		double L_264 = V_0;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_263, (double)L_264))));
		double L_265 = V_166;
		double L_266 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_265, (double)L_266));
		double L_267 = V_0;
		double L_268 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_267, (double)L_268));
		double L_269 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_270 = V_5;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_269, (double)L_270))));
		double L_271 = V_166;
		double L_272 = V_5;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_271, (double)L_272))));
		double L_273 = V_166;
		double L_274 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_273, (double)L_274));
		double L_275 = V_5;
		double L_276 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_275, (double)L_276));
		double L_277 = V_11;
		double L_278 = V_168;
		double L_279 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_277, (double)((double)il2cpp_codegen_multiply((double)L_278, (double)L_279))));
		double L_280 = V_172;
		double L_281 = V_169;
		double L_282 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_280, (double)((double)il2cpp_codegen_multiply((double)L_281, (double)L_282))));
		double L_283 = V_173;
		double L_284 = V_168;
		double L_285 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_283, (double)((double)il2cpp_codegen_multiply((double)L_284, (double)L_285))));
		double L_286 = V_169;
		double L_287 = V_171;
		double L_288 = V_174;
		V_17 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_286, (double)L_287)), (double)L_288));
		double L_289 = V_16;
		double L_290 = V_17;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_289, (double)L_290))));
		double L_291 = V_16;
		double L_292 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_291, (double)L_292))));
		double L_293 = V_175;
		double L_294 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_293, (double)L_294));
		double L_295 = V_162;
		double L_296 = V_17;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_295, (double)L_296));
		double L_297 = V_16;
		double L_298 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_297, (double)L_298));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_299 = V_21;
		double L_300 = V_165;
		double L_301 = V_164;
		NullCheck(L_299);
		(L_299)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_300, (double)L_301)));
		double L_302 = V_10;
		double L_303 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_302, (double)L_303))));
		double L_304 = V_176;
		double L_305 = V_10;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_304, (double)L_305))));
		double L_306 = V_176;
		double L_307 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_306, (double)L_307));
		double L_308 = V_175;
		double L_309 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_308, (double)L_309));
		double L_310 = V_10;
		double L_311 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_310, (double)L_311));
		double L_312 = V_165;
		double L_313 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_312, (double)L_313));
		double L_314 = V_177;
		double L_315 = V_11;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_314, (double)L_315))));
		double L_316 = V_177;
		double L_317 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_316, (double)L_317))));
		double L_318 = V_175;
		double L_319 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_318, (double)L_319));
		double L_320 = V_162;
		double L_321 = V_11;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_320, (double)L_321));
		double L_322 = V_177;
		double L_323 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_322, (double)L_323));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_324 = V_21;
		double L_325 = V_165;
		double L_326 = V_164;
		NullCheck(L_324);
		(L_324)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_325, (double)L_326)));
		double L_327 = V_176;
		double L_328 = V_175;
		V_24 = ((double)((double)((double)il2cpp_codegen_add((double)L_327, (double)L_328))));
		double L_329 = V_24;
		double L_330 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_329, (double)L_330))));
		double L_331 = V_24;
		double L_332 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_331, (double)L_332));
		double L_333 = V_175;
		double L_334 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_333, (double)L_334));
		double L_335 = V_176;
		double L_336 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_335, (double)L_336));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_337 = V_21;
		double L_338 = V_165;
		double L_339 = V_164;
		NullCheck(L_337);
		(L_337)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_338, (double)L_339)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_340 = V_21;
		double L_341 = V_24;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_341);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_342 = V_21;
		double L_343 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_344 = __this->get_bxca_19();
		int32_t L_345;
		L_345 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_342, L_343, L_344, /*hidden argument*/NULL);
		V_31 = L_345;
		int32_t L_346 = V_31;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_347 = __this->get_bxca_19();
		double L_348 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_349 = __this->get_bxxca_20();
		int32_t L_350;
		L_350 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_346, L_347, L_348, L_349, /*hidden argument*/NULL);
		V_32 = L_350;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_351 = V_21;
		double L_352 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_353 = __this->get_byca_21();
		int32_t L_354;
		L_354 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_351, L_352, L_353, /*hidden argument*/NULL);
		V_33 = L_354;
		int32_t L_355 = V_33;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_356 = __this->get_byca_21();
		double L_357 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_358 = __this->get_byyca_22();
		int32_t L_359;
		L_359 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_355, L_356, L_357, L_358, /*hidden argument*/NULL);
		V_34 = L_359;
		int32_t L_360 = V_32;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_361 = __this->get_bxxca_20();
		int32_t L_362 = V_34;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_363 = __this->get_byyca_22();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_364 = __this->get_bdet_23();
		int32_t L_365;
		L_365 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_360, L_361, L_362, L_363, L_364, /*hidden argument*/NULL);
		V_35 = L_365;
		double L_366 = V_0;
		double L_367 = V_4;
		V_12 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_366, (double)L_367))));
		double L_368 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_369 = V_0;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_368, (double)L_369))));
		double L_370 = V_166;
		double L_371 = V_0;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_370, (double)L_371))));
		double L_372 = V_166;
		double L_373 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_372, (double)L_373));
		double L_374 = V_0;
		double L_375 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_374, (double)L_375));
		double L_376 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_377 = V_4;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_376, (double)L_377))));
		double L_378 = V_166;
		double L_379 = V_4;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_378, (double)L_379))));
		double L_380 = V_166;
		double L_381 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_380, (double)L_381));
		double L_382 = V_4;
		double L_383 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_382, (double)L_383));
		double L_384 = V_12;
		double L_385 = V_168;
		double L_386 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_384, (double)((double)il2cpp_codegen_multiply((double)L_385, (double)L_386))));
		double L_387 = V_172;
		double L_388 = V_169;
		double L_389 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_387, (double)((double)il2cpp_codegen_multiply((double)L_388, (double)L_389))));
		double L_390 = V_173;
		double L_391 = V_168;
		double L_392 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_390, (double)((double)il2cpp_codegen_multiply((double)L_391, (double)L_392))));
		double L_393 = V_169;
		double L_394 = V_171;
		double L_395 = V_174;
		V_18 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_393, (double)L_394)), (double)L_395));
		double L_396 = V_1;
		double L_397 = V_3;
		V_13 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_396, (double)L_397))));
		double L_398 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_399 = V_1;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_398, (double)L_399))));
		double L_400 = V_166;
		double L_401 = V_1;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_400, (double)L_401))));
		double L_402 = V_166;
		double L_403 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_402, (double)L_403));
		double L_404 = V_1;
		double L_405 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_404, (double)L_405));
		double L_406 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_407 = V_3;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_406, (double)L_407))));
		double L_408 = V_166;
		double L_409 = V_3;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_408, (double)L_409))));
		double L_410 = V_166;
		double L_411 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_410, (double)L_411));
		double L_412 = V_3;
		double L_413 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_412, (double)L_413));
		double L_414 = V_13;
		double L_415 = V_168;
		double L_416 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_414, (double)((double)il2cpp_codegen_multiply((double)L_415, (double)L_416))));
		double L_417 = V_172;
		double L_418 = V_169;
		double L_419 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_417, (double)((double)il2cpp_codegen_multiply((double)L_418, (double)L_419))));
		double L_420 = V_173;
		double L_421 = V_168;
		double L_422 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_420, (double)((double)il2cpp_codegen_multiply((double)L_421, (double)L_422))));
		double L_423 = V_169;
		double L_424 = V_171;
		double L_425 = V_174;
		V_19 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_423, (double)L_424)), (double)L_425));
		double L_426 = V_18;
		double L_427 = V_19;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_426, (double)L_427))));
		double L_428 = V_18;
		double L_429 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_428, (double)L_429))));
		double L_430 = V_175;
		double L_431 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_430, (double)L_431));
		double L_432 = V_162;
		double L_433 = V_19;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_432, (double)L_433));
		double L_434 = V_18;
		double L_435 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_434, (double)L_435));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_436 = V_22;
		double L_437 = V_165;
		double L_438 = V_164;
		NullCheck(L_436);
		(L_436)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_437, (double)L_438)));
		double L_439 = V_12;
		double L_440 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_439, (double)L_440))));
		double L_441 = V_176;
		double L_442 = V_12;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_441, (double)L_442))));
		double L_443 = V_176;
		double L_444 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_443, (double)L_444));
		double L_445 = V_175;
		double L_446 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_445, (double)L_446));
		double L_447 = V_12;
		double L_448 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_447, (double)L_448));
		double L_449 = V_165;
		double L_450 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_449, (double)L_450));
		double L_451 = V_177;
		double L_452 = V_13;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_451, (double)L_452))));
		double L_453 = V_177;
		double L_454 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_453, (double)L_454))));
		double L_455 = V_175;
		double L_456 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_455, (double)L_456));
		double L_457 = V_162;
		double L_458 = V_13;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_457, (double)L_458));
		double L_459 = V_177;
		double L_460 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_459, (double)L_460));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_461 = V_22;
		double L_462 = V_165;
		double L_463 = V_164;
		NullCheck(L_461);
		(L_461)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_462, (double)L_463)));
		double L_464 = V_176;
		double L_465 = V_175;
		V_25 = ((double)((double)((double)il2cpp_codegen_add((double)L_464, (double)L_465))));
		double L_466 = V_25;
		double L_467 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_466, (double)L_467))));
		double L_468 = V_25;
		double L_469 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_468, (double)L_469));
		double L_470 = V_175;
		double L_471 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_470, (double)L_471));
		double L_472 = V_176;
		double L_473 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_472, (double)L_473));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_474 = V_22;
		double L_475 = V_165;
		double L_476 = V_164;
		NullCheck(L_474);
		(L_474)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_475, (double)L_476)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_477 = V_22;
		double L_478 = V_25;
		NullCheck(L_477);
		(L_477)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_478);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_479 = V_22;
		double L_480 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_481 = __this->get_cxab_24();
		int32_t L_482;
		L_482 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_479, L_480, L_481, /*hidden argument*/NULL);
		V_36 = L_482;
		int32_t L_483 = V_36;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_484 = __this->get_cxab_24();
		double L_485 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_486 = __this->get_cxxab_25();
		int32_t L_487;
		L_487 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_483, L_484, L_485, L_486, /*hidden argument*/NULL);
		V_37 = L_487;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_488 = V_22;
		double L_489 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_490 = __this->get_cyab_26();
		int32_t L_491;
		L_491 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_488, L_489, L_490, /*hidden argument*/NULL);
		V_38 = L_491;
		int32_t L_492 = V_38;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_493 = __this->get_cyab_26();
		double L_494 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_495 = __this->get_cyyab_27();
		int32_t L_496;
		L_496 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_492, L_493, L_494, L_495, /*hidden argument*/NULL);
		V_39 = L_496;
		int32_t L_497 = V_37;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_498 = __this->get_cxxab_25();
		int32_t L_499 = V_39;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_500 = __this->get_cyyab_27();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_501 = __this->get_cdet_28();
		int32_t L_502;
		L_502 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_497, L_498, L_499, L_500, L_501, /*hidden argument*/NULL);
		V_40 = L_502;
		int32_t L_503 = V_30;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_504 = __this->get_adet_18();
		int32_t L_505 = V_35;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_506 = __this->get_bdet_23();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_507 = __this->get_abdet_13();
		int32_t L_508;
		L_508 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_503, L_504, L_505, L_506, L_507, /*hidden argument*/NULL);
		V_41 = L_508;
		int32_t L_509 = V_41;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_510 = __this->get_abdet_13();
		int32_t L_511 = V_40;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_512 = __this->get_cdet_28();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_513 = __this->get_fin1_11();
		int32_t L_514;
		L_514 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_509, L_510, L_511, L_512, L_513, /*hidden argument*/NULL);
		V_45 = L_514;
		int32_t L_515 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_516 = __this->get_fin1_11();
		double L_517;
		L_517 = RobustPredicates_Estimate_m0A4C1ECAEA23C146A54F2191C79B3F72C2B4B096(__this, L_515, L_516, /*hidden argument*/NULL);
		V_6 = L_517;
		double L_518 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_iccerrboundB_9();
		double L_519 = ___permanent4;
		V_7 = ((double)il2cpp_codegen_multiply((double)L_518, (double)L_519));
		double L_520 = V_6;
		double L_521 = V_7;
		if ((((double)L_520) >= ((double)L_521)))
		{
			goto IL_08b9;
		}
	}
	{
		double L_522 = V_6;
		double L_523 = V_7;
		G_B3_0 = ((((int32_t)((!(((double)((-L_522))) >= ((double)L_523)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_08ba;
	}

IL_08b9:
	{
		G_B3_0 = 1;
	}

IL_08ba:
	{
		V_178 = (bool)G_B3_0;
		bool L_524 = V_178;
		if (!L_524)
		{
			goto IL_08ca;
		}
	}
	{
		double L_525 = V_6;
		V_179 = L_525;
		goto IL_3068;
	}

IL_08ca:
	{
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_526 = ___pa0;
		NullCheck(L_526);
		double L_527 = L_526->get_x_2();
		double L_528 = V_0;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_527, (double)L_528))));
		double L_529 = V_0;
		double L_530 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_529, (double)L_530));
		double L_531 = V_162;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_532 = ___pd3;
		NullCheck(L_532);
		double L_533 = L_532->get_x_2();
		V_164 = ((double)il2cpp_codegen_subtract((double)L_531, (double)L_533));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_534 = ___pa0;
		NullCheck(L_534);
		double L_535 = L_534->get_x_2();
		double L_536 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_535, (double)L_536));
		double L_537 = V_165;
		double L_538 = V_164;
		V_46 = ((double)il2cpp_codegen_add((double)L_537, (double)L_538));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_539 = ___pa0;
		NullCheck(L_539);
		double L_540 = L_539->get_y_3();
		double L_541 = V_3;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_540, (double)L_541))));
		double L_542 = V_3;
		double L_543 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_542, (double)L_543));
		double L_544 = V_162;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_545 = ___pd3;
		NullCheck(L_545);
		double L_546 = L_545->get_y_3();
		V_164 = ((double)il2cpp_codegen_subtract((double)L_544, (double)L_546));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_547 = ___pa0;
		NullCheck(L_547);
		double L_548 = L_547->get_y_3();
		double L_549 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_548, (double)L_549));
		double L_550 = V_165;
		double L_551 = V_164;
		V_49 = ((double)il2cpp_codegen_add((double)L_550, (double)L_551));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_552 = ___pb1;
		NullCheck(L_552);
		double L_553 = L_552->get_x_2();
		double L_554 = V_1;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_553, (double)L_554))));
		double L_555 = V_1;
		double L_556 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_555, (double)L_556));
		double L_557 = V_162;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_558 = ___pd3;
		NullCheck(L_558);
		double L_559 = L_558->get_x_2();
		V_164 = ((double)il2cpp_codegen_subtract((double)L_557, (double)L_559));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_560 = ___pb1;
		NullCheck(L_560);
		double L_561 = L_560->get_x_2();
		double L_562 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_561, (double)L_562));
		double L_563 = V_165;
		double L_564 = V_164;
		V_47 = ((double)il2cpp_codegen_add((double)L_563, (double)L_564));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_565 = ___pb1;
		NullCheck(L_565);
		double L_566 = L_565->get_y_3();
		double L_567 = V_4;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_566, (double)L_567))));
		double L_568 = V_4;
		double L_569 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_568, (double)L_569));
		double L_570 = V_162;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_571 = ___pd3;
		NullCheck(L_571);
		double L_572 = L_571->get_y_3();
		V_164 = ((double)il2cpp_codegen_subtract((double)L_570, (double)L_572));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_573 = ___pb1;
		NullCheck(L_573);
		double L_574 = L_573->get_y_3();
		double L_575 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_574, (double)L_575));
		double L_576 = V_165;
		double L_577 = V_164;
		V_50 = ((double)il2cpp_codegen_add((double)L_576, (double)L_577));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_578 = ___pc2;
		NullCheck(L_578);
		double L_579 = L_578->get_x_2();
		double L_580 = V_2;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_579, (double)L_580))));
		double L_581 = V_2;
		double L_582 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_581, (double)L_582));
		double L_583 = V_162;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_584 = ___pd3;
		NullCheck(L_584);
		double L_585 = L_584->get_x_2();
		V_164 = ((double)il2cpp_codegen_subtract((double)L_583, (double)L_585));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_586 = ___pc2;
		NullCheck(L_586);
		double L_587 = L_586->get_x_2();
		double L_588 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_587, (double)L_588));
		double L_589 = V_165;
		double L_590 = V_164;
		V_48 = ((double)il2cpp_codegen_add((double)L_589, (double)L_590));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_591 = ___pc2;
		NullCheck(L_591);
		double L_592 = L_591->get_y_3();
		double L_593 = V_5;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_592, (double)L_593))));
		double L_594 = V_5;
		double L_595 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_594, (double)L_595));
		double L_596 = V_162;
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_597 = ___pd3;
		NullCheck(L_597);
		double L_598 = L_597->get_y_3();
		V_164 = ((double)il2cpp_codegen_subtract((double)L_596, (double)L_598));
		Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * L_599 = ___pc2;
		NullCheck(L_599);
		double L_600 = L_599->get_y_3();
		double L_601 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_600, (double)L_601));
		double L_602 = V_165;
		double L_603 = V_164;
		V_51 = ((double)il2cpp_codegen_add((double)L_602, (double)L_603));
		double L_604 = V_46;
		if ((!(((double)L_604) == ((double)(0.0)))))
		{
			goto IL_0a38;
		}
	}
	{
		double L_605 = V_47;
		if ((!(((double)L_605) == ((double)(0.0)))))
		{
			goto IL_0a38;
		}
	}
	{
		double L_606 = V_48;
		if ((!(((double)L_606) == ((double)(0.0)))))
		{
			goto IL_0a38;
		}
	}
	{
		double L_607 = V_49;
		if ((!(((double)L_607) == ((double)(0.0)))))
		{
			goto IL_0a38;
		}
	}
	{
		double L_608 = V_50;
		if ((!(((double)L_608) == ((double)(0.0)))))
		{
			goto IL_0a38;
		}
	}
	{
		double L_609 = V_51;
		G_B12_0 = ((((double)L_609) == ((double)(0.0)))? 1 : 0);
		goto IL_0a39;
	}

IL_0a38:
	{
		G_B12_0 = 0;
	}

IL_0a39:
	{
		V_180 = (bool)G_B12_0;
		bool L_610 = V_180;
		if (!L_610)
		{
			goto IL_0a49;
		}
	}
	{
		double L_611 = V_6;
		V_179 = L_611;
		goto IL_3068;
	}

IL_0a49:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_612 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_iccerrboundC_10();
		double L_613 = ___permanent4;
		double L_614 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_resulterrbound_4();
		double L_615 = V_6;
		G_B15_0 = L_614;
		G_B15_1 = ((double)il2cpp_codegen_multiply((double)L_612, (double)L_613));
		if ((((double)L_615) >= ((double)(0.0))))
		{
			G_B16_0 = L_614;
			G_B16_1 = ((double)il2cpp_codegen_multiply((double)L_612, (double)L_613));
			goto IL_0a68;
		}
	}
	{
		double L_616 = V_6;
		G_B17_0 = ((-L_616));
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_0a6a;
	}

IL_0a68:
	{
		double L_617 = V_6;
		G_B17_0 = L_617;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_0a6a:
	{
		V_7 = ((double)il2cpp_codegen_add((double)G_B17_2, (double)((double)il2cpp_codegen_multiply((double)G_B17_1, (double)G_B17_0))));
		double L_618 = V_6;
		double L_619 = V_0;
		double L_620 = V_0;
		double L_621 = V_3;
		double L_622 = V_3;
		double L_623 = V_1;
		double L_624 = V_51;
		double L_625 = V_5;
		double L_626 = V_47;
		double L_627 = V_4;
		double L_628 = V_48;
		double L_629 = V_2;
		double L_630 = V_50;
		double L_631 = V_0;
		double L_632 = V_46;
		double L_633 = V_3;
		double L_634 = V_49;
		double L_635 = V_1;
		double L_636 = V_5;
		double L_637 = V_4;
		double L_638 = V_2;
		double L_639 = V_1;
		double L_640 = V_1;
		double L_641 = V_4;
		double L_642 = V_4;
		double L_643 = V_2;
		double L_644 = V_49;
		double L_645 = V_3;
		double L_646 = V_48;
		double L_647 = V_5;
		double L_648 = V_46;
		double L_649 = V_0;
		double L_650 = V_51;
		double L_651 = V_1;
		double L_652 = V_47;
		double L_653 = V_4;
		double L_654 = V_50;
		double L_655 = V_2;
		double L_656 = V_3;
		double L_657 = V_5;
		double L_658 = V_0;
		double L_659 = V_2;
		double L_660 = V_2;
		double L_661 = V_5;
		double L_662 = V_5;
		double L_663 = V_0;
		double L_664 = V_50;
		double L_665 = V_4;
		double L_666 = V_46;
		double L_667 = V_3;
		double L_668 = V_47;
		double L_669 = V_1;
		double L_670 = V_49;
		double L_671 = V_2;
		double L_672 = V_48;
		double L_673 = V_5;
		double L_674 = V_51;
		double L_675 = V_0;
		double L_676 = V_4;
		double L_677 = V_3;
		double L_678 = V_1;
		V_6 = ((double)il2cpp_codegen_add((double)L_618, (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_619, (double)L_620)), (double)((double)il2cpp_codegen_multiply((double)L_621, (double)L_622)))), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_623, (double)L_624)), (double)((double)il2cpp_codegen_multiply((double)L_625, (double)L_626)))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_627, (double)L_628)), (double)((double)il2cpp_codegen_multiply((double)L_629, (double)L_630)))))))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_631, (double)L_632)), (double)((double)il2cpp_codegen_multiply((double)L_633, (double)L_634)))))), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_635, (double)L_636)), (double)((double)il2cpp_codegen_multiply((double)L_637, (double)L_638)))))))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_639, (double)L_640)), (double)((double)il2cpp_codegen_multiply((double)L_641, (double)L_642)))), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_643, (double)L_644)), (double)((double)il2cpp_codegen_multiply((double)L_645, (double)L_646)))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_647, (double)L_648)), (double)((double)il2cpp_codegen_multiply((double)L_649, (double)L_650)))))))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_651, (double)L_652)), (double)((double)il2cpp_codegen_multiply((double)L_653, (double)L_654)))))), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_655, (double)L_656)), (double)((double)il2cpp_codegen_multiply((double)L_657, (double)L_658)))))))))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_659, (double)L_660)), (double)((double)il2cpp_codegen_multiply((double)L_661, (double)L_662)))), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_663, (double)L_664)), (double)((double)il2cpp_codegen_multiply((double)L_665, (double)L_666)))), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_667, (double)L_668)), (double)((double)il2cpp_codegen_multiply((double)L_669, (double)L_670)))))))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_671, (double)L_672)), (double)((double)il2cpp_codegen_multiply((double)L_673, (double)L_674)))))), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_675, (double)L_676)), (double)((double)il2cpp_codegen_multiply((double)L_677, (double)L_678))))))))))));
		double L_679 = V_6;
		double L_680 = V_7;
		if ((((double)L_679) >= ((double)L_680)))
		{
			goto IL_0b3a;
		}
	}
	{
		double L_681 = V_6;
		double L_682 = V_7;
		G_B20_0 = ((((int32_t)((!(((double)((-L_681))) >= ((double)L_682)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0b3b;
	}

IL_0b3a:
	{
		G_B20_0 = 1;
	}

IL_0b3b:
	{
		V_181 = (bool)G_B20_0;
		bool L_683 = V_181;
		if (!L_683)
		{
			goto IL_0b4b;
		}
	}
	{
		double L_684 = V_6;
		V_179 = L_684;
		goto IL_3068;
	}

IL_0b4b:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_685 = __this->get_fin1_11();
		V_42 = L_685;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_686 = __this->get_fin2_12();
		V_43 = L_686;
		double L_687 = V_47;
		if ((!(((double)L_687) == ((double)(0.0)))))
		{
			goto IL_0b94;
		}
	}
	{
		double L_688 = V_50;
		if ((!(((double)L_688) == ((double)(0.0)))))
		{
			goto IL_0b94;
		}
	}
	{
		double L_689 = V_48;
		if ((!(((double)L_689) == ((double)(0.0)))))
		{
			goto IL_0b94;
		}
	}
	{
		double L_690 = V_51;
		G_B27_0 = ((((int32_t)((((double)L_690) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0b95;
	}

IL_0b94:
	{
		G_B27_0 = 1;
	}

IL_0b95:
	{
		V_182 = (bool)G_B27_0;
		bool L_691 = V_182;
		if (!L_691)
		{
			goto IL_0ce6;
		}
	}
	{
		double L_692 = V_0;
		double L_693 = V_0;
		V_52 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_692, (double)L_693))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_694 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_695 = V_0;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_694, (double)L_695))));
		double L_696 = V_166;
		double L_697 = V_0;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_696, (double)L_697))));
		double L_698 = V_166;
		double L_699 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_698, (double)L_699));
		double L_700 = V_0;
		double L_701 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_700, (double)L_701));
		double L_702 = V_52;
		double L_703 = V_168;
		double L_704 = V_168;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_702, (double)((double)il2cpp_codegen_multiply((double)L_703, (double)L_704))));
		double L_705 = V_172;
		double L_706 = V_168;
		double L_707 = V_168;
		double L_708 = V_169;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_705, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_706, (double)L_707)), (double)L_708))));
		double L_709 = V_169;
		double L_710 = V_169;
		double L_711 = V_174;
		V_58 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_709, (double)L_710)), (double)L_711));
		double L_712 = V_3;
		double L_713 = V_3;
		V_53 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_712, (double)L_713))));
		double L_714 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_715 = V_3;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_714, (double)L_715))));
		double L_716 = V_166;
		double L_717 = V_3;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_716, (double)L_717))));
		double L_718 = V_166;
		double L_719 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_718, (double)L_719));
		double L_720 = V_3;
		double L_721 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_720, (double)L_721));
		double L_722 = V_53;
		double L_723 = V_168;
		double L_724 = V_168;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_722, (double)((double)il2cpp_codegen_multiply((double)L_723, (double)L_724))));
		double L_725 = V_172;
		double L_726 = V_168;
		double L_727 = V_168;
		double L_728 = V_169;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_725, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_726, (double)L_727)), (double)L_728))));
		double L_729 = V_169;
		double L_730 = V_169;
		double L_731 = V_174;
		V_59 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_729, (double)L_730)), (double)L_731));
		double L_732 = V_58;
		double L_733 = V_59;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_732, (double)L_733))));
		double L_734 = V_175;
		double L_735 = V_58;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_734, (double)L_735))));
		double L_736 = V_175;
		double L_737 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_736, (double)L_737));
		double L_738 = V_59;
		double L_739 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_738, (double)L_739));
		double L_740 = V_58;
		double L_741 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_740, (double)L_741));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_742 = V_64;
		double L_743 = V_165;
		double L_744 = V_164;
		NullCheck(L_742);
		(L_742)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_743, (double)L_744)));
		double L_745 = V_52;
		double L_746 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_745, (double)L_746))));
		double L_747 = V_176;
		double L_748 = V_52;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_747, (double)L_748))));
		double L_749 = V_176;
		double L_750 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_749, (double)L_750));
		double L_751 = V_175;
		double L_752 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_751, (double)L_752));
		double L_753 = V_52;
		double L_754 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_753, (double)L_754));
		double L_755 = V_165;
		double L_756 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_755, (double)L_756));
		double L_757 = V_177;
		double L_758 = V_53;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_757, (double)L_758))));
		double L_759 = V_175;
		double L_760 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_759, (double)L_760))));
		double L_761 = V_175;
		double L_762 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_761, (double)L_762));
		double L_763 = V_53;
		double L_764 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_763, (double)L_764));
		double L_765 = V_177;
		double L_766 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_765, (double)L_766));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_767 = V_64;
		double L_768 = V_165;
		double L_769 = V_164;
		NullCheck(L_767);
		(L_767)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_768, (double)L_769)));
		double L_770 = V_176;
		double L_771 = V_175;
		V_67 = ((double)((double)((double)il2cpp_codegen_add((double)L_770, (double)L_771))));
		double L_772 = V_67;
		double L_773 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_772, (double)L_773))));
		double L_774 = V_67;
		double L_775 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_774, (double)L_775));
		double L_776 = V_175;
		double L_777 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_776, (double)L_777));
		double L_778 = V_176;
		double L_779 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_778, (double)L_779));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_780 = V_64;
		double L_781 = V_165;
		double L_782 = V_164;
		NullCheck(L_780);
		(L_780)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_781, (double)L_782)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_783 = V_64;
		double L_784 = V_67;
		NullCheck(L_783);
		(L_783)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_784);
	}

IL_0ce6:
	{
		double L_785 = V_48;
		if ((!(((double)L_785) == ((double)(0.0)))))
		{
			goto IL_0d1f;
		}
	}
	{
		double L_786 = V_51;
		if ((!(((double)L_786) == ((double)(0.0)))))
		{
			goto IL_0d1f;
		}
	}
	{
		double L_787 = V_46;
		if ((!(((double)L_787) == ((double)(0.0)))))
		{
			goto IL_0d1f;
		}
	}
	{
		double L_788 = V_49;
		G_B34_0 = ((((int32_t)((((double)L_788) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0d20;
	}

IL_0d1f:
	{
		G_B34_0 = 1;
	}

IL_0d20:
	{
		V_183 = (bool)G_B34_0;
		bool L_789 = V_183;
		if (!L_789)
		{
			goto IL_0e76;
		}
	}
	{
		double L_790 = V_1;
		double L_791 = V_1;
		V_54 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_790, (double)L_791))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_792 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_793 = V_1;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_792, (double)L_793))));
		double L_794 = V_166;
		double L_795 = V_1;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_794, (double)L_795))));
		double L_796 = V_166;
		double L_797 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_796, (double)L_797));
		double L_798 = V_1;
		double L_799 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_798, (double)L_799));
		double L_800 = V_54;
		double L_801 = V_168;
		double L_802 = V_168;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_800, (double)((double)il2cpp_codegen_multiply((double)L_801, (double)L_802))));
		double L_803 = V_172;
		double L_804 = V_168;
		double L_805 = V_168;
		double L_806 = V_169;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_803, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_804, (double)L_805)), (double)L_806))));
		double L_807 = V_169;
		double L_808 = V_169;
		double L_809 = V_174;
		V_60 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_807, (double)L_808)), (double)L_809));
		double L_810 = V_4;
		double L_811 = V_4;
		V_55 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_810, (double)L_811))));
		double L_812 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_813 = V_4;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_812, (double)L_813))));
		double L_814 = V_166;
		double L_815 = V_4;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_814, (double)L_815))));
		double L_816 = V_166;
		double L_817 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_816, (double)L_817));
		double L_818 = V_4;
		double L_819 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_818, (double)L_819));
		double L_820 = V_55;
		double L_821 = V_168;
		double L_822 = V_168;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_820, (double)((double)il2cpp_codegen_multiply((double)L_821, (double)L_822))));
		double L_823 = V_172;
		double L_824 = V_168;
		double L_825 = V_168;
		double L_826 = V_169;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_823, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_824, (double)L_825)), (double)L_826))));
		double L_827 = V_169;
		double L_828 = V_169;
		double L_829 = V_174;
		V_61 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_827, (double)L_828)), (double)L_829));
		double L_830 = V_60;
		double L_831 = V_61;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_830, (double)L_831))));
		double L_832 = V_175;
		double L_833 = V_60;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_832, (double)L_833))));
		double L_834 = V_175;
		double L_835 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_834, (double)L_835));
		double L_836 = V_61;
		double L_837 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_836, (double)L_837));
		double L_838 = V_60;
		double L_839 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_838, (double)L_839));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_840 = V_65;
		double L_841 = V_165;
		double L_842 = V_164;
		NullCheck(L_840);
		(L_840)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_841, (double)L_842)));
		double L_843 = V_54;
		double L_844 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_843, (double)L_844))));
		double L_845 = V_176;
		double L_846 = V_54;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_845, (double)L_846))));
		double L_847 = V_176;
		double L_848 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_847, (double)L_848));
		double L_849 = V_175;
		double L_850 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_849, (double)L_850));
		double L_851 = V_54;
		double L_852 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_851, (double)L_852));
		double L_853 = V_165;
		double L_854 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_853, (double)L_854));
		double L_855 = V_177;
		double L_856 = V_55;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_855, (double)L_856))));
		double L_857 = V_175;
		double L_858 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_857, (double)L_858))));
		double L_859 = V_175;
		double L_860 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_859, (double)L_860));
		double L_861 = V_55;
		double L_862 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_861, (double)L_862));
		double L_863 = V_177;
		double L_864 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_863, (double)L_864));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_865 = V_65;
		double L_866 = V_165;
		double L_867 = V_164;
		NullCheck(L_865);
		(L_865)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_866, (double)L_867)));
		double L_868 = V_176;
		double L_869 = V_175;
		V_68 = ((double)((double)((double)il2cpp_codegen_add((double)L_868, (double)L_869))));
		double L_870 = V_68;
		double L_871 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_870, (double)L_871))));
		double L_872 = V_68;
		double L_873 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_872, (double)L_873));
		double L_874 = V_175;
		double L_875 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_874, (double)L_875));
		double L_876 = V_176;
		double L_877 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_876, (double)L_877));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_878 = V_65;
		double L_879 = V_165;
		double L_880 = V_164;
		NullCheck(L_878);
		(L_878)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_879, (double)L_880)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_881 = V_65;
		double L_882 = V_68;
		NullCheck(L_881);
		(L_881)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_882);
	}

IL_0e76:
	{
		double L_883 = V_46;
		if ((!(((double)L_883) == ((double)(0.0)))))
		{
			goto IL_0eaf;
		}
	}
	{
		double L_884 = V_49;
		if ((!(((double)L_884) == ((double)(0.0)))))
		{
			goto IL_0eaf;
		}
	}
	{
		double L_885 = V_47;
		if ((!(((double)L_885) == ((double)(0.0)))))
		{
			goto IL_0eaf;
		}
	}
	{
		double L_886 = V_50;
		G_B41_0 = ((((int32_t)((((double)L_886) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0eb0;
	}

IL_0eaf:
	{
		G_B41_0 = 1;
	}

IL_0eb0:
	{
		V_184 = (bool)G_B41_0;
		bool L_887 = V_184;
		if (!L_887)
		{
			goto IL_1006;
		}
	}
	{
		double L_888 = V_2;
		double L_889 = V_2;
		V_56 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_888, (double)L_889))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_890 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_891 = V_2;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_890, (double)L_891))));
		double L_892 = V_166;
		double L_893 = V_2;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_892, (double)L_893))));
		double L_894 = V_166;
		double L_895 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_894, (double)L_895));
		double L_896 = V_2;
		double L_897 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_896, (double)L_897));
		double L_898 = V_56;
		double L_899 = V_168;
		double L_900 = V_168;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_898, (double)((double)il2cpp_codegen_multiply((double)L_899, (double)L_900))));
		double L_901 = V_172;
		double L_902 = V_168;
		double L_903 = V_168;
		double L_904 = V_169;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_901, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_902, (double)L_903)), (double)L_904))));
		double L_905 = V_169;
		double L_906 = V_169;
		double L_907 = V_174;
		V_62 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_905, (double)L_906)), (double)L_907));
		double L_908 = V_5;
		double L_909 = V_5;
		V_57 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_908, (double)L_909))));
		double L_910 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_911 = V_5;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_910, (double)L_911))));
		double L_912 = V_166;
		double L_913 = V_5;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_912, (double)L_913))));
		double L_914 = V_166;
		double L_915 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_914, (double)L_915));
		double L_916 = V_5;
		double L_917 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_916, (double)L_917));
		double L_918 = V_57;
		double L_919 = V_168;
		double L_920 = V_168;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_918, (double)((double)il2cpp_codegen_multiply((double)L_919, (double)L_920))));
		double L_921 = V_172;
		double L_922 = V_168;
		double L_923 = V_168;
		double L_924 = V_169;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_921, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)L_922, (double)L_923)), (double)L_924))));
		double L_925 = V_169;
		double L_926 = V_169;
		double L_927 = V_174;
		V_63 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_925, (double)L_926)), (double)L_927));
		double L_928 = V_62;
		double L_929 = V_63;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_928, (double)L_929))));
		double L_930 = V_175;
		double L_931 = V_62;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_930, (double)L_931))));
		double L_932 = V_175;
		double L_933 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_932, (double)L_933));
		double L_934 = V_63;
		double L_935 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_934, (double)L_935));
		double L_936 = V_62;
		double L_937 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_936, (double)L_937));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_938 = V_66;
		double L_939 = V_165;
		double L_940 = V_164;
		NullCheck(L_938);
		(L_938)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_939, (double)L_940)));
		double L_941 = V_56;
		double L_942 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_941, (double)L_942))));
		double L_943 = V_176;
		double L_944 = V_56;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_943, (double)L_944))));
		double L_945 = V_176;
		double L_946 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_945, (double)L_946));
		double L_947 = V_175;
		double L_948 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_947, (double)L_948));
		double L_949 = V_56;
		double L_950 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_949, (double)L_950));
		double L_951 = V_165;
		double L_952 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_951, (double)L_952));
		double L_953 = V_177;
		double L_954 = V_57;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_953, (double)L_954))));
		double L_955 = V_175;
		double L_956 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_955, (double)L_956))));
		double L_957 = V_175;
		double L_958 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_957, (double)L_958));
		double L_959 = V_57;
		double L_960 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_959, (double)L_960));
		double L_961 = V_177;
		double L_962 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_961, (double)L_962));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_963 = V_66;
		double L_964 = V_165;
		double L_965 = V_164;
		NullCheck(L_963);
		(L_963)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_964, (double)L_965)));
		double L_966 = V_176;
		double L_967 = V_175;
		V_69 = ((double)((double)((double)il2cpp_codegen_add((double)L_966, (double)L_967))));
		double L_968 = V_69;
		double L_969 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_968, (double)L_969))));
		double L_970 = V_69;
		double L_971 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_970, (double)L_971));
		double L_972 = V_175;
		double L_973 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_972, (double)L_973));
		double L_974 = V_176;
		double L_975 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_974, (double)L_975));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_976 = V_66;
		double L_977 = V_165;
		double L_978 = V_164;
		NullCheck(L_976);
		(L_976)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_977, (double)L_978)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_979 = V_66;
		double L_980 = V_69;
		NullCheck(L_979);
		(L_979)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_980);
	}

IL_1006:
	{
		double L_981 = V_46;
		V_185 = (bool)((((int32_t)((((double)L_981) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_982 = V_185;
		if (!L_982)
		{
			goto IL_10f2;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_983 = V_20;
		double L_984 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_985 = V_110;
		int32_t L_986;
		L_986 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_983, L_984, L_985, /*hidden argument*/NULL);
		V_116 = L_986;
		int32_t L_987 = V_116;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_988 = V_110;
		double L_989 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_990 = __this->get_temp16a_30();
		int32_t L_991;
		L_991 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_987, L_988, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_989)), L_990, /*hidden argument*/NULL);
		V_79 = L_991;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_992 = V_66;
		double L_993 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_994 = V_87;
		int32_t L_995;
		L_995 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_992, L_993, L_994, /*hidden argument*/NULL);
		V_91 = L_995;
		int32_t L_996 = V_91;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_997 = V_87;
		double L_998 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_999 = __this->get_temp16b_31();
		int32_t L_1000;
		L_1000 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_996, L_997, L_998, L_999, /*hidden argument*/NULL);
		V_80 = L_1000;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1001 = V_65;
		double L_1002 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1003 = V_86;
		int32_t L_1004;
		L_1004 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1001, L_1002, L_1003, /*hidden argument*/NULL);
		V_90 = L_1004;
		int32_t L_1005 = V_90;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1006 = V_86;
		double L_1007 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1008 = __this->get_temp16c_32();
		int32_t L_1009;
		L_1009 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1005, L_1006, ((-L_1007)), L_1008, /*hidden argument*/NULL);
		V_81 = L_1009;
		int32_t L_1010 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1011 = __this->get_temp16a_30();
		int32_t L_1012 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1013 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1014 = __this->get_temp32a_33();
		int32_t L_1015;
		L_1015 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1010, L_1011, L_1012, L_1013, L_1014, /*hidden argument*/NULL);
		V_82 = L_1015;
		int32_t L_1016 = V_81;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1017 = __this->get_temp16c_32();
		int32_t L_1018 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1019 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1020 = __this->get_temp48_35();
		int32_t L_1021;
		L_1021 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1016, L_1017, L_1018, L_1019, L_1020, /*hidden argument*/NULL);
		V_84 = L_1021;
		int32_t L_1022 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1023 = V_42;
		int32_t L_1024 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1025 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1026 = V_43;
		int32_t L_1027;
		L_1027 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1022, L_1023, L_1024, L_1025, L_1026, /*hidden argument*/NULL);
		V_45 = L_1027;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1028 = V_42;
		V_44 = L_1028;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1029 = V_43;
		V_42 = L_1029;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1030 = V_44;
		V_43 = L_1030;
	}

IL_10f2:
	{
		double L_1031 = V_49;
		V_186 = (bool)((((int32_t)((((double)L_1031) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1032 = V_186;
		if (!L_1032)
		{
			goto IL_11dc;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1033 = V_20;
		double L_1034 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1035 = V_111;
		int32_t L_1036;
		L_1036 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1033, L_1034, L_1035, /*hidden argument*/NULL);
		V_117 = L_1036;
		int32_t L_1037 = V_117;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1038 = V_111;
		double L_1039 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1040 = __this->get_temp16a_30();
		int32_t L_1041;
		L_1041 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1037, L_1038, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1039)), L_1040, /*hidden argument*/NULL);
		V_79 = L_1041;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1042 = V_65;
		double L_1043 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1044 = V_88;
		int32_t L_1045;
		L_1045 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1042, L_1043, L_1044, /*hidden argument*/NULL);
		V_92 = L_1045;
		int32_t L_1046 = V_92;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1047 = V_88;
		double L_1048 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1049 = __this->get_temp16b_31();
		int32_t L_1050;
		L_1050 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1046, L_1047, L_1048, L_1049, /*hidden argument*/NULL);
		V_80 = L_1050;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1051 = V_66;
		double L_1052 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1053 = V_89;
		int32_t L_1054;
		L_1054 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1051, L_1052, L_1053, /*hidden argument*/NULL);
		V_93 = L_1054;
		int32_t L_1055 = V_93;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1056 = V_89;
		double L_1057 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1058 = __this->get_temp16c_32();
		int32_t L_1059;
		L_1059 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1055, L_1056, ((-L_1057)), L_1058, /*hidden argument*/NULL);
		V_81 = L_1059;
		int32_t L_1060 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1061 = __this->get_temp16a_30();
		int32_t L_1062 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1063 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1064 = __this->get_temp32a_33();
		int32_t L_1065;
		L_1065 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1060, L_1061, L_1062, L_1063, L_1064, /*hidden argument*/NULL);
		V_82 = L_1065;
		int32_t L_1066 = V_81;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1067 = __this->get_temp16c_32();
		int32_t L_1068 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1069 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1070 = __this->get_temp48_35();
		int32_t L_1071;
		L_1071 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1066, L_1067, L_1068, L_1069, L_1070, /*hidden argument*/NULL);
		V_84 = L_1071;
		int32_t L_1072 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1073 = V_42;
		int32_t L_1074 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1075 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1076 = V_43;
		int32_t L_1077;
		L_1077 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1072, L_1073, L_1074, L_1075, L_1076, /*hidden argument*/NULL);
		V_45 = L_1077;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1078 = V_42;
		V_44 = L_1078;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1079 = V_43;
		V_42 = L_1079;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1080 = V_44;
		V_43 = L_1080;
	}

IL_11dc:
	{
		double L_1081 = V_47;
		V_187 = (bool)((((int32_t)((((double)L_1081) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1082 = V_187;
		if (!L_1082)
		{
			goto IL_12c7;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1083 = V_21;
		double L_1084 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1085 = V_112;
		int32_t L_1086;
		L_1086 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1083, L_1084, L_1085, /*hidden argument*/NULL);
		V_118 = L_1086;
		int32_t L_1087 = V_118;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1088 = V_112;
		double L_1089 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1090 = __this->get_temp16a_30();
		int32_t L_1091;
		L_1091 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1087, L_1088, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1089)), L_1090, /*hidden argument*/NULL);
		V_79 = L_1091;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1092 = V_64;
		double L_1093 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1094 = V_94;
		int32_t L_1095;
		L_1095 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1092, L_1093, L_1094, /*hidden argument*/NULL);
		V_98 = L_1095;
		int32_t L_1096 = V_98;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1097 = V_94;
		double L_1098 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1099 = __this->get_temp16b_31();
		int32_t L_1100;
		L_1100 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1096, L_1097, L_1098, L_1099, /*hidden argument*/NULL);
		V_80 = L_1100;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1101 = V_66;
		double L_1102 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1103 = V_95;
		int32_t L_1104;
		L_1104 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1101, L_1102, L_1103, /*hidden argument*/NULL);
		V_99 = L_1104;
		int32_t L_1105 = V_99;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1106 = V_95;
		double L_1107 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1108 = __this->get_temp16c_32();
		int32_t L_1109;
		L_1109 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1105, L_1106, ((-L_1107)), L_1108, /*hidden argument*/NULL);
		V_81 = L_1109;
		int32_t L_1110 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1111 = __this->get_temp16a_30();
		int32_t L_1112 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1113 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1114 = __this->get_temp32a_33();
		int32_t L_1115;
		L_1115 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1110, L_1111, L_1112, L_1113, L_1114, /*hidden argument*/NULL);
		V_82 = L_1115;
		int32_t L_1116 = V_81;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1117 = __this->get_temp16c_32();
		int32_t L_1118 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1119 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1120 = __this->get_temp48_35();
		int32_t L_1121;
		L_1121 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1116, L_1117, L_1118, L_1119, L_1120, /*hidden argument*/NULL);
		V_84 = L_1121;
		int32_t L_1122 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1123 = V_42;
		int32_t L_1124 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1125 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1126 = V_43;
		int32_t L_1127;
		L_1127 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1122, L_1123, L_1124, L_1125, L_1126, /*hidden argument*/NULL);
		V_45 = L_1127;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1128 = V_42;
		V_44 = L_1128;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1129 = V_43;
		V_42 = L_1129;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1130 = V_44;
		V_43 = L_1130;
	}

IL_12c7:
	{
		double L_1131 = V_50;
		V_188 = (bool)((((int32_t)((((double)L_1131) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1132 = V_188;
		if (!L_1132)
		{
			goto IL_13b2;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1133 = V_21;
		double L_1134 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1135 = V_113;
		int32_t L_1136;
		L_1136 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1133, L_1134, L_1135, /*hidden argument*/NULL);
		V_119 = L_1136;
		int32_t L_1137 = V_119;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1138 = V_113;
		double L_1139 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1140 = __this->get_temp16a_30();
		int32_t L_1141;
		L_1141 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1137, L_1138, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1139)), L_1140, /*hidden argument*/NULL);
		V_79 = L_1141;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1142 = V_66;
		double L_1143 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1144 = V_97;
		int32_t L_1145;
		L_1145 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1142, L_1143, L_1144, /*hidden argument*/NULL);
		V_101 = L_1145;
		int32_t L_1146 = V_101;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1147 = V_97;
		double L_1148 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1149 = __this->get_temp16b_31();
		int32_t L_1150;
		L_1150 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1146, L_1147, L_1148, L_1149, /*hidden argument*/NULL);
		V_80 = L_1150;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1151 = V_64;
		double L_1152 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1153 = V_96;
		int32_t L_1154;
		L_1154 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1151, L_1152, L_1153, /*hidden argument*/NULL);
		V_100 = L_1154;
		int32_t L_1155 = V_100;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1156 = V_96;
		double L_1157 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1158 = __this->get_temp16c_32();
		int32_t L_1159;
		L_1159 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1155, L_1156, ((-L_1157)), L_1158, /*hidden argument*/NULL);
		V_81 = L_1159;
		int32_t L_1160 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1161 = __this->get_temp16a_30();
		int32_t L_1162 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1163 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1164 = __this->get_temp32a_33();
		int32_t L_1165;
		L_1165 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1160, L_1161, L_1162, L_1163, L_1164, /*hidden argument*/NULL);
		V_82 = L_1165;
		int32_t L_1166 = V_81;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1167 = __this->get_temp16c_32();
		int32_t L_1168 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1169 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1170 = __this->get_temp48_35();
		int32_t L_1171;
		L_1171 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1166, L_1167, L_1168, L_1169, L_1170, /*hidden argument*/NULL);
		V_84 = L_1171;
		int32_t L_1172 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1173 = V_42;
		int32_t L_1174 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1175 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1176 = V_43;
		int32_t L_1177;
		L_1177 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1172, L_1173, L_1174, L_1175, L_1176, /*hidden argument*/NULL);
		V_45 = L_1177;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1178 = V_42;
		V_44 = L_1178;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1179 = V_43;
		V_42 = L_1179;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1180 = V_44;
		V_43 = L_1180;
	}

IL_13b2:
	{
		double L_1181 = V_48;
		V_189 = (bool)((((int32_t)((((double)L_1181) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1182 = V_189;
		if (!L_1182)
		{
			goto IL_149d;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1183 = V_22;
		double L_1184 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1185 = V_114;
		int32_t L_1186;
		L_1186 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1183, L_1184, L_1185, /*hidden argument*/NULL);
		V_120 = L_1186;
		int32_t L_1187 = V_120;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1188 = V_114;
		double L_1189 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1190 = __this->get_temp16a_30();
		int32_t L_1191;
		L_1191 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1187, L_1188, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1189)), L_1190, /*hidden argument*/NULL);
		V_79 = L_1191;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1192 = V_65;
		double L_1193 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1194 = V_103;
		int32_t L_1195;
		L_1195 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1192, L_1193, L_1194, /*hidden argument*/NULL);
		V_107 = L_1195;
		int32_t L_1196 = V_107;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1197 = V_103;
		double L_1198 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1199 = __this->get_temp16b_31();
		int32_t L_1200;
		L_1200 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1196, L_1197, L_1198, L_1199, /*hidden argument*/NULL);
		V_80 = L_1200;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1201 = V_64;
		double L_1202 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1203 = V_102;
		int32_t L_1204;
		L_1204 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1201, L_1202, L_1203, /*hidden argument*/NULL);
		V_106 = L_1204;
		int32_t L_1205 = V_106;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1206 = V_102;
		double L_1207 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1208 = __this->get_temp16c_32();
		int32_t L_1209;
		L_1209 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1205, L_1206, ((-L_1207)), L_1208, /*hidden argument*/NULL);
		V_81 = L_1209;
		int32_t L_1210 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1211 = __this->get_temp16a_30();
		int32_t L_1212 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1213 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1214 = __this->get_temp32a_33();
		int32_t L_1215;
		L_1215 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1210, L_1211, L_1212, L_1213, L_1214, /*hidden argument*/NULL);
		V_82 = L_1215;
		int32_t L_1216 = V_81;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1217 = __this->get_temp16c_32();
		int32_t L_1218 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1219 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1220 = __this->get_temp48_35();
		int32_t L_1221;
		L_1221 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1216, L_1217, L_1218, L_1219, L_1220, /*hidden argument*/NULL);
		V_84 = L_1221;
		int32_t L_1222 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1223 = V_42;
		int32_t L_1224 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1225 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1226 = V_43;
		int32_t L_1227;
		L_1227 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1222, L_1223, L_1224, L_1225, L_1226, /*hidden argument*/NULL);
		V_45 = L_1227;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1228 = V_42;
		V_44 = L_1228;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1229 = V_43;
		V_42 = L_1229;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1230 = V_44;
		V_43 = L_1230;
	}

IL_149d:
	{
		double L_1231 = V_51;
		V_190 = (bool)((((int32_t)((((double)L_1231) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1232 = V_190;
		if (!L_1232)
		{
			goto IL_1588;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1233 = V_22;
		double L_1234 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1235 = V_115;
		int32_t L_1236;
		L_1236 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1233, L_1234, L_1235, /*hidden argument*/NULL);
		V_121 = L_1236;
		int32_t L_1237 = V_121;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1238 = V_115;
		double L_1239 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1240 = __this->get_temp16a_30();
		int32_t L_1241;
		L_1241 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1237, L_1238, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1239)), L_1240, /*hidden argument*/NULL);
		V_79 = L_1241;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1242 = V_64;
		double L_1243 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1244 = V_104;
		int32_t L_1245;
		L_1245 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1242, L_1243, L_1244, /*hidden argument*/NULL);
		V_108 = L_1245;
		int32_t L_1246 = V_108;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1247 = V_104;
		double L_1248 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1249 = __this->get_temp16b_31();
		int32_t L_1250;
		L_1250 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1246, L_1247, L_1248, L_1249, /*hidden argument*/NULL);
		V_80 = L_1250;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1251 = V_65;
		double L_1252 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1253 = V_105;
		int32_t L_1254;
		L_1254 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1251, L_1252, L_1253, /*hidden argument*/NULL);
		V_109 = L_1254;
		int32_t L_1255 = V_109;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1256 = V_105;
		double L_1257 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1258 = __this->get_temp16c_32();
		int32_t L_1259;
		L_1259 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1255, L_1256, ((-L_1257)), L_1258, /*hidden argument*/NULL);
		V_81 = L_1259;
		int32_t L_1260 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1261 = __this->get_temp16a_30();
		int32_t L_1262 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1263 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1264 = __this->get_temp32a_33();
		int32_t L_1265;
		L_1265 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1260, L_1261, L_1262, L_1263, L_1264, /*hidden argument*/NULL);
		V_82 = L_1265;
		int32_t L_1266 = V_81;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1267 = __this->get_temp16c_32();
		int32_t L_1268 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1269 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1270 = __this->get_temp48_35();
		int32_t L_1271;
		L_1271 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1266, L_1267, L_1268, L_1269, L_1270, /*hidden argument*/NULL);
		V_84 = L_1271;
		int32_t L_1272 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1273 = V_42;
		int32_t L_1274 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1275 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1276 = V_43;
		int32_t L_1277;
		L_1277 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1272, L_1273, L_1274, L_1275, L_1276, /*hidden argument*/NULL);
		V_45 = L_1277;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1278 = V_42;
		V_44 = L_1278;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1279 = V_43;
		V_42 = L_1279;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1280 = V_44;
		V_43 = L_1280;
	}

IL_1588:
	{
		double L_1281 = V_46;
		if ((!(((double)L_1281) == ((double)(0.0)))))
		{
			goto IL_15a7;
		}
	}
	{
		double L_1282 = V_49;
		G_B58_0 = ((((int32_t)((((double)L_1282) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_15a8;
	}

IL_15a7:
	{
		G_B58_0 = 1;
	}

IL_15a8:
	{
		V_191 = (bool)G_B58_0;
		bool L_1283 = V_191;
		if (!L_1283)
		{
			goto IL_1e7a;
		}
	}
	{
		double L_1284 = V_47;
		if ((!(((double)L_1284) == ((double)(0.0)))))
		{
			goto IL_15eb;
		}
	}
	{
		double L_1285 = V_50;
		if ((!(((double)L_1285) == ((double)(0.0)))))
		{
			goto IL_15eb;
		}
	}
	{
		double L_1286 = V_48;
		if ((!(((double)L_1286) == ((double)(0.0)))))
		{
			goto IL_15eb;
		}
	}
	{
		double L_1287 = V_51;
		G_B64_0 = ((((int32_t)((((double)L_1287) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_15ec;
	}

IL_15eb:
	{
		G_B64_0 = 1;
	}

IL_15ec:
	{
		V_192 = (bool)G_B64_0;
		bool L_1288 = V_192;
		if (!L_1288)
		{
			goto IL_1aee;
		}
	}
	{
		double L_1289 = V_47;
		double L_1290 = V_5;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1289, (double)L_1290))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_1291 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1292 = V_47;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1291, (double)L_1292))));
		double L_1293 = V_166;
		double L_1294 = V_47;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1293, (double)L_1294))));
		double L_1295 = V_166;
		double L_1296 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1295, (double)L_1296));
		double L_1297 = V_47;
		double L_1298 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1297, (double)L_1298));
		double L_1299 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1300 = V_5;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1299, (double)L_1300))));
		double L_1301 = V_166;
		double L_1302 = V_5;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1301, (double)L_1302))));
		double L_1303 = V_166;
		double L_1304 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1303, (double)L_1304));
		double L_1305 = V_5;
		double L_1306 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1305, (double)L_1306));
		double L_1307 = V_70;
		double L_1308 = V_168;
		double L_1309 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1307, (double)((double)il2cpp_codegen_multiply((double)L_1308, (double)L_1309))));
		double L_1310 = V_172;
		double L_1311 = V_169;
		double L_1312 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1310, (double)((double)il2cpp_codegen_multiply((double)L_1311, (double)L_1312))));
		double L_1313 = V_173;
		double L_1314 = V_168;
		double L_1315 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1313, (double)((double)il2cpp_codegen_multiply((double)L_1314, (double)L_1315))));
		double L_1316 = V_169;
		double L_1317 = V_171;
		double L_1318 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1316, (double)L_1317)), (double)L_1318));
		double L_1319 = V_1;
		double L_1320 = V_51;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1319, (double)L_1320))));
		double L_1321 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1322 = V_1;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1321, (double)L_1322))));
		double L_1323 = V_166;
		double L_1324 = V_1;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1323, (double)L_1324))));
		double L_1325 = V_166;
		double L_1326 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1325, (double)L_1326));
		double L_1327 = V_1;
		double L_1328 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1327, (double)L_1328));
		double L_1329 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1330 = V_51;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1329, (double)L_1330))));
		double L_1331 = V_166;
		double L_1332 = V_51;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1331, (double)L_1332))));
		double L_1333 = V_166;
		double L_1334 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1333, (double)L_1334));
		double L_1335 = V_51;
		double L_1336 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1335, (double)L_1336));
		double L_1337 = V_71;
		double L_1338 = V_168;
		double L_1339 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1337, (double)((double)il2cpp_codegen_multiply((double)L_1338, (double)L_1339))));
		double L_1340 = V_172;
		double L_1341 = V_169;
		double L_1342 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1340, (double)((double)il2cpp_codegen_multiply((double)L_1341, (double)L_1342))));
		double L_1343 = V_173;
		double L_1344 = V_168;
		double L_1345 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1343, (double)((double)il2cpp_codegen_multiply((double)L_1344, (double)L_1345))));
		double L_1346 = V_169;
		double L_1347 = V_171;
		double L_1348 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1346, (double)L_1347)), (double)L_1348));
		double L_1349 = V_72;
		double L_1350 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_1349, (double)L_1350))));
		double L_1351 = V_175;
		double L_1352 = V_72;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1351, (double)L_1352))));
		double L_1353 = V_175;
		double L_1354 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1353, (double)L_1354));
		double L_1355 = V_73;
		double L_1356 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1355, (double)L_1356));
		double L_1357 = V_72;
		double L_1358 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1357, (double)L_1358));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1359 = V_74;
		double L_1360 = V_165;
		double L_1361 = V_164;
		NullCheck(L_1359);
		(L_1359)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_1360, (double)L_1361)));
		double L_1362 = V_70;
		double L_1363 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_1362, (double)L_1363))));
		double L_1364 = V_176;
		double L_1365 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1364, (double)L_1365))));
		double L_1366 = V_176;
		double L_1367 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1366, (double)L_1367));
		double L_1368 = V_175;
		double L_1369 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1368, (double)L_1369));
		double L_1370 = V_70;
		double L_1371 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1370, (double)L_1371));
		double L_1372 = V_165;
		double L_1373 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_1372, (double)L_1373));
		double L_1374 = V_177;
		double L_1375 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_1374, (double)L_1375))));
		double L_1376 = V_175;
		double L_1377 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1376, (double)L_1377))));
		double L_1378 = V_175;
		double L_1379 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1378, (double)L_1379));
		double L_1380 = V_71;
		double L_1381 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1380, (double)L_1381));
		double L_1382 = V_177;
		double L_1383 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1382, (double)L_1383));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1384 = V_74;
		double L_1385 = V_165;
		double L_1386 = V_164;
		NullCheck(L_1384);
		(L_1384)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_1385, (double)L_1386)));
		double L_1387 = V_176;
		double L_1388 = V_175;
		V_76 = ((double)((double)((double)il2cpp_codegen_add((double)L_1387, (double)L_1388))));
		double L_1389 = V_76;
		double L_1390 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1389, (double)L_1390))));
		double L_1391 = V_76;
		double L_1392 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1391, (double)L_1392));
		double L_1393 = V_175;
		double L_1394 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1393, (double)L_1394));
		double L_1395 = V_176;
		double L_1396 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1395, (double)L_1396));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1397 = V_74;
		double L_1398 = V_165;
		double L_1399 = V_164;
		NullCheck(L_1397);
		(L_1397)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_1398, (double)L_1399)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1400 = V_74;
		double L_1401 = V_76;
		NullCheck(L_1400);
		(L_1400)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1401);
		double L_1402 = V_4;
		V_161 = ((-L_1402));
		double L_1403 = V_48;
		double L_1404 = V_161;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1403, (double)L_1404))));
		double L_1405 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1406 = V_48;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1405, (double)L_1406))));
		double L_1407 = V_166;
		double L_1408 = V_48;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1407, (double)L_1408))));
		double L_1409 = V_166;
		double L_1410 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1409, (double)L_1410));
		double L_1411 = V_48;
		double L_1412 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1411, (double)L_1412));
		double L_1413 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1414 = V_161;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1413, (double)L_1414))));
		double L_1415 = V_166;
		double L_1416 = V_161;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1415, (double)L_1416))));
		double L_1417 = V_166;
		double L_1418 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1417, (double)L_1418));
		double L_1419 = V_161;
		double L_1420 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1419, (double)L_1420));
		double L_1421 = V_70;
		double L_1422 = V_168;
		double L_1423 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1421, (double)((double)il2cpp_codegen_multiply((double)L_1422, (double)L_1423))));
		double L_1424 = V_172;
		double L_1425 = V_169;
		double L_1426 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1424, (double)((double)il2cpp_codegen_multiply((double)L_1425, (double)L_1426))));
		double L_1427 = V_173;
		double L_1428 = V_168;
		double L_1429 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1427, (double)((double)il2cpp_codegen_multiply((double)L_1428, (double)L_1429))));
		double L_1430 = V_169;
		double L_1431 = V_171;
		double L_1432 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1430, (double)L_1431)), (double)L_1432));
		double L_1433 = V_50;
		V_161 = ((-L_1433));
		double L_1434 = V_2;
		double L_1435 = V_161;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1434, (double)L_1435))));
		double L_1436 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1437 = V_2;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1436, (double)L_1437))));
		double L_1438 = V_166;
		double L_1439 = V_2;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1438, (double)L_1439))));
		double L_1440 = V_166;
		double L_1441 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1440, (double)L_1441));
		double L_1442 = V_2;
		double L_1443 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1442, (double)L_1443));
		double L_1444 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1445 = V_161;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1444, (double)L_1445))));
		double L_1446 = V_166;
		double L_1447 = V_161;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1446, (double)L_1447))));
		double L_1448 = V_166;
		double L_1449 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1448, (double)L_1449));
		double L_1450 = V_161;
		double L_1451 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1450, (double)L_1451));
		double L_1452 = V_71;
		double L_1453 = V_168;
		double L_1454 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1452, (double)((double)il2cpp_codegen_multiply((double)L_1453, (double)L_1454))));
		double L_1455 = V_172;
		double L_1456 = V_169;
		double L_1457 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1455, (double)((double)il2cpp_codegen_multiply((double)L_1456, (double)L_1457))));
		double L_1458 = V_173;
		double L_1459 = V_168;
		double L_1460 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1458, (double)((double)il2cpp_codegen_multiply((double)L_1459, (double)L_1460))));
		double L_1461 = V_169;
		double L_1462 = V_171;
		double L_1463 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1461, (double)L_1462)), (double)L_1463));
		double L_1464 = V_72;
		double L_1465 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_1464, (double)L_1465))));
		double L_1466 = V_175;
		double L_1467 = V_72;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1466, (double)L_1467))));
		double L_1468 = V_175;
		double L_1469 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1468, (double)L_1469));
		double L_1470 = V_73;
		double L_1471 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1470, (double)L_1471));
		double L_1472 = V_72;
		double L_1473 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1472, (double)L_1473));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1474 = V_75;
		double L_1475 = V_165;
		double L_1476 = V_164;
		NullCheck(L_1474);
		(L_1474)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_1475, (double)L_1476)));
		double L_1477 = V_70;
		double L_1478 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_1477, (double)L_1478))));
		double L_1479 = V_176;
		double L_1480 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1479, (double)L_1480))));
		double L_1481 = V_176;
		double L_1482 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1481, (double)L_1482));
		double L_1483 = V_175;
		double L_1484 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1483, (double)L_1484));
		double L_1485 = V_70;
		double L_1486 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1485, (double)L_1486));
		double L_1487 = V_165;
		double L_1488 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_1487, (double)L_1488));
		double L_1489 = V_177;
		double L_1490 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_1489, (double)L_1490))));
		double L_1491 = V_175;
		double L_1492 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1491, (double)L_1492))));
		double L_1493 = V_175;
		double L_1494 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1493, (double)L_1494));
		double L_1495 = V_71;
		double L_1496 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1495, (double)L_1496));
		double L_1497 = V_177;
		double L_1498 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1497, (double)L_1498));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1499 = V_75;
		double L_1500 = V_165;
		double L_1501 = V_164;
		NullCheck(L_1499);
		(L_1499)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_1500, (double)L_1501)));
		double L_1502 = V_176;
		double L_1503 = V_175;
		V_77 = ((double)((double)((double)il2cpp_codegen_add((double)L_1502, (double)L_1503))));
		double L_1504 = V_77;
		double L_1505 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1504, (double)L_1505))));
		double L_1506 = V_77;
		double L_1507 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1506, (double)L_1507));
		double L_1508 = V_175;
		double L_1509 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1508, (double)L_1509));
		double L_1510 = V_176;
		double L_1511 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1510, (double)L_1511));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1512 = V_75;
		double L_1513 = V_165;
		double L_1514 = V_164;
		NullCheck(L_1512);
		(L_1512)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_1513, (double)L_1514)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1515 = V_75;
		double L_1516 = V_77;
		NullCheck(L_1515);
		(L_1515)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1516);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1517 = V_74;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1518 = V_75;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1519 = V_147;
		int32_t L_1520;
		L_1520 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, 4, L_1517, 4, L_1518, L_1519, /*hidden argument*/NULL);
		V_150 = L_1520;
		double L_1521 = V_47;
		double L_1522 = V_51;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1521, (double)L_1522))));
		double L_1523 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1524 = V_47;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1523, (double)L_1524))));
		double L_1525 = V_166;
		double L_1526 = V_47;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1525, (double)L_1526))));
		double L_1527 = V_166;
		double L_1528 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1527, (double)L_1528));
		double L_1529 = V_47;
		double L_1530 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1529, (double)L_1530));
		double L_1531 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1532 = V_51;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1531, (double)L_1532))));
		double L_1533 = V_166;
		double L_1534 = V_51;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1533, (double)L_1534))));
		double L_1535 = V_166;
		double L_1536 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1535, (double)L_1536));
		double L_1537 = V_51;
		double L_1538 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1537, (double)L_1538));
		double L_1539 = V_70;
		double L_1540 = V_168;
		double L_1541 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1539, (double)((double)il2cpp_codegen_multiply((double)L_1540, (double)L_1541))));
		double L_1542 = V_172;
		double L_1543 = V_169;
		double L_1544 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1542, (double)((double)il2cpp_codegen_multiply((double)L_1543, (double)L_1544))));
		double L_1545 = V_173;
		double L_1546 = V_168;
		double L_1547 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1545, (double)((double)il2cpp_codegen_multiply((double)L_1546, (double)L_1547))));
		double L_1548 = V_169;
		double L_1549 = V_171;
		double L_1550 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1548, (double)L_1549)), (double)L_1550));
		double L_1551 = V_48;
		double L_1552 = V_50;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1551, (double)L_1552))));
		double L_1553 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1554 = V_48;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1553, (double)L_1554))));
		double L_1555 = V_166;
		double L_1556 = V_48;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1555, (double)L_1556))));
		double L_1557 = V_166;
		double L_1558 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1557, (double)L_1558));
		double L_1559 = V_48;
		double L_1560 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1559, (double)L_1560));
		double L_1561 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1562 = V_50;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1561, (double)L_1562))));
		double L_1563 = V_166;
		double L_1564 = V_50;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1563, (double)L_1564))));
		double L_1565 = V_166;
		double L_1566 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1565, (double)L_1566));
		double L_1567 = V_50;
		double L_1568 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1567, (double)L_1568));
		double L_1569 = V_71;
		double L_1570 = V_168;
		double L_1571 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1569, (double)((double)il2cpp_codegen_multiply((double)L_1570, (double)L_1571))));
		double L_1572 = V_172;
		double L_1573 = V_169;
		double L_1574 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1572, (double)((double)il2cpp_codegen_multiply((double)L_1573, (double)L_1574))));
		double L_1575 = V_173;
		double L_1576 = V_168;
		double L_1577 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1575, (double)((double)il2cpp_codegen_multiply((double)L_1576, (double)L_1577))));
		double L_1578 = V_169;
		double L_1579 = V_171;
		double L_1580 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1578, (double)L_1579)), (double)L_1580));
		double L_1581 = V_72;
		double L_1582 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1581, (double)L_1582))));
		double L_1583 = V_72;
		double L_1584 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1583, (double)L_1584))));
		double L_1585 = V_175;
		double L_1586 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_1585, (double)L_1586));
		double L_1587 = V_162;
		double L_1588 = V_73;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1587, (double)L_1588));
		double L_1589 = V_72;
		double L_1590 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1589, (double)L_1590));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1591 = V_153;
		double L_1592 = V_165;
		double L_1593 = V_164;
		NullCheck(L_1591);
		(L_1591)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_1592, (double)L_1593)));
		double L_1594 = V_70;
		double L_1595 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_1594, (double)L_1595))));
		double L_1596 = V_176;
		double L_1597 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1596, (double)L_1597))));
		double L_1598 = V_176;
		double L_1599 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1598, (double)L_1599));
		double L_1600 = V_175;
		double L_1601 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1600, (double)L_1601));
		double L_1602 = V_70;
		double L_1603 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1602, (double)L_1603));
		double L_1604 = V_165;
		double L_1605 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_1604, (double)L_1605));
		double L_1606 = V_177;
		double L_1607 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1606, (double)L_1607))));
		double L_1608 = V_177;
		double L_1609 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1608, (double)L_1609))));
		double L_1610 = V_175;
		double L_1611 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_1610, (double)L_1611));
		double L_1612 = V_162;
		double L_1613 = V_71;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1612, (double)L_1613));
		double L_1614 = V_177;
		double L_1615 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1614, (double)L_1615));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1616 = V_153;
		double L_1617 = V_165;
		double L_1618 = V_164;
		NullCheck(L_1616);
		(L_1616)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_1617, (double)L_1618)));
		double L_1619 = V_176;
		double L_1620 = V_175;
		V_159 = ((double)((double)((double)il2cpp_codegen_add((double)L_1619, (double)L_1620))));
		double L_1621 = V_159;
		double L_1622 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1621, (double)L_1622))));
		double L_1623 = V_159;
		double L_1624 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1623, (double)L_1624));
		double L_1625 = V_175;
		double L_1626 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1625, (double)L_1626));
		double L_1627 = V_176;
		double L_1628 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1627, (double)L_1628));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1629 = V_153;
		double L_1630 = V_165;
		double L_1631 = V_164;
		NullCheck(L_1629);
		(L_1629)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_1630, (double)L_1631)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1632 = V_153;
		double L_1633 = V_159;
		NullCheck(L_1632);
		(L_1632)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1633);
		V_156 = 4;
		goto IL_1b10;
	}

IL_1aee:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1634 = V_147;
		NullCheck(L_1634);
		(L_1634)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_150 = 1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1635 = V_153;
		NullCheck(L_1635);
		(L_1635)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_156 = 1;
	}

IL_1b10:
	{
		double L_1636 = V_46;
		V_193 = (bool)((((int32_t)((((double)L_1636) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1637 = V_193;
		if (!L_1637)
		{
			goto IL_1d2a;
		}
	}
	{
		int32_t L_1638 = V_116;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1639 = V_110;
		double L_1640 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1641 = __this->get_temp16a_30();
		int32_t L_1642;
		L_1642 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1638, L_1639, L_1640, L_1641, /*hidden argument*/NULL);
		V_79 = L_1642;
		int32_t L_1643 = V_150;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1644 = V_147;
		double L_1645 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1646 = V_122;
		int32_t L_1647;
		L_1647 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1643, L_1644, L_1645, L_1646, /*hidden argument*/NULL);
		V_128 = L_1647;
		int32_t L_1648 = V_128;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1649 = V_122;
		double L_1650 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1651 = __this->get_temp32a_33();
		int32_t L_1652;
		L_1652 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1648, L_1649, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1650)), L_1651, /*hidden argument*/NULL);
		V_82 = L_1652;
		int32_t L_1653 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1654 = __this->get_temp16a_30();
		int32_t L_1655 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1656 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1657 = __this->get_temp48_35();
		int32_t L_1658;
		L_1658 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1653, L_1654, L_1655, L_1656, L_1657, /*hidden argument*/NULL);
		V_84 = L_1658;
		int32_t L_1659 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1660 = V_42;
		int32_t L_1661 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1662 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1663 = V_43;
		int32_t L_1664;
		L_1664 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1659, L_1660, L_1661, L_1662, L_1663, /*hidden argument*/NULL);
		V_45 = L_1664;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1665 = V_42;
		V_44 = L_1665;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1666 = V_43;
		V_42 = L_1666;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1667 = V_44;
		V_43 = L_1667;
		double L_1668 = V_50;
		V_194 = (bool)((((int32_t)((((double)L_1668) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1669 = V_194;
		if (!L_1669)
		{
			goto IL_1c10;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1670 = V_66;
		double L_1671 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1672 = __this->get_temp8_29();
		int32_t L_1673;
		L_1673 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1670, L_1671, L_1672, /*hidden argument*/NULL);
		V_78 = L_1673;
		int32_t L_1674 = V_78;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1675 = __this->get_temp8_29();
		double L_1676 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1677 = __this->get_temp16a_30();
		int32_t L_1678;
		L_1678 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1674, L_1675, L_1676, L_1677, /*hidden argument*/NULL);
		V_79 = L_1678;
		int32_t L_1679 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1680 = V_42;
		int32_t L_1681 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1682 = __this->get_temp16a_30();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1683 = V_43;
		int32_t L_1684;
		L_1684 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1679, L_1680, L_1681, L_1682, L_1683, /*hidden argument*/NULL);
		V_45 = L_1684;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1685 = V_42;
		V_44 = L_1685;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1686 = V_43;
		V_42 = L_1686;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1687 = V_44;
		V_43 = L_1687;
	}

IL_1c10:
	{
		double L_1688 = V_51;
		V_195 = (bool)((((int32_t)((((double)L_1688) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1689 = V_195;
		if (!L_1689)
		{
			goto IL_1c76;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1690 = V_65;
		double L_1691 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1692 = __this->get_temp8_29();
		int32_t L_1693;
		L_1693 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_1690, ((-L_1691)), L_1692, /*hidden argument*/NULL);
		V_78 = L_1693;
		int32_t L_1694 = V_78;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1695 = __this->get_temp8_29();
		double L_1696 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1697 = __this->get_temp16a_30();
		int32_t L_1698;
		L_1698 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1694, L_1695, L_1696, L_1697, /*hidden argument*/NULL);
		V_79 = L_1698;
		int32_t L_1699 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1700 = V_42;
		int32_t L_1701 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1702 = __this->get_temp16a_30();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1703 = V_43;
		int32_t L_1704;
		L_1704 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1699, L_1700, L_1701, L_1702, L_1703, /*hidden argument*/NULL);
		V_45 = L_1704;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1705 = V_42;
		V_44 = L_1705;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1706 = V_43;
		V_42 = L_1706;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1707 = V_44;
		V_43 = L_1707;
	}

IL_1c76:
	{
		int32_t L_1708 = V_128;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1709 = V_122;
		double L_1710 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1711 = __this->get_temp32a_33();
		int32_t L_1712;
		L_1712 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1708, L_1709, L_1710, L_1711, /*hidden argument*/NULL);
		V_82 = L_1712;
		int32_t L_1713 = V_156;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1714 = V_153;
		double L_1715 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1716 = V_134;
		int32_t L_1717;
		L_1717 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1713, L_1714, L_1715, L_1716, /*hidden argument*/NULL);
		V_140 = L_1717;
		int32_t L_1718 = V_140;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1719 = V_134;
		double L_1720 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1721 = __this->get_temp16a_30();
		int32_t L_1722;
		L_1722 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1718, L_1719, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1720)), L_1721, /*hidden argument*/NULL);
		V_79 = L_1722;
		int32_t L_1723 = V_140;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1724 = V_134;
		double L_1725 = V_46;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1726 = __this->get_temp16b_31();
		int32_t L_1727;
		L_1727 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1723, L_1724, L_1725, L_1726, /*hidden argument*/NULL);
		V_80 = L_1727;
		int32_t L_1728 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1729 = __this->get_temp16a_30();
		int32_t L_1730 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1731 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1732 = __this->get_temp32b_34();
		int32_t L_1733;
		L_1733 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1728, L_1729, L_1730, L_1731, L_1732, /*hidden argument*/NULL);
		V_83 = L_1733;
		int32_t L_1734 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1735 = __this->get_temp32a_33();
		int32_t L_1736 = V_83;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1737 = __this->get_temp32b_34();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1738 = __this->get_temp64_36();
		int32_t L_1739;
		L_1739 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1734, L_1735, L_1736, L_1737, L_1738, /*hidden argument*/NULL);
		V_85 = L_1739;
		int32_t L_1740 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1741 = V_42;
		int32_t L_1742 = V_85;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1743 = __this->get_temp64_36();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1744 = V_43;
		int32_t L_1745;
		L_1745 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1740, L_1741, L_1742, L_1743, L_1744, /*hidden argument*/NULL);
		V_45 = L_1745;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1746 = V_42;
		V_44 = L_1746;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1747 = V_43;
		V_42 = L_1747;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1748 = V_44;
		V_43 = L_1748;
	}

IL_1d2a:
	{
		double L_1749 = V_49;
		V_196 = (bool)((((int32_t)((((double)L_1749) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1750 = V_196;
		if (!L_1750)
		{
			goto IL_1e79;
		}
	}
	{
		int32_t L_1751 = V_117;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1752 = V_111;
		double L_1753 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1754 = __this->get_temp16a_30();
		int32_t L_1755;
		L_1755 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1751, L_1752, L_1753, L_1754, /*hidden argument*/NULL);
		V_79 = L_1755;
		int32_t L_1756 = V_150;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1757 = V_147;
		double L_1758 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1759 = V_123;
		int32_t L_1760;
		L_1760 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1756, L_1757, L_1758, L_1759, /*hidden argument*/NULL);
		V_129 = L_1760;
		int32_t L_1761 = V_129;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1762 = V_123;
		double L_1763 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1764 = __this->get_temp32a_33();
		int32_t L_1765;
		L_1765 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1761, L_1762, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1763)), L_1764, /*hidden argument*/NULL);
		V_82 = L_1765;
		int32_t L_1766 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1767 = __this->get_temp16a_30();
		int32_t L_1768 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1769 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1770 = __this->get_temp48_35();
		int32_t L_1771;
		L_1771 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1766, L_1767, L_1768, L_1769, L_1770, /*hidden argument*/NULL);
		V_84 = L_1771;
		int32_t L_1772 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1773 = V_42;
		int32_t L_1774 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1775 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1776 = V_43;
		int32_t L_1777;
		L_1777 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1772, L_1773, L_1774, L_1775, L_1776, /*hidden argument*/NULL);
		V_45 = L_1777;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1778 = V_42;
		V_44 = L_1778;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1779 = V_43;
		V_42 = L_1779;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1780 = V_44;
		V_43 = L_1780;
		int32_t L_1781 = V_129;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1782 = V_123;
		double L_1783 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1784 = __this->get_temp32a_33();
		int32_t L_1785;
		L_1785 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1781, L_1782, L_1783, L_1784, /*hidden argument*/NULL);
		V_82 = L_1785;
		int32_t L_1786 = V_156;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1787 = V_153;
		double L_1788 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1789 = V_135;
		int32_t L_1790;
		L_1790 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1786, L_1787, L_1788, L_1789, /*hidden argument*/NULL);
		V_141 = L_1790;
		int32_t L_1791 = V_141;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1792 = V_135;
		double L_1793 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1794 = __this->get_temp16a_30();
		int32_t L_1795;
		L_1795 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1791, L_1792, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_1793)), L_1794, /*hidden argument*/NULL);
		V_79 = L_1795;
		int32_t L_1796 = V_141;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1797 = V_135;
		double L_1798 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1799 = __this->get_temp16b_31();
		int32_t L_1800;
		L_1800 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_1796, L_1797, L_1798, L_1799, /*hidden argument*/NULL);
		V_80 = L_1800;
		int32_t L_1801 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1802 = __this->get_temp16a_30();
		int32_t L_1803 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1804 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1805 = __this->get_temp32b_34();
		int32_t L_1806;
		L_1806 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1801, L_1802, L_1803, L_1804, L_1805, /*hidden argument*/NULL);
		V_83 = L_1806;
		int32_t L_1807 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1808 = __this->get_temp32a_33();
		int32_t L_1809 = V_83;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1810 = __this->get_temp32b_34();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1811 = __this->get_temp64_36();
		int32_t L_1812;
		L_1812 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1807, L_1808, L_1809, L_1810, L_1811, /*hidden argument*/NULL);
		V_85 = L_1812;
		int32_t L_1813 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1814 = V_42;
		int32_t L_1815 = V_85;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1816 = __this->get_temp64_36();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1817 = V_43;
		int32_t L_1818;
		L_1818 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_1813, L_1814, L_1815, L_1816, L_1817, /*hidden argument*/NULL);
		V_45 = L_1818;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1819 = V_42;
		V_44 = L_1819;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1820 = V_43;
		V_42 = L_1820;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1821 = V_44;
		V_43 = L_1821;
	}

IL_1e79:
	{
	}

IL_1e7a:
	{
		double L_1822 = V_47;
		if ((!(((double)L_1822) == ((double)(0.0)))))
		{
			goto IL_1e99;
		}
	}
	{
		double L_1823 = V_50;
		G_B79_0 = ((((int32_t)((((double)L_1823) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_1e9a;
	}

IL_1e99:
	{
		G_B79_0 = 1;
	}

IL_1e9a:
	{
		V_197 = (bool)G_B79_0;
		bool L_1824 = V_197;
		if (!L_1824)
		{
			goto IL_276a;
		}
	}
	{
		double L_1825 = V_48;
		if ((!(((double)L_1825) == ((double)(0.0)))))
		{
			goto IL_1edd;
		}
	}
	{
		double L_1826 = V_51;
		if ((!(((double)L_1826) == ((double)(0.0)))))
		{
			goto IL_1edd;
		}
	}
	{
		double L_1827 = V_46;
		if ((!(((double)L_1827) == ((double)(0.0)))))
		{
			goto IL_1edd;
		}
	}
	{
		double L_1828 = V_49;
		G_B85_0 = ((((int32_t)((((double)L_1828) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_1ede;
	}

IL_1edd:
	{
		G_B85_0 = 1;
	}

IL_1ede:
	{
		V_198 = (bool)G_B85_0;
		bool L_1829 = V_198;
		if (!L_1829)
		{
			goto IL_23dc;
		}
	}
	{
		double L_1830 = V_48;
		double L_1831 = V_3;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1830, (double)L_1831))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_1832 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1833 = V_48;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1832, (double)L_1833))));
		double L_1834 = V_166;
		double L_1835 = V_48;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1834, (double)L_1835))));
		double L_1836 = V_166;
		double L_1837 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1836, (double)L_1837));
		double L_1838 = V_48;
		double L_1839 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1838, (double)L_1839));
		double L_1840 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1841 = V_3;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1840, (double)L_1841))));
		double L_1842 = V_166;
		double L_1843 = V_3;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1842, (double)L_1843))));
		double L_1844 = V_166;
		double L_1845 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1844, (double)L_1845));
		double L_1846 = V_3;
		double L_1847 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1846, (double)L_1847));
		double L_1848 = V_70;
		double L_1849 = V_168;
		double L_1850 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1848, (double)((double)il2cpp_codegen_multiply((double)L_1849, (double)L_1850))));
		double L_1851 = V_172;
		double L_1852 = V_169;
		double L_1853 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1851, (double)((double)il2cpp_codegen_multiply((double)L_1852, (double)L_1853))));
		double L_1854 = V_173;
		double L_1855 = V_168;
		double L_1856 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1854, (double)((double)il2cpp_codegen_multiply((double)L_1855, (double)L_1856))));
		double L_1857 = V_169;
		double L_1858 = V_171;
		double L_1859 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1857, (double)L_1858)), (double)L_1859));
		double L_1860 = V_2;
		double L_1861 = V_49;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1860, (double)L_1861))));
		double L_1862 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1863 = V_2;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1862, (double)L_1863))));
		double L_1864 = V_166;
		double L_1865 = V_2;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1864, (double)L_1865))));
		double L_1866 = V_166;
		double L_1867 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1866, (double)L_1867));
		double L_1868 = V_2;
		double L_1869 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1868, (double)L_1869));
		double L_1870 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1871 = V_49;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1870, (double)L_1871))));
		double L_1872 = V_166;
		double L_1873 = V_49;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1872, (double)L_1873))));
		double L_1874 = V_166;
		double L_1875 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1874, (double)L_1875));
		double L_1876 = V_49;
		double L_1877 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1876, (double)L_1877));
		double L_1878 = V_71;
		double L_1879 = V_168;
		double L_1880 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1878, (double)((double)il2cpp_codegen_multiply((double)L_1879, (double)L_1880))));
		double L_1881 = V_172;
		double L_1882 = V_169;
		double L_1883 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1881, (double)((double)il2cpp_codegen_multiply((double)L_1882, (double)L_1883))));
		double L_1884 = V_173;
		double L_1885 = V_168;
		double L_1886 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1884, (double)((double)il2cpp_codegen_multiply((double)L_1885, (double)L_1886))));
		double L_1887 = V_169;
		double L_1888 = V_171;
		double L_1889 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1887, (double)L_1888)), (double)L_1889));
		double L_1890 = V_72;
		double L_1891 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_1890, (double)L_1891))));
		double L_1892 = V_175;
		double L_1893 = V_72;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1892, (double)L_1893))));
		double L_1894 = V_175;
		double L_1895 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1894, (double)L_1895));
		double L_1896 = V_73;
		double L_1897 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1896, (double)L_1897));
		double L_1898 = V_72;
		double L_1899 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1898, (double)L_1899));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1900 = V_74;
		double L_1901 = V_165;
		double L_1902 = V_164;
		NullCheck(L_1900);
		(L_1900)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_1901, (double)L_1902)));
		double L_1903 = V_70;
		double L_1904 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_1903, (double)L_1904))));
		double L_1905 = V_176;
		double L_1906 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1905, (double)L_1906))));
		double L_1907 = V_176;
		double L_1908 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1907, (double)L_1908));
		double L_1909 = V_175;
		double L_1910 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1909, (double)L_1910));
		double L_1911 = V_70;
		double L_1912 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1911, (double)L_1912));
		double L_1913 = V_165;
		double L_1914 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_1913, (double)L_1914));
		double L_1915 = V_177;
		double L_1916 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_1915, (double)L_1916))));
		double L_1917 = V_175;
		double L_1918 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1917, (double)L_1918))));
		double L_1919 = V_175;
		double L_1920 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1919, (double)L_1920));
		double L_1921 = V_71;
		double L_1922 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1921, (double)L_1922));
		double L_1923 = V_177;
		double L_1924 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1923, (double)L_1924));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1925 = V_74;
		double L_1926 = V_165;
		double L_1927 = V_164;
		NullCheck(L_1925);
		(L_1925)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_1926, (double)L_1927)));
		double L_1928 = V_176;
		double L_1929 = V_175;
		V_76 = ((double)((double)((double)il2cpp_codegen_add((double)L_1928, (double)L_1929))));
		double L_1930 = V_76;
		double L_1931 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1930, (double)L_1931))));
		double L_1932 = V_76;
		double L_1933 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_1932, (double)L_1933));
		double L_1934 = V_175;
		double L_1935 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_1934, (double)L_1935));
		double L_1936 = V_176;
		double L_1937 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_1936, (double)L_1937));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1938 = V_74;
		double L_1939 = V_165;
		double L_1940 = V_164;
		NullCheck(L_1938);
		(L_1938)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_1939, (double)L_1940)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1941 = V_74;
		double L_1942 = V_76;
		NullCheck(L_1941);
		(L_1941)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1942);
		double L_1943 = V_5;
		V_161 = ((-L_1943));
		double L_1944 = V_46;
		double L_1945 = V_161;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1944, (double)L_1945))));
		double L_1946 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1947 = V_46;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1946, (double)L_1947))));
		double L_1948 = V_166;
		double L_1949 = V_46;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1948, (double)L_1949))));
		double L_1950 = V_166;
		double L_1951 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1950, (double)L_1951));
		double L_1952 = V_46;
		double L_1953 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1952, (double)L_1953));
		double L_1954 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1955 = V_161;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1954, (double)L_1955))));
		double L_1956 = V_166;
		double L_1957 = V_161;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1956, (double)L_1957))));
		double L_1958 = V_166;
		double L_1959 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1958, (double)L_1959));
		double L_1960 = V_161;
		double L_1961 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1960, (double)L_1961));
		double L_1962 = V_70;
		double L_1963 = V_168;
		double L_1964 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1962, (double)((double)il2cpp_codegen_multiply((double)L_1963, (double)L_1964))));
		double L_1965 = V_172;
		double L_1966 = V_169;
		double L_1967 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1965, (double)((double)il2cpp_codegen_multiply((double)L_1966, (double)L_1967))));
		double L_1968 = V_173;
		double L_1969 = V_168;
		double L_1970 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1968, (double)((double)il2cpp_codegen_multiply((double)L_1969, (double)L_1970))));
		double L_1971 = V_169;
		double L_1972 = V_171;
		double L_1973 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1971, (double)L_1972)), (double)L_1973));
		double L_1974 = V_51;
		V_161 = ((-L_1974));
		double L_1975 = V_0;
		double L_1976 = V_161;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1975, (double)L_1976))));
		double L_1977 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1978 = V_0;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1977, (double)L_1978))));
		double L_1979 = V_166;
		double L_1980 = V_0;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1979, (double)L_1980))));
		double L_1981 = V_166;
		double L_1982 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_1981, (double)L_1982));
		double L_1983 = V_0;
		double L_1984 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_1983, (double)L_1984));
		double L_1985 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_1986 = V_161;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_1985, (double)L_1986))));
		double L_1987 = V_166;
		double L_1988 = V_161;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_1987, (double)L_1988))));
		double L_1989 = V_166;
		double L_1990 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_1989, (double)L_1990));
		double L_1991 = V_161;
		double L_1992 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_1991, (double)L_1992));
		double L_1993 = V_71;
		double L_1994 = V_168;
		double L_1995 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_1993, (double)((double)il2cpp_codegen_multiply((double)L_1994, (double)L_1995))));
		double L_1996 = V_172;
		double L_1997 = V_169;
		double L_1998 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_1996, (double)((double)il2cpp_codegen_multiply((double)L_1997, (double)L_1998))));
		double L_1999 = V_173;
		double L_2000 = V_168;
		double L_2001 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_1999, (double)((double)il2cpp_codegen_multiply((double)L_2000, (double)L_2001))));
		double L_2002 = V_169;
		double L_2003 = V_171;
		double L_2004 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2002, (double)L_2003)), (double)L_2004));
		double L_2005 = V_72;
		double L_2006 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_2005, (double)L_2006))));
		double L_2007 = V_175;
		double L_2008 = V_72;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2007, (double)L_2008))));
		double L_2009 = V_175;
		double L_2010 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2009, (double)L_2010));
		double L_2011 = V_73;
		double L_2012 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2011, (double)L_2012));
		double L_2013 = V_72;
		double L_2014 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2013, (double)L_2014));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2015 = V_75;
		double L_2016 = V_165;
		double L_2017 = V_164;
		NullCheck(L_2015);
		(L_2015)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_2016, (double)L_2017)));
		double L_2018 = V_70;
		double L_2019 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_2018, (double)L_2019))));
		double L_2020 = V_176;
		double L_2021 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2020, (double)L_2021))));
		double L_2022 = V_176;
		double L_2023 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2022, (double)L_2023));
		double L_2024 = V_175;
		double L_2025 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2024, (double)L_2025));
		double L_2026 = V_70;
		double L_2027 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2026, (double)L_2027));
		double L_2028 = V_165;
		double L_2029 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_2028, (double)L_2029));
		double L_2030 = V_177;
		double L_2031 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_2030, (double)L_2031))));
		double L_2032 = V_175;
		double L_2033 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2032, (double)L_2033))));
		double L_2034 = V_175;
		double L_2035 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2034, (double)L_2035));
		double L_2036 = V_71;
		double L_2037 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2036, (double)L_2037));
		double L_2038 = V_177;
		double L_2039 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2038, (double)L_2039));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2040 = V_75;
		double L_2041 = V_165;
		double L_2042 = V_164;
		NullCheck(L_2040);
		(L_2040)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_2041, (double)L_2042)));
		double L_2043 = V_176;
		double L_2044 = V_175;
		V_77 = ((double)((double)((double)il2cpp_codegen_add((double)L_2043, (double)L_2044))));
		double L_2045 = V_77;
		double L_2046 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2045, (double)L_2046))));
		double L_2047 = V_77;
		double L_2048 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2047, (double)L_2048));
		double L_2049 = V_175;
		double L_2050 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2049, (double)L_2050));
		double L_2051 = V_176;
		double L_2052 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2051, (double)L_2052));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2053 = V_75;
		double L_2054 = V_165;
		double L_2055 = V_164;
		NullCheck(L_2053);
		(L_2053)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_2054, (double)L_2055)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2056 = V_75;
		double L_2057 = V_77;
		NullCheck(L_2056);
		(L_2056)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2057);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2058 = V_74;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2059 = V_75;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2060 = V_148;
		int32_t L_2061;
		L_2061 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, 4, L_2058, 4, L_2059, L_2060, /*hidden argument*/NULL);
		V_151 = L_2061;
		double L_2062 = V_48;
		double L_2063 = V_49;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2062, (double)L_2063))));
		double L_2064 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2065 = V_48;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2064, (double)L_2065))));
		double L_2066 = V_166;
		double L_2067 = V_48;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2066, (double)L_2067))));
		double L_2068 = V_166;
		double L_2069 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_2068, (double)L_2069));
		double L_2070 = V_48;
		double L_2071 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_2070, (double)L_2071));
		double L_2072 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2073 = V_49;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2072, (double)L_2073))));
		double L_2074 = V_166;
		double L_2075 = V_49;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2074, (double)L_2075))));
		double L_2076 = V_166;
		double L_2077 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_2076, (double)L_2077));
		double L_2078 = V_49;
		double L_2079 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_2078, (double)L_2079));
		double L_2080 = V_70;
		double L_2081 = V_168;
		double L_2082 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_2080, (double)((double)il2cpp_codegen_multiply((double)L_2081, (double)L_2082))));
		double L_2083 = V_172;
		double L_2084 = V_169;
		double L_2085 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_2083, (double)((double)il2cpp_codegen_multiply((double)L_2084, (double)L_2085))));
		double L_2086 = V_173;
		double L_2087 = V_168;
		double L_2088 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_2086, (double)((double)il2cpp_codegen_multiply((double)L_2087, (double)L_2088))));
		double L_2089 = V_169;
		double L_2090 = V_171;
		double L_2091 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2089, (double)L_2090)), (double)L_2091));
		double L_2092 = V_46;
		double L_2093 = V_51;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2092, (double)L_2093))));
		double L_2094 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2095 = V_46;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2094, (double)L_2095))));
		double L_2096 = V_166;
		double L_2097 = V_46;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2096, (double)L_2097))));
		double L_2098 = V_166;
		double L_2099 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_2098, (double)L_2099));
		double L_2100 = V_46;
		double L_2101 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_2100, (double)L_2101));
		double L_2102 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2103 = V_51;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2102, (double)L_2103))));
		double L_2104 = V_166;
		double L_2105 = V_51;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2104, (double)L_2105))));
		double L_2106 = V_166;
		double L_2107 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_2106, (double)L_2107));
		double L_2108 = V_51;
		double L_2109 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_2108, (double)L_2109));
		double L_2110 = V_71;
		double L_2111 = V_168;
		double L_2112 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_2110, (double)((double)il2cpp_codegen_multiply((double)L_2111, (double)L_2112))));
		double L_2113 = V_172;
		double L_2114 = V_169;
		double L_2115 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_2113, (double)((double)il2cpp_codegen_multiply((double)L_2114, (double)L_2115))));
		double L_2116 = V_173;
		double L_2117 = V_168;
		double L_2118 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_2116, (double)((double)il2cpp_codegen_multiply((double)L_2117, (double)L_2118))));
		double L_2119 = V_169;
		double L_2120 = V_171;
		double L_2121 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2119, (double)L_2120)), (double)L_2121));
		double L_2122 = V_72;
		double L_2123 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2122, (double)L_2123))));
		double L_2124 = V_72;
		double L_2125 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2124, (double)L_2125))));
		double L_2126 = V_175;
		double L_2127 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_2126, (double)L_2127));
		double L_2128 = V_162;
		double L_2129 = V_73;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2128, (double)L_2129));
		double L_2130 = V_72;
		double L_2131 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2130, (double)L_2131));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2132 = V_154;
		double L_2133 = V_165;
		double L_2134 = V_164;
		NullCheck(L_2132);
		(L_2132)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_2133, (double)L_2134)));
		double L_2135 = V_70;
		double L_2136 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_2135, (double)L_2136))));
		double L_2137 = V_176;
		double L_2138 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2137, (double)L_2138))));
		double L_2139 = V_176;
		double L_2140 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2139, (double)L_2140));
		double L_2141 = V_175;
		double L_2142 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2141, (double)L_2142));
		double L_2143 = V_70;
		double L_2144 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2143, (double)L_2144));
		double L_2145 = V_165;
		double L_2146 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_2145, (double)L_2146));
		double L_2147 = V_177;
		double L_2148 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2147, (double)L_2148))));
		double L_2149 = V_177;
		double L_2150 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2149, (double)L_2150))));
		double L_2151 = V_175;
		double L_2152 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_2151, (double)L_2152));
		double L_2153 = V_162;
		double L_2154 = V_71;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2153, (double)L_2154));
		double L_2155 = V_177;
		double L_2156 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2155, (double)L_2156));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2157 = V_154;
		double L_2158 = V_165;
		double L_2159 = V_164;
		NullCheck(L_2157);
		(L_2157)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_2158, (double)L_2159)));
		double L_2160 = V_176;
		double L_2161 = V_175;
		V_160 = ((double)((double)((double)il2cpp_codegen_add((double)L_2160, (double)L_2161))));
		double L_2162 = V_160;
		double L_2163 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2162, (double)L_2163))));
		double L_2164 = V_160;
		double L_2165 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2164, (double)L_2165));
		double L_2166 = V_175;
		double L_2167 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2166, (double)L_2167));
		double L_2168 = V_176;
		double L_2169 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2168, (double)L_2169));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2170 = V_154;
		double L_2171 = V_165;
		double L_2172 = V_164;
		NullCheck(L_2170);
		(L_2170)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_2171, (double)L_2172)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2173 = V_154;
		double L_2174 = V_160;
		NullCheck(L_2173);
		(L_2173)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2174);
		V_157 = 4;
		goto IL_23fe;
	}

IL_23dc:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2175 = V_148;
		NullCheck(L_2175);
		(L_2175)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_151 = 1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2176 = V_154;
		NullCheck(L_2176);
		(L_2176)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_157 = 1;
	}

IL_23fe:
	{
		double L_2177 = V_47;
		V_199 = (bool)((((int32_t)((((double)L_2177) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2178 = V_199;
		if (!L_2178)
		{
			goto IL_2618;
		}
	}
	{
		int32_t L_2179 = V_118;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2180 = V_112;
		double L_2181 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2182 = __this->get_temp16a_30();
		int32_t L_2183;
		L_2183 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2179, L_2180, L_2181, L_2182, /*hidden argument*/NULL);
		V_79 = L_2183;
		int32_t L_2184 = V_151;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2185 = V_148;
		double L_2186 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2187 = V_124;
		int32_t L_2188;
		L_2188 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2184, L_2185, L_2186, L_2187, /*hidden argument*/NULL);
		V_130 = L_2188;
		int32_t L_2189 = V_130;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2190 = V_124;
		double L_2191 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2192 = __this->get_temp32a_33();
		int32_t L_2193;
		L_2193 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2189, L_2190, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2191)), L_2192, /*hidden argument*/NULL);
		V_82 = L_2193;
		int32_t L_2194 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2195 = __this->get_temp16a_30();
		int32_t L_2196 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2197 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2198 = __this->get_temp48_35();
		int32_t L_2199;
		L_2199 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2194, L_2195, L_2196, L_2197, L_2198, /*hidden argument*/NULL);
		V_84 = L_2199;
		int32_t L_2200 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2201 = V_42;
		int32_t L_2202 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2203 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2204 = V_43;
		int32_t L_2205;
		L_2205 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2200, L_2201, L_2202, L_2203, L_2204, /*hidden argument*/NULL);
		V_45 = L_2205;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2206 = V_42;
		V_44 = L_2206;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2207 = V_43;
		V_42 = L_2207;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2208 = V_44;
		V_43 = L_2208;
		double L_2209 = V_51;
		V_200 = (bool)((((int32_t)((((double)L_2209) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2210 = V_200;
		if (!L_2210)
		{
			goto IL_24fe;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2211 = V_64;
		double L_2212 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2213 = __this->get_temp8_29();
		int32_t L_2214;
		L_2214 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_2211, L_2212, L_2213, /*hidden argument*/NULL);
		V_78 = L_2214;
		int32_t L_2215 = V_78;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2216 = __this->get_temp8_29();
		double L_2217 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2218 = __this->get_temp16a_30();
		int32_t L_2219;
		L_2219 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2215, L_2216, L_2217, L_2218, /*hidden argument*/NULL);
		V_79 = L_2219;
		int32_t L_2220 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2221 = V_42;
		int32_t L_2222 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2223 = __this->get_temp16a_30();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2224 = V_43;
		int32_t L_2225;
		L_2225 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2220, L_2221, L_2222, L_2223, L_2224, /*hidden argument*/NULL);
		V_45 = L_2225;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2226 = V_42;
		V_44 = L_2226;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2227 = V_43;
		V_42 = L_2227;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2228 = V_44;
		V_43 = L_2228;
	}

IL_24fe:
	{
		double L_2229 = V_49;
		V_201 = (bool)((((int32_t)((((double)L_2229) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2230 = V_201;
		if (!L_2230)
		{
			goto IL_2564;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2231 = V_66;
		double L_2232 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2233 = __this->get_temp8_29();
		int32_t L_2234;
		L_2234 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_2231, ((-L_2232)), L_2233, /*hidden argument*/NULL);
		V_78 = L_2234;
		int32_t L_2235 = V_78;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2236 = __this->get_temp8_29();
		double L_2237 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2238 = __this->get_temp16a_30();
		int32_t L_2239;
		L_2239 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2235, L_2236, L_2237, L_2238, /*hidden argument*/NULL);
		V_79 = L_2239;
		int32_t L_2240 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2241 = V_42;
		int32_t L_2242 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2243 = __this->get_temp16a_30();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2244 = V_43;
		int32_t L_2245;
		L_2245 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2240, L_2241, L_2242, L_2243, L_2244, /*hidden argument*/NULL);
		V_45 = L_2245;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2246 = V_42;
		V_44 = L_2246;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2247 = V_43;
		V_42 = L_2247;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2248 = V_44;
		V_43 = L_2248;
	}

IL_2564:
	{
		int32_t L_2249 = V_130;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2250 = V_124;
		double L_2251 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2252 = __this->get_temp32a_33();
		int32_t L_2253;
		L_2253 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2249, L_2250, L_2251, L_2252, /*hidden argument*/NULL);
		V_82 = L_2253;
		int32_t L_2254 = V_157;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2255 = V_154;
		double L_2256 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2257 = V_136;
		int32_t L_2258;
		L_2258 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2254, L_2255, L_2256, L_2257, /*hidden argument*/NULL);
		V_142 = L_2258;
		int32_t L_2259 = V_142;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2260 = V_136;
		double L_2261 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2262 = __this->get_temp16a_30();
		int32_t L_2263;
		L_2263 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2259, L_2260, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2261)), L_2262, /*hidden argument*/NULL);
		V_79 = L_2263;
		int32_t L_2264 = V_142;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2265 = V_136;
		double L_2266 = V_47;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2267 = __this->get_temp16b_31();
		int32_t L_2268;
		L_2268 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2264, L_2265, L_2266, L_2267, /*hidden argument*/NULL);
		V_80 = L_2268;
		int32_t L_2269 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2270 = __this->get_temp16a_30();
		int32_t L_2271 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2272 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2273 = __this->get_temp32b_34();
		int32_t L_2274;
		L_2274 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2269, L_2270, L_2271, L_2272, L_2273, /*hidden argument*/NULL);
		V_83 = L_2274;
		int32_t L_2275 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2276 = __this->get_temp32a_33();
		int32_t L_2277 = V_83;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2278 = __this->get_temp32b_34();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2279 = __this->get_temp64_36();
		int32_t L_2280;
		L_2280 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2275, L_2276, L_2277, L_2278, L_2279, /*hidden argument*/NULL);
		V_85 = L_2280;
		int32_t L_2281 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2282 = V_42;
		int32_t L_2283 = V_85;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2284 = __this->get_temp64_36();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2285 = V_43;
		int32_t L_2286;
		L_2286 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2281, L_2282, L_2283, L_2284, L_2285, /*hidden argument*/NULL);
		V_45 = L_2286;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2287 = V_42;
		V_44 = L_2287;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2288 = V_43;
		V_42 = L_2288;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2289 = V_44;
		V_43 = L_2289;
	}

IL_2618:
	{
		double L_2290 = V_50;
		V_202 = (bool)((((int32_t)((((double)L_2290) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2291 = V_202;
		if (!L_2291)
		{
			goto IL_2769;
		}
	}
	{
		int32_t L_2292 = V_119;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2293 = V_113;
		double L_2294 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2295 = __this->get_temp16a_30();
		int32_t L_2296;
		L_2296 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2292, L_2293, L_2294, L_2295, /*hidden argument*/NULL);
		V_79 = L_2296;
		int32_t L_2297 = V_151;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2298 = V_148;
		double L_2299 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2300 = V_125;
		int32_t L_2301;
		L_2301 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2297, L_2298, L_2299, L_2300, /*hidden argument*/NULL);
		V_131 = L_2301;
		int32_t L_2302 = V_131;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2303 = V_125;
		double L_2304 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2305 = __this->get_temp32a_33();
		int32_t L_2306;
		L_2306 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2302, L_2303, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2304)), L_2305, /*hidden argument*/NULL);
		V_82 = L_2306;
		int32_t L_2307 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2308 = __this->get_temp16a_30();
		int32_t L_2309 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2310 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2311 = __this->get_temp48_35();
		int32_t L_2312;
		L_2312 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2307, L_2308, L_2309, L_2310, L_2311, /*hidden argument*/NULL);
		V_84 = L_2312;
		int32_t L_2313 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2314 = V_42;
		int32_t L_2315 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2316 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2317 = V_43;
		int32_t L_2318;
		L_2318 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2313, L_2314, L_2315, L_2316, L_2317, /*hidden argument*/NULL);
		V_45 = L_2318;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2319 = V_42;
		V_44 = L_2319;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2320 = V_43;
		V_42 = L_2320;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2321 = V_44;
		V_43 = L_2321;
		int32_t L_2322 = V_131;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2323 = V_125;
		double L_2324 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2325 = __this->get_temp32a_33();
		int32_t L_2326;
		L_2326 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2322, L_2323, L_2324, L_2325, /*hidden argument*/NULL);
		V_82 = L_2326;
		int32_t L_2327 = V_157;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2328 = V_154;
		double L_2329 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2330 = V_137;
		int32_t L_2331;
		L_2331 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2327, L_2328, L_2329, L_2330, /*hidden argument*/NULL);
		V_143 = L_2331;
		int32_t L_2332 = V_143;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2333 = V_137;
		double L_2334 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2335 = __this->get_temp16a_30();
		int32_t L_2336;
		L_2336 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2332, L_2333, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2334)), L_2335, /*hidden argument*/NULL);
		V_79 = L_2336;
		int32_t L_2337 = V_143;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2338 = V_137;
		double L_2339 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2340 = __this->get_temp16b_31();
		int32_t L_2341;
		L_2341 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2337, L_2338, L_2339, L_2340, /*hidden argument*/NULL);
		V_80 = L_2341;
		int32_t L_2342 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2343 = __this->get_temp16a_30();
		int32_t L_2344 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2345 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2346 = __this->get_temp32b_34();
		int32_t L_2347;
		L_2347 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2342, L_2343, L_2344, L_2345, L_2346, /*hidden argument*/NULL);
		V_83 = L_2347;
		int32_t L_2348 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2349 = __this->get_temp32a_33();
		int32_t L_2350 = V_83;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2351 = __this->get_temp32b_34();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2352 = __this->get_temp64_36();
		int32_t L_2353;
		L_2353 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2348, L_2349, L_2350, L_2351, L_2352, /*hidden argument*/NULL);
		V_85 = L_2353;
		int32_t L_2354 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2355 = V_42;
		int32_t L_2356 = V_85;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2357 = __this->get_temp64_36();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2358 = V_43;
		int32_t L_2359;
		L_2359 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2354, L_2355, L_2356, L_2357, L_2358, /*hidden argument*/NULL);
		V_45 = L_2359;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2360 = V_42;
		V_44 = L_2360;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2361 = V_43;
		V_42 = L_2361;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2362 = V_44;
		V_43 = L_2362;
	}

IL_2769:
	{
	}

IL_276a:
	{
		double L_2363 = V_48;
		if ((!(((double)L_2363) == ((double)(0.0)))))
		{
			goto IL_2789;
		}
	}
	{
		double L_2364 = V_51;
		G_B100_0 = ((((int32_t)((((double)L_2364) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_278a;
	}

IL_2789:
	{
		G_B100_0 = 1;
	}

IL_278a:
	{
		V_203 = (bool)G_B100_0;
		bool L_2365 = V_203;
		if (!L_2365)
		{
			goto IL_305d;
		}
	}
	{
		double L_2366 = V_46;
		if ((!(((double)L_2366) == ((double)(0.0)))))
		{
			goto IL_27cd;
		}
	}
	{
		double L_2367 = V_49;
		if ((!(((double)L_2367) == ((double)(0.0)))))
		{
			goto IL_27cd;
		}
	}
	{
		double L_2368 = V_47;
		if ((!(((double)L_2368) == ((double)(0.0)))))
		{
			goto IL_27cd;
		}
	}
	{
		double L_2369 = V_50;
		G_B106_0 = ((((int32_t)((((double)L_2369) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_27ce;
	}

IL_27cd:
	{
		G_B106_0 = 1;
	}

IL_27ce:
	{
		V_204 = (bool)G_B106_0;
		bool L_2370 = V_204;
		if (!L_2370)
		{
			goto IL_2ccf;
		}
	}
	{
		double L_2371 = V_46;
		double L_2372 = V_4;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2371, (double)L_2372))));
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var);
		double L_2373 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2374 = V_46;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2373, (double)L_2374))));
		double L_2375 = V_166;
		double L_2376 = V_46;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2375, (double)L_2376))));
		double L_2377 = V_166;
		double L_2378 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_2377, (double)L_2378));
		double L_2379 = V_46;
		double L_2380 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_2379, (double)L_2380));
		double L_2381 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2382 = V_4;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2381, (double)L_2382))));
		double L_2383 = V_166;
		double L_2384 = V_4;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2383, (double)L_2384))));
		double L_2385 = V_166;
		double L_2386 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_2385, (double)L_2386));
		double L_2387 = V_4;
		double L_2388 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_2387, (double)L_2388));
		double L_2389 = V_70;
		double L_2390 = V_168;
		double L_2391 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_2389, (double)((double)il2cpp_codegen_multiply((double)L_2390, (double)L_2391))));
		double L_2392 = V_172;
		double L_2393 = V_169;
		double L_2394 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_2392, (double)((double)il2cpp_codegen_multiply((double)L_2393, (double)L_2394))));
		double L_2395 = V_173;
		double L_2396 = V_168;
		double L_2397 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_2395, (double)((double)il2cpp_codegen_multiply((double)L_2396, (double)L_2397))));
		double L_2398 = V_169;
		double L_2399 = V_171;
		double L_2400 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2398, (double)L_2399)), (double)L_2400));
		double L_2401 = V_0;
		double L_2402 = V_50;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2401, (double)L_2402))));
		double L_2403 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2404 = V_0;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2403, (double)L_2404))));
		double L_2405 = V_166;
		double L_2406 = V_0;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2405, (double)L_2406))));
		double L_2407 = V_166;
		double L_2408 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_2407, (double)L_2408));
		double L_2409 = V_0;
		double L_2410 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_2409, (double)L_2410));
		double L_2411 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2412 = V_50;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2411, (double)L_2412))));
		double L_2413 = V_166;
		double L_2414 = V_50;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2413, (double)L_2414))));
		double L_2415 = V_166;
		double L_2416 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_2415, (double)L_2416));
		double L_2417 = V_50;
		double L_2418 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_2417, (double)L_2418));
		double L_2419 = V_71;
		double L_2420 = V_168;
		double L_2421 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_2419, (double)((double)il2cpp_codegen_multiply((double)L_2420, (double)L_2421))));
		double L_2422 = V_172;
		double L_2423 = V_169;
		double L_2424 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_2422, (double)((double)il2cpp_codegen_multiply((double)L_2423, (double)L_2424))));
		double L_2425 = V_173;
		double L_2426 = V_168;
		double L_2427 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_2425, (double)((double)il2cpp_codegen_multiply((double)L_2426, (double)L_2427))));
		double L_2428 = V_169;
		double L_2429 = V_171;
		double L_2430 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2428, (double)L_2429)), (double)L_2430));
		double L_2431 = V_72;
		double L_2432 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_2431, (double)L_2432))));
		double L_2433 = V_175;
		double L_2434 = V_72;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2433, (double)L_2434))));
		double L_2435 = V_175;
		double L_2436 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2435, (double)L_2436));
		double L_2437 = V_73;
		double L_2438 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2437, (double)L_2438));
		double L_2439 = V_72;
		double L_2440 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2439, (double)L_2440));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2441 = V_74;
		double L_2442 = V_165;
		double L_2443 = V_164;
		NullCheck(L_2441);
		(L_2441)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_2442, (double)L_2443)));
		double L_2444 = V_70;
		double L_2445 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_2444, (double)L_2445))));
		double L_2446 = V_176;
		double L_2447 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2446, (double)L_2447))));
		double L_2448 = V_176;
		double L_2449 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2448, (double)L_2449));
		double L_2450 = V_175;
		double L_2451 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2450, (double)L_2451));
		double L_2452 = V_70;
		double L_2453 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2452, (double)L_2453));
		double L_2454 = V_165;
		double L_2455 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_2454, (double)L_2455));
		double L_2456 = V_177;
		double L_2457 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_2456, (double)L_2457))));
		double L_2458 = V_175;
		double L_2459 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2458, (double)L_2459))));
		double L_2460 = V_175;
		double L_2461 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2460, (double)L_2461));
		double L_2462 = V_71;
		double L_2463 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2462, (double)L_2463));
		double L_2464 = V_177;
		double L_2465 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2464, (double)L_2465));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2466 = V_74;
		double L_2467 = V_165;
		double L_2468 = V_164;
		NullCheck(L_2466);
		(L_2466)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_2467, (double)L_2468)));
		double L_2469 = V_176;
		double L_2470 = V_175;
		V_76 = ((double)((double)((double)il2cpp_codegen_add((double)L_2469, (double)L_2470))));
		double L_2471 = V_76;
		double L_2472 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2471, (double)L_2472))));
		double L_2473 = V_76;
		double L_2474 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2473, (double)L_2474));
		double L_2475 = V_175;
		double L_2476 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2475, (double)L_2476));
		double L_2477 = V_176;
		double L_2478 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2477, (double)L_2478));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2479 = V_74;
		double L_2480 = V_165;
		double L_2481 = V_164;
		NullCheck(L_2479);
		(L_2479)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_2480, (double)L_2481)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2482 = V_74;
		double L_2483 = V_76;
		NullCheck(L_2482);
		(L_2482)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2483);
		double L_2484 = V_3;
		V_161 = ((-L_2484));
		double L_2485 = V_47;
		double L_2486 = V_161;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2485, (double)L_2486))));
		double L_2487 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2488 = V_47;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2487, (double)L_2488))));
		double L_2489 = V_166;
		double L_2490 = V_47;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2489, (double)L_2490))));
		double L_2491 = V_166;
		double L_2492 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_2491, (double)L_2492));
		double L_2493 = V_47;
		double L_2494 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_2493, (double)L_2494));
		double L_2495 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2496 = V_161;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2495, (double)L_2496))));
		double L_2497 = V_166;
		double L_2498 = V_161;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2497, (double)L_2498))));
		double L_2499 = V_166;
		double L_2500 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_2499, (double)L_2500));
		double L_2501 = V_161;
		double L_2502 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_2501, (double)L_2502));
		double L_2503 = V_70;
		double L_2504 = V_168;
		double L_2505 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_2503, (double)((double)il2cpp_codegen_multiply((double)L_2504, (double)L_2505))));
		double L_2506 = V_172;
		double L_2507 = V_169;
		double L_2508 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_2506, (double)((double)il2cpp_codegen_multiply((double)L_2507, (double)L_2508))));
		double L_2509 = V_173;
		double L_2510 = V_168;
		double L_2511 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_2509, (double)((double)il2cpp_codegen_multiply((double)L_2510, (double)L_2511))));
		double L_2512 = V_169;
		double L_2513 = V_171;
		double L_2514 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2512, (double)L_2513)), (double)L_2514));
		double L_2515 = V_49;
		V_161 = ((-L_2515));
		double L_2516 = V_1;
		double L_2517 = V_161;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2516, (double)L_2517))));
		double L_2518 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2519 = V_1;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2518, (double)L_2519))));
		double L_2520 = V_166;
		double L_2521 = V_1;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2520, (double)L_2521))));
		double L_2522 = V_166;
		double L_2523 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_2522, (double)L_2523));
		double L_2524 = V_1;
		double L_2525 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_2524, (double)L_2525));
		double L_2526 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2527 = V_161;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2526, (double)L_2527))));
		double L_2528 = V_166;
		double L_2529 = V_161;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2528, (double)L_2529))));
		double L_2530 = V_166;
		double L_2531 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_2530, (double)L_2531));
		double L_2532 = V_161;
		double L_2533 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_2532, (double)L_2533));
		double L_2534 = V_71;
		double L_2535 = V_168;
		double L_2536 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_2534, (double)((double)il2cpp_codegen_multiply((double)L_2535, (double)L_2536))));
		double L_2537 = V_172;
		double L_2538 = V_169;
		double L_2539 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_2537, (double)((double)il2cpp_codegen_multiply((double)L_2538, (double)L_2539))));
		double L_2540 = V_173;
		double L_2541 = V_168;
		double L_2542 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_2540, (double)((double)il2cpp_codegen_multiply((double)L_2541, (double)L_2542))));
		double L_2543 = V_169;
		double L_2544 = V_171;
		double L_2545 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2543, (double)L_2544)), (double)L_2545));
		double L_2546 = V_72;
		double L_2547 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_2546, (double)L_2547))));
		double L_2548 = V_175;
		double L_2549 = V_72;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2548, (double)L_2549))));
		double L_2550 = V_175;
		double L_2551 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2550, (double)L_2551));
		double L_2552 = V_73;
		double L_2553 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2552, (double)L_2553));
		double L_2554 = V_72;
		double L_2555 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2554, (double)L_2555));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2556 = V_75;
		double L_2557 = V_165;
		double L_2558 = V_164;
		NullCheck(L_2556);
		(L_2556)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_2557, (double)L_2558)));
		double L_2559 = V_70;
		double L_2560 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_2559, (double)L_2560))));
		double L_2561 = V_176;
		double L_2562 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2561, (double)L_2562))));
		double L_2563 = V_176;
		double L_2564 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2563, (double)L_2564));
		double L_2565 = V_175;
		double L_2566 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2565, (double)L_2566));
		double L_2567 = V_70;
		double L_2568 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2567, (double)L_2568));
		double L_2569 = V_165;
		double L_2570 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_2569, (double)L_2570));
		double L_2571 = V_177;
		double L_2572 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_add((double)L_2571, (double)L_2572))));
		double L_2573 = V_175;
		double L_2574 = V_177;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2573, (double)L_2574))));
		double L_2575 = V_175;
		double L_2576 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2575, (double)L_2576));
		double L_2577 = V_71;
		double L_2578 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2577, (double)L_2578));
		double L_2579 = V_177;
		double L_2580 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2579, (double)L_2580));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2581 = V_75;
		double L_2582 = V_165;
		double L_2583 = V_164;
		NullCheck(L_2581);
		(L_2581)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_2582, (double)L_2583)));
		double L_2584 = V_176;
		double L_2585 = V_175;
		V_77 = ((double)((double)((double)il2cpp_codegen_add((double)L_2584, (double)L_2585))));
		double L_2586 = V_77;
		double L_2587 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2586, (double)L_2587))));
		double L_2588 = V_77;
		double L_2589 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2588, (double)L_2589));
		double L_2590 = V_175;
		double L_2591 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2590, (double)L_2591));
		double L_2592 = V_176;
		double L_2593 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2592, (double)L_2593));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2594 = V_75;
		double L_2595 = V_165;
		double L_2596 = V_164;
		NullCheck(L_2594);
		(L_2594)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_2595, (double)L_2596)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2597 = V_75;
		double L_2598 = V_77;
		NullCheck(L_2597);
		(L_2597)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2598);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2599 = V_74;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2600 = V_75;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2601 = V_146;
		int32_t L_2602;
		L_2602 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, 4, L_2599, 4, L_2600, L_2601, /*hidden argument*/NULL);
		V_149 = L_2602;
		double L_2603 = V_46;
		double L_2604 = V_50;
		V_70 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2603, (double)L_2604))));
		double L_2605 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2606 = V_46;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2605, (double)L_2606))));
		double L_2607 = V_166;
		double L_2608 = V_46;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2607, (double)L_2608))));
		double L_2609 = V_166;
		double L_2610 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_2609, (double)L_2610));
		double L_2611 = V_46;
		double L_2612 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_2611, (double)L_2612));
		double L_2613 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2614 = V_50;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2613, (double)L_2614))));
		double L_2615 = V_166;
		double L_2616 = V_50;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2615, (double)L_2616))));
		double L_2617 = V_166;
		double L_2618 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_2617, (double)L_2618));
		double L_2619 = V_50;
		double L_2620 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_2619, (double)L_2620));
		double L_2621 = V_70;
		double L_2622 = V_168;
		double L_2623 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_2621, (double)((double)il2cpp_codegen_multiply((double)L_2622, (double)L_2623))));
		double L_2624 = V_172;
		double L_2625 = V_169;
		double L_2626 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_2624, (double)((double)il2cpp_codegen_multiply((double)L_2625, (double)L_2626))));
		double L_2627 = V_173;
		double L_2628 = V_168;
		double L_2629 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_2627, (double)((double)il2cpp_codegen_multiply((double)L_2628, (double)L_2629))));
		double L_2630 = V_169;
		double L_2631 = V_171;
		double L_2632 = V_174;
		V_72 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2630, (double)L_2631)), (double)L_2632));
		double L_2633 = V_47;
		double L_2634 = V_49;
		V_71 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2633, (double)L_2634))));
		double L_2635 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2636 = V_47;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2635, (double)L_2636))));
		double L_2637 = V_166;
		double L_2638 = V_47;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2637, (double)L_2638))));
		double L_2639 = V_166;
		double L_2640 = V_167;
		V_168 = ((double)il2cpp_codegen_subtract((double)L_2639, (double)L_2640));
		double L_2641 = V_47;
		double L_2642 = V_168;
		V_169 = ((double)il2cpp_codegen_subtract((double)L_2641, (double)L_2642));
		double L_2643 = ((RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D_il2cpp_TypeInfo_var))->get_splitter_3();
		double L_2644 = V_49;
		V_166 = ((double)((double)((double)il2cpp_codegen_multiply((double)L_2643, (double)L_2644))));
		double L_2645 = V_166;
		double L_2646 = V_49;
		V_167 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2645, (double)L_2646))));
		double L_2647 = V_166;
		double L_2648 = V_167;
		V_170 = ((double)il2cpp_codegen_subtract((double)L_2647, (double)L_2648));
		double L_2649 = V_49;
		double L_2650 = V_170;
		V_171 = ((double)il2cpp_codegen_subtract((double)L_2649, (double)L_2650));
		double L_2651 = V_71;
		double L_2652 = V_168;
		double L_2653 = V_170;
		V_172 = ((double)il2cpp_codegen_subtract((double)L_2651, (double)((double)il2cpp_codegen_multiply((double)L_2652, (double)L_2653))));
		double L_2654 = V_172;
		double L_2655 = V_169;
		double L_2656 = V_170;
		V_173 = ((double)il2cpp_codegen_subtract((double)L_2654, (double)((double)il2cpp_codegen_multiply((double)L_2655, (double)L_2656))));
		double L_2657 = V_173;
		double L_2658 = V_168;
		double L_2659 = V_171;
		V_174 = ((double)il2cpp_codegen_subtract((double)L_2657, (double)((double)il2cpp_codegen_multiply((double)L_2658, (double)L_2659))));
		double L_2660 = V_169;
		double L_2661 = V_171;
		double L_2662 = V_174;
		V_73 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_2660, (double)L_2661)), (double)L_2662));
		double L_2663 = V_72;
		double L_2664 = V_73;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2663, (double)L_2664))));
		double L_2665 = V_72;
		double L_2666 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2665, (double)L_2666))));
		double L_2667 = V_175;
		double L_2668 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_2667, (double)L_2668));
		double L_2669 = V_162;
		double L_2670 = V_73;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2669, (double)L_2670));
		double L_2671 = V_72;
		double L_2672 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2671, (double)L_2672));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2673 = V_152;
		double L_2674 = V_165;
		double L_2675 = V_164;
		NullCheck(L_2673);
		(L_2673)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add((double)L_2674, (double)L_2675)));
		double L_2676 = V_70;
		double L_2677 = V_175;
		V_176 = ((double)((double)((double)il2cpp_codegen_add((double)L_2676, (double)L_2677))));
		double L_2678 = V_176;
		double L_2679 = V_70;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2678, (double)L_2679))));
		double L_2680 = V_176;
		double L_2681 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2680, (double)L_2681));
		double L_2682 = V_175;
		double L_2683 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2682, (double)L_2683));
		double L_2684 = V_70;
		double L_2685 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2684, (double)L_2685));
		double L_2686 = V_165;
		double L_2687 = V_164;
		V_177 = ((double)il2cpp_codegen_add((double)L_2686, (double)L_2687));
		double L_2688 = V_177;
		double L_2689 = V_71;
		V_175 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2688, (double)L_2689))));
		double L_2690 = V_177;
		double L_2691 = V_175;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2690, (double)L_2691))));
		double L_2692 = V_175;
		double L_2693 = V_162;
		V_163 = ((double)il2cpp_codegen_add((double)L_2692, (double)L_2693));
		double L_2694 = V_162;
		double L_2695 = V_71;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2694, (double)L_2695));
		double L_2696 = V_177;
		double L_2697 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2696, (double)L_2697));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2698 = V_152;
		double L_2699 = V_165;
		double L_2700 = V_164;
		NullCheck(L_2698);
		(L_2698)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add((double)L_2699, (double)L_2700)));
		double L_2701 = V_176;
		double L_2702 = V_175;
		V_158 = ((double)((double)((double)il2cpp_codegen_add((double)L_2701, (double)L_2702))));
		double L_2703 = V_158;
		double L_2704 = V_176;
		V_162 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_2703, (double)L_2704))));
		double L_2705 = V_158;
		double L_2706 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract((double)L_2705, (double)L_2706));
		double L_2707 = V_175;
		double L_2708 = V_162;
		V_164 = ((double)il2cpp_codegen_subtract((double)L_2707, (double)L_2708));
		double L_2709 = V_176;
		double L_2710 = V_163;
		V_165 = ((double)il2cpp_codegen_subtract((double)L_2709, (double)L_2710));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2711 = V_152;
		double L_2712 = V_165;
		double L_2713 = V_164;
		NullCheck(L_2711);
		(L_2711)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add((double)L_2712, (double)L_2713)));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2714 = V_152;
		double L_2715 = V_158;
		NullCheck(L_2714);
		(L_2714)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2715);
		V_155 = 4;
		goto IL_2cf1;
	}

IL_2ccf:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2716 = V_146;
		NullCheck(L_2716);
		(L_2716)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_149 = 1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2717 = V_152;
		NullCheck(L_2717);
		(L_2717)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_155 = 1;
	}

IL_2cf1:
	{
		double L_2718 = V_48;
		V_205 = (bool)((((int32_t)((((double)L_2718) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2719 = V_205;
		if (!L_2719)
		{
			goto IL_2f0b;
		}
	}
	{
		int32_t L_2720 = V_120;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2721 = V_114;
		double L_2722 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2723 = __this->get_temp16a_30();
		int32_t L_2724;
		L_2724 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2720, L_2721, L_2722, L_2723, /*hidden argument*/NULL);
		V_79 = L_2724;
		int32_t L_2725 = V_149;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2726 = V_146;
		double L_2727 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2728 = V_126;
		int32_t L_2729;
		L_2729 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2725, L_2726, L_2727, L_2728, /*hidden argument*/NULL);
		V_132 = L_2729;
		int32_t L_2730 = V_132;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2731 = V_126;
		double L_2732 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2733 = __this->get_temp32a_33();
		int32_t L_2734;
		L_2734 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2730, L_2731, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2732)), L_2733, /*hidden argument*/NULL);
		V_82 = L_2734;
		int32_t L_2735 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2736 = __this->get_temp16a_30();
		int32_t L_2737 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2738 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2739 = __this->get_temp48_35();
		int32_t L_2740;
		L_2740 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2735, L_2736, L_2737, L_2738, L_2739, /*hidden argument*/NULL);
		V_84 = L_2740;
		int32_t L_2741 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2742 = V_42;
		int32_t L_2743 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2744 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2745 = V_43;
		int32_t L_2746;
		L_2746 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2741, L_2742, L_2743, L_2744, L_2745, /*hidden argument*/NULL);
		V_45 = L_2746;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2747 = V_42;
		V_44 = L_2747;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2748 = V_43;
		V_42 = L_2748;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2749 = V_44;
		V_43 = L_2749;
		double L_2750 = V_49;
		V_206 = (bool)((((int32_t)((((double)L_2750) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2751 = V_206;
		if (!L_2751)
		{
			goto IL_2df1;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2752 = V_65;
		double L_2753 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2754 = __this->get_temp8_29();
		int32_t L_2755;
		L_2755 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_2752, L_2753, L_2754, /*hidden argument*/NULL);
		V_78 = L_2755;
		int32_t L_2756 = V_78;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2757 = __this->get_temp8_29();
		double L_2758 = V_49;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2759 = __this->get_temp16a_30();
		int32_t L_2760;
		L_2760 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2756, L_2757, L_2758, L_2759, /*hidden argument*/NULL);
		V_79 = L_2760;
		int32_t L_2761 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2762 = V_42;
		int32_t L_2763 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2764 = __this->get_temp16a_30();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2765 = V_43;
		int32_t L_2766;
		L_2766 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2761, L_2762, L_2763, L_2764, L_2765, /*hidden argument*/NULL);
		V_45 = L_2766;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2767 = V_42;
		V_44 = L_2767;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2768 = V_43;
		V_42 = L_2768;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2769 = V_44;
		V_43 = L_2769;
	}

IL_2df1:
	{
		double L_2770 = V_50;
		V_207 = (bool)((((int32_t)((((double)L_2770) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2771 = V_207;
		if (!L_2771)
		{
			goto IL_2e57;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2772 = V_64;
		double L_2773 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2774 = __this->get_temp8_29();
		int32_t L_2775;
		L_2775 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, 4, L_2772, ((-L_2773)), L_2774, /*hidden argument*/NULL);
		V_78 = L_2775;
		int32_t L_2776 = V_78;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2777 = __this->get_temp8_29();
		double L_2778 = V_50;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2779 = __this->get_temp16a_30();
		int32_t L_2780;
		L_2780 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2776, L_2777, L_2778, L_2779, /*hidden argument*/NULL);
		V_79 = L_2780;
		int32_t L_2781 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2782 = V_42;
		int32_t L_2783 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2784 = __this->get_temp16a_30();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2785 = V_43;
		int32_t L_2786;
		L_2786 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2781, L_2782, L_2783, L_2784, L_2785, /*hidden argument*/NULL);
		V_45 = L_2786;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2787 = V_42;
		V_44 = L_2787;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2788 = V_43;
		V_42 = L_2788;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2789 = V_44;
		V_43 = L_2789;
	}

IL_2e57:
	{
		int32_t L_2790 = V_132;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2791 = V_126;
		double L_2792 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2793 = __this->get_temp32a_33();
		int32_t L_2794;
		L_2794 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2790, L_2791, L_2792, L_2793, /*hidden argument*/NULL);
		V_82 = L_2794;
		int32_t L_2795 = V_155;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2796 = V_152;
		double L_2797 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2798 = V_138;
		int32_t L_2799;
		L_2799 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2795, L_2796, L_2797, L_2798, /*hidden argument*/NULL);
		V_144 = L_2799;
		int32_t L_2800 = V_144;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2801 = V_138;
		double L_2802 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2803 = __this->get_temp16a_30();
		int32_t L_2804;
		L_2804 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2800, L_2801, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2802)), L_2803, /*hidden argument*/NULL);
		V_79 = L_2804;
		int32_t L_2805 = V_144;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2806 = V_138;
		double L_2807 = V_48;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2808 = __this->get_temp16b_31();
		int32_t L_2809;
		L_2809 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2805, L_2806, L_2807, L_2808, /*hidden argument*/NULL);
		V_80 = L_2809;
		int32_t L_2810 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2811 = __this->get_temp16a_30();
		int32_t L_2812 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2813 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2814 = __this->get_temp32b_34();
		int32_t L_2815;
		L_2815 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2810, L_2811, L_2812, L_2813, L_2814, /*hidden argument*/NULL);
		V_83 = L_2815;
		int32_t L_2816 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2817 = __this->get_temp32a_33();
		int32_t L_2818 = V_83;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2819 = __this->get_temp32b_34();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2820 = __this->get_temp64_36();
		int32_t L_2821;
		L_2821 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2816, L_2817, L_2818, L_2819, L_2820, /*hidden argument*/NULL);
		V_85 = L_2821;
		int32_t L_2822 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2823 = V_42;
		int32_t L_2824 = V_85;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2825 = __this->get_temp64_36();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2826 = V_43;
		int32_t L_2827;
		L_2827 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2822, L_2823, L_2824, L_2825, L_2826, /*hidden argument*/NULL);
		V_45 = L_2827;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2828 = V_42;
		V_44 = L_2828;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2829 = V_43;
		V_42 = L_2829;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2830 = V_44;
		V_43 = L_2830;
	}

IL_2f0b:
	{
		double L_2831 = V_51;
		V_208 = (bool)((((int32_t)((((double)L_2831) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2832 = V_208;
		if (!L_2832)
		{
			goto IL_305c;
		}
	}
	{
		int32_t L_2833 = V_121;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2834 = V_115;
		double L_2835 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2836 = __this->get_temp16a_30();
		int32_t L_2837;
		L_2837 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2833, L_2834, L_2835, L_2836, /*hidden argument*/NULL);
		V_79 = L_2837;
		int32_t L_2838 = V_149;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2839 = V_146;
		double L_2840 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2841 = V_127;
		int32_t L_2842;
		L_2842 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2838, L_2839, L_2840, L_2841, /*hidden argument*/NULL);
		V_133 = L_2842;
		int32_t L_2843 = V_133;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2844 = V_127;
		double L_2845 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2846 = __this->get_temp32a_33();
		int32_t L_2847;
		L_2847 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2843, L_2844, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2845)), L_2846, /*hidden argument*/NULL);
		V_82 = L_2847;
		int32_t L_2848 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2849 = __this->get_temp16a_30();
		int32_t L_2850 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2851 = __this->get_temp32a_33();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2852 = __this->get_temp48_35();
		int32_t L_2853;
		L_2853 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2848, L_2849, L_2850, L_2851, L_2852, /*hidden argument*/NULL);
		V_84 = L_2853;
		int32_t L_2854 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2855 = V_42;
		int32_t L_2856 = V_84;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2857 = __this->get_temp48_35();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2858 = V_43;
		int32_t L_2859;
		L_2859 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2854, L_2855, L_2856, L_2857, L_2858, /*hidden argument*/NULL);
		V_45 = L_2859;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2860 = V_42;
		V_44 = L_2860;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2861 = V_43;
		V_42 = L_2861;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2862 = V_44;
		V_43 = L_2862;
		int32_t L_2863 = V_133;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2864 = V_127;
		double L_2865 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2866 = __this->get_temp32a_33();
		int32_t L_2867;
		L_2867 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2863, L_2864, L_2865, L_2866, /*hidden argument*/NULL);
		V_82 = L_2867;
		int32_t L_2868 = V_155;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2869 = V_152;
		double L_2870 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2871 = V_139;
		int32_t L_2872;
		L_2872 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2868, L_2869, L_2870, L_2871, /*hidden argument*/NULL);
		V_145 = L_2872;
		int32_t L_2873 = V_145;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2874 = V_139;
		double L_2875 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2876 = __this->get_temp16a_30();
		int32_t L_2877;
		L_2877 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2873, L_2874, ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2875)), L_2876, /*hidden argument*/NULL);
		V_79 = L_2877;
		int32_t L_2878 = V_145;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2879 = V_139;
		double L_2880 = V_51;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2881 = __this->get_temp16b_31();
		int32_t L_2882;
		L_2882 = RobustPredicates_ScaleExpansionZeroElim_mC19766D5B1CBB0A4CF9DE68A2745179D79933436(__this, L_2878, L_2879, L_2880, L_2881, /*hidden argument*/NULL);
		V_80 = L_2882;
		int32_t L_2883 = V_79;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2884 = __this->get_temp16a_30();
		int32_t L_2885 = V_80;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2886 = __this->get_temp16b_31();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2887 = __this->get_temp32b_34();
		int32_t L_2888;
		L_2888 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2883, L_2884, L_2885, L_2886, L_2887, /*hidden argument*/NULL);
		V_83 = L_2888;
		int32_t L_2889 = V_82;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2890 = __this->get_temp32a_33();
		int32_t L_2891 = V_83;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2892 = __this->get_temp32b_34();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2893 = __this->get_temp64_36();
		int32_t L_2894;
		L_2894 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2889, L_2890, L_2891, L_2892, L_2893, /*hidden argument*/NULL);
		V_85 = L_2894;
		int32_t L_2895 = V_45;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2896 = V_42;
		int32_t L_2897 = V_85;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2898 = __this->get_temp64_36();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2899 = V_43;
		int32_t L_2900;
		L_2900 = RobustPredicates_FastExpansionSumZeroElim_m3075FDB02B95D2E584D160CA281809B40DDCBC33(__this, L_2895, L_2896, L_2897, L_2898, L_2899, /*hidden argument*/NULL);
		V_45 = L_2900;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2901 = V_42;
		V_44 = L_2901;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2902 = V_43;
		V_42 = L_2902;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2903 = V_44;
		V_43 = L_2903;
	}

IL_305c:
	{
	}

IL_305d:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2904 = V_42;
		int32_t L_2905 = V_45;
		NullCheck(L_2904);
		int32_t L_2906 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2905, (int32_t)1));
		double L_2907 = (L_2904)->GetAt(static_cast<il2cpp_array_size_t>(L_2906));
		V_179 = L_2907;
		goto IL_3068;
	}

IL_3068:
	{
		double L_2908 = V_179;
		return L_2908;
	}
}
// System.Void TriangleNet.RobustPredicates::AllocateWorkspace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates_AllocateWorkspace_m5D2D85B716DD5B276C6617CDEDDCF310A59AE798 (RobustPredicates_tD45439344DA32CA0D6616C1FF1F2DC0FB2EFD76D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1152));
		__this->set_fin1_11(L_0);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1152));
		__this->set_fin2_12(L_1);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->set_abdet_13(L_2);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_axbc_14(L_3);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_axxbc_15(L_4);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_5 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_aybc_16(L_5);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_6 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_ayybc_17(L_6);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_adet_18(L_7);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_8 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_bxca_19(L_8);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_bxxca_20(L_9);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_10 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_byca_21(L_10);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_11 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_byyca_22(L_11);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_12 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_bdet_23(L_12);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_13 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_cxab_24(L_13);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_14 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_cxxab_25(L_14);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_15 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_cyab_26(L_15);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_16 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_cyyab_27(L_16);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_cdet_28(L_17);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_18 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_temp8_29(L_18);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_19 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_temp16a_30(L_19);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_20 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_temp16b_31(L_20);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_21 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_temp16c_32(L_21);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_22 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_temp32a_33(L_22);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_23 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_temp32b_34(L_23);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		__this->set_temp48_35(L_24);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_25 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->set_temp64_36(L_25);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Polygon_set_HasPointMarkers_m7C006A810718B1CD01A850C32473FC9B8F59E1F5_inline (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasPointMarkersU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Polygon_set_HasSegmentMarkers_m49F0F472CA961F78A06BBD38C0F7DF8AF1F09E1C_inline (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasSegmentMarkersU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * Contour_get_Points_mFA3722D831337289B75BB3F4615AB7443FA05A49_inline (Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * __this, const RuntimeMethod* method)
{
	{
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_0 = __this->get_U3CPointsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * Configuration_get_Predicates_m4880A56350B9F09D038B6D879259E12C91861186_inline (Configuration_tFD59B344AE38BF7070D6C1F6F933F10DB63BCA6A * __this, const RuntimeMethod* method)
{
	{
		Func_1_t27474C758AAD3CE49FE7650C3CBACA1AA115CF85 * L_0 = __this->get_U3CPredicatesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QualityOptions_get_MinimumAngle_m3E83BF7091D2043B8FA901970B22A0F3CC929042_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CMinimumAngleU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QualityOptions_get_MaximumAngle_mA2D29A8BEC2EE2722CB44D2039CDF2FEA0B9C44C_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CMaximumAngleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QualityOptions_get_MaximumArea_m6A15C115B021E467D6A20AEB960CA4CFD1AC8917_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CMaximumAreaU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * QualityOptions_get_UserTest_mC959A07AAE40E40F4D4B4FE229CF55928FC06AF5_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		Func_3_tB1DCC50B8F83B96BB4875958204E8D40D1130291 * L_0 = __this->get_U3CUserTestU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QualityOptions_get_VariableArea_m808C194D46BA7BA9D86BB555D456CE5BA078BAB0_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CVariableAreaU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QualityOptions_get_SteinerPoints_m7D14C075B0107749B3B7D2392FA3ED62AA6481F4_inline (QualityOptions_tAC95A6A2D8E95C009C5E09A1E596AE04DB25411A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSteinerPointsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_NoExact_mCDCFEFF0B67EE543B5D67F2167FC7456311731B5_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2_StaticFields*)il2cpp_codegen_static_fields_for(Behavior_t665AA5D9457CF4E3BA96CCA184B65A6E1F1AE6C2_il2cpp_TypeInfo_var))->get_U3CNoExactU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Log_get_Verbose_mA93BCB438872D26EB2B864FF197A2691637ED4C9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var);
		bool L_0 = ((Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_StaticFields*)il2cpp_codegen_static_fields_for(Log_t4582E5CE98B7ED880B3835DD197F40D73DB3B6E5_il2cpp_TypeInfo_var))->get_U3CVerboseU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
