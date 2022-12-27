#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Editor.InspectorPropertySetting>
struct List_1_t8E61E36C0C19F075BE4E5B60E87C031A63C06106;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect
struct AudioLoFiEffect_tC39A00347070CC3A74BF99DF46C5170A055D3A69;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tCB1C695B973C92DD68D0B561E01683EFFAE9044C;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.String
struct String_t;
// Facebook.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6;
// Facebook.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech
struct TextToSpeech_t1EF9BB0EC821F7E9FA653C0921DA0CDCF6DA1F7B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_t5511AC264C914065B4C84ECA02C3FC05D1C915B6  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46  : public BaseDataProvider_1_t5511AC264C914065B4C84ECA02C3FC05D1C915B6
{
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;
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

// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings
struct UnityARCameraSettings_tEE96490B50567703BEFDD8FF113C55A76CC58CA9  : public BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46
{
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackedPose Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::poseSource
	int32_t ___poseSource_15;
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackingType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::trackingType
	int32_t ___trackingType_16;
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArUpdateType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettings::updateType
	int32_t ___updateType_17;
};

// Microsoft.MixedReality.Toolkit.Utilities.Editor.InspectorFieldsExample
struct InspectorFieldsExample_tAF7063C737BEA4421BE5722A35C4B4E6CD1AC383  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Editor.InspectorFieldsExample::ComponentName
	String_t* ___ComponentName_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Editor.InspectorFieldsExample::Enabled
	bool ___Enabled_5;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Editor.InspectorFieldsExample::ComponentOption
	String_t* ___ComponentOption_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Editor.InspectorFieldsExample::ComponentIndex
	int32_t ___ComponentIndex_7;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Editor.InspectorPropertySetting> Microsoft.MixedReality.Toolkit.Utilities.Editor.InspectorFieldsExample::Settings
	List_1_t8E61E36C0C19F075BE4E5B60E87C031A63C06106* ___Settings_8;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection
struct LoFiFilterSelection_tD96C92CE56412E7291F68655B59A544CDA768F9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::NarrowBandTelephony
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___NarrowBandTelephony_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::AmRadio
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___AmRadio_5;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::FullRange
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___FullRange_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::UnknownQuality
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___UnknownQuality_7;
	// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::loFiEffect
	AudioLoFiEffect_tC39A00347070CC3A74BF99DF46C5170A055D3A69* ___loFiEffect_8;
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::objectRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___objectRenderer_9;
};

// Facebook.WitAi.TTS.Samples.TTSCacheToggle
struct TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.TTS.Integrations.TTSDiskCache Facebook.WitAi.TTS.Samples.TTSCacheToggle::_diskCache
	TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* ____diskCache_4;
	// UnityEngine.UI.Text Facebook.WitAi.TTS.Samples.TTSCacheToggle::_cacheLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____cacheLabel_5;
	// UnityEngine.UI.Button Facebook.WitAi.TTS.Samples.TTSCacheToggle::_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____button_6;
	// Facebook.WitAi.TTS.Data.TTSDiskCacheLocation Facebook.WitAi.TTS.Samples.TTSCacheToggle::_cacheLocation
	int32_t ____cacheLocation_7;
};

// Facebook.WitAi.TTS.Samples.TTSErrorText
struct TTSErrorText_t137C15C0282435D336D5BB765691739CFAB05EF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Facebook.WitAi.TTS.Samples.TTSErrorText::_errorLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____errorLabel_4;
	// System.String Facebook.WitAi.TTS.Samples.TTSErrorText::_error
	String_t* ____error_5;
};

// Facebook.WitAi.TTS.Samples.TTSSpeakerInput
struct TTSSpeakerInput_t14DD0717A053EC18CA979543DE9D287D69267B88  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Facebook.WitAi.TTS.Samples.TTSSpeakerInput::_title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____title_4;
	// UnityEngine.UI.InputField Facebook.WitAi.TTS.Samples.TTSSpeakerInput::_input
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ____input_5;
	// Facebook.WitAi.TTS.Utilities.TTSSpeaker Facebook.WitAi.TTS.Samples.TTSSpeakerInput::_speaker
	TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* ____speaker_6;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.TextToSpeechSample
struct TextToSpeechSample_t68B9E61E99D22DA78707ABC935F8C917A8DDFC5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech Microsoft.MixedReality.Toolkit.Examples.Demos.TextToSpeechSample::textToSpeech
	TextToSpeech_t1EF9BB0EC821F7E9FA653C0921DA0CDCF6DA1F7B* ___textToSpeech_4;
};

// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile
struct UnityARCameraSettingsProfile_t97681668F15F49FB481014F0668E5E9CFAE523D3  : public BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799
{
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackedPose Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::poseSource
	int32_t ___poseSource_5;
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArTrackingType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::trackingType
	int32_t ___trackingType_6;
	// Microsoft.MixedReality.Toolkit.Experimental.UnityAR.ArUpdateType Microsoft.MixedReality.Toolkit.Experimental.UnityAR.UnityARCameraSettingsProfile::updateType
	int32_t ___updateType_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9001[6] = 
{
	static_cast<int32_t>(offsetof(LoFiFilterSelection_tD96C92CE56412E7291F68655B59A544CDA768F9E, ___NarrowBandTelephony_4)),static_cast<int32_t>(offsetof(LoFiFilterSelection_tD96C92CE56412E7291F68655B59A544CDA768F9E, ___AmRadio_5)),static_cast<int32_t>(offsetof(LoFiFilterSelection_tD96C92CE56412E7291F68655B59A544CDA768F9E, ___FullRange_6)),static_cast<int32_t>(offsetof(LoFiFilterSelection_tD96C92CE56412E7291F68655B59A544CDA768F9E, ___UnknownQuality_7)),static_cast<int32_t>(offsetof(LoFiFilterSelection_tD96C92CE56412E7291F68655B59A544CDA768F9E, ___loFiEffect_8)),static_cast<int32_t>(offsetof(LoFiFilterSelection_tD96C92CE56412E7291F68655B59A544CDA768F9E, ___objectRenderer_9)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9002[1] = 
{
	static_cast<int32_t>(offsetof(TextToSpeechSample_t68B9E61E99D22DA78707ABC935F8C917A8DDFC5B, ___textToSpeech_4)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9004[8] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9005[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9006[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9007[3] = 
{
	static_cast<int32_t>(offsetof(UnityARCameraSettings_tEE96490B50567703BEFDD8FF113C55A76CC58CA9, ___poseSource_15)),static_cast<int32_t>(offsetof(UnityARCameraSettings_tEE96490B50567703BEFDD8FF113C55A76CC58CA9, ___trackingType_16)),static_cast<int32_t>(offsetof(UnityARCameraSettings_tEE96490B50567703BEFDD8FF113C55A76CC58CA9, ___updateType_17)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9008[3] = 
{
	static_cast<int32_t>(offsetof(UnityARCameraSettingsProfile_t97681668F15F49FB481014F0668E5E9CFAE523D3, ___poseSource_5)),static_cast<int32_t>(offsetof(UnityARCameraSettingsProfile_t97681668F15F49FB481014F0668E5E9CFAE523D3, ___trackingType_6)),static_cast<int32_t>(offsetof(UnityARCameraSettingsProfile_t97681668F15F49FB481014F0668E5E9CFAE523D3, ___updateType_7)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9011[3] = 
{
	static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___IsTextualNodeBitmap_0)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___CanReadContentAsBitmap_1)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___HasValueBitmap_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9014[5] = 
{
	static_cast<int32_t>(offsetof(InspectorFieldsExample_tAF7063C737BEA4421BE5722A35C4B4E6CD1AC383, ___ComponentName_4)),static_cast<int32_t>(offsetof(InspectorFieldsExample_tAF7063C737BEA4421BE5722A35C4B4E6CD1AC383, ___Enabled_5)),static_cast<int32_t>(offsetof(InspectorFieldsExample_tAF7063C737BEA4421BE5722A35C4B4E6CD1AC383, ___ComponentOption_6)),static_cast<int32_t>(offsetof(InspectorFieldsExample_tAF7063C737BEA4421BE5722A35C4B4E6CD1AC383, ___ComponentIndex_7)),static_cast<int32_t>(offsetof(InspectorFieldsExample_tAF7063C737BEA4421BE5722A35C4B4E6CD1AC383, ___Settings_8)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9016[4] = 
{
	static_cast<int32_t>(offsetof(TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC, ____diskCache_4)),static_cast<int32_t>(offsetof(TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC, ____cacheLabel_5)),static_cast<int32_t>(offsetof(TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC, ____button_6)),static_cast<int32_t>(offsetof(TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC, ____cacheLocation_7)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9017[2] = 
{
	static_cast<int32_t>(offsetof(TTSErrorText_t137C15C0282435D336D5BB765691739CFAB05EF1, ____errorLabel_4)),static_cast<int32_t>(offsetof(TTSErrorText_t137C15C0282435D336D5BB765691739CFAB05EF1, ____error_5)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9018[3] = 
{
	static_cast<int32_t>(offsetof(TTSSpeakerInput_t14DD0717A053EC18CA979543DE9D287D69267B88, ____title_4)),static_cast<int32_t>(offsetof(TTSSpeakerInput_t14DD0717A053EC18CA979543DE9D287D69267B88, ____input_5)),static_cast<int32_t>(offsetof(TTSSpeakerInput_t14DD0717A053EC18CA979543DE9D287D69267B88, ____speaker_6)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9022[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
