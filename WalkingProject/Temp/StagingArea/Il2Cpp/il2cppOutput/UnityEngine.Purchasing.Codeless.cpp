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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t4AC69E73617B5F04DBCD68EEADDEFF601334F957;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t35C7004442F69D20FCF9A931F0463497E14D8BF1;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_tF9438512BF1D32CAEE6079588FC3091196738232;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>
struct ICollection_1_tFCD5A3ABCD37F9F15F6B2BC2A5DDB4904C58BDA4;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>
struct IEnumerable_1_tDFA71E2E4F968DA5C88C2F32577D992090849BF1;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct IList_1_t7DF37248BD79E44B998083842C29BF21372A43E8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t053DAB6E2110E276A0339D73497193F464BC1F82;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_t80CB26AE943C96A7CD9D82DE88B86E33539C84D3;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Uniject.IUtil
struct IUtil_t8BE9939179C560ED69472F76EFEED3FF9DC9E4F7;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>
struct UnityEvent_2_tCD04AC1BC9C3ABDC6DB6482B553FABA50231BF26;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Purchasing.CloudCatalogImpl
struct CloudCatalogImpl_t7896988F7DBBDDAA916C32EAE92A731D363603BB;
// UnityEngine.Purchasing.CodelessIAPStoreListener
struct CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t29DFEB92F0789E5E0A5F52148451C2A5F9BEA425;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384;
// UnityEngine.Purchasing.IAPButton
struct IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D;
// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t105B1E663752AD1FC6760BBEDB9182D9039DCEF6;
// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_tC47B44C42F2D76F2604D00BC9B2C1433CF6E17BF;
// UnityEngine.Purchasing.IAPButton[]
struct IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3;
// UnityEngine.Purchasing.IAPListener
struct IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB;
// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t83AEE810FE443920F4316024E8ED8A9BE7252A8A;
// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t69E349597FB56FDCC1E0936354455DA0169F21AE;
// UnityEngine.Purchasing.IAPListener[]
struct IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11;
// UnityEngine.Purchasing.IAsyncWebUtil
struct IAsyncWebUtil_tDB45A93B4E806E3668FC53AA623877CEA299DA73;
// UnityEngine.Purchasing.IDs
struct IDs_t978DE239966E5906480541F9982EA9624943DA53;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t4AEE9698E20BA2DCA32EC4729DCAA60D09DA95CA;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t15B8B05C30FD8B792A3039287AFAD87216827AED;
// UnityEngine.Purchasing.IProductCatalogImpl
struct IProductCatalogImpl_t203095031FB5F7CEDDDDEC3C2EE12E9678DD586A;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_tBB9A0373D14167C7600B988F37B85E14E8D60A66;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_tD60BF518DCB0A4528B0374216D4E433A8C8EEB4D;
// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273;
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A;
// UnityEngine.Purchasing.Price
struct Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895;
// UnityEngine.Purchasing.Product
struct Product_t830A133A97BEA12C3CD696853098A295D99A6DE4;
// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD;
// UnityEngine.Purchasing.ProductCatalogItem[]
struct ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912;
// UnityEngine.Purchasing.ProductCatalogPayout
struct ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA;
// UnityEngine.Purchasing.ProductCatalogPayout[]
struct ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0;
// UnityEngine.Purchasing.StoreID[]
struct StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppleExtensions_t1DA9A8B7013578DF180502E5C1620113C48584D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tFCD5A3ABCD37F9F15F6B2BC2A5DDB4904C58BDA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDs_t978DE239966E5906480541F9982EA9624943DA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t5034BA5DBE8A3F8162B17AD586FDDEE660E6183A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t77F0265A8B653A27BF6914123D7DE8D112A854F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE6AB0A247C40B59559A3E2C76B0C91920FAEE658_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2EF73F501DC19AA4604352443EAA0B5DD1FC24DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9320E3840779236D3438416977BEA0F50AEF0438_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9793F15D795DC47AB286234C9AAA7D3E2A354A3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGooglePlayStoreExtensions_tF4B45656087156E911958AFE99AB4FFD9FC6BFB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMicrosoftExtensions_tB919F886F240A35B0721C4E0EC9FDE2D11911316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISamsungAppsExtensions_t874925F4CF5FFDB35F1752FAEFA4AA5FE45CC73E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1C99BFDF8E727850D952C770A237005295E9DE74;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
IL2CPP_EXTERN_C String_t* _stringLiteral4818CDB71856B7EF38922792D99BA8CE7B4C845E;
IL2CPP_EXTERN_C String_t* _stringLiteral4B2773C3D9690A0B0BB2782558E50480AB7F80BD;
IL2CPP_EXTERN_C String_t* _stringLiteral527C75C1D07CB5F6D0B5FF91F8DDF8EB4B7D2E74;
IL2CPP_EXTERN_C String_t* _stringLiteral677CF493AFD568843F6FE985C45C0DF41E3F0843;
IL2CPP_EXTERN_C String_t* _stringLiteral6EF070A5ED4DDDD1793652EFC80D6D544EB6C38D;
IL2CPP_EXTERN_C String_t* _stringLiteral85720EDF173A3A9BE210D4FB7BDD2E21D0D31697;
IL2CPP_EXTERN_C String_t* _stringLiteral947D2F2034D4C547910A951ACA54EB0B80AFF5CE;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBE9D2BA04ECD309F85D869051049DA69EC8A05;
IL2CPP_EXTERN_C String_t* _stringLiteralA04B49E250B6820A007D06817185F5E3C633C4A8;
IL2CPP_EXTERN_C String_t* _stringLiteralA5992C10DC3758E8B9070E1DB9797B72E9535BFB;
IL2CPP_EXTERN_C String_t* _stringLiteralAE838E8A81AC27F40386F6B5C051183F526F243B;
IL2CPP_EXTERN_C String_t* _stringLiteralC5385AC3E5574F459361EA1A0AE4800CB8C8F0A8;
IL2CPP_EXTERN_C String_t* _stringLiteralCD1528EFE2EDFC7665A6FAD8D2C526AE4FEDFD74;
IL2CPP_EXTERN_C String_t* _stringLiteralCE7161EFCCA6A6BCA131AB91AEE8C8F9258D3682;
IL2CPP_EXTERN_C String_t* _stringLiteralDFBCD5AFAAB0A9BFA2ED2D6CB5298FAE29947311;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A341F41401BE96F54E268141C20EB3C4CF43F8;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisIPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF_m6A5F4EE32F39C664A1A279F15D55E86D8DA4D93E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m419962C305E5F6F15E8D05FE917247E23DF8EAAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5F9C68CF90A2485BFAC00260D5505EF27A58B167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m18832746455997D8F8D870E415E67CF8D9DF7A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_OnTransactionsRestored_m0D21D7836CCF081BE6CEECA3A6747F401878AE1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_PurchaseProduct_mBC1469CCCAEC4899443295BA4FDED1CF8CCCBD98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_Restore_m2E37F9C4F76CC9F557EC05414460BDABD0AF1F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IExtensionProvider_GetExtension_TisIAppleExtensions_t1DA9A8B7013578DF180502E5C1620113C48584D4_m4C7C4F5D9C2B9AAF70E58F2B55EECB45DEFD319C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IExtensionProvider_GetExtension_TisIGooglePlayStoreExtensions_tF4B45656087156E911958AFE99AB4FFD9FC6BFB3_mFBE304531E3ECC67722A5F04B8FABFD764B5FB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IExtensionProvider_GetExtension_TisIMicrosoftExtensions_tB919F886F240A35B0721C4E0EC9FDE2D11911316_m77394A09A96FB50EB6E33AA9D7B03007C92AE069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IExtensionProvider_GetExtension_TisISamsungAppsExtensions_t874925F4CF5FFDB35F1752FAEFA4AA5FE45CC73E_m3E23B1F3333681732A69FA748CCE39E8620A83DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m065EA8A97CA4A9F53C1F518C97CF3A9C7A9BF9AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m37274D3BF98826224FC237C73500978B6AC8C6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m771A87E86AAF34F3F6CBB299CB3AB08CB6D21F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0E28837A6B0F6FD881380841E6B664C586ABF294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1A4DDA7ADD74C5B962E21919CCA81C519D2F2CA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m943AB2E504CCD4B9EBE5C84ADB3B948C48D0000C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA89BFB01A77C9E7000BA82C7BDB91B81B6EEFBF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1ACAED1EF5512AED0411794B7B06D2EF1F4DE835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1D0C87BEFFF1CEEF023FC8B09611E722468C34B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA55757034DBC1371DCFE293E54BB7B16FD40CA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mAC2882CF9E139AB6040F076A21AB25B981F063FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCD2EAC6255F787E2D1B5B77D320CA75AC62EBCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m26AD364ACCE581F0AA66A2E53D8AB36601FEE678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m830FC4A963C43D0614EFADCBEE55694826FEE8AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_AddButton_m50C63ED492D9E8D88C1B271C520EA3E6CF1B5C50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_AddListener_m6C1E872F3EA8B81E5861579FEB6AD1DB30DBD3E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m9F3FA5857540C93BD6B01F63FCF5DE53569828C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_GetProduct_m4E7C6717F62449C791F80C01CA3D9A8FC03FEA92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_HasProductInCatalog_m39A5055C399CDFD2451866B4AADE1766525AEF30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_m6C1071E4B1A729C0386E2D5FDC2AB349BF828D44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_InitializePurchasing_m898CB07CC1ECACE53DAB42F618365A5E31E10A9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_InitiatePurchase_m70781EFBA8BF2469CAF493B85B54581345EBD95A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_OnInitializeFailed_mCB022C299C8143C4E56A8B4119507B90D1A0BCA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_OnInitialized_m1235B516EF0A3BDE4BCBB4B8100794EAE6F23D6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_OnPurchaseFailed_m2269611D1EE6624C350C351629A1B02A9433AE46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_ProcessPurchase_m4A07B67E6DBA55E91B3DC385F290858A26C06EFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_RemoveButton_mFA6AA085E912F9A7A634494EAED4F35CEE045727_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_RemoveListener_m0227BECDF6F0D7EDF632544D3C7D1847B80A20AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener__ctor_mF0158A787DA6CE6D1C00D9018A738F505ADB4C3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_OnEnable_mDC033112BF3AA4B8394EE7A69A3433CBAC02FB22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_OnPurchaseFailed_m9C3428592156C0DBC1066DB81D7ABF8F11197A3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_OnTransactionsRestored_m0D21D7836CCF081BE6CEECA3A6747F401878AE1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_ProcessPurchase_m6A34DE1619E799FB5837AFB674ED827D515133DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_PurchaseProduct_mBC1469CCCAEC4899443295BA4FDED1CF8CCCBD98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_Restore_m2E37F9C4F76CC9F557EC05414460BDABD0AF1F43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_Start_m74C5462C93F5AECF5102E489E5DAAC590ABC4656_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPButton_UpdateText_mDCF0506AD1F2B77033C384171A220F373B8E4D0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPConfigurationHelper_PopulateConfigurationBuilder_m2DF5E82B7BC135630F8D451320542EEF05CA686C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPListener_OnEnable_m55E72CDAE4ED1AA82F6C7BA911F03473FD6D661D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPListener_OnPurchaseFailed_m75E6AC6CC04207A5491A28E3FD08BEB637D4B75F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAPListener_ProcessPurchase_m12192819CE69AC89678DCF72930B8AF194CD0FD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseCompletedEvent__ctor_m86244C23B55B5F2F06D60A8065DC199EE86B4EAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseCompletedEvent__ctor_mC44BFBC16C40FA833D25DB18AFD3E906F6C0AD26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseFailedEvent__ctor_mB3BE8906F7DD2F0D75C2D8ED2B05B3AA32C993EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPurchaseFailedEvent__ctor_mE13A1E1901F03EF6BD620B6E1EC825B2A987B557_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384;
struct PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAE2877E4BB69B7023E495AD9C252243CEF4906C4 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317, ____items_1)); }
	inline IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3* get__items_1() const { return ____items_1; }
	inline IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317_StaticFields, ____emptyArray_5)); }
	inline IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IAPButtonU5BU5D_t0A7F1AC5F0A881CDA6C4549CFE11E7DAE90A1DE3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9, ____items_1)); }
	inline IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11* get__items_1() const { return ____items_1; }
	inline IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9_StaticFields, ____emptyArray_5)); }
	inline IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IAPListenerU5BU5D_tEBA544CF61A96C1919D67A40DB103323CA1D6F11* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389, ____items_1)); }
	inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* get__items_1() const { return ____items_1; }
	inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389_StaticFields, ____emptyArray_5)); }
	inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A, ____items_1)); }
	inline ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912* get__items_1() const { return ____items_1; }
	inline ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A_StaticFields, ____emptyArray_5)); }
	inline ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductCatalogItemU5BU5D_t2E6EBEA9899762131EBE84C731F8BF58E623E912* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7, ____items_1)); }
	inline ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4* get__items_1() const { return ____items_1; }
	inline ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7_StaticFields, ____emptyArray_5)); }
	inline ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductCatalogPayoutU5BU5D_tE1E948C177F2A8017F65F05F0FF9A39F6F8E55D4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150, ____items_1)); }
	inline StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1* get__items_1() const { return ____items_1; }
	inline StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150_StaticFields, ____emptyArray_5)); }
	inline StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StoreIDU5BU5D_tCA45F79B71582CA3084140F88DCA7148F1F57AE1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.Purchasing.CodelessIAPStoreListener
struct CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton> UnityEngine.Purchasing.CodelessIAPStoreListener::activeButtons
	List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * ___activeButtons_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener> UnityEngine.Purchasing.CodelessIAPStoreListener::activeListeners
	List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * ___activeListeners_2;
	// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::controller
	RuntimeObject* ___controller_4;
	// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::extensions
	RuntimeObject* ___extensions_5;
	// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.CodelessIAPStoreListener::catalog
	ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * ___catalog_6;

public:
	inline static int32_t get_offset_of_activeButtons_1() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54, ___activeButtons_1)); }
	inline List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * get_activeButtons_1() const { return ___activeButtons_1; }
	inline List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 ** get_address_of_activeButtons_1() { return &___activeButtons_1; }
	inline void set_activeButtons_1(List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * value)
	{
		___activeButtons_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeButtons_1), (void*)value);
	}

	inline static int32_t get_offset_of_activeListeners_2() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54, ___activeListeners_2)); }
	inline List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * get_activeListeners_2() const { return ___activeListeners_2; }
	inline List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 ** get_address_of_activeListeners_2() { return &___activeListeners_2; }
	inline void set_activeListeners_2(List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * value)
	{
		___activeListeners_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeListeners_2), (void*)value);
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54, ___controller_4)); }
	inline RuntimeObject* get_controller_4() const { return ___controller_4; }
	inline RuntimeObject** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(RuntimeObject* value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_5() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54, ___extensions_5)); }
	inline RuntimeObject* get_extensions_5() const { return ___extensions_5; }
	inline RuntimeObject** get_address_of_extensions_5() { return &___extensions_5; }
	inline void set_extensions_5(RuntimeObject* value)
	{
		___extensions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_5), (void*)value);
	}

	inline static int32_t get_offset_of_catalog_6() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54, ___catalog_6)); }
	inline ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * get_catalog_6() const { return ___catalog_6; }
	inline ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A ** get_address_of_catalog_6() { return &___catalog_6; }
	inline void set_catalog_6(ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * value)
	{
		___catalog_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catalog_6), (void*)value);
	}
};

struct CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields
{
public:
	// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::instance
	CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * ___instance_0;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::unityPurchasingInitialized
	bool ___unityPurchasingInitialized_3;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::initializationComplete
	bool ___initializationComplete_7;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields, ___instance_0)); }
	inline CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * get_instance_0() const { return ___instance_0; }
	inline CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_unityPurchasingInitialized_3() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields, ___unityPurchasingInitialized_3)); }
	inline bool get_unityPurchasingInitialized_3() const { return ___unityPurchasingInitialized_3; }
	inline bool* get_address_of_unityPurchasingInitialized_3() { return &___unityPurchasingInitialized_3; }
	inline void set_unityPurchasingInitialized_3(bool value)
	{
		___unityPurchasingInitialized_3 = value;
	}

	inline static int32_t get_offset_of_initializationComplete_7() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields, ___initializationComplete_7)); }
	inline bool get_initializationComplete_7() const { return ___initializationComplete_7; }
	inline bool* get_address_of_initializationComplete_7() { return &___initializationComplete_7; }
	inline void set_initializationComplete_7(bool value)
	{
		___initializationComplete_7 = value;
	}
};


// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::m_Factory
	PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765 * ___m_Factory_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::m_Products
	HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D * ___m_Products_1;
	// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::<useCatalogProvider>k__BackingField
	bool ___U3CuseCatalogProviderU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Factory_0() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE, ___m_Factory_0)); }
	inline PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765 * get_m_Factory_0() const { return ___m_Factory_0; }
	inline PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765 ** get_address_of_m_Factory_0() { return &___m_Factory_0; }
	inline void set_m_Factory_0(PurchasingFactory_tAFBB2D3F6FD1740FCC4B64AE02E4BFFF8A2AB765 * value)
	{
		___m_Factory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Factory_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Products_1() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE, ___m_Products_1)); }
	inline HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D * get_m_Products_1() const { return ___m_Products_1; }
	inline HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D ** get_address_of_m_Products_1() { return &___m_Products_1; }
	inline void set_m_Products_1(HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D * value)
	{
		___m_Products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Products_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE, ___U3CuseCatalogProviderU3Ek__BackingField_2)); }
	inline bool get_U3CuseCatalogProviderU3Ek__BackingField_2() const { return ___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return &___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline void set_U3CuseCatalogProviderU3Ek__BackingField_2(bool value)
	{
		___U3CuseCatalogProviderU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_t73F8B7B7D6CA305D6CFAFE4692A6F0F7B42531D9  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;

public:
	inline static int32_t get_offset_of_m_Binder_0() { return static_cast<int32_t>(offsetof(AbstractPurchasingModule_t73F8B7B7D6CA305D6CFAFE4692A6F0F7B42531D9, ___m_Binder_0)); }
	inline RuntimeObject* get_m_Binder_0() const { return ___m_Binder_0; }
	inline RuntimeObject** get_address_of_m_Binder_0() { return &___m_Binder_0; }
	inline void set_m_Binder_0(RuntimeObject* value)
	{
		___m_Binder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Binder_0), (void*)value);
	}
};


// UnityEngine.Purchasing.IAPConfigurationHelper
struct IAPConfigurationHelper_t42676B5CC5F0D96A4AC071574016F2C31F4F3C71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.IDs
struct IDs_t978DE239966E5906480541F9982EA9624943DA53  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.IDs::m_Dic
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___m_Dic_0;

public:
	inline static int32_t get_offset_of_m_Dic_0() { return static_cast<int32_t>(offsetof(IDs_t978DE239966E5906480541F9982EA9624943DA53, ___m_Dic_0)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_m_Dic_0() const { return ___m_Dic_0; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_m_Dic_0() { return &___m_Dic_0; }
	inline void set_m_Dic_0(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___m_Dic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dic_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Product
struct Product_t830A133A97BEA12C3CD696853098A295D99A6DE4  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CavailableToPurchaseU3Ek__BackingField_2)); }
	inline bool get_U3CavailableToPurchaseU3Ek__BackingField_2() const { return ___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return &___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline void set_U3CavailableToPurchaseU3Ek__BackingField_2(bool value)
	{
		___U3CavailableToPurchaseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CtransactionIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_3() const { return ___U3CtransactionIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_3() { return &___U3CtransactionIDU3Ek__BackingField_3; }
	inline void set_U3CtransactionIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4, ___U3CreceiptU3Ek__BackingField_4)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_4() const { return ___U3CreceiptU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_4() { return &___U3CreceiptU3Ek__BackingField_4; }
	inline void set_U3CreceiptU3Ek__BackingField_4(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Purchasing.ProductCatalog::enableCodelessAutoInitialization
	bool ___enableCodelessAutoInitialization_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::products
	List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A * ___products_2;

public:
	inline static int32_t get_offset_of_enableCodelessAutoInitialization_1() { return static_cast<int32_t>(offsetof(ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A, ___enableCodelessAutoInitialization_1)); }
	inline bool get_enableCodelessAutoInitialization_1() const { return ___enableCodelessAutoInitialization_1; }
	inline bool* get_address_of_enableCodelessAutoInitialization_1() { return &___enableCodelessAutoInitialization_1; }
	inline void set_enableCodelessAutoInitialization_1(bool value)
	{
		___enableCodelessAutoInitialization_1 = value;
	}

	inline static int32_t get_offset_of_products_2() { return static_cast<int32_t>(offsetof(ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A, ___products_2)); }
	inline List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A * get_products_2() const { return ___products_2; }
	inline List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A ** get_address_of_products_2() { return &___products_2; }
	inline void set_products_2(List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A * value)
	{
		___products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_2), (void*)value);
	}
};

struct ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A_StaticFields
{
public:
	// UnityEngine.Purchasing.IProductCatalogImpl UnityEngine.Purchasing.ProductCatalog::instance
	RuntimeObject* ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogPayout
struct ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::t
	String_t* ___t_0;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::st
	String_t* ___st_1;
	// System.Double UnityEngine.Purchasing.ProductCatalogPayout::q
	double ___q_2;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::d
	String_t* ___d_3;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA, ___t_0)); }
	inline String_t* get_t_0() const { return ___t_0; }
	inline String_t** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(String_t* value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_st_1() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA, ___st_1)); }
	inline String_t* get_st_1() const { return ___st_1; }
	inline String_t** get_address_of_st_1() { return &___st_1; }
	inline void set_st_1(String_t* value)
	{
		___st_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___st_1), (void*)value);
	}

	inline static int32_t get_offset_of_q_2() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA, ___q_2)); }
	inline double get_q_2() const { return ___q_2; }
	inline double* get_address_of_q_2() { return &___q_2; }
	inline void set_q_2(double value)
	{
		___q_2 = value;
	}

	inline static int32_t get_offset_of_d_3() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA, ___d_3)); }
	inline String_t* get_d_3() const { return ___d_3; }
	inline String_t** get_address_of_d_3() { return &___d_3; }
	inline void set_d_3(String_t* value)
	{
		___d_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_IdToProduct
	Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F * ___m_IdToProduct_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_StoreSpecificIdToProduct
	Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F * ___m_StoreSpecificIdToProduct_1;
	// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::m_Products
	ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237* ___m_Products_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_ProductSet
	HashSet_1_t35C7004442F69D20FCF9A931F0463497E14D8BF1 * ___m_ProductSet_3;

public:
	inline static int32_t get_offset_of_m_IdToProduct_0() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07, ___m_IdToProduct_0)); }
	inline Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F * get_m_IdToProduct_0() const { return ___m_IdToProduct_0; }
	inline Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F ** get_address_of_m_IdToProduct_0() { return &___m_IdToProduct_0; }
	inline void set_m_IdToProduct_0(Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F * value)
	{
		___m_IdToProduct_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IdToProduct_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreSpecificIdToProduct_1() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07, ___m_StoreSpecificIdToProduct_1)); }
	inline Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F * get_m_StoreSpecificIdToProduct_1() const { return ___m_StoreSpecificIdToProduct_1; }
	inline Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F ** get_address_of_m_StoreSpecificIdToProduct_1() { return &___m_StoreSpecificIdToProduct_1; }
	inline void set_m_StoreSpecificIdToProduct_1(Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F * value)
	{
		___m_StoreSpecificIdToProduct_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreSpecificIdToProduct_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Products_2() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07, ___m_Products_2)); }
	inline ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237* get_m_Products_2() const { return ___m_Products_2; }
	inline ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237** get_address_of_m_Products_2() { return &___m_Products_2; }
	inline void set_m_Products_2(ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237* value)
	{
		___m_Products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Products_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProductSet_3() { return static_cast<int32_t>(offsetof(ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07, ___m_ProductSet_3)); }
	inline HashSet_1_t35C7004442F69D20FCF9A931F0463497E14D8BF1 * get_m_ProductSet_3() const { return ___m_ProductSet_3; }
	inline HashSet_1_t35C7004442F69D20FCF9A931F0463497E14D8BF1 ** get_address_of_m_ProductSet_3() { return &___m_ProductSet_3; }
	inline void set_m_ProductSet_3(HashSet_1_t35C7004442F69D20FCF9A931F0463497E14D8BF1 * value)
	{
		___m_ProductSet_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProductSet_3), (void*)value);
	}
};


// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::<purchasedProduct>k__BackingField
	Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___U3CpurchasedProductU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CpurchasedProductU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04, ___U3CpurchasedProductU3Ek__BackingField_0)); }
	inline Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * get_U3CpurchasedProductU3Ek__BackingField_0() const { return ___U3CpurchasedProductU3Ek__BackingField_0; }
	inline Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 ** get_address_of_U3CpurchasedProductU3Ek__BackingField_0() { return &___U3CpurchasedProductU3Ek__BackingField_0; }
	inline void set_U3CpurchasedProductU3Ek__BackingField_0(Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * value)
	{
		___U3CpurchasedProductU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpurchasedProductU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Purchasing.StoreID
struct StoreID_t94B8565DB72275D0779BD9C7B43D8FFCB1BCE9D4  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StoreID::store
	String_t* ___store_0;
	// System.String UnityEngine.Purchasing.StoreID::id
	String_t* ___id_1;

public:
	inline static int32_t get_offset_of_store_0() { return static_cast<int32_t>(offsetof(StoreID_t94B8565DB72275D0779BD9C7B43D8FFCB1BCE9D4, ___store_0)); }
	inline String_t* get_store_0() const { return ___store_0; }
	inline String_t** get_address_of_store_0() { return &___store_0; }
	inline void set_store_0(String_t* value)
	{
		___store_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StoreID_t94B8565DB72275D0779BD9C7B43D8FFCB1BCE9D4, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}
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


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>
struct Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A, ___list_0)); }
	inline List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * get_list_0() const { return ___list_0; }
	inline List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A, ___current_3)); }
	inline IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * get_current_3() const { return ___current_3; }
	inline IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>
struct Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA, ___list_0)); }
	inline List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * get_list_0() const { return ___list_0; }
	inline List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA, ___current_3)); }
	inline IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * get_current_3() const { return ___current_3; }
	inline IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
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


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Purchasing.AppStore
struct AppStore_tE65D022896B28CFD34753FF40FC7BB756B689AEE 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppStore::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppStore_tE65D022896B28CFD34753FF40FC7BB756B689AEE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.FakeStoreUIMode
struct FakeStoreUIMode_tF8F3B559B35936B80A7EB9DA82B65384CBA61315 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_tF8F3B559B35936B80A7EB9DA82B65384CBA61315, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.IAPButton/ButtonType
struct ButtonType_tE5956F0A8B9B91ADB025C0428D74C038E71B7004 
{
public:
	// System.Int32 UnityEngine.Purchasing.IAPButton/ButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonType_tE5956F0A8B9B91ADB025C0428D74C038E71B7004, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t105B1E663752AD1FC6760BBEDB9182D9039DCEF6  : public UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B
{
public:

public:
};


// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_tC47B44C42F2D76F2604D00BC9B2C1433CF6E17BF  : public UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5
{
public:

public:
};


// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t83AEE810FE443920F4316024E8ED8A9BE7252A8A  : public UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B
{
public:

public:
};


// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t69E349597FB56FDCC1E0936354455DA0169F21AE  : public UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5
{
public:

public:
};


// UnityEngine.Purchasing.InitializationFailureReason
struct InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PayoutType
struct PayoutType_t8339B08FE90A51DFE9311B97B42AD56DE7C8636B 
{
public:
	// System.Int32 UnityEngine.Purchasing.PayoutType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PayoutType_t8339B08FE90A51DFE9311B97B42AD56DE7C8636B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___U3ClocalizedPriceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedPriceStringU3Ek__BackingField_0)); }
	inline String_t* get_U3ClocalizedPriceStringU3Ek__BackingField_0() const { return ___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return &___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline void set_U3ClocalizedPriceStringU3Ek__BackingField_0(String_t* value)
	{
		___U3ClocalizedPriceStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedPriceStringU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3ClocalizedTitleU3Ek__BackingField_1() const { return ___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClocalizedTitleU3Ek__BackingField_1() { return &___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline void set_U3ClocalizedTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3ClocalizedTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedTitleU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3ClocalizedDescriptionU3Ek__BackingField_2() const { return ___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return &___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline void set_U3ClocalizedDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3ClocalizedDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedDescriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3CisoCurrencyCodeU3Ek__BackingField_3)); }
	inline String_t* get_U3CisoCurrencyCodeU3Ek__BackingField_3() const { return ___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return &___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline void set_U3CisoCurrencyCodeU3Ek__BackingField_3(String_t* value)
	{
		___U3CisoCurrencyCodeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisoCurrencyCodeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedPriceU3Ek__BackingField_4)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_U3ClocalizedPriceU3Ek__BackingField_4() const { return ___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_U3ClocalizedPriceU3Ek__BackingField_4() { return &___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline void set_U3ClocalizedPriceU3Ek__BackingField_4(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___U3ClocalizedPriceU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Purchasing.ProductType
struct ProductType_tC52C3BA25156195ACF6AE97650D056434BD51075 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tC52C3BA25156195ACF6AE97650D056434BD51075, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseProcessingResult
struct PurchaseProcessingResult_tD6C3A87FC6F83D8D9133EDA9D1938FC51DFC35E3 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseProcessingResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseProcessingResult_tD6C3A87FC6F83D8D9133EDA9D1938FC51DFC35E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PayoutType UnityEngine.Purchasing.PayoutDefinition::m_Type
	int32_t ___m_Type_0;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Subtype
	String_t* ___m_Subtype_1;
	// System.Double UnityEngine.Purchasing.PayoutDefinition::m_Quantity
	double ___m_Quantity_2;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Data
	String_t* ___m_Data_3;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_Subtype_1() { return static_cast<int32_t>(offsetof(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273, ___m_Subtype_1)); }
	inline String_t* get_m_Subtype_1() const { return ___m_Subtype_1; }
	inline String_t** get_address_of_m_Subtype_1() { return &___m_Subtype_1; }
	inline void set_m_Subtype_1(String_t* value)
	{
		___m_Subtype_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Subtype_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Quantity_2() { return static_cast<int32_t>(offsetof(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273, ___m_Quantity_2)); }
	inline double get_m_Quantity_2() const { return ___m_Quantity_2; }
	inline double* get_address_of_m_Quantity_2() { return &___m_Quantity_2; }
	inline void set_m_Quantity_2(double value)
	{
		___m_Quantity_2 = value;
	}

	inline static int32_t get_offset_of_m_Data_3() { return static_cast<int32_t>(offsetof(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273, ___m_Data_3)); }
	inline String_t* get_m_Data_3() const { return ___m_Data_3; }
	inline String_t** get_address_of_m_Data_3() { return &___m_Data_3; }
	inline void set_m_Data_3(String_t* value)
	{
		___m_Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150 * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_tD60BF518DCB0A4528B0374216D4E433A8C8EEB4D * ___defaultDescription_3;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895 * ___googlePrice_4;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_t80CB26AE943C96A7CD9D82DE88B86E33539C84D3 * ___descriptions_5;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::udpPrice
	Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895 * ___udpPrice_6;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7 * ___payouts_7;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD, ___storeIDs_2)); }
	inline List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150 * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150 ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150 * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeIDs_2), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD, ___defaultDescription_3)); }
	inline LocalizedProductDescription_tD60BF518DCB0A4528B0374216D4E433A8C8EEB4D * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_tD60BF518DCB0A4528B0374216D4E433A8C8EEB4D ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_tD60BF518DCB0A4528B0374216D4E433A8C8EEB4D * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_googlePrice_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD, ___googlePrice_4)); }
	inline Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895 * get_googlePrice_4() const { return ___googlePrice_4; }
	inline Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895 ** get_address_of_googlePrice_4() { return &___googlePrice_4; }
	inline void set_googlePrice_4(Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895 * value)
	{
		___googlePrice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePrice_4), (void*)value);
	}

	inline static int32_t get_offset_of_descriptions_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD, ___descriptions_5)); }
	inline List_1_t80CB26AE943C96A7CD9D82DE88B86E33539C84D3 * get_descriptions_5() const { return ___descriptions_5; }
	inline List_1_t80CB26AE943C96A7CD9D82DE88B86E33539C84D3 ** get_address_of_descriptions_5() { return &___descriptions_5; }
	inline void set_descriptions_5(List_1_t80CB26AE943C96A7CD9D82DE88B86E33539C84D3 * value)
	{
		___descriptions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptions_5), (void*)value);
	}

	inline static int32_t get_offset_of_udpPrice_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD, ___udpPrice_6)); }
	inline Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895 * get_udpPrice_6() const { return ___udpPrice_6; }
	inline Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895 ** get_address_of_udpPrice_6() { return &___udpPrice_6; }
	inline void set_udpPrice_6(Price_t5C83AB4461095D88C49E0A5C76F13E3E339E2895 * value)
	{
		___udpPrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udpPrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_payouts_7() { return static_cast<int32_t>(offsetof(ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD, ___payouts_7)); }
	inline List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7 * get_payouts_7() const { return ___payouts_7; }
	inline List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7 ** get_address_of_payouts_7() { return &___payouts_7; }
	inline void set_payouts_7(List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7 * value)
	{
		___payouts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payouts_7), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___m_Payouts_4)); }
	inline List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0  : public AbstractPurchasingModule_t73F8B7B7D6CA305D6CFAFE4692A6F0F7B42531D9
{
public:
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::m_AppStorePlatform
	int32_t ___m_AppStorePlatform_1;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_2;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_3;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::m_UseCloudCatalog
	bool ___m_UseCloudCatalog_4;
	// System.String UnityEngine.Purchasing.StandardPurchasingModule::<m_persistentDataPath>k__BackingField
	String_t* ___U3Cm_persistentDataPathU3Ek__BackingField_5;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_7;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_8;
	// UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::<webUtil>k__BackingField
	RuntimeObject* ___U3CwebUtilU3Ek__BackingField_9;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0 * ___U3CstoreInstanceU3Ek__BackingField_10;
	// UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.StandardPurchasingModule::m_CloudCatalog
	CloudCatalogImpl_t7896988F7DBBDDAA916C32EAE92A731D363603BB * ___m_CloudCatalog_12;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_14;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * ___windowsStore_15;

public:
	inline static int32_t get_offset_of_m_AppStorePlatform_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___m_AppStorePlatform_1)); }
	inline int32_t get_m_AppStorePlatform_1() const { return ___m_AppStorePlatform_1; }
	inline int32_t* get_address_of_m_AppStorePlatform_1() { return &___m_AppStorePlatform_1; }
	inline void set_m_AppStorePlatform_1(int32_t value)
	{
		___m_AppStorePlatform_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeStoreProvider_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___m_NativeStoreProvider_2)); }
	inline RuntimeObject* get_m_NativeStoreProvider_2() const { return ___m_NativeStoreProvider_2; }
	inline RuntimeObject** get_address_of_m_NativeStoreProvider_2() { return &___m_NativeStoreProvider_2; }
	inline void set_m_NativeStoreProvider_2(RuntimeObject* value)
	{
		___m_NativeStoreProvider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeStoreProvider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___m_RuntimePlatform_3)); }
	inline int32_t get_m_RuntimePlatform_3() const { return ___m_RuntimePlatform_3; }
	inline int32_t* get_address_of_m_RuntimePlatform_3() { return &___m_RuntimePlatform_3; }
	inline void set_m_RuntimePlatform_3(int32_t value)
	{
		___m_RuntimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_m_UseCloudCatalog_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___m_UseCloudCatalog_4)); }
	inline bool get_m_UseCloudCatalog_4() const { return ___m_UseCloudCatalog_4; }
	inline bool* get_address_of_m_UseCloudCatalog_4() { return &___m_UseCloudCatalog_4; }
	inline void set_m_UseCloudCatalog_4(bool value)
	{
		___m_UseCloudCatalog_4 = value;
	}

	inline static int32_t get_offset_of_U3Cm_persistentDataPathU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___U3Cm_persistentDataPathU3Ek__BackingField_5)); }
	inline String_t* get_U3Cm_persistentDataPathU3Ek__BackingField_5() const { return ___U3Cm_persistentDataPathU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3Cm_persistentDataPathU3Ek__BackingField_5() { return &___U3Cm_persistentDataPathU3Ek__BackingField_5; }
	inline void set_U3Cm_persistentDataPathU3Ek__BackingField_5(String_t* value)
	{
		___U3Cm_persistentDataPathU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cm_persistentDataPathU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CutilU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___U3CutilU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CutilU3Ek__BackingField_7() const { return ___U3CutilU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CutilU3Ek__BackingField_7() { return &___U3CutilU3Ek__BackingField_7; }
	inline void set_U3CutilU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CutilU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CutilU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloggerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___U3CloggerU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CloggerU3Ek__BackingField_8() const { return ___U3CloggerU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CloggerU3Ek__BackingField_8() { return &___U3CloggerU3Ek__BackingField_8; }
	inline void set_U3CloggerU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CloggerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloggerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebUtilU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___U3CwebUtilU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CwebUtilU3Ek__BackingField_9() const { return ___U3CwebUtilU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CwebUtilU3Ek__BackingField_9() { return &___U3CwebUtilU3Ek__BackingField_9; }
	inline void set_U3CwebUtilU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CwebUtilU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebUtilU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreInstanceU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___U3CstoreInstanceU3Ek__BackingField_10)); }
	inline StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0 * get_U3CstoreInstanceU3Ek__BackingField_10() const { return ___U3CstoreInstanceU3Ek__BackingField_10; }
	inline StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0 ** get_address_of_U3CstoreInstanceU3Ek__BackingField_10() { return &___U3CstoreInstanceU3Ek__BackingField_10; }
	inline void set_U3CstoreInstanceU3Ek__BackingField_10(StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0 * value)
	{
		___U3CstoreInstanceU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreInstanceU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CloudCatalog_12() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___m_CloudCatalog_12)); }
	inline CloudCatalogImpl_t7896988F7DBBDDAA916C32EAE92A731D363603BB * get_m_CloudCatalog_12() const { return ___m_CloudCatalog_12; }
	inline CloudCatalogImpl_t7896988F7DBBDDAA916C32EAE92A731D363603BB ** get_address_of_m_CloudCatalog_12() { return &___m_CloudCatalog_12; }
	inline void set_m_CloudCatalog_12(CloudCatalogImpl_t7896988F7DBBDDAA916C32EAE92A731D363603BB * value)
	{
		___m_CloudCatalog_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CloudCatalog_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___U3CuseFakeStoreUIModeU3Ek__BackingField_13)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_13() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_13() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_13; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_13(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___U3CuseFakeStoreAlwaysU3Ek__BackingField_14)); }
	inline bool get_U3CuseFakeStoreAlwaysU3Ek__BackingField_14() const { return ___U3CuseFakeStoreAlwaysU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_14() { return &___U3CuseFakeStoreAlwaysU3Ek__BackingField_14; }
	inline void set_U3CuseFakeStoreAlwaysU3Ek__BackingField_14(bool value)
	{
		___U3CuseFakeStoreAlwaysU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_windowsStore_15() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0, ___windowsStore_15)); }
	inline WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * get_windowsStore_15() const { return ___windowsStore_15; }
	inline WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 ** get_address_of_windowsStore_15() { return &___windowsStore_15; }
	inline void set_windowsStore_15(WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * value)
	{
		___windowsStore_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsStore_15), (void*)value);
	}
};

struct StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * ___ModuleInstance_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t4AC69E73617B5F04DBCD68EEADDEFF601334F957 * ___AndroidStoreNameMap_11;

public:
	inline static int32_t get_offset_of_ModuleInstance_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0_StaticFields, ___ModuleInstance_6)); }
	inline StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * get_ModuleInstance_6() const { return ___ModuleInstance_6; }
	inline StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 ** get_address_of_ModuleInstance_6() { return &___ModuleInstance_6; }
	inline void set_ModuleInstance_6(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * value)
	{
		___ModuleInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModuleInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_11() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0_StaticFields, ___AndroidStoreNameMap_11)); }
	inline Dictionary_2_t4AC69E73617B5F04DBCD68EEADDEFF601334F957 * get_AndroidStoreNameMap_11() const { return ___AndroidStoreNameMap_11; }
	inline Dictionary_2_t4AC69E73617B5F04DBCD68EEADDEFF601334F957 ** get_address_of_AndroidStoreNameMap_11() { return &___AndroidStoreNameMap_11; }
	inline void set_AndroidStoreNameMap_11(Dictionary_2_t4AC69E73617B5F04DBCD68EEADDEFF601334F957 * value)
	{
		___AndroidStoreNameMap_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AndroidStoreNameMap_11), (void*)value);
	}
};


// UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.Purchasing.IAPButton
struct IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UnityEngine.Purchasing.IAPButton::productId
	String_t* ___productId_4;
	// UnityEngine.Purchasing.IAPButton/ButtonType UnityEngine.Purchasing.IAPButton::buttonType
	int32_t ___buttonType_5;
	// System.Boolean UnityEngine.Purchasing.IAPButton::consumePurchase
	bool ___consumePurchase_6;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPButton::onPurchaseComplete
	OnPurchaseCompletedEvent_t105B1E663752AD1FC6760BBEDB9182D9039DCEF6 * ___onPurchaseComplete_7;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPButton::onPurchaseFailed
	OnPurchaseFailedEvent_tC47B44C42F2D76F2604D00BC9B2C1433CF6E17BF * ___onPurchaseFailed_8;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::titleText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___titleText_9;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::descriptionText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___descriptionText_10;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::priceText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___priceText_11;

public:
	inline static int32_t get_offset_of_productId_4() { return static_cast<int32_t>(offsetof(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D, ___productId_4)); }
	inline String_t* get_productId_4() const { return ___productId_4; }
	inline String_t** get_address_of_productId_4() { return &___productId_4; }
	inline void set_productId_4(String_t* value)
	{
		___productId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productId_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonType_5() { return static_cast<int32_t>(offsetof(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D, ___buttonType_5)); }
	inline int32_t get_buttonType_5() const { return ___buttonType_5; }
	inline int32_t* get_address_of_buttonType_5() { return &___buttonType_5; }
	inline void set_buttonType_5(int32_t value)
	{
		___buttonType_5 = value;
	}

	inline static int32_t get_offset_of_consumePurchase_6() { return static_cast<int32_t>(offsetof(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D, ___consumePurchase_6)); }
	inline bool get_consumePurchase_6() const { return ___consumePurchase_6; }
	inline bool* get_address_of_consumePurchase_6() { return &___consumePurchase_6; }
	inline void set_consumePurchase_6(bool value)
	{
		___consumePurchase_6 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_7() { return static_cast<int32_t>(offsetof(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D, ___onPurchaseComplete_7)); }
	inline OnPurchaseCompletedEvent_t105B1E663752AD1FC6760BBEDB9182D9039DCEF6 * get_onPurchaseComplete_7() const { return ___onPurchaseComplete_7; }
	inline OnPurchaseCompletedEvent_t105B1E663752AD1FC6760BBEDB9182D9039DCEF6 ** get_address_of_onPurchaseComplete_7() { return &___onPurchaseComplete_7; }
	inline void set_onPurchaseComplete_7(OnPurchaseCompletedEvent_t105B1E663752AD1FC6760BBEDB9182D9039DCEF6 * value)
	{
		___onPurchaseComplete_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseComplete_7), (void*)value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_8() { return static_cast<int32_t>(offsetof(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D, ___onPurchaseFailed_8)); }
	inline OnPurchaseFailedEvent_tC47B44C42F2D76F2604D00BC9B2C1433CF6E17BF * get_onPurchaseFailed_8() const { return ___onPurchaseFailed_8; }
	inline OnPurchaseFailedEvent_tC47B44C42F2D76F2604D00BC9B2C1433CF6E17BF ** get_address_of_onPurchaseFailed_8() { return &___onPurchaseFailed_8; }
	inline void set_onPurchaseFailed_8(OnPurchaseFailedEvent_tC47B44C42F2D76F2604D00BC9B2C1433CF6E17BF * value)
	{
		___onPurchaseFailed_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseFailed_8), (void*)value);
	}

	inline static int32_t get_offset_of_titleText_9() { return static_cast<int32_t>(offsetof(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D, ___titleText_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_titleText_9() const { return ___titleText_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_titleText_9() { return &___titleText_9; }
	inline void set_titleText_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___titleText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleText_9), (void*)value);
	}

	inline static int32_t get_offset_of_descriptionText_10() { return static_cast<int32_t>(offsetof(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D, ___descriptionText_10)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_descriptionText_10() const { return ___descriptionText_10; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_descriptionText_10() { return &___descriptionText_10; }
	inline void set_descriptionText_10(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___descriptionText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionText_10), (void*)value);
	}

	inline static int32_t get_offset_of_priceText_11() { return static_cast<int32_t>(offsetof(IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D, ___priceText_11)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_priceText_11() const { return ___priceText_11; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_priceText_11() { return &___priceText_11; }
	inline void set_priceText_11(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___priceText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___priceText_11), (void*)value);
	}
};


// UnityEngine.Purchasing.IAPListener
struct IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.Purchasing.IAPListener::consumePurchase
	bool ___consumePurchase_4;
	// System.Boolean UnityEngine.Purchasing.IAPListener::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPListener::onPurchaseComplete
	OnPurchaseCompletedEvent_t83AEE810FE443920F4316024E8ED8A9BE7252A8A * ___onPurchaseComplete_6;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPListener::onPurchaseFailed
	OnPurchaseFailedEvent_t69E349597FB56FDCC1E0936354455DA0169F21AE * ___onPurchaseFailed_7;

public:
	inline static int32_t get_offset_of_consumePurchase_4() { return static_cast<int32_t>(offsetof(IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB, ___consumePurchase_4)); }
	inline bool get_consumePurchase_4() const { return ___consumePurchase_4; }
	inline bool* get_address_of_consumePurchase_4() { return &___consumePurchase_4; }
	inline void set_consumePurchase_4(bool value)
	{
		___consumePurchase_4 = value;
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_5() { return static_cast<int32_t>(offsetof(IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB, ___dontDestroyOnLoad_5)); }
	inline bool get_dontDestroyOnLoad_5() const { return ___dontDestroyOnLoad_5; }
	inline bool* get_address_of_dontDestroyOnLoad_5() { return &___dontDestroyOnLoad_5; }
	inline void set_dontDestroyOnLoad_5(bool value)
	{
		___dontDestroyOnLoad_5 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_6() { return static_cast<int32_t>(offsetof(IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB, ___onPurchaseComplete_6)); }
	inline OnPurchaseCompletedEvent_t83AEE810FE443920F4316024E8ED8A9BE7252A8A * get_onPurchaseComplete_6() const { return ___onPurchaseComplete_6; }
	inline OnPurchaseCompletedEvent_t83AEE810FE443920F4316024E8ED8A9BE7252A8A ** get_address_of_onPurchaseComplete_6() { return &___onPurchaseComplete_6; }
	inline void set_onPurchaseComplete_6(OnPurchaseCompletedEvent_t83AEE810FE443920F4316024E8ED8A9BE7252A8A * value)
	{
		___onPurchaseComplete_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseComplete_6), (void*)value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_7() { return static_cast<int32_t>(offsetof(IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB, ___onPurchaseFailed_7)); }
	inline OnPurchaseFailedEvent_t69E349597FB56FDCC1E0936354455DA0169F21AE * get_onPurchaseFailed_7() const { return ___onPurchaseFailed_7; }
	inline OnPurchaseFailedEvent_t69E349597FB56FDCC1E0936354455DA0169F21AE ** get_address_of_onPurchaseFailed_7() { return &___onPurchaseFailed_7; }
	inline void set_onPurchaseFailed_7(OnPurchaseFailedEvent_t69E349597FB56FDCC1E0936354455DA0169F21AE * value)
	{
		___onPurchaseFailed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseFailed_7), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * m_Items[1];

public:
	inline PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mE003BB5BE38016CA479D13E0D5DA06758009E796_gshared (UnityEvent_2_tCD04AC1BC9C3ABDC6DB6482B553FABA50231BF26 * __this, RuntimeObject * ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m4FD0B1A839EF587282C8A066EE6F458D216262D3_gshared (UnityEvent_2_tCD04AC1BC9C3ABDC6DB6482B553FABA50231BF26 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * ProductCatalog_LoadDefaultCatalog_m8CCF34E40E7FF154A73992A1A224A793A2384D91 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.ProductCatalog::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductCatalog_IsEmpty_mCB59AEA97A4BEB061E316BEDCE3D081BDC2A385B (ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m9F3FA5857540C93BD6B01F63FCF5DE53569828C1 (const RuntimeMethod* method);
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * StandardPurchasingModule_Instance_mCAE173F307E7ECAC31E5FBAF1214E02E8A9B7DF4 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StandardPurchasingModule_set_useFakeStoreUIMode_m54588D7E834E42513BBCB50F8A5A1D8D3530CBB8_inline (StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.Purchasing.Extension.IPurchasingModule>()
inline IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384* Array_Empty_TisIPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF_m6A5F4EE32F39C664A1A279F15D55E86D8DA4D93E_inline (const RuntimeMethod* method)
{
	return ((  IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * ConfigurationBuilder_Instance_m8F4EA19F3C0FF462CCF219D0A019BEADA05E7DA2 (RuntimeObject* ___first0, IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384* ___rest1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPConfigurationHelper_PopulateConfigurationBuilder_m2DF5E82B7BC135630F8D451320542EEF05CA686C (ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE ** ___builder0, ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * ___catalog1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasing_Initialize_m2EA64638AFB4783EF1F3518027FC24A86488C323 (RuntimeObject* ___listener0, ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * ___builder1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::.ctor()
inline void List_1__ctor_m1ACAED1EF5512AED0411794B7B06D2EF1F4DE835 (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::.ctor()
inline void List_1__ctor_mA55757034DBC1371DCFE293E54BB7B16FD40CA88 (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener__ctor_mF0158A787DA6CE6D1C00D9018A738F505ADB4C3D (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializePurchasing_m898CB07CC1ECACE53DAB42F618365A5E31E10A9A (const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allProducts_mFCD1044AED78A5C85BE5EB01BF440ECF26CF5A13_inline (ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ProductCollection_WithID_m5699DD6E408024CEDACE1E325F5F41EDFBE2AF02 (ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Add(!0)
inline void List_1_Add_m065EA8A97CA4A9F53C1F518C97CF3A9C7A9BF9AA (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * __this, IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 *, IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Remove(!0)
inline bool List_1_Remove_m943AB2E504CCD4B9EBE5C84ADB3B948C48D0000C (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * __this, IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 *, IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Add(!0)
inline void List_1_Add_m37274D3BF98826224FC237C73500978B6AC8C6D2 (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * __this, IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 *, IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Remove(!0)
inline bool List_1_Remove_m1A4DDA7ADD74C5B962E21919CCA81C519D2F2CA2 (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * __this, IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 *, IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::GetEnumerator()
inline Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  (*) (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::get_Current()
inline IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_inline (Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A * __this, const RuntimeMethod* method)
{
	return ((  IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * (*) (Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnPurchaseFailed_m9C3428592156C0DBC1066DB81D7ABF8F11197A3D (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::MoveNext()
inline bool Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324 (Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::Dispose()
inline void Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1 (Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_UpdateText_mDCF0506AD1F2B77033C384171A220F373B8E4D0A (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline (PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPButton_ProcessPurchase_m6A34DE1619E799FB5837AFB674ED827D515133DC (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::GetEnumerator()
inline Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA  List_1_GetEnumerator_m0E28837A6B0F6FD881380841E6B664C586ABF294 (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA  (*) (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::get_Current()
inline IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * Enumerator_get_Current_m18832746455997D8F8D870E415E67CF8D9DF7A54_inline (Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA * __this, const RuntimeMethod* method)
{
	return ((  IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * (*) (Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPListener_ProcessPurchase_m12192819CE69AC89678DCF72930B8AF194CD0FD8 (IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::MoveNext()
inline bool Enumerator_MoveNext_m5F9C68CF90A2485BFAC00260D5505EF27A58B167 (Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::Dispose()
inline void Enumerator_Dispose_m419962C305E5F6F15E8D05FE917247E23DF8EAAF (Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnPurchaseFailed_m75E6AC6CC04207A5491A28E3FD08BEB637D4B75F (IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_HasProductInCatalog_m39A5055C399CDFD2451866B4AADE1766525AEF30 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, String_t* ___productID0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddButton_m50C63ED492D9E8D88C1B271C520EA3E6CF1B5C50 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveButton_mFA6AA085E912F9A7A634494EAED4F35CEE045727 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitiatePurchase_m70781EFBA8BF2469CAF493B85B54581345EBD95A (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, String_t* ___productID0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::get_ExtensionProvider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_ExtensionProvider_mBD7F17A258DC02E504B2A48340AC20A7965F7833_inline (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896 (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::get_appStore()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StandardPurchasingModule_get_appStore_m21FD28E7B1E3A17B97703F2B9CBBF1D0B20528A6_inline (StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::Invoke(!0)
inline void UnityEvent_1_Invoke_mAC2882CF9E139AB6040F076A21AB25B981F063FA (UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B *, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m26AD364ACCE581F0AA66A2E53D8AB36601FEE678 (UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5 *, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_mE003BB5BE38016CA479D13E0D5DA06758009E796_gshared)(__this, ___arg00, ___arg11, method);
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * CodelessIAPStoreListener_GetProduct_m4E7C6717F62449C791F80C01CA3D9A8FC03FEA92 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, String_t* ___productID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_m0577B0D5F4B4827C2151DE6BB0FF6C0A67C523DE_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_m704C599D7FCAE228EE432795519AEA5CDAE8C985_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_m341672B88DFE9E2FDC3790561FCE7ABA7141F0CB_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::.ctor()
inline void UnityEvent_1__ctor_mCD2EAC6255F787E2D1B5B77D320CA75AC62EBCD9 (UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEE1A2CFF07DB130E94E8EDC3B16BD99927EFCB0B *, const RuntimeMethod*))UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor()
inline void UnityEvent_2__ctor_m830FC4A963C43D0614EFADCBEE55694826FEE8AA (UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t303E7F876F93A36ED8E5DCA060E96AA6E2C8FAD5 *, const RuntimeMethod*))UnityEvent_2__ctor_m4FD0B1A839EF587282C8A066EE6F458D216262D3_gshared)(__this, method);
}
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allValidProducts_m7F20B55411C4101A2D24C2F4B38EEAD7FCF8B38E (ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * __this, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::get_allStoreIDs()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_allStoreIDs_m523F27814449DA17ADDDF94374BBB6D4AA615DB3_inline (ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IDs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDs__ctor_mCCDE9C0F6D094C9FC57F3FAEC51A8DA6BACF5FDA (IDs_t978DE239966E5906480541F9982EA9624943DA53 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDs_Add_mE8F093EFD06D5E1FA1774BE3B624FA87DDA26DC6 (IDs_t978DE239966E5906480541F9982EA9624943DA53 * __this, String_t* ___id0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___stores1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::.ctor()
inline void List_1__ctor_m1D0C87BEFFF1CEEF023FC8B09611E722468C34B0 (List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::get_Payouts()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_Payouts_mDFF83E248100C74CC61AEA983B3E7D1D86653AF1_inline (ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_typeString()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_typeString_m068034D5F5F247856FE3A619B6C06A6C7B2BB25B_inline (ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_subtype()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_subtype_mFBEB555A29A20A4F61CC03C9109BC66C59B1FCDD_inline (ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Purchasing.ProductCatalogPayout::get_quantity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR double ProductCatalogPayout_get_quantity_mEBF1B77957D03361965B8DBB80BA6E34603E2D6C_inline (ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_data_mEA5B549EB6B042E7BBA665B938760F7D70F818CC_inline (ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.String,System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayoutDefinition__ctor_m39DC496DF905CBE9A43FF8A335C2CEC3788CDC77 (PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * __this, String_t* ___typeString0, String_t* ___subtype1, double ___quantity2, String_t* ___data3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::Add(!0)
inline void List_1_Add_m771A87E86AAF34F3F6CBB299CB3AB08CB6D21F50 (List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * __this, PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 *, PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::ToArray()
inline PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* List_1_ToArray_mA89BFB01A77C9E7000BA82C7BDB91B81B6EEFBF0 (List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * __this, const RuntimeMethod* method)
{
	return ((  PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* (*) (List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * ConfigurationBuilder_AddProduct_m27BAF9B63963246C287EEEFA788C7A876555019B (ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * __this, String_t* ___id0, int32_t ___type1, IDs_t978DE239966E5906480541F9982EA9624943DA53 * ___storeIDs2, RuntimeObject* ___payouts3, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddListener_m6C1E872F3EA8B81E5861579FEB6AD1DB30DBD3E9 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * ___listener0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveListener_m0227BECDF6F0D7EDF632544D3C7D1847B80A20AA (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * ___listener0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializeCodelessPurchasingOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_m6C1071E4B1A729C0386E2D5FDC2AB349BF828D44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_m6C1071E4B1A729C0386E2D5FDC2AB349BF828D44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * V_0 = NULL;
	{
		// ProductCatalog catalog = ProductCatalog.LoadDefaultCatalog();
		ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * L_0 = ProductCatalog_LoadDefaultCatalog_m8CCF34E40E7FF154A73992A1A224A793A2384D91(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (catalog.enableCodelessAutoInitialization && !catalog.IsEmpty() && instance == null)
		ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = L_1->get_enableCodelessAutoInitialization_1();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = ProductCatalog_IsEmpty_mCB59AEA97A4BEB061E316BEDCE3D081BDC2A385B(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_5 = ((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// CreateCodelessIAPStoreListenerInstance();
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m9F3FA5857540C93BD6B01F63FCF5DE53569828C1(/*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializePurchasing_m898CB07CC1ECACE53DAB42F618365A5E31E10A9A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitializePurchasing_m898CB07CC1ECACE53DAB42F618365A5E31E10A9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * V_0 = NULL;
	{
		// StandardPurchasingModule module = StandardPurchasingModule.Instance();
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * L_0 = StandardPurchasingModule_Instance_mCAE173F307E7ECAC31E5FBAF1214E02E8A9B7DF4(/*hidden argument*/NULL);
		// module.useFakeStoreUIMode = FakeStoreUIMode.StandardUser;
		StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * L_1 = L_0;
		NullCheck(L_1);
		StandardPurchasingModule_set_useFakeStoreUIMode_m54588D7E834E42513BBCB50F8A5A1D8D3530CBB8_inline(L_1, 1, /*hidden argument*/NULL);
		// ConfigurationBuilder builder = ConfigurationBuilder.Instance(module);
		IPurchasingModuleU5BU5D_tF106F307EE194D8B47140E160F5BC38EDFFF9384* L_2 = Array_Empty_TisIPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF_m6A5F4EE32F39C664A1A279F15D55E86D8DA4D93E_inline(/*hidden argument*/Array_Empty_TisIPurchasingModule_tBA2577ED1E963CA0ABA1DFA359A020982DE0B1BF_m6A5F4EE32F39C664A1A279F15D55E86D8DA4D93E_RuntimeMethod_var);
		ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * L_3 = ConfigurationBuilder_Instance_m8F4EA19F3C0FF462CCF219D0A019BEADA05E7DA2(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// IAPConfigurationHelper.PopulateConfigurationBuilder(ref builder, instance.catalog);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_4 = ((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->get_instance_0();
		NullCheck(L_4);
		ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * L_5 = L_4->get_catalog_6();
		IAPConfigurationHelper_PopulateConfigurationBuilder_m2DF5E82B7BC135630F8D451320542EEF05CA686C((ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE **)(&V_0), L_5, /*hidden argument*/NULL);
		// UnityPurchasing.Initialize(instance, builder);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_6 = ((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->get_instance_0();
		ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * L_7 = V_0;
		UnityPurchasing_Initialize_m2EA64638AFB4783EF1F3518027FC24A86488C323(L_6, L_7, /*hidden argument*/NULL);
		// unityPurchasingInitialized = true;
		((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->set_unityPurchasingInitialized_3((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener__ctor_mF0158A787DA6CE6D1C00D9018A738F505ADB4C3D (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener__ctor_mF0158A787DA6CE6D1C00D9018A738F505ADB4C3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<IAPButton> activeButtons = new List<IAPButton>();
		List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * L_0 = (List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 *)il2cpp_codegen_object_new(List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317_il2cpp_TypeInfo_var);
		List_1__ctor_m1ACAED1EF5512AED0411794B7B06D2EF1F4DE835(L_0, /*hidden argument*/List_1__ctor_m1ACAED1EF5512AED0411794B7B06D2EF1F4DE835_RuntimeMethod_var);
		__this->set_activeButtons_1(L_0);
		// private List<IAPListener> activeListeners = new List<IAPListener> ();
		List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * L_1 = (List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 *)il2cpp_codegen_object_new(List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9_il2cpp_TypeInfo_var);
		List_1__ctor_mA55757034DBC1371DCFE293E54BB7B16FD40CA88(L_1, /*hidden argument*/List_1__ctor_mA55757034DBC1371DCFE293E54BB7B16FD40CA88_RuntimeMethod_var);
		__this->set_activeListeners_2(L_1);
		// private CodelessIAPStoreListener()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// catalog = ProductCatalog.LoadDefaultCatalog();
		ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * L_2 = ProductCatalog_LoadDefaultCatalog_m8CCF34E40E7FF154A73992A1A224A793A2384D91(/*hidden argument*/NULL);
		__this->set_catalog_6(L_2);
		// }
		return;
	}
}
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_0 = ((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// CreateCodelessIAPStoreListenerInstance();
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m9F3FA5857540C93BD6B01F63FCF5DE53569828C1(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// return instance;
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_1 = ((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->get_instance_0();
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m9F3FA5857540C93BD6B01F63FCF5DE53569828C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m9F3FA5857540C93BD6B01F63FCF5DE53569828C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = new CodelessIAPStoreListener();
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_0 = (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 *)il2cpp_codegen_object_new(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var);
		CodelessIAPStoreListener__ctor_mF0158A787DA6CE6D1C00D9018A738F505ADB4C3D(L_0, /*hidden argument*/NULL);
		((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		// if (!unityPurchasingInitialized)
		bool L_1 = ((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->get_unityPurchasingInitialized_3();
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.Log("Initializing UnityPurchasing via Codeless IAP");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral4B2773C3D9690A0B0BB2782558E50480AB7F80BD, /*hidden argument*/NULL);
		// InitializePurchasing();
		CodelessIAPStoreListener_InitializePurchasing_m898CB07CC1ECACE53DAB42F618365A5E31E10A9A(/*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::get_StoreController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_StoreController_mD50D4D757DD4DCB417DE8BBD622ACCF03009F997 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, const RuntimeMethod* method)
{
	{
		// get { return controller; }
		RuntimeObject* L_0 = __this->get_controller_4();
		return L_0;
	}
}
// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::get_ExtensionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_ExtensionProvider_mBD7F17A258DC02E504B2A48340AC20A7965F7833 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, const RuntimeMethod* method)
{
	{
		// get { return extensions; }
		RuntimeObject* L_0 = __this->get_extensions_5();
		return L_0;
	}
}
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_HasProductInCatalog_m39A5055C399CDFD2451866B4AADE1766525AEF30 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_HasProductInCatalog_m39A5055C399CDFD2451866B4AADE1766525AEF30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var product in catalog.allProducts)
		ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * L_0 = __this->get_catalog_6();
		NullCheck(L_0);
		RuntimeObject* L_1 = ProductCatalog_get_allProducts_mFCD1044AED78A5C85BE5EB01BF440ECF26CF5A13_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_tE6AB0A247C40B59559A3E2C76B0C91920FAEE658_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0013:
		{
			// foreach (var product in catalog.allProducts)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * L_4 = InterfaceFuncInvoker0< ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_t9320E3840779236D3438416977BEA0F50AEF0438_il2cpp_TypeInfo_var, L_3);
			// if (product.id == productID)
			NullCheck(L_4);
			String_t* L_5 = L_4->get_id_0();
			String_t* L_6 = ___productID0;
			bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_002a;
			}
		}

IL_0026:
		{
			// return true;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x40, FINALLY_0034);
		}

IL_002a:
		{
			// foreach (var product in catalog.allProducts)
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0013;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject* L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * CodelessIAPStoreListener_GetProduct_m4E7C6717F62449C791F80C01CA3D9A8FC03FEA92 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_GetProduct_m4E7C6717F62449C791F80C01CA3D9A8FC03FEA92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (controller != null && controller.products != null && !string.IsNullOrEmpty(productID))
		RuntimeObject* L_0 = __this->get_controller_4();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_controller_4();
		NullCheck(L_1);
		ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * L_2 = InterfaceFuncInvoker0< ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = ___productID0;
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return controller.products.WithID(productID);
		RuntimeObject* L_5 = __this->get_controller_4();
		NullCheck(L_5);
		ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * L_6 = InterfaceFuncInvoker0< ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = ___productID0;
		NullCheck(L_6);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_8 = ProductCollection_WithID_m5699DD6E408024CEDACE1E325F5F41EDFBE2AF02(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002f:
	{
		// Debug.LogError("CodelessIAPStoreListener attempted to get unknown product " + productID);
		String_t* L_9 = ___productID0;
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA5992C10DC3758E8B9070E1DB9797B72E9535BFB, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_10, /*hidden argument*/NULL);
		// return null;
		return (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *)NULL;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddButton_m50C63ED492D9E8D88C1B271C520EA3E6CF1B5C50 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_AddButton_m50C63ED492D9E8D88C1B271C520EA3E6CF1B5C50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButtons.Add(button);
		List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * L_0 = __this->get_activeButtons_1();
		IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_1 = ___button0;
		NullCheck(L_0);
		List_1_Add_m065EA8A97CA4A9F53C1F518C97CF3A9C7A9BF9AA(L_0, L_1, /*hidden argument*/List_1_Add_m065EA8A97CA4A9F53C1F518C97CF3A9C7A9BF9AA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveButton_mFA6AA085E912F9A7A634494EAED4F35CEE045727 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_RemoveButton_mFA6AA085E912F9A7A634494EAED4F35CEE045727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButtons.Remove(button);
		List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * L_0 = __this->get_activeButtons_1();
		IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_1 = ___button0;
		NullCheck(L_0);
		List_1_Remove_m943AB2E504CCD4B9EBE5C84ADB3B948C48D0000C(L_0, L_1, /*hidden argument*/List_1_Remove_m943AB2E504CCD4B9EBE5C84ADB3B948C48D0000C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddListener_m6C1E872F3EA8B81E5861579FEB6AD1DB30DBD3E9 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_AddListener_m6C1E872F3EA8B81E5861579FEB6AD1DB30DBD3E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeListeners.Add (listener);
		List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * L_0 = __this->get_activeListeners_2();
		IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * L_1 = ___listener0;
		NullCheck(L_0);
		List_1_Add_m37274D3BF98826224FC237C73500978B6AC8C6D2(L_0, L_1, /*hidden argument*/List_1_Add_m37274D3BF98826224FC237C73500978B6AC8C6D2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveListener_m0227BECDF6F0D7EDF632544D3C7D1847B80A20AA (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_RemoveListener_m0227BECDF6F0D7EDF632544D3C7D1847B80A20AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeListeners.Remove (listener);
		List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * L_0 = __this->get_activeListeners_2();
		IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * L_1 = ___listener0;
		NullCheck(L_0);
		List_1_Remove_m1A4DDA7ADD74C5B962E21919CCA81C519D2F2CA2(L_0, L_1, /*hidden argument*/List_1_Remove_m1A4DDA7ADD74C5B962E21919CCA81C519D2F2CA2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitiatePurchase_m70781EFBA8BF2469CAF493B85B54581345EBD95A (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitiatePurchase_m70781EFBA8BF2469CAF493B85B54581345EBD95A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (controller == null)
		RuntimeObject* L_0 = __this->get_controller_4();
		if (L_0)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("Purchase failed because Purchasing was not initialized correctly");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralC5385AC3E5574F459361EA1A0AE4800CB8C8F0A8, /*hidden argument*/NULL);
		// foreach (var button in activeButtons)
		List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * L_1 = __this->get_activeButtons_1();
		NullCheck(L_1);
		Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  L_2 = List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F(L_1, /*hidden argument*/List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0020:
		{
			// foreach (var button in activeButtons)
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_3 = Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_inline((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_0), /*hidden argument*/Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_RuntimeMethod_var);
			V_1 = L_3;
			// if (button.productId == productID)
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->get_productId_4();
			String_t* L_6 = ___productID0;
			bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003e;
			}
		}

IL_0036:
		{
			// button.OnPurchaseFailed(null, Purchasing.PurchaseFailureReason.PurchasingUnavailable);
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_8 = V_1;
			NullCheck(L_8);
			IAPButton_OnPurchaseFailed_m9C3428592156C0DBC1066DB81D7ABF8F11197A3D(L_8, (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *)NULL, 0, /*hidden argument*/NULL);
		}

IL_003e:
		{
			// foreach (var button in activeButtons)
			bool L_9 = Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0020;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		// return;
		return;
	}

IL_0058:
	{
		// controller.InitiatePurchase(productID);
		RuntimeObject* L_10 = __this->get_controller_4();
		String_t* L_11 = ___productID0;
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String) */, IStoreController_t6A30FF7F81804FCC0082AB9DF2CE86BCFB91DF67_il2cpp_TypeInfo_var, L_10, L_11);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnInitialized_m1235B516EF0A3BDE4BCBB4B8100794EAE6F23D6D (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, RuntimeObject* ___controller0, RuntimeObject* ___extensions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnInitialized_m1235B516EF0A3BDE4BCBB4B8100794EAE6F23D6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// initializationComplete = true;
		((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->set_initializationComplete_7((bool)1);
		// this.controller = controller;
		RuntimeObject* L_0 = ___controller0;
		__this->set_controller_4(L_0);
		// this.extensions = extensions;
		RuntimeObject* L_1 = ___extensions1;
		__this->set_extensions_5(L_1);
		// foreach (var button in activeButtons)
		List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * L_2 = __this->get_activeButtons_1();
		NullCheck(L_2);
		Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  L_3 = List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F(L_2, /*hidden argument*/List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_0022:
		{
			// foreach (var button in activeButtons)
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_4 = Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_inline((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_0), /*hidden argument*/Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_RuntimeMethod_var);
			// button.UpdateText();
			NullCheck(L_4);
			IAPButton_UpdateText_mDCF0506AD1F2B77033C384171A220F373B8E4D0A(L_4, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (var button in activeButtons)
			bool L_5 = Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0022;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnInitializeFailed_mCB022C299C8143C4E56A8B4119507B90D1A0BCA8 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnInitializeFailed_mCB022C299C8143C4E56A8B4119507B90D1A0BCA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(string.Format("Purchasing failed to initialize. Reason: {0}", error.ToString()));
		RuntimeObject * L_0 = Box(InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062_il2cpp_TypeInfo_var, (&___error0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___error0 = *(int32_t*)UnBox(L_0);
		String_t* L_2 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE838E8A81AC27F40386F6B5C051183F526F243B, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.CodelessIAPStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodelessIAPStoreListener_ProcessPurchase_m4A07B67E6DBA55E91B3DC385F290858A26C06EFD (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_ProcessPurchase_m4A07B67E6DBA55E91B3DC385F290858A26C06EFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * V_3 = NULL;
	Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool consumePurchase = false;
		V_0 = (bool)0;
		// bool resultProcessed = false;
		V_1 = (bool)0;
		// foreach (IAPButton button in activeButtons)
		List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * L_0 = __this->get_activeButtons_1();
		NullCheck(L_0);
		Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  L_1 = List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F(L_0, /*hidden argument*/List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0012:
		{
			// foreach (IAPButton button in activeButtons)
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_2 = Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_inline((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_RuntimeMethod_var);
			V_3 = L_2;
			// if (button.productId == e.purchasedProduct.definition.id)
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_3 = V_3;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_productId_4();
			PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_5 = ___e0;
			NullCheck(L_5);
			Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_6 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_7 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			String_t* L_8 = ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline(L_7, /*hidden argument*/NULL);
			bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_0037:
		{
			// result = button.ProcessPurchase(e);
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_10 = V_3;
			PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_11 = ___e0;
			NullCheck(L_10);
			int32_t L_12 = IAPButton_ProcessPurchase_m6A34DE1619E799FB5837AFB674ED827D515133DC(L_10, L_11, /*hidden argument*/NULL);
			// if (result == PurchaseProcessingResult.Complete) {
			if (L_12)
			{
				goto IL_0042;
			}
		}

IL_0040:
		{
			// consumePurchase = true;
			V_0 = (bool)1;
		}

IL_0042:
		{
			// resultProcessed = true;
			V_1 = (bool)1;
		}

IL_0044:
		{
			// foreach (IAPButton button in activeButtons)
			bool L_13 = Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_2), /*hidden argument*/Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// foreach (IAPListener listener in activeListeners)
		List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * L_14 = __this->get_activeListeners_2();
		NullCheck(L_14);
		Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA  L_15 = List_1_GetEnumerator_m0E28837A6B0F6FD881380841E6B664C586ABF294(L_14, /*hidden argument*/List_1_GetEnumerator_m0E28837A6B0F6FD881380841E6B664C586ABF294_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_006c:
		{
			// foreach (IAPListener listener in activeListeners)
			IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * L_16 = Enumerator_get_Current_m18832746455997D8F8D870E415E67CF8D9DF7A54_inline((Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *)(&V_4), /*hidden argument*/Enumerator_get_Current_m18832746455997D8F8D870E415E67CF8D9DF7A54_RuntimeMethod_var);
			// result = listener.ProcessPurchase(e);
			PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_17 = ___e0;
			NullCheck(L_16);
			int32_t L_18 = IAPListener_ProcessPurchase_m12192819CE69AC89678DCF72930B8AF194CD0FD8(L_16, L_17, /*hidden argument*/NULL);
			// if (result == PurchaseProcessingResult.Complete) {
			if (L_18)
			{
				goto IL_007d;
			}
		}

IL_007b:
		{
			// consumePurchase = true;
			V_0 = (bool)1;
		}

IL_007d:
		{
			// resultProcessed = true;
			V_1 = (bool)1;
		}

IL_007f:
		{
			// foreach (IAPListener listener in activeListeners)
			bool L_19 = Enumerator_MoveNext_m5F9C68CF90A2485BFAC00260D5505EF27A58B167((Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m5F9C68CF90A2485BFAC00260D5505EF27A58B167_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_006c;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m419962C305E5F6F15E8D05FE917247E23DF8EAAF((Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *)(&V_4), /*hidden argument*/Enumerator_Dispose_m419962C305E5F6F15E8D05FE917247E23DF8EAAF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// if (!resultProcessed) {
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_00bf;
		}
	}
	{
		// Debug.LogError("Purchase not correctly processed for product \"" +
		//                  e.purchasedProduct.definition.id +
		//                  "\". Add an active IAPButton to process this purchase, or add an IAPListener to receive any unhandled purchase events.");
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_21 = ___e0;
		NullCheck(L_21);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_22 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_23 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24 = ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline(L_23, /*hidden argument*/NULL);
		String_t* L_25 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral527C75C1D07CB5F6D0B5FF91F8DDF8EB4B7D2E74, L_24, _stringLiteral85720EDF173A3A9BE210D4FB7BDD2E21D0D31697, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_25, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_00c4;
		}
	}
	{
		return (int32_t)(1);
	}

IL_00c4:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnPurchaseFailed_m2269611D1EE6624C350C351629A1B02A9433AE46 (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnPurchaseFailed_m2269611D1EE6624C350C351629A1B02A9433AE46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * V_2 = NULL;
	Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool resultProcessed = false;
		V_0 = (bool)0;
		// foreach (IAPButton button in activeButtons)
		List_1_t8FAE676C336FC6ABC64AE0683D2D2EBA259C3317 * L_0 = __this->get_activeButtons_1();
		NullCheck(L_0);
		Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A  L_1 = List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F(L_0, /*hidden argument*/List_1_GetEnumerator_m262E4AFA0FE5345555032A71B213343E11DFED2F_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0010:
		{
			// foreach (IAPButton button in activeButtons)
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_2 = Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_inline((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m77F16B7D6707397633BB7FCB94BFFFB42DF82D49_RuntimeMethod_var);
			V_2 = L_2;
			// if (button.productId == product.definition.id)
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_3 = V_2;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_productId_4();
			Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_5 = ___product0;
			NullCheck(L_5);
			ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_6 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			String_t* L_7 = ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline(L_6, /*hidden argument*/NULL);
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003a;
			}
		}

IL_0030:
		{
			// button.OnPurchaseFailed(product, reason);
			IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * L_9 = V_2;
			Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_10 = ___product0;
			int32_t L_11 = ___reason1;
			NullCheck(L_9);
			IAPButton_OnPurchaseFailed_m9C3428592156C0DBC1066DB81D7ABF8F11197A3D(L_9, L_10, L_11, /*hidden argument*/NULL);
			// resultProcessed = true;
			V_0 = (bool)1;
		}

IL_003a:
		{
			// foreach (IAPButton button in activeButtons)
			bool L_12 = Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m403BCC15A8A0A9AD2A55A0972F2AF0D5A346F324_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0010;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1((Enumerator_t6036674029BC50ABFFB2BBABD9EDFB64C30EFB1A *)(&V_1), /*hidden argument*/Enumerator_Dispose_m8B34C4C58DC37B24DA7E8CA895FCCC1BAC43FEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// foreach (IAPListener listener in activeListeners)
		List_1_t4878DD6D95F197FE06B6BE49201CE4532AC46FC9 * L_13 = __this->get_activeListeners_2();
		NullCheck(L_13);
		Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA  L_14 = List_1_GetEnumerator_m0E28837A6B0F6FD881380841E6B664C586ABF294(L_13, /*hidden argument*/List_1_GetEnumerator_m0E28837A6B0F6FD881380841E6B664C586ABF294_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0061:
		{
			// foreach (IAPListener listener in activeListeners)
			IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * L_15 = Enumerator_get_Current_m18832746455997D8F8D870E415E67CF8D9DF7A54_inline((Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *)(&V_3), /*hidden argument*/Enumerator_get_Current_m18832746455997D8F8D870E415E67CF8D9DF7A54_RuntimeMethod_var);
			// listener.OnPurchaseFailed(product, reason);
			Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_16 = ___product0;
			int32_t L_17 = ___reason1;
			NullCheck(L_15);
			IAPListener_OnPurchaseFailed_m75E6AC6CC04207A5491A28E3FD08BEB637D4B75F(L_15, L_16, L_17, /*hidden argument*/NULL);
			// resultProcessed = true;
			V_0 = (bool)1;
		}

IL_0071:
		{
			// foreach (IAPListener listener in activeListeners)
			bool L_18 = Enumerator_MoveNext_m5F9C68CF90A2485BFAC00260D5505EF27A58B167((Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m5F9C68CF90A2485BFAC00260D5505EF27A58B167_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0061;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x8A, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m419962C305E5F6F15E8D05FE917247E23DF8EAAF((Enumerator_tC42A22B75C0C63DFFE6BAC20F6CA88E9AACC20AA *)(&V_3), /*hidden argument*/Enumerator_Dispose_m419962C305E5F6F15E8D05FE917247E23DF8EAAF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
	}

IL_008a:
	{
		// if (!resultProcessed)
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_00ac;
		}
	}
	{
		// Debug.LogError("Failed purchase not correctly handled for product \"" + product.definition.id +
		//                   "\". Add an active IAPButton to handle this failure, or add an IAPListener to receive any unhandled purchase failures.");
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_20 = ___product0;
		NullCheck(L_20);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_21 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline(L_21, /*hidden argument*/NULL);
		String_t* L_23 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralCE7161EFCCA6A6BCA131AB91AEE8C8F9258D3682, L_22, _stringLiteral1C99BFDF8E727850D952C770A237005295E9DE74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_23, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// }
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
// System.Void UnityEngine.Purchasing.IAPButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_Start_m74C5462C93F5AECF5102E489E5DAAC590ABC4656 (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_Start_m74C5462C93F5AECF5102E489E5DAAC590ABC4656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * V_0 = NULL;
	{
		// Button button = GetComponent<Button>();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C(__this, /*hidden argument*/Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C_RuntimeMethod_var);
		V_0 = L_0;
		// if (buttonType == ButtonType.Purchase)
		int32_t L_1 = __this->get_buttonType_5();
		if (L_1)
		{
			goto IL_0072;
		}
	}
	{
		// if (button)
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// button.onClick.AddListener(PurchaseProduct);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_4 = V_0;
		NullCheck(L_4);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_5 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_4, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_6 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_6, __this, (intptr_t)((intptr_t)IAPButton_PurchaseProduct_mBC1469CCCAEC4899443295BA4FDED1CF8CCCBD98_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// if (string.IsNullOrEmpty(productId))
		String_t* L_7 = __this->get_productId_4();
		bool L_8 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogError("IAPButton productId is empty");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral677CF493AFD568843F6FE985C45C0DF41E3F0843, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// if (!CodelessIAPStoreListener.Instance.HasProductInCatalog(productId))
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_9 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		String_t* L_10 = __this->get_productId_4();
		NullCheck(L_9);
		bool L_11 = CodelessIAPStoreListener_HasProductInCatalog_m39A5055C399CDFD2451866B4AADE1766525AEF30(L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_009a;
		}
	}
	{
		// Debug.LogWarning("The product catalog has no product with the ID \"" + productId + "\"");
		String_t* L_12 = __this->get_productId_4();
		String_t* L_13 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralA04B49E250B6820A007D06817185F5E3C633C4A8, L_12, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0072:
	{
		// else if (buttonType == ButtonType.Restore)
		int32_t L_14 = __this->get_buttonType_5();
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		// if (button)
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// button.onClick.AddListener(Restore);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_17 = V_0;
		NullCheck(L_17);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_18 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_17, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_19 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_19, __this, (intptr_t)((intptr_t)IAPButton_Restore_m2E37F9C4F76CC9F557EC05414460BDABD0AF1F43_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_18, L_19, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnEnable_mDC033112BF3AA4B8394EE7A69A3433CBAC02FB22 (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnEnable_mDC033112BF3AA4B8394EE7A69A3433CBAC02FB22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.AddButton(this);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_1 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_AddButton_m50C63ED492D9E8D88C1B271C520EA3E6CF1B5C50(L_1, __this, /*hidden argument*/NULL);
		// if (CodelessIAPStoreListener.initializationComplete) {
		bool L_2 = ((CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54_il2cpp_TypeInfo_var))->get_initializationComplete_7();
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// UpdateText();
		IAPButton_UpdateText_mDCF0506AD1F2B77033C384171A220F373B8E4D0A(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnDisable_m8909D5FB7C37079921EC60E00CAA67EC71692AB0 (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, const RuntimeMethod* method)
{
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.RemoveButton(this);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_1 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_RemoveButton_mFA6AA085E912F9A7A634494EAED4F35CEE045727(L_1, __this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::PurchaseProduct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_PurchaseProduct_mBC1469CCCAEC4899443295BA4FDED1CF8CCCBD98 (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_PurchaseProduct_mBC1469CCCAEC4899443295BA4FDED1CF8CCCBD98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.Log("IAPButton.PurchaseProduct() with product ID: " + productId);
		String_t* L_1 = __this->get_productId_4();
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral947D2F2034D4C547910A951ACA54EB0B80AFF5CE, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// CodelessIAPStoreListener.Instance.InitiatePurchase(productId);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_3 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		String_t* L_4 = __this->get_productId_4();
		NullCheck(L_3);
		CodelessIAPStoreListener_InitiatePurchase_m70781EFBA8BF2469CAF493B85B54581345EBD95A(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_Restore_m2E37F9C4F76CC9F557EC05414460BDABD0AF1F43 (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_Restore_m2E37F9C4F76CC9F557EC05414460BDABD0AF1F43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (buttonType == ButtonType.Restore)
		int32_t L_0 = __this->get_buttonType_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0106;
		}
	}
	{
		// if (Application.platform == RuntimePlatform.WSAPlayerX86 ||
		//     Application.platform == RuntimePlatform.WSAPlayerX64 ||
		//     Application.platform == RuntimePlatform.WSAPlayerARM)
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)18))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)19))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		// CodelessIAPStoreListener.Instance.ExtensionProvider.GetExtension<IMicrosoftExtensions>()
		//     .RestoreTransactions();
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_4 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = CodelessIAPStoreListener_get_ExtensionProvider_mBD7F17A258DC02E504B2A48340AC20A7965F7833_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIMicrosoftExtensions_tB919F886F240A35B0721C4E0EC9FDE2D11911316_m77394A09A96FB50EB6E33AA9D7B03007C92AE069_RuntimeMethod_var, L_5);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions() */, IMicrosoftExtensions_tB919F886F240A35B0721C4E0EC9FDE2D11911316_il2cpp_TypeInfo_var, L_6);
		// }
		return;
	}

IL_003c:
	{
		// else if (Application.platform == RuntimePlatform.IPhonePlayer ||
		//          Application.platform == RuntimePlatform.OSXPlayer ||
		//          Application.platform == RuntimePlatform.tvOS)
		int32_t L_7 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)8)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_9 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0076;
		}
	}

IL_0055:
	{
		// CodelessIAPStoreListener.Instance.ExtensionProvider.GetExtension<IAppleExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_10 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = CodelessIAPStoreListener_get_ExtensionProvider_mBD7F17A258DC02E504B2A48340AC20A7965F7833_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_12 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIAppleExtensions_t1DA9A8B7013578DF180502E5C1620113C48584D4_m4C7C4F5D9C2B9AAF70E58F2B55EECB45DEFD319C_RuntimeMethod_var, L_11);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_13 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896(L_13, __this, (intptr_t)((intptr_t)IAPButton_OnTransactionsRestored_m0D21D7836CCF081BE6CEECA3A6747F401878AE1E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IAppleExtensions_t1DA9A8B7013578DF180502E5C1620113C48584D4_il2cpp_TypeInfo_var, L_12, L_13);
		// }
		return;
	}

IL_0076:
	{
		// else if (Application.platform == RuntimePlatform.Android &&
		//          StandardPurchasingModule.Instance().appStore == AppStore.SamsungApps)
		int32_t L_14 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * L_15 = StandardPurchasingModule_Instance_mCAE173F307E7ECAC31E5FBAF1214E02E8A9B7DF4(/*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = StandardPurchasingModule_get_appStore_m21FD28E7B1E3A17B97703F2B9CBBF1D0B20528A6_inline(L_15, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_00ad;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.ExtensionProvider.GetExtension<ISamsungAppsExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_17 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		NullCheck(L_17);
		RuntimeObject* L_18 = CodelessIAPStoreListener_get_ExtensionProvider_mBD7F17A258DC02E504B2A48340AC20A7965F7833_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject* L_19 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisISamsungAppsExtensions_t874925F4CF5FFDB35F1752FAEFA4AA5FE45CC73E_m3E23B1F3333681732A69FA748CCE39E8620A83DD_RuntimeMethod_var, L_18);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_20 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896(L_20, __this, (intptr_t)((intptr_t)IAPButton_OnTransactionsRestored_m0D21D7836CCF081BE6CEECA3A6747F401878AE1E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_RuntimeMethod_var);
		NullCheck(L_19);
		InterfaceActionInvoker1< Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(0 /* System.Void UnityEngine.Purchasing.ISamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, ISamsungAppsExtensions_t874925F4CF5FFDB35F1752FAEFA4AA5FE45CC73E_il2cpp_TypeInfo_var, L_19, L_20);
		// }
		return;
	}

IL_00ad:
	{
		// else if (Application.platform == RuntimePlatform.Android &&
		//     StandardPurchasingModule.Instance().appStore == AppStore.GooglePlay)
		int32_t L_21 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00e4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * L_22 = StandardPurchasingModule_Instance_mCAE173F307E7ECAC31E5FBAF1214E02E8A9B7DF4(/*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = StandardPurchasingModule_get_appStore_m21FD28E7B1E3A17B97703F2B9CBBF1D0B20528A6_inline(L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00e4;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.ExtensionProvider.GetExtension<IGooglePlayStoreExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_24 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		NullCheck(L_24);
		RuntimeObject* L_25 = CodelessIAPStoreListener_get_ExtensionProvider_mBD7F17A258DC02E504B2A48340AC20A7965F7833_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject* L_26 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIGooglePlayStoreExtensions_tF4B45656087156E911958AFE99AB4FFD9FC6BFB3_mFBE304531E3ECC67722A5F04B8FABFD764B5FB8B_RuntimeMethod_var, L_25);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_27 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896(L_27, __this, (intptr_t)((intptr_t)IAPButton_OnTransactionsRestored_m0D21D7836CCF081BE6CEECA3A6747F401878AE1E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36BDDA4161961F2E9C6B8A2AA17EACB845FE6896_RuntimeMethod_var);
		NullCheck(L_26);
		InterfaceActionInvoker1< Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IGooglePlayStoreExtensions_tF4B45656087156E911958AFE99AB4FFD9FC6BFB3_il2cpp_TypeInfo_var, L_26, L_27);
		// }
		return;
	}

IL_00e4:
	{
		// Debug.LogWarning(Application.platform.ToString() +
		//                  " is not a supported platform for the Codeless IAP restore button");
		int32_t L_28 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		V_0 = L_28;
		RuntimeObject * L_29 = Box(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_29);
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		V_0 = *(int32_t*)UnBox(L_29);
		String_t* L_31 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_30, _stringLiteral6EF070A5ED4DDDD1793652EFC80D6D544EB6C38D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_31, /*hidden argument*/NULL);
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnTransactionsRestored(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnTransactionsRestored_m0D21D7836CCF081BE6CEECA3A6747F401878AE1E (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnTransactionsRestored_m0D21D7836CCF081BE6CEECA3A6747F401878AE1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Transactions restored: " + success);
		String_t* L_0 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&___success0), /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralDFBCD5AFAAB0A9BFA2ED2D6CB5298FAE29947311, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPButton_ProcessPurchase_m6A34DE1619E799FB5837AFB674ED827D515133DC (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_ProcessPurchase_m6A34DE1619E799FB5837AFB674ED827D515133DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("IAPButton.ProcessPurchase(PurchaseEventArgs {0} - {1})", e,
		//     e.purchasedProduct.definition.id));
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_0 = ___e0;
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_2 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_3 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralCD1528EFE2EDFC7665A6FAD8D2C526AE4FEDFD74, L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// onPurchaseComplete.Invoke(e.purchasedProduct);
		OnPurchaseCompletedEvent_t105B1E663752AD1FC6760BBEDB9182D9039DCEF6 * L_6 = __this->get_onPurchaseComplete_7();
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_7 = ___e0;
		NullCheck(L_7);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_8 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_1_Invoke_mAC2882CF9E139AB6040F076A21AB25B981F063FA(L_6, L_8, /*hidden argument*/UnityEvent_1_Invoke_mAC2882CF9E139AB6040F076A21AB25B981F063FA_RuntimeMethod_var);
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_9 = __this->get_consumePurchase_6();
		if (L_9)
		{
			goto IL_003b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_003b:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnPurchaseFailed_m9C3428592156C0DBC1066DB81D7ABF8F11197A3D (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnPurchaseFailed_m9C3428592156C0DBC1066DB81D7ABF8F11197A3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("IAPButton.OnPurchaseFailed(Product {0}, PurchaseFailureReason {1})", product,
		//     reason));
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_0 = ___product0;
		int32_t L_1 = ___reason1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral9FBE9D2BA04ECD309F85D869051049DA69EC8A05, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_4, /*hidden argument*/NULL);
		// onPurchaseFailed.Invoke(product, reason);
		OnPurchaseFailedEvent_tC47B44C42F2D76F2604D00BC9B2C1433CF6E17BF * L_5 = __this->get_onPurchaseFailed_8();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_6 = ___product0;
		int32_t L_7 = ___reason1;
		NullCheck(L_5);
		UnityEvent_2_Invoke_m26AD364ACCE581F0AA66A2E53D8AB36601FEE678(L_5, L_6, L_7, /*hidden argument*/UnityEvent_2_Invoke_m26AD364ACCE581F0AA66A2E53D8AB36601FEE678_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_UpdateText_mDCF0506AD1F2B77033C384171A220F373B8E4D0A (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_UpdateText_mDCF0506AD1F2B77033C384171A220F373B8E4D0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * V_0 = NULL;
	{
		// var product = CodelessIAPStoreListener.Instance.GetProduct(productId);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_0 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_productId_4();
		NullCheck(L_0);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_2 = CodelessIAPStoreListener_GetProduct_m4E7C6717F62449C791F80C01CA3D9A8FC03FEA92(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (product != null)
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0080;
		}
	}
	{
		// if (titleText != null)
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_titleText_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// titleText.text = product.metadata.localizedTitle;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_6 = __this->get_titleText_9();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_7 = V_0;
		NullCheck(L_7);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_8 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = ProductMetadata_get_localizedTitle_m0577B0D5F4B4827C2151DE6BB0FF6C0A67C523DE_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
	}

IL_0038:
	{
		// if (descriptionText != null)
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_10 = __this->get_descriptionText_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// descriptionText.text = product.metadata.localizedDescription;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_12 = __this->get_descriptionText_10();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_13 = V_0;
		NullCheck(L_13);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_14 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = ProductMetadata_get_localizedDescription_m704C599D7FCAE228EE432795519AEA5CDAE8C985_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
	}

IL_005c:
	{
		// if (priceText != null)
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_16 = __this->get_priceText_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_16, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		// priceText.text = product.metadata.localizedPriceString;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_18 = __this->get_priceText_11();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_19 = V_0;
		NullCheck(L_19);
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_20 = Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = ProductMetadata_get_localizedPriceString_m341672B88DFE9E2FDC3790561FCE7ABA7141F0CB_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton__ctor_mB5711F53CDD5E42BAA1CB0B80C370BA822E7B575 (IAPButton_t6E9B1D4B4E39083D5054B42A7BB7B855A4814D7D * __this, const RuntimeMethod* method)
{
	{
		// public bool consumePurchase = true;
		__this->set_consumePurchase_6((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_mC44BFBC16C40FA833D25DB18AFD3E906F6C0AD26 (OnPurchaseCompletedEvent_t105B1E663752AD1FC6760BBEDB9182D9039DCEF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseCompletedEvent__ctor_mC44BFBC16C40FA833D25DB18AFD3E906F6C0AD26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCD2EAC6255F787E2D1B5B77D320CA75AC62EBCD9(__this, /*hidden argument*/UnityEvent_1__ctor_mCD2EAC6255F787E2D1B5B77D320CA75AC62EBCD9_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_mB3BE8906F7DD2F0D75C2D8ED2B05B3AA32C993EA (OnPurchaseFailedEvent_tC47B44C42F2D76F2604D00BC9B2C1433CF6E17BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseFailedEvent__ctor_mB3BE8906F7DD2F0D75C2D8ED2B05B3AA32C993EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m830FC4A963C43D0614EFADCBEE55694826FEE8AA(__this, /*hidden argument*/UnityEvent_2__ctor_m830FC4A963C43D0614EFADCBEE55694826FEE8AA_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPConfigurationHelper_PopulateConfigurationBuilder_m2DF5E82B7BC135630F8D451320542EEF05CA686C (ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE ** ___builder0, ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPConfigurationHelper_PopulateConfigurationBuilder_m2DF5E82B7BC135630F8D451320542EEF05CA686C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * V_1 = NULL;
	IDs_t978DE239966E5906480541F9982EA9624943DA53 * V_2 = NULL;
	List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	StoreID_t94B8565DB72275D0779BD9C7B43D8FFCB1BCE9D4 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var product in catalog.allValidProducts)
		ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * L_0 = ___catalog1;
		NullCheck(L_0);
		RuntimeObject* L_1 = ProductCatalog_get_allValidProducts_m7F20B55411C4101A2D24C2F4B38EEAD7FCF8B38E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_tE6AB0A247C40B59559A3E2C76B0C91920FAEE658_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f1;
		}

IL_0011:
		{
			// foreach (var product in catalog.allValidProducts)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * L_4 = InterfaceFuncInvoker0< ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_t9320E3840779236D3438416977BEA0F50AEF0438_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			// IDs ids = null;
			V_2 = (IDs_t978DE239966E5906480541F9982EA9624943DA53 *)NULL;
			// if (product.allStoreIDs.Count > 0)
			ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = ProductCatalogItem_get_allStoreIDs_m523F27814449DA17ADDDF94374BBB6D4AA615DB3_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>::get_Count() */, ICollection_1_tFCD5A3ABCD37F9F15F6B2BC2A5DDB4904C58BDA4_il2cpp_TypeInfo_var, L_6);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_007a;
			}
		}

IL_0028:
		{
			// ids = new IDs();
			IDs_t978DE239966E5906480541F9982EA9624943DA53 * L_8 = (IDs_t978DE239966E5906480541F9982EA9624943DA53 *)il2cpp_codegen_object_new(IDs_t978DE239966E5906480541F9982EA9624943DA53_il2cpp_TypeInfo_var);
			IDs__ctor_mCCDE9C0F6D094C9FC57F3FAEC51A8DA6BACF5FDA(L_8, /*hidden argument*/NULL);
			V_2 = L_8;
			// foreach (var storeID in product.allStoreIDs)
			ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * L_9 = V_1;
			NullCheck(L_9);
			RuntimeObject* L_10 = ProductCatalogItem_get_allStoreIDs_m523F27814449DA17ADDDF94374BBB6D4AA615DB3_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.StoreID>::GetEnumerator() */, IEnumerable_1_t77F0265A8B653A27BF6914123D7DE8D112A854F5_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
		}

IL_003b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0063;
			}

IL_003d:
			{
				// foreach (var storeID in product.allStoreIDs)
				RuntimeObject* L_12 = V_4;
				NullCheck(L_12);
				StoreID_t94B8565DB72275D0779BD9C7B43D8FFCB1BCE9D4 * L_13 = InterfaceFuncInvoker0< StoreID_t94B8565DB72275D0779BD9C7B43D8FFCB1BCE9D4 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.StoreID>::get_Current() */, IEnumerator_1_t9793F15D795DC47AB286234C9AAA7D3E2A354A3E_il2cpp_TypeInfo_var, L_12);
				V_5 = L_13;
				// ids.Add(storeID.id, storeID.store);
				IDs_t978DE239966E5906480541F9982EA9624943DA53 * L_14 = V_2;
				StoreID_t94B8565DB72275D0779BD9C7B43D8FFCB1BCE9D4 * L_15 = V_5;
				NullCheck(L_15);
				String_t* L_16 = L_15->get_id_1();
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
				StoreID_t94B8565DB72275D0779BD9C7B43D8FFCB1BCE9D4 * L_19 = V_5;
				NullCheck(L_19);
				String_t* L_20 = L_19->get_store_0();
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_20);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
				NullCheck(L_14);
				IDs_Add_mE8F093EFD06D5E1FA1774BE3B624FA87DDA26DC6(L_14, L_16, L_18, /*hidden argument*/NULL);
			}

IL_0063:
			{
				// foreach (var storeID in product.allStoreIDs)
				RuntimeObject* L_21 = V_4;
				NullCheck(L_21);
				bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_003d;
				}
			}

IL_006c:
			{
				IL2CPP_LEAVE(0x7A, FINALLY_006e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006e;
		}

FINALLY_006e:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0079;
				}
			}

IL_0072:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_24);
			}

IL_0079:
			{
				IL2CPP_END_FINALLY(110)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(110)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x7A, IL_007a)
		}

IL_007a:
		{
			// var payoutDefinitions = new List<PayoutDefinition>();
			List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * L_25 = (List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 *)il2cpp_codegen_object_new(List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389_il2cpp_TypeInfo_var);
			List_1__ctor_m1D0C87BEFFF1CEEF023FC8B09611E722468C34B0(L_25, /*hidden argument*/List_1__ctor_m1D0C87BEFFF1CEEF023FC8B09611E722468C34B0_RuntimeMethod_var);
			V_3 = L_25;
			// foreach (var payout in product.Payouts) {
			ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * L_26 = V_1;
			NullCheck(L_26);
			RuntimeObject* L_27 = ProductCatalogItem_get_Payouts_mDFF83E248100C74CC61AEA983B3E7D1D86653AF1_inline(L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			RuntimeObject* L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogPayout>::GetEnumerator() */, IEnumerable_1_t5034BA5DBE8A3F8162B17AD586FDDEE660E6183A_il2cpp_TypeInfo_var, L_27);
			V_6 = L_28;
		}

IL_008d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00bf;
			}

IL_008f:
			{
				// foreach (var payout in product.Payouts) {
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * L_30 = InterfaceFuncInvoker0< ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogPayout>::get_Current() */, IEnumerator_1_t2EF73F501DC19AA4604352443EAA0B5DD1FC24DA_il2cpp_TypeInfo_var, L_29);
				V_7 = L_30;
				// payoutDefinitions.Add(new PayoutDefinition(payout.typeString, payout.subtype, payout.quantity, payout.data));
				List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * L_31 = V_3;
				ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * L_32 = V_7;
				NullCheck(L_32);
				String_t* L_33 = ProductCatalogPayout_get_typeString_m068034D5F5F247856FE3A619B6C06A6C7B2BB25B_inline(L_32, /*hidden argument*/NULL);
				ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * L_34 = V_7;
				NullCheck(L_34);
				String_t* L_35 = ProductCatalogPayout_get_subtype_mFBEB555A29A20A4F61CC03C9109BC66C59B1FCDD_inline(L_34, /*hidden argument*/NULL);
				ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * L_36 = V_7;
				NullCheck(L_36);
				double L_37 = ProductCatalogPayout_get_quantity_mEBF1B77957D03361965B8DBB80BA6E34603E2D6C_inline(L_36, /*hidden argument*/NULL);
				ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * L_38 = V_7;
				NullCheck(L_38);
				String_t* L_39 = ProductCatalogPayout_get_data_mEA5B549EB6B042E7BBA665B938760F7D70F818CC_inline(L_38, /*hidden argument*/NULL);
				PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 * L_40 = (PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273 *)il2cpp_codegen_object_new(PayoutDefinition_tE787916C6F389E12B8C2F10F3A87CD79B6C2A273_il2cpp_TypeInfo_var);
				PayoutDefinition__ctor_m39DC496DF905CBE9A43FF8A335C2CEC3788CDC77(L_40, L_33, L_35, L_37, L_39, /*hidden argument*/NULL);
				NullCheck(L_31);
				List_1_Add_m771A87E86AAF34F3F6CBB299CB3AB08CB6D21F50(L_31, L_40, /*hidden argument*/List_1_Add_m771A87E86AAF34F3F6CBB299CB3AB08CB6D21F50_RuntimeMethod_var);
			}

IL_00bf:
			{
				// foreach (var payout in product.Payouts) {
				RuntimeObject* L_41 = V_6;
				NullCheck(L_41);
				bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_41);
				if (L_42)
				{
					goto IL_008f;
				}
			}

IL_00c8:
			{
				IL2CPP_LEAVE(0xD6, FINALLY_00ca);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ca;
		}

FINALLY_00ca:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_43 = V_6;
				if (!L_43)
				{
					goto IL_00d5;
				}
			}

IL_00ce:
			{
				RuntimeObject* L_44 = V_6;
				NullCheck(L_44);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_44);
			}

IL_00d5:
			{
				IL2CPP_END_FINALLY(202)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(202)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xD6, IL_00d6)
		}

IL_00d6:
		{
			// builder.AddProduct(product.id, product.type, ids, payoutDefinitions.ToArray());
			ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE ** L_45 = ___builder0;
			ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE * L_46 = *((ConfigurationBuilder_t18C1B421FE4071AD4DB4A340A2A8D51AB090F3AE **)L_45);
			ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * L_47 = V_1;
			NullCheck(L_47);
			String_t* L_48 = L_47->get_id_0();
			ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * L_49 = V_1;
			NullCheck(L_49);
			int32_t L_50 = L_49->get_type_1();
			IDs_t978DE239966E5906480541F9982EA9624943DA53 * L_51 = V_2;
			List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389 * L_52 = V_3;
			NullCheck(L_52);
			PayoutDefinitionU5BU5D_tBED8269F285FBB455D663A4434785D666963059A* L_53 = List_1_ToArray_mA89BFB01A77C9E7000BA82C7BDB91B81B6EEFBF0(L_52, /*hidden argument*/List_1_ToArray_mA89BFB01A77C9E7000BA82C7BDB91B81B6EEFBF0_RuntimeMethod_var);
			NullCheck(L_46);
			ConfigurationBuilder_AddProduct_m27BAF9B63963246C287EEEFA788C7A876555019B(L_46, L_48, L_50, L_51, (RuntimeObject*)(RuntimeObject*)L_53, /*hidden argument*/NULL);
		}

IL_00f1:
		{
			// foreach (var product in catalog.allValidProducts)
			RuntimeObject* L_54 = V_0;
			NullCheck(L_54);
			bool L_55 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_54);
			if (L_55)
			{
				goto IL_0011;
			}
		}

IL_00fc:
		{
			IL2CPP_LEAVE(0x108, FINALLY_00fe);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fe;
	}

FINALLY_00fe:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_56 = V_0;
			if (!L_56)
			{
				goto IL_0107;
			}
		}

IL_0101:
		{
			RuntimeObject* L_57 = V_0;
			NullCheck(L_57);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_57);
		}

IL_0107:
		{
			IL2CPP_END_FINALLY(254)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(254)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x108, IL_0108)
	}

IL_0108:
	{
		// }
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
// System.Void UnityEngine.Purchasing.IAPListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnEnable_m55E72CDAE4ED1AA82F6C7BA911F03473FD6D661D (IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_OnEnable_m55E72CDAE4ED1AA82F6C7BA911F03473FD6D661D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dontDestroyOnLoad)
		bool L_0 = __this->get_dontDestroyOnLoad_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// CodelessIAPStoreListener.Instance.AddListener(this);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_2 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		NullCheck(L_2);
		CodelessIAPStoreListener_AddListener_m6C1E872F3EA8B81E5861579FEB6AD1DB30DBD3E9(L_2, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnDisable_mD6038F488ACF7D5828308C175DC8E3481E718DE5 (IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * __this, const RuntimeMethod* method)
{
	{
		// CodelessIAPStoreListener.Instance.RemoveListener(this);
		CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * L_0 = CodelessIAPStoreListener_get_Instance_m62CC81443621B3EE64772BCDDCFA0A0131C2A6E5(/*hidden argument*/NULL);
		NullCheck(L_0);
		CodelessIAPStoreListener_RemoveListener_m0227BECDF6F0D7EDF632544D3C7D1847B80A20AA(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPListener_ProcessPurchase_m12192819CE69AC89678DCF72930B8AF194CD0FD8 (IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * __this, PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_ProcessPurchase_m12192819CE69AC89678DCF72930B8AF194CD0FD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("IAPListener.ProcessPurchase(PurchaseEventArgs {0} - {1})", e,
		//     e.purchasedProduct.definition.id));
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_0 = ___e0;
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_2 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_3 = Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralF1A341F41401BE96F54E268141C20EB3C4CF43F8, L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// onPurchaseComplete.Invoke(e.purchasedProduct);
		OnPurchaseCompletedEvent_t83AEE810FE443920F4316024E8ED8A9BE7252A8A * L_6 = __this->get_onPurchaseComplete_6();
		PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * L_7 = ___e0;
		NullCheck(L_7);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_8 = PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_1_Invoke_mAC2882CF9E139AB6040F076A21AB25B981F063FA(L_6, L_8, /*hidden argument*/UnityEvent_1_Invoke_mAC2882CF9E139AB6040F076A21AB25B981F063FA_RuntimeMethod_var);
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_9 = __this->get_consumePurchase_4();
		if (L_9)
		{
			goto IL_003b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_003b:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnPurchaseFailed_m75E6AC6CC04207A5491A28E3FD08BEB637D4B75F (IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * __this, Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_OnPurchaseFailed_m75E6AC6CC04207A5491A28E3FD08BEB637D4B75F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("IAPListener.OnPurchaseFailed(Product {0}, PurchaseFailureReason {1})", product,
		//     reason));
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_0 = ___product0;
		int32_t L_1 = ___reason1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral4818CDB71856B7EF38922792D99BA8CE7B4C845E, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_4, /*hidden argument*/NULL);
		// onPurchaseFailed.Invoke(product, reason);
		OnPurchaseFailedEvent_t69E349597FB56FDCC1E0936354455DA0169F21AE * L_5 = __this->get_onPurchaseFailed_7();
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_6 = ___product0;
		int32_t L_7 = ___reason1;
		NullCheck(L_5);
		UnityEvent_2_Invoke_m26AD364ACCE581F0AA66A2E53D8AB36601FEE678(L_5, L_6, L_7, /*hidden argument*/UnityEvent_2_Invoke_m26AD364ACCE581F0AA66A2E53D8AB36601FEE678_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener__ctor_m5FE2ABC28B345F3405736504E2E4445B8127C71E (IAPListener_t475EE99F96836C7790B5E6FE1EFD536E806D26CB * __this, const RuntimeMethod* method)
{
	{
		// public bool consumePurchase = true;
		__this->set_consumePurchase_4((bool)1);
		// public bool dontDestroyOnLoad = true;
		__this->set_dontDestroyOnLoad_5((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_m86244C23B55B5F2F06D60A8065DC199EE86B4EAE (OnPurchaseCompletedEvent_t83AEE810FE443920F4316024E8ED8A9BE7252A8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseCompletedEvent__ctor_m86244C23B55B5F2F06D60A8065DC199EE86B4EAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCD2EAC6255F787E2D1B5B77D320CA75AC62EBCD9(__this, /*hidden argument*/UnityEvent_1__ctor_mCD2EAC6255F787E2D1B5B77D320CA75AC62EBCD9_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_mE13A1E1901F03EF6BD620B6E1EC825B2A987B557 (OnPurchaseFailedEvent_t69E349597FB56FDCC1E0936354455DA0169F21AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseFailedEvent__ctor_mE13A1E1901F03EF6BD620B6E1EC825B2A987B557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m830FC4A963C43D0614EFADCBEE55694826FEE8AA(__this, /*hidden argument*/UnityEvent_2__ctor_m830FC4A963C43D0614EFADCBEE55694826FEE8AA_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StandardPurchasingModule_set_useFakeStoreUIMode_m54588D7E834E42513BBCB50F8A5A1D8D3530CBB8_inline (StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FakeStoreUIMode useFakeStoreUIMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CuseFakeStoreUIModeU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allProducts_mFCD1044AED78A5C85BE5EB01BF440ECF26CF5A13_inline (ProductCatalog_t35A48DB051B87AF8F59D8D5C7159D6B35362041A * __this, const RuntimeMethod* method)
{
	{
		// public ICollection<ProductCatalogItem> allProducts => products;
		List_1_t5E7E45C690757AB4D0B459D7CEB746329FE6D89A * L_0 = __this->get_products_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * PurchaseEventArgs_get_purchasedProduct_mB26BCEF9CD45B84DBF55A5C6FC50AF611B6AD6A2_inline (PurchaseEventArgs_tF6E04BFD5492F5F57309FFBB2415EB26E5B88C04 * __this, const RuntimeMethod* method)
{
	{
		// public Product purchasedProduct { get; private set; }
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_0 = __this->get_U3CpurchasedProductU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * Product_get_definition_mFA1889844E23D37A700C2EA6659EE3BBF1E17C58_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method)
{
	{
		// public ProductDefinition definition { get; private set; }
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = __this->get_U3CdefinitionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; private set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_ExtensionProvider_mBD7F17A258DC02E504B2A48340AC20A7965F7833_inline (CodelessIAPStoreListener_t06607EB2CFBAC08367180E10611B288C2C74FC54 * __this, const RuntimeMethod* method)
{
	{
		// get { return extensions; }
		RuntimeObject* L_0 = __this->get_extensions_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StandardPurchasingModule_get_appStore_m21FD28E7B1E3A17B97703F2B9CBBF1D0B20528A6_inline (StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * __this, const RuntimeMethod* method)
{
	{
		// return m_AppStorePlatform;
		int32_t L_0 = __this->get_m_AppStorePlatform_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * Product_get_metadata_mE9010636C2A74FD850A4AE25DFD45A249F80224E_inline (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * __this, const RuntimeMethod* method)
{
	{
		// public ProductMetadata metadata { get; internal set; }
		ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_0 = __this->get_U3CmetadataU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_m0577B0D5F4B4827C2151DE6BB0FF6C0A67C523DE_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method)
{
	{
		// public string localizedTitle { get; internal set; }
		String_t* L_0 = __this->get_U3ClocalizedTitleU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_m704C599D7FCAE228EE432795519AEA5CDAE8C985_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method)
{
	{
		// public string localizedDescription { get; internal set; }
		String_t* L_0 = __this->get_U3ClocalizedDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_m341672B88DFE9E2FDC3790561FCE7ABA7141F0CB_inline (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, const RuntimeMethod* method)
{
	{
		// public string localizedPriceString { get; internal set; }
		String_t* L_0 = __this->get_U3ClocalizedPriceStringU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_allStoreIDs_m523F27814449DA17ADDDF94374BBB6D4AA615DB3_inline (ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * __this, const RuntimeMethod* method)
{
	{
		// return storeIDs;
		List_1_tE9847B8B2D4BAFA4E56FD4442AA97D8DEE1E2150 * L_0 = __this->get_storeIDs_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_Payouts_mDFF83E248100C74CC61AEA983B3E7D1D86653AF1_inline (ProductCatalogItem_tC7BF596B99668524E849C58333C1E0E3E87AC8BD * __this, const RuntimeMethod* method)
{
	{
		// return payouts;
		List_1_tE57D87D02FFF4F68A14039DC9F802E158BED27D7 * L_0 = __this->get_payouts_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_typeString_m068034D5F5F247856FE3A619B6C06A6C7B2BB25B_inline (ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * __this, const RuntimeMethod* method)
{
	{
		// return t;
		String_t* L_0 = __this->get_t_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_subtype_mFBEB555A29A20A4F61CC03C9109BC66C59B1FCDD_inline (ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * __this, const RuntimeMethod* method)
{
	{
		// return st;
		String_t* L_0 = __this->get_st_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR double ProductCatalogPayout_get_quantity_mEBF1B77957D03361965B8DBB80BA6E34603E2D6C_inline (ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * __this, const RuntimeMethod* method)
{
	{
		// return q;
		double L_0 = __this->get_q_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_data_mEA5B549EB6B042E7BBA665B938760F7D70F818CC_inline (ProductCatalogPayout_t7D2AD5EBE162C2C067AE69E953A401FB57B0DDEA * __this, const RuntimeMethod* method)
{
	{
		// return d;
		String_t* L_0 = __this->get_d_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
