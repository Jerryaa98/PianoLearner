#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody[]
struct JointKinematicBodyU5BU5D_t1FCA6A6F3261FF5CF58A162C3A688F120E5B7A6E;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_tAAAB770DE97BB6A278B30D7C7F0E2E39CA8108C4;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout
struct PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJoint_tEDCBD4B9A65BBB59D6C182873CEF88E1A12A356B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tEA0A612796236EFDB05BFA31A3500BDF90F0BB99____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604;
IL2CPP_EXTERN_C String_t* _stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2CA525E745821399EEF6F1D2733A285A82160939;
IL2CPP_EXTERN_C String_t* _stringLiteralA87FA1E3368C9FAD9D143A70CB395D64D193CBD3;
IL2CPP_EXTERN_C String_t* _stringLiteralC1738C3F31C42EB3867F885AD91436A640396392;
IL2CPP_EXTERN_C String_t* _stringLiteralD615BA2D4F588D5542763B1799E1B17A4021E235;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_m8DE4F960EB00C2CAFB6504BD042661A6D78BAB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_m13D533E8D99B503A46A41E24A57938F8EAF84790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_mDC52B1A4AFD97A35D7CC54CE006568DC2F65A3D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF135C24D4E19E2265B3867BD08616028F413C1FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m76DCA01145942BA76EF57510931D438F6BAE4F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6F3F17D02E1F01C3386C4C3FDFB56ADD80D1A192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0AD894688377C5604795014FBCA9A265B896B417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4BB608EBE04FE4CF2667A6ED7D8303083D1D95F5 
{
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JointKinematicBodyU5BU5D_t1FCA6A6F3261FF5CF58A162C3A688F120E5B7A6E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JointKinematicBodyU5BU5D_t1FCA6A6F3261FF5CF58A162C3A688F120E5B7A6E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t31F020E039F15B5E5F46A6A82343E4A187CF74C8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t31F020E039F15B5E5F46A6A82343E4A187CF74C8__padding[20];
	};
};
#pragma pack(pop, tp)

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tEA0A612796236EFDB05BFA31A3500BDF90F0BB99  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tEA0A612796236EFDB05BFA31A3500BDF90F0BB99_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B
	__StaticArrayInitTypeSizeU3D20_t31F020E039F15B5E5F46A6A82343E4A187CF74C8 ___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF 
{
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_tEDCBD4B9A65BBB59D6C182873CEF88E1A12A356B 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_tAAAB770DE97BB6A278B30D7C7F0E2E39CA8108C4  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890  : public BaseExtensionService_tAAAB770DE97BB6A278B30D7C7F0E2E39CA8108C4
{
	// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handPhysicsServiceProfile
	HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* ___handPhysicsServiceProfile_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsServiceRoot>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CHandPhysicsServiceRootU3Ek__BackingField_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsLayer>k__BackingField
	int32_t ___U3CHandPhysicsLayerU3Ek__BackingField_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<UsePalmKinematicBody>k__BackingField
	bool ___U3CUsePalmKinematicBodyU3Ek__BackingField_16;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipKinematicBodyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fingerTipKinematicBodyPrefab_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::palmKinematicBodyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___palmKinematicBodyPrefab_18;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handJointService
	RuntimeObject* ___handJointService_19;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::jointKinematicBodies
	List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* ___jointKinematicBodies_22;
};

struct HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handednessTypes
	HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E* ___handednessTypes_20;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipTypes
	TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* ___fingerTipTypes_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_23;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::handPhysicsLayer
	int32_t ___handPhysicsLayer_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::fingerTipKinematicBodyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fingerTipKinematicBodyPrefab_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::usePalmKinematicBody
	bool ___usePalmKinematicBody_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::palmKinematicBodyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___palmKinematicBodyPrefab_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<Joint>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CJointU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<HandednessType>k__BackingField
	uint8_t ___U3CHandednessTypeU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<JointType>k__BackingField
	int32_t ___U3CJointTypeU3Ek__BackingField_6;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnEnableAction>k__BackingField
	Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* ___U3COnEnableActionU3Ek__BackingField_7;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnDisableAction>k__BackingField
	Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* ___U3COnDisableActionU3Ek__BackingField_8;
};

struct JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateStatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateStatePerfMarker_9;
};

// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout
struct PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::textField
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___textField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::currentJoints
	List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* ___currentJoints_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mD8D3FD5E4D793C8959090BE7F44C7A78C02CABD0_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::.ctor()
inline void List_1__ctor_m6F3F17D02E1F01C3386C4C3FDFB56ADD80D1A192 (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_m749767F57B9F1E914EA6AFF4943A36CFF7CC257E (BaseExtensionService_tAAAB770DE97BB6A278B30D7C7F0E2E39CA8108C4* __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile2, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService>()
inline RuntimeObject* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_m13D533E8D99B503A46A41E24A57938F8EAF84790 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mD8D3FD5E4D793C8959090BE7F44C7A78C02CABD0_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_mE673FFE4CDCFAB6546CB9DBFE3259D2E46B182A2 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_mDB3070DCFE31CED79AAD71EFC0A35CD531812C5E (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m9E5EBC77EC9B960FB18B65D94BF42F7EA8CA50C6_inline (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m7BF4CB7E70EFB6CD80F3F77CBAE771716FF79ED0_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m81F8E9FFACFE8A9C4140EFFFA03D47E40AAC3D9A_inline (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m67BE8E1211A0B1B165E25B82D3F879D409450694_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m642AA6044A1D1F2E0BD7F19E840EC3201987A8AB_inline (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m985C16BC725F354142C6B4E254C76476038FABE7 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mE62F22D0A4E4DFE47FBF60A5C354D1150E90AF21_inline (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_mFE5C9BCCEACC998D31A8058EA4FC240FA324B6DB (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m99C4CB7F02C191EB88579EA58D138D144030A892_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_HandPhysicsServiceRoot_mEDA47B73985CFE5593713DA7268AAB07C0321934_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m07A22E1552ABDCD9AD86737D12D43DA27915370D (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::GetEnumerator()
inline Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72 (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 (*) (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Dispose()
inline void Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE (Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Current()
inline JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_inline (Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39* __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* (*) (Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_m69A7B84777D87F1E98C9557BAE7A446F6EF5C3AE (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m77B12ADB2D2CD12BD3B0F4B6B88741489939CC9E_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* JointKinematicBody_get_Joint_m7CD5366B9380ACAD28E0C3D9911375F99B40B3DD_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m73DC834B823F8BE1147C1C911B5572E9D2A45B33_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_m9AA4BFBBC07572113292EC77A012F144B569164A_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m3B4BF726E3531FD7A1FE46D8E4C80CFA81B9C6EA (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::MoveNext()
inline bool Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA (Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_FingerTipKinematicBodyPrefab_mDCEB71782ABC9AB74ED4E97F4066F3D535667A4D_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m0F8368510837B9E4B871D09A7A6DAEB09FB4D4E4_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m4B9D0F1B46E1BC215BA1B5436302641C747B9E66 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent4, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E** ___jointKinematicBody5, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Add(T)
inline void List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_inline (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* __this, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E*, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_mBB0C082F0A6D6CB2603F308881440016BEC4083A_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_PalmKinematicBodyPrefab_m8F15CD10E8BE3A1F0BEE38027CFB41F265F8BE5F_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Count()
inline int32_t List_1_get_Count_m0AD894688377C5604795014FBCA9A265B896B417_inline (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>()
inline JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* GameObject_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_mDC52B1A4AFD97A35D7CC54CE006568DC2F65A3D5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m7C023561616D22CFEEA796AB2D9334BDA6A0FAD0_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m894E251DC1625B3DAF1478896419E4551C5E6E5B_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mE6D5359B74BAAEA74B1F24297F435C969CD43DFE (BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* JointKinematicBody_get_OnEnableAction_m3F01CA478D48E1BF10E3F82617AFE23694C3EB96_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Invoke(T)
inline void Action_1_Invoke_m04C0747C16026AF8A583ADA4927B57C5426E544F_inline (Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* __this, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340*, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* JointKinematicBody_get_OnDisableAction_m5B477E4517FBEA9D2518C9F7823EE43C8C511223_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>()
inline JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* Component_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_m8DE4F960EB00C2CAFB6504BD042661A6D78BAB0C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::WriteText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_WriteText_m5DB94D15BF0DE143C6C113512055A1BC4B4033CA (PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E* __this, bool ___clear0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Contains(T)
inline bool List_1_Contains_mF135C24D4E19E2265B3867BD08616028F413C1FC (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* __this, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E*, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Remove(T)
inline bool List_1_Remove_m76DCA01145942BA76EF57510931D438F6BAE4F82 (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* __this, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E*, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__ctor_m008C02E306167903086AE12A0E3B6AA18D01B291 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6F3F17D02E1F01C3386C4C3FDFB56ADD80D1A192_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JointKinematicBody> jointKinematicBodies = new List<JointKinematicBody>();
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_0 = (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E*)il2cpp_codegen_object_new(List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6F3F17D02E1F01C3386C4C3FDFB56ADD80D1A192(L_0, List_1__ctor_m6F3F17D02E1F01C3386C4C3FDFB56ADD80D1A192_RuntimeMethod_var);
		__this->___jointKinematicBodies_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointKinematicBodies_22), (void*)L_0);
		// public HandPhysicsService(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_1 = ___name0;
		uint32_t L_2 = ___priority1;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_3 = ___profile2;
		BaseExtensionService__ctor_m749767F57B9F1E914EA6AFF4943A36CFF7CC257E(__this, L_1, L_2, L_3, NULL);
		// handPhysicsServiceProfile = (HandPhysicsServiceProfile)profile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_4 = ___profile2;
		__this->___handPhysicsServiceProfile_13 = ((HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD*)CastclassClass((RuntimeObject*)L_4, HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handPhysicsServiceProfile_13), (void*)((HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD*)CastclassClass((RuntimeObject*)L_4, HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_m69A7B84777D87F1E98C9557BAE7A446F6EF5C3AE (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_m13D533E8D99B503A46A41E24A57938F8EAF84790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// => handJointService ?? CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>();
		RuntimeObject* L_0 = __this->___handJointService_19;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_m13D533E8D99B503A46A41E24A57938F8EAF84790(CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_m13D533E8D99B503A46A41E24A57938F8EAF84790_RuntimeMethod_var);
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_HandPhysicsServiceRoot_mEDA47B73985CFE5593713DA7268AAB07C0321934 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CHandPhysicsServiceRootU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m99C4CB7F02C191EB88579EA58D138D144030A892 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CHandPhysicsServiceRootU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandPhysicsServiceRootU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m0F8368510837B9E4B871D09A7A6DAEB09FB4D4E4 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->___U3CHandPhysicsLayerU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m7BF4CB7E70EFB6CD80F3F77CBAE771716FF79ED0 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandPhysicsLayerU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_mBB0C082F0A6D6CB2603F308881440016BEC4083A (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->___U3CUsePalmKinematicBodyU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m67BE8E1211A0B1B165E25B82D3F879D409450694 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUsePalmKinematicBodyU3Ek__BackingField_16 = L_0;
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_FingerTipKinematicBodyPrefab_mDCEB71782ABC9AB74ED4E97F4066F3D535667A4D (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fingerTipKinematicBodyPrefab_17;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m985C16BC725F354142C6B4E254C76476038FABE7 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fingerTipKinematicBodyPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___fingerTipKinematicBodyPrefab_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fingerTipKinematicBodyPrefab_17), (void*)L_0);
		// if (fingerTipKinematicBodyPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___fingerTipKinematicBodyPrefab_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_mE673FFE4CDCFAB6546CB9DBFE3259D2E46B182A2(__this, NULL);
		return;
	}

IL_001c:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_mDB3070DCFE31CED79AAD71EFC0A35CD531812C5E(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_PalmKinematicBodyPrefab_m8F15CD10E8BE3A1F0BEE38027CFB41F265F8BE5F (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___palmKinematicBodyPrefab_18;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_mFE5C9BCCEACC998D31A8058EA4FC240FA324B6DB (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// palmKinematicBodyPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___palmKinematicBodyPrefab_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___palmKinematicBodyPrefab_18), (void*)L_0);
		// if (palmKinematicBodyPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___palmKinematicBodyPrefab_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_mE673FFE4CDCFAB6546CB9DBFE3259D2E46B182A2(__this, NULL);
		return;
	}

IL_001c:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_mDB3070DCFE31CED79AAD71EFC0A35CD531812C5E(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Initialize_mA53E4A016752B6433FD2FD62C67B9F1E1C63882A (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// base.Initialize();
		BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA(__this, NULL);
		// HandPhysicsLayer = handPhysicsServiceProfile.HandPhysicsLayer;
		HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* L_0 = __this->___handPhysicsServiceProfile_13;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HandPhysicsServiceProfile_get_HandPhysicsLayer_m9E5EBC77EC9B960FB18B65D94BF42F7EA8CA50C6_inline(L_0, NULL);
		HandPhysicsService_set_HandPhysicsLayer_m7BF4CB7E70EFB6CD80F3F77CBAE771716FF79ED0_inline(__this, L_1, NULL);
		// UsePalmKinematicBody = handPhysicsServiceProfile.UsePalmKinematicBody;
		HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* L_2 = __this->___handPhysicsServiceProfile_13;
		NullCheck(L_2);
		bool L_3;
		L_3 = HandPhysicsServiceProfile_get_UsePalmKinematicBody_m81F8E9FFACFE8A9C4140EFFFA03D47E40AAC3D9A_inline(L_2, NULL);
		HandPhysicsService_set_UsePalmKinematicBody_m67BE8E1211A0B1B165E25B82D3F879D409450694_inline(__this, L_3, NULL);
		// FingerTipKinematicBodyPrefab = handPhysicsServiceProfile.FingerTipKinematicBodyPrefab;
		HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* L_4 = __this->___handPhysicsServiceProfile_13;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m642AA6044A1D1F2E0BD7F19E840EC3201987A8AB_inline(L_4, NULL);
		HandPhysicsService_set_FingerTipKinematicBodyPrefab_m985C16BC725F354142C6B4E254C76476038FABE7(__this, L_5, NULL);
		// PalmKinematicBodyPrefab = handPhysicsServiceProfile.PalmKinematicBodyPrefab;
		HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* L_6 = __this->___handPhysicsServiceProfile_13;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mE62F22D0A4E4DFE47FBF60A5C354D1150E90AF21_inline(L_6, NULL);
		HandPhysicsService_set_PalmKinematicBodyPrefab_mFE5C9BCCEACC998D31A8058EA4FC240FA324B6DB(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Enable_mE88081560985BC0AC04F45AFA3F039EBF447E741 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8(__this, NULL);
		// HandPhysicsServiceRoot = new GameObject("Hand Physics Service");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA, NULL);
		HandPhysicsService_set_HandPhysicsServiceRoot_m99C4CB7F02C191EB88579EA58D138D144030A892_inline(__this, L_0, NULL);
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_mE673FFE4CDCFAB6546CB9DBFE3259D2E46B182A2(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Disable_m2CFBEAD6BC4DAEF4F527B7D6746AAC76291376D0 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HandPhysicsServiceRoot != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_mEDA47B73985CFE5593713DA7268AAB07C0321934_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// UnityEngine.Object.Destroy(HandPhysicsServiceRoot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = HandPhysicsService_get_HandPhysicsServiceRoot_mEDA47B73985CFE5593713DA7268AAB07C0321934_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// HandPhysicsServiceRoot = null;
		HandPhysicsService_set_HandPhysicsServiceRoot_m99C4CB7F02C191EB88579EA58D138D144030A892_inline(__this, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_0020:
	{
		// base.Disable();
		BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Update_m0B85983AB28ED09B9C22B54DEBF4F6E7F949B8A7 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* V_3 = NULL;
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* G_B6_0 = NULL;
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* G_B5_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_0 = NULL;
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* G_B7_1 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___UpdatePerfMarker_23;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// base.Update();
				BaseService_Update_m07A22E1552ABDCD9AD86737D12D43DA27915370D(__this, NULL);
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_2 = __this->___jointKinematicBodies_22;
				NullCheck(L_2);
				Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 L_3;
				L_3 = List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72(L_2, List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72_RuntimeMethod_var);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0096_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE((&V_2), Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_008b_2;
					}

IL_0022_2:
					{
						// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_4;
						L_4 = Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_inline((&V_2), Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_RuntimeMethod_var);
						V_3 = L_4;
						// if (HandJointService.IsHandTracked(jointKinematicBody.HandednessType))
						RuntimeObject* L_5;
						L_5 = HandPhysicsService_get_HandJointService_m69A7B84777D87F1E98C9557BAE7A446F6EF5C3AE(__this, NULL);
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_6 = V_3;
						NullCheck(L_6);
						uint8_t L_7;
						L_7 = JointKinematicBody_get_HandednessType_m77B12ADB2D2CD12BD3B0F4B6B88741489939CC9E_inline(L_6, NULL);
						NullCheck(L_5);
						bool L_8;
						L_8 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_il2cpp_TypeInfo_var, L_5, L_7);
						if (!L_8)
						{
							goto IL_0084_2;
						}
					}
					{
						// jointKinematicBody.Joint = jointKinematicBody.Joint != null ? jointKinematicBody.Joint : HandJointService.RequestJointTransform(jointKinematicBody.JointType, jointKinematicBody.HandednessType);
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_9 = V_3;
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_10 = V_3;
						NullCheck(L_10);
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
						L_11 = JointKinematicBody_get_Joint_m7CD5366B9380ACAD28E0C3D9911375F99B40B3DD_inline(L_10, NULL);
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						bool L_12;
						L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
						G_B5_0 = L_9;
						if (L_12)
						{
							G_B6_0 = L_9;
							goto IL_0065_2;
						}
					}
					{
						RuntimeObject* L_13;
						L_13 = HandPhysicsService_get_HandJointService_m69A7B84777D87F1E98C9557BAE7A446F6EF5C3AE(__this, NULL);
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_14 = V_3;
						NullCheck(L_14);
						int32_t L_15;
						L_15 = JointKinematicBody_get_JointType_m73DC834B823F8BE1147C1C911B5572E9D2A45B33_inline(L_14, NULL);
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_16 = V_3;
						NullCheck(L_16);
						uint8_t L_17;
						L_17 = JointKinematicBody_get_HandednessType_m77B12ADB2D2CD12BD3B0F4B6B88741489939CC9E_inline(L_16, NULL);
						NullCheck(L_13);
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
						L_18 = InterfaceFuncInvoker2< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t335A41FECB2854EF54AEF3B6ABD1CAE631731895_il2cpp_TypeInfo_var, L_13, L_15, L_17);
						G_B7_0 = L_18;
						G_B7_1 = G_B5_0;
						goto IL_006b_2;
					}

IL_0065_2:
					{
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_19 = V_3;
						NullCheck(L_19);
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
						L_20 = JointKinematicBody_get_Joint_m7CD5366B9380ACAD28E0C3D9911375F99B40B3DD_inline(L_19, NULL);
						G_B7_0 = L_20;
						G_B7_1 = G_B6_0;
					}

IL_006b_2:
					{
						NullCheck(G_B7_1);
						JointKinematicBody_set_Joint_m9AA4BFBBC07572113292EC77A012F144B569164A_inline(G_B7_1, G_B7_0, NULL);
						// jointKinematicBody.UpdateState(jointKinematicBody.Joint != null);
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_21 = V_3;
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_22 = V_3;
						NullCheck(L_22);
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
						L_23 = JointKinematicBody_get_Joint_m7CD5366B9380ACAD28E0C3D9911375F99B40B3DD_inline(L_22, NULL);
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						bool L_24;
						L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
						NullCheck(L_21);
						JointKinematicBody_UpdateState_m3B4BF726E3531FD7A1FE46D8E4C80CFA81B9C6EA(L_21, L_24, NULL);
						goto IL_008b_2;
					}

IL_0084_2:
					{
						// jointKinematicBody.UpdateState(false);
						JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_25 = V_3;
						NullCheck(L_25);
						JointKinematicBody_UpdateState_m3B4BF726E3531FD7A1FE46D8E4C80CFA81B9C6EA(L_25, (bool)0, NULL);
					}

IL_008b_2:
					{
						// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
						bool L_26;
						L_26 = Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA((&V_2), Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA_RuntimeMethod_var);
						if (L_26)
						{
							goto IL_0022_2;
						}
					}
					{
						goto IL_00b2;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_mE673FFE4CDCFAB6546CB9DBFE3259D2E46B182A2 (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* V_2 = NULL;
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* V_3 = NULL;
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_mDB3070DCFE31CED79AAD71EFC0A35CD531812C5E(__this, NULL);
		// if (HandPhysicsServiceRoot == null) { return; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_mEDA47B73985CFE5593713DA7268AAB07C0321934_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (HandPhysicsServiceRoot == null) { return; }
		return;
	}

IL_0015:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		V_0 = 0;
		goto IL_00c4;
	}

IL_001c:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		V_1 = 0;
		goto IL_006c;
	}

IL_0020:
	{
		// if (FingerTipKinematicBodyPrefab == null) { continue; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_mDCEB71782ABC9AB74ED4E97F4066F3D535667A4D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0068;
		}
	}
	{
		// if (TryCreateJointKinematicBody(FingerTipKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], fingerTipTypes[j], HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_mDCEB71782ABC9AB74ED4E97F4066F3D535667A4D_inline(__this, NULL);
		int32_t L_5;
		L_5 = HandPhysicsService_get_HandPhysicsLayer_m0F8368510837B9E4B871D09A7A6DAEB09FB4D4E4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var);
		HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E* L_6 = ((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___handednessTypes_20;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* L_10 = ((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___fingerTipTypes_21;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = HandPhysicsService_get_HandPhysicsServiceRoot_mEDA47B73985CFE5593713DA7268AAB07C0321934_inline(__this, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		bool L_16;
		L_16 = HandPhysicsService_TryCreateJointKinematicBody_m4B9D0F1B46E1BC215BA1B5436302641C747B9E66(L_4, L_5, L_9, L_13, L_15, (&V_2), NULL);
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_17 = __this->___jointKinematicBodies_22;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_18 = V_2;
		NullCheck(L_17);
		List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_inline(L_17, L_18, List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_RuntimeMethod_var);
	}

IL_0068:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006c:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var);
		TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* L_21 = ((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___fingerTipTypes_21;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// if (UsePalmKinematicBody)
		bool L_22;
		L_22 = HandPhysicsService_get_UsePalmKinematicBody_mBB0C082F0A6D6CB2603F308881440016BEC4083A_inline(__this, NULL);
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		// if (PalmKinematicBodyPrefab == null) { continue; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = HandPhysicsService_get_PalmKinematicBodyPrefab_m8F15CD10E8BE3A1F0BEE38027CFB41F265F8BE5F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_24)
		{
			goto IL_00c0;
		}
	}
	{
		// if (TryCreateJointKinematicBody(PalmKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], TrackedHandJoint.Palm, HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = HandPhysicsService_get_PalmKinematicBodyPrefab_m8F15CD10E8BE3A1F0BEE38027CFB41F265F8BE5F_inline(__this, NULL);
		int32_t L_26;
		L_26 = HandPhysicsService_get_HandPhysicsLayer_m0F8368510837B9E4B871D09A7A6DAEB09FB4D4E4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var);
		HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E* L_27 = ((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___handednessTypes_20;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (uint8_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = HandPhysicsService_get_HandPhysicsServiceRoot_mEDA47B73985CFE5593713DA7268AAB07C0321934_inline(__this, NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		bool L_33;
		L_33 = HandPhysicsService_TryCreateJointKinematicBody_m4B9D0F1B46E1BC215BA1B5436302641C747B9E66(L_25, L_26, L_30, 2, L_32, (&V_3), NULL);
		if (!L_33)
		{
			goto IL_00c0;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_34 = __this->___jointKinematicBodies_22;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_35 = V_3;
		NullCheck(L_34);
		List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_inline(L_34, L_35, List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_RuntimeMethod_var);
	}

IL_00c0:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00c4:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var);
		HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E* L_38 = ((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___handednessTypes_20;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_mDB3070DCFE31CED79AAD71EFC0A35CD531812C5E (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0AD894688377C5604795014FBCA9A265B896B417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (jointKinematicBodies.Count > 0)
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_0 = __this->___jointKinematicBodies_22;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m0AD894688377C5604795014FBCA9A265B896B417_inline(L_0, List_1_get_Count_m0AD894688377C5604795014FBCA9A265B896B417_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_2 = __this->___jointKinematicBodies_22;
		NullCheck(L_2);
		Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 L_3;
		L_3 = List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72(L_2, List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE((&V_0), Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_001c_1:
			{
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_4;
				L_4 = Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_inline((&V_0), Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_RuntimeMethod_var);
				// UnityEngine.Object.Destroy(jointKinematicBody.gameObject);
				NullCheck(L_4);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
			}

IL_002d_1:
			{
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				bool L_6;
				L_6 = Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA((&V_0), Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m4B9D0F1B46E1BC215BA1B5436302641C747B9E66 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent4, JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E** ___jointKinematicBody5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_mDC52B1A4AFD97A35D7CC54CE006568DC2F65A3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tEDCBD4B9A65BBB59D6C182873CEF88E1A12A356B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CA525E745821399EEF6F1D2733A285A82160939);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* V_1 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_2 = NULL;
	{
		// jointKinematicBody = null;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E** L_0 = ___jointKinematicBody5;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// GameObject currentGameObject = GameObject.Instantiate(rigidBodyPrefab, parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___rigidBodyPrefab0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___parent4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_3;
		// currentGameObject.layer = layer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		int32_t L_5 = ___layer1;
		NullCheck(L_4);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_4, L_5, NULL);
		// JointKinematicBody currentJoint = currentGameObject.GetComponent<JointKinematicBody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_7;
		L_7 = GameObject_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_mDC52B1A4AFD97A35D7CC54CE006568DC2F65A3D5(L_6, GameObject_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_mDC52B1A4AFD97A35D7CC54CE006568DC2F65A3D5_RuntimeMethod_var);
		V_1 = L_7;
		// if (currentJoint == null)
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_8 = V_1;
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a JointKinematicBody component.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B, NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// currentJoint.JointType = jointType;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_11 = V_1;
		int32_t L_12 = ___jointType3;
		NullCheck(L_11);
		JointKinematicBody_set_JointType_m7C023561616D22CFEEA796AB2D9334BDA6A0FAD0_inline(L_11, L_12, NULL);
		// currentJoint.HandednessType = handednessType;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_13 = V_1;
		uint8_t L_14 = ___handednessType2;
		NullCheck(L_13);
		JointKinematicBody_set_HandednessType_m894E251DC1625B3DAF1478896419E4551C5E6E5B_inline(L_13, L_14, NULL);
		// currentGameObject.name = handednessType + " " + jointType;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		Il2CppFakeBox<uint8_t> L_16(Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var, (&___handednessType2));
		String_t* L_17;
		L_17 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_16), NULL);
		Il2CppFakeBox<int32_t> L_18(TrackedHandJoint_tEDCBD4B9A65BBB59D6C182873CEF88E1A12A356B_il2cpp_TypeInfo_var, (&___jointType3));
		String_t* L_19;
		L_19 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_18), NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_17, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_19, NULL);
		NullCheck(L_15);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_15, L_20, NULL);
		// if (currentGameObject.GetComponent<Collider>() == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_22;
		L_22 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_21, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_008e;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Collider component.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F, NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_24, NULL);
		// return false;
		return (bool)0;
	}

IL_008e:
	{
		// Rigidbody rigidbody = currentGameObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		NullCheck(L_25);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26;
		L_26 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_25, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		V_2 = L_26;
		// if (rigidbody == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00b0;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Rigidbody component.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6, NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_29, NULL);
		// return false;
		return (bool)0;
	}

IL_00b0:
	{
		// if (!rigidbody.isKinematic)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = V_2;
		NullCheck(L_30);
		bool L_31;
		L_31 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_30, NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		// Debug.LogWarning("The HandPhysicsService FingerTipKinematicBodyPrefab rigidbody should be marked as kinematic, making kinematic.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2CA525E745821399EEF6F1D2733A285A82160939, NULL);
		// rigidbody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32 = V_2;
		NullCheck(L_32);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_32, (bool)1, NULL);
	}

IL_00c9:
	{
		// jointKinematicBody = currentJoint;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E** L_33 = ___jointKinematicBody5;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_34 = V_1;
		*((RuntimeObject**)L_33) = (RuntimeObject*)L_34;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_33, (void*)(RuntimeObject*)L_34);
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__cctor_m3E03A31B872A566946E1471A4B7DFE0EC508748B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tEA0A612796236EFDB05BFA31A3500BDF90F0BB99____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Handedness[] handednessTypes = new Handedness[]
		// {
		//     Handedness.Left,
		//     Handedness.Right
		// };
		HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E* L_0 = (HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E*)(HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E*)SZArrayNew(HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E_il2cpp_TypeInfo_var, (uint32_t)2);
		HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		HandednessU5BU5D_t71664ED11900AE705EFA0B82692250AA8CEC139E* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___handednessTypes_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___handednessTypes_20), (void*)L_2);
		// private static readonly TrackedHandJoint[] fingerTipTypes = new TrackedHandJoint[]
		// {
		//     TrackedHandJoint.ThumbTip,
		//     TrackedHandJoint.IndexTip,
		//     TrackedHandJoint.MiddleTip,
		//     TrackedHandJoint.RingTip,
		//     TrackedHandJoint.PinkyTip
		// };
		TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* L_3 = (TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915*)(TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915*)SZArrayNew(TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915_il2cpp_TypeInfo_var, (uint32_t)5);
		TrackedHandJointU5BU5D_t1BBC5815AB763BFF0800344D0533B21FBBC07915* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tEA0A612796236EFDB05BFA31A3500BDF90F0BB99____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___fingerTipTypes_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___fingerTipTypes_21), (void*)L_4);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] HandPhysicsService.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_6), _stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604, /*hidden argument*/NULL);
		((HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890_il2cpp_TypeInfo_var))->___UpdatePerfMarker_23 = L_6;
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m81F8E9FFACFE8A9C4140EFFFA03D47E40AAC3D9A (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->___usePalmKinematicBody_7;
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m642AA6044A1D1F2E0BD7F19E840EC3201987A8AB (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fingerTipKinematicBodyPrefab_6;
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mE62F22D0A4E4DFE47FBF60A5C354D1150E90AF21 (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___palmKinematicBodyPrefab_8;
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m9E5EBC77EC9B960FB18B65D94BF42F7EA8CA50C6 (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->___handPhysicsLayer_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsServiceProfile__ctor_m0EDB1DF4A3F99C79F7C206A79254E895C590889A (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		BaseMixedRealityProfile__ctor_mE6D5359B74BAAEA74B1F24297F435C969CD43DFE(__this, NULL);
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* JointKinematicBody_get_Joint_m7CD5366B9380ACAD28E0C3D9911375F99B40B3DD (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Joint { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CJointU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_m9AA4BFBBC07572113292EC77A012F144B569164A (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform Joint { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___U3CJointU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m77B12ADB2D2CD12BD3B0F4B6B88741489939CC9E (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->___U3CHandednessTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m894E251DC1625B3DAF1478896419E4551C5E6E5B (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->___U3CHandednessTypeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m73DC834B823F8BE1147C1C911B5572E9D2A45B33 (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->___U3CJointTypeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m7C023561616D22CFEEA796AB2D9334BDA6A0FAD0 (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CJointTypeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* JointKinematicBody_get_OnEnableAction_m3F01CA478D48E1BF10E3F82617AFE23694C3EB96 (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_0 = __this->___U3COnEnableActionU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnEnableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnEnableAction_mB07C682F6F472970AA144925E7E21488B9BA2F15 (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_0 = ___value0;
		__this->___U3COnEnableActionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnEnableActionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* JointKinematicBody_get_OnDisableAction_m5B477E4517FBEA9D2518C9F7823EE43C8C511223 (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_0 = __this->___U3COnDisableActionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnDisableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnDisableAction_m73D98BF3C7954434F2AF4A306A1773BB5E1A4552 (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_0 = ___value0;
		__this->___U3COnDisableActionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnDisableActionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m3B4BF726E3531FD7A1FE46D8E4C80CFA81B9C6EA (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, bool ___active0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* G_B7_0 = NULL;
	Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* G_B6_0 = NULL;
	Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* G_B10_0 = NULL;
	Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* G_B9_0 = NULL;
	{
		// using (UpdateStatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_StaticFields*)il2cpp_codegen_static_fields_for(JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_il2cpp_TypeInfo_var))->___UpdateStatePerfMarker_9;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// bool previousActiveState = gameObject.activeSelf;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				NullCheck(L_2);
				bool L_3;
				L_3 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_2, NULL);
				// gameObject.SetActive(active);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
				L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				bool L_5 = ___active0;
				NullCheck(L_4);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
				// if (active)
				bool L_6 = ___active0;
				G_B2_0 = L_3;
				if (!L_6)
				{
					G_B3_0 = L_3;
					goto IL_0054_1;
				}
			}
			{
				// transform.position = Joint.position;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
				L_8 = JointKinematicBody_get_Joint_m7CD5366B9380ACAD28E0C3D9911375F99B40B3DD_inline(__this, NULL);
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
				NullCheck(L_7);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_9, NULL);
				// transform.rotation = Joint.rotation;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = JointKinematicBody_get_Joint_m7CD5366B9380ACAD28E0C3D9911375F99B40B3DD_inline(__this, NULL);
				NullCheck(L_11);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
				L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
				NullCheck(L_10);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_12, NULL);
				G_B3_0 = G_B2_0;
			}

IL_0054_1:
			{
				// if (previousActiveState != active)
				bool L_13 = ___active0;
				if ((((int32_t)G_B3_0) == ((int32_t)L_13)))
				{
					goto IL_0080_1;
				}
			}
			{
				// if (active)
				bool L_14 = ___active0;
				if (!L_14)
				{
					goto IL_006e_1;
				}
			}
			{
				// OnEnableAction?.Invoke(this);
				Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_15;
				L_15 = JointKinematicBody_get_OnEnableAction_m3F01CA478D48E1BF10E3F82617AFE23694C3EB96_inline(__this, NULL);
				Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_16 = L_15;
				G_B6_0 = L_16;
				if (L_16)
				{
					G_B7_0 = L_16;
					goto IL_0066_1;
				}
			}
			{
				goto IL_0090;
			}

IL_0066_1:
			{
				NullCheck(G_B7_0);
				Action_1_Invoke_m04C0747C16026AF8A583ADA4927B57C5426E544F_inline(G_B7_0, __this, NULL);
				goto IL_0090;
			}

IL_006e_1:
			{
				// OnDisableAction?.Invoke(this);
				Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_17;
				L_17 = JointKinematicBody_get_OnDisableAction_m5B477E4517FBEA9D2518C9F7823EE43C8C511223_inline(__this, NULL);
				Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_18 = L_17;
				G_B9_0 = L_18;
				if (L_18)
				{
					G_B10_0 = L_18;
					goto IL_007a_1;
				}
			}
			{
				goto IL_0090;
			}

IL_007a_1:
			{
				NullCheck(G_B10_0);
				Action_1_Invoke_m04C0747C16026AF8A583ADA4927B57C5426E544F_inline(G_B10_0, __this, NULL);
			}

IL_0080_1:
			{
				// }
				goto IL_0090;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__ctor_m72761A78EF673D5B8AAC1E36399FAA3CAFA8BA0B (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__cctor_m505F51179A2259FA42DD8E3226F52AAE5ABF49B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1738C3F31C42EB3867F885AD91436A640396392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateStatePerfMarker = new ProfilerMarker("[MRTK] JointKinematicBody.UpdateState");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralC1738C3F31C42EB3867F885AD91436A640396392, /*hidden argument*/NULL);
		((JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_StaticFields*)il2cpp_codegen_static_fields_for(JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_il2cpp_TypeInfo_var))->___UpdateStatePerfMarker_9 = L_0;
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
// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::get_TextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* PhysicsTriggerEventReadout_get_TextField_m43D2E39E06128DAE5F76BAE775D2493008FAFC35 (PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E* __this, const RuntimeMethod* method) 
{
	{
		// get { return textField; }
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___textField_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::set_TextField(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_set_TextField_m7832B0067E9230E6B9862D840777FB312C61F0DB (PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// set { textField = value; }
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___textField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textField_4), (void*)L_0);
		// set { textField = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_OnTriggerEnter_m40683E24C0AB108384B6DF97576A926DD5CACFB2 (PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_m8DE4F960EB00C2CAFB6504BD042661A6D78BAB0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* V_0 = NULL;
	{
		// JointKinematicBody joint = other.GetComponent<JointKinematicBody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_1;
		L_1 = Component_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_m8DE4F960EB00C2CAFB6504BD042661A6D78BAB0C(L_0, Component_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_m8DE4F960EB00C2CAFB6504BD042661A6D78BAB0C_RuntimeMethod_var);
		V_0 = L_1;
		// if (joint == null) { return; }
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// if (joint == null) { return; }
		return;
	}

IL_0011:
	{
		// currentJoints.Add(joint);
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_4 = __this->___currentJoints_5;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_inline(L_4, L_5, List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_RuntimeMethod_var);
		// WriteText();
		PhysicsTriggerEventReadout_WriteText_m5DB94D15BF0DE143C6C113512055A1BC4B4033CA(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_OnTriggerExit_m5651F39CFAA8B31DBDBB263E614903DBBEAD47A7 (PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_m8DE4F960EB00C2CAFB6504BD042661A6D78BAB0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF135C24D4E19E2265B3867BD08616028F413C1FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m76DCA01145942BA76EF57510931D438F6BAE4F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0AD894688377C5604795014FBCA9A265B896B417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* V_0 = NULL;
	{
		// JointKinematicBody joint = other.GetComponent<JointKinematicBody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_1;
		L_1 = Component_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_m8DE4F960EB00C2CAFB6504BD042661A6D78BAB0C(L_0, Component_GetComponent_TisJointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E_m8DE4F960EB00C2CAFB6504BD042661A6D78BAB0C_RuntimeMethod_var);
		V_0 = L_1;
		// if (joint == null) { return; }
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// if (joint == null) { return; }
		return;
	}

IL_0011:
	{
		// if (currentJoints.Contains(joint))
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_4 = __this->___currentJoints_5;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Contains_mF135C24D4E19E2265B3867BD08616028F413C1FC(L_4, L_5, List_1_Contains_mF135C24D4E19E2265B3867BD08616028F413C1FC_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// currentJoints.Remove(joint);
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_7 = __this->___currentJoints_5;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_m76DCA01145942BA76EF57510931D438F6BAE4F82(L_7, L_8, List_1_Remove_m76DCA01145942BA76EF57510931D438F6BAE4F82_RuntimeMethod_var);
		goto IL_004e;
	}

IL_002e:
	{
		// currentJoints.Add(joint);
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_10 = __this->___currentJoints_5;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_11 = V_0;
		NullCheck(L_10);
		List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_inline(L_10, L_11, List_1_Add_m24FC1392D880374B2CB030D8742BDB1546E86FF3_RuntimeMethod_var);
		// WriteText();
		PhysicsTriggerEventReadout_WriteText_m5DB94D15BF0DE143C6C113512055A1BC4B4033CA(__this, (bool)0, NULL);
		// currentJoints.Remove(joint);
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_12 = __this->___currentJoints_5;
		JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = List_1_Remove_m76DCA01145942BA76EF57510931D438F6BAE4F82(L_12, L_13, List_1_Remove_m76DCA01145942BA76EF57510931D438F6BAE4F82_RuntimeMethod_var);
	}

IL_004e:
	{
		// if (currentJoints.Count <= 0)
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_15 = __this->___currentJoints_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m0AD894688377C5604795014FBCA9A265B896B417_inline(L_15, List_1_get_Count_m0AD894688377C5604795014FBCA9A265B896B417_RuntimeMethod_var);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// WriteText(true);
		PhysicsTriggerEventReadout_WriteText_m5DB94D15BF0DE143C6C113512055A1BC4B4033CA(__this, (bool)1, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::WriteText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_WriteText_m5DB94D15BF0DE143C6C113512055A1BC4B4033CA (PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E* __this, bool ___clear0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87FA1E3368C9FAD9D143A70CB395D64D193CBD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD615BA2D4F588D5542763B1799E1B17A4021E235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* V_2 = NULL;
	StringBuilder_t* G_B12_0 = NULL;
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* G_B12_1 = NULL;
	StringBuilder_t* G_B11_0 = NULL;
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* G_B13_1 = NULL;
	{
		// if (textField == null) { return; }
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___textField_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (textField == null) { return; }
		return;
	}

IL_000f:
	{
		// if (clear)
		bool L_2 = ___clear0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// textField.text = "";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___textField_4;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// return;
		return;
	}

IL_0023:
	{
		// StringBuilder text = new StringBuilder();
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_0 = L_4;
		// foreach (var joint in currentJoints)
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_5 = __this->___currentJoints_5;
		NullCheck(L_5);
		Enumerator_t8A74C6BB72E340D570BE9E3C2AB0ADD9D6C51B39 L_6;
		L_6 = List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72(L_5, List_1_GetEnumerator_m70A301919477330858A06AE312F1ED809CCB9E72_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE((&V_1), Enumerator_Dispose_m8A20A8D117EA8E863E484FCBF3E5DF8B4F2DF6FE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0056_1;
			}

IL_0037_1:
			{
				// foreach (var joint in currentJoints)
				JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_7;
				L_7 = Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_inline((&V_1), Enumerator_get_Current_mD3D72C58C7DBD2C1244CACC126D52940E0ADAE57_RuntimeMethod_var);
				V_2 = L_7;
				// text.Append(joint.name + " is touching. <br>");
				StringBuilder_t* L_8 = V_0;
				JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
				String_t* L_11;
				L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteralA87FA1E3368C9FAD9D143A70CB395D64D193CBD3, NULL);
				NullCheck(L_8);
				StringBuilder_t* L_12;
				L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_11, NULL);
			}

IL_0056_1:
			{
				// foreach (var joint in currentJoints)
				bool L_13;
				L_13 = Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA((&V_1), Enumerator_MoveNext_mF5408289067372E7D77623ADFE1E7741F1ADADEA_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_006f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		// textField.text = text + "<br>";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_14 = __this->___textField_4;
		StringBuilder_t* L_15 = V_0;
		StringBuilder_t* L_16 = L_15;
		G_B11_0 = L_16;
		G_B11_1 = L_14;
		if (L_16)
		{
			G_B12_0 = L_16;
			G_B12_1 = L_14;
			goto IL_007d;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		goto IL_0082;
	}

IL_007d:
	{
		NullCheck(G_B12_0);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B12_0);
		G_B13_0 = L_17;
		G_B13_1 = G_B12_1;
	}

IL_0082:
	{
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B13_0, _stringLiteralD615BA2D4F588D5542763B1799E1B17A4021E235, NULL);
		NullCheck(G_B13_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B13_1, L_18);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout__ctor_m01CFCB80EF2AB7C54FD26136BFAFFFF2BF3224AC (PhysicsTriggerEventReadout_tA57F9053E3B5291B18899E560AFD25327A8B150E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6F3F17D02E1F01C3386C4C3FDFB56ADD80D1A192_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JointKinematicBody> currentJoints = new List<JointKinematicBody>();
		List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E* L_0 = (List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E*)il2cpp_codegen_object_new(List_1_tC338922AA7C777DFC2B86B43F8B7E0EE1954A29E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6F3F17D02E1F01C3386C4C3FDFB56ADD80D1A192(L_0, List_1__ctor_m6F3F17D02E1F01C3386C4C3FDFB56ADD80D1A192_RuntimeMethod_var);
		__this->___currentJoints_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentJoints_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m9E5EBC77EC9B960FB18B65D94BF42F7EA8CA50C6_inline (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->___handPhysicsLayer_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m7BF4CB7E70EFB6CD80F3F77CBAE771716FF79ED0_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandPhysicsLayerU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m81F8E9FFACFE8A9C4140EFFFA03D47E40AAC3D9A_inline (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->___usePalmKinematicBody_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m67BE8E1211A0B1B165E25B82D3F879D409450694_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUsePalmKinematicBodyU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m642AA6044A1D1F2E0BD7F19E840EC3201987A8AB_inline (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fingerTipKinematicBodyPrefab_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mE62F22D0A4E4DFE47FBF60A5C354D1150E90AF21_inline (HandPhysicsServiceProfile_tBDFE50F749D6AE0A58C5546AA0DB0C4499E490BD* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___palmKinematicBodyPrefab_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m99C4CB7F02C191EB88579EA58D138D144030A892_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CHandPhysicsServiceRootU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandPhysicsServiceRootU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_HandPhysicsServiceRoot_mEDA47B73985CFE5593713DA7268AAB07C0321934_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CHandPhysicsServiceRootU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m77B12ADB2D2CD12BD3B0F4B6B88741489939CC9E_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->___U3CHandednessTypeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* JointKinematicBody_get_Joint_m7CD5366B9380ACAD28E0C3D9911375F99B40B3DD_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Joint { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CJointU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m73DC834B823F8BE1147C1C911B5572E9D2A45B33_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->___U3CJointTypeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_m9AA4BFBBC07572113292EC77A012F144B569164A_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform Joint { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___U3CJointU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_FingerTipKinematicBodyPrefab_mDCEB71782ABC9AB74ED4E97F4066F3D535667A4D_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fingerTipKinematicBodyPrefab_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m0F8368510837B9E4B871D09A7A6DAEB09FB4D4E4_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->___U3CHandPhysicsLayerU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_mBB0C082F0A6D6CB2603F308881440016BEC4083A_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->___U3CUsePalmKinematicBodyU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HandPhysicsService_get_PalmKinematicBodyPrefab_m8F15CD10E8BE3A1F0BEE38027CFB41F265F8BE5F_inline (HandPhysicsService_t1D77FB4AFC9703B596EE3C4D47216970FBCAA890* __this, const RuntimeMethod* method) 
{
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___palmKinematicBodyPrefab_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m7C023561616D22CFEEA796AB2D9334BDA6A0FAD0_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CJointTypeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m894E251DC1625B3DAF1478896419E4551C5E6E5B_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->___U3CHandednessTypeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* JointKinematicBody_get_OnEnableAction_m3F01CA478D48E1BF10E3F82617AFE23694C3EB96_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_0 = __this->___U3COnEnableActionU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* JointKinematicBody_get_OnDisableAction_m5B477E4517FBEA9D2518C9F7823EE43C8C511223_inline (JointKinematicBody_tE1AB63485D89F999D07005C192C5AF83AD5B664E* __this, const RuntimeMethod* method) 
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t995395EA370D4912CA4CBEF7089ED9405327F340* L_0 = __this->___U3COnDisableActionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->___m_Ptr_0 = L_0;
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7(L_1, NULL);
		return;
	}
}
