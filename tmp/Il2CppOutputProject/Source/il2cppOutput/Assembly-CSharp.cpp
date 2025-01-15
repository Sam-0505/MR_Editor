#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.IEnumerable`1<TriangleNet.Geometry.Vertex>
struct IEnumerable_1_t0709594168AFB0796E86FAC16B03D1D5798FAF36;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct List_1_t9C27A3F905758D6C98F2CDE0542B9E9055908D4E;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct List_1_t14ABE8C4EDE13D540EAE721E7175E07264133D4A;
// System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment>
struct List_1_tFE148C5D06F92CFB2B0ECA12E16FB3E26FC9F3D7;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t45F89F926540D75C05D1361CC8936869DA9D16C9;
// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>
struct List_1_tB02E053C50D95D43947243989F5AEC9B50EBEB20;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.TransformConstraint>
struct List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>
struct List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData>
struct List_1_t8ACEF7047804FA61FF593CC323A8926E9303A581;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>
struct UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>
struct UnityEvent_1_tCF0D8FDD8A5FCB4A9B284159E40A94273B6FC0C2;
// System.Collections.Generic.List`1<UnityEngine.Vector2>[]
struct List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TriangleNet.Topology.Osub[]
struct OsubU5BU5D_t632DAF97D532F34F945BB5C29E96A3C6A751C629;
// TriangleNet.Topology.Otri[]
struct OtriU5BU5D_tAD22CB70D76985D6EACF1F1E114539548D580175;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_tD341B6016202ECDB57DA6AC1F16C2688CAB05B70;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl
struct BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplay
struct BoxDisplay_t8571B4B0DF05734B7BC147C661642A7E400FF22D;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration
struct BoxDisplayConfiguration_tB59B4F9CBAE93DE26447D88FF940D019D62B5CFD;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Microsoft.MixedReality.Toolkit.UI.ConstraintManager
struct ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788;
// TriangleNet.Geometry.Contour
struct Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager
struct ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// TriangleNet.Meshing.IMesh
struct IMesh_t32C7E2575059A23A472035BE216D1F84B62F702C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C;
// TriangleNet.Geometry.IPolygon
struct IPolygon_t67123D502616DAD67F4FD3A6FEF8B403C804E54C;
// TriangleNet.Geometry.ISegment
struct ISegment_tEAAF8539FFD2F474DC8FDF3C6B844BA3BB316BB0;
// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic
struct ITransformSmoothingLogic_t68730BBAE96C540EEC440F06C7601EFC43FE3816;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.Links
struct Links_t443BBE5DFCE16C9E78017309B6485845EFE5836E;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration
struct LinksConfiguration_t091A7E471B272807E3D987C330F8C4E1D8C7EFAF;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent
struct ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C;
// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic
struct ManipulationMoveLogic_t173260C0D7A09AE97AEC0A619EBA65B397BBA388;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Microsoft.MixedReality.Toolkit.UI.MoveAxisConstraint
struct MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A;
// TriangleNet.Geometry.Point
struct Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73;
// PolyExtruder
struct PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB;
// PolyExtruderDemo
struct PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D;
// TriangleNet.Geometry.Polygon
struct Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffect
struct ProximityEffect_t3A8FB3C29B2E8F284759CD2EAEF5B3FC88A1B70F;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffectConfiguration
struct ProximityEffectConfiguration_t9223663F6E3051757E2AE32BEEDE2656E435F385;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint
struct RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandles
struct RotationHandles_tAA74FA24DD4D79B656B6E54924C221D437C3B949;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandlesConfiguration
struct RotationHandlesConfiguration_tFF2DB6918EDF33A8535EBCE9D83FC7CB731AC25E;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandles
struct ScaleHandles_tE18594B4145E1613BBB52130E40886222A18C8D7;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration
struct ScaleHandlesConfiguration_tF762066088E7FEB392FF4262A48D385265CDFA9A;
// TriangleNet.Geometry.Segment
struct Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// Microsoft.MixedReality.Toolkit.UI.SliderEvent
struct SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C;
// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A;
// UnityEngine.SphereCollider
struct SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Microsoft.MixedReality.Toolkit.UI.TransformConstraint
struct TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.TranslationHandles
struct TranslationHandles_t6C8E85D4E9B0084F401C7C39D38CEB212763CDC3;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.TranslationHandlesConfiguration
struct TranslationHandlesConfiguration_t95454619C615146FDCA6D088A2ABA6CD0FE6EE62;
// TriangleNet.Topology.Triangle
struct Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769;
// Triangulation
struct Triangulation_t1B52FD2CEED342462F96059F1A371019DA8DFE94;
// TriangulationTest
struct TriangulationTest_t19A4B647529A71B39C97DC502B8F585795AFFE90;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic
struct TwoHandRotateLogic_t80E1E3BF9C0246AAB8E69F16580D35772D804973;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic
struct TwoHandScaleLogic_tDE10E1D642589A12B29034844E65375AF62576C8;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// TriangleNet.Geometry.Vertex
struct Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// cdata
struct cdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA;
// control
struct control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896;
// crdata
struct crdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30;
// data
struct data_tDBBD5A62F2E51BEE551958926AE2116476A46E42;
// gen
struct gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557;
// pdata
struct pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8;
// sdata
struct sdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706;
// sliderScript
struct sliderScript_tDEDAA3A05EFA9DA68C25302754C9F25D9191272A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9A6E1D399FA719D00C531640E72ABD1D808184AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMesh_t32C7E2575059A23A472035BE216D1F84B62F702C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITriangle_t921A41DB0237BD0896214FF0036D597D7661A6A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06DB93AC694BFD16281C880B678FC563AF26D5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral0DAFD09F9DEA04AA14FEFDAF495B80099DBC3EA3;
IL2CPP_EXTERN_C String_t* _stringLiteral248643DD5410FA9A1F2454CDF31708BDDA103548;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral27B5D23648245365C1857CEC387CD9AFEDC7DB28;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B;
IL2CPP_EXTERN_C String_t* _stringLiteral4D75D49F04E83D2DAA228DBE7E2A08B1946D01C4;
IL2CPP_EXTERN_C String_t* _stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F;
IL2CPP_EXTERN_C String_t* _stringLiteral5904D1E665A90ABFB7B508D23392194681C4EAAF;
IL2CPP_EXTERN_C String_t* _stringLiteral64D24090833D0F2767E49072F66203DC9464A384;
IL2CPP_EXTERN_C String_t* _stringLiteral8D02ADFE8C38D823DA2F871C18C927A7AF764836;
IL2CPP_EXTERN_C String_t* _stringLiteralA6195A60B7D31ACB115F1C5363B46CE01050BFA6;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB9AEB8E10577802C18C85BD228EEDA8459EC2C63;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD;
IL2CPP_EXTERN_C String_t* _stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A_m5FBE86F6B3366A2E39022477D835758E76E0072A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m1F85A825A2BF7119515E9C3DF2CAD3F569061DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB_m3B7118383D13B13D4AC811145F0E7DB3230174AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656_m28BE61ABE16C00C06E39F076A2E35506414DEA27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_m6795438BDC1B88EB8DFFAC584D75338087C343C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_mBAEC3A8B0C6AB1361E3AF8B57D941848F8EBED28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_m079E2CEA7DBE56B314D5DE16053AB748D44B2125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_Tiscdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA_m1299684FEA5A6C6A701A777F3D4A76B73139611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_Tiscrdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30_m93D5F98BCE67D4709315B6E77EEAC186D3E193EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_Tispdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8_m03F1A431873ACA3F6CCF323A3D3E2D2198DDB6F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_Tissdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706_m4B972E55204A47D84A46A89569655E69FE74F0E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m065E88C4E3B2D8C1689CE2513C4CF829320EEBAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_m752BFB82DE0A7557D392FB5129A3D570A9F53C0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tiscontrol_t4A4DAD829429C0D41AE49F71182A0C075D2EB896_m635AB4BED71905B001AE02DC4F82681F9040B2E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisdata_tDBBD5A62F2E51BEE551958926AE2116476A46E42_mCDDBE05496CF76CA0CE090F22A76E943F173708B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79EDB6FA3FCAD26B43E0E27CDAC913C8B11AB536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCE920A32488DA981E76A611BF0C46A50D4C6C62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE9BDB711B1ED91FE1DCB0BC41D682F64C83A76D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mE34B87CB7468D1DA1077450B4DC647805443E959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m88C5B696167573FF9B2668D125CEA3DAFB949CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* sliderScript_U3CStartU3Eb__3_0_m2B08E860D02B8591151D90C7EB29FD4C5448C4A9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894, ____items_1)); }
	inline List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
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


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
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

struct Il2CppArrayBounds;

// System.Array


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


// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<OldValue>k__BackingField
	float ___U3COldValueU3Ek__BackingField_0;
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<NewValue>k__BackingField
	float ___U3CNewValueU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Slider>k__BackingField
	PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A * ___U3CSliderU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3COldValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A, ___U3COldValueU3Ek__BackingField_0)); }
	inline float get_U3COldValueU3Ek__BackingField_0() const { return ___U3COldValueU3Ek__BackingField_0; }
	inline float* get_address_of_U3COldValueU3Ek__BackingField_0() { return &___U3COldValueU3Ek__BackingField_0; }
	inline void set_U3COldValueU3Ek__BackingField_0(float value)
	{
		___U3COldValueU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNewValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A, ___U3CNewValueU3Ek__BackingField_1)); }
	inline float get_U3CNewValueU3Ek__BackingField_1() const { return ___U3CNewValueU3Ek__BackingField_1; }
	inline float* get_address_of_U3CNewValueU3Ek__BackingField_1() { return &___U3CNewValueU3Ek__BackingField_1; }
	inline void set_U3CNewValueU3Ek__BackingField_1(float value)
	{
		___U3CNewValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSliderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A, ___U3CSliderU3Ek__BackingField_2)); }
	inline PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A * get_U3CSliderU3Ek__BackingField_2() const { return ___U3CSliderU3Ek__BackingField_2; }
	inline PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A ** get_address_of_U3CSliderU3Ek__BackingField_2() { return &___U3CSliderU3Ek__BackingField_2; }
	inline void set_U3CSliderU3Ek__BackingField_2(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A * value)
	{
		___U3CSliderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSliderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A, ___U3CPointerU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_3() const { return ___U3CPointerU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_3() { return &___U3CPointerU3Ek__BackingField_3; }
	inline void set_U3CPointerU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_3), (void*)value);
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


// Triangulation
struct Triangulation_t1B52FD2CEED342462F96059F1A371019DA8DFE94  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>
struct UnityEvent_1_tCF0D8FDD8A5FCB4A9B284159E40A94273B6FC0C2  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tCF0D8FDD8A5FCB4A9B284159E40A94273B6FC0C2, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
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

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
struct Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68, ___list_0)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_list_0() const { return ___list_0; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68, ___current_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_current_3() const { return ___current_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___current_3 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisFlags
struct AxisFlags_t7625D207F484190D4440E28A6257642EC03C14AE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisFlags_t7625D207F484190D4440E28A6257642EC03C14AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsCalculationMethod
struct BoundsCalculationMethod_t357277813CC4A6AAB7167FFD834D1C8423D5A08C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsCalculationMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundsCalculationMethod_t357277813CC4A6AAB7167FFD834D1C8423D5A08C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsControlActivationType
struct BoundsControlActivationType_tB79DEC9C5CCEEB14616657BFCF912A34BC43C077 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsControlActivationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundsControlActivationType_tB79DEC9C5CCEEB14616657BFCF912A34BC43C077, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.FlattenModeType
struct FlattenModeType_tA784BC371E68984F1C9C3133C474328B18346E83 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.FlattenModeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlattenModeType_tA784BC371E68984F1C9C3133C474328B18346E83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.HandleType
struct HandleType_t5DA1976B257878947CAA9EFC75EE6E9ECD524419 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.HandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandleType_t5DA1976B257878947CAA9EFC75EE6E9ECD524419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags
struct ManipulationHandFlags_t1AD86F14B0435771AC2D7F86CE3554ADEA855FE3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationHandFlags_t1AD86F14B0435771AC2D7F86CE3554ADEA855FE3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags
struct ManipulationProximityFlags_t88CD0EF37C5BDE284A8553807DD203E6CDB50AB5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationProximityFlags_t88CD0EF37C5BDE284A8553807DD203E6CDB50AB5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.SliderAxis
struct SliderAxis_t4945368C6A6C230C54496733164146F0423F9A79 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.SliderAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SliderAxis_t4945368C6A6C230C54496733164146F0423F9A79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.SliderEvent
struct SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C  : public UnityEvent_1_tCF0D8FDD8A5FCB4A9B284159E40A94273B6FC0C2
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.TransformFlags
struct TransformFlags_tDFE620CDBE8F902A0A0BAB47D9E92F8B958B1AEA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TransformFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformFlags_tDFE620CDBE8F902A0A0BAB47D9E92F8B958B1AEA, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType
struct ReleaseBehaviorType_t9B025E5F5D67763614238056E707E10341CEE937 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReleaseBehaviorType_t9B025E5F5D67763614238056E707E10341CEE937, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType
struct RotateInOneHandType_tE9571B3F0629E609417FCCD1161F97003206CE56 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateInOneHandType_tE9571B3F0629E609417FCCD1161F97003206CE56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PolyExtruderDemo/ExampleData
struct ExampleData_t1BA2EA6FDF720D91EA8933F37658B58F27259C0D 
{
public:
	// System.Int32 PolyExtruderDemo/ExampleData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExampleData_t1BA2EA6FDF720D91EA8933F37658B58F27259C0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Microsoft.MixedReality.Toolkit.UI.SliderAxis>
struct Nullable_1_tEBA619FFFF5BA65CE4FD3077BCF50907B86612D1 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tEBA619FFFF5BA65CE4FD3077BCF50907B86612D1, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tEBA619FFFF5BA65CE4FD3077BCF50907B86612D1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform
struct MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::pose
	MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  ___pose_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_2;

public:
	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813, ___pose_1)); }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  get_pose_1() const { return ___pose_1; }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8 * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  value)
	{
		___pose_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813, ___scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_2() const { return ___scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_2 = value;
	}
};

struct MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::<Identity>k__BackingField
	MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  ___U3CIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813_StaticFields, ___U3CIdentityU3Ek__BackingField_0)); }
	inline MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  get_U3CIdentityU3Ek__BackingField_0() const { return ___U3CIdentityU3Ek__BackingField_0; }
	inline MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813 * get_address_of_U3CIdentityU3Ek__BackingField_0() { return &___U3CIdentityU3Ek__BackingField_0; }
	inline void set_U3CIdentityU3Ek__BackingField_0(MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  value)
	{
		___U3CIdentityU3Ek__BackingField_0 = value;
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

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>
struct UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SphereCollider
struct SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl
struct BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::targetObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___targetObject_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::con
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___con_5;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boundsOverride
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___boundsOverride_6;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsCalculationMethod Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boundsCalculationMethod
	int32_t ___boundsCalculationMethod_7;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsControlActivationType Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::activation
	int32_t ___activation_8;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.FlattenModeType Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::flattenAxis
	int32_t ___flattenAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::uniformScaleOnFlattenedAxis
	bool ___uniformScaleOnFlattenedAxis_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boxPadding
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___boxPadding_11;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boxDisplayConfiguration
	BoxDisplayConfiguration_tB59B4F9CBAE93DE26447D88FF940D019D62B5CFD * ___boxDisplayConfiguration_12;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::linksConfiguration
	LinksConfiguration_t091A7E471B272807E3D987C330F8C4E1D8C7EFAF * ___linksConfiguration_13;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleHandlesConfiguration
	ScaleHandlesConfiguration_tF762066088E7FEB392FF4262A48D385265CDFA9A * ___scaleHandlesConfiguration_14;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandlesConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotationHandlesConfiguration
	RotationHandlesConfiguration_tFF2DB6918EDF33A8535EBCE9D83FC7CB731AC25E * ___rotationHandlesConfiguration_15;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.TranslationHandlesConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translationHandlesConfiguration
	TranslationHandlesConfiguration_t95454619C615146FDCA6D088A2ABA6CD0FE6EE62 * ___translationHandlesConfiguration_16;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffectConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::handleProximityEffectConfiguration
	ProximityEffectConfiguration_t9223663F6E3051757E2AE32BEEDE2656E435F385 * ___handleProximityEffectConfiguration_17;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::debugText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___debugText_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::hideElementsInInspector
	bool ___hideElementsInInspector_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::smoothingActive
	bool ___smoothingActive_20;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotateLerpTime
	float ___rotateLerpTime_21;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleLerpTime
	float ___scaleLerpTime_22;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translateLerpTime
	float ___translateLerpTime_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::enableConstraints
	bool ___enableConstraints_24;
	// Microsoft.MixedReality.Toolkit.UI.ConstraintManager Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::constraintsManager
	ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * ___constraintsManager_25;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotateStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___rotateStarted_26;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotateStopped
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___rotateStopped_27;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___scaleStarted_28;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleStopped
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___scaleStopped_29;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translateStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___translateStarted_30;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translateStopped
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___translateStopped_31;
	// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::elasticsManager
	ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19 * ___elasticsManager_32;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.Links Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::links
	Links_t443BBE5DFCE16C9E78017309B6485845EFE5836E * ___links_33;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandles Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleHandles
	ScaleHandles_tE18594B4145E1613BBB52130E40886222A18C8D7 * ___scaleHandles_34;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandles Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotationHandles
	RotationHandles_tAA74FA24DD4D79B656B6E54924C221D437C3B949 * ___rotationHandles_35;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.TranslationHandles Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translationHandles
	TranslationHandles_t6C8E85D4E9B0084F401C7C39D38CEB212763CDC3 * ___translationHandles_36;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplay Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boxDisplay
	BoxDisplay_t8571B4B0DF05734B7BC147C661642A7E400FF22D * ___boxDisplay_37;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffect Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::proximityEffect
	ProximityEffect_t3A8FB3C29B2E8F284759CD2EAEF5B3FC88A1B70F * ___proximityEffect_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::wireframeOnly
	bool ___wireframeOnly_39;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentPointer
	RuntimeObject* ___currentPointer_40;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rigRoot
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___rigRoot_41;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentBoundsExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentBoundsExtents_42;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::touchingSources
	List_1_t14ABE8C4EDE13D540EAE721E7175E07264133D4A * ___touchingSources_43;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::sourcesDetected
	List_1_t9C27A3F905758D6C98F2CDE0542B9E9055908D4E * ___sourcesDetected_44;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentRotationAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentRotationAxis_45;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentTranslationAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentTranslationAxis_46;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialScaleOnGrabStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialScaleOnGrabStart_47;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialRotationOnGrabStart
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___initialRotationOnGrabStart_48;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialPositionOnGrabStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPositionOnGrabStart_49;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialGrabPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialGrabPoint_50;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentGrabPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentGrabPoint_51;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::grabPointInPointer
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___grabPointInPointer_52;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::oppositeCorner
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oppositeCorner_53;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::diagonalDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___diagonalDir_54;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.HandleType Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentHandleType
	int32_t ___currentHandleType_55;
	// UnityEngine.Bounds Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::prevBoundsOverride
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___prevBoundsOverride_56;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialBoundsOverrideSize
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___initialBoundsOverrideSize_57;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::isChildOfTarget
	bool ___isChildOfTarget_58;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boundsCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___boundsCorners_61;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::<BoundsCorners>k__BackingField
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CBoundsCornersU3Ek__BackingField_62;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::<TargetBounds>k__BackingField
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___U3CTargetBoundsU3Ek__BackingField_63;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::active
	bool ___active_64;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::childTransforms
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___childTransforms_65;

public:
	inline static int32_t get_offset_of_targetObject_4() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___targetObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_targetObject_4() const { return ___targetObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_targetObject_4() { return &___targetObject_4; }
	inline void set_targetObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___targetObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_con_5() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___con_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_con_5() const { return ___con_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_con_5() { return &___con_5; }
	inline void set_con_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___con_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___con_5), (void*)value);
	}

	inline static int32_t get_offset_of_boundsOverride_6() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___boundsOverride_6)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_boundsOverride_6() const { return ___boundsOverride_6; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_boundsOverride_6() { return &___boundsOverride_6; }
	inline void set_boundsOverride_6(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___boundsOverride_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsOverride_6), (void*)value);
	}

	inline static int32_t get_offset_of_boundsCalculationMethod_7() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___boundsCalculationMethod_7)); }
	inline int32_t get_boundsCalculationMethod_7() const { return ___boundsCalculationMethod_7; }
	inline int32_t* get_address_of_boundsCalculationMethod_7() { return &___boundsCalculationMethod_7; }
	inline void set_boundsCalculationMethod_7(int32_t value)
	{
		___boundsCalculationMethod_7 = value;
	}

	inline static int32_t get_offset_of_activation_8() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___activation_8)); }
	inline int32_t get_activation_8() const { return ___activation_8; }
	inline int32_t* get_address_of_activation_8() { return &___activation_8; }
	inline void set_activation_8(int32_t value)
	{
		___activation_8 = value;
	}

	inline static int32_t get_offset_of_flattenAxis_9() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___flattenAxis_9)); }
	inline int32_t get_flattenAxis_9() const { return ___flattenAxis_9; }
	inline int32_t* get_address_of_flattenAxis_9() { return &___flattenAxis_9; }
	inline void set_flattenAxis_9(int32_t value)
	{
		___flattenAxis_9 = value;
	}

	inline static int32_t get_offset_of_uniformScaleOnFlattenedAxis_10() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___uniformScaleOnFlattenedAxis_10)); }
	inline bool get_uniformScaleOnFlattenedAxis_10() const { return ___uniformScaleOnFlattenedAxis_10; }
	inline bool* get_address_of_uniformScaleOnFlattenedAxis_10() { return &___uniformScaleOnFlattenedAxis_10; }
	inline void set_uniformScaleOnFlattenedAxis_10(bool value)
	{
		___uniformScaleOnFlattenedAxis_10 = value;
	}

	inline static int32_t get_offset_of_boxPadding_11() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___boxPadding_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_boxPadding_11() const { return ___boxPadding_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_boxPadding_11() { return &___boxPadding_11; }
	inline void set_boxPadding_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___boxPadding_11 = value;
	}

	inline static int32_t get_offset_of_boxDisplayConfiguration_12() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___boxDisplayConfiguration_12)); }
	inline BoxDisplayConfiguration_tB59B4F9CBAE93DE26447D88FF940D019D62B5CFD * get_boxDisplayConfiguration_12() const { return ___boxDisplayConfiguration_12; }
	inline BoxDisplayConfiguration_tB59B4F9CBAE93DE26447D88FF940D019D62B5CFD ** get_address_of_boxDisplayConfiguration_12() { return &___boxDisplayConfiguration_12; }
	inline void set_boxDisplayConfiguration_12(BoxDisplayConfiguration_tB59B4F9CBAE93DE26447D88FF940D019D62B5CFD * value)
	{
		___boxDisplayConfiguration_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxDisplayConfiguration_12), (void*)value);
	}

	inline static int32_t get_offset_of_linksConfiguration_13() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___linksConfiguration_13)); }
	inline LinksConfiguration_t091A7E471B272807E3D987C330F8C4E1D8C7EFAF * get_linksConfiguration_13() const { return ___linksConfiguration_13; }
	inline LinksConfiguration_t091A7E471B272807E3D987C330F8C4E1D8C7EFAF ** get_address_of_linksConfiguration_13() { return &___linksConfiguration_13; }
	inline void set_linksConfiguration_13(LinksConfiguration_t091A7E471B272807E3D987C330F8C4E1D8C7EFAF * value)
	{
		___linksConfiguration_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linksConfiguration_13), (void*)value);
	}

	inline static int32_t get_offset_of_scaleHandlesConfiguration_14() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___scaleHandlesConfiguration_14)); }
	inline ScaleHandlesConfiguration_tF762066088E7FEB392FF4262A48D385265CDFA9A * get_scaleHandlesConfiguration_14() const { return ___scaleHandlesConfiguration_14; }
	inline ScaleHandlesConfiguration_tF762066088E7FEB392FF4262A48D385265CDFA9A ** get_address_of_scaleHandlesConfiguration_14() { return &___scaleHandlesConfiguration_14; }
	inline void set_scaleHandlesConfiguration_14(ScaleHandlesConfiguration_tF762066088E7FEB392FF4262A48D385265CDFA9A * value)
	{
		___scaleHandlesConfiguration_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleHandlesConfiguration_14), (void*)value);
	}

	inline static int32_t get_offset_of_rotationHandlesConfiguration_15() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___rotationHandlesConfiguration_15)); }
	inline RotationHandlesConfiguration_tFF2DB6918EDF33A8535EBCE9D83FC7CB731AC25E * get_rotationHandlesConfiguration_15() const { return ___rotationHandlesConfiguration_15; }
	inline RotationHandlesConfiguration_tFF2DB6918EDF33A8535EBCE9D83FC7CB731AC25E ** get_address_of_rotationHandlesConfiguration_15() { return &___rotationHandlesConfiguration_15; }
	inline void set_rotationHandlesConfiguration_15(RotationHandlesConfiguration_tFF2DB6918EDF33A8535EBCE9D83FC7CB731AC25E * value)
	{
		___rotationHandlesConfiguration_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationHandlesConfiguration_15), (void*)value);
	}

	inline static int32_t get_offset_of_translationHandlesConfiguration_16() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___translationHandlesConfiguration_16)); }
	inline TranslationHandlesConfiguration_t95454619C615146FDCA6D088A2ABA6CD0FE6EE62 * get_translationHandlesConfiguration_16() const { return ___translationHandlesConfiguration_16; }
	inline TranslationHandlesConfiguration_t95454619C615146FDCA6D088A2ABA6CD0FE6EE62 ** get_address_of_translationHandlesConfiguration_16() { return &___translationHandlesConfiguration_16; }
	inline void set_translationHandlesConfiguration_16(TranslationHandlesConfiguration_t95454619C615146FDCA6D088A2ABA6CD0FE6EE62 * value)
	{
		___translationHandlesConfiguration_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translationHandlesConfiguration_16), (void*)value);
	}

	inline static int32_t get_offset_of_handleProximityEffectConfiguration_17() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___handleProximityEffectConfiguration_17)); }
	inline ProximityEffectConfiguration_t9223663F6E3051757E2AE32BEEDE2656E435F385 * get_handleProximityEffectConfiguration_17() const { return ___handleProximityEffectConfiguration_17; }
	inline ProximityEffectConfiguration_t9223663F6E3051757E2AE32BEEDE2656E435F385 ** get_address_of_handleProximityEffectConfiguration_17() { return &___handleProximityEffectConfiguration_17; }
	inline void set_handleProximityEffectConfiguration_17(ProximityEffectConfiguration_t9223663F6E3051757E2AE32BEEDE2656E435F385 * value)
	{
		___handleProximityEffectConfiguration_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleProximityEffectConfiguration_17), (void*)value);
	}

	inline static int32_t get_offset_of_debugText_18() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___debugText_18)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_debugText_18() const { return ___debugText_18; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_debugText_18() { return &___debugText_18; }
	inline void set_debugText_18(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___debugText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugText_18), (void*)value);
	}

	inline static int32_t get_offset_of_hideElementsInInspector_19() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___hideElementsInInspector_19)); }
	inline bool get_hideElementsInInspector_19() const { return ___hideElementsInInspector_19; }
	inline bool* get_address_of_hideElementsInInspector_19() { return &___hideElementsInInspector_19; }
	inline void set_hideElementsInInspector_19(bool value)
	{
		___hideElementsInInspector_19 = value;
	}

	inline static int32_t get_offset_of_smoothingActive_20() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___smoothingActive_20)); }
	inline bool get_smoothingActive_20() const { return ___smoothingActive_20; }
	inline bool* get_address_of_smoothingActive_20() { return &___smoothingActive_20; }
	inline void set_smoothingActive_20(bool value)
	{
		___smoothingActive_20 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_21() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___rotateLerpTime_21)); }
	inline float get_rotateLerpTime_21() const { return ___rotateLerpTime_21; }
	inline float* get_address_of_rotateLerpTime_21() { return &___rotateLerpTime_21; }
	inline void set_rotateLerpTime_21(float value)
	{
		___rotateLerpTime_21 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_22() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___scaleLerpTime_22)); }
	inline float get_scaleLerpTime_22() const { return ___scaleLerpTime_22; }
	inline float* get_address_of_scaleLerpTime_22() { return &___scaleLerpTime_22; }
	inline void set_scaleLerpTime_22(float value)
	{
		___scaleLerpTime_22 = value;
	}

	inline static int32_t get_offset_of_translateLerpTime_23() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___translateLerpTime_23)); }
	inline float get_translateLerpTime_23() const { return ___translateLerpTime_23; }
	inline float* get_address_of_translateLerpTime_23() { return &___translateLerpTime_23; }
	inline void set_translateLerpTime_23(float value)
	{
		___translateLerpTime_23 = value;
	}

	inline static int32_t get_offset_of_enableConstraints_24() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___enableConstraints_24)); }
	inline bool get_enableConstraints_24() const { return ___enableConstraints_24; }
	inline bool* get_address_of_enableConstraints_24() { return &___enableConstraints_24; }
	inline void set_enableConstraints_24(bool value)
	{
		___enableConstraints_24 = value;
	}

	inline static int32_t get_offset_of_constraintsManager_25() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___constraintsManager_25)); }
	inline ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * get_constraintsManager_25() const { return ___constraintsManager_25; }
	inline ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 ** get_address_of_constraintsManager_25() { return &___constraintsManager_25; }
	inline void set_constraintsManager_25(ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * value)
	{
		___constraintsManager_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraintsManager_25), (void*)value);
	}

	inline static int32_t get_offset_of_rotateStarted_26() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___rotateStarted_26)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_rotateStarted_26() const { return ___rotateStarted_26; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_rotateStarted_26() { return &___rotateStarted_26; }
	inline void set_rotateStarted_26(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___rotateStarted_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateStarted_26), (void*)value);
	}

	inline static int32_t get_offset_of_rotateStopped_27() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___rotateStopped_27)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_rotateStopped_27() const { return ___rotateStopped_27; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_rotateStopped_27() { return &___rotateStopped_27; }
	inline void set_rotateStopped_27(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___rotateStopped_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateStopped_27), (void*)value);
	}

	inline static int32_t get_offset_of_scaleStarted_28() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___scaleStarted_28)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_scaleStarted_28() const { return ___scaleStarted_28; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_scaleStarted_28() { return &___scaleStarted_28; }
	inline void set_scaleStarted_28(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___scaleStarted_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleStarted_28), (void*)value);
	}

	inline static int32_t get_offset_of_scaleStopped_29() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___scaleStopped_29)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_scaleStopped_29() const { return ___scaleStopped_29; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_scaleStopped_29() { return &___scaleStopped_29; }
	inline void set_scaleStopped_29(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___scaleStopped_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleStopped_29), (void*)value);
	}

	inline static int32_t get_offset_of_translateStarted_30() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___translateStarted_30)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_translateStarted_30() const { return ___translateStarted_30; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_translateStarted_30() { return &___translateStarted_30; }
	inline void set_translateStarted_30(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___translateStarted_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translateStarted_30), (void*)value);
	}

	inline static int32_t get_offset_of_translateStopped_31() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___translateStopped_31)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_translateStopped_31() const { return ___translateStopped_31; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_translateStopped_31() { return &___translateStopped_31; }
	inline void set_translateStopped_31(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___translateStopped_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translateStopped_31), (void*)value);
	}

	inline static int32_t get_offset_of_elasticsManager_32() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___elasticsManager_32)); }
	inline ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19 * get_elasticsManager_32() const { return ___elasticsManager_32; }
	inline ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19 ** get_address_of_elasticsManager_32() { return &___elasticsManager_32; }
	inline void set_elasticsManager_32(ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19 * value)
	{
		___elasticsManager_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elasticsManager_32), (void*)value);
	}

	inline static int32_t get_offset_of_links_33() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___links_33)); }
	inline Links_t443BBE5DFCE16C9E78017309B6485845EFE5836E * get_links_33() const { return ___links_33; }
	inline Links_t443BBE5DFCE16C9E78017309B6485845EFE5836E ** get_address_of_links_33() { return &___links_33; }
	inline void set_links_33(Links_t443BBE5DFCE16C9E78017309B6485845EFE5836E * value)
	{
		___links_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___links_33), (void*)value);
	}

	inline static int32_t get_offset_of_scaleHandles_34() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___scaleHandles_34)); }
	inline ScaleHandles_tE18594B4145E1613BBB52130E40886222A18C8D7 * get_scaleHandles_34() const { return ___scaleHandles_34; }
	inline ScaleHandles_tE18594B4145E1613BBB52130E40886222A18C8D7 ** get_address_of_scaleHandles_34() { return &___scaleHandles_34; }
	inline void set_scaleHandles_34(ScaleHandles_tE18594B4145E1613BBB52130E40886222A18C8D7 * value)
	{
		___scaleHandles_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleHandles_34), (void*)value);
	}

	inline static int32_t get_offset_of_rotationHandles_35() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___rotationHandles_35)); }
	inline RotationHandles_tAA74FA24DD4D79B656B6E54924C221D437C3B949 * get_rotationHandles_35() const { return ___rotationHandles_35; }
	inline RotationHandles_tAA74FA24DD4D79B656B6E54924C221D437C3B949 ** get_address_of_rotationHandles_35() { return &___rotationHandles_35; }
	inline void set_rotationHandles_35(RotationHandles_tAA74FA24DD4D79B656B6E54924C221D437C3B949 * value)
	{
		___rotationHandles_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationHandles_35), (void*)value);
	}

	inline static int32_t get_offset_of_translationHandles_36() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___translationHandles_36)); }
	inline TranslationHandles_t6C8E85D4E9B0084F401C7C39D38CEB212763CDC3 * get_translationHandles_36() const { return ___translationHandles_36; }
	inline TranslationHandles_t6C8E85D4E9B0084F401C7C39D38CEB212763CDC3 ** get_address_of_translationHandles_36() { return &___translationHandles_36; }
	inline void set_translationHandles_36(TranslationHandles_t6C8E85D4E9B0084F401C7C39D38CEB212763CDC3 * value)
	{
		___translationHandles_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translationHandles_36), (void*)value);
	}

	inline static int32_t get_offset_of_boxDisplay_37() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___boxDisplay_37)); }
	inline BoxDisplay_t8571B4B0DF05734B7BC147C661642A7E400FF22D * get_boxDisplay_37() const { return ___boxDisplay_37; }
	inline BoxDisplay_t8571B4B0DF05734B7BC147C661642A7E400FF22D ** get_address_of_boxDisplay_37() { return &___boxDisplay_37; }
	inline void set_boxDisplay_37(BoxDisplay_t8571B4B0DF05734B7BC147C661642A7E400FF22D * value)
	{
		___boxDisplay_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxDisplay_37), (void*)value);
	}

	inline static int32_t get_offset_of_proximityEffect_38() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___proximityEffect_38)); }
	inline ProximityEffect_t3A8FB3C29B2E8F284759CD2EAEF5B3FC88A1B70F * get_proximityEffect_38() const { return ___proximityEffect_38; }
	inline ProximityEffect_t3A8FB3C29B2E8F284759CD2EAEF5B3FC88A1B70F ** get_address_of_proximityEffect_38() { return &___proximityEffect_38; }
	inline void set_proximityEffect_38(ProximityEffect_t3A8FB3C29B2E8F284759CD2EAEF5B3FC88A1B70F * value)
	{
		___proximityEffect_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proximityEffect_38), (void*)value);
	}

	inline static int32_t get_offset_of_wireframeOnly_39() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___wireframeOnly_39)); }
	inline bool get_wireframeOnly_39() const { return ___wireframeOnly_39; }
	inline bool* get_address_of_wireframeOnly_39() { return &___wireframeOnly_39; }
	inline void set_wireframeOnly_39(bool value)
	{
		___wireframeOnly_39 = value;
	}

	inline static int32_t get_offset_of_currentPointer_40() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___currentPointer_40)); }
	inline RuntimeObject* get_currentPointer_40() const { return ___currentPointer_40; }
	inline RuntimeObject** get_address_of_currentPointer_40() { return &___currentPointer_40; }
	inline void set_currentPointer_40(RuntimeObject* value)
	{
		___currentPointer_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPointer_40), (void*)value);
	}

	inline static int32_t get_offset_of_rigRoot_41() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___rigRoot_41)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_rigRoot_41() const { return ___rigRoot_41; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_rigRoot_41() { return &___rigRoot_41; }
	inline void set_rigRoot_41(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___rigRoot_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigRoot_41), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundsExtents_42() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___currentBoundsExtents_42)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentBoundsExtents_42() const { return ___currentBoundsExtents_42; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentBoundsExtents_42() { return &___currentBoundsExtents_42; }
	inline void set_currentBoundsExtents_42(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentBoundsExtents_42 = value;
	}

	inline static int32_t get_offset_of_touchingSources_43() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___touchingSources_43)); }
	inline List_1_t14ABE8C4EDE13D540EAE721E7175E07264133D4A * get_touchingSources_43() const { return ___touchingSources_43; }
	inline List_1_t14ABE8C4EDE13D540EAE721E7175E07264133D4A ** get_address_of_touchingSources_43() { return &___touchingSources_43; }
	inline void set_touchingSources_43(List_1_t14ABE8C4EDE13D540EAE721E7175E07264133D4A * value)
	{
		___touchingSources_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchingSources_43), (void*)value);
	}

	inline static int32_t get_offset_of_sourcesDetected_44() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___sourcesDetected_44)); }
	inline List_1_t9C27A3F905758D6C98F2CDE0542B9E9055908D4E * get_sourcesDetected_44() const { return ___sourcesDetected_44; }
	inline List_1_t9C27A3F905758D6C98F2CDE0542B9E9055908D4E ** get_address_of_sourcesDetected_44() { return &___sourcesDetected_44; }
	inline void set_sourcesDetected_44(List_1_t9C27A3F905758D6C98F2CDE0542B9E9055908D4E * value)
	{
		___sourcesDetected_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcesDetected_44), (void*)value);
	}

	inline static int32_t get_offset_of_currentRotationAxis_45() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___currentRotationAxis_45)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentRotationAxis_45() const { return ___currentRotationAxis_45; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentRotationAxis_45() { return &___currentRotationAxis_45; }
	inline void set_currentRotationAxis_45(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentRotationAxis_45 = value;
	}

	inline static int32_t get_offset_of_currentTranslationAxis_46() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___currentTranslationAxis_46)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentTranslationAxis_46() const { return ___currentTranslationAxis_46; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentTranslationAxis_46() { return &___currentTranslationAxis_46; }
	inline void set_currentTranslationAxis_46(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentTranslationAxis_46 = value;
	}

	inline static int32_t get_offset_of_initialScaleOnGrabStart_47() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___initialScaleOnGrabStart_47)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialScaleOnGrabStart_47() const { return ___initialScaleOnGrabStart_47; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialScaleOnGrabStart_47() { return &___initialScaleOnGrabStart_47; }
	inline void set_initialScaleOnGrabStart_47(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialScaleOnGrabStart_47 = value;
	}

	inline static int32_t get_offset_of_initialRotationOnGrabStart_48() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___initialRotationOnGrabStart_48)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_initialRotationOnGrabStart_48() const { return ___initialRotationOnGrabStart_48; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_initialRotationOnGrabStart_48() { return &___initialRotationOnGrabStart_48; }
	inline void set_initialRotationOnGrabStart_48(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___initialRotationOnGrabStart_48 = value;
	}

	inline static int32_t get_offset_of_initialPositionOnGrabStart_49() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___initialPositionOnGrabStart_49)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPositionOnGrabStart_49() const { return ___initialPositionOnGrabStart_49; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPositionOnGrabStart_49() { return &___initialPositionOnGrabStart_49; }
	inline void set_initialPositionOnGrabStart_49(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPositionOnGrabStart_49 = value;
	}

	inline static int32_t get_offset_of_initialGrabPoint_50() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___initialGrabPoint_50)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialGrabPoint_50() const { return ___initialGrabPoint_50; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialGrabPoint_50() { return &___initialGrabPoint_50; }
	inline void set_initialGrabPoint_50(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialGrabPoint_50 = value;
	}

	inline static int32_t get_offset_of_currentGrabPoint_51() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___currentGrabPoint_51)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentGrabPoint_51() const { return ___currentGrabPoint_51; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentGrabPoint_51() { return &___currentGrabPoint_51; }
	inline void set_currentGrabPoint_51(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentGrabPoint_51 = value;
	}

	inline static int32_t get_offset_of_grabPointInPointer_52() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___grabPointInPointer_52)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_grabPointInPointer_52() const { return ___grabPointInPointer_52; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_grabPointInPointer_52() { return &___grabPointInPointer_52; }
	inline void set_grabPointInPointer_52(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___grabPointInPointer_52 = value;
	}

	inline static int32_t get_offset_of_oppositeCorner_53() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___oppositeCorner_53)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oppositeCorner_53() const { return ___oppositeCorner_53; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oppositeCorner_53() { return &___oppositeCorner_53; }
	inline void set_oppositeCorner_53(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oppositeCorner_53 = value;
	}

	inline static int32_t get_offset_of_diagonalDir_54() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___diagonalDir_54)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_diagonalDir_54() const { return ___diagonalDir_54; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_diagonalDir_54() { return &___diagonalDir_54; }
	inline void set_diagonalDir_54(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___diagonalDir_54 = value;
	}

	inline static int32_t get_offset_of_currentHandleType_55() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___currentHandleType_55)); }
	inline int32_t get_currentHandleType_55() const { return ___currentHandleType_55; }
	inline int32_t* get_address_of_currentHandleType_55() { return &___currentHandleType_55; }
	inline void set_currentHandleType_55(int32_t value)
	{
		___currentHandleType_55 = value;
	}

	inline static int32_t get_offset_of_prevBoundsOverride_56() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___prevBoundsOverride_56)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_prevBoundsOverride_56() const { return ___prevBoundsOverride_56; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_prevBoundsOverride_56() { return &___prevBoundsOverride_56; }
	inline void set_prevBoundsOverride_56(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___prevBoundsOverride_56 = value;
	}

	inline static int32_t get_offset_of_initialBoundsOverrideSize_57() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___initialBoundsOverrideSize_57)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_initialBoundsOverrideSize_57() const { return ___initialBoundsOverrideSize_57; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_initialBoundsOverrideSize_57() { return &___initialBoundsOverrideSize_57; }
	inline void set_initialBoundsOverrideSize_57(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___initialBoundsOverrideSize_57 = value;
	}

	inline static int32_t get_offset_of_isChildOfTarget_58() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___isChildOfTarget_58)); }
	inline bool get_isChildOfTarget_58() const { return ___isChildOfTarget_58; }
	inline bool* get_address_of_isChildOfTarget_58() { return &___isChildOfTarget_58; }
	inline void set_isChildOfTarget_58(bool value)
	{
		___isChildOfTarget_58 = value;
	}

	inline static int32_t get_offset_of_boundsCorners_61() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___boundsCorners_61)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_boundsCorners_61() const { return ___boundsCorners_61; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_boundsCorners_61() { return &___boundsCorners_61; }
	inline void set_boundsCorners_61(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___boundsCorners_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsCorners_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBoundsCornersU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___U3CBoundsCornersU3Ek__BackingField_62)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CBoundsCornersU3Ek__BackingField_62() const { return ___U3CBoundsCornersU3Ek__BackingField_62; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CBoundsCornersU3Ek__BackingField_62() { return &___U3CBoundsCornersU3Ek__BackingField_62; }
	inline void set_U3CBoundsCornersU3Ek__BackingField_62(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CBoundsCornersU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsCornersU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetBoundsU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___U3CTargetBoundsU3Ek__BackingField_63)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_U3CTargetBoundsU3Ek__BackingField_63() const { return ___U3CTargetBoundsU3Ek__BackingField_63; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_U3CTargetBoundsU3Ek__BackingField_63() { return &___U3CTargetBoundsU3Ek__BackingField_63; }
	inline void set_U3CTargetBoundsU3Ek__BackingField_63(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___U3CTargetBoundsU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetBoundsU3Ek__BackingField_63), (void*)value);
	}

	inline static int32_t get_offset_of_active_64() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___active_64)); }
	inline bool get_active_64() const { return ___active_64; }
	inline bool* get_address_of_active_64() { return &___active_64; }
	inline void set_active_64(bool value)
	{
		___active_64 = value;
	}

	inline static int32_t get_offset_of_childTransforms_65() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A, ___childTransforms_65)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_childTransforms_65() const { return ___childTransforms_65; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_childTransforms_65() { return &___childTransforms_65; }
	inline void set_childTransforms_65(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___childTransforms_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childTransforms_65), (void*)value);
	}
};

struct BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::TotalBoundsCorners
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___TotalBoundsCorners_60;

public:
	inline static int32_t get_offset_of_TotalBoundsCorners_60() { return static_cast<int32_t>(offsetof(BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A_StaticFields, ___TotalBoundsCorners_60)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_TotalBoundsCorners_60() const { return ___TotalBoundsCorners_60; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_TotalBoundsCorners_60() { return &___TotalBoundsCorners_60; }
	inline void set_TotalBoundsCorners_60(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___TotalBoundsCorners_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalBoundsCorners_60), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConstraintManager
struct ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ConstraintManager::autoConstraintSelection
	bool ___autoConstraintSelection_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.TransformConstraint> Microsoft.MixedReality.Toolkit.UI.ConstraintManager::selectedConstraints
	List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5 * ___selectedConstraints_5;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.TransformConstraint> Microsoft.MixedReality.Toolkit.UI.ConstraintManager::constraints
	List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5 * ___constraints_6;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.UI.ConstraintManager::initialWorldPose
	MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  ___initialWorldPose_7;

public:
	inline static int32_t get_offset_of_autoConstraintSelection_4() { return static_cast<int32_t>(offsetof(ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788, ___autoConstraintSelection_4)); }
	inline bool get_autoConstraintSelection_4() const { return ___autoConstraintSelection_4; }
	inline bool* get_address_of_autoConstraintSelection_4() { return &___autoConstraintSelection_4; }
	inline void set_autoConstraintSelection_4(bool value)
	{
		___autoConstraintSelection_4 = value;
	}

	inline static int32_t get_offset_of_selectedConstraints_5() { return static_cast<int32_t>(offsetof(ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788, ___selectedConstraints_5)); }
	inline List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5 * get_selectedConstraints_5() const { return ___selectedConstraints_5; }
	inline List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5 ** get_address_of_selectedConstraints_5() { return &___selectedConstraints_5; }
	inline void set_selectedConstraints_5(List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5 * value)
	{
		___selectedConstraints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedConstraints_5), (void*)value);
	}

	inline static int32_t get_offset_of_constraints_6() { return static_cast<int32_t>(offsetof(ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788, ___constraints_6)); }
	inline List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5 * get_constraints_6() const { return ___constraints_6; }
	inline List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5 ** get_address_of_constraints_6() { return &___constraints_6; }
	inline void set_constraints_6(List_1_t55D1189F40A0DC0D5A5E1723972CDD1CC8CA3BA5 * value)
	{
		___constraints_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraints_6), (void*)value);
	}

	inline static int32_t get_offset_of_initialWorldPose_7() { return static_cast<int32_t>(offsetof(ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788, ___initialWorldPose_7)); }
	inline MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  get_initialWorldPose_7() const { return ___initialWorldPose_7; }
	inline MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813 * get_address_of_initialWorldPose_7() { return &___initialWorldPose_7; }
	inline void set_initialWorldPose_7(MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  value)
	{
		___initialWorldPose_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::ShowTetherWhenManipulating
	bool ___ShowTetherWhenManipulating_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::IsBoundsHandles
	bool ___IsBoundsHandles_5;

public:
	inline static int32_t get_offset_of_ShowTetherWhenManipulating_4() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB, ___ShowTetherWhenManipulating_4)); }
	inline bool get_ShowTetherWhenManipulating_4() const { return ___ShowTetherWhenManipulating_4; }
	inline bool* get_address_of_ShowTetherWhenManipulating_4() { return &___ShowTetherWhenManipulating_4; }
	inline void set_ShowTetherWhenManipulating_4(bool value)
	{
		___ShowTetherWhenManipulating_4 = value;
	}

	inline static int32_t get_offset_of_IsBoundsHandles_5() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB, ___IsBoundsHandles_5)); }
	inline bool get_IsBoundsHandles_5() const { return ___IsBoundsHandles_5; }
	inline bool* get_address_of_IsBoundsHandles_5() { return &___IsBoundsHandles_5; }
	inline void set_IsBoundsHandles_5(bool value)
	{
		___IsBoundsHandles_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::hostTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___hostTransform_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::manipulationType
	int32_t ___manipulationType_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TransformFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::twoHandedManipulationType
	int32_t ___twoHandedManipulationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::allowFarManipulation
	bool ___allowFarManipulation_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::useForcesForNearManipulation
	bool ___useForcesForNearManipulation_8;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeNear
	int32_t ___oneHandRotationModeNear_9;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeFar
	int32_t ___oneHandRotationModeFar_10;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::releaseBehavior
	int32_t ___releaseBehavior_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::transformSmoothingLogicType
	SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * ___transformSmoothingLogicType_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingFar
	bool ___smoothingFar_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingNear
	bool ___smoothingNear_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLerpTime
	float ___moveLerpTime_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLerpTime
	float ___rotateLerpTime_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLerpTime
	float ___scaleLerpTime_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::enableConstraints
	bool ___enableConstraints_18;
	// Microsoft.MixedReality.Toolkit.UI.ConstraintManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::constraintsManager
	ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * ___constraintsManager_19;
	// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::elasticsManager
	ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19 * ___elasticsManager_20;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationStarted
	ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * ___onManipulationStarted_21;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationEnded
	ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * ___onManipulationEnded_22;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverEntered
	ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * ___onHoverEntered_23;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverExited
	ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * ___onHoverExited_24;
	// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLogic
	ManipulationMoveLogic_t173260C0D7A09AE97AEC0A619EBA65B397BBA388 * ___moveLogic_25;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLogic
	TwoHandScaleLogic_tDE10E1D642589A12B29034844E65375AF62576C8 * ___scaleLogic_26;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLogic
	TwoHandRotateLogic_t80E1E3BF9C0246AAB8E69F16580D35772D804973 * ___rotateLogic_27;
	// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingLogic
	RuntimeObject* ___smoothingLogic_28;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData> Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::pointerDataList
	List_1_t8ACEF7047804FA61FF593CC323A8926E9303A581 * ___pointerDataList_29;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::objectToGripRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___objectToGripRotation_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isNearManipulation
	bool ___isNearManipulation_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isManipulationStarted
	bool ___isManipulationStarted_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isSmoothing
	bool ___isSmoothing_33;
	// UnityEngine.Rigidbody Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidBody_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasGravity
	bool ___wasGravity_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasKinematic
	bool ___wasKinematic_36;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::leftHandRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftHandRotation_37;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rightHandRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightHandRotation_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::hasFirstPointerDraggedThisFrame
	bool ___hasFirstPointerDraggedThisFrame_39;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::handPositionMap
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handPositionMap_40;

public:
	inline static int32_t get_offset_of_hostTransform_4() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___hostTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_hostTransform_4() const { return ___hostTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_hostTransform_4() { return &___hostTransform_4; }
	inline void set_hostTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___hostTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_manipulationType_5() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___manipulationType_5)); }
	inline int32_t get_manipulationType_5() const { return ___manipulationType_5; }
	inline int32_t* get_address_of_manipulationType_5() { return &___manipulationType_5; }
	inline void set_manipulationType_5(int32_t value)
	{
		___manipulationType_5 = value;
	}

	inline static int32_t get_offset_of_twoHandedManipulationType_6() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___twoHandedManipulationType_6)); }
	inline int32_t get_twoHandedManipulationType_6() const { return ___twoHandedManipulationType_6; }
	inline int32_t* get_address_of_twoHandedManipulationType_6() { return &___twoHandedManipulationType_6; }
	inline void set_twoHandedManipulationType_6(int32_t value)
	{
		___twoHandedManipulationType_6 = value;
	}

	inline static int32_t get_offset_of_allowFarManipulation_7() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___allowFarManipulation_7)); }
	inline bool get_allowFarManipulation_7() const { return ___allowFarManipulation_7; }
	inline bool* get_address_of_allowFarManipulation_7() { return &___allowFarManipulation_7; }
	inline void set_allowFarManipulation_7(bool value)
	{
		___allowFarManipulation_7 = value;
	}

	inline static int32_t get_offset_of_useForcesForNearManipulation_8() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___useForcesForNearManipulation_8)); }
	inline bool get_useForcesForNearManipulation_8() const { return ___useForcesForNearManipulation_8; }
	inline bool* get_address_of_useForcesForNearManipulation_8() { return &___useForcesForNearManipulation_8; }
	inline void set_useForcesForNearManipulation_8(bool value)
	{
		___useForcesForNearManipulation_8 = value;
	}

	inline static int32_t get_offset_of_oneHandRotationModeNear_9() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___oneHandRotationModeNear_9)); }
	inline int32_t get_oneHandRotationModeNear_9() const { return ___oneHandRotationModeNear_9; }
	inline int32_t* get_address_of_oneHandRotationModeNear_9() { return &___oneHandRotationModeNear_9; }
	inline void set_oneHandRotationModeNear_9(int32_t value)
	{
		___oneHandRotationModeNear_9 = value;
	}

	inline static int32_t get_offset_of_oneHandRotationModeFar_10() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___oneHandRotationModeFar_10)); }
	inline int32_t get_oneHandRotationModeFar_10() const { return ___oneHandRotationModeFar_10; }
	inline int32_t* get_address_of_oneHandRotationModeFar_10() { return &___oneHandRotationModeFar_10; }
	inline void set_oneHandRotationModeFar_10(int32_t value)
	{
		___oneHandRotationModeFar_10 = value;
	}

	inline static int32_t get_offset_of_releaseBehavior_11() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___releaseBehavior_11)); }
	inline int32_t get_releaseBehavior_11() const { return ___releaseBehavior_11; }
	inline int32_t* get_address_of_releaseBehavior_11() { return &___releaseBehavior_11; }
	inline void set_releaseBehavior_11(int32_t value)
	{
		___releaseBehavior_11 = value;
	}

	inline static int32_t get_offset_of_transformSmoothingLogicType_12() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___transformSmoothingLogicType_12)); }
	inline SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * get_transformSmoothingLogicType_12() const { return ___transformSmoothingLogicType_12; }
	inline SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 ** get_address_of_transformSmoothingLogicType_12() { return &___transformSmoothingLogicType_12; }
	inline void set_transformSmoothingLogicType_12(SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * value)
	{
		___transformSmoothingLogicType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformSmoothingLogicType_12), (void*)value);
	}

	inline static int32_t get_offset_of_smoothingFar_13() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___smoothingFar_13)); }
	inline bool get_smoothingFar_13() const { return ___smoothingFar_13; }
	inline bool* get_address_of_smoothingFar_13() { return &___smoothingFar_13; }
	inline void set_smoothingFar_13(bool value)
	{
		___smoothingFar_13 = value;
	}

	inline static int32_t get_offset_of_smoothingNear_14() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___smoothingNear_14)); }
	inline bool get_smoothingNear_14() const { return ___smoothingNear_14; }
	inline bool* get_address_of_smoothingNear_14() { return &___smoothingNear_14; }
	inline void set_smoothingNear_14(bool value)
	{
		___smoothingNear_14 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_15() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___moveLerpTime_15)); }
	inline float get_moveLerpTime_15() const { return ___moveLerpTime_15; }
	inline float* get_address_of_moveLerpTime_15() { return &___moveLerpTime_15; }
	inline void set_moveLerpTime_15(float value)
	{
		___moveLerpTime_15 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_16() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___rotateLerpTime_16)); }
	inline float get_rotateLerpTime_16() const { return ___rotateLerpTime_16; }
	inline float* get_address_of_rotateLerpTime_16() { return &___rotateLerpTime_16; }
	inline void set_rotateLerpTime_16(float value)
	{
		___rotateLerpTime_16 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_17() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___scaleLerpTime_17)); }
	inline float get_scaleLerpTime_17() const { return ___scaleLerpTime_17; }
	inline float* get_address_of_scaleLerpTime_17() { return &___scaleLerpTime_17; }
	inline void set_scaleLerpTime_17(float value)
	{
		___scaleLerpTime_17 = value;
	}

	inline static int32_t get_offset_of_enableConstraints_18() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___enableConstraints_18)); }
	inline bool get_enableConstraints_18() const { return ___enableConstraints_18; }
	inline bool* get_address_of_enableConstraints_18() { return &___enableConstraints_18; }
	inline void set_enableConstraints_18(bool value)
	{
		___enableConstraints_18 = value;
	}

	inline static int32_t get_offset_of_constraintsManager_19() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___constraintsManager_19)); }
	inline ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * get_constraintsManager_19() const { return ___constraintsManager_19; }
	inline ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 ** get_address_of_constraintsManager_19() { return &___constraintsManager_19; }
	inline void set_constraintsManager_19(ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * value)
	{
		___constraintsManager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraintsManager_19), (void*)value);
	}

	inline static int32_t get_offset_of_elasticsManager_20() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___elasticsManager_20)); }
	inline ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19 * get_elasticsManager_20() const { return ___elasticsManager_20; }
	inline ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19 ** get_address_of_elasticsManager_20() { return &___elasticsManager_20; }
	inline void set_elasticsManager_20(ElasticsManager_t0412EBF58B1A7466CCAF7CBDBF8FE48D74F99B19 * value)
	{
		___elasticsManager_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elasticsManager_20), (void*)value);
	}

	inline static int32_t get_offset_of_onManipulationStarted_21() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___onManipulationStarted_21)); }
	inline ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * get_onManipulationStarted_21() const { return ___onManipulationStarted_21; }
	inline ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C ** get_address_of_onManipulationStarted_21() { return &___onManipulationStarted_21; }
	inline void set_onManipulationStarted_21(ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * value)
	{
		___onManipulationStarted_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onManipulationStarted_21), (void*)value);
	}

	inline static int32_t get_offset_of_onManipulationEnded_22() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___onManipulationEnded_22)); }
	inline ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * get_onManipulationEnded_22() const { return ___onManipulationEnded_22; }
	inline ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C ** get_address_of_onManipulationEnded_22() { return &___onManipulationEnded_22; }
	inline void set_onManipulationEnded_22(ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * value)
	{
		___onManipulationEnded_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onManipulationEnded_22), (void*)value);
	}

	inline static int32_t get_offset_of_onHoverEntered_23() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___onHoverEntered_23)); }
	inline ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * get_onHoverEntered_23() const { return ___onHoverEntered_23; }
	inline ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C ** get_address_of_onHoverEntered_23() { return &___onHoverEntered_23; }
	inline void set_onHoverEntered_23(ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * value)
	{
		___onHoverEntered_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHoverEntered_23), (void*)value);
	}

	inline static int32_t get_offset_of_onHoverExited_24() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___onHoverExited_24)); }
	inline ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * get_onHoverExited_24() const { return ___onHoverExited_24; }
	inline ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C ** get_address_of_onHoverExited_24() { return &___onHoverExited_24; }
	inline void set_onHoverExited_24(ManipulationEvent_t7DA9468D6A1A47653BA2543172753FC5ADBE507C * value)
	{
		___onHoverExited_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHoverExited_24), (void*)value);
	}

	inline static int32_t get_offset_of_moveLogic_25() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___moveLogic_25)); }
	inline ManipulationMoveLogic_t173260C0D7A09AE97AEC0A619EBA65B397BBA388 * get_moveLogic_25() const { return ___moveLogic_25; }
	inline ManipulationMoveLogic_t173260C0D7A09AE97AEC0A619EBA65B397BBA388 ** get_address_of_moveLogic_25() { return &___moveLogic_25; }
	inline void set_moveLogic_25(ManipulationMoveLogic_t173260C0D7A09AE97AEC0A619EBA65B397BBA388 * value)
	{
		___moveLogic_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveLogic_25), (void*)value);
	}

	inline static int32_t get_offset_of_scaleLogic_26() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___scaleLogic_26)); }
	inline TwoHandScaleLogic_tDE10E1D642589A12B29034844E65375AF62576C8 * get_scaleLogic_26() const { return ___scaleLogic_26; }
	inline TwoHandScaleLogic_tDE10E1D642589A12B29034844E65375AF62576C8 ** get_address_of_scaleLogic_26() { return &___scaleLogic_26; }
	inline void set_scaleLogic_26(TwoHandScaleLogic_tDE10E1D642589A12B29034844E65375AF62576C8 * value)
	{
		___scaleLogic_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleLogic_26), (void*)value);
	}

	inline static int32_t get_offset_of_rotateLogic_27() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___rotateLogic_27)); }
	inline TwoHandRotateLogic_t80E1E3BF9C0246AAB8E69F16580D35772D804973 * get_rotateLogic_27() const { return ___rotateLogic_27; }
	inline TwoHandRotateLogic_t80E1E3BF9C0246AAB8E69F16580D35772D804973 ** get_address_of_rotateLogic_27() { return &___rotateLogic_27; }
	inline void set_rotateLogic_27(TwoHandRotateLogic_t80E1E3BF9C0246AAB8E69F16580D35772D804973 * value)
	{
		___rotateLogic_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateLogic_27), (void*)value);
	}

	inline static int32_t get_offset_of_smoothingLogic_28() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___smoothingLogic_28)); }
	inline RuntimeObject* get_smoothingLogic_28() const { return ___smoothingLogic_28; }
	inline RuntimeObject** get_address_of_smoothingLogic_28() { return &___smoothingLogic_28; }
	inline void set_smoothingLogic_28(RuntimeObject* value)
	{
		___smoothingLogic_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smoothingLogic_28), (void*)value);
	}

	inline static int32_t get_offset_of_pointerDataList_29() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___pointerDataList_29)); }
	inline List_1_t8ACEF7047804FA61FF593CC323A8926E9303A581 * get_pointerDataList_29() const { return ___pointerDataList_29; }
	inline List_1_t8ACEF7047804FA61FF593CC323A8926E9303A581 ** get_address_of_pointerDataList_29() { return &___pointerDataList_29; }
	inline void set_pointerDataList_29(List_1_t8ACEF7047804FA61FF593CC323A8926E9303A581 * value)
	{
		___pointerDataList_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataList_29), (void*)value);
	}

	inline static int32_t get_offset_of_objectToGripRotation_30() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___objectToGripRotation_30)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_objectToGripRotation_30() const { return ___objectToGripRotation_30; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_objectToGripRotation_30() { return &___objectToGripRotation_30; }
	inline void set_objectToGripRotation_30(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___objectToGripRotation_30 = value;
	}

	inline static int32_t get_offset_of_isNearManipulation_31() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___isNearManipulation_31)); }
	inline bool get_isNearManipulation_31() const { return ___isNearManipulation_31; }
	inline bool* get_address_of_isNearManipulation_31() { return &___isNearManipulation_31; }
	inline void set_isNearManipulation_31(bool value)
	{
		___isNearManipulation_31 = value;
	}

	inline static int32_t get_offset_of_isManipulationStarted_32() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___isManipulationStarted_32)); }
	inline bool get_isManipulationStarted_32() const { return ___isManipulationStarted_32; }
	inline bool* get_address_of_isManipulationStarted_32() { return &___isManipulationStarted_32; }
	inline void set_isManipulationStarted_32(bool value)
	{
		___isManipulationStarted_32 = value;
	}

	inline static int32_t get_offset_of_isSmoothing_33() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___isSmoothing_33)); }
	inline bool get_isSmoothing_33() const { return ___isSmoothing_33; }
	inline bool* get_address_of_isSmoothing_33() { return &___isSmoothing_33; }
	inline void set_isSmoothing_33(bool value)
	{
		___isSmoothing_33 = value;
	}

	inline static int32_t get_offset_of_rigidBody_34() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___rigidBody_34)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidBody_34() const { return ___rigidBody_34; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidBody_34() { return &___rigidBody_34; }
	inline void set_rigidBody_34(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidBody_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_34), (void*)value);
	}

	inline static int32_t get_offset_of_wasGravity_35() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___wasGravity_35)); }
	inline bool get_wasGravity_35() const { return ___wasGravity_35; }
	inline bool* get_address_of_wasGravity_35() { return &___wasGravity_35; }
	inline void set_wasGravity_35(bool value)
	{
		___wasGravity_35 = value;
	}

	inline static int32_t get_offset_of_wasKinematic_36() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___wasKinematic_36)); }
	inline bool get_wasKinematic_36() const { return ___wasKinematic_36; }
	inline bool* get_address_of_wasKinematic_36() { return &___wasKinematic_36; }
	inline void set_wasKinematic_36(bool value)
	{
		___wasKinematic_36 = value;
	}

	inline static int32_t get_offset_of_leftHandRotation_37() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___leftHandRotation_37)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftHandRotation_37() const { return ___leftHandRotation_37; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftHandRotation_37() { return &___leftHandRotation_37; }
	inline void set_leftHandRotation_37(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftHandRotation_37 = value;
	}

	inline static int32_t get_offset_of_rightHandRotation_38() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___rightHandRotation_38)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightHandRotation_38() const { return ___rightHandRotation_38; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightHandRotation_38() { return &___rightHandRotation_38; }
	inline void set_rightHandRotation_38(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightHandRotation_38 = value;
	}

	inline static int32_t get_offset_of_hasFirstPointerDraggedThisFrame_39() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___hasFirstPointerDraggedThisFrame_39)); }
	inline bool get_hasFirstPointerDraggedThisFrame_39() const { return ___hasFirstPointerDraggedThisFrame_39; }
	inline bool* get_address_of_hasFirstPointerDraggedThisFrame_39() { return &___hasFirstPointerDraggedThisFrame_39; }
	inline void set_hasFirstPointerDraggedThisFrame_39(bool value)
	{
		___hasFirstPointerDraggedThisFrame_39 = value;
	}

	inline static int32_t get_offset_of_handPositionMap_40() { return static_cast<int32_t>(offsetof(ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656, ___handPositionMap_40)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handPositionMap_40() const { return ___handPositionMap_40; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handPositionMap_40() { return &___handPositionMap_40; }
	inline void set_handPositionMap_40(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handPositionMap_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPositionMap_40), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbRoot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___thumbRoot_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::isTouchable
	bool ___isTouchable_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::snapToPosition
	bool ___snapToPosition_6;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___thumbCollider_7;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.PinchSlider::touchCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___touchCollider_8;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderValue
	float ___sliderValue_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::useSliderStepDivisions
	bool ___useSliderStepDivisions_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderStepDivisions
	int32_t ___sliderStepDivisions_11;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::trackVisuals
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___trackVisuals_12;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::tickMarks
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tickMarks_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbVisuals
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___thumbVisuals_14;
	// Microsoft.MixedReality.Toolkit.UI.SliderAxis Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderAxis
	int32_t ___sliderAxis_15;
	// System.Nullable`1<Microsoft.MixedReality.Toolkit.UI.SliderAxis> Microsoft.MixedReality.Toolkit.UI.PinchSlider::previousSliderAxis
	Nullable_1_tEBA619FFFF5BA65CE4FD3077BCF50907B86612D1  ___previousSliderAxis_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderStartDistance
	float ___sliderStartDistance_17;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderEndDistance
	float ___sliderEndDistance_18;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnValueUpdated
	SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * ___OnValueUpdated_19;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnInteractionStarted
	SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * ___OnInteractionStarted_20;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnInteractionEnded
	SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * ___OnInteractionEnded_21;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnHoverEntered
	SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * ___OnHoverEntered_22;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnHoverExited
	SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * ___OnHoverExited_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderThumbOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___sliderThumbOffset_24;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::<StartSliderValue>k__BackingField
	float ___U3CStartSliderValueU3Ek__BackingField_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::<StartPointerPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CStartPointerPositionU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.PinchSlider::<ActivePointer>k__BackingField
	RuntimeObject* ___U3CActivePointerU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_thumbRoot_4() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___thumbRoot_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_thumbRoot_4() const { return ___thumbRoot_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_thumbRoot_4() { return &___thumbRoot_4; }
	inline void set_thumbRoot_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___thumbRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbRoot_4), (void*)value);
	}

	inline static int32_t get_offset_of_isTouchable_5() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___isTouchable_5)); }
	inline bool get_isTouchable_5() const { return ___isTouchable_5; }
	inline bool* get_address_of_isTouchable_5() { return &___isTouchable_5; }
	inline void set_isTouchable_5(bool value)
	{
		___isTouchable_5 = value;
	}

	inline static int32_t get_offset_of_snapToPosition_6() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___snapToPosition_6)); }
	inline bool get_snapToPosition_6() const { return ___snapToPosition_6; }
	inline bool* get_address_of_snapToPosition_6() { return &___snapToPosition_6; }
	inline void set_snapToPosition_6(bool value)
	{
		___snapToPosition_6 = value;
	}

	inline static int32_t get_offset_of_thumbCollider_7() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___thumbCollider_7)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_thumbCollider_7() const { return ___thumbCollider_7; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_thumbCollider_7() { return &___thumbCollider_7; }
	inline void set_thumbCollider_7(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___thumbCollider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbCollider_7), (void*)value);
	}

	inline static int32_t get_offset_of_touchCollider_8() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___touchCollider_8)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_touchCollider_8() const { return ___touchCollider_8; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_touchCollider_8() { return &___touchCollider_8; }
	inline void set_touchCollider_8(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___touchCollider_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchCollider_8), (void*)value);
	}

	inline static int32_t get_offset_of_sliderValue_9() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___sliderValue_9)); }
	inline float get_sliderValue_9() const { return ___sliderValue_9; }
	inline float* get_address_of_sliderValue_9() { return &___sliderValue_9; }
	inline void set_sliderValue_9(float value)
	{
		___sliderValue_9 = value;
	}

	inline static int32_t get_offset_of_useSliderStepDivisions_10() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___useSliderStepDivisions_10)); }
	inline bool get_useSliderStepDivisions_10() const { return ___useSliderStepDivisions_10; }
	inline bool* get_address_of_useSliderStepDivisions_10() { return &___useSliderStepDivisions_10; }
	inline void set_useSliderStepDivisions_10(bool value)
	{
		___useSliderStepDivisions_10 = value;
	}

	inline static int32_t get_offset_of_sliderStepDivisions_11() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___sliderStepDivisions_11)); }
	inline int32_t get_sliderStepDivisions_11() const { return ___sliderStepDivisions_11; }
	inline int32_t* get_address_of_sliderStepDivisions_11() { return &___sliderStepDivisions_11; }
	inline void set_sliderStepDivisions_11(int32_t value)
	{
		___sliderStepDivisions_11 = value;
	}

	inline static int32_t get_offset_of_trackVisuals_12() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___trackVisuals_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_trackVisuals_12() const { return ___trackVisuals_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_trackVisuals_12() { return &___trackVisuals_12; }
	inline void set_trackVisuals_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___trackVisuals_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackVisuals_12), (void*)value);
	}

	inline static int32_t get_offset_of_tickMarks_13() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___tickMarks_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tickMarks_13() const { return ___tickMarks_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tickMarks_13() { return &___tickMarks_13; }
	inline void set_tickMarks_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tickMarks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tickMarks_13), (void*)value);
	}

	inline static int32_t get_offset_of_thumbVisuals_14() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___thumbVisuals_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_thumbVisuals_14() const { return ___thumbVisuals_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_thumbVisuals_14() { return &___thumbVisuals_14; }
	inline void set_thumbVisuals_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___thumbVisuals_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbVisuals_14), (void*)value);
	}

	inline static int32_t get_offset_of_sliderAxis_15() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___sliderAxis_15)); }
	inline int32_t get_sliderAxis_15() const { return ___sliderAxis_15; }
	inline int32_t* get_address_of_sliderAxis_15() { return &___sliderAxis_15; }
	inline void set_sliderAxis_15(int32_t value)
	{
		___sliderAxis_15 = value;
	}

	inline static int32_t get_offset_of_previousSliderAxis_16() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___previousSliderAxis_16)); }
	inline Nullable_1_tEBA619FFFF5BA65CE4FD3077BCF50907B86612D1  get_previousSliderAxis_16() const { return ___previousSliderAxis_16; }
	inline Nullable_1_tEBA619FFFF5BA65CE4FD3077BCF50907B86612D1 * get_address_of_previousSliderAxis_16() { return &___previousSliderAxis_16; }
	inline void set_previousSliderAxis_16(Nullable_1_tEBA619FFFF5BA65CE4FD3077BCF50907B86612D1  value)
	{
		___previousSliderAxis_16 = value;
	}

	inline static int32_t get_offset_of_sliderStartDistance_17() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___sliderStartDistance_17)); }
	inline float get_sliderStartDistance_17() const { return ___sliderStartDistance_17; }
	inline float* get_address_of_sliderStartDistance_17() { return &___sliderStartDistance_17; }
	inline void set_sliderStartDistance_17(float value)
	{
		___sliderStartDistance_17 = value;
	}

	inline static int32_t get_offset_of_sliderEndDistance_18() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___sliderEndDistance_18)); }
	inline float get_sliderEndDistance_18() const { return ___sliderEndDistance_18; }
	inline float* get_address_of_sliderEndDistance_18() { return &___sliderEndDistance_18; }
	inline void set_sliderEndDistance_18(float value)
	{
		___sliderEndDistance_18 = value;
	}

	inline static int32_t get_offset_of_OnValueUpdated_19() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___OnValueUpdated_19)); }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * get_OnValueUpdated_19() const { return ___OnValueUpdated_19; }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C ** get_address_of_OnValueUpdated_19() { return &___OnValueUpdated_19; }
	inline void set_OnValueUpdated_19(SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * value)
	{
		___OnValueUpdated_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValueUpdated_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnInteractionStarted_20() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___OnInteractionStarted_20)); }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * get_OnInteractionStarted_20() const { return ___OnInteractionStarted_20; }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C ** get_address_of_OnInteractionStarted_20() { return &___OnInteractionStarted_20; }
	inline void set_OnInteractionStarted_20(SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * value)
	{
		___OnInteractionStarted_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInteractionStarted_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnInteractionEnded_21() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___OnInteractionEnded_21)); }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * get_OnInteractionEnded_21() const { return ___OnInteractionEnded_21; }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C ** get_address_of_OnInteractionEnded_21() { return &___OnInteractionEnded_21; }
	inline void set_OnInteractionEnded_21(SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * value)
	{
		___OnInteractionEnded_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInteractionEnded_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnHoverEntered_22() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___OnHoverEntered_22)); }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * get_OnHoverEntered_22() const { return ___OnHoverEntered_22; }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C ** get_address_of_OnHoverEntered_22() { return &___OnHoverEntered_22; }
	inline void set_OnHoverEntered_22(SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * value)
	{
		___OnHoverEntered_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHoverEntered_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnHoverExited_23() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___OnHoverExited_23)); }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * get_OnHoverExited_23() const { return ___OnHoverExited_23; }
	inline SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C ** get_address_of_OnHoverExited_23() { return &___OnHoverExited_23; }
	inline void set_OnHoverExited_23(SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * value)
	{
		___OnHoverExited_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHoverExited_23), (void*)value);
	}

	inline static int32_t get_offset_of_sliderThumbOffset_24() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___sliderThumbOffset_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_sliderThumbOffset_24() const { return ___sliderThumbOffset_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_sliderThumbOffset_24() { return &___sliderThumbOffset_24; }
	inline void set_sliderThumbOffset_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___sliderThumbOffset_24 = value;
	}

	inline static int32_t get_offset_of_U3CStartSliderValueU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___U3CStartSliderValueU3Ek__BackingField_25)); }
	inline float get_U3CStartSliderValueU3Ek__BackingField_25() const { return ___U3CStartSliderValueU3Ek__BackingField_25; }
	inline float* get_address_of_U3CStartSliderValueU3Ek__BackingField_25() { return &___U3CStartSliderValueU3Ek__BackingField_25; }
	inline void set_U3CStartSliderValueU3Ek__BackingField_25(float value)
	{
		___U3CStartSliderValueU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CStartPointerPositionU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___U3CStartPointerPositionU3Ek__BackingField_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CStartPointerPositionU3Ek__BackingField_26() const { return ___U3CStartPointerPositionU3Ek__BackingField_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CStartPointerPositionU3Ek__BackingField_26() { return &___U3CStartPointerPositionU3Ek__BackingField_26; }
	inline void set_U3CStartPointerPositionU3Ek__BackingField_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CStartPointerPositionU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CActivePointerU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A, ___U3CActivePointerU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CActivePointerU3Ek__BackingField_27() const { return ___U3CActivePointerU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CActivePointerU3Ek__BackingField_27() { return &___U3CActivePointerU3Ek__BackingField_27; }
	inline void set_U3CActivePointerU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CActivePointerU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActivePointerU3Ek__BackingField_27), (void*)value);
	}
};


// PolyExtruder
struct PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String PolyExtruder::prismName
	String_t* ___prismName_4;
	// UnityEngine.Color32 PolyExtruder::prismColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___prismColor_5;
	// System.Single PolyExtruder::polygonArea
	float ___polygonArea_6;
	// UnityEngine.Vector2 PolyExtruder::polygonCentroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___polygonCentroid_7;
	// System.Boolean PolyExtruder::isOutlineRendered
	bool ___isOutlineRendered_8;
	// System.Single PolyExtruder::outlineWidth
	float ___outlineWidth_9;
	// UnityEngine.Color PolyExtruder::outlineColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___outlineColor_10;
	// System.Boolean PolyExtruder::is3D
	bool ___is3D_11;
	// System.Single PolyExtruder::extrusionHeightY
	float ___extrusionHeightY_14;
	// UnityEngine.Vector2[] PolyExtruder::originalPolygonVertices
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___originalPolygonVertices_15;
	// UnityEngine.Mesh PolyExtruder::bottomMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___bottomMesh_16;
	// UnityEngine.Mesh PolyExtruder::topMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___topMesh_17;
	// UnityEngine.Mesh PolyExtruder::surroundMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___surroundMesh_18;
	// UnityEngine.MeshRenderer PolyExtruder::bottomMeshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___bottomMeshRenderer_19;
	// UnityEngine.MeshRenderer PolyExtruder::topMeshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___topMeshRenderer_20;
	// UnityEngine.MeshRenderer PolyExtruder::surroundMeshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___surroundMeshRenderer_21;

public:
	inline static int32_t get_offset_of_prismName_4() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___prismName_4)); }
	inline String_t* get_prismName_4() const { return ___prismName_4; }
	inline String_t** get_address_of_prismName_4() { return &___prismName_4; }
	inline void set_prismName_4(String_t* value)
	{
		___prismName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prismName_4), (void*)value);
	}

	inline static int32_t get_offset_of_prismColor_5() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___prismColor_5)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_prismColor_5() const { return ___prismColor_5; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_prismColor_5() { return &___prismColor_5; }
	inline void set_prismColor_5(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___prismColor_5 = value;
	}

	inline static int32_t get_offset_of_polygonArea_6() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___polygonArea_6)); }
	inline float get_polygonArea_6() const { return ___polygonArea_6; }
	inline float* get_address_of_polygonArea_6() { return &___polygonArea_6; }
	inline void set_polygonArea_6(float value)
	{
		___polygonArea_6 = value;
	}

	inline static int32_t get_offset_of_polygonCentroid_7() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___polygonCentroid_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_polygonCentroid_7() const { return ___polygonCentroid_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_polygonCentroid_7() { return &___polygonCentroid_7; }
	inline void set_polygonCentroid_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___polygonCentroid_7 = value;
	}

	inline static int32_t get_offset_of_isOutlineRendered_8() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___isOutlineRendered_8)); }
	inline bool get_isOutlineRendered_8() const { return ___isOutlineRendered_8; }
	inline bool* get_address_of_isOutlineRendered_8() { return &___isOutlineRendered_8; }
	inline void set_isOutlineRendered_8(bool value)
	{
		___isOutlineRendered_8 = value;
	}

	inline static int32_t get_offset_of_outlineWidth_9() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___outlineWidth_9)); }
	inline float get_outlineWidth_9() const { return ___outlineWidth_9; }
	inline float* get_address_of_outlineWidth_9() { return &___outlineWidth_9; }
	inline void set_outlineWidth_9(float value)
	{
		___outlineWidth_9 = value;
	}

	inline static int32_t get_offset_of_outlineColor_10() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___outlineColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_outlineColor_10() const { return ___outlineColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_outlineColor_10() { return &___outlineColor_10; }
	inline void set_outlineColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___outlineColor_10 = value;
	}

	inline static int32_t get_offset_of_is3D_11() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___is3D_11)); }
	inline bool get_is3D_11() const { return ___is3D_11; }
	inline bool* get_address_of_is3D_11() { return &___is3D_11; }
	inline void set_is3D_11(bool value)
	{
		___is3D_11 = value;
	}

	inline static int32_t get_offset_of_extrusionHeightY_14() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___extrusionHeightY_14)); }
	inline float get_extrusionHeightY_14() const { return ___extrusionHeightY_14; }
	inline float* get_address_of_extrusionHeightY_14() { return &___extrusionHeightY_14; }
	inline void set_extrusionHeightY_14(float value)
	{
		___extrusionHeightY_14 = value;
	}

	inline static int32_t get_offset_of_originalPolygonVertices_15() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___originalPolygonVertices_15)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_originalPolygonVertices_15() const { return ___originalPolygonVertices_15; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_originalPolygonVertices_15() { return &___originalPolygonVertices_15; }
	inline void set_originalPolygonVertices_15(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___originalPolygonVertices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalPolygonVertices_15), (void*)value);
	}

	inline static int32_t get_offset_of_bottomMesh_16() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___bottomMesh_16)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_bottomMesh_16() const { return ___bottomMesh_16; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_bottomMesh_16() { return &___bottomMesh_16; }
	inline void set_bottomMesh_16(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___bottomMesh_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bottomMesh_16), (void*)value);
	}

	inline static int32_t get_offset_of_topMesh_17() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___topMesh_17)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_topMesh_17() const { return ___topMesh_17; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_topMesh_17() { return &___topMesh_17; }
	inline void set_topMesh_17(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___topMesh_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topMesh_17), (void*)value);
	}

	inline static int32_t get_offset_of_surroundMesh_18() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___surroundMesh_18)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_surroundMesh_18() const { return ___surroundMesh_18; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_surroundMesh_18() { return &___surroundMesh_18; }
	inline void set_surroundMesh_18(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___surroundMesh_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surroundMesh_18), (void*)value);
	}

	inline static int32_t get_offset_of_bottomMeshRenderer_19() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___bottomMeshRenderer_19)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_bottomMeshRenderer_19() const { return ___bottomMeshRenderer_19; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_bottomMeshRenderer_19() { return &___bottomMeshRenderer_19; }
	inline void set_bottomMeshRenderer_19(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___bottomMeshRenderer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bottomMeshRenderer_19), (void*)value);
	}

	inline static int32_t get_offset_of_topMeshRenderer_20() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___topMeshRenderer_20)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_topMeshRenderer_20() const { return ___topMeshRenderer_20; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_topMeshRenderer_20() { return &___topMeshRenderer_20; }
	inline void set_topMeshRenderer_20(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___topMeshRenderer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topMeshRenderer_20), (void*)value);
	}

	inline static int32_t get_offset_of_surroundMeshRenderer_21() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB, ___surroundMeshRenderer_21)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_surroundMeshRenderer_21() const { return ___surroundMeshRenderer_21; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_surroundMeshRenderer_21() { return &___surroundMeshRenderer_21; }
	inline void set_surroundMeshRenderer_21(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___surroundMeshRenderer_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surroundMeshRenderer_21), (void*)value);
	}
};

struct PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields
{
public:
	// System.Single PolyExtruder::DEFAULT_BOTTOM_Y
	float ___DEFAULT_BOTTOM_Y_12;
	// System.Single PolyExtruder::DEFAULT_TOP_Y
	float ___DEFAULT_TOP_Y_13;

public:
	inline static int32_t get_offset_of_DEFAULT_BOTTOM_Y_12() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields, ___DEFAULT_BOTTOM_Y_12)); }
	inline float get_DEFAULT_BOTTOM_Y_12() const { return ___DEFAULT_BOTTOM_Y_12; }
	inline float* get_address_of_DEFAULT_BOTTOM_Y_12() { return &___DEFAULT_BOTTOM_Y_12; }
	inline void set_DEFAULT_BOTTOM_Y_12(float value)
	{
		___DEFAULT_BOTTOM_Y_12 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_TOP_Y_13() { return static_cast<int32_t>(offsetof(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields, ___DEFAULT_TOP_Y_13)); }
	inline float get_DEFAULT_TOP_Y_13() const { return ___DEFAULT_TOP_Y_13; }
	inline float* get_address_of_DEFAULT_TOP_Y_13() { return &___DEFAULT_TOP_Y_13; }
	inline void set_DEFAULT_TOP_Y_13(float value)
	{
		___DEFAULT_TOP_Y_13 = value;
	}
};


// PolyExtruderDemo
struct PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PolyExtruderDemo/ExampleData PolyExtruderDemo::exampleData
	int32_t ___exampleData_4;
	// System.Boolean PolyExtruderDemo::isOutlineRendered
	bool ___isOutlineRendered_5;
	// System.Boolean PolyExtruderDemo::is3D
	bool ___is3D_6;
	// System.Boolean PolyExtruderDemo::enableMovement
	bool ___enableMovement_7;
	// System.Single PolyExtruderDemo::extrusionHeight
	float ___extrusionHeight_8;
	// PolyExtruder PolyExtruderDemo::polyExtruder
	PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * ___polyExtruder_9;

public:
	inline static int32_t get_offset_of_exampleData_4() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D, ___exampleData_4)); }
	inline int32_t get_exampleData_4() const { return ___exampleData_4; }
	inline int32_t* get_address_of_exampleData_4() { return &___exampleData_4; }
	inline void set_exampleData_4(int32_t value)
	{
		___exampleData_4 = value;
	}

	inline static int32_t get_offset_of_isOutlineRendered_5() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D, ___isOutlineRendered_5)); }
	inline bool get_isOutlineRendered_5() const { return ___isOutlineRendered_5; }
	inline bool* get_address_of_isOutlineRendered_5() { return &___isOutlineRendered_5; }
	inline void set_isOutlineRendered_5(bool value)
	{
		___isOutlineRendered_5 = value;
	}

	inline static int32_t get_offset_of_is3D_6() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D, ___is3D_6)); }
	inline bool get_is3D_6() const { return ___is3D_6; }
	inline bool* get_address_of_is3D_6() { return &___is3D_6; }
	inline void set_is3D_6(bool value)
	{
		___is3D_6 = value;
	}

	inline static int32_t get_offset_of_enableMovement_7() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D, ___enableMovement_7)); }
	inline bool get_enableMovement_7() const { return ___enableMovement_7; }
	inline bool* get_address_of_enableMovement_7() { return &___enableMovement_7; }
	inline void set_enableMovement_7(bool value)
	{
		___enableMovement_7 = value;
	}

	inline static int32_t get_offset_of_extrusionHeight_8() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D, ___extrusionHeight_8)); }
	inline float get_extrusionHeight_8() const { return ___extrusionHeight_8; }
	inline float* get_address_of_extrusionHeight_8() { return &___extrusionHeight_8; }
	inline void set_extrusionHeight_8(float value)
	{
		___extrusionHeight_8 = value;
	}

	inline static int32_t get_offset_of_polyExtruder_9() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D, ___polyExtruder_9)); }
	inline PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * get_polyExtruder_9() const { return ___polyExtruder_9; }
	inline PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB ** get_address_of_polyExtruder_9() { return &___polyExtruder_9; }
	inline void set_polyExtruder_9(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * value)
	{
		___polyExtruder_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polyExtruder_9), (void*)value);
	}
};

struct PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields
{
public:
	// UnityEngine.Vector2[] PolyExtruderDemo::MeshDataTriangle
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___MeshDataTriangle_10;
	// UnityEngine.Vector2[] PolyExtruderDemo::MeshDataSquare
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___MeshDataSquare_11;
	// UnityEngine.Vector2[] PolyExtruderDemo::MeshDataCross
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___MeshDataCross_12;
	// UnityEngine.Vector2[] PolyExtruderDemo::MeshDataGotland
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___MeshDataGotland_13;

public:
	inline static int32_t get_offset_of_MeshDataTriangle_10() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields, ___MeshDataTriangle_10)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_MeshDataTriangle_10() const { return ___MeshDataTriangle_10; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_MeshDataTriangle_10() { return &___MeshDataTriangle_10; }
	inline void set_MeshDataTriangle_10(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___MeshDataTriangle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeshDataTriangle_10), (void*)value);
	}

	inline static int32_t get_offset_of_MeshDataSquare_11() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields, ___MeshDataSquare_11)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_MeshDataSquare_11() const { return ___MeshDataSquare_11; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_MeshDataSquare_11() { return &___MeshDataSquare_11; }
	inline void set_MeshDataSquare_11(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___MeshDataSquare_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeshDataSquare_11), (void*)value);
	}

	inline static int32_t get_offset_of_MeshDataCross_12() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields, ___MeshDataCross_12)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_MeshDataCross_12() const { return ___MeshDataCross_12; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_MeshDataCross_12() { return &___MeshDataCross_12; }
	inline void set_MeshDataCross_12(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___MeshDataCross_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeshDataCross_12), (void*)value);
	}

	inline static int32_t get_offset_of_MeshDataGotland_13() { return static_cast<int32_t>(offsetof(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields, ___MeshDataGotland_13)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_MeshDataGotland_13() const { return ___MeshDataGotland_13; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_MeshDataGotland_13() { return &___MeshDataGotland_13; }
	inline void set_MeshDataGotland_13(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___MeshDataGotland_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeshDataGotland_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.TransformConstraint
struct TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.TransformConstraint::handType
	int32_t ___handType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags Microsoft.MixedReality.Toolkit.UI.TransformConstraint::proximityType
	int32_t ___proximityType_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.TransformConstraint::executionOrder
	int32_t ___executionOrder_6;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.UI.TransformConstraint::worldPoseOnManipulationStart
	MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  ___worldPoseOnManipulationStart_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.TransformConstraint::<TargetTransform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTargetTransformU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_handType_4() { return static_cast<int32_t>(offsetof(TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268, ___handType_4)); }
	inline int32_t get_handType_4() const { return ___handType_4; }
	inline int32_t* get_address_of_handType_4() { return &___handType_4; }
	inline void set_handType_4(int32_t value)
	{
		___handType_4 = value;
	}

	inline static int32_t get_offset_of_proximityType_5() { return static_cast<int32_t>(offsetof(TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268, ___proximityType_5)); }
	inline int32_t get_proximityType_5() const { return ___proximityType_5; }
	inline int32_t* get_address_of_proximityType_5() { return &___proximityType_5; }
	inline void set_proximityType_5(int32_t value)
	{
		___proximityType_5 = value;
	}

	inline static int32_t get_offset_of_executionOrder_6() { return static_cast<int32_t>(offsetof(TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268, ___executionOrder_6)); }
	inline int32_t get_executionOrder_6() const { return ___executionOrder_6; }
	inline int32_t* get_address_of_executionOrder_6() { return &___executionOrder_6; }
	inline void set_executionOrder_6(int32_t value)
	{
		___executionOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPoseOnManipulationStart_7() { return static_cast<int32_t>(offsetof(TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268, ___worldPoseOnManipulationStart_7)); }
	inline MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  get_worldPoseOnManipulationStart_7() const { return ___worldPoseOnManipulationStart_7; }
	inline MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813 * get_address_of_worldPoseOnManipulationStart_7() { return &___worldPoseOnManipulationStart_7; }
	inline void set_worldPoseOnManipulationStart_7(MixedRealityTransform_t13A39998910019B9872B4DCAB31B005A2A46A813  value)
	{
		___worldPoseOnManipulationStart_7 = value;
	}

	inline static int32_t get_offset_of_U3CTargetTransformU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268, ___U3CTargetTransformU3Ek__BackingField_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CTargetTransformU3Ek__BackingField_8() const { return ___U3CTargetTransformU3Ek__BackingField_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CTargetTransformU3Ek__BackingField_8() { return &___U3CTargetTransformU3Ek__BackingField_8; }
	inline void set_U3CTargetTransformU3Ek__BackingField_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CTargetTransformU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetTransformU3Ek__BackingField_8), (void*)value);
	}
};


// TriangulationTest
struct TriangulationTest_t19A4B647529A71B39C97DC502B8F585795AFFE90  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// control
struct control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 control::objNo
	int32_t ___objNo_4;
	// System.String control::mode
	String_t* ___mode_5;
	// System.Int32 control::axis
	int32_t ___axis_6;
	// UnityEngine.GameObject control::currObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currObj_7;
	// UnityEngine.GameObject control::canva
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canva_8;
	// System.Int32 control::edge
	int32_t ___edge_9;

public:
	inline static int32_t get_offset_of_objNo_4() { return static_cast<int32_t>(offsetof(control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896, ___objNo_4)); }
	inline int32_t get_objNo_4() const { return ___objNo_4; }
	inline int32_t* get_address_of_objNo_4() { return &___objNo_4; }
	inline void set_objNo_4(int32_t value)
	{
		___objNo_4 = value;
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896, ___mode_5)); }
	inline String_t* get_mode_5() const { return ___mode_5; }
	inline String_t** get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(String_t* value)
	{
		___mode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mode_5), (void*)value);
	}

	inline static int32_t get_offset_of_axis_6() { return static_cast<int32_t>(offsetof(control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896, ___axis_6)); }
	inline int32_t get_axis_6() const { return ___axis_6; }
	inline int32_t* get_address_of_axis_6() { return &___axis_6; }
	inline void set_axis_6(int32_t value)
	{
		___axis_6 = value;
	}

	inline static int32_t get_offset_of_currObj_7() { return static_cast<int32_t>(offsetof(control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896, ___currObj_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currObj_7() const { return ___currObj_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currObj_7() { return &___currObj_7; }
	inline void set_currObj_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currObj_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currObj_7), (void*)value);
	}

	inline static int32_t get_offset_of_canva_8() { return static_cast<int32_t>(offsetof(control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896, ___canva_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canva_8() const { return ___canva_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canva_8() { return &___canva_8; }
	inline void set_canva_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canva_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canva_8), (void*)value);
	}

	inline static int32_t get_offset_of_edge_9() { return static_cast<int32_t>(offsetof(control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896, ___edge_9)); }
	inline int32_t get_edge_9() const { return ___edge_9; }
	inline int32_t* get_address_of_edge_9() { return &___edge_9; }
	inline void set_edge_9(int32_t value)
	{
		___edge_9 = value;
	}
};


// data
struct data_tDBBD5A62F2E51BEE551958926AE2116476A46E42  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single data::lenX
	float ___lenX_4;
	// System.Single data::lenY
	float ___lenY_5;
	// System.Single data::lenZ
	float ___lenZ_6;
	// System.Single data::vol
	float ___vol_7;
	// System.String data::s
	String_t* ___s_8;
	// System.Single data::scale
	float ___scale_9;

public:
	inline static int32_t get_offset_of_lenX_4() { return static_cast<int32_t>(offsetof(data_tDBBD5A62F2E51BEE551958926AE2116476A46E42, ___lenX_4)); }
	inline float get_lenX_4() const { return ___lenX_4; }
	inline float* get_address_of_lenX_4() { return &___lenX_4; }
	inline void set_lenX_4(float value)
	{
		___lenX_4 = value;
	}

	inline static int32_t get_offset_of_lenY_5() { return static_cast<int32_t>(offsetof(data_tDBBD5A62F2E51BEE551958926AE2116476A46E42, ___lenY_5)); }
	inline float get_lenY_5() const { return ___lenY_5; }
	inline float* get_address_of_lenY_5() { return &___lenY_5; }
	inline void set_lenY_5(float value)
	{
		___lenY_5 = value;
	}

	inline static int32_t get_offset_of_lenZ_6() { return static_cast<int32_t>(offsetof(data_tDBBD5A62F2E51BEE551958926AE2116476A46E42, ___lenZ_6)); }
	inline float get_lenZ_6() const { return ___lenZ_6; }
	inline float* get_address_of_lenZ_6() { return &___lenZ_6; }
	inline void set_lenZ_6(float value)
	{
		___lenZ_6 = value;
	}

	inline static int32_t get_offset_of_vol_7() { return static_cast<int32_t>(offsetof(data_tDBBD5A62F2E51BEE551958926AE2116476A46E42, ___vol_7)); }
	inline float get_vol_7() const { return ___vol_7; }
	inline float* get_address_of_vol_7() { return &___vol_7; }
	inline void set_vol_7(float value)
	{
		___vol_7 = value;
	}

	inline static int32_t get_offset_of_s_8() { return static_cast<int32_t>(offsetof(data_tDBBD5A62F2E51BEE551958926AE2116476A46E42, ___s_8)); }
	inline String_t* get_s_8() const { return ___s_8; }
	inline String_t** get_address_of_s_8() { return &___s_8; }
	inline void set_s_8(String_t* value)
	{
		___s_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_8), (void*)value);
	}

	inline static int32_t get_offset_of_scale_9() { return static_cast<int32_t>(offsetof(data_tDBBD5A62F2E51BEE551958926AE2116476A46E42, ___scale_9)); }
	inline float get_scale_9() const { return ___scale_9; }
	inline float* get_address_of_scale_9() { return &___scale_9; }
	inline void set_scale_9(float value)
	{
		___scale_9 = value;
	}
};


// gen
struct gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject gen::obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj_4;
	// UnityEngine.Mesh gen::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_5;
	// UnityEngine.Vector3[] gen::vert
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vert_6;
	// System.Int32[] gen::trig
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___trig_7;
	// System.Int32 gen::edge
	int32_t ___edge_8;

public:
	inline static int32_t get_offset_of_obj_4() { return static_cast<int32_t>(offsetof(gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557, ___obj_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_obj_4() const { return ___obj_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_obj_4() { return &___obj_4; }
	inline void set_obj_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___obj_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_4), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_5() { return static_cast<int32_t>(offsetof(gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557, ___mesh_5)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_5() const { return ___mesh_5; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_5() { return &___mesh_5; }
	inline void set_mesh_5(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_5), (void*)value);
	}

	inline static int32_t get_offset_of_vert_6() { return static_cast<int32_t>(offsetof(gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557, ___vert_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vert_6() const { return ___vert_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vert_6() { return &___vert_6; }
	inline void set_vert_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vert_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vert_6), (void*)value);
	}

	inline static int32_t get_offset_of_trig_7() { return static_cast<int32_t>(offsetof(gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557, ___trig_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_trig_7() const { return ___trig_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_trig_7() { return &___trig_7; }
	inline void set_trig_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___trig_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trig_7), (void*)value);
	}

	inline static int32_t get_offset_of_edge_8() { return static_cast<int32_t>(offsetof(gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557, ___edge_8)); }
	inline int32_t get_edge_8() const { return ___edge_8; }
	inline int32_t* get_address_of_edge_8() { return &___edge_8; }
	inline void set_edge_8(int32_t value)
	{
		___edge_8 = value;
	}
};


// sliderScript
struct sliderScript_tDEDAA3A05EFA9DA68C25302754C9F25D9191272A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider sliderScript::slid
	PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A * ___slid_4;
	// UnityEngine.GameObject sliderScript::con
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___con_5;
	// UnityEngine.UI.Text sliderScript::txt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txt_6;

public:
	inline static int32_t get_offset_of_slid_4() { return static_cast<int32_t>(offsetof(sliderScript_tDEDAA3A05EFA9DA68C25302754C9F25D9191272A, ___slid_4)); }
	inline PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A * get_slid_4() const { return ___slid_4; }
	inline PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A ** get_address_of_slid_4() { return &___slid_4; }
	inline void set_slid_4(PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A * value)
	{
		___slid_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slid_4), (void*)value);
	}

	inline static int32_t get_offset_of_con_5() { return static_cast<int32_t>(offsetof(sliderScript_tDEDAA3A05EFA9DA68C25302754C9F25D9191272A, ___con_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_con_5() const { return ___con_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_con_5() { return &___con_5; }
	inline void set_con_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___con_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___con_5), (void*)value);
	}

	inline static int32_t get_offset_of_txt_6() { return static_cast<int32_t>(offsetof(sliderScript_tDEDAA3A05EFA9DA68C25302754C9F25D9191272A, ___txt_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txt_6() const { return ___txt_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txt_6() { return &___txt_6; }
	inline void set_txt_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txt_6), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.MoveAxisConstraint
struct MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6  : public TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AxisFlags Microsoft.MixedReality.Toolkit.UI.MoveAxisConstraint::constraintOnMovement
	int32_t ___constraintOnMovement_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.MoveAxisConstraint::useLocalSpaceForConstraint
	bool ___useLocalSpaceForConstraint_10;

public:
	inline static int32_t get_offset_of_constraintOnMovement_9() { return static_cast<int32_t>(offsetof(MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6, ___constraintOnMovement_9)); }
	inline int32_t get_constraintOnMovement_9() const { return ___constraintOnMovement_9; }
	inline int32_t* get_address_of_constraintOnMovement_9() { return &___constraintOnMovement_9; }
	inline void set_constraintOnMovement_9(int32_t value)
	{
		___constraintOnMovement_9 = value;
	}

	inline static int32_t get_offset_of_useLocalSpaceForConstraint_10() { return static_cast<int32_t>(offsetof(MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6, ___useLocalSpaceForConstraint_10)); }
	inline bool get_useLocalSpaceForConstraint_10() const { return ___useLocalSpaceForConstraint_10; }
	inline bool* get_address_of_useLocalSpaceForConstraint_10() { return &___useLocalSpaceForConstraint_10; }
	inline void set_useLocalSpaceForConstraint_10(bool value)
	{
		___useLocalSpaceForConstraint_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint
struct RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657  : public TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AxisFlags Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint::constraintOnRotation
	int32_t ___constraintOnRotation_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint::useLocalSpaceForConstraint
	bool ___useLocalSpaceForConstraint_10;

public:
	inline static int32_t get_offset_of_constraintOnRotation_9() { return static_cast<int32_t>(offsetof(RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657, ___constraintOnRotation_9)); }
	inline int32_t get_constraintOnRotation_9() const { return ___constraintOnRotation_9; }
	inline int32_t* get_address_of_constraintOnRotation_9() { return &___constraintOnRotation_9; }
	inline void set_constraintOnRotation_9(int32_t value)
	{
		___constraintOnRotation_9 = value;
	}

	inline static int32_t get_offset_of_useLocalSpaceForConstraint_10() { return static_cast<int32_t>(offsetof(RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657, ___useLocalSpaceForConstraint_10)); }
	inline bool get_useLocalSpaceForConstraint_10() const { return ___useLocalSpaceForConstraint_10; }
	inline bool* get_address_of_useLocalSpaceForConstraint_10() { return &___useLocalSpaceForConstraint_10; }
	inline void set_useLocalSpaceForConstraint_10(bool value)
	{
		___useLocalSpaceForConstraint_10 = value;
	}
};


// cdata
struct cdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA  : public data_tDBBD5A62F2E51BEE551958926AE2116476A46E42
{
public:

public:
};


// crdata
struct crdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30  : public data_tDBBD5A62F2E51BEE551958926AE2116476A46E42
{
public:

public:
};


// pdata
struct pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8  : public data_tDBBD5A62F2E51BEE551958926AE2116476A46E42
{
public:

public:
};


// sdata
struct sdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706  : public data_tDBBD5A62F2E51BEE551958926AE2116476A46E42
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_gshared_inline (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_gshared (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_gshared (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);

// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Boolean PolyExtruder::areVerticesOrderedClockwise(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PolyExtruder_areVerticesOrderedClockwise_mC30C0F7851664AA89E1C413BCC589B4C54701214 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___vertices0, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D (RuntimeArray * ___array0, const RuntimeMethod* method);
// System.Void PolyExtruder::calculateAreaAndCentroid(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_calculateAreaAndCentroid_mAD35E7866ED5CD52F2EFA91C388DF327B4652F6E (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___vertices0, const RuntimeMethod* method);
// System.Void PolyExtruder::initPrism()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_initPrism_m0202C35F3F5FDC22152B373B69852E1A16620978 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::.ctor()
inline void List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20 (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
inline void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared)(__this, ___item0, method);
}
// System.Boolean Triangulation::triangulate(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>,System.Single,System.Collections.Generic.List`1<System.Int32>&,System.Collections.Generic.List`1<UnityEngine.Vector3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulation_triangulate_mB97DB2E02F66AC3728DDD37AFEAB50322F54A6CA (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___points0, List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * ___holes1, float ___vertexY2, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___outIndices3, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** ___outVertices4, const RuntimeMethod* method);
// System.Void PolyExtruder::redrawMesh(UnityEngine.Mesh,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_redrawMesh_mC822D3DF3EB07283795BEBCD109A6D199D422612 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vertices1, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___indices2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406 (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
inline Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_inline (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *, const RuntimeMethod*))Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
inline bool Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *, const RuntimeMethod*))Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
inline void Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *, const RuntimeMethod*))Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void PolyExtruder::updateHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_updateHeight_mC1D09FC32E859B32196C8F88A1D32E266F8718CB (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, float ___height0, const RuntimeMethod* method);
// System.Void PolyExtruder::updateColor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_updateColor_m0B3FD48B4EB0EA6CE91FFB1F51A97147B953F011 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Boolean PolyExtruder::initOutlineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PolyExtruder_initOutlineRenderer_m59AA5426ECFC5129842BFA273744338A23EF8618 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_loop_m27B7884A47BCFBC82952D3FB355DBACE39FC7FFE (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_mD7F470FCD99805F1466E13B64C3F04825DFDBF91 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<PolyExtruder>()
inline PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * GameObject_AddComponent_TisPolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_m6795438BDC1B88EB8DFFAC584D75338087C343C4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA (const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void PolyExtruder::createPrism(System.String,System.Single,UnityEngine.Vector2[],UnityEngine.Color32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_createPrism_mC7592EEAF7FDDBB76674B2A90B14118101330BF5 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, String_t* ___prismName0, float ___height1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___vertices2, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color3, bool ___is3D4, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Polygon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m0D3E417511F7EA9943C0BF75D8FE02AA331F3D93 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline)(__this, ___index0, method);
}
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mF1D1BB39539F7DBD48BF36A8FBE7803701450AA8 (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * __this, double ___x0, double ___y1, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Polygon::Add(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Add_m305462A09C1E595B096452B92D0B3FF28F2B4D12 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___vertex0, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Segment::.ctor(TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_mA5A58D8E95622CDC94F68A3A77F514AE4862EA98 (Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v00, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___v11, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Polygon::Add(TriangleNet.Geometry.ISegment,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Add_m5A1F21BA963DBE52DEDE8E3509C0D8ADA4EDAD8C (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, RuntimeObject* ___segment0, bool ___insert1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::.ctor()
inline void List_1__ctor_mCE920A32488DA981E76A611BF0C46A50D4C6C62C (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::get_Item(System.Int32)
inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_inline (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * (*) (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::Add(!0)
inline void List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274 (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * __this, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB *, Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void TriangleNet.Geometry.Contour::.ctor(System.Collections.Generic.IEnumerable`1<TriangleNet.Geometry.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Contour__ctor_m41C3D7F2719FAAC4C797C078BB54B41A7A0005F7 (Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * __this, RuntimeObject* ___points0, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Polygon::Add(TriangleNet.Geometry.Contour,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Add_m5F77BB572D74DA889AF89ED2BC7F46CC6CAB45C9 (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * __this, Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * ___contour0, bool ___hole1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::get_Count()
inline int32_t List_1_get_Count_mE9BDB711B1ED91FE1DCB0BC41D682F64C83A76D0_inline (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// TriangleNet.Meshing.IMesh TriangleNet.Geometry.ExtensionMethods::Triangulate(TriangleNet.Geometry.IPolygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtensionMethods_Triangulate_m2F8B74048929A142EE518C646B44DBF0DB31EA1F (RuntimeObject* ___polygon0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Double TriangleNet.Geometry.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_m71B7A8403C16415A171F7CA4C345082D63BCF3AD (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, const RuntimeMethod* method);
// System.Double TriangleNet.Geometry.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m378383A2240D4D373A366FC3197B3AD216E3B835 (Point_tAB9479694B17DAB8C40F254299F276D6C88F8E73 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::Add(!0)
inline void List_1_Add_m79EDB6FA3FCAD26B43E0E27CDAC913C8B11AB536 (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * __this, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void data__ctor_m5AE1DD091122076ACC607C938ECAA2B948C18D1F (data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<cdata>()
inline cdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA * GameObject_AddComponent_Tiscdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA_m1299684FEA5A6C6A701A777F3D4A76B73139611E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  cdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SphereCollider>()
inline SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * GameObject_AddComponent_TisSphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_m079E2CEA7DBE56B314D5DE16053AB748D44B2125 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.SphereCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider_set_center_mD5E898A2FED304A82BC67ABB11B60BB0F612CED7 (SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SphereCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider_set_radius_m55A0D144B32871AECC2A83FBCF423FBE1E5A63A0 (SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * __this, float ___value0, const RuntimeMethod* method);
// System.Void control::initializeObj(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_initializeObj_mF6786718B42D9BC7CD54F7D7CE542911CE42DD78 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method);
// System.Void gen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen__ctor_m68B3DCC03F270CE540C47D436C34139BD6ED0547 (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, const RuntimeMethod* method);
// System.Void gen::getObj(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_getObj_m56735E38C98BF6281E6C137BA6EBC7839D1A90EC (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ob0, int32_t ___e1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<pdata>()
inline pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * GameObject_AddComponent_Tispdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8_m03F1A431873ACA3F6CCF323A3D3E2D2198DDB6F4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<sdata>()
inline sdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706 * GameObject_AddComponent_Tissdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706_m4B972E55204A47D84A46A89569655E69FE74F0E1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  sdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<crdata>()
inline crdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30 * GameObject_AddComponent_Tiscrdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30_m93D5F98BCE67D4709315B6E77EEAC186D3E193EB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  crdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator>()
inline ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * GameObject_AddComponent_TisObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656_m28BE61ABE16C00C06E39F076A2E35506414DEA27 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::set_OneHandRotationModeNear(Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectManipulator_set_OneHandRotationModeNear_mD58B1254B0869D1F383CF58E68C850E5DB271A6D_inline (ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::set_OneHandRotationModeFar(Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectManipulator_set_OneHandRotationModeFar_m4A55CFC86659638B64CF15B70923B5F791AE230A_inline (ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::set_TwoHandedManipulationType(Microsoft.MixedReality.Toolkit.Utilities.TransformFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectManipulator_set_TwoHandedManipulationType_m86D4A91ACBAD7BD5737A9AF519F57C7814137C97_inline (ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint>()
inline RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * GameObject_AddComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_mBAEC3A8B0C6AB1361E3AF8B57D941848F8EBED28 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint::set_ConstraintOnRotation(Microsoft.MixedReality.Toolkit.Utilities.AxisFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotationAxisConstraint_set_ConstraintOnRotation_mEBEBBD29B6141D23AD2C01804AFC9082221631B5_inline (RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.MoveAxisConstraint>()
inline MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * GameObject_AddComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m1F85A825A2BF7119515E9C3DF2CAD3F569061DD4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.ConstraintManager>()
inline ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.ConstraintManager::set_AutoConstraintSelection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstraintManager_set_AutoConstraintSelection_m235B808D17BB54DBC9437B75B726A168CA35CFE1_inline (ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UI.ConstraintManager::AddConstraintToManualSelection(Microsoft.MixedReality.Toolkit.UI.TransformConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstraintManager_AddConstraintToManualSelection_m3D81DC1BECAFC5BFFB7F7FE6D32316EA2F6FC86D (ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * __this, TransformConstraint_tECCEF572E96F690886D32554B773D925AC610268 * ___constraint0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>()
inline NearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB * GameObject_AddComponent_TisNearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB_m3B7118383D13B13D4AC811145F0E7DB3230174AD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl>()
inline BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A * GameObject_AddComponent_TisBoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A_m5FBE86F6B3366A2E39022477D835758E76E0072A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::set_BoundsControlActivation(Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsControlActivationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_set_BoundsControlActivation_mEDDFC167EA6FEE430FBFAC802CD488703B4D8FE7 (BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void control::set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_set_m9FD23F2B588E3D6C861E3152D33AC749026621D3 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<data>()
inline data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * GameObject_GetComponent_Tisdata_tDBBD5A62F2E51BEE551958926AE2116476A46E42_mCDDBE05496CF76CA0CE090F22A76E943F173708B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint>()
inline RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * GameObject_GetComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_m752BFB82DE0A7557D392FB5129A3D570A9F53C0B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.MoveAxisConstraint>()
inline MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * GameObject_GetComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m065E88C4E3B2D8C1689CE2513C4CF829320EEBAD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.MoveAxisConstraint::set_ConstraintOnMovement(Microsoft.MixedReality.Toolkit.Utilities.AxisFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveAxisConstraint_set_ConstraintOnMovement_m8F8810F040C6CBA303FAB6E7269BE9FBD42E9D1A_inline (MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Transform::get_hasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_get_hasChanged_m59490E3CAC42DF8CB2BCDFC0ED75DB6F89432F06 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mD1CDCAE366DB514FBECD9DAAED0F7834029E1304 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void gen::createMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_createMesh_m83BB134E9C266EB5C4F2AEDE04897975F6848C16 (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Void gen::createShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_createShape_mE7D9FAE880D1AA404AFAE9B384A1CD6843BAB789 (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, const RuntimeMethod* method);
// System.Void gen::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_UpdateMesh_m2E11693F0CCD15023001798866D8E7E4CFCACA5D (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Single pdata::SignedVolumeOfTriangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pdata_SignedVolumeOfTriangle_mD86E75E02EC6C9E3B80827CD01827D90928F3D81 (pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p21, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p32, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// System.Single pdata::VolumeOfMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pdata_VolumeOfMesh_mB9E0FFB21DED1C5DC0993080F654B7B454AA994E (pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE34B87CB7468D1DA1077450B4DC647805443E959 (UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m88C5B696167573FF9B2668D125CEA3DAFB949CEA (UnityEvent_1_tCF0D8FDD8A5FCB4A9B284159E40A94273B6FC0C2 * __this, UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCF0D8FDD8A5FCB4A9B284159E40A94273B6FC0C2 *, UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::get_NewValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SliderEventData_get_NewValue_m4720B3AFC3DE69DF7B3C6D10801809CB0D05AE35_inline (SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<control>()
inline control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * GameObject_GetComponent_Tiscontrol_t4A4DAD829429C0D41AE49F71182A0C075D2EB896_m635AB4BED71905B001AE02DC4F82681F9040B2E3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void control::setEdge(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void control_setEdge_m53256BCFD38B5AEA771A8C1364071C6EF6C34FDC_inline (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, int32_t ___e0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void PolyExtruder::createPrism(System.String,System.Single,UnityEngine.Vector2[],UnityEngine.Color32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_createPrism_mC7592EEAF7FDDBB76674B2A90B14118101330BF5 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, String_t* ___prismName0, float ___height1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___vertices2, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color3, bool ___is3D4, const RuntimeMethod* method)
{
	{
		// this.prismName = name;
		String_t* L_0;
		L_0 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		__this->set_prismName_4(L_0);
		// this.extrusionHeightY = height;
		float L_1 = ___height1;
		__this->set_extrusionHeightY_14(L_1);
		// this.originalPolygonVertices = vertices;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_2 = ___vertices2;
		__this->set_originalPolygonVertices_15(L_2);
		// this.prismColor = color;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_3 = ___color3;
		__this->set_prismColor_5(L_3);
		// this.polygonArea = 0.0f;
		__this->set_polygonArea_6((0.0f));
		// this.polygonCentroid = new Vector2(0.0f, 0.0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_polygonCentroid_7(L_4);
		// this.is3D = is3D;
		bool L_5 = ___is3D4;
		__this->set_is3D_11(L_5);
		// bool vertexOrderClockwise = areVerticesOrderedClockwise(this.originalPolygonVertices);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = __this->get_originalPolygonVertices_15();
		bool L_7;
		L_7 = PolyExtruder_areVerticesOrderedClockwise_mC30C0F7851664AA89E1C413BCC589B4C54701214(__this, L_6, /*hidden argument*/NULL);
		// if (!vertexOrderClockwise) System.Array.Reverse(this.originalPolygonVertices);
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		// if (!vertexOrderClockwise) System.Array.Reverse(this.originalPolygonVertices);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = __this->get_originalPolygonVertices_15();
		Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D((RuntimeArray *)(RuntimeArray *)L_8, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// calculateAreaAndCentroid(this.originalPolygonVertices);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_9 = __this->get_originalPolygonVertices_15();
		PolyExtruder_calculateAreaAndCentroid_mAD35E7866ED5CD52F2EFA91C388DF327B4652F6E(__this, L_9, /*hidden argument*/NULL);
		// initPrism();
		PolyExtruder_initPrism_m0202C35F3F5FDC22152B373B69852E1A16620978(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean PolyExtruder::areVerticesOrderedClockwise(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PolyExtruder_areVerticesOrderedClockwise_mC30C0F7851664AA89E1C413BCC589B4C54701214 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___vertices0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float edgesSum = 0.0f;
		V_0 = (0.0f);
		// for(int i = 0; i < vertices.Length; i++)
		V_1 = 0;
		goto IL_0088;
	}

IL_000a:
	{
		// if(i+1 == vertices.Length)
		int32_t L_0 = V_1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = ___vertices0;
		NullCheck(L_1);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_004a;
		}
	}
	{
		// edgesSum = edgesSum + (vertices[0].x - vertices[i].x) * (vertices[0].y + vertices[i].y);
		float L_2 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = ___vertices0;
		NullCheck(L_3);
		float L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = ___vertices0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = ___vertices0;
		NullCheck(L_8);
		float L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_10 = ___vertices0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_7)), (float)((float)il2cpp_codegen_add((float)L_9, (float)L_12))))));
		// }
		goto IL_0084;
	}

IL_004a:
	{
		// edgesSum = edgesSum + (vertices[i + 1].x - vertices[i].x) * (vertices[i + 1].y + vertices[i].y);
		float L_13 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = ___vertices0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		float L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)))))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_17 = ___vertices0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		float L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_20 = ___vertices0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		float L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)))))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = ___vertices0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		float L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_19)), (float)((float)il2cpp_codegen_add((float)L_22, (float)L_25))))));
	}

IL_0084:
	{
		// for(int i = 0; i < vertices.Length; i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0088:
	{
		// for(int i = 0; i < vertices.Length; i++)
		int32_t L_27 = V_1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_28 = ___vertices0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// return (edgesSum >= 0.0f) ? true : false;
		float L_29 = V_0;
		if ((((float)L_29) >= ((float)(0.0f))))
		{
			goto IL_009b;
		}
	}
	{
		return (bool)0;
	}

IL_009b:
	{
		return (bool)1;
	}
}
// System.Void PolyExtruder::calculateAreaAndCentroid(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_calculateAreaAndCentroid_mAD35E7866ED5CD52F2EFA91C388DF327B4652F6E (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___vertices0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * G_B8_0 = NULL;
	PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * G_B9_1 = NULL;
	{
		// float doubleArea = 0.0f;
		V_0 = (0.0f);
		// Vector2 centroid = new Vector2(0.0f, 0.0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < vertices.Length; i++)
		V_3 = 0;
		goto IL_021a;
	}

IL_001e:
	{
		// if (i + 1 == vertices.Length)
		int32_t L_0 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = ___vertices0;
		NullCheck(L_1);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_011a;
		}
	}
	{
		// doubleArea = doubleArea + (vertices[i].x * vertices[0].y - vertices[0].x * vertices[i].y);
		float L_2 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = ___vertices0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		float L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = ___vertices0;
		NullCheck(L_6);
		float L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = ___vertices0;
		NullCheck(L_8);
		float L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_10 = ___vertices0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_12))))));
		// centroid.x = centroid.x + ((vertices[i].x + vertices[0].x) * (vertices[i].x * vertices[0].y - vertices[0].x * vertices[i].y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_1;
		float L_14 = L_13.get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_15 = ___vertices0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_18 = ___vertices0;
		NullCheck(L_18);
		float L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_20 = ___vertices0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		float L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = ___vertices0;
		NullCheck(L_23);
		float L_24 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_25 = ___vertices0;
		NullCheck(L_25);
		float L_26 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_27 = ___vertices0;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		float L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_y_1();
		(&V_1)->set_x_0(((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_17, (float)L_19)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_24)), (float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_29)))))))));
		// centroid.y = centroid.y + ((vertices[i].y + vertices[0].y) * (vertices[i].x * vertices[0].y - vertices[0].x * vertices[i].y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_1;
		float L_31 = L_30.get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_32 = ___vertices0;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		float L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_35 = ___vertices0;
		NullCheck(L_35);
		float L_36 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_37 = ___vertices0;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		float L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_40 = ___vertices0;
		NullCheck(L_40);
		float L_41 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_42 = ___vertices0;
		NullCheck(L_42);
		float L_43 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_44 = ___vertices0;
		int32_t L_45 = V_3;
		NullCheck(L_44);
		float L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_y_1();
		(&V_1)->set_y_1(((float)il2cpp_codegen_add((float)L_31, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_34, (float)L_36)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_41)), (float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_46)))))))));
		// }
		goto IL_0216;
	}

IL_011a:
	{
		// doubleArea = doubleArea + (vertices[i].x * vertices[i + 1].y - vertices[i + 1].x * vertices[i].y);
		float L_47 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_48 = ___vertices0;
		int32_t L_49 = V_3;
		NullCheck(L_48);
		float L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_51 = ___vertices0;
		int32_t L_52 = V_3;
		NullCheck(L_51);
		float L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)))))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_54 = ___vertices0;
		int32_t L_55 = V_3;
		NullCheck(L_54);
		float L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)))))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_57 = ___vertices0;
		int32_t L_58 = V_3;
		NullCheck(L_57);
		float L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)L_47, (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_50, (float)L_53)), (float)((float)il2cpp_codegen_multiply((float)L_56, (float)L_59))))));
		// centroid.x = centroid.x + ((vertices[i].x + vertices[i + 1].x) * (vertices[i].x * vertices[i + 1].y - vertices[i + 1].x * vertices[i].y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60 = V_1;
		float L_61 = L_60.get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_62 = ___vertices0;
		int32_t L_63 = V_3;
		NullCheck(L_62);
		float L_64 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_65 = ___vertices0;
		int32_t L_66 = V_3;
		NullCheck(L_65);
		float L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1)))))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_68 = ___vertices0;
		int32_t L_69 = V_3;
		NullCheck(L_68);
		float L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_71 = ___vertices0;
		int32_t L_72 = V_3;
		NullCheck(L_71);
		float L_73 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1)))))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_74 = ___vertices0;
		int32_t L_75 = V_3;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1)))))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_77 = ___vertices0;
		int32_t L_78 = V_3;
		NullCheck(L_77);
		float L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->get_y_1();
		(&V_1)->set_x_0(((float)il2cpp_codegen_add((float)L_61, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_64, (float)L_67)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_70, (float)L_73)), (float)((float)il2cpp_codegen_multiply((float)L_76, (float)L_79)))))))));
		// centroid.y = centroid.y + ((vertices[i].y + vertices[i + 1].y) * (vertices[i].x * vertices[i + 1].y - vertices[i + 1].x * vertices[i].y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80 = V_1;
		float L_81 = L_80.get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_82 = ___vertices0;
		int32_t L_83 = V_3;
		NullCheck(L_82);
		float L_84 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_85 = ___vertices0;
		int32_t L_86 = V_3;
		NullCheck(L_85);
		float L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1)))))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_88 = ___vertices0;
		int32_t L_89 = V_3;
		NullCheck(L_88);
		float L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_91 = ___vertices0;
		int32_t L_92 = V_3;
		NullCheck(L_91);
		float L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1)))))->get_y_1();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_94 = ___vertices0;
		int32_t L_95 = V_3;
		NullCheck(L_94);
		float L_96 = ((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1)))))->get_x_0();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_97 = ___vertices0;
		int32_t L_98 = V_3;
		NullCheck(L_97);
		float L_99 = ((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98)))->get_y_1();
		(&V_1)->set_y_1(((float)il2cpp_codegen_add((float)L_81, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_84, (float)L_87)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_90, (float)L_93)), (float)((float)il2cpp_codegen_multiply((float)L_96, (float)L_99)))))))));
	}

IL_0216:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
	}

IL_021a:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_101 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_102 = ___vertices0;
		NullCheck(L_102);
		if ((((int32_t)L_101) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		// this.polygonArea = (doubleArea < 0) ? doubleArea * -0.5f : doubleArea * 0.5f;
		float L_103 = V_0;
		G_B7_0 = __this;
		if ((((float)L_103) < ((float)(0.0f))))
		{
			G_B8_0 = __this;
			goto IL_0235;
		}
	}
	{
		float L_104 = V_0;
		G_B9_0 = ((float)il2cpp_codegen_multiply((float)L_104, (float)(0.5f)));
		G_B9_1 = G_B7_0;
		goto IL_023c;
	}

IL_0235:
	{
		float L_105 = V_0;
		G_B9_0 = ((float)il2cpp_codegen_multiply((float)L_105, (float)(-0.5f)));
		G_B9_1 = G_B8_0;
	}

IL_023c:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_polygonArea_6(G_B9_0);
		// float sixTimesArea = doubleArea * 3.0f;
		float L_106 = V_0;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_106, (float)(3.0f)));
		// this.polygonCentroid = new Vector2(centroid.x / sixTimesArea, centroid.y / sixTimesArea);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_107 = V_1;
		float L_108 = L_107.get_x_0();
		float L_109 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_110 = V_1;
		float L_111 = L_110.get_y_1();
		float L_112 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_113), ((float)((float)L_108/(float)L_109)), ((float)((float)L_111/(float)L_112)), /*hidden argument*/NULL);
		__this->set_polygonCentroid_7(L_113);
		// }
		return;
	}
}
// System.Void PolyExtruder::initPrism()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_initPrism_m0202C35F3F5FDC22152B373B69852E1A16620978 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06DB93AC694BFD16281C880B678FC563AF26D5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B5D23648245365C1857CEC387CD9AFEDC7DB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AEB8E10577802C18C85BD228EEDA8459EC2C63);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_1 = NULL;
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * V_2 = NULL;
	List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * V_3 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_4 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_5 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_6 = NULL;
	int32_t V_7 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_9 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_10 = NULL;
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * V_11 = NULL;
	List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * V_12 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_13 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_14 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_15 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_16 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_17 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_18 = NULL;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_22;
	memset((&V_22), 0, sizeof(V_22));
	Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  V_23;
	memset((&V_23), 0, sizeof(V_23));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_24;
	memset((&V_24), 0, sizeof(V_24));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_25;
	memset((&V_25), 0, sizeof(V_25));
	int32_t V_26 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// GameObject goB = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// goB.transform.parent = this.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_2, L_3, /*hidden argument*/NULL);
		// goB.name = "bottom_" + this.prismName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		String_t* L_5 = __this->get_prismName_4();
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral06DB93AC694BFD16281C880B678FC563AF26D5FE, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_4, L_6, /*hidden argument*/NULL);
		// MeshFilter mfB = goB.AddComponent<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		NullCheck(L_7);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_8;
		L_8 = GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2(L_7, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		V_1 = L_8;
		// goB.AddComponent<MeshCollider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_9);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_10;
		L_10 = GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647(L_9, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var);
		// bottomMeshRenderer = goB.AddComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		NullCheck(L_11);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_12;
		L_12 = GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47(L_11, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		__this->set_bottomMeshRenderer_19(L_12);
		// bottomMeshRenderer.material = new Material(Shader.Find("Diffuse"));
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_13 = __this->get_bottomMeshRenderer_19();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_14;
		L_14 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_13, L_15, /*hidden argument*/NULL);
		// this.bottomMesh = mfB.mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_16 = V_1;
		NullCheck(L_16);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_17;
		L_17 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_16, /*hidden argument*/NULL);
		__this->set_bottomMesh_16(L_17);
		// List<Vector2> pointsB = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_18 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_18, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		V_2 = L_18;
		// List<List<Vector2>> holesB = new List<List<Vector2>>();
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_19 = (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *)il2cpp_codegen_object_new(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var);
		List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20(L_19, /*hidden argument*/List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var);
		V_3 = L_19;
		// List<int> indicesB = null;
		V_4 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)NULL;
		// List<Vector3> verticesB = null;
		V_5 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL;
		// foreach (Vector2 v in originalPolygonVertices)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_20 = __this->get_originalPolygonVertices_15();
		V_6 = L_20;
		V_7 = 0;
		goto IL_00a5;
	}

IL_008c:
	{
		// foreach (Vector2 v in originalPolygonVertices)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_21 = V_6;
		int32_t L_22 = V_7;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_8 = L_24;
		// pointsB.Add(v);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_25 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_8;
		NullCheck(L_25);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_25, L_26, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a5:
	{
		// foreach (Vector2 v in originalPolygonVertices)
		int32_t L_28 = V_7;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29 = V_6;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_008c;
		}
	}
	{
		// List<Vector2> holeB = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_30 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_30, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		// Triangulation.triangulate(pointsB, holesB, DEFAULT_BOTTOM_Y, out indicesB, out verticesB);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_31 = V_2;
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_32 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
		float L_33 = ((PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var))->get_DEFAULT_BOTTOM_Y_12();
		bool L_34;
		L_34 = Triangulation_triangulate_mB97DB2E02F66AC3728DDD37AFEAB50322F54A6CA(L_31, L_32, L_33, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)(&V_4), (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)(&V_5), /*hidden argument*/NULL);
		// redrawMesh(this.bottomMesh, verticesB, indicesB);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_35 = __this->get_bottomMesh_16();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_36 = V_5;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_37 = V_4;
		PolyExtruder_redrawMesh_mC822D3DF3EB07283795BEBCD109A6D199D422612(__this, L_35, L_36, L_37, /*hidden argument*/NULL);
		// goB.GetComponent<MeshCollider>().sharedMesh = this.bottomMesh;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = V_0;
		NullCheck(L_38);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_39;
		L_39 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_38, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_40 = __this->get_bottomMesh_16();
		NullCheck(L_39);
		MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406(L_39, L_40, /*hidden argument*/NULL);
		// if (this.is3D)
		bool L_41 = __this->get_is3D_11();
		if (!L_41)
		{
			goto IL_012b;
		}
	}
	{
		// goB.transform.localScale = new Vector3(-1.0f, -1.0f, -1.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_0;
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), (-1.0f), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_43, L_44, /*hidden argument*/NULL);
		// goB.transform.localRotation = Quaternion.Euler(0.0f, 180.0f, 0.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = V_0;
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
		L_47 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_46, L_47, /*hidden argument*/NULL);
	}

IL_012b:
	{
		// if(this.is3D)
		bool L_48 = __this->get_is3D_11();
		if (!L_48)
		{
			goto IL_0435;
		}
	}
	{
		// GameObject goT = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_49, /*hidden argument*/NULL);
		V_9 = L_49;
		// goT.transform.parent = this.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_9;
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_51, L_52, /*hidden argument*/NULL);
		// goT.name = "top_" + this.prismName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = V_9;
		String_t* L_54 = __this->get_prismName_4();
		String_t* L_55;
		L_55 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral27B5D23648245365C1857CEC387CD9AFEDC7DB28, L_54, /*hidden argument*/NULL);
		NullCheck(L_53);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_53, L_55, /*hidden argument*/NULL);
		// MeshFilter mfT = goT.AddComponent<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = V_9;
		NullCheck(L_56);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_57;
		L_57 = GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2(L_56, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		V_10 = L_57;
		// goT.AddComponent<MeshCollider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = V_9;
		NullCheck(L_58);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_59;
		L_59 = GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647(L_58, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var);
		// topMeshRenderer = goT.AddComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = V_9;
		NullCheck(L_60);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_61;
		L_61 = GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47(L_60, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		__this->set_topMeshRenderer_20(L_61);
		// topMeshRenderer.material = new Material(Shader.Find("Diffuse"));
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_62 = __this->get_topMeshRenderer_20();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_63;
		L_63 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_64, L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_62, L_64, /*hidden argument*/NULL);
		// this.topMesh = mfT.mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_65 = V_10;
		NullCheck(L_65);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_66;
		L_66 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_65, /*hidden argument*/NULL);
		__this->set_topMesh_17(L_66);
		// List<Vector2> pointsT = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_67 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_67, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		V_11 = L_67;
		// List<List<Vector2>> holesT = new List<List<Vector2>>();
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_68 = (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *)il2cpp_codegen_object_new(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var);
		List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20(L_68, /*hidden argument*/List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var);
		V_12 = L_68;
		// List<int> indicesT = null;
		V_13 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)NULL;
		// List<Vector3> verticesT = null;
		V_14 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL;
		// foreach (Vector2 v in originalPolygonVertices)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_69 = __this->get_originalPolygonVertices_15();
		V_6 = L_69;
		V_7 = 0;
		goto IL_01e6;
	}

IL_01cc:
	{
		// foreach (Vector2 v in originalPolygonVertices)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_70 = V_6;
		int32_t L_71 = V_7;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_22 = L_73;
		// pointsT.Add(v);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_74 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_75 = V_22;
		NullCheck(L_74);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_74, L_75, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		int32_t L_76 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01e6:
	{
		// foreach (Vector2 v in originalPolygonVertices)
		int32_t L_77 = V_7;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_78 = V_6;
		NullCheck(L_78);
		if ((((int32_t)L_77) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length))))))
		{
			goto IL_01cc;
		}
	}
	{
		// List<Vector2> holeT = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_79 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_79, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		// Triangulation.triangulate(pointsT, holesT, DEFAULT_TOP_Y, out indicesT, out verticesT);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_80 = V_11;
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_81 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
		float L_82 = ((PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var))->get_DEFAULT_TOP_Y_13();
		bool L_83;
		L_83 = Triangulation_triangulate_mB97DB2E02F66AC3728DDD37AFEAB50322F54A6CA(L_80, L_81, L_82, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)(&V_13), (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)(&V_14), /*hidden argument*/NULL);
		// redrawMesh(this.topMesh, verticesT, indicesT);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_84 = __this->get_topMesh_17();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_85 = V_14;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_86 = V_13;
		PolyExtruder_redrawMesh_mC822D3DF3EB07283795BEBCD109A6D199D422612(__this, L_84, L_85, L_86, /*hidden argument*/NULL);
		// goT.GetComponent<MeshCollider>().sharedMesh = this.topMesh;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = V_9;
		NullCheck(L_87);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_88;
		L_88 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_87, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_89 = __this->get_topMesh_17();
		NullCheck(L_88);
		MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406(L_88, L_89, /*hidden argument*/NULL);
		// GameObject goS = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_90, /*hidden argument*/NULL);
		V_15 = L_90;
		// goS.transform.parent = this.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = V_15;
		NullCheck(L_91);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
		L_92 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_91, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_92);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_92, L_93, /*hidden argument*/NULL);
		// goS.name = "surround_" + this.prismName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = V_15;
		String_t* L_95 = __this->get_prismName_4();
		String_t* L_96;
		L_96 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB9AEB8E10577802C18C85BD228EEDA8459EC2C63, L_95, /*hidden argument*/NULL);
		NullCheck(L_94);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_94, L_96, /*hidden argument*/NULL);
		// MeshFilter mfS = goS.AddComponent<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97 = V_15;
		NullCheck(L_97);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_98;
		L_98 = GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2(L_97, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		V_16 = L_98;
		// goS.AddComponent<MeshCollider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99 = V_15;
		NullCheck(L_99);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_100;
		L_100 = GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647(L_99, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var);
		// surroundMeshRenderer = goS.AddComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = V_15;
		NullCheck(L_101);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_102;
		L_102 = GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47(L_101, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		__this->set_surroundMeshRenderer_21(L_102);
		// surroundMeshRenderer.material = new Material(Shader.Find("Diffuse"));
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_103 = __this->get_surroundMeshRenderer_21();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_104;
		L_104 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_105 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_105, L_104, /*hidden argument*/NULL);
		NullCheck(L_103);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_103, L_105, /*hidden argument*/NULL);
		// this.surroundMesh = mfS.mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_106 = V_16;
		NullCheck(L_106);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_107;
		L_107 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_106, /*hidden argument*/NULL);
		__this->set_surroundMesh_18(L_107);
		// List<int> indicesS = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_108 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_108, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_17 = L_108;
		// List<Vector3> verticesS = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_109 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_109, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		V_18 = L_109;
		// foreach (Vector3 bv in pointsB)
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_110 = V_2;
		NullCheck(L_110);
		Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  L_111;
		L_111 = List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1(L_110, /*hidden argument*/List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var);
		V_23 = L_111;
	}

IL_02b4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02e3;
		}

IL_02b6:
		{
			// foreach (Vector3 bv in pointsB)
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_112;
			L_112 = Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_inline((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_23), /*hidden argument*/Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113;
			L_113 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_112, /*hidden argument*/NULL);
			V_24 = L_113;
			// verticesS.Add(new Vector3(bv.x, DEFAULT_BOTTOM_Y, bv.y));
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_114 = V_18;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115 = V_24;
			float L_116 = L_115.get_x_2();
			IL2CPP_RUNTIME_CLASS_INIT(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
			float L_117 = ((PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var))->get_DEFAULT_BOTTOM_Y_12();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118 = V_24;
			float L_119 = L_118.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120;
			memset((&L_120), 0, sizeof(L_120));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_120), L_116, L_117, L_119, /*hidden argument*/NULL);
			NullCheck(L_114);
			List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_114, L_120, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		}

IL_02e3:
		{
			// foreach (Vector3 bv in pointsB)
			bool L_121;
			L_121 = Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_23), /*hidden argument*/Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var);
			if (L_121)
			{
				goto IL_02b6;
			}
		}

IL_02ec:
		{
			IL2CPP_LEAVE(0x2FC, FINALLY_02ee);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02ee;
	}

FINALLY_02ee:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_23), /*hidden argument*/Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(750)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(750)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2FC, IL_02fc)
	}

IL_02fc:
	{
		// foreach (Vector2 tv in pointsT)
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_122 = V_11;
		NullCheck(L_122);
		Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  L_123;
		L_123 = List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1(L_122, /*hidden argument*/List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var);
		V_23 = L_123;
	}

IL_0305:
	try
	{ // begin try (depth: 1)
		{
			goto IL_032f;
		}

IL_0307:
		{
			// foreach (Vector2 tv in pointsT)
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_124;
			L_124 = Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_inline((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_23), /*hidden argument*/Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var);
			V_25 = L_124;
			// verticesS.Add(new Vector3(tv.x, DEFAULT_TOP_Y, tv.y));
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_125 = V_18;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_126 = V_25;
			float L_127 = L_126.get_x_0();
			IL2CPP_RUNTIME_CLASS_INIT(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
			float L_128 = ((PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var))->get_DEFAULT_TOP_Y_13();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_129 = V_25;
			float L_130 = L_129.get_y_1();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
			memset((&L_131), 0, sizeof(L_131));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_131), L_127, L_128, L_130, /*hidden argument*/NULL);
			NullCheck(L_125);
			List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_125, L_131, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		}

IL_032f:
		{
			// foreach (Vector2 tv in pointsT)
			bool L_132;
			L_132 = Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_23), /*hidden argument*/Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var);
			if (L_132)
			{
				goto IL_0307;
			}
		}

IL_0338:
		{
			IL2CPP_LEAVE(0x348, FINALLY_033a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_033a;
	}

FINALLY_033a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_23), /*hidden argument*/Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(826)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(826)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x348, IL_0348)
	}

IL_0348:
	{
		// int indexB = 0;
		V_19 = 0;
		// int indexT = pointsB.Count;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_133 = V_2;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_133, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		V_20 = L_134;
		// int sumQuads = verticesS.Count / 2;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_135 = V_18;
		NullCheck(L_135);
		int32_t L_136;
		L_136 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_135, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		V_21 = ((int32_t)((int32_t)L_136/(int32_t)2));
		// for (int i = 0; i < sumQuads; i++)
		V_26 = 0;
		goto IL_03f6;
	}

IL_0366:
	{
		// if (i == (sumQuads - 1))
		int32_t L_137 = V_26;
		int32_t L_138 = V_21;
		if ((!(((uint32_t)L_137) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_138, (int32_t)1))))))
		{
			goto IL_03a8;
		}
	}
	{
		// indicesS.Add(indexB);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_139 = V_17;
		int32_t L_140 = V_19;
		NullCheck(L_139);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_139, L_140, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(0);                // flipped with 3. index
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_141 = V_17;
		NullCheck(L_141);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_141, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(indexT);           // flipped with 2. index
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_142 = V_17;
		int32_t L_143 = V_20;
		NullCheck(L_142);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_142, L_143, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(0);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_144 = V_17;
		NullCheck(L_144);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_144, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(pointsB.Count);    // flipped with 6. index
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_145 = V_17;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_146 = V_2;
		NullCheck(L_146);
		int32_t L_147;
		L_147 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_146, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		NullCheck(L_145);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_145, L_147, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(indexT);           // flipped with 5. index
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_148 = V_17;
		int32_t L_149 = V_20;
		NullCheck(L_148);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_148, L_149, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// }
		goto IL_03f0;
	}

IL_03a8:
	{
		// indicesS.Add(indexB);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_150 = V_17;
		int32_t L_151 = V_19;
		NullCheck(L_150);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_150, L_151, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(indexB + 1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_152 = V_17;
		int32_t L_153 = V_19;
		NullCheck(L_152);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_152, ((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(indexT);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_154 = V_17;
		int32_t L_155 = V_20;
		NullCheck(L_154);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_154, L_155, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(indexB + 1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_156 = V_17;
		int32_t L_157 = V_19;
		NullCheck(L_156);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_156, ((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(indexT + 1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_158 = V_17;
		int32_t L_159 = V_20;
		NullCheck(L_158);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_158, ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indicesS.Add(indexT);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_160 = V_17;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_160, L_161, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indexB++;
		int32_t L_162 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
		// indexT++;
		int32_t L_163 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)1));
	}

IL_03f0:
	{
		// for (int i = 0; i < sumQuads; i++)
		int32_t L_164 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1));
	}

IL_03f6:
	{
		// for (int i = 0; i < sumQuads; i++)
		int32_t L_165 = V_26;
		int32_t L_166 = V_21;
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0366;
		}
	}
	{
		// redrawMesh(this.surroundMesh, verticesS, indicesS);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_167 = __this->get_surroundMesh_18();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_168 = V_18;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_169 = V_17;
		PolyExtruder_redrawMesh_mC822D3DF3EB07283795BEBCD109A6D199D422612(__this, L_167, L_168, L_169, /*hidden argument*/NULL);
		// goB.GetComponent<MeshCollider>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_170 = V_0;
		NullCheck(L_170);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_171;
		L_171 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_170, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		NullCheck(L_171);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_171, (bool)0, /*hidden argument*/NULL);
		// goT.GetComponent<MeshCollider>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_172 = V_9;
		NullCheck(L_172);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_173;
		L_173 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_172, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		NullCheck(L_173);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_173, (bool)1, /*hidden argument*/NULL);
		// goS.GetComponent<MeshCollider>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_174 = V_15;
		NullCheck(L_174);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_175;
		L_175 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_174, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		NullCheck(L_175);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_175, (bool)0, /*hidden argument*/NULL);
	}

IL_0435:
	{
		// updateHeight(this.extrusionHeightY);
		float L_176 = __this->get_extrusionHeightY_14();
		PolyExtruder_updateHeight_mC1D09FC32E859B32196C8F88A1D32E266F8718CB(__this, L_176, /*hidden argument*/NULL);
		// updateColor(this.prismColor);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_177 = __this->get_prismColor_5();
		PolyExtruder_updateColor_m0B3FD48B4EB0EA6CE91FFB1F51A97147B953F011(__this, L_177, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PolyExtruder::redrawMesh(UnityEngine.Mesh,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_redrawMesh_mC822D3DF3EB07283795BEBCD109A6D199D422612 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vertices1, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___indices2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh.Clear();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		NullCheck(L_0);
		Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_0, /*hidden argument*/NULL);
		// mesh.vertices = vertices.ToArray();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = ___mesh0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = ___vertices1;
		NullCheck(L_2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3;
		L_3 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_2, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		NullCheck(L_1);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_1, L_3, /*hidden argument*/NULL);
		// mesh.triangles = indices.ToArray();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = ___mesh0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_5 = ___indices2;
		NullCheck(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6;
		L_6 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_5, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		NullCheck(L_4);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_4, L_6, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = ___mesh0;
		NullCheck(L_7);
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_7, /*hidden argument*/NULL);
		// mesh.RecalculateBounds();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_8 = ___mesh0;
		NullCheck(L_8);
		Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737(L_8, /*hidden argument*/NULL);
		// if (this.isOutlineRendered) initOutlineRenderer();
		bool L_9 = __this->get_isOutlineRendered_8();
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		// if (this.isOutlineRendered) initOutlineRenderer();
		bool L_10;
		L_10 = PolyExtruder_initOutlineRenderer_m59AA5426ECFC5129842BFA273744338A23EF8618(__this, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void PolyExtruder::updateHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_updateHeight_mC1D09FC32E859B32196C8F88A1D32E266F8718CB (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, float ___height0, const RuntimeMethod* method)
{
	{
		// if(!this.extrusionHeightY.Equals(height)) this.extrusionHeightY = height;
		float* L_0 = __this->get_address_of_extrusionHeightY_14();
		float L_1 = ___height0;
		bool L_2;
		L_2 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if(!this.extrusionHeightY.Equals(height)) this.extrusionHeightY = height;
		float L_3 = ___height0;
		__this->set_extrusionHeightY_14(L_3);
	}

IL_0015:
	{
		// if(this.is3D) this.gameObject.transform.localScale = new Vector3(1.0f, this.extrusionHeightY, 1.0f);
		bool L_4 = __this->get_is3D_11();
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// if(this.is3D) this.gameObject.transform.localScale = new Vector3(1.0f, this.extrusionHeightY, 1.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_extrusionHeightY_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (1.0f), L_7, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void PolyExtruder::updateColor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder_updateColor_m0B3FD48B4EB0EA6CE91FFB1F51A97147B953F011 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.prismColor.Equals(color)) this.prismColor = color;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * L_0 = __this->get_address_of_prismColor_5();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___color0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2 = L_1;
		RuntimeObject * L_3 = Box(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var, &L_2);
		RuntimeObject * L_4 = Box(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_3);
		*L_0 = *(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)UnBox(L_4);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (!this.prismColor.Equals(color)) this.prismColor = color;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_6 = ___color0;
		__this->set_prismColor_5(L_6);
	}

IL_0020:
	{
		// bottomMeshRenderer.material.color = this.prismColor;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_7 = __this->get_bottomMeshRenderer_19();
		NullCheck(L_7);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8;
		L_8 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_7, /*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_9 = __this->get_prismColor_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_8, L_10, /*hidden argument*/NULL);
		// if (this.is3D)
		bool L_11 = __this->get_is3D_11();
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		// topMeshRenderer.material.color = this.prismColor;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_12 = __this->get_topMeshRenderer_20();
		NullCheck(L_12);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13;
		L_13 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_12, /*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_14 = __this->get_prismColor_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_13, L_15, /*hidden argument*/NULL);
		// surroundMeshRenderer.material.color = this.prismColor;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_16 = __this->get_surroundMeshRenderer_21();
		NullCheck(L_16);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17;
		L_17 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_16, /*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_18 = __this->get_prismColor_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_17, L_19, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Boolean PolyExtruder::initOutlineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PolyExtruder_initOutlineRenderer_m59AA5426ECFC5129842BFA273744338A23EF8618 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * V_1 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (this.gameObject.GetComponent<LineRenderer>() == true) return false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1;
		L_1 = GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB(L_0, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (this.gameObject.GetComponent<LineRenderer>() == true) return false;
		return (bool)0;
	}

IL_0014:
	{
		// float yPos = DEFAULT_TOP_Y;
		IL2CPP_RUNTIME_CLASS_INIT(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
		float L_3 = ((PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var))->get_DEFAULT_TOP_Y_13();
		V_0 = L_3;
		// if (!this.is3D) yPos = DEFAULT_BOTTOM_Y;
		bool L_4 = __this->get_is3D_11();
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// if (!this.is3D) yPos = DEFAULT_BOTTOM_Y;
		IL2CPP_RUNTIME_CLASS_INIT(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
		float L_5 = ((PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var))->get_DEFAULT_BOTTOM_Y_12();
		V_0 = L_5;
	}

IL_0028:
	{
		// LineRenderer outlineRenderer = this.gameObject.AddComponent<LineRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7;
		L_7 = GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0(L_6, /*hidden argument*/GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0_RuntimeMethod_var);
		V_1 = L_7;
		// outlineRenderer.startWidth = outlineWidth;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_8 = V_1;
		float L_9 = __this->get_outlineWidth_9();
		NullCheck(L_8);
		LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_8, L_9, /*hidden argument*/NULL);
		// outlineRenderer.endWidth = outlineWidth;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_10 = V_1;
		float L_11 = __this->get_outlineWidth_9();
		NullCheck(L_10);
		LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_10, L_11, /*hidden argument*/NULL);
		// outlineRenderer.useWorldSpace = false;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_12 = V_1;
		NullCheck(L_12);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_12, (bool)0, /*hidden argument*/NULL);
		// outlineRenderer.material = new Material(Shader.Find("Standard"));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_13 = V_1;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_14;
		L_14 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_13, L_15, /*hidden argument*/NULL);
		// outlineRenderer.material.color = outlineColor;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_16 = V_1;
		NullCheck(L_16);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17;
		L_17 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_16, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = __this->get_outlineColor_10();
		NullCheck(L_17);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_17, L_18, /*hidden argument*/NULL);
		// Vector3[] outlineRendererPositions = new Vector3[this.originalPolygonVertices.Length];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_19 = __this->get_originalPolygonVertices_15();
		NullCheck(L_19);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))));
		V_2 = L_20;
		// for (int i = 0; i < this.originalPolygonVertices.Length; i++)
		V_3 = 0;
		goto IL_00be;
	}

IL_008b:
	{
		// outlineRendererPositions[i] = new Vector3(this.originalPolygonVertices[i].x, yPos, this.originalPolygonVertices[i].y);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = V_2;
		int32_t L_22 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = __this->get_originalPolygonVertices_15();
		int32_t L_24 = V_3;
		NullCheck(L_23);
		float L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->get_x_0();
		float L_26 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_27 = __this->get_originalPolygonVertices_15();
		int32_t L_28 = V_3;
		NullCheck(L_27);
		float L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_30), L_25, L_26, L_29, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_30);
		// for (int i = 0; i < this.originalPolygonVertices.Length; i++)
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00be:
	{
		// for (int i = 0; i < this.originalPolygonVertices.Length; i++)
		int32_t L_32 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_33 = __this->get_originalPolygonVertices_15();
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_008b;
		}
	}
	{
		// outlineRenderer.positionCount = outlineRendererPositions.Length;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_34 = V_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_35 = V_2;
		NullCheck(L_35);
		NullCheck(L_34);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_34, ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))), /*hidden argument*/NULL);
		// outlineRenderer.loop = true;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_36 = V_1;
		NullCheck(L_36);
		LineRenderer_set_loop_m27B7884A47BCFBC82952D3FB355DBACE39FC7FFE(L_36, (bool)1, /*hidden argument*/NULL);
		// outlineRenderer.SetPositions(outlineRendererPositions);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_37 = V_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_38 = V_2;
		NullCheck(L_37);
		LineRenderer_SetPositions_mD7F470FCD99805F1466E13B64C3F04825DFDBF91(L_37, L_38, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void PolyExtruder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder__ctor_m1F3E3CAFDDFB2EC9432760D1B8E68E2F57BC37D4 (PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * __this, const RuntimeMethod* method)
{
	{
		// public float outlineWidth = 0.01f;              // float representing the width of the outline
		__this->set_outlineWidth_9((0.00999999978f));
		// public Color outlineColor = Color.black;        // Color representing the color of the outline
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_outlineColor_10(L_0);
		// private float extrusionHeightY = 1.0f;
		__this->set_extrusionHeightY_14((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PolyExtruder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruder__cctor_mEDB274882901F7F723E04F9832975BDBEC716D94 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly float DEFAULT_BOTTOM_Y = 0.0f;
		((PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var))->set_DEFAULT_BOTTOM_Y_12((0.0f));
		// private static readonly float DEFAULT_TOP_Y = 1.0f;
		((PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_il2cpp_TypeInfo_var))->set_DEFAULT_TOP_Y_13((1.0f));
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
// System.Void PolyExtruderDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruderDemo_Start_mAF850C279B8DE4AC81F392C949617663DCEA2C5F (PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_m6795438BDC1B88EB8DFFAC584D75338087C343C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral248643DD5410FA9A1F2454CDF31708BDDA103548);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64D24090833D0F2767E49072F66203DC9464A384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6195A60B7D31ACB115F1C5363B46CE01050BFA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject polyExtruderGO = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// polyExtruderGO.transform.parent = this.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_2, L_3, /*hidden argument*/NULL);
		// polyExtruder = polyExtruderGO.AddComponent<PolyExtruder>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		NullCheck(L_4);
		PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * L_5;
		L_5 = GameObject_AddComponent_TisPolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_m6795438BDC1B88EB8DFFAC584D75338087C343C4(L_4, /*hidden argument*/GameObject_AddComponent_TisPolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB_m6795438BDC1B88EB8DFFAC584D75338087C343C4_RuntimeMethod_var);
		__this->set_polyExtruder_9(L_5);
		// polyExtruder.isOutlineRendered = isOutlineRendered;
		PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * L_6 = __this->get_polyExtruder_9();
		bool L_7 = __this->get_isOutlineRendered_5();
		NullCheck(L_6);
		L_6->set_isOutlineRendered_8(L_7);
		// switch (exampleData)
		int32_t L_8 = __this->get_exampleData_4();
		V_1 = L_8;
		int32_t L_9 = V_1;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_008e;
			}
			case 2:
			{
				goto IL_00c6;
			}
			case 3:
			{
				goto IL_00fe;
			}
		}
	}
	{
		goto IL_00fe;
	}

IL_0056:
	{
		// polyExtruderGO.name = "Triangle";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		NullCheck(L_10);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_10, _stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD, /*hidden argument*/NULL);
		// polyExtruder.createPrism(polyExtruderGO.name, extrusionHeight, MeshDataTriangle, Color.grey, is3D);
		PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * L_11 = __this->get_polyExtruder_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_extrusionHeight_8();
		IL2CPP_RUNTIME_CLASS_INIT(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_15 = ((PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var))->get_MeshDataTriangle_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_17;
		L_17 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_16, /*hidden argument*/NULL);
		bool L_18 = __this->get_is3D_6();
		NullCheck(L_11);
		PolyExtruder_createPrism_mC7592EEAF7FDDBB76674B2A90B14118101330BF5(L_11, L_13, L_14, L_15, L_17, L_18, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_008e:
	{
		// polyExtruderGO.name = "Square";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_0;
		NullCheck(L_19);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_19, _stringLiteral64D24090833D0F2767E49072F66203DC9464A384, /*hidden argument*/NULL);
		// polyExtruder.createPrism(polyExtruderGO.name, extrusionHeight, MeshDataSquare, Color.grey, is3D);
		PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * L_20 = __this->get_polyExtruder_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_extrusionHeight_8();
		IL2CPP_RUNTIME_CLASS_INIT(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_24 = ((PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var))->get_MeshDataSquare_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		L_25 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_26;
		L_26 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_25, /*hidden argument*/NULL);
		bool L_27 = __this->get_is3D_6();
		NullCheck(L_20);
		PolyExtruder_createPrism_mC7592EEAF7FDDBB76674B2A90B14118101330BF5(L_20, L_22, L_23, L_24, L_26, L_27, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c6:
	{
		// polyExtruderGO.name = "Cross";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_0;
		NullCheck(L_28);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_28, _stringLiteralA6195A60B7D31ACB115F1C5363B46CE01050BFA6, /*hidden argument*/NULL);
		// polyExtruder.createPrism(polyExtruderGO.name, extrusionHeight, MeshDataCross, Color.grey, is3D);
		PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * L_29 = __this->get_polyExtruder_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_extrusionHeight_8();
		IL2CPP_RUNTIME_CLASS_INIT(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_33 = ((PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var))->get_MeshDataCross_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34;
		L_34 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_35;
		L_35 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_34, /*hidden argument*/NULL);
		bool L_36 = __this->get_is3D_6();
		NullCheck(L_29);
		PolyExtruder_createPrism_mC7592EEAF7FDDBB76674B2A90B14118101330BF5(L_29, L_31, L_32, L_33, L_35, L_36, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00fe:
	{
		// polyExtruderGO.name = "SCB_Kommun_RT90_Gotland";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_0;
		NullCheck(L_37);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_37, _stringLiteral248643DD5410FA9A1F2454CDF31708BDDA103548, /*hidden argument*/NULL);
		// polyExtruder.createPrism(polyExtruderGO.name, extrusionHeight, MeshDataGotland, Color.grey, is3D);
		PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * L_38 = __this->get_polyExtruder_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_39, /*hidden argument*/NULL);
		float L_41 = __this->get_extrusionHeight_8();
		IL2CPP_RUNTIME_CLASS_INIT(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_42 = ((PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var))->get_MeshDataGotland_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		L_43 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_44;
		L_44 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_43, /*hidden argument*/NULL);
		bool L_45 = __this->get_is3D_6();
		NullCheck(L_38);
		PolyExtruder_createPrism_mC7592EEAF7FDDBB76674B2A90B14118101330BF5(L_38, L_40, L_41, L_42, L_44, L_45, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PolyExtruderDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruderDemo_Update_mEC5C3E48CFA749C54D9AD64A39B996CF17CB0981 (PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D * __this, const RuntimeMethod* method)
{
	{
		// if(enableMovement)
		bool L_0 = __this->get_enableMovement_7();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// polyExtruder.updateHeight((Mathf.Sin(Time.time) + 1.0f) * this.extrusionHeight);
		PolyExtruder_t7F2E6D6142292540586D7E352E492E5273D4FEAB * L_1 = __this->get_polyExtruder_9();
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_3;
		L_3 = sinf(L_2);
		float L_4 = __this->get_extrusionHeight_8();
		NullCheck(L_1);
		PolyExtruder_updateHeight_mC1D09FC32E859B32196C8F88A1D32E266F8718CB(L_1, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_3, (float)(1.0f))), (float)L_4)), /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void PolyExtruderDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruderDemo__ctor_mB0E3EB235D424491B485D9FBA09279943B009399 (PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D * __this, const RuntimeMethod* method)
{
	{
		// public float extrusionHeight = 10.0f;
		__this->set_extrusionHeight_8((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PolyExtruderDemo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyExtruderDemo__cctor_m745383524B6EB75EAA032CF00C128824D0A1430F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2[] MeshDataTriangle = new Vector2[]
		// {
		//     new Vector2(0.0f, 0.0f),
		//     new Vector2(10.0f, 0.0f),
		//     new Vector2(10.0f, 10.0f),
		// };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = L_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_2);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = L_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (10.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6);
		((PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var))->set_MeshDataTriangle_10(L_5);
		// public static Vector2[] MeshDataSquare = new Vector2[]
		// {
		//     new Vector2(0.0f, 0.0f),
		//     new Vector2(10.0f, 0.0f),
		//     new Vector2(10.0f, 10.0f),
		//     new Vector2(0.0f, 10.0f)
		// };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_7 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = L_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_9);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_10 = L_8;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_11);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_12 = L_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), (10.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_13);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = L_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_15), (0.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_15);
		((PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var))->set_MeshDataSquare_11(L_14);
		// public static Vector2[] MeshDataCross = new Vector2[]
		// {
		//     new Vector2(10.0f,  0.0f),
		//     new Vector2(20.0f,  0.0f),
		//     new Vector2(20.0f, 10.0f),
		//     new Vector2(30.0f, 10.0f),
		//     new Vector2(30.0f, 20.0f),
		//     new Vector2(20.0f, 20.0f),
		//     new Vector2(20.0f, 30.0f),
		//     new Vector2(10.0f, 30.0f),
		//     new Vector2(10.0f, 20.0f),
		//     new Vector2( 0.0f, 20.0f),
		//     new Vector2( 0.0f, 10.0f),
		//     new Vector2(10.0f, 10.0f)
		// };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_16 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_17 = L_16;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_18);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_19 = L_17;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), (20.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_20);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_21 = L_19;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), (20.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_22);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = L_21;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_24), (30.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_24);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_25 = L_23;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), (30.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_26);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_27 = L_25;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_28), (20.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_28);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29 = L_27;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), (20.0f), (30.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_30);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_31 = L_29;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_32), (10.0f), (30.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_32);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_33 = L_31;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_34), (10.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_34);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_35 = L_33;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_36), (0.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_36);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_37 = L_35;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), (0.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_38);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_39 = L_37;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), (10.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_40);
		((PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var))->set_MeshDataCross_12(L_39);
		// public static Vector2[] MeshDataGotland = new Vector2[]
		// {
		//     new Vector2(18.480383f, 57.836077f),
		//     new Vector2(18.537713f, 57.845860f),
		//     new Vector2(18.584063f, 57.852903f),
		//     new Vector2(18.607002f, 57.894639f),
		//     new Vector2(18.653908f, 57.914347f),
		//     new Vector2(18.706412f, 57.929932f),
		//     new Vector2(18.770207f, 57.849914f),
		//     new Vector2(18.818223f, 57.916793f),
		//     new Vector2(18.859187f, 57.938769f),
		//     new Vector2(18.999720f, 57.919358f),
		//     new Vector2(19.054636f, 57.941874f),
		//     new Vector2(19.074290f, 57.982045f),
		//     new Vector2(19.149867f, 58.004555f),
		//     new Vector2(19.233429f, 57.988071f),
		//     new Vector2(19.288897f, 57.990428f),
		//     new Vector2(19.305797f, 57.968883f),
		//     new Vector2(19.276212f, 57.951471f),
		//     new Vector2(19.201451f, 57.952655f),
		//     new Vector2(19.139892f, 57.941688f),
		//     new Vector2(19.114865f, 57.927508f),
		//     new Vector2(19.134017f, 57.902146f),
		//     new Vector2(19.093910f, 57.861967f),
		//     new Vector2(19.029708f, 57.842096f),
		//     new Vector2(18.995426f, 57.830518f),
		//     new Vector2(18.997464f, 57.793935f),
		//     new Vector2(18.932950f, 57.794079f),
		//     new Vector2(18.923423f, 57.731188f),
		//     new Vector2(18.848564f, 57.730376f),
		//     new Vector2(18.797358f, 57.751154f),
		//     new Vector2(18.784223f, 57.697686f),
		//     new Vector2(18.748640f, 57.626125f),
		//     new Vector2(18.782142f, 57.614165f),
		//     new Vector2(18.766906f, 57.553601f),
		//     new Vector2(18.734120f, 57.523658f),
		//     new Vector2(18.776351f, 57.474543f),
		//     new Vector2(18.839200f, 57.449095f),
		//     new Vector2(18.900375f, 57.440142f),
		//     new Vector2(18.867042f, 57.397533f),
		//     new Vector2(18.789061f, 57.384274f),
		//     new Vector2(18.725852f, 57.375163f),
		//     new Vector2(18.654748f, 57.317569f),
		//     new Vector2(18.655439f, 57.286577f),
		//     new Vector2(18.694117f, 57.270529f),
		//     new Vector2(18.656802f, 57.235525f),
		//     new Vector2(18.543477f, 57.214247f),
		//     new Vector2(18.527367f, 57.193782f),
		//     new Vector2(18.383797f, 57.136757f),
		//     new Vector2(18.424005f, 57.126115f),
		//     new Vector2(18.318466f, 57.084012f),
		//     new Vector2(18.319946f, 57.020255f),
		//     new Vector2(18.372498f, 57.006783f),
		//     new Vector2(18.300445f, 56.952803f),
		//     new Vector2(18.189577f, 56.912896f),
		//     new Vector2(18.124354f, 56.916431f),
		//     new Vector2(18.180707f, 56.986331f),
		//     new Vector2(18.192386f, 57.027179f),
		//     new Vector2(18.258461f, 57.048989f),
		//     new Vector2(18.283408f, 57.077838f),
		//     new Vector2(18.273844f, 57.102254f),
		//     new Vector2(18.209382f, 57.074859f),
		//     new Vector2(18.188153f, 57.082046f),
		//     new Vector2(18.204969f, 57.140653f),
		//     new Vector2(18.160206f, 57.158856f),
		//     new Vector2(18.131182f, 57.173939f),
		//     new Vector2(18.136734f, 57.251644f),
		//     new Vector2(18.082734f, 57.261472f),
		//     new Vector2(18.097160f, 57.300274f),
		//     new Vector2(18.149878f, 57.332350f),
		//     new Vector2(18.165021f, 57.396553f),
		//     new Vector2(18.129032f, 57.423099f),
		//     new Vector2(18.110510f, 57.475473f),
		//     new Vector2(18.090931f, 57.524288f),
		//     new Vector2(18.108770f, 57.562839f),
		//     new Vector2(18.191143f, 57.614342f),
		//     new Vector2(18.245287f, 57.626307f),
		//     new Vector2(18.314267f, 57.677030f),
		//     new Vector2(18.390324f, 57.750775f),
		//     new Vector2(18.425982f, 57.813300f),
		//     new Vector2(18.480383f, 57.836077f),
		// };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_41 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)79));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_42 = L_41;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_43), (18.4803829f), (57.8360786f), /*hidden argument*/NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_43);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_44 = L_42;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_45), (18.5377121f), (57.8458595f), /*hidden argument*/NULL);
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_45);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_46 = L_44;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_47), (18.5840626f), (57.8529015f), /*hidden argument*/NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_47);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_48 = L_46;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_49), (18.6070023f), (57.8946381f), /*hidden argument*/NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_49);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_50 = L_48;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_51), (18.6539078f), (57.9143486f), /*hidden argument*/NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_51);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_52 = L_50;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_53), (18.7064114f), (57.9299316f), /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_53);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_54 = L_52;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_55), (18.7702065f), (57.8499146f), /*hidden argument*/NULL);
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_55);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_56 = L_54;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_57), (18.818224f), (57.9167938f), /*hidden argument*/NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_57);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_58 = L_56;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_59), (18.8591862f), (57.9387703f), /*hidden argument*/NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(8), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_59);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_60 = L_58;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_61), (18.9997196f), (57.9193573f), /*hidden argument*/NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_61);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_62 = L_60;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_63), (19.054636f), (57.9418755f), /*hidden argument*/NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_63);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_64 = L_62;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_65), (19.0742893f), (57.9820442f), /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_65);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_66 = L_64;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_67), (19.1498661f), (58.0045547f), /*hidden argument*/NULL);
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_67);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_68 = L_66;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_69), (19.233429f), (57.9880714f), /*hidden argument*/NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_69);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_70 = L_68;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_71), (19.2888966f), (57.9904289f), /*hidden argument*/NULL);
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_71);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_72 = L_70;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_73), (19.3057976f), (57.9688835f), /*hidden argument*/NULL);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_73);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_74 = L_72;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_75), (19.2762127f), (57.9514694f), /*hidden argument*/NULL);
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_75);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_76 = L_74;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_77), (19.2014503f), (57.9526558f), /*hidden argument*/NULL);
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_77);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_78 = L_76;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_79), (19.1398926f), (57.9416885f), /*hidden argument*/NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_79);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_80 = L_78;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_81), (19.1148643f), (57.9275093f), /*hidden argument*/NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_81);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_82 = L_80;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_83), (19.1340179f), (57.9021454f), /*hidden argument*/NULL);
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_83);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_84 = L_82;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_85), (19.0939102f), (57.8619652f), /*hidden argument*/NULL);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_85);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_86 = L_84;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_87), (19.0297089f), (57.8420944f), /*hidden argument*/NULL);
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_87);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_88 = L_86;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_89), (18.9954262f), (57.8305168f), /*hidden argument*/NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_89);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_90 = L_88;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_91), (18.9974632f), (57.7939339f), /*hidden argument*/NULL);
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_91);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_92 = L_90;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_93;
		memset((&L_93), 0, sizeof(L_93));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_93), (18.9329491f), (57.7940788f), /*hidden argument*/NULL);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_93);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_94 = L_92;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_95;
		memset((&L_95), 0, sizeof(L_95));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_95), (18.9234238f), (57.7311897f), /*hidden argument*/NULL);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_95);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_96 = L_94;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_97;
		memset((&L_97), 0, sizeof(L_97));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_97), (18.8485641f), (57.7303772f), /*hidden argument*/NULL);
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_97);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_98 = L_96;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_99;
		memset((&L_99), 0, sizeof(L_99));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_99), (18.7973576f), (57.7511559f), /*hidden argument*/NULL);
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_99);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_100 = L_98;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_101;
		memset((&L_101), 0, sizeof(L_101));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_101), (18.7842236f), (57.6976852f), /*hidden argument*/NULL);
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_101);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_102 = L_100;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_103), (18.7486401f), (57.6261253f), /*hidden argument*/NULL);
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_103);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_104 = L_102;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_105), (18.7821426f), (57.6141663f), /*hidden argument*/NULL);
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_105);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_106 = L_104;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_107), (18.7669067f), (57.5536003f), /*hidden argument*/NULL);
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_107);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_108 = L_106;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_109), (18.7341194f), (57.5236588f), /*hidden argument*/NULL);
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_109);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_110 = L_108;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_111), (18.7763519f), (57.4745445f), /*hidden argument*/NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_111);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_112 = L_110;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_113), (18.8391991f), (57.4490967f), /*hidden argument*/NULL);
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_113);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_114 = L_112;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_115), (18.9003754f), (57.4401436f), /*hidden argument*/NULL);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_115);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_116 = L_114;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_117;
		memset((&L_117), 0, sizeof(L_117));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_117), (18.8670425f), (57.3975334f), /*hidden argument*/NULL);
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_117);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_118 = L_116;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_119), (18.7890606f), (57.3842735f), /*hidden argument*/NULL);
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_119);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_120 = L_118;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_121;
		memset((&L_121), 0, sizeof(L_121));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_121), (18.7258511f), (57.375164f), /*hidden argument*/NULL);
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_121);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_122 = L_120;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_123), (18.6547489f), (57.3175697f), /*hidden argument*/NULL);
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_123);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_124 = L_122;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_125;
		memset((&L_125), 0, sizeof(L_125));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_125), (18.6554394f), (57.2865753f), /*hidden argument*/NULL);
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_125);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_126 = L_124;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_127), (18.6941166f), (57.2705307f), /*hidden argument*/NULL);
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_127);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_128 = L_126;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_129), (18.6568012f), (57.2355232f), /*hidden argument*/NULL);
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_129);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_130 = L_128;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_131), (18.5434761f), (57.2142487f), /*hidden argument*/NULL);
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_131);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_132 = L_130;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_133;
		memset((&L_133), 0, sizeof(L_133));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_133), (18.5273666f), (57.1937828f), /*hidden argument*/NULL);
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_133);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_134 = L_132;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_135), (18.3837967f), (57.1367569f), /*hidden argument*/NULL);
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_135);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_136 = L_134;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_137;
		memset((&L_137), 0, sizeof(L_137));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_137), (18.4240055f), (57.1261139f), /*hidden argument*/NULL);
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_137);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_138 = L_136;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_139), (18.3184662f), (57.0840111f), /*hidden argument*/NULL);
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_139);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_140 = L_138;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_141;
		memset((&L_141), 0, sizeof(L_141));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_141), (18.3199463f), (57.020256f), /*hidden argument*/NULL);
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_141);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_142 = L_140;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_143;
		memset((&L_143), 0, sizeof(L_143));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_143), (18.3724976f), (57.0067825f), /*hidden argument*/NULL);
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_143);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_144 = L_142;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_145;
		memset((&L_145), 0, sizeof(L_145));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_145), (18.3004456f), (56.9528046f), /*hidden argument*/NULL);
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_145);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_146 = L_144;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_147), (18.1895771f), (56.9128952f), /*hidden argument*/NULL);
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_147);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_148 = L_146;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_149;
		memset((&L_149), 0, sizeof(L_149));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_149), (18.1243534f), (56.9164314f), /*hidden argument*/NULL);
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_149);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_150 = L_148;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_151;
		memset((&L_151), 0, sizeof(L_151));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_151), (18.1807079f), (56.9863319f), /*hidden argument*/NULL);
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_151);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_152 = L_150;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_153;
		memset((&L_153), 0, sizeof(L_153));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_153), (18.1923866f), (57.0271797f), /*hidden argument*/NULL);
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_153);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_154 = L_152;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_155), (18.258461f), (57.0489883f), /*hidden argument*/NULL);
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_155);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_156 = L_154;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_157;
		memset((&L_157), 0, sizeof(L_157));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_157), (18.2834072f), (57.0778389f), /*hidden argument*/NULL);
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_157);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_158 = L_156;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_159;
		memset((&L_159), 0, sizeof(L_159));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_159), (18.2738438f), (57.102253f), /*hidden argument*/NULL);
		NullCheck(L_158);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_159);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_160 = L_158;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_161;
		memset((&L_161), 0, sizeof(L_161));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_161), (18.2093811f), (57.0748596f), /*hidden argument*/NULL);
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_161);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_162 = L_160;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_163;
		memset((&L_163), 0, sizeof(L_163));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_163), (18.1881523f), (57.0820465f), /*hidden argument*/NULL);
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_163);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_164 = L_162;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_165), (18.2049694f), (57.1406517f), /*hidden argument*/NULL);
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_165);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_166 = L_164;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_167;
		memset((&L_167), 0, sizeof(L_167));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_167), (18.1602058f), (57.1588554f), /*hidden argument*/NULL);
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_167);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_168 = L_166;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_169;
		memset((&L_169), 0, sizeof(L_169));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_169), (18.1311817f), (57.1739388f), /*hidden argument*/NULL);
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_169);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_170 = L_168;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_171;
		memset((&L_171), 0, sizeof(L_171));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_171), (18.136734f), (57.2516441f), /*hidden argument*/NULL);
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_171);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_172 = L_170;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_173;
		memset((&L_173), 0, sizeof(L_173));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_173), (18.0827332f), (57.2614708f), /*hidden argument*/NULL);
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_173);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_174 = L_172;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_175;
		memset((&L_175), 0, sizeof(L_175));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_175), (18.0971603f), (57.3002739f), /*hidden argument*/NULL);
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_175);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_176 = L_174;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_177;
		memset((&L_177), 0, sizeof(L_177));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_177), (18.1498775f), (57.3323517f), /*hidden argument*/NULL);
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_177);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_178 = L_176;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_179;
		memset((&L_179), 0, sizeof(L_179));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_179), (18.1650219f), (57.396553f), /*hidden argument*/NULL);
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_179);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_180 = L_178;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_181;
		memset((&L_181), 0, sizeof(L_181));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_181), (18.1290321f), (57.4230995f), /*hidden argument*/NULL);
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_181);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_182 = L_180;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_183;
		memset((&L_183), 0, sizeof(L_183));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_183), (18.1105099f), (57.4754715f), /*hidden argument*/NULL);
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_183);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_184 = L_182;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_185;
		memset((&L_185), 0, sizeof(L_185));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_185), (18.0909309f), (57.5242882f), /*hidden argument*/NULL);
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_185);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_186 = L_184;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_187;
		memset((&L_187), 0, sizeof(L_187));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_187), (18.1087704f), (57.5628395f), /*hidden argument*/NULL);
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_187);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_188 = L_186;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_189), (18.191143f), (57.6143417f), /*hidden argument*/NULL);
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_189);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_190 = L_188;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_191;
		memset((&L_191), 0, sizeof(L_191));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_191), (18.2452869f), (57.6263084f), /*hidden argument*/NULL);
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_191);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_192 = L_190;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_193;
		memset((&L_193), 0, sizeof(L_193));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_193), (18.3142662f), (57.6770287f), /*hidden argument*/NULL);
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_193);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_194 = L_192;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_195;
		memset((&L_195), 0, sizeof(L_195));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_195), (18.3903236f), (57.7507744f), /*hidden argument*/NULL);
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_195);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_196 = L_194;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_197;
		memset((&L_197), 0, sizeof(L_197));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_197), (18.4259815f), (57.8133011f), /*hidden argument*/NULL);
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_197);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_198 = L_196;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_199;
		memset((&L_199), 0, sizeof(L_199));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_199), (18.4803829f), (57.8360786f), /*hidden argument*/NULL);
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_199);
		((PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_StaticFields*)il2cpp_codegen_static_fields_for(PolyExtruderDemo_t867777BCF3E496CBDF6150B3B8F7832E5492138D_il2cpp_TypeInfo_var))->set_MeshDataGotland_13(L_198);
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
// System.Boolean Triangulation::triangulate(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>,System.Single,System.Collections.Generic.List`1<System.Int32>&,System.Collections.Generic.List`1<UnityEngine.Vector3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulation_triangulate_mB97DB2E02F66AC3728DDD37AFEAB50322F54A6CA (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___points0, List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * ___holes1, float ___vertexY2, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___outIndices3, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** ___outVertices4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9A6E1D399FA719D00C531640E72ABD1D808184AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMesh_t32C7E2575059A23A472035BE216D1F84B62F702C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriangle_t921A41DB0237BD0896214FF0036D597D7661A6A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCE920A32488DA981E76A611BF0C46A50D4C6C62C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE9BDB711B1ED91FE1DCB0BC41D682F64C83A76D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Polygon poly = new Polygon();
		Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * L_0 = (Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 *)il2cpp_codegen_object_new(Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7_il2cpp_TypeInfo_var);
		Polygon__ctor_m0D3E417511F7EA9943C0BF75D8FE02AA331F3D93(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < points.Count; i++)
		V_1 = 0;
		goto IL_00db;
	}

IL_000d:
	{
		// poly.Add(new Vertex(points[i].x, points[i].y));
		Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * L_1 = V_0;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_2 = ___points0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_5 = L_4.get_x_0();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_6 = ___points0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_9 = L_8.get_y_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_10 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)il2cpp_codegen_object_new(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		Vertex__ctor_mF1D1BB39539F7DBD48BF36A8FBE7803701450AA8(L_10, ((double)((double)L_5)), ((double)((double)L_9)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Polygon_Add_m305462A09C1E595B096452B92D0B3FF28F2B4D12(L_1, L_10, /*hidden argument*/NULL);
		// if (i == points.Count - 1)
		int32_t L_11 = V_1;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_12 = ___points0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_12, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1))))))
		{
			goto IL_0089;
		}
	}
	{
		// poly.Add(new Segment(new Vertex(points[i].x, points[i].y), new Vertex(points[0].x, points[0].y)));
		Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * L_14 = V_0;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_15 = ___points0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_18 = L_17.get_x_0();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_19 = ___points0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_22 = L_21.get_y_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_23 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)il2cpp_codegen_object_new(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		Vertex__ctor_mF1D1BB39539F7DBD48BF36A8FBE7803701450AA8(L_23, ((double)((double)L_18)), ((double)((double)L_22)), /*hidden argument*/NULL);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_24 = ___points0;
		NullCheck(L_24);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_24, 0, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_26 = L_25.get_x_0();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_27 = ___points0;
		NullCheck(L_27);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_27, 0, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_29 = L_28.get_y_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_30 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)il2cpp_codegen_object_new(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		Vertex__ctor_mF1D1BB39539F7DBD48BF36A8FBE7803701450AA8(L_30, ((double)((double)L_26)), ((double)((double)L_29)), /*hidden argument*/NULL);
		Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 * L_31 = (Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 *)il2cpp_codegen_object_new(Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4_il2cpp_TypeInfo_var);
		Segment__ctor_mA5A58D8E95622CDC94F68A3A77F514AE4862EA98(L_31, L_23, L_30, /*hidden argument*/NULL);
		NullCheck(L_14);
		Polygon_Add_m5A1F21BA963DBE52DEDE8E3509C0D8ADA4EDAD8C(L_14, L_31, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00d7;
	}

IL_0089:
	{
		// poly.Add(new Segment(new Vertex(points[i].x, points[i].y), new Vertex(points[i + 1].x, points[i + 1].y)));
		Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * L_32 = V_0;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_33 = ___points0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_36 = L_35.get_x_0();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_37 = ___points0;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_37, L_38, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_40 = L_39.get_y_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_41 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)il2cpp_codegen_object_new(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		Vertex__ctor_mF1D1BB39539F7DBD48BF36A8FBE7803701450AA8(L_41, ((double)((double)L_36)), ((double)((double)L_40)), /*hidden argument*/NULL);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_42 = ___points0;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_42, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_45 = L_44.get_x_0();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_46 = ___points0;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_46, ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_49 = L_48.get_y_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_50 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)il2cpp_codegen_object_new(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		Vertex__ctor_mF1D1BB39539F7DBD48BF36A8FBE7803701450AA8(L_50, ((double)((double)L_45)), ((double)((double)L_49)), /*hidden argument*/NULL);
		Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 * L_51 = (Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4 *)il2cpp_codegen_object_new(Segment_t3E3F6AC1B1B89A3FEED4DD6ACD817A2D1C2200C4_il2cpp_TypeInfo_var);
		Segment__ctor_mA5A58D8E95622CDC94F68A3A77F514AE4862EA98(L_51, L_41, L_50, /*hidden argument*/NULL);
		NullCheck(L_32);
		Polygon_Add_m5A1F21BA963DBE52DEDE8E3509C0D8ADA4EDAD8C(L_32, L_51, (bool)0, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// for (int i = 0; i < points.Count; i++)
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00db:
	{
		// for (int i = 0; i < points.Count; i++)
		int32_t L_53 = V_1;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_54 = ___points0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_54, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_000d;
		}
	}
	{
		// for (int i = 0; i < holes.Count; i++)
		V_2 = 0;
		goto IL_0150;
	}

IL_00eb:
	{
		// List<Vertex> vertices = new List<Vertex>();
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_56 = (List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB *)il2cpp_codegen_object_new(List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB_il2cpp_TypeInfo_var);
		List_1__ctor_mCE920A32488DA981E76A611BF0C46A50D4C6C62C(L_56, /*hidden argument*/List_1__ctor_mCE920A32488DA981E76A611BF0C46A50D4C6C62C_RuntimeMethod_var);
		V_3 = L_56;
		// for (int j = 0; j < holes[i].Count; j++)
		V_4 = 0;
		goto IL_012f;
	}

IL_00f6:
	{
		// vertices.Add(new Vertex(holes[i][j].x, holes[i][j].y));
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_57 = V_3;
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_58 = ___holes1;
		int32_t L_59 = V_2;
		NullCheck(L_58);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_60;
		L_60 = List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_inline(L_58, L_59, /*hidden argument*/List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_RuntimeMethod_var);
		int32_t L_61 = V_4;
		NullCheck(L_60);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62;
		L_62 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_60, L_61, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_63 = L_62.get_x_0();
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_64 = ___holes1;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_66;
		L_66 = List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_RuntimeMethod_var);
		int32_t L_67 = V_4;
		NullCheck(L_66);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68;
		L_68 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_66, L_67, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_69 = L_68.get_y_1();
		Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_70 = (Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *)il2cpp_codegen_object_new(Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8_il2cpp_TypeInfo_var);
		Vertex__ctor_mF1D1BB39539F7DBD48BF36A8FBE7803701450AA8(L_70, ((double)((double)L_63)), ((double)((double)L_69)), /*hidden argument*/NULL);
		NullCheck(L_57);
		List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274(L_57, L_70, /*hidden argument*/List_1_Add_mE0FBAB139358FEBED79E72289A698FDA49AE8274_RuntimeMethod_var);
		// for (int j = 0; j < holes[i].Count; j++)
		int32_t L_71 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_012f:
	{
		// for (int j = 0; j < holes[i].Count; j++)
		int32_t L_72 = V_4;
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_73 = ___holes1;
		int32_t L_74 = V_2;
		NullCheck(L_73);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_75;
		L_75 = List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_inline(L_73, L_74, /*hidden argument*/List_1_get_Item_mDF18F8D24518EFADF4557BF7FA9A6AD294BFD84A_RuntimeMethod_var);
		NullCheck(L_75);
		int32_t L_76;
		L_76 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_75, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		if ((((int32_t)L_72) < ((int32_t)L_76)))
		{
			goto IL_00f6;
		}
	}
	{
		// poly.Add(new Contour(vertices), true);
		Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * L_77 = V_0;
		List_1_tECED2FC6A8491FDD7B02BD8DB5DD889CC7FAAEFB * L_78 = V_3;
		Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 * L_79 = (Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439 *)il2cpp_codegen_object_new(Contour_tB700AEECF7A2D3166CF9D581E8D60BB1D4536439_il2cpp_TypeInfo_var);
		Contour__ctor_m41C3D7F2719FAAC4C797C078BB54B41A7A0005F7(L_79, L_78, /*hidden argument*/NULL);
		NullCheck(L_77);
		Polygon_Add_m5F77BB572D74DA889AF89ED2BC7F46CC6CAB45C9(L_77, L_79, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < holes.Count; i++)
		int32_t L_80 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
	}

IL_0150:
	{
		// for (int i = 0; i < holes.Count; i++)
		int32_t L_81 = V_2;
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_82 = ___holes1;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = List_1_get_Count_mE9BDB711B1ED91FE1DCB0BC41D682F64C83A76D0_inline(L_82, /*hidden argument*/List_1_get_Count_mE9BDB711B1ED91FE1DCB0BC41D682F64C83A76D0_RuntimeMethod_var);
		if ((((int32_t)L_81) < ((int32_t)L_83)))
		{
			goto IL_00eb;
		}
	}
	{
		// var mesh = poly.Triangulate();
		Polygon_t4A60E426E9EEFE466A2E15DAD0895659648CACD7 * L_84 = V_0;
		RuntimeObject* L_85;
		L_85 = ExtensionMethods_Triangulate_m2F8B74048929A142EE518C646B44DBF0DB31EA1F(L_84, /*hidden argument*/NULL);
		// outVertices = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** L_86 = ___outVertices4;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_87 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_87, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		*((RuntimeObject **)L_86) = (RuntimeObject *)L_87;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_86, (void*)(RuntimeObject *)L_87);
		// outIndices = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** L_88 = ___outIndices3;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_89 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_89, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		*((RuntimeObject **)L_88) = (RuntimeObject *)L_89;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_88, (void*)(RuntimeObject *)L_89);
		// foreach (ITriangle t in mesh.Triangles)
		NullCheck(L_85);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.ICollection`1<TriangleNet.Topology.Triangle> TriangleNet.Meshing.IMesh::get_Triangles() */, IMesh_t32C7E2575059A23A472035BE216D1F84B62F702C_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_90);
		RuntimeObject* L_91;
		L_91 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle>::GetEnumerator() */, IEnumerable_1_t9A6E1D399FA719D00C531640E72ABD1D808184AA_il2cpp_TypeInfo_var, L_90);
		V_5 = L_91;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_025f;
		}

IL_017f:
		{
			// foreach (ITriangle t in mesh.Triangles)
			RuntimeObject* L_92 = V_5;
			NullCheck(L_92);
			Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * L_93;
			L_93 = InterfaceFuncInvoker0< Triangle_tA621A4FD4A4BBA648C3E43963C54403BE1417769 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>::get_Current() */, IEnumerator_1_t995C3CDB0988D2B91014CC1C41DC79F0D4D22B24_il2cpp_TypeInfo_var, L_92);
			V_6 = L_93;
			// for (int j = 2; j >= 0; j--)
			V_7 = 2;
			goto IL_0257;
		}

IL_0190:
		{
			// bool found = false;
			V_8 = (bool)0;
			// for (int k = 0; k < outVertices.Count; k++)
			V_9 = 0;
			goto IL_0204;
		}

IL_0198:
		{
			// if ((System.Math.Abs(outVertices[k].x - t.GetVertex(j).X) < Mathf.Epsilon) &&
			//     (System.Math.Abs(outVertices[k].z - t.GetVertex(j).Y) < Mathf.Epsilon))
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** L_94 = ___outVertices4;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_95 = *((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)L_94);
			int32_t L_96 = V_9;
			NullCheck(L_95);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
			L_97 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_95, L_96, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
			float L_98 = L_97.get_x_2();
			RuntimeObject* L_99 = V_6;
			int32_t L_100 = V_7;
			NullCheck(L_99);
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_101;
			L_101 = InterfaceFuncInvoker1< Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, int32_t >::Invoke(0 /* TriangleNet.Geometry.Vertex TriangleNet.Geometry.ITriangle::GetVertex(System.Int32) */, ITriangle_t921A41DB0237BD0896214FF0036D597D7661A6A7_il2cpp_TypeInfo_var, L_99, L_100);
			NullCheck(L_101);
			double L_102;
			L_102 = Point_get_X_m71B7A8403C16415A171F7CA4C345082D63BCF3AD(L_101, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			double L_103;
			L_103 = fabs(((double)il2cpp_codegen_subtract((double)((double)((double)L_98)), (double)L_102)));
			float L_104 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
			if ((!(((double)L_103) < ((double)((double)((double)L_104))))))
			{
				goto IL_01fe;
			}
		}

IL_01c4:
		{
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** L_105 = ___outVertices4;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_106 = *((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)L_105);
			int32_t L_107 = V_9;
			NullCheck(L_106);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108;
			L_108 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_106, L_107, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
			float L_109 = L_108.get_z_4();
			RuntimeObject* L_110 = V_6;
			int32_t L_111 = V_7;
			NullCheck(L_110);
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_112;
			L_112 = InterfaceFuncInvoker1< Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, int32_t >::Invoke(0 /* TriangleNet.Geometry.Vertex TriangleNet.Geometry.ITriangle::GetVertex(System.Int32) */, ITriangle_t921A41DB0237BD0896214FF0036D597D7661A6A7_il2cpp_TypeInfo_var, L_110, L_111);
			NullCheck(L_112);
			double L_113;
			L_113 = Point_get_Y_m378383A2240D4D373A366FC3197B3AD216E3B835(L_112, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			double L_114;
			L_114 = fabs(((double)il2cpp_codegen_subtract((double)((double)((double)L_109)), (double)L_113)));
			float L_115 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
			if ((!(((double)L_114) < ((double)((double)((double)L_115))))))
			{
				goto IL_01fe;
			}
		}

IL_01f0:
		{
			// outIndices.Add(k);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** L_116 = ___outIndices3;
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_117 = *((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)L_116);
			int32_t L_118 = V_9;
			NullCheck(L_117);
			List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_117, L_118, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
			// found = true;
			V_8 = (bool)1;
			// break;  // leave loop
			goto IL_0210;
		}

IL_01fe:
		{
			// for (int k = 0; k < outVertices.Count; k++)
			int32_t L_119 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
		}

IL_0204:
		{
			// for (int k = 0; k < outVertices.Count; k++)
			int32_t L_120 = V_9;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** L_121 = ___outVertices4;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_122 = *((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)L_121);
			NullCheck(L_122);
			int32_t L_123;
			L_123 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_122, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
			if ((((int32_t)L_120) < ((int32_t)L_123)))
			{
				goto IL_0198;
			}
		}

IL_0210:
		{
			// if (!found)
			bool L_124 = V_8;
			if (L_124)
			{
				goto IL_0251;
			}
		}

IL_0214:
		{
			// outVertices.Add(new Vector3((float)t.GetVertex(j).X, vertexY, (float)t.GetVertex(j).Y));
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** L_125 = ___outVertices4;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_126 = *((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)L_125);
			RuntimeObject* L_127 = V_6;
			int32_t L_128 = V_7;
			NullCheck(L_127);
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_129;
			L_129 = InterfaceFuncInvoker1< Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, int32_t >::Invoke(0 /* TriangleNet.Geometry.Vertex TriangleNet.Geometry.ITriangle::GetVertex(System.Int32) */, ITriangle_t921A41DB0237BD0896214FF0036D597D7661A6A7_il2cpp_TypeInfo_var, L_127, L_128);
			NullCheck(L_129);
			double L_130;
			L_130 = Point_get_X_m71B7A8403C16415A171F7CA4C345082D63BCF3AD(L_129, /*hidden argument*/NULL);
			float L_131 = ___vertexY2;
			RuntimeObject* L_132 = V_6;
			int32_t L_133 = V_7;
			NullCheck(L_132);
			Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 * L_134;
			L_134 = InterfaceFuncInvoker1< Vertex_t706520F0956F841E0F81BE2F1C7AE18817527AB8 *, int32_t >::Invoke(0 /* TriangleNet.Geometry.Vertex TriangleNet.Geometry.ITriangle::GetVertex(System.Int32) */, ITriangle_t921A41DB0237BD0896214FF0036D597D7661A6A7_il2cpp_TypeInfo_var, L_132, L_133);
			NullCheck(L_134);
			double L_135;
			L_135 = Point_get_Y_m378383A2240D4D373A366FC3197B3AD216E3B835(L_134, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136;
			memset((&L_136), 0, sizeof(L_136));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_136), ((float)((float)L_130)), L_131, ((float)((float)L_135)), /*hidden argument*/NULL);
			NullCheck(L_126);
			List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_126, L_136, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
			// outIndices.Add(outVertices.Count - 1);  // pointing to the newly added vertex (== last one in the list)
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** L_137 = ___outIndices3;
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_138 = *((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)L_137);
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** L_139 = ___outVertices4;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_140 = *((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)L_139);
			NullCheck(L_140);
			int32_t L_141;
			L_141 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_140, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
			NullCheck(L_138);
			List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_138, ((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		}

IL_0251:
		{
			// for (int j = 2; j >= 0; j--)
			int32_t L_142 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_142, (int32_t)1));
		}

IL_0257:
		{
			// for (int j = 2; j >= 0; j--)
			int32_t L_143 = V_7;
			if ((((int32_t)L_143) >= ((int32_t)0)))
			{
				goto IL_0190;
			}
		}

IL_025f:
		{
			// foreach (ITriangle t in mesh.Triangles)
			RuntimeObject* L_144 = V_5;
			NullCheck(L_144);
			bool L_145;
			L_145 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_144);
			if (L_145)
			{
				goto IL_017f;
			}
		}

IL_026b:
		{
			IL2CPP_LEAVE(0x279, FINALLY_026d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_026d;
	}

FINALLY_026d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_146 = V_5;
			if (!L_146)
			{
				goto IL_0278;
			}
		}

IL_0271:
		{
			RuntimeObject* L_147 = V_5;
			NullCheck(L_147);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_147);
		}

IL_0278:
		{
			IL2CPP_END_FINALLY(621)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(621)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x279, IL_0279)
	}

IL_0279:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Triangulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangulation__ctor_m8231BF66B951AA7F9D0E4C1A7CD8F5D2B08A959D (Triangulation_t1B52FD2CEED342462F96059F1A371019DA8DFE94 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void TriangulationTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationTest_Start_mE30FF76910BC2B9B088B0312B36E485D844FB384 (TriangulationTest_t19A4B647529A71B39C97DC502B8F585795AFFE90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79EDB6FA3FCAD26B43E0E27CDAC913C8B11AB536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6195A60B7D31ACB115F1C5363B46CE01050BFA6);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_0 = NULL;
	List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * V_1 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_2 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_3 = NULL;
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * V_4 = NULL;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_5 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_6 = NULL;
	int32_t V_7 = 0;
	{
		// GameObject go = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		// go.transform.parent = this.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_2, L_3, /*hidden argument*/NULL);
		// go.name = "Cross";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_1;
		NullCheck(L_4);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_4, _stringLiteralA6195A60B7D31ACB115F1C5363B46CE01050BFA6, /*hidden argument*/NULL);
		// MeshFilter mf = go.AddComponent<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		NullCheck(L_5);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_6;
		L_6 = GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2(L_5, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		V_0 = L_6;
		// MeshCollider mc = go.AddComponent<MeshCollider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_5;
		NullCheck(L_7);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_8;
		L_8 = GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647(L_7, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m59630B0D1B4EC15877C10A8952FAD05E4509D647_RuntimeMethod_var);
		// MeshRenderer mr = go.AddComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_7;
		NullCheck(L_9);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_10;
		L_10 = GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47(L_9, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		// mr.material = new Material(Shader.Find("Standard"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_11;
		L_11 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_10, L_12, /*hidden argument*/NULL);
		// List<Vector2> points = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_13 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_13, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		// List<List<Vector2>> holes = new List<List<Vector2>>();
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_14 = (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *)il2cpp_codegen_object_new(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var);
		List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20(L_14, /*hidden argument*/List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var);
		V_1 = L_14;
		// List<int> indices = null;
		V_2 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)NULL;
		// List<Vector3> vertices = null;
		V_3 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL;
		// points.Add(new Vector2(10,0));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_15 = L_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), (10.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_15, L_16, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(20,0));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_17 = L_15;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), (20.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_17, L_18, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(20,10));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_19 = L_17;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), (20.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_19, L_20, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(30,10));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_21 = L_19;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), (30.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_21, L_22, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(30,20));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_23 = L_21;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_24), (30.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_23, L_24, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(20,20));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_25 = L_23;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), (20.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_25, L_26, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(20,30));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_27 = L_25;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_28), (20.0f), (30.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_27, L_28, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(10,30));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_29 = L_27;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), (10.0f), (30.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_29, L_30, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(10,20));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_31 = L_29;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_32), (10.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_31, L_32, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(0,20));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_33 = L_31;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_34), (0.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_33, L_34, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(0,10));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_35 = L_33;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_36), (0.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_35, L_36, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// points.Add(new Vector2(10,10));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_37 = L_35;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), (10.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_37, L_38, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// List<Vector2> hole = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_39 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_39, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		V_4 = L_39;
		// hole.Add(new Vector2(12,12));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_40 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_41), (12.0f), (12.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_40, L_41, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// hole.Add(new Vector2(18,12));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_42 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_43), (18.0f), (12.0f), /*hidden argument*/NULL);
		NullCheck(L_42);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_42, L_43, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// hole.Add(new Vector2(18,18));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_44 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_45), (18.0f), (18.0f), /*hidden argument*/NULL);
		NullCheck(L_44);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_44, L_45, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// hole.Add(new Vector2(12,18));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_46 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_47), (12.0f), (18.0f), /*hidden argument*/NULL);
		NullCheck(L_46);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_46, L_47, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// holes.Add(hole);
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_48 = V_1;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_49 = V_4;
		NullCheck(L_48);
		List_1_Add_m79EDB6FA3FCAD26B43E0E27CDAC913C8B11AB536(L_48, L_49, /*hidden argument*/List_1_Add_m79EDB6FA3FCAD26B43E0E27CDAC913C8B11AB536_RuntimeMethod_var);
		// Triangulation.triangulate(points, holes, 0.0f, out indices, out vertices);
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_50 = V_1;
		bool L_51;
		L_51 = Triangulation_triangulate_mB97DB2E02F66AC3728DDD37AFEAB50322F54A6CA(L_37, L_50, (0.0f), (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)(&V_2), (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)(&V_3), /*hidden argument*/NULL);
		// Mesh mesh = mf.mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_52 = V_0;
		NullCheck(L_52);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_53;
		L_53 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		// mesh.Clear();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_54 = V_5;
		NullCheck(L_54);
		Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_54, /*hidden argument*/NULL);
		// mesh.vertices = vertices.ToArray();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_55 = V_5;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_56 = V_3;
		NullCheck(L_56);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_57;
		L_57 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_56, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		NullCheck(L_55);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_55, L_57, /*hidden argument*/NULL);
		// mesh.triangles = indices.ToArray();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_58 = V_5;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_59 = V_2;
		NullCheck(L_59);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60;
		L_60 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_59, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		NullCheck(L_58);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_58, L_60, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_61 = V_5;
		NullCheck(L_61);
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_61, /*hidden argument*/NULL);
		// go.GetComponent<MeshCollider>().sharedMesh = mesh;
		NullCheck(L_9);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_62;
		L_62 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_9, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_63 = V_5;
		NullCheck(L_62);
		MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406(L_62, L_63, /*hidden argument*/NULL);
		// Vector2[] uvs = new Vector2[mesh.vertices.Length];
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_64 = V_5;
		NullCheck(L_64);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_65;
		L_65 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_66 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))));
		V_6 = L_66;
		// for (int i = 0; i < uvs.Length; i++)
		V_7 = 0;
		goto IL_0256;
	}

IL_021c:
	{
		// uvs[i] = new Vector2(mesh.vertices[i].x, mesh.vertices[i].y);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_67 = V_6;
		int32_t L_68 = V_7;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_69 = V_5;
		NullCheck(L_69);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_70;
		L_70 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_69, /*hidden argument*/NULL);
		int32_t L_71 = V_7;
		NullCheck(L_70);
		float L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->get_x_2();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_73 = V_5;
		NullCheck(L_73);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74;
		L_74 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_73, /*hidden argument*/NULL);
		int32_t L_75 = V_7;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_77), L_72, L_76, /*hidden argument*/NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_77);
		// for (int i = 0; i < uvs.Length; i++)
		int32_t L_78 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_0256:
	{
		// for (int i = 0; i < uvs.Length; i++)
		int32_t L_79 = V_7;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_80 = V_6;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length))))))
		{
			goto IL_021c;
		}
	}
	{
		// mesh.uv = uvs;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_81 = V_5;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_82 = V_6;
		NullCheck(L_81);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_81, L_82, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangulationTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationTest__ctor_mA910DA917E7A77488958CA5C3025D6876994A1B3 (TriangulationTest_t19A4B647529A71B39C97DC502B8F585795AFFE90 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void cdata::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cdata_Start_mCE3699E7723C722CE111BA5216DD31226321EBF8 (cdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single cdata::getVol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float cdata_getVol_m45221A8113772B34E96C2861C4E12F09D47CB58B (cdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA * __this, const RuntimeMethod* method)
{
	{
		// vol = lenX * lenY * lenZ;
		float L_0 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenX_4();
		float L_1 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenY_5();
		float L_2 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenZ_6();
		((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->set_vol_7(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2)));
		// return vol;
		float L_3 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_vol_7();
		return L_3;
	}
}
// System.Void cdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cdata__ctor_m6253FA13F20B0731876EED12B18867F888843D7B (cdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA * __this, const RuntimeMethod* method)
{
	{
		data__ctor_m5AE1DD091122076ACC607C938ECAA2B948C18D1F(__this, /*hidden argument*/NULL);
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
// System.Void control::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_Update_m2C75CE1525FAD7FE749804E2AC7FAC591D9DB030 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canva.GetComponent<UnityEngine.UI.Text>().text = "";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_canva_8();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void control::addCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_addCube_mBF91395DBE706063A04A23B1AD871A199DA3D9F0 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_m079E2CEA7DBE56B314D5DE16053AB748D44B2125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_Tiscdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA_m1299684FEA5A6C6A701A777F3D4A76B73139611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B3_0 = NULL;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B4_1 = NULL;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B6_0 = NULL;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B5_0 = NULL;
	float G_B7_0 = 0.0f;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B7_1 = NULL;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B9_0 = NULL;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B8_0 = NULL;
	float G_B10_0 = 0.0f;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * G_B10_1 = NULL;
	{
		// GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(3, /*hidden argument*/NULL);
		V_0 = L_0;
		// currObj = cube;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		__this->set_currObj_7(L_1);
		// cube.name = "Object(" + objNo + ")";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		int32_t* L_3 = __this->get_address_of_objNo_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB, L_4, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_2, L_5, /*hidden argument*/NULL);
		// objNo++;
		int32_t L_6 = __this->get_objNo_4();
		__this->set_objNo_4(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// cube.AddComponent<cdata>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		NullCheck(L_7);
		cdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA * L_8;
		L_8 = GameObject_AddComponent_Tiscdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA_m1299684FEA5A6C6A701A777F3D4A76B73139611E(L_7, /*hidden argument*/GameObject_AddComponent_Tiscdata_tF8BC320AF3C45687DEC76E6744077F0FCDA0DBDA_m1299684FEA5A6C6A701A777F3D4A76B73139611E_RuntimeMethod_var);
		// for (int i=0;i<8;i++)
		V_1 = 0;
		goto IL_00a1;
	}

IL_0047:
	{
		// var sc = cube.AddComponent<SphereCollider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_9);
		SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * L_10;
		L_10 = GameObject_AddComponent_TisSphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_m079E2CEA7DBE56B314D5DE16053AB748D44B2125(L_9, /*hidden argument*/GameObject_AddComponent_TisSphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_m079E2CEA7DBE56B314D5DE16053AB748D44B2125_RuntimeMethod_var);
		// float x = (i & 1)!=0 ? 0.5f : -0.5f;
		int32_t L_11 = V_1;
		G_B2_0 = L_10;
		if (((int32_t)((int32_t)L_11&(int32_t)1)))
		{
			G_B3_0 = L_10;
			goto IL_0059;
		}
	}
	{
		G_B4_0 = (-0.5f);
		G_B4_1 = G_B2_0;
		goto IL_005e;
	}

IL_0059:
	{
		G_B4_0 = (0.5f);
		G_B4_1 = G_B3_0;
	}

IL_005e:
	{
		V_2 = G_B4_0;
		// float y = (i & 1<<1) != 0 ? 0.5f : -0.5f;
		int32_t L_12 = V_1;
		G_B5_0 = G_B4_1;
		if (((int32_t)((int32_t)L_12&(int32_t)2)))
		{
			G_B6_0 = G_B4_1;
			goto IL_006b;
		}
	}
	{
		G_B7_0 = (-0.5f);
		G_B7_1 = G_B5_0;
		goto IL_0070;
	}

IL_006b:
	{
		G_B7_0 = (0.5f);
		G_B7_1 = G_B6_0;
	}

IL_0070:
	{
		V_3 = G_B7_0;
		// float z = (i & 1<<2) != 0 ? 0.5f : -0.5f;
		int32_t L_13 = V_1;
		G_B8_0 = G_B7_1;
		if (((int32_t)((int32_t)L_13&(int32_t)4)))
		{
			G_B9_0 = G_B7_1;
			goto IL_007d;
		}
	}
	{
		G_B10_0 = (-0.5f);
		G_B10_1 = G_B8_0;
		goto IL_0082;
	}

IL_007d:
	{
		G_B10_0 = (0.5f);
		G_B10_1 = G_B9_0;
	}

IL_0082:
	{
		V_4 = G_B10_0;
		// sc.center = new Vector3(x, y, z);
		SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * L_14 = G_B10_1;
		float L_15 = V_2;
		float L_16 = V_3;
		float L_17 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), L_15, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		SphereCollider_set_center_mD5E898A2FED304A82BC67ABB11B60BB0F612CED7(L_14, L_18, /*hidden argument*/NULL);
		// sc.radius = 0.2f;
		NullCheck(L_14);
		SphereCollider_set_radius_m55A0D144B32871AECC2A83FBCF423FBE1E5A63A0(L_14, (0.200000003f), /*hidden argument*/NULL);
		// for (int i=0;i<8;i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_00a1:
	{
		// for (int i=0;i<8;i++)
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)8)))
		{
			goto IL_0047;
		}
	}
	{
		// initializeObj(cube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_0;
		control_initializeObj_mF6786718B42D9BC7CD54F7D7CE542911CE42DD78(__this, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void control::setEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_setEdge_m53256BCFD38B5AEA771A8C1364071C6EF6C34FDC (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, int32_t ___e0, const RuntimeMethod* method)
{
	{
		// edge = e;
		int32_t L_0 = ___e0;
		__this->set_edge_9(L_0);
		// }
		return;
	}
}
// System.Void control::addPrism()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_addPrism_m0DC22B14C0EB3F3412A89F6CD400DA14AAB98CD0 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_Tispdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8_m03F1A431873ACA3F6CCF323A3D3E2D2198DDB6F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject empty = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// empty.name= "Object(" + objNo + ")";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		int32_t* L_2 = __this->get_address_of_objNo_4();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB, L_3, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_1, L_4, /*hidden argument*/NULL);
		// objNo++;
		int32_t L_5 = __this->get_objNo_4();
		__this->set_objNo_4(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// gen g = new gen();
		gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * L_6 = (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 *)il2cpp_codegen_object_new(gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557_il2cpp_TypeInfo_var);
		gen__ctor_m68B3DCC03F270CE540C47D436C34139BD6ED0547(L_6, /*hidden argument*/NULL);
		// g.getObj(empty,edge);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		int32_t L_8 = __this->get_edge_9();
		NullCheck(L_6);
		gen_getObj_m56735E38C98BF6281E6C137BA6EBC7839D1A90EC(L_6, L_7, L_8, /*hidden argument*/NULL);
		// currObj = empty;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		__this->set_currObj_7(L_9);
		// empty.AddComponent<pdata>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		NullCheck(L_10);
		pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * L_11;
		L_11 = GameObject_AddComponent_Tispdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8_m03F1A431873ACA3F6CCF323A3D3E2D2198DDB6F4(L_10, /*hidden argument*/GameObject_AddComponent_Tispdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8_m03F1A431873ACA3F6CCF323A3D3E2D2198DDB6F4_RuntimeMethod_var);
		// initializeObj(empty);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_0;
		control_initializeObj_mF6786718B42D9BC7CD54F7D7CE542911CE42DD78(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void control::addSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_addSphere_m36974CA2A96C4FAA8F59D73E066F87184E80295C (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_Tissdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706_m4B972E55204A47D84A46A89569655E69FE74F0E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject sp = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(0, /*hidden argument*/NULL);
		V_0 = L_0;
		// currObj = sp;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		__this->set_currObj_7(L_1);
		// sp.name = "Object(" + objNo + ")";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		int32_t* L_3 = __this->get_address_of_objNo_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB, L_4, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_2, L_5, /*hidden argument*/NULL);
		// sp.AddComponent<sdata>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		sdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706 * L_7;
		L_7 = GameObject_AddComponent_Tissdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706_m4B972E55204A47D84A46A89569655E69FE74F0E1(L_6, /*hidden argument*/GameObject_AddComponent_Tissdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706_m4B972E55204A47D84A46A89569655E69FE74F0E1_RuntimeMethod_var);
		// objNo++;
		int32_t L_8 = __this->get_objNo_4();
		__this->set_objNo_4(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// initializeObj(sp);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		control_initializeObj_mF6786718B42D9BC7CD54F7D7CE542911CE42DD78(__this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void control::addCylinder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_addCylinder_m9919BB5E884E59BD85CFE23C8A861544CD40F17A (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_Tiscrdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30_m93D5F98BCE67D4709315B6E77EEAC186D3E193EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject cr = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(2, /*hidden argument*/NULL);
		V_0 = L_0;
		// currObj = cr;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		__this->set_currObj_7(L_1);
		// cr.name = "Object(" + objNo + ")";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		int32_t* L_3 = __this->get_address_of_objNo_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB, L_4, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_2, L_5, /*hidden argument*/NULL);
		// objNo++;
		int32_t L_6 = __this->get_objNo_4();
		__this->set_objNo_4(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// cr.AddComponent<crdata>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		NullCheck(L_7);
		crdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30 * L_8;
		L_8 = GameObject_AddComponent_Tiscrdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30_m93D5F98BCE67D4709315B6E77EEAC186D3E193EB(L_7, /*hidden argument*/GameObject_AddComponent_Tiscrdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30_m93D5F98BCE67D4709315B6E77EEAC186D3E193EB_RuntimeMethod_var);
		// initializeObj(cr);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		control_initializeObj_mF6786718B42D9BC7CD54F7D7CE542911CE42DD78(__this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void control::delObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_delObj_mB6488CF640157EB6F4ACD856640A25555A5A6ACE (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(currObj);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_currObj_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// currObj = null;
		__this->set_currObj_7((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void control::dupObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_dupObj_mE1A4750FC3D02598F1EF7AA8CEB16CF72A82F5B9 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject dup = GameObject.Instantiate(currObj);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_currObj_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// dup.name= "Object(" + objNo + ")";
		int32_t* L_2 = __this->get_address_of_objNo_4();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD3B1204477D36D7B96DA93C26A5CDD2CDC74FDEB, L_3, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_1, L_4, /*hidden argument*/NULL);
		// objNo++;
		int32_t L_5 = __this->get_objNo_4();
		__this->set_objNo_4(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// System.Void control::initializeObj(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_initializeObj_mF6786718B42D9BC7CD54F7D7CE542911CE42DD78 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A_m5FBE86F6B3366A2E39022477D835758E76E0072A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m1F85A825A2BF7119515E9C3DF2CAD3F569061DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB_m3B7118383D13B13D4AC811145F0E7DB3230174AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656_m28BE61ABE16C00C06E39F076A2E35506414DEA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_mBAEC3A8B0C6AB1361E3AF8B57D941848F8EBED28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * V_0 = NULL;
	MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * V_1 = NULL;
	{
		// obj.transform.position = new Vector3(0, 0, 0.4f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___obj0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.400000006f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// obj.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___obj0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_4, L_5, /*hidden argument*/NULL);
		// obj.AddComponent<BoxCollider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___obj0;
		NullCheck(L_6);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_7;
		L_7 = GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B(L_6, /*hidden argument*/GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B_RuntimeMethod_var);
		// var comp = obj.AddComponent<ObjectManipulator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ___obj0;
		NullCheck(L_8);
		ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * L_9;
		L_9 = GameObject_AddComponent_TisObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656_m28BE61ABE16C00C06E39F076A2E35506414DEA27(L_8, /*hidden argument*/GameObject_AddComponent_TisObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656_m28BE61ABE16C00C06E39F076A2E35506414DEA27_RuntimeMethod_var);
		// comp.OneHandRotationModeNear = ObjectManipulator.RotateInOneHandType.RotateAboutObjectCenter;
		ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * L_10 = L_9;
		NullCheck(L_10);
		ObjectManipulator_set_OneHandRotationModeNear_mD58B1254B0869D1F383CF58E68C850E5DB271A6D_inline(L_10, 0, /*hidden argument*/NULL);
		// comp.OneHandRotationModeFar = ObjectManipulator.RotateInOneHandType.RotateAboutObjectCenter;
		ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * L_11 = L_10;
		NullCheck(L_11);
		ObjectManipulator_set_OneHandRotationModeFar_m4A55CFC86659638B64CF15B70923B5F791AE230A_inline(L_11, 0, /*hidden argument*/NULL);
		// comp.TwoHandedManipulationType = TransformFlags.Scale;
		NullCheck(L_11);
		ObjectManipulator_set_TwoHandedManipulationType_m86D4A91ACBAD7BD5737A9AF519F57C7814137C97_inline(L_11, 4, /*hidden argument*/NULL);
		// var rotCon = currObj.AddComponent<RotationAxisConstraint>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_currObj_7();
		NullCheck(L_12);
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_13;
		L_13 = GameObject_AddComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_mBAEC3A8B0C6AB1361E3AF8B57D941848F8EBED28(L_12, /*hidden argument*/GameObject_AddComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_mBAEC3A8B0C6AB1361E3AF8B57D941848F8EBED28_RuntimeMethod_var);
		V_0 = L_13;
		// rotCon.ConstraintOnRotation = (AxisFlags)0;
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_14 = V_0;
		NullCheck(L_14);
		RotationAxisConstraint_set_ConstraintOnRotation_mEBEBBD29B6141D23AD2C01804AFC9082221631B5_inline(L_14, 0, /*hidden argument*/NULL);
		// var moveCon = currObj.AddComponent<MoveAxisConstraint>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_currObj_7();
		NullCheck(L_15);
		MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * L_16;
		L_16 = GameObject_AddComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m1F85A825A2BF7119515E9C3DF2CAD3F569061DD4(L_15, /*hidden argument*/GameObject_AddComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m1F85A825A2BF7119515E9C3DF2CAD3F569061DD4_RuntimeMethod_var);
		V_1 = L_16;
		// rotCon.ConstraintOnRotation = (AxisFlags)0;
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_17 = V_0;
		NullCheck(L_17);
		RotationAxisConstraint_set_ConstraintOnRotation_mEBEBBD29B6141D23AD2C01804AFC9082221631B5_inline(L_17, 0, /*hidden argument*/NULL);
		// var manager = currObj.GetComponent<ConstraintManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_currObj_7();
		NullCheck(L_18);
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_19;
		L_19 = GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762(L_18, /*hidden argument*/GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762_RuntimeMethod_var);
		// manager.AutoConstraintSelection = false;
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_20 = L_19;
		NullCheck(L_20);
		ConstraintManager_set_AutoConstraintSelection_m235B808D17BB54DBC9437B75B726A168CA35CFE1_inline(L_20, (bool)0, /*hidden argument*/NULL);
		// manager.AddConstraintToManualSelection(rotCon);
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_21 = L_20;
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_22 = V_0;
		NullCheck(L_21);
		bool L_23;
		L_23 = ConstraintManager_AddConstraintToManualSelection_m3D81DC1BECAFC5BFFB7F7FE6D32316EA2F6FC86D(L_21, L_22, /*hidden argument*/NULL);
		// manager.AddConstraintToManualSelection(moveCon);
		MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * L_24 = V_1;
		NullCheck(L_21);
		bool L_25;
		L_25 = ConstraintManager_AddConstraintToManualSelection_m3D81DC1BECAFC5BFFB7F7FE6D32316EA2F6FC86D(L_21, L_24, /*hidden argument*/NULL);
		// obj.AddComponent<NearInteractionGrabbable>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = ___obj0;
		NullCheck(L_26);
		NearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB * L_27;
		L_27 = GameObject_AddComponent_TisNearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB_m3B7118383D13B13D4AC811145F0E7DB3230174AD(L_26, /*hidden argument*/GameObject_AddComponent_TisNearInteractionGrabbable_tAF5330BC77E93B50FE0CA52BA952A626ADFF69CB_m3B7118383D13B13D4AC811145F0E7DB3230174AD_RuntimeMethod_var);
		// var bound=obj.AddComponent<BoundsControl>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = ___obj0;
		NullCheck(L_28);
		BoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A * L_29;
		L_29 = GameObject_AddComponent_TisBoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A_m5FBE86F6B3366A2E39022477D835758E76E0072A(L_28, /*hidden argument*/GameObject_AddComponent_TisBoundsControl_tEA8BA48594C9FABC9101B8448F6C40EE3AF42A0A_m5FBE86F6B3366A2E39022477D835758E76E0072A_RuntimeMethod_var);
		// bound.BoundsControlActivation = BoundsControlActivationType.ActivateByProximity;
		NullCheck(L_29);
		BoundsControl_set_BoundsControlActivation_mEDDFC167EA6FEE430FBFAC802CD488703B4D8FE7(L_29, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void control::setAxis(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_setAxis_mD4E2B1408CB7A4EA0F8F55F838DA86AEB1A31BA3 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, int32_t ___ax0, const RuntimeMethod* method)
{
	{
		// axis = ax;
		int32_t L_0 = ___ax0;
		__this->set_axis_6(L_0);
		// set();
		control_set_m9FD23F2B588E3D6C861E3152D33AC749026621D3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void control::setMode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_setMode_mFC6562EC9FB8D845D23B294DE44B96D871C458B9 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, String_t* ___m0, const RuntimeMethod* method)
{
	{
		// mode = m;
		String_t* L_0 = ___m0;
		__this->set_mode_5(L_0);
		// set();
		control_set_m9FD23F2B588E3D6C861E3152D33AC749026621D3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void control::setObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_setObject_mC408F6CAF174D12C40F4C9EC1A8BF486E8063A57 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisdata_tDBBD5A62F2E51BEE551958926AE2116476A46E42_mCDDBE05496CF76CA0CE090F22A76E943F173708B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * V_0 = NULL;
	{
		// var d = target.GetComponent<data>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___target0;
		NullCheck(L_0);
		data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * L_1;
		L_1 = GameObject_GetComponent_Tisdata_tDBBD5A62F2E51BEE551958926AE2116476A46E42_mCDDBE05496CF76CA0CE090F22A76E943F173708B(L_0, /*hidden argument*/GameObject_GetComponent_Tisdata_tDBBD5A62F2E51BEE551958926AE2116476A46E42_mCDDBE05496CF76CA0CE090F22A76E943F173708B_RuntimeMethod_var);
		V_0 = L_1;
		// canva.GetComponent<UnityEngine.UI.Text>().text = d.s;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_canva_8();
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_s_8();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// if (target != currObj)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___target0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_currObj_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		// currObj = target;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ___target0;
		__this->set_currObj_7(L_9);
		// set();
		control_set_m9FD23F2B588E3D6C861E3152D33AC749026621D3(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void control::set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control_set_m9FD23F2B588E3D6C861E3152D33AC749026621D3 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m065E88C4E3B2D8C1689CE2513C4CF829320EEBAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_m752BFB82DE0A7557D392FB5129A3D570A9F53C0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F);
		s_Il2CppMethodInitialized = true;
	}
	RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * V_0 = NULL;
	MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * V_1 = NULL;
	RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * V_2 = NULL;
	MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * V_3 = NULL;
	{
		// if (mode == "Rotate")
		String_t* L_0 = __this->get_mode_5();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		// var rotCon = currObj.GetComponent<RotationAxisConstraint>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_currObj_7();
		NullCheck(L_2);
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_3;
		L_3 = GameObject_GetComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_m752BFB82DE0A7557D392FB5129A3D570A9F53C0B(L_2, /*hidden argument*/GameObject_GetComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_m752BFB82DE0A7557D392FB5129A3D570A9F53C0B_RuntimeMethod_var);
		V_0 = L_3;
		// rotCon.ConstraintOnRotation = (AxisFlags)axis;
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_4 = V_0;
		int32_t L_5 = __this->get_axis_6();
		NullCheck(L_4);
		RotationAxisConstraint_set_ConstraintOnRotation_mEBEBBD29B6141D23AD2C01804AFC9082221631B5_inline(L_4, L_5, /*hidden argument*/NULL);
		// var moveCon = currObj.GetComponent<MoveAxisConstraint>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_currObj_7();
		NullCheck(L_6);
		MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * L_7;
		L_7 = GameObject_GetComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m065E88C4E3B2D8C1689CE2513C4CF829320EEBAD(L_6, /*hidden argument*/GameObject_GetComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m065E88C4E3B2D8C1689CE2513C4CF829320EEBAD_RuntimeMethod_var);
		V_1 = L_7;
		// moveCon.ConstraintOnMovement = (AxisFlags)7;
		MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * L_8 = V_1;
		NullCheck(L_8);
		MoveAxisConstraint_set_ConstraintOnMovement_m8F8810F040C6CBA303FAB6E7269BE9FBD42E9D1A_inline(L_8, 7, /*hidden argument*/NULL);
		// var manager = currObj.GetComponent<ConstraintManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_currObj_7();
		NullCheck(L_9);
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_10;
		L_10 = GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762(L_9, /*hidden argument*/GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762_RuntimeMethod_var);
		// manager.AutoConstraintSelection = false;
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_11 = L_10;
		NullCheck(L_11);
		ConstraintManager_set_AutoConstraintSelection_m235B808D17BB54DBC9437B75B726A168CA35CFE1_inline(L_11, (bool)0, /*hidden argument*/NULL);
		// manager.AddConstraintToManualSelection(rotCon);
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_12 = L_11;
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = ConstraintManager_AddConstraintToManualSelection_m3D81DC1BECAFC5BFFB7F7FE6D32316EA2F6FC86D(L_12, L_13, /*hidden argument*/NULL);
		// manager.AddConstraintToManualSelection(moveCon);
		MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * L_15 = V_1;
		NullCheck(L_12);
		bool L_16;
		L_16 = ConstraintManager_AddConstraintToManualSelection_m3D81DC1BECAFC5BFFB7F7FE6D32316EA2F6FC86D(L_12, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005f:
	{
		// else if(mode == "Position")
		String_t* L_17 = __this->get_mode_5();
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00bd;
		}
	}
	{
		// var rotCon = currObj.GetComponent<RotationAxisConstraint>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_currObj_7();
		NullCheck(L_19);
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_20;
		L_20 = GameObject_GetComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_m752BFB82DE0A7557D392FB5129A3D570A9F53C0B(L_19, /*hidden argument*/GameObject_GetComponent_TisRotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657_m752BFB82DE0A7557D392FB5129A3D570A9F53C0B_RuntimeMethod_var);
		V_2 = L_20;
		// rotCon.ConstraintOnRotation = (AxisFlags)7;
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_21 = V_2;
		NullCheck(L_21);
		RotationAxisConstraint_set_ConstraintOnRotation_mEBEBBD29B6141D23AD2C01804AFC9082221631B5_inline(L_21, 7, /*hidden argument*/NULL);
		// var moveCon = currObj.GetComponent<MoveAxisConstraint>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_currObj_7();
		NullCheck(L_22);
		MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * L_23;
		L_23 = GameObject_GetComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m065E88C4E3B2D8C1689CE2513C4CF829320EEBAD(L_22, /*hidden argument*/GameObject_GetComponent_TisMoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6_m065E88C4E3B2D8C1689CE2513C4CF829320EEBAD_RuntimeMethod_var);
		V_3 = L_23;
		// moveCon.ConstraintOnMovement = (AxisFlags)axis;
		MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * L_24 = V_3;
		int32_t L_25 = __this->get_axis_6();
		NullCheck(L_24);
		MoveAxisConstraint_set_ConstraintOnMovement_m8F8810F040C6CBA303FAB6E7269BE9FBD42E9D1A_inline(L_24, L_25, /*hidden argument*/NULL);
		// var manager = currObj.GetComponent<ConstraintManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_currObj_7();
		NullCheck(L_26);
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_27;
		L_27 = GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762(L_26, /*hidden argument*/GameObject_GetComponent_TisConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788_mC2B4303523B0313ABA35EDFFD6C34FDA4B0D4762_RuntimeMethod_var);
		// manager.AutoConstraintSelection = false;
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_28 = L_27;
		NullCheck(L_28);
		ConstraintManager_set_AutoConstraintSelection_m235B808D17BB54DBC9437B75B726A168CA35CFE1_inline(L_28, (bool)0, /*hidden argument*/NULL);
		// manager.AddConstraintToManualSelection(rotCon);
		ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * L_29 = L_28;
		RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * L_30 = V_2;
		NullCheck(L_29);
		bool L_31;
		L_31 = ConstraintManager_AddConstraintToManualSelection_m3D81DC1BECAFC5BFFB7F7FE6D32316EA2F6FC86D(L_29, L_30, /*hidden argument*/NULL);
		// manager.AddConstraintToManualSelection(moveCon);
		MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * L_32 = V_3;
		NullCheck(L_29);
		bool L_33;
		L_33 = ConstraintManager_AddConstraintToManualSelection_m3D81DC1BECAFC5BFFB7F7FE6D32316EA2F6FC86D(L_29, L_32, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void control::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void control__ctor_m0ACE3D82688D315DABFD45CF1F9A03C1BC080FE0 (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string mode = "Position";
		__this->set_mode_5(_stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F);
		// public int edge=5;
		__this->set_edge_9(5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void crdata::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void crdata_Start_m48AD9F0783107B0C405FB624F71B791511E9ADA4 (crdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single crdata::getVol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float crdata_getVol_mAEEF7A3CBC22BDE83E0CF5C6276CD13C95EDBBC2 (crdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30 * __this, const RuntimeMethod* method)
{
	{
		// vol = Mathf.PI * lenX * lenZ * lenY;
		float L_0 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenX_4();
		float L_1 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenZ_6();
		float L_2 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenY_5();
		((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->set_vol_7(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)L_0)), (float)L_1)), (float)L_2)));
		// return vol;
		float L_3 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_vol_7();
		return L_3;
	}
}
// System.Void crdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void crdata__ctor_m39F8977378340AEAC84F20826AF2CEE269690637 (crdata_t67469BC439E5F58FC38BC6144378BCF264DB9B30 * __this, const RuntimeMethod* method)
{
	{
		data__ctor_m5AE1DD091122076ACC607C938ECAA2B948C18D1F(__this, /*hidden argument*/NULL);
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
// System.Void data::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void data_Start_m567C43374827013CE322597542F36FCA6A8BE4BC (data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void data::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void data_Update_mA16C384987C61840E397B7ABF1F365B340B4F26A (data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DAFD09F9DEA04AA14FEFDAF495B80099DBC3EA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D75D49F04E83D2DAA228DBE7E2A08B1946D01C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5904D1E665A90ABFB7B508D23392194681C4EAAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D02ADFE8C38D823DA2F871C18C927A7AF764836);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.hasChanged)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Transform_get_hasChanged_m59490E3CAC42DF8CB2BCDFC0ED75DB6F89432F06(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00f6;
		}
	}
	{
		// lenX = scale * transform.localScale.x;
		float L_2 = __this->get_scale_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		__this->set_lenX_4(((float)il2cpp_codegen_multiply((float)L_2, (float)L_5)));
		// lenZ = scale * transform.localScale.z;
		float L_6 = __this->get_scale_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		__this->set_lenZ_6(((float)il2cpp_codegen_multiply((float)L_6, (float)L_9)));
		// lenY = scale *transform.localScale.y;
		float L_10 = __this->get_scale_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		__this->set_lenY_5(((float)il2cpp_codegen_multiply((float)L_10, (float)L_13)));
		// vol = lenX * lenY * lenZ;
		float L_14 = __this->get_lenX_4();
		float L_15 = __this->get_lenY_5();
		float L_16 = __this->get_lenZ_6();
		__this->set_vol_7(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), (float)L_16)));
		// s = "X-Length=" + lenX + "\nY-Length" + lenY + "\nZ-Length" + lenZ + "\nVolume=" + vol;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral8D02ADFE8C38D823DA2F871C18C927A7AF764836);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8D02ADFE8C38D823DA2F871C18C927A7AF764836);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		float* L_20 = __this->get_address_of_lenX_4();
		String_t* L_21;
		L_21 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral4D75D49F04E83D2DAA228DBE7E2A08B1946D01C4);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4D75D49F04E83D2DAA228DBE7E2A08B1946D01C4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		float* L_24 = __this->get_address_of_lenY_5();
		String_t* L_25;
		L_25 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_23;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral5904D1E665A90ABFB7B508D23392194681C4EAAF);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5904D1E665A90ABFB7B508D23392194681C4EAAF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		float* L_28 = __this->get_address_of_lenZ_6();
		String_t* L_29;
		L_29 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_27;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral0DAFD09F9DEA04AA14FEFDAF495B80099DBC3EA3);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral0DAFD09F9DEA04AA14FEFDAF495B80099DBC3EA3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		float* L_32 = __this->get_address_of_vol_7();
		String_t* L_33;
		L_33 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_33);
		String_t* L_34;
		L_34 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_31, /*hidden argument*/NULL);
		__this->set_s_8(L_34);
		// transform.hasChanged = false;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_hasChanged_mD1CDCAE366DB514FBECD9DAAED0F7834029E1304(L_35, (bool)0, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// }
		return;
	}
}
// System.Single data::getVol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float data_getVol_mAB6AB71C67FDDE89AB90C9F7EA8BDD5961CA0DDF (data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * __this, const RuntimeMethod* method)
{
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void data__ctor_m5AE1DD091122076ACC607C938ECAA2B948C18D1F (data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 * __this, const RuntimeMethod* method)
{
	{
		// public float scale = 100.0f;
		__this->set_scale_9((100.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void gen::getObj(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_getObj_m56735E38C98BF6281E6C137BA6EBC7839D1A90EC (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ob0, int32_t ___e1, const RuntimeMethod* method)
{
	{
		// obj = ob;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___ob0;
		__this->set_obj_4(L_0);
		// edge = e;
		int32_t L_1 = ___e1;
		__this->set_edge_8(L_1);
		// createMesh();
		gen_createMesh_m83BB134E9C266EB5C4F2AEDE04897975F6848C16(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gen::setEdge(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_setEdge_mBCFE255D22E3DD2145DECA7AEC35E3EC21D3599B (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, float ___e0, const RuntimeMethod* method)
{
	{
		// edge = (int)(10 * e);
		float L_0 = ___e0;
		__this->set_edge_8(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_0)))));
		// }
		return;
	}
}
// System.Void gen::createMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_createMesh_m83BB134E9C266EB5C4F2AEDE04897975F6848C16 (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_0, /*hidden argument*/NULL);
		__this->set_mesh_5(L_0);
		// var mf = obj.AddComponent<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_obj_4();
		NullCheck(L_1);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_2;
		L_2 = GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2(L_1, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		// mf.mesh=mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = __this->get_mesh_5();
		NullCheck(L_2);
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_2, L_3, /*hidden argument*/NULL);
		// var mr=obj.AddComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_obj_4();
		NullCheck(L_4);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_5;
		L_5 = GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47(L_4, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		// mr.material = new Material(Shader.Find("Diffuse"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_6;
		L_6 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_5, L_7, /*hidden argument*/NULL);
		// createShape();
		gen_createShape_mE7D9FAE880D1AA404AFAE9B384A1CD6843BAB789(__this, /*hidden argument*/NULL);
		// UpdateMesh();
		gen_UpdateMesh_m2E11693F0CCD15023001798866D8E7E4CFCACA5D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gen::createShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_createShape_mE7D9FAE880D1AA404AFAE9B384A1CD6843BAB789 (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int pts = 2 * edge + 2;
		int32_t L_0 = __this->get_edge_8();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)), (int32_t)2));
		// float side = 0.5f / Mathf.Sin(Mathf.PI / edge);
		int32_t L_1 = __this->get_edge_8();
		float L_2;
		L_2 = sinf(((float)((float)(3.14159274f)/(float)((float)((float)L_1)))));
		V_1 = ((float)((float)(0.5f)/(float)L_2));
		// vert = new Vector3[pts];
		int32_t L_3 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->set_vert_6(L_4);
		// vert[0] = new Vector3(0, 0.5f, 0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = __this->get_vert_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6);
		// vert[edge+1]= new Vector3(0, -0.5f, 0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = __this->get_vert_6();
		int32_t L_8 = __this->get_edge_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (0.0f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_9);
		// for (int j=0;j<edge;j++)
		V_3 = 0;
		goto IL_0129;
	}

IL_007e:
	{
		// vert[j+1] = new Vector3(side * Mathf.Cos((j* 2 * Mathf.PI) / edge),0.5f, -1* side * Mathf.Sin((j * 2 * Mathf.PI) / edge));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = __this->get_vert_6();
		int32_t L_11 = V_3;
		float L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14 = __this->get_edge_8();
		float L_15;
		L_15 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)2)))), (float)(3.14159274f)))/(float)((float)((float)L_14)))));
		float L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = __this->get_edge_8();
		float L_19;
		L_19 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)))), (float)(3.14159274f)))/(float)((float)((float)L_18)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), ((float)il2cpp_codegen_multiply((float)L_12, (float)L_15)), (0.5f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_16)), (float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_20);
		// vert[j + edge + 2] = new Vector3( side * Mathf.Cos((j * 2* Mathf.PI) / edge), -0.5f, -1 * side * Mathf.Sin((j * 2* Mathf.PI) / edge));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = __this->get_vert_6();
		int32_t L_22 = V_3;
		int32_t L_23 = __this->get_edge_8();
		float L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = __this->get_edge_8();
		float L_27;
		L_27 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)2)))), (float)(3.14159274f)))/(float)((float)((float)L_26)))));
		float L_28 = V_1;
		int32_t L_29 = V_3;
		int32_t L_30 = __this->get_edge_8();
		float L_31;
		L_31 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)2)))), (float)(3.14159274f)))/(float)((float)((float)L_30)))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), ((float)il2cpp_codegen_multiply((float)L_24, (float)L_27)), (-0.5f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_28)), (float)L_31)), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23)), (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_32);
		// for (int j=0;j<edge;j++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0129:
	{
		// for (int j=0;j<edge;j++)
		int32_t L_34 = V_3;
		int32_t L_35 = __this->get_edge_8();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_007e;
		}
	}
	{
		// trig = new int[3*4 * edge];
		int32_t L_36 = __this->get_edge_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_36)));
		__this->set_trig_7(L_37);
		// int i = 0;
		V_2 = 0;
		// for(i=0;i<edge-1;i++)
		V_2 = 0;
		goto IL_023d;
	}

IL_0152:
	{
		// trig[12 * i] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = __this->get_trig_7();
		int32_t L_39 = V_2;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_39))), (int32_t)0);
		// trig[12 * i + 1] = i + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = __this->get_trig_7();
		int32_t L_41 = V_2;
		int32_t L_42 = V_2;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_41)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		// trig[12 * i + 2] = i + 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = __this->get_trig_7();
		int32_t L_44 = V_2;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_44)), (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)2)));
		// trig[12 * i + 3] = edge + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = __this->get_trig_7();
		int32_t L_47 = V_2;
		int32_t L_48 = __this->get_edge_8();
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_47)), (int32_t)3))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)));
		// trig[12 * i + 4] = edge + 2 + i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = __this->get_trig_7();
		int32_t L_50 = V_2;
		int32_t L_51 = __this->get_edge_8();
		int32_t L_52 = V_2;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_50)), (int32_t)4))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)2)), (int32_t)L_52)));
		// trig[12 * i + 5] = edge + 3 + i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = __this->get_trig_7();
		int32_t L_54 = V_2;
		int32_t L_55 = __this->get_edge_8();
		int32_t L_56 = V_2;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_54)), (int32_t)5))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)3)), (int32_t)L_56)));
		// trig[12 * i + 6] = i + 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = __this->get_trig_7();
		int32_t L_58 = V_2;
		int32_t L_59 = V_2;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_58)), (int32_t)6))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2)));
		// trig[12 * i + 7] = i + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = __this->get_trig_7();
		int32_t L_61 = V_2;
		int32_t L_62 = V_2;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_61)), (int32_t)7))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1)));
		// trig[12 * i + 8] = edge + 3 + i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_63 = __this->get_trig_7();
		int32_t L_64 = V_2;
		int32_t L_65 = __this->get_edge_8();
		int32_t L_66 = V_2;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_64)), (int32_t)8))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)3)), (int32_t)L_66)));
		// trig[12 * i + 9] = edge + 2 + i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = __this->get_trig_7();
		int32_t L_68 = V_2;
		int32_t L_69 = __this->get_edge_8();
		int32_t L_70 = V_2;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_68)), (int32_t)((int32_t)9)))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)2)), (int32_t)L_70)));
		// trig[12 * i + 10] = edge + 3 + i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = __this->get_trig_7();
		int32_t L_72 = V_2;
		int32_t L_73 = __this->get_edge_8();
		int32_t L_74 = V_2;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_72)), (int32_t)((int32_t)10)))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)3)), (int32_t)L_74)));
		// trig[12 * i + 11] = i + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = __this->get_trig_7();
		int32_t L_76 = V_2;
		int32_t L_77 = V_2;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_76)), (int32_t)((int32_t)11)))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1)));
		// for(i=0;i<edge-1;i++)
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_023d:
	{
		// for(i=0;i<edge-1;i++)
		int32_t L_79 = V_2;
		int32_t L_80 = __this->get_edge_8();
		if ((((int32_t)L_79) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1)))))
		{
			goto IL_0152;
		}
	}
	{
		// trig[12 * i] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = __this->get_trig_7();
		int32_t L_82 = V_2;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_82))), (int32_t)0);
		// trig[12 * i + 1] = i+1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_83 = __this->get_trig_7();
		int32_t L_84 = V_2;
		int32_t L_85 = V_2;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_84)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1)));
		// trig[12 * i + 2] = 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_86 = __this->get_trig_7();
		int32_t L_87 = V_2;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_87)), (int32_t)2))), (int32_t)1);
		// trig[12 * i + 3] = i + 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_88 = __this->get_trig_7();
		int32_t L_89 = V_2;
		int32_t L_90 = V_2;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_89)), (int32_t)3))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)2)));
		// trig[12 * i + 4] = 2 * i + 3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = __this->get_trig_7();
		int32_t L_92 = V_2;
		int32_t L_93 = V_2;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_92)), (int32_t)4))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_93)), (int32_t)3)));
		// trig[12 * i + 5] = i + 3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_94 = __this->get_trig_7();
		int32_t L_95 = V_2;
		int32_t L_96 = V_2;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_95)), (int32_t)5))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)3)));
		// trig[12 * i + 6] = 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_97 = __this->get_trig_7();
		int32_t L_98 = V_2;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_98)), (int32_t)6))), (int32_t)1);
		// trig[12 * i + 7] = i + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_99 = __this->get_trig_7();
		int32_t L_100 = V_2;
		int32_t L_101 = V_2;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_100)), (int32_t)7))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1)));
		// trig[12 * i + 8] = i + 3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_102 = __this->get_trig_7();
		int32_t L_103 = V_2;
		int32_t L_104 = V_2;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_103)), (int32_t)8))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)3)));
		// trig[12 * i + 9] = 2*i + 3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_105 = __this->get_trig_7();
		int32_t L_106 = V_2;
		int32_t L_107 = V_2;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_106)), (int32_t)((int32_t)9)))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_107)), (int32_t)3)));
		// trig[12 * i + 10] = i + 3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_108 = __this->get_trig_7();
		int32_t L_109 = V_2;
		int32_t L_110 = V_2;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_109)), (int32_t)((int32_t)10)))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)3)));
		// trig[12 * i + 11] = i + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_111 = __this->get_trig_7();
		int32_t L_112 = V_2;
		int32_t L_113 = V_2;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_112)), (int32_t)((int32_t)11)))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1)));
		// }
		return;
	}
}
// System.Void gen::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen_UpdateMesh_m2E11693F0CCD15023001798866D8E7E4CFCACA5D (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, const RuntimeMethod* method)
{
	{
		// mesh.Clear();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_mesh_5();
		NullCheck(L_0);
		Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_0, /*hidden argument*/NULL);
		// mesh.vertices = vert;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = __this->get_mesh_5();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = __this->get_vert_6();
		NullCheck(L_1);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_1, L_2, /*hidden argument*/NULL);
		// mesh.triangles = trig;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = __this->get_mesh_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_trig_7();
		NullCheck(L_3);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_3, L_4, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = __this->get_mesh_5();
		NullCheck(L_5);
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gen__ctor_m68B3DCC03F270CE540C47D436C34139BD6ED0547 (gen_tADDAB6D89AB27F8772E5860356E9870D4C59D557 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Single pdata::SignedVolumeOfTriangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pdata_SignedVolumeOfTriangle_mD86E75E02EC6C9E3B80827CD01827D90928F3D81 (pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p21, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p32, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float v321 = p3.x * p2.y * p1.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___p32;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___p21;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___p10;
		float L_5 = L_4.get_z_4();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)L_5));
		// float v231 = p2.x * p3.y * p1.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___p21;
		float L_7 = L_6.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___p32;
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___p10;
		float L_11 = L_10.get_z_4();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)), (float)L_11));
		// float v312 = p3.x * p1.y * p2.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___p32;
		float L_13 = L_12.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___p10;
		float L_15 = L_14.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___p21;
		float L_17 = L_16.get_z_4();
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_15)), (float)L_17));
		// float v132 = p1.x * p3.y * p2.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___p10;
		float L_19 = L_18.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___p32;
		float L_21 = L_20.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = ___p21;
		float L_23 = L_22.get_z_4();
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_21)), (float)L_23));
		// float v213 = p2.x * p1.y * p3.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___p21;
		float L_25 = L_24.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = ___p10;
		float L_27 = L_26.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = ___p32;
		float L_29 = L_28.get_z_4();
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_27)), (float)L_29));
		// float v123 = p1.x * p2.y * p3.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = ___p10;
		float L_31 = L_30.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = ___p21;
		float L_33 = L_32.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = ___p32;
		float L_35 = L_34.get_z_4();
		V_5 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_33)), (float)L_35));
		// return (1.0f / 6.0f) * (-v321 + v231 + v312 - v132 - v213 + v123);
		float L_36 = V_0;
		float L_37 = V_1;
		float L_38 = V_2;
		float L_39 = V_3;
		float L_40 = V_4;
		float L_41 = V_5;
		return ((float)il2cpp_codegen_multiply((float)(0.166666672f), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((-L_36)), (float)L_37)), (float)L_38)), (float)L_39)), (float)L_40)), (float)L_41))));
	}
}
// System.Single pdata::VolumeOfMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pdata_VolumeOfMesh_mB9E0FFB21DED1C5DC0993080F654B7B454AA994E (pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float volume = 0;
		V_0 = (0.0f);
		// Vector3[] vertices = mesh.vertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		NullCheck(L_0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1;
		L_1 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// int[] triangles = mesh.triangles;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = ___mesh0;
		NullCheck(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3;
		L_3 = Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// for (int i = 0; i < mesh.triangles.Length; i += 3)
		V_3 = 0;
		goto IL_0050;
	}

IL_0018:
	{
		// Vector3 p1 = vertices[triangles[i + 0]];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		int32_t L_9 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// Vector3 p2 = vertices[triangles[i + 1]];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		int32_t L_16 = L_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		// Vector3 p3 = vertices[triangles[i + 2]];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_18 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2));
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		// volume += SignedVolumeOfTriangle(p1, p2, p3);
		float L_25 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_6;
		float L_29;
		L_29 = pdata_SignedVolumeOfTriangle_mD86E75E02EC6C9E3B80827CD01827D90928F3D81(__this, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_25, (float)L_29));
		// for (int i = 0; i < mesh.triangles.Length; i += 3)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)3));
	}

IL_0050:
	{
		// for (int i = 0; i < mesh.triangles.Length; i += 3)
		int32_t L_31 = V_3;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_32 = ___mesh0;
		NullCheck(L_32);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33;
		L_33 = Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		// return Mathf.Abs(volume);
		float L_34 = V_0;
		float L_35;
		L_35 = fabsf(L_34);
		return L_35;
	}
}
// System.Single pdata::getVol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pdata_getVol_mE1ED50C1917DEC8D019CC1F74F3E438D7F6EC048 (pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_0 = NULL;
	{
		// Mesh mesh = GetComponent<MeshFilter>().sharedMesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		NullCheck(L_0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1;
		L_1 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return VolumeOfMesh(mesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = V_0;
		float L_3;
		L_3 = pdata_VolumeOfMesh_mB9E0FFB21DED1C5DC0993080F654B7B454AA994E(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void pdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pdata__ctor_mBAF49C42D25344F40FC91F799B7294E976437D5A (pdata_t7F5553F5AB92442EDD31F058573E42DED8E97AC8 * __this, const RuntimeMethod* method)
{
	{
		data__ctor_m5AE1DD091122076ACC607C938ECAA2B948C18D1F(__this, /*hidden argument*/NULL);
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
// System.Void sdata::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sdata_Start_m2A3C214C07A885FA2D4C4AA065A5CD3605870068 (sdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single sdata::getVol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float sdata_getVol_m0B974414E56DF189FCAC513B337C2FE4DBFDAB64 (sdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706 * __this, const RuntimeMethod* method)
{
	{
		// vol = (4.0f * Mathf.PI * lenX * lenY * lenZ) / 3;
		float L_0 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenX_4();
		float L_1 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenY_5();
		float L_2 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_lenZ_6();
		((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->set_vol_7(((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(12.566371f), (float)L_0)), (float)L_1)), (float)L_2))/(float)(3.0f))));
		// return vol;
		float L_3 = ((data_tDBBD5A62F2E51BEE551958926AE2116476A46E42 *)__this)->get_vol_7();
		return L_3;
	}
}
// System.Void sdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sdata__ctor_m665928E60EDBA8FD57B4F5D1668FE4D2FBF69001 (sdata_tFEAE95F406125B6340EFDA5649F8C3C5E445C706 * __this, const RuntimeMethod* method)
{
	{
		data__ctor_m5AE1DD091122076ACC607C938ECAA2B948C18D1F(__this, /*hidden argument*/NULL);
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
// System.Void sliderScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sliderScript_Start_m6772526B81628B15999AA6BFDE3C49FD58E17457 (sliderScript_tDEDAA3A05EFA9DA68C25302754C9F25D9191272A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mE34B87CB7468D1DA1077450B4DC647805443E959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m88C5B696167573FF9B2668D125CEA3DAFB949CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sliderScript_U3CStartU3Eb__3_0_m2B08E860D02B8591151D90C7EB29FD4C5448C4A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slid.OnValueUpdated.AddListener((v) =>
		// {
		//     int x = (int)(5 + 10 * v.NewValue);
		//     con.GetComponent<control>().setEdge(x);
		//     txt.GetComponent<Text>().text = x.ToString();
		// });
		PinchSlider_t6CCA415AA7ADB1115ABAC1AA23A4B7D2E5759D5A * L_0 = __this->get_slid_4();
		NullCheck(L_0);
		SliderEvent_t432554016CF5C6AC20C1D7DDC74079EBDADC955C * L_1 = L_0->get_OnValueUpdated_19();
		UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4 * L_2 = (UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4 *)il2cpp_codegen_object_new(UnityAction_1_t367E1D0080B975E61CF150033C2EA00784C5A3B4_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mE34B87CB7468D1DA1077450B4DC647805443E959(L_2, __this, (intptr_t)((intptr_t)sliderScript_U3CStartU3Eb__3_0_m2B08E860D02B8591151D90C7EB29FD4C5448C4A9_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mE34B87CB7468D1DA1077450B4DC647805443E959_RuntimeMethod_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m88C5B696167573FF9B2668D125CEA3DAFB949CEA(L_1, L_2, /*hidden argument*/UnityEvent_1_AddListener_m88C5B696167573FF9B2668D125CEA3DAFB949CEA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void sliderScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sliderScript__ctor_mB9E8B546B60088EA7C078D58672E71FA5482B821 (sliderScript_tDEDAA3A05EFA9DA68C25302754C9F25D9191272A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void sliderScript::<Start>b__3_0(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sliderScript_U3CStartU3Eb__3_0_m2B08E860D02B8591151D90C7EB29FD4C5448C4A9 (sliderScript_tDEDAA3A05EFA9DA68C25302754C9F25D9191272A * __this, SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tiscontrol_t4A4DAD829429C0D41AE49F71182A0C075D2EB896_m635AB4BED71905B001AE02DC4F82681F9040B2E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int x = (int)(5 + 10 * v.NewValue);
		SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A * L_0 = ___v0;
		NullCheck(L_0);
		float L_1;
		L_1 = SliderEventData_get_NewValue_m4720B3AFC3DE69DF7B3C6D10801809CB0D05AE35_inline(L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)(5.0f), (float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_1))))));
		// con.GetComponent<control>().setEdge(x);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_con_5();
		NullCheck(L_2);
		control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * L_3;
		L_3 = GameObject_GetComponent_Tiscontrol_t4A4DAD829429C0D41AE49F71182A0C075D2EB896_m635AB4BED71905B001AE02DC4F82681F9040B2E3(L_2, /*hidden argument*/GameObject_GetComponent_Tiscontrol_t4A4DAD829429C0D41AE49F71182A0C075D2EB896_m635AB4BED71905B001AE02DC4F82681F9040B2E3_RuntimeMethod_var);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		control_setEdge_m53256BCFD38B5AEA771A8C1364071C6EF6C34FDC_inline(L_3, L_4, /*hidden argument*/NULL);
		// txt.GetComponent<Text>().text = x.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_txt_6();
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6;
		L_6 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_5, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// });
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectManipulator_set_OneHandRotationModeNear_mD58B1254B0869D1F383CF58E68C850E5DB271A6D_inline (ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => oneHandRotationModeNear = value;
		int32_t L_0 = ___value0;
		__this->set_oneHandRotationModeNear_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectManipulator_set_OneHandRotationModeFar_m4A55CFC86659638B64CF15B70923B5F791AE230A_inline (ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => oneHandRotationModeFar = value;
		int32_t L_0 = ___value0;
		__this->set_oneHandRotationModeFar_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectManipulator_set_TwoHandedManipulationType_m86D4A91ACBAD7BD5737A9AF519F57C7814137C97_inline (ObjectManipulator_tAA6BFD79B19EF8EAEFFB1A96698FBFFFC2F83656 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => twoHandedManipulationType = value;
		int32_t L_0 = ___value0;
		__this->set_twoHandedManipulationType_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotationAxisConstraint_set_ConstraintOnRotation_mEBEBBD29B6141D23AD2C01804AFC9082221631B5_inline (RotationAxisConstraint_t0092CEE1868647A3D48E58CC008BFB5A8CE32657 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => constraintOnRotation = value;
		int32_t L_0 = ___value0;
		__this->set_constraintOnRotation_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstraintManager_set_AutoConstraintSelection_m235B808D17BB54DBC9437B75B726A168CA35CFE1_inline (ConstraintManager_tF93DD3A05DC2C1028E485344259BFEB56C9C9788 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => autoConstraintSelection = value;
		bool L_0 = ___value0;
		__this->set_autoConstraintSelection_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveAxisConstraint_set_ConstraintOnMovement_m8F8810F040C6CBA303FAB6E7269BE9FBD42E9D1A_inline (MoveAxisConstraint_t124CB3B37E806BD25BC46AD5D3B3AE5B1D8689B6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => constraintOnMovement = value;
		int32_t L_0 = ___value0;
		__this->set_constraintOnMovement_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SliderEventData_get_NewValue_m4720B3AFC3DE69DF7B3C6D10801809CB0D05AE35_inline (SliderEventData_t1584BE891FBAACBC728FADF068C13BB30653725A * __this, const RuntimeMethod* method)
{
	{
		// public float NewValue { get; private set; }
		float L_0 = __this->get_U3CNewValueU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void control_setEdge_m53256BCFD38B5AEA771A8C1364071C6EF6C34FDC_inline (control_t4A4DAD829429C0D41AE49F71182A0C075D2EB896 * __this, int32_t ___e0, const RuntimeMethod* method)
{
	{
		// edge = e;
		int32_t L_0 = ___e0;
		__this->set_edge_9(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_gshared_inline (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )__this->get_current_3();
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_2 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_2, (int32_t)L_3);
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
