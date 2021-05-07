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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>
struct Action_1_t38FBBB64ACD76C48DEED6E7A2C77CD902E051BDF;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<System.Boolean,System.Int32>
struct Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44;
// System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Reflection.Assembly,System.Type[]>[]
struct EntryU5BU5D_t8F51CE28E712CD34BA7884FC7E1F667A6CF3E6FB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_tDACC05F195AD5DF6C9887CBC2BF7A1F3D72B4503;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Reflection.Assembly,System.Type[]>
struct KeyCollection_tBFC5DB8750C4D837C6E1D6DB082B569692E7B578;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0F00F77BE92F754BFDCC916DE6D74B618FC56846;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Reflection.Assembly,System.Type[]>
struct ValueCollection_t72C12C55E7BF1B232D3180ED1CF3102F2F6C4356;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_t126E24D40E3EC86E17E22F311D7C3E67871F9146;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>
struct Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_t504324E0124277B913D6D070154FAFB6A84D009F;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t4AC69E73617B5F04DBCD68EEADDEFF601334F957;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Purchasing.Extension.ProductDescription>[]
struct SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t35C7004442F69D20FCF9A931F0463497E14D8BF1;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_tBFDC7AB9303FD887DBCCC85A53C8B5CAC97D3FB2;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tF9225691990EF9799D9F4B64E4063CA0D1DF03CA;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>
struct IEnumerable_1_t16DD2B94BA32B9F15DD0977611237118114D440E;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct IEnumerable_1_t61FC41D24CB85D3A0139586F8355CDCBE996628C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct IEnumerable_1_tDA2D6F027B72B87294BBEB37E8D0C4C90341414B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerable_1_t695B788D82D5979D039BAB2D6296E00872AF25DC;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerator_1_t56920F5F2D0BE9BB76C32B2CE4216B9C43352B09;
// System.Collections.Generic.IEqualityComparer`1<System.Reflection.Assembly>
struct IEqualityComparer_1_t690679886C97A997E77A9B20E0B05471AE0A4D25;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct IEqualityComparer_1_t2AA6E2F817DDD5A3A0ACB3B623A42C3B23950949;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_tE09735A322C3B17000EF4E4BC8026FEDEB7B0D9B;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_tF73AC89B47A53C78DEF082D4C40D65F309D37760;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductDefinition>
struct IList_1_t47487B5654E9E378E1FEE158F0721773659DF514;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t053DAB6E2110E276A0339D73497193F464BC1F82;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct List_1_t2E574C9651C33313D869CB2D905339E1047FE821;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tD5C791B23F87A66C14871EC6BA093EC2D0EC0389;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t836CD930F5F0862929A362435417DA9BCD4186F8;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerable
struct IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<UnityEngine.AndroidJavaObject,System.Boolean>
struct Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct Func_2_t4F73E32FDE937DA6ED16932395122191E9837732;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IDisposable
struct IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.String>
struct Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
// System.ResolveEventHandler
struct ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Uniject.IUtil
struct IUtil_t8BE9939179C560ED69472F76EFEED3FF9DC9E4F7;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0;
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
// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1;
// UnityEngine.Purchasing.Default.WinProductDescription[]
struct WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6;
// UnityEngine.Purchasing.EventQueue
struct EventQueue_t431AC70097C6ADA40F84674C98C742680AC2938A;
// UnityEngine.Purchasing.Extension.AbstractStore
struct AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t29DFEB92F0789E5E0A5F52148451C2A5F9BEA425;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t496ACD1C21137C6E16BCAA48DEBEEED2047DD14C;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60;
// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582;
// UnityEngine.Purchasing.Extension.ProductDescription[]
struct ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C;
// UnityEngine.Purchasing.FakeStore
struct FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF;
// UnityEngine.Purchasing.FileReference
struct FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F;
// UnityEngine.Purchasing.GoogleProductMetadata
struct GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8;
// UnityEngine.Purchasing.IAsyncWebUtil
struct IAsyncWebUtil_tDB45A93B4E806E3668FC53AA623877CEA299DA73;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t17D2C991BDD7253E176A630FC02327369A8AB141;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t15B8B05C30FD8B792A3039287AFAD87216827AED;
// UnityEngine.Purchasing.INativeUDPStore
struct INativeUDPStore_t6D15B6453F17002782CAB783179C3E61B1BCE0FE;
// UnityEngine.Purchasing.InvalidProductTypeException
struct InvalidProductTypeException_tB35ADF6391206219C9716AD362377932B7CD5FC1;
// UnityEngine.Purchasing.JSONStore
struct JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B;
// UnityEngine.Purchasing.Models.GooglePurchase
struct GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2;
// UnityEngine.Purchasing.Product
struct Product_t830A133A97BEA12C3CD696853098A295D99A6DE4;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_tCC1E9F34B8B3A88563CA989013308FB058864237;
// UnityEngine.Purchasing.ProfileData
struct ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0;
// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct MicrosoftConfiguration_t645352385165DE50F0AA258086DB4AF85FC5C92C;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0;
// UnityEngine.Purchasing.StoreCatalogImpl
struct StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC;
// UnityEngine.Purchasing.StoreConfiguration
struct StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8;
// UnityEngine.Purchasing.SubscriptionInfo
struct SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA;
// UnityEngine.Purchasing.UDPBindings
struct UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399;
// UnityEngine.Purchasing.UDPImpl
struct UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386;
// UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553;
// UnityEngine.Purchasing.UIFakeStore
struct UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A;
// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9;
// UnityEngine.Purchasing.UIFakeStore/DialogRequest
struct DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0;
// UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier
struct LifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2;
// UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper
struct AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413;
// UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF;
// UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper
struct IAndroidJavaObjectWrapper_tA704637B8AA50A65D00E2B237D65975F465224D6;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4;
// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.Dropdown
struct Dropdown_tF6331401084B1213CAB10587A6EC81461501930F;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
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

IL2CPP_EXTERN_C RuntimeClass* Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppStore_tE65D022896B28CFD34753FF40FC7BB756B689AEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleStoreProductType_t5E9C5378D75CDCD4644F2D769DC60BE11AB98A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4F73E32FDE937DA6ED16932395122191E9837732_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBFDC7AB9303FD887DBCCC85A53C8B5CAC97D3FB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF9225691990EF9799D9F4B64E4063CA0D1DF03CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t56920F5F2D0BE9BB76C32B2CE4216B9C43352B09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD69E8826508E7125AE670336B26E5A752639FE46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDC8F6184694A436104AFB088454AD2DAF27828BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeUDPStore_t6D15B6453F17002782CAB783179C3E61B1BCE0FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidProductTypeException_tB35ADF6391206219C9716AD362377932B7CD5FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662;
IL2CPP_EXTERN_C String_t* _stringLiteral0650DE9E26E2AA79CC57EDED9B8928F8668B9EA5;
IL2CPP_EXTERN_C String_t* _stringLiteral06632E680E3B8A6EC9B2FADF761850D70436C3C5;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF9EEA0BAD5A55395DB9EC290DFCF4A883D5D3E;
IL2CPP_EXTERN_C String_t* _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671;
IL2CPP_EXTERN_C String_t* _stringLiteral160F06D4799C85021A810F68C5B517EEA37A2737;
IL2CPP_EXTERN_C String_t* _stringLiteral18C9D66E71D49DE526535192BE7094812EEB6DB6;
IL2CPP_EXTERN_C String_t* _stringLiteral18D237CCE08A4A1E9941E356C26F1E39000B8F76;
IL2CPP_EXTERN_C String_t* _stringLiteral1A1DCCB1D5BC0A7A3EFB09F20E038D03DC5D80A1;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADA184F1D1A8E8B4B4B2D86D2C26C1CB9D8F313;
IL2CPP_EXTERN_C String_t* _stringLiteral256DAE5FE812DD0A653073C3C142A5D806F220A4;
IL2CPP_EXTERN_C String_t* _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD62DAF47E8725D3E59AA70B61573BE22A286DB;
IL2CPP_EXTERN_C String_t* _stringLiteral32EAF9220C696B2C222E361F16ACA8FB08EC6083;
IL2CPP_EXTERN_C String_t* _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA;
IL2CPP_EXTERN_C String_t* _stringLiteral3D6A970D4287352BB3A6FB409DD0F9DF8FF9920A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2A8439E4695DDC6BC1202334D8B1BB4B30A081;
IL2CPP_EXTERN_C String_t* _stringLiteral40B8101AAD206C47959D4E844C689B81CDF84F11;
IL2CPP_EXTERN_C String_t* _stringLiteral49BF0050A22870F465A2B74BFFA94D12CF9B0184;
IL2CPP_EXTERN_C String_t* _stringLiteral4A4184D459A962FE4EB8DED81C690B6BFD3D1DC8;
IL2CPP_EXTERN_C String_t* _stringLiteral4EDC38A1218F1F3B9B8ABBBADB827D09D4DB3BE6;
IL2CPP_EXTERN_C String_t* _stringLiteral4F188D35DBEE4686EE3FC7AE3A910C11655DCA88;
IL2CPP_EXTERN_C String_t* _stringLiteral4FADE2304D0F918F838A2911F634759D7E5F4693;
IL2CPP_EXTERN_C String_t* _stringLiteral504EEED775E8D8706D2E75ADA2A8E509B9CA77E5;
IL2CPP_EXTERN_C String_t* _stringLiteral50D86FCBE2ABB9A65B07323B311FF2296682029D;
IL2CPP_EXTERN_C String_t* _stringLiteral57814CFBAE5C6D00F5CAB49E34B9AA2CE8269EB9;
IL2CPP_EXTERN_C String_t* _stringLiteral57AD7770710D7E2152605841736EF253260F181D;
IL2CPP_EXTERN_C String_t* _stringLiteral57B4B0A1A4CF3BDCB8E8681D5D4224017FA907BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA09102E2C35C6E4B633B2C30A831212814D272;
IL2CPP_EXTERN_C String_t* _stringLiteral5E63969C8D5459C7461427E2BC97C111DAAD9529;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2391220833847E88FA717EB295A329DD3B3C55;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
IL2CPP_EXTERN_C String_t* _stringLiteral605FEF0BA0D91B21456F08AAD3F3430F7965A26D;
IL2CPP_EXTERN_C String_t* _stringLiteral612CCEAFC5E6C12AB161F0817E11A34091FDC66F;
IL2CPP_EXTERN_C String_t* _stringLiteral68DEF667D36D69C74A4858297D53552058192BC2;
IL2CPP_EXTERN_C String_t* _stringLiteral6924EAA29A3250A2EDE96D82BEEED19218ED1778;
IL2CPP_EXTERN_C String_t* _stringLiteral6A771F1FCD449BF0867673C6554A1140B638FC62;
IL2CPP_EXTERN_C String_t* _stringLiteral6A7872B4584263708E07DB7D63148B6E0F6CF086;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA2CA83CEC56CC9378EC0E01B0BF752281D2A45;
IL2CPP_EXTERN_C String_t* _stringLiteral6FF1395A89987127DC5697BE3C2DCDF5C76FFC2F;
IL2CPP_EXTERN_C String_t* _stringLiteral7CDCFF85882580FB64BCCED0D9C8752D6BF8372F;
IL2CPP_EXTERN_C String_t* _stringLiteral81BF2721BD61A95B94B72264D96CAB3E2392B882;
IL2CPP_EXTERN_C String_t* _stringLiteral827D1E5DDFC3FF9C18C0A4496AF384B97410A035;
IL2CPP_EXTERN_C String_t* _stringLiteral83BFA5E686CDB7B1182322585E1C688C9B988732;
IL2CPP_EXTERN_C String_t* _stringLiteral862E356EFB96FF23BE395FDD8CF34602BA87D015;
IL2CPP_EXTERN_C String_t* _stringLiteral86479F128971C5FEA69496AB7A91F4897C770FAC;
IL2CPP_EXTERN_C String_t* _stringLiteral865D8C1E90DC1EDA4DC9155444CD1C69A57057C4;
IL2CPP_EXTERN_C String_t* _stringLiteral86CFC158C16EBD828F9FD0FFE04C280216023CA9;
IL2CPP_EXTERN_C String_t* _stringLiteral879F0B1BEF59EEEBF78CFD3A22F6F8077810CECF;
IL2CPP_EXTERN_C String_t* _stringLiteral8A0C6E5A1A065612979FD4D633714DE5BC457828;
IL2CPP_EXTERN_C String_t* _stringLiteral8D07EC60F2CF6909F3E4F72A9EE7313D45135EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral90B6C7CAE0684A0F98CF10CC368E2592F0962CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral91307256DBF150F37E879000F1FC6DD8A4F61A55;
IL2CPP_EXTERN_C String_t* _stringLiteral95F98151B6AE07CC17A086DD7AD22BF42F174D7C;
IL2CPP_EXTERN_C String_t* _stringLiteral9F842731F7ED121968BA73230D9EEE58A0107DC7;
IL2CPP_EXTERN_C String_t* _stringLiteralA004F7A71A664C60394CBEBEC2BC71B669D9F986;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D9B910FBD7D49B662799307CC6280BB829F841;
IL2CPP_EXTERN_C String_t* _stringLiteralA459DFF3012DA591453989E5860A6FD825F63CE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA9BB9CFCB62B68A83AB4C25DE93C70956D2FD0DF;
IL2CPP_EXTERN_C String_t* _stringLiteralADD8AB52483B0A272A273D3AD8A6584135A7CA2C;
IL2CPP_EXTERN_C String_t* _stringLiteralB348A5B39F26DF673A82873C5069EA947D0CE1A0;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7819B34FF87570745FBE461E36A16F80E562CE;
IL2CPP_EXTERN_C String_t* _stringLiteralC039C05D919B5F6F72A138DFB099EAE2E67B89A6;
IL2CPP_EXTERN_C String_t* _stringLiteralC9470C99119C4E0DCB89D108BEAC5078E9E95560;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9D01ECC70A5325ED60FF47E843538E385AE1F6;
IL2CPP_EXTERN_C String_t* _stringLiteralCE303C0991F6ED665CA1B89420A443F1CB8BD6A0;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD846877EC9A537864A43E4C372339A9FB5C71261;
IL2CPP_EXTERN_C String_t* _stringLiteralD8FAE6A4434F8709F349B6E9420638C8FD6886E8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA311F79A1B844489695C2C2BEFE0C0A5A83928;
IL2CPP_EXTERN_C String_t* _stringLiteralE429FB2288A21731831D07F6A3F28574CAD4130E;
IL2CPP_EXTERN_C String_t* _stringLiteralE75AEFABDAA785AC2B8267F716185360ED501BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralE9A6F622E340090FEB219EB5C94B0DF756E8E486;
IL2CPP_EXTERN_C String_t* _stringLiteralEDEDA8D96D6BEFA5C97172CAF6624B6A80182222;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55;
IL2CPP_EXTERN_C String_t* _stringLiteralF0850B5B860948D19714676332550A5DC7C82049;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B93D791AC7157AD28161C767FFDE25B19D3F5C;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C8FA3454083851E6E98BE6A8AEBF7F806185FE;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A;
IL2CPP_EXTERN_C String_t* _stringLiteralFD6AF9EA23BB5137277450B0EDF5E4FED279E0F0;
IL2CPP_EXTERN_C String_t* _stringLiteralFF5DD0E304B39EF8CC99D49375CDF1C3C3FF885E;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB78FBC3CDBB6D37CCC0B793459E21E9C76E9C95B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mD9405730668E8C5A369C5F533812713E3F0E8010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mD6B6F563DF5530F25F812AACBABB00F40665DC40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mE746EF9212D5F61E7F68240BE31C69D8CACFDDC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m5EAE53C9E2A8893FD8FEA710378D22C162A0FDEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m944E5987B38F1229EB3E8122E030D0439D4513B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Exists_TisString_t_mE30BE3FC3C208B6A35AFB0E2A46E8CFCCD13C99F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7D728D0EDA2C18E641EDC8661D0BB9524806D9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB2AFE00939E25519A9A547B432B339139688A57C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD9362798CAFBCC0EC84A18FFA58185FD60249EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5A51097DB031E5558B864F77AA2BB488B23736F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDBCA5914D743B21AF6FDFE61315BE5B44FCDA9F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5A987AD183687A89522922177A14425A5A1E4DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m61BAD2DCD360856F59B04B784D0F1FD2A2D29A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m60B22E9A8666DB6E008158D80A157634C3192837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC117EF735EF8C5ACA16F81A21C88F06F8E0A350A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisRuntimeObject_m1D60B8691728928CBD2559D4696E2AED74E86B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m8E71188883E2E0B862A1FBDD4FDF14555D7F0745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisString_t_mDCB16E76F44752CD2604A121727880DEE335250A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_m1AFD736097F79EC9A2123C4253A632A4012509FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_mF32335274B246A4E4D14DF74E057DA86AA3BB4B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m34F0EB317BEC1783F5D3E46852744966D246040C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisRuntimeObject_mF06A421A80377818D8A65783B8F9B53C000101E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisWinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_mFF709F1DAD690C4EEE43B45B936D3007ED6E8274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_mB5E86AF9C61B8A4856C784CDA1729EA9C18A2DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5668993760266C4D29C0F845EC7B6D7D6E613C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C9B41634596824D348FC05B7C4AA0E4F4F8FD29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m09B9E1F07A03C37F57CCA1D9DF7A03974077ED7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2E1758C82AEE3A0E3D37D20B713B65E736AE599D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m906D4708057CC961E65FE23C780018EE8E8C5702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mCE8D097485C259C0294A0C8D6A2134782DBC3055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD5D471C649649A5C20B05AB73CC591A1973DB95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2_m9EEFB6E4EA02CF046313922460E5162CCDECC690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m1562E9B9218AF5A21D0D838E830E1245A737F677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m5EA55BE80E8E0FB0551D6C16C2BC57A726758C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDropdown_tF6331401084B1213CAB10587A6EC81461501930F_mCEDADB496C533D2B1022FE5C0B5D68493866A5E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9C5CBADE58A9A157DAC8673C37D88FECF2A2365F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mB3AF1F79F5C362D555D19E4C9928DBB388AF09B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAndroidJavaObjectWrapper_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m52459E2129FC539E97B02C27A70F35B7B12F4025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAndroidJavaObjectWrapper_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m81602CBF1279C037CA054B02F2DD145E3CDAC392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m7299DD85C9C737B3A35046AC5640B4D22070B177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE0B46236A82E92B7F76C0F3A94ABBD0F4625A77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE66F416F525E3A70E26D4284CAC61A4B1872D0E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0F6A2806D11105299DC8E4D83E06D49BAABB8ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1B6754118A88FC1D2E5BB5FAF3E3B1F002530808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m232A852F11236B75DCC6E0FC84755225698710F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_mFDC6858AC164D8FD294829103D93ED606CDE939A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m65B1DDB2A33E146C2F5006F6613DC2B243475C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m17CA8384751563EEAE48688727FFCF8502F59551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mD9A340ACC5F6C97BF6DBF1645507886FD04CFFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_mCBFEF25AD14ABCCABBA7380F8B387EE26E67CD89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mBC0899C994D3FA5725FC61B8E104F2D5DF8B0C86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubscriptionInfo__ctor_m956F158A7D795EF29469ED101104321E027D074A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m852F7D5FBF166CA57890D06F1D21A076116247A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m13CD3D50B8247D298123CAB640BC4EA2CA35028B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m4E58280C013FF718D9C74A2AEEA211FB9D79F68B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m5A4D465513C2CD10F1F23318848243202A76525C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m9DEBF3A6E422010E6155DD2A1CFB9BF07A907584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m020EC94DC56CEBFAAFA8DBCE474810C4F73C2285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m7880AC237B144F453EBAB013DB422305FA56453B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mCAFED78C4A2BA7252D5E6512AAEB107F5E29410F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_FinishTransaction_m292791E98A4C5203CA4D38DF94FF6AB748C1E11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_FinishTransaction_mAD92802CE576E5F35234F545752881C1446AE45D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_Initialize_m36E5133D28B738C3C5473233C5A184A566E22D24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_OnInventoryQueried_m223473D27E27F075F794D31CEE740A86A377219F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_Purchase_m7E253740A3B939AB6556DC89DBD243860A9519C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_Purchase_mBEDA768F6C7A1C2C1F7F28D71F8105DD308E42E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_RetrieveProducts_m133916567B921ACCB950F33A574ED7D09EB377C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_RetrieveProducts_mB5048A3254490EE0D3532C83843E6F3A0AB44187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings__ctor_mA8F8DF8D40788F9CF0EF4B4F8CC623979A763955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m9FBF7D6C41752C3D937F1768DD1BCDD845A355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m404CCCDBE2F1BC2ECE78CA1867492305FF5F2E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_2_mC45E6B524E3ABF2ED95EB75BAC79AB5AB79A7E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_3_m8BEAD3289EC70DC9622AB8DB5211FE4C748D6708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m35AC6924803D95F2FC0AE8A388AC0C3698334222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AppStore_tE65D022896B28CFD34753FF40FC7BB756B689AEE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AppleStoreProductType_t5E9C5378D75CDCD4644F2D769DC60BE11AB98A6F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Debug_get_unityLogger_mFA75EC397E067D09FD66D56B4E7692C3FCC3E960UnityEngine_Purchasing_Stores1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GooglePurchaseHelper_MakeGooglePurchase_m54E609D02071B4C57FA97C0A06F43EDD01267F9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GoogleReceiptEncoder_FormatPayload_m3C6EA9AF69D0E497A7AD5D29BFCA0FC9CAAE2612_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SkuDetailsConverter_BuildProductDescription_m71E6F0C1E5DCD86A48471FFB9B008AD7E228BE82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m62B4AAB6EE3293F1EA8255FFF0C4E9D73F129CA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SkuDetailsConverter_ConvertSkusDetailsToProducts_m5DE2D6F2EDF30DD715212E1ACC9358B6F2E982E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SkuDetailsConverter_ToListProducts_mA38776AC9D8F633ADA637808F1E1EE77DAD93470_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StoreCallbackExtensionMethods_FindProductById_m1909C13555E775ECD33109F75C2D7C5480880FF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StoreCatalogImpl_CreateInstance_m577E154C528A81AE523932492C0E5E1F2482594C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StoreConfiguration_Deserialize_m447CBC97DD1949D75A7D29C93C3BA82A33CACC93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StoreServiceInterface_GetClassType_m3C4730B482C0143DE6C28CD61B89AC11905B34E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StoreServiceInterface_GetNameProp_mBA089F2910BAEBAD87251C85E372CC841D955684_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StoreServiceInterface_GetName_m704F01FBE23B88BCB5B46AABEF184BB682204D72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubscriptionInfo__ctor_m956F158A7D795EF29469ED101104321E027D074A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m4E58280C013FF718D9C74A2AEEA211FB9D79F68B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m5A4D465513C2CD10F1F23318848243202A76525C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m020EC94DC56CEBFAAFA8DBCE474810C4F73C2285_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m7880AC237B144F453EBAB013DB422305FA56453B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mCAFED78C4A2BA7252D5E6512AAEB107F5E29410F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m4C01AFCA36E01CBC6E08DF6AB427732AC3690E3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mFCE2F9321E792D2662707A5FB565228778B2531B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_FinishTransaction_m292791E98A4C5203CA4D38DF94FF6AB748C1E11B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_FinishTransaction_mAD92802CE576E5F35234F545752881C1446AE45D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_Initialize_m36E5133D28B738C3C5473233C5A184A566E22D24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnInventoryQueried_m223473D27E27F075F794D31CEE740A86A377219F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_Purchase_m7E253740A3B939AB6556DC89DBD243860A9519C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_Purchase_mBEDA768F6C7A1C2C1F7F28D71F8105DD308E42E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_RetrieveProducts_m133916567B921ACCB950F33A574ED7D09EB377C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_RetrieveProducts_mB5048A3254490EE0D3532C83843E6F3A0AB44187_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_StringPropertyToDictionary_m34700519458DCC72CC62E02398E2A4603B8EC2A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings__ctor_mA8F8DF8D40788F9CF0EF4B4F8CC623979A763955_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_DictionaryToStringProperty_mDC95F9B4482CD468C63E53B336D96D4F76143FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_FinishTransaction_m470E5EB1291D0250D16511759D2CB2DAC3B268E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_Purchase_m22A1F20917497F6A6A8762CE161A2CFFADE7357F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_RetrieveProducts_m48122E221E2111561B6E779201F7AE95E5F5A815_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPReflectionUtils_GetTypeByName_m76935CD19F4E1661BF41C7531637F5DF99758A25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPReflectionUtils_GetTypes_m5F15A5EA649AA92299887D676D17788F1D616D6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPReflectionUtils__cctor_m163B59E7C2074193C7880167B734EE92DC7770CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDP_get_Name_mA19C18298EB398B975E9C10493499538E375DD3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CancelButtonClicked_mB6A00EF6EC31658ADEA04963C173759305CD7259_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CloseDialog_m4DDF7697C7D910950ADAE661CE0876EB72E7C86B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CreatePurchaseQuestion_m325DAC9055DE2FFCCA324935457B51D2028169BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CreateRetrieveProductsQuestion_m982989821B70A36922D6D5B0DE43F114A63F51CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButtonGameObject_mAC85CED50F0CA7D71982644618D9423F1341A624_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButtonText_m169D92F9F3CCD926F9D469C886ABD750E7AF550F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButton_mD4BDD5C94EA6B5A31361863E99272C14C07634F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetDropdownContainerGameObject_mBD36398BEE313882E80EB1B81D79E6DB1F8D7AB3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetOkayButtonText_m10765D1A2AF34015874DF8D79795370875168F64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetOkayButton_mFA4103ECF0E8BB3F0CEF5735EB32858F880C6E9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_InstantiateDialog_m2A034F285F29B8CEF55C4782DDFF5BE3D8FCF08A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_OkayButtonClicked_m08943589D1FD46D5F9C84C780B14B41CCB84AAB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_StartUI_mCE81711C83C1FC9837E6C0DBD183455FF0921D26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetFinishTransactionMethod_mB12C7F0BC90F45D3E799F60DC58EDF588ECFE49D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetInitMethod_m5E6E787525C5734D687FA3D0039435A369580B63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetPurchaseMethod_mD59C6526FFC5C528BE73B66ADDD3BB4ADAAF2B64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UdpIapBridgeInterface_GetRetrieveProductsMethod_m7DDEE509C69CD733F61E0DEC005C2DAB04D0892F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityActivity_GetCurrentActivity_mFA27960CB96275451155C56D4A4620786AE91CDC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityActivity_GetUnityPlayerClass_m7588B6CF407A7A68A6BB8E34BEB2FA9414288D76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserInfoInterface_GetClassType_mE36B1BC3E79BFA8614D5EAE48997221C223A715B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_FinishTransaction_m217AD245C56080A86BE026C551E3EC21EB8E07CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_Purchase_m04073B006C5BBCFCF1F3EA945B33805CED7FF218_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_RestoreTransactions_mD7765620C75AD0876589E2779A9DCB0B3DC44A3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_RetrieveProducts_m8C23F7EDFE7D488C11E8F2C5CA7AB62C1E7577F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_init_m011F5C8FB9EECBDB2B3904390DEF04DB83B94AB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_restoreTransactions_m96F050608EEB70FE4A4AA85D54739724047A6BB2_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>
struct Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8F51CE28E712CD34BA7884FC7E1F667A6CF3E6FB* ___entries_1;
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
	KeyCollection_tBFC5DB8750C4D837C6E1D6DB082B569692E7B578 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t72C12C55E7BF1B232D3180ED1CF3102F2F6C4356 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___entries_1)); }
	inline EntryU5BU5D_t8F51CE28E712CD34BA7884FC7E1F667A6CF3E6FB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8F51CE28E712CD34BA7884FC7E1F667A6CF3E6FB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8F51CE28E712CD34BA7884FC7E1F667A6CF3E6FB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___keys_7)); }
	inline KeyCollection_tBFC5DB8750C4D837C6E1D6DB082B569692E7B578 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBFC5DB8750C4D837C6E1D6DB082B569692E7B578 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBFC5DB8750C4D837C6E1D6DB082B569692E7B578 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ___values_8)); }
	inline ValueCollection_t72C12C55E7BF1B232D3180ED1CF3102F2F6C4356 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t72C12C55E7BF1B232D3180ED1CF3102F2F6C4356 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t72C12C55E7BF1B232D3180ED1CF3102F2F6C4356 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
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
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
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
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDACC05F195AD5DF6C9887CBC2BF7A1F3D72B4503* ___entries_1;
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
	KeyCollection_t0F00F77BE92F754BFDCC916DE6D74B618FC56846 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t126E24D40E3EC86E17E22F311D7C3E67871F9146 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___entries_1)); }
	inline EntryU5BU5D_tDACC05F195AD5DF6C9887CBC2BF7A1F3D72B4503* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDACC05F195AD5DF6C9887CBC2BF7A1F3D72B4503** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDACC05F195AD5DF6C9887CBC2BF7A1F3D72B4503* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___keys_7)); }
	inline KeyCollection_t0F00F77BE92F754BFDCC916DE6D74B618FC56846 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0F00F77BE92F754BFDCC916DE6D74B618FC56846 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0F00F77BE92F754BFDCC916DE6D74B618FC56846 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ___values_8)); }
	inline ValueCollection_t126E24D40E3EC86E17E22F311D7C3E67871F9146 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t126E24D40E3EC86E17E22F311D7C3E67871F9146 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t126E24D40E3EC86E17E22F311D7C3E67871F9146 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353, ____slots_8)); }
	inline SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558, ____items_1)); }
	inline AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379* get__items_1() const { return ____items_1; }
	inline AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558_StaticFields, ____emptyArray_5)); }
	inline AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AndroidJavaObjectU5BU5D_t7C44610B692603ADE504A389C4362A53613B5379* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct List_1_t2E574C9651C33313D869CB2D905339E1047FE821  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2E574C9651C33313D869CB2D905339E1047FE821, ____items_1)); }
	inline WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6* get__items_1() const { return ____items_1; }
	inline WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2E574C9651C33313D869CB2D905339E1047FE821, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2E574C9651C33313D869CB2D905339E1047FE821, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2E574C9651C33313D869CB2D905339E1047FE821, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2E574C9651C33313D869CB2D905339E1047FE821_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2E574C9651C33313D869CB2D905339E1047FE821_StaticFields, ____emptyArray_5)); }
	inline WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WinProductDescriptionU5BU5D_tA3C3D52DE426B8A2FADB2A869C8A8CC82DDD78A6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3, ____items_1)); }
	inline ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0* get__items_1() const { return ____items_1; }
	inline ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3_StaticFields, ____emptyArray_5)); }
	inline ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductDescriptionU5BU5D_t125DDDC1B65739AA8FAA0712F85BF7AD6B4A17E0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83, ____items_1)); }
	inline OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
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


// System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// UnityEngine.Debug
struct Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4  : public RuntimeObject
{
public:

public:
};

struct Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;

public:
	inline static int32_t get_offset_of_s_DefaultLogger_0() { return static_cast<int32_t>(offsetof(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields, ___s_DefaultLogger_0)); }
	inline RuntimeObject* get_s_DefaultLogger_0() const { return ___s_DefaultLogger_0; }
	inline RuntimeObject** get_address_of_s_DefaultLogger_0() { return &___s_DefaultLogger_0; }
	inline void set_s_DefaultLogger_0(RuntimeObject* value)
	{
		___s_DefaultLogger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultLogger_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Logger_1() { return static_cast<int32_t>(offsetof(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields, ___s_Logger_1)); }
	inline RuntimeObject* get_s_Logger_1() const { return ___s_Logger_1; }
	inline RuntimeObject** get_address_of_s_Logger_1() { return &___s_Logger_1; }
	inline void set_s_Logger_1(RuntimeObject* value)
	{
		___s_Logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Logger_1), (void*)value);
	}
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


// UnityEngine.Purchasing.Extension.AbstractStore
struct AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.FileReference
struct FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.FileReference::m_FilePath
	String_t* ___m_FilePath_0;
	// UnityEngine.ILogger UnityEngine.Purchasing.FileReference::m_Logger
	RuntimeObject* ___m_Logger_1;

public:
	inline static int32_t get_offset_of_m_FilePath_0() { return static_cast<int32_t>(offsetof(FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F, ___m_FilePath_0)); }
	inline String_t* get_m_FilePath_0() const { return ___m_FilePath_0; }
	inline String_t** get_address_of_m_FilePath_0() { return &___m_FilePath_0; }
	inline void set_m_FilePath_0(String_t* value)
	{
		___m_FilePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FilePath_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_1() { return static_cast<int32_t>(offsetof(FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F, ___m_Logger_1)); }
	inline RuntimeObject* get_m_Logger_1() const { return ___m_Logger_1; }
	inline RuntimeObject** get_address_of_m_Logger_1() { return &___m_Logger_1; }
	inline void set_m_Logger_1(RuntimeObject* value)
	{
		___m_Logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_1), (void*)value);
	}
};


// UnityEngine.Purchasing.Models.GooglePurchase
struct GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GooglePurchase::javaPurchase
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___javaPurchase_0;
	// System.Int32 UnityEngine.Purchasing.Models.GooglePurchase::purchaseState
	int32_t ___purchaseState_1;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::sku
	String_t* ___sku_2;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::orderId
	String_t* ___orderId_3;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::receipt
	String_t* ___receipt_4;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::signature
	String_t* ___signature_5;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::originalJson
	String_t* ___originalJson_6;
	// System.String UnityEngine.Purchasing.Models.GooglePurchase::purchaseToken
	String_t* ___purchaseToken_7;

public:
	inline static int32_t get_offset_of_javaPurchase_0() { return static_cast<int32_t>(offsetof(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2, ___javaPurchase_0)); }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * get_javaPurchase_0() const { return ___javaPurchase_0; }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D ** get_address_of_javaPurchase_0() { return &___javaPurchase_0; }
	inline void set_javaPurchase_0(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * value)
	{
		___javaPurchase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaPurchase_0), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseState_1() { return static_cast<int32_t>(offsetof(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2, ___purchaseState_1)); }
	inline int32_t get_purchaseState_1() const { return ___purchaseState_1; }
	inline int32_t* get_address_of_purchaseState_1() { return &___purchaseState_1; }
	inline void set_purchaseState_1(int32_t value)
	{
		___purchaseState_1 = value;
	}

	inline static int32_t get_offset_of_sku_2() { return static_cast<int32_t>(offsetof(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2, ___sku_2)); }
	inline String_t* get_sku_2() const { return ___sku_2; }
	inline String_t** get_address_of_sku_2() { return &___sku_2; }
	inline void set_sku_2(String_t* value)
	{
		___sku_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sku_2), (void*)value);
	}

	inline static int32_t get_offset_of_orderId_3() { return static_cast<int32_t>(offsetof(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2, ___orderId_3)); }
	inline String_t* get_orderId_3() const { return ___orderId_3; }
	inline String_t** get_address_of_orderId_3() { return &___orderId_3; }
	inline void set_orderId_3(String_t* value)
	{
		___orderId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderId_3), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_4() { return static_cast<int32_t>(offsetof(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2, ___receipt_4)); }
	inline String_t* get_receipt_4() const { return ___receipt_4; }
	inline String_t** get_address_of_receipt_4() { return &___receipt_4; }
	inline void set_receipt_4(String_t* value)
	{
		___receipt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_4), (void*)value);
	}

	inline static int32_t get_offset_of_signature_5() { return static_cast<int32_t>(offsetof(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2, ___signature_5)); }
	inline String_t* get_signature_5() const { return ___signature_5; }
	inline String_t** get_address_of_signature_5() { return &___signature_5; }
	inline void set_signature_5(String_t* value)
	{
		___signature_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_5), (void*)value);
	}

	inline static int32_t get_offset_of_originalJson_6() { return static_cast<int32_t>(offsetof(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2, ___originalJson_6)); }
	inline String_t* get_originalJson_6() const { return ___originalJson_6; }
	inline String_t** get_address_of_originalJson_6() { return &___originalJson_6; }
	inline void set_originalJson_6(String_t* value)
	{
		___originalJson_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalJson_6), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseToken_7() { return static_cast<int32_t>(offsetof(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2, ___purchaseToken_7)); }
	inline String_t* get_purchaseToken_7() const { return ___purchaseToken_7; }
	inline String_t** get_address_of_purchaseToken_7() { return &___purchaseToken_7; }
	inline void set_purchaseToken_7(String_t* value)
	{
		___purchaseToken_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseToken_7), (void*)value);
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


// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct MicrosoftConfiguration_t645352385165DE50F0AA258086DB4AF85FC5C92C  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::module
	StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * ___module_0;

public:
	inline static int32_t get_offset_of_module_0() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t645352385165DE50F0AA258086DB4AF85FC5C92C, ___module_0)); }
	inline StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * get_module_0() const { return ___module_0; }
	inline StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 ** get_address_of_module_0() { return &___module_0; }
	inline void set_module_0(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * value)
	{
		___module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_0), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::<storeName>k__BackingField
	String_t* ___U3CstoreNameU3Ek__BackingField_0;
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::<instance>k__BackingField
	RuntimeObject* ___U3CinstanceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstoreNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0, ___U3CstoreNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreNameU3Ek__BackingField_0() const { return ___U3CstoreNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreNameU3Ek__BackingField_0() { return &___U3CstoreNameU3Ek__BackingField_0; }
	inline void set_U3CstoreNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0, ___U3CinstanceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CinstanceU3Ek__BackingField_1() const { return ___U3CinstanceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CinstanceU3Ek__BackingField_1() { return &___U3CinstanceU3Ek__BackingField_1; }
	inline void set_U3CinstanceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CinstanceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Purchasing.StoreCallbackExtensionMethods
struct StoreCallbackExtensionMethods_t6A7E3D30DF3EA4E0ED3C8A204B974B4C769B6901  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.StoreCatalogImpl
struct StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StoreCatalogImpl::m_AsyncUtil
	RuntimeObject* ___m_AsyncUtil_0;
	// UnityEngine.ILogger UnityEngine.Purchasing.StoreCatalogImpl::m_Logger
	RuntimeObject* ___m_Logger_1;
	// System.String UnityEngine.Purchasing.StoreCatalogImpl::m_CatalogURL
	String_t* ___m_CatalogURL_2;
	// System.String UnityEngine.Purchasing.StoreCatalogImpl::m_StoreName
	String_t* ___m_StoreName_3;
	// UnityEngine.Purchasing.FileReference UnityEngine.Purchasing.StoreCatalogImpl::m_cachedStoreCatalogReference
	FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * ___m_cachedStoreCatalogReference_4;

public:
	inline static int32_t get_offset_of_m_AsyncUtil_0() { return static_cast<int32_t>(offsetof(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC, ___m_AsyncUtil_0)); }
	inline RuntimeObject* get_m_AsyncUtil_0() const { return ___m_AsyncUtil_0; }
	inline RuntimeObject** get_address_of_m_AsyncUtil_0() { return &___m_AsyncUtil_0; }
	inline void set_m_AsyncUtil_0(RuntimeObject* value)
	{
		___m_AsyncUtil_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncUtil_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_1() { return static_cast<int32_t>(offsetof(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC, ___m_Logger_1)); }
	inline RuntimeObject* get_m_Logger_1() const { return ___m_Logger_1; }
	inline RuntimeObject** get_address_of_m_Logger_1() { return &___m_Logger_1; }
	inline void set_m_Logger_1(RuntimeObject* value)
	{
		___m_Logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CatalogURL_2() { return static_cast<int32_t>(offsetof(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC, ___m_CatalogURL_2)); }
	inline String_t* get_m_CatalogURL_2() const { return ___m_CatalogURL_2; }
	inline String_t** get_address_of_m_CatalogURL_2() { return &___m_CatalogURL_2; }
	inline void set_m_CatalogURL_2(String_t* value)
	{
		___m_CatalogURL_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CatalogURL_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreName_3() { return static_cast<int32_t>(offsetof(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC, ___m_StoreName_3)); }
	inline String_t* get_m_StoreName_3() const { return ___m_StoreName_3; }
	inline String_t** get_address_of_m_StoreName_3() { return &___m_StoreName_3; }
	inline void set_m_StoreName_3(String_t* value)
	{
		___m_StoreName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_cachedStoreCatalogReference_4() { return static_cast<int32_t>(offsetof(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC, ___m_cachedStoreCatalogReference_4)); }
	inline FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * get_m_cachedStoreCatalogReference_4() const { return ___m_cachedStoreCatalogReference_4; }
	inline FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F ** get_address_of_m_cachedStoreCatalogReference_4() { return &___m_cachedStoreCatalogReference_4; }
	inline void set_m_cachedStoreCatalogReference_4(FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * value)
	{
		___m_cachedStoreCatalogReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cachedStoreCatalogReference_4), (void*)value);
	}
};

struct StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC_StaticFields
{
public:
	// UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.StoreCatalogImpl::profile
	ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * ___profile_5;

public:
	inline static int32_t get_offset_of_profile_5() { return static_cast<int32_t>(offsetof(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC_StaticFields, ___profile_5)); }
	inline ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * get_profile_5() const { return ___profile_5; }
	inline ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F ** get_address_of_profile_5() { return &___profile_5; }
	inline void set_profile_5(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * value)
	{
		___profile_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_5), (void*)value);
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


// UnityEngine.Purchasing.StoreServiceInterface
struct StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320  : public RuntimeObject
{
public:

public:
};

struct StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_StaticFields
{
public:
	// System.Type UnityEngine.Purchasing.StoreServiceInterface::s_typeCache
	Type_t * ___s_typeCache_0;

public:
	inline static int32_t get_offset_of_s_typeCache_0() { return static_cast<int32_t>(offsetof(StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_StaticFields, ___s_typeCache_0)); }
	inline Type_t * get_s_typeCache_0() const { return ___s_typeCache_0; }
	inline Type_t ** get_address_of_s_typeCache_0() { return &___s_typeCache_0; }
	inline void set_s_typeCache_0(Type_t * value)
	{
		___s_typeCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typeCache_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UDP
struct UDP_tCB7EB5515AE748A33F5B53C3098DBF676EBDBD01  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.UDPBindings
struct UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399  : public RuntimeObject
{
public:
	// System.Object UnityEngine.Purchasing.UDPBindings::m_Bridge
	RuntimeObject * ___m_Bridge_0;
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPBindings::m_RetrieveProductsCallbackCache
	Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___m_RetrieveProductsCallbackCache_1;

public:
	inline static int32_t get_offset_of_m_Bridge_0() { return static_cast<int32_t>(offsetof(UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399, ___m_Bridge_0)); }
	inline RuntimeObject * get_m_Bridge_0() const { return ___m_Bridge_0; }
	inline RuntimeObject ** get_address_of_m_Bridge_0() { return &___m_Bridge_0; }
	inline void set_m_Bridge_0(RuntimeObject * value)
	{
		___m_Bridge_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bridge_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_RetrieveProductsCallbackCache_1() { return static_cast<int32_t>(offsetof(UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399, ___m_RetrieveProductsCallbackCache_1)); }
	inline Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * get_m_RetrieveProductsCallbackCache_1() const { return ___m_RetrieveProductsCallbackCache_1; }
	inline Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 ** get_address_of_m_RetrieveProductsCallbackCache_1() { return &___m_RetrieveProductsCallbackCache_1; }
	inline void set_m_RetrieveProductsCallbackCache_1(Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * value)
	{
		___m_RetrieveProductsCallbackCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RetrieveProductsCallbackCache_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::<>4__this
	UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * ___U3CU3E4__this_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::products
	ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * ___products_1;
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::retrieveCallback
	Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___retrieveCallback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6, ___U3CU3E4__this_0)); }
	inline UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_products_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6, ___products_1)); }
	inline ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * get_products_1() const { return ___products_1; }
	inline ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 ** get_address_of_products_1() { return &___products_1; }
	inline void set_products_1(ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * value)
	{
		___products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_1), (void*)value);
	}

	inline static int32_t get_offset_of_retrieveCallback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6, ___retrieveCallback_2)); }
	inline Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * get_retrieveCallback_2() const { return ___retrieveCallback_2; }
	inline Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 ** get_address_of_retrieveCallback_2() { return &___retrieveCallback_2; }
	inline void set_retrieveCallback_2(Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * value)
	{
		___retrieveCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retrieveCallback_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0::product
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product_0;
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0::<>4__this
	UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386, ___product_0)); }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386, ___U3CU3E4__this_1)); }
	inline UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPReflectionUtils
struct UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63  : public RuntimeObject
{
public:

public:
};

struct UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]> UnityEngine.Purchasing.UDPReflectionUtils::s_assemblyTypeCache
	Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * ___s_assemblyTypeCache_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> UnityEngine.Purchasing.UDPReflectionUtils::s_typeCache
	Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * ___s_typeCache_1;
	// System.String[] UnityEngine.Purchasing.UDPReflectionUtils::k_whiteListedAssemblies
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___k_whiteListedAssemblies_2;

public:
	inline static int32_t get_offset_of_s_assemblyTypeCache_0() { return static_cast<int32_t>(offsetof(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields, ___s_assemblyTypeCache_0)); }
	inline Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * get_s_assemblyTypeCache_0() const { return ___s_assemblyTypeCache_0; }
	inline Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 ** get_address_of_s_assemblyTypeCache_0() { return &___s_assemblyTypeCache_0; }
	inline void set_s_assemblyTypeCache_0(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * value)
	{
		___s_assemblyTypeCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_assemblyTypeCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_typeCache_1() { return static_cast<int32_t>(offsetof(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields, ___s_typeCache_1)); }
	inline Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * get_s_typeCache_1() const { return ___s_typeCache_1; }
	inline Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 ** get_address_of_s_typeCache_1() { return &___s_typeCache_1; }
	inline void set_s_typeCache_1(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * value)
	{
		___s_typeCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typeCache_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_whiteListedAssemblies_2() { return static_cast<int32_t>(offsetof(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields, ___k_whiteListedAssemblies_2)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_k_whiteListedAssemblies_2() const { return ___k_whiteListedAssemblies_2; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_k_whiteListedAssemblies_2() { return &___k_whiteListedAssemblies_2; }
	inline void set_k_whiteListedAssemblies_2(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___k_whiteListedAssemblies_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_whiteListedAssemblies_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553  : public RuntimeObject
{
public:
	// System.Reflection.Assembly UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::assembly
	Assembly_t * ___assembly_0;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_StaticFields
{
public:
	// UnityEngine.Purchasing.UIFakeStore/<>c UnityEngine.Purchasing.UIFakeStore/<>c::<>9
	U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.UIFakeStore/<>c::<>9__18_0
	Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore/DialogRequest
struct DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UIFakeStore/DialogRequest::QueryText
	String_t* ___QueryText_0;
	// System.String UnityEngine.Purchasing.UIFakeStore/DialogRequest::OkayButtonText
	String_t* ___OkayButtonText_1;
	// System.String UnityEngine.Purchasing.UIFakeStore/DialogRequest::CancelButtonText
	String_t* ___CancelButtonText_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.UIFakeStore/DialogRequest::Options
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___Options_3;
	// System.Action`2<System.Boolean,System.Int32> UnityEngine.Purchasing.UIFakeStore/DialogRequest::Callback
	Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * ___Callback_4;

public:
	inline static int32_t get_offset_of_QueryText_0() { return static_cast<int32_t>(offsetof(DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0, ___QueryText_0)); }
	inline String_t* get_QueryText_0() const { return ___QueryText_0; }
	inline String_t** get_address_of_QueryText_0() { return &___QueryText_0; }
	inline void set_QueryText_0(String_t* value)
	{
		___QueryText_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QueryText_0), (void*)value);
	}

	inline static int32_t get_offset_of_OkayButtonText_1() { return static_cast<int32_t>(offsetof(DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0, ___OkayButtonText_1)); }
	inline String_t* get_OkayButtonText_1() const { return ___OkayButtonText_1; }
	inline String_t** get_address_of_OkayButtonText_1() { return &___OkayButtonText_1; }
	inline void set_OkayButtonText_1(String_t* value)
	{
		___OkayButtonText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OkayButtonText_1), (void*)value);
	}

	inline static int32_t get_offset_of_CancelButtonText_2() { return static_cast<int32_t>(offsetof(DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0, ___CancelButtonText_2)); }
	inline String_t* get_CancelButtonText_2() const { return ___CancelButtonText_2; }
	inline String_t** get_address_of_CancelButtonText_2() { return &___CancelButtonText_2; }
	inline void set_CancelButtonText_2(String_t* value)
	{
		___CancelButtonText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CancelButtonText_2), (void*)value);
	}

	inline static int32_t get_offset_of_Options_3() { return static_cast<int32_t>(offsetof(DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0, ___Options_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_Options_3() const { return ___Options_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_Options_3() { return &___Options_3; }
	inline void set_Options_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___Options_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Options_3), (void*)value);
	}

	inline static int32_t get_offset_of_Callback_4() { return static_cast<int32_t>(offsetof(DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0, ___Callback_4)); }
	inline Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * get_Callback_4() const { return ___Callback_4; }
	inline Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 ** get_address_of_Callback_4() { return &___Callback_4; }
	inline void set_Callback_4(Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * value)
	{
		___Callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_4), (void*)value);
	}
};


// UnityEngine.Purchasing.UdpIapBridgeInterface
struct UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D  : public RuntimeObject
{
public:

public:
};

struct UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_StaticFields
{
public:
	// System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::s_typeCache
	Type_t * ___s_typeCache_0;

public:
	inline static int32_t get_offset_of_s_typeCache_0() { return static_cast<int32_t>(offsetof(UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_StaticFields, ___s_typeCache_0)); }
	inline Type_t * get_s_typeCache_0() const { return ___s_typeCache_0; }
	inline Type_t ** get_address_of_s_typeCache_0() { return &___s_typeCache_0; }
	inline void set_s_typeCache_0(Type_t * value)
	{
		___s_typeCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typeCache_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityActivity
struct UnityActivity_t3E62935EA6928FCC769097EA6E0C555E41245AA6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.UserInfoInterface
struct UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0  : public RuntimeObject
{
public:

public:
};

struct UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_StaticFields
{
public:
	// System.Type UnityEngine.Purchasing.UserInfoInterface::s_typeCache
	Type_t * ___s_typeCache_0;

public:
	inline static int32_t get_offset_of_s_typeCache_0() { return static_cast<int32_t>(offsetof(UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_StaticFields, ___s_typeCache_0)); }
	inline Type_t * get_s_typeCache_0() const { return ___s_typeCache_0; }
	inline Type_t ** get_address_of_s_typeCache_0() { return &___s_typeCache_0; }
	inline void set_s_typeCache_0(Type_t * value)
	{
		___s_typeCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typeCache_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper
struct AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413  : public RuntimeObject
{
public:
	// System.IDisposable UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::<androidJavaObject>k__BackingField
	RuntimeObject* ___U3CandroidJavaObjectU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CandroidJavaObjectU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413, ___U3CandroidJavaObjectU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CandroidJavaObjectU3Ek__BackingField_0() const { return ___U3CandroidJavaObjectU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CandroidJavaObjectU3Ek__BackingField_0() { return &___U3CandroidJavaObjectU3Ek__BackingField_0; }
	inline void set_U3CandroidJavaObjectU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CandroidJavaObjectU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CandroidJavaObjectU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Utils.GooglePurchaseHelper
struct GooglePurchaseHelper_t78D52B8A0ECC256D0BBE4F9F7EB8A2D1A23B8418  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0::sku
	String_t* ___sku_0;

public:
	inline static int32_t get_offset_of_sku_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF, ___sku_0)); }
	inline String_t* get_sku_0() const { return ___sku_0; }
	inline String_t** get_address_of_sku_0() { return &___sku_0; }
	inline void set_sku_0(String_t* value)
	{
		___sku_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sku_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Utils.GoogleReceiptEncoder
struct GoogleReceiptEncoder_t05C9D6245D2C35D7E1ED024E5476B6DA13C89CD9  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.Utils.SkuDetailsConverter
struct SkuDetailsConverter_tBCAD52382CB74BB204D603C9774A36D458383910  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields
{
public:
	// UnityEngine.Purchasing.WinRTStore/<>c UnityEngine.Purchasing.WinRTStore/<>c::<>9
	U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.WinRTStore/<>c::<>9__8_0
	Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * ___U3CU3E9__8_0_1;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription> UnityEngine.Purchasing.WinRTStore/<>c::<>9__8_1
	Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * ___U3CU3E9__8_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields, ___U3CU3E9__8_1_2)); }
	inline Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * get_U3CU3E9__8_1_2() const { return ___U3CU3E9__8_1_2; }
	inline Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D ** get_address_of_U3CU3E9__8_1_2() { return &___U3CU3E9__8_1_2; }
	inline void set_U3CU3E9__8_1_2(Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * value)
	{
		___U3CU3E9__8_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_2), (void*)value);
	}
};


// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831, ___m_Image_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
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


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___list_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_list_0() const { return ___list_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>
struct Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA, ___list_0)); }
	inline List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * get_list_0() const { return ___list_0; }
	inline List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA, ___current_3)); }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * get_current_3() const { return ___current_3; }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE  : public AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D
{
public:

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


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4  : public AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C
{
public:
	// UnityEngine.Purchasing.Default.IWindowsIAP UnityEngine.Purchasing.WinRTStore::win8
	RuntimeObject* ___win8_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.WinRTStore::callback
	RuntimeObject* ___callback_1;
	// Uniject.IUtil UnityEngine.Purchasing.WinRTStore::util
	RuntimeObject* ___util_2;
	// UnityEngine.ILogger UnityEngine.Purchasing.WinRTStore::logger
	RuntimeObject* ___logger_3;
	// System.Boolean UnityEngine.Purchasing.WinRTStore::m_CanReceivePurchases
	bool ___m_CanReceivePurchases_4;

public:
	inline static int32_t get_offset_of_win8_0() { return static_cast<int32_t>(offsetof(WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4, ___win8_0)); }
	inline RuntimeObject* get_win8_0() const { return ___win8_0; }
	inline RuntimeObject** get_address_of_win8_0() { return &___win8_0; }
	inline void set_win8_0(RuntimeObject* value)
	{
		___win8_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win8_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4, ___callback_1)); }
	inline RuntimeObject* get_callback_1() const { return ___callback_1; }
	inline RuntimeObject** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(RuntimeObject* value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}

	inline static int32_t get_offset_of_util_2() { return static_cast<int32_t>(offsetof(WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4, ___util_2)); }
	inline RuntimeObject* get_util_2() const { return ___util_2; }
	inline RuntimeObject** get_address_of_util_2() { return &___util_2; }
	inline void set_util_2(RuntimeObject* value)
	{
		___util_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_2), (void*)value);
	}

	inline static int32_t get_offset_of_logger_3() { return static_cast<int32_t>(offsetof(WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4, ___logger_3)); }
	inline RuntimeObject* get_logger_3() const { return ___logger_3; }
	inline RuntimeObject** get_address_of_logger_3() { return &___logger_3; }
	inline void set_logger_3(RuntimeObject* value)
	{
		___logger_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanReceivePurchases_4() { return static_cast<int32_t>(offsetof(WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4, ___m_CanReceivePurchases_4)); }
	inline bool get_m_CanReceivePurchases_4() const { return ___m_CanReceivePurchases_4; }
	inline bool* get_address_of_m_CanReceivePurchases_4() { return &___m_CanReceivePurchases_4; }
	inline void set_m_CanReceivePurchases_4(bool value)
	{
		___m_CanReceivePurchases_4 = value;
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

// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___DomainUnload_13)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ProcessExit_14)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ResourceResolve_15)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___TypeResolve_16)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___FirstChanceException_18)); }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___compatibility_switch_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.LogType
struct LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D, ___value___2)); }
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


// UnityEngine.Purchasing.AppleStoreProductType
struct AppleStoreProductType_t5E9C5378D75CDCD4644F2D769DC60BE11AB98A6F 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppleStoreProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppleStoreProductType_t5E9C5378D75CDCD4644F2D769DC60BE11AB98A6F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.Purchasing.ProfileData
struct ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F  : public RuntimeObject
{
public:
	// Uniject.IUtil UnityEngine.Purchasing.ProfileData::m_Util
	RuntimeObject* ___m_Util_0;
	// System.String UnityEngine.Purchasing.ProfileData::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProfileData::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.Purchasing.ProfileData::<SessionId>k__BackingField
	uint64_t ___U3CSessionIdU3Ek__BackingField_4;
	// System.String UnityEngine.Purchasing.ProfileData::<Platform>k__BackingField
	String_t* ___U3CPlatformU3Ek__BackingField_5;
	// System.Int32 UnityEngine.Purchasing.ProfileData::<PlatformId>k__BackingField
	int32_t ___U3CPlatformIdU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.ProfileData::<SdkVer>k__BackingField
	String_t* ___U3CSdkVerU3Ek__BackingField_7;
	// System.String UnityEngine.Purchasing.ProfileData::<OsVer>k__BackingField
	String_t* ___U3COsVerU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Purchasing.ProfileData::<ScreenWidth>k__BackingField
	int32_t ___U3CScreenWidthU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Purchasing.ProfileData::<ScreenHeight>k__BackingField
	int32_t ___U3CScreenHeightU3Ek__BackingField_10;
	// System.Single UnityEngine.Purchasing.ProfileData::<ScreenDpi>k__BackingField
	float ___U3CScreenDpiU3Ek__BackingField_11;
	// System.String UnityEngine.Purchasing.ProfileData::<ScreenOrientation>k__BackingField
	String_t* ___U3CScreenOrientationU3Ek__BackingField_12;
	// System.String UnityEngine.Purchasing.ProfileData::<DeviceId>k__BackingField
	String_t* ___U3CDeviceIdU3Ek__BackingField_13;
	// System.String UnityEngine.Purchasing.ProfileData::<BuildGUID>k__BackingField
	String_t* ___U3CBuildGUIDU3Ek__BackingField_14;
	// System.String UnityEngine.Purchasing.ProfileData::<IapVer>k__BackingField
	String_t* ___U3CIapVerU3Ek__BackingField_15;
	// System.String UnityEngine.Purchasing.ProfileData::<AdsGamerToken>k__BackingField
	String_t* ___U3CAdsGamerTokenU3Ek__BackingField_16;
	// System.Nullable`1<System.Boolean> UnityEngine.Purchasing.ProfileData::<TrackingOptOut>k__BackingField
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___U3CTrackingOptOutU3Ek__BackingField_17;
	// System.Nullable`1<System.Int32> UnityEngine.Purchasing.ProfileData::<AdsABGroup>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CAdsABGroupU3Ek__BackingField_18;
	// System.String UnityEngine.Purchasing.ProfileData::<AdsGameId>k__BackingField
	String_t* ___U3CAdsGameIdU3Ek__BackingField_19;
	// System.Nullable`1<System.Int32> UnityEngine.Purchasing.ProfileData::<StoreABGroup>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CStoreABGroupU3Ek__BackingField_20;
	// System.String UnityEngine.Purchasing.ProfileData::<CatalogId>k__BackingField
	String_t* ___U3CCatalogIdU3Ek__BackingField_21;
	// System.String UnityEngine.Purchasing.ProfileData::<StoreName>k__BackingField
	String_t* ___U3CStoreNameU3Ek__BackingField_22;
	// System.String UnityEngine.Purchasing.ProfileData::<GameVersion>k__BackingField
	String_t* ___U3CGameVersionU3Ek__BackingField_23;
	// System.Nullable`1<System.Boolean> UnityEngine.Purchasing.ProfileData::<StoreTestEnabled>k__BackingField
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___U3CStoreTestEnabledU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Util_0() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___m_Util_0)); }
	inline RuntimeObject* get_m_Util_0() const { return ___m_Util_0; }
	inline RuntimeObject** get_address_of_m_Util_0() { return &___m_Util_0; }
	inline void set_m_Util_0(RuntimeObject* value)
	{
		___m_Util_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Util_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CUserIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_3() const { return ___U3CUserIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_3() { return &___U3CUserIdU3Ek__BackingField_3; }
	inline void set_U3CUserIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSessionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CSessionIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CSessionIdU3Ek__BackingField_4() const { return ___U3CSessionIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CSessionIdU3Ek__BackingField_4() { return &___U3CSessionIdU3Ek__BackingField_4; }
	inline void set_U3CSessionIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CSessionIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPlatformU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CPlatformU3Ek__BackingField_5)); }
	inline String_t* get_U3CPlatformU3Ek__BackingField_5() const { return ___U3CPlatformU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CPlatformU3Ek__BackingField_5() { return &___U3CPlatformU3Ek__BackingField_5; }
	inline void set_U3CPlatformU3Ek__BackingField_5(String_t* value)
	{
		___U3CPlatformU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlatformU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlatformIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CPlatformIdU3Ek__BackingField_6)); }
	inline int32_t get_U3CPlatformIdU3Ek__BackingField_6() const { return ___U3CPlatformIdU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CPlatformIdU3Ek__BackingField_6() { return &___U3CPlatformIdU3Ek__BackingField_6; }
	inline void set_U3CPlatformIdU3Ek__BackingField_6(int32_t value)
	{
		___U3CPlatformIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSdkVerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CSdkVerU3Ek__BackingField_7)); }
	inline String_t* get_U3CSdkVerU3Ek__BackingField_7() const { return ___U3CSdkVerU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CSdkVerU3Ek__BackingField_7() { return &___U3CSdkVerU3Ek__BackingField_7; }
	inline void set_U3CSdkVerU3Ek__BackingField_7(String_t* value)
	{
		___U3CSdkVerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSdkVerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COsVerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3COsVerU3Ek__BackingField_8)); }
	inline String_t* get_U3COsVerU3Ek__BackingField_8() const { return ___U3COsVerU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3COsVerU3Ek__BackingField_8() { return &___U3COsVerU3Ek__BackingField_8; }
	inline void set_U3COsVerU3Ek__BackingField_8(String_t* value)
	{
		___U3COsVerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COsVerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScreenWidthU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CScreenWidthU3Ek__BackingField_9)); }
	inline int32_t get_U3CScreenWidthU3Ek__BackingField_9() const { return ___U3CScreenWidthU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CScreenWidthU3Ek__BackingField_9() { return &___U3CScreenWidthU3Ek__BackingField_9; }
	inline void set_U3CScreenWidthU3Ek__BackingField_9(int32_t value)
	{
		___U3CScreenWidthU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CScreenHeightU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CScreenHeightU3Ek__BackingField_10)); }
	inline int32_t get_U3CScreenHeightU3Ek__BackingField_10() const { return ___U3CScreenHeightU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CScreenHeightU3Ek__BackingField_10() { return &___U3CScreenHeightU3Ek__BackingField_10; }
	inline void set_U3CScreenHeightU3Ek__BackingField_10(int32_t value)
	{
		___U3CScreenHeightU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CScreenDpiU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CScreenDpiU3Ek__BackingField_11)); }
	inline float get_U3CScreenDpiU3Ek__BackingField_11() const { return ___U3CScreenDpiU3Ek__BackingField_11; }
	inline float* get_address_of_U3CScreenDpiU3Ek__BackingField_11() { return &___U3CScreenDpiU3Ek__BackingField_11; }
	inline void set_U3CScreenDpiU3Ek__BackingField_11(float value)
	{
		___U3CScreenDpiU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CScreenOrientationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CScreenOrientationU3Ek__BackingField_12)); }
	inline String_t* get_U3CScreenOrientationU3Ek__BackingField_12() const { return ___U3CScreenOrientationU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CScreenOrientationU3Ek__BackingField_12() { return &___U3CScreenOrientationU3Ek__BackingField_12; }
	inline void set_U3CScreenOrientationU3Ek__BackingField_12(String_t* value)
	{
		___U3CScreenOrientationU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CScreenOrientationU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeviceIdU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CDeviceIdU3Ek__BackingField_13)); }
	inline String_t* get_U3CDeviceIdU3Ek__BackingField_13() const { return ___U3CDeviceIdU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CDeviceIdU3Ek__BackingField_13() { return &___U3CDeviceIdU3Ek__BackingField_13; }
	inline void set_U3CDeviceIdU3Ek__BackingField_13(String_t* value)
	{
		___U3CDeviceIdU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeviceIdU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBuildGUIDU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CBuildGUIDU3Ek__BackingField_14)); }
	inline String_t* get_U3CBuildGUIDU3Ek__BackingField_14() const { return ___U3CBuildGUIDU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CBuildGUIDU3Ek__BackingField_14() { return &___U3CBuildGUIDU3Ek__BackingField_14; }
	inline void set_U3CBuildGUIDU3Ek__BackingField_14(String_t* value)
	{
		___U3CBuildGUIDU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBuildGUIDU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIapVerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CIapVerU3Ek__BackingField_15)); }
	inline String_t* get_U3CIapVerU3Ek__BackingField_15() const { return ___U3CIapVerU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CIapVerU3Ek__BackingField_15() { return &___U3CIapVerU3Ek__BackingField_15; }
	inline void set_U3CIapVerU3Ek__BackingField_15(String_t* value)
	{
		___U3CIapVerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIapVerU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdsGamerTokenU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CAdsGamerTokenU3Ek__BackingField_16)); }
	inline String_t* get_U3CAdsGamerTokenU3Ek__BackingField_16() const { return ___U3CAdsGamerTokenU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CAdsGamerTokenU3Ek__BackingField_16() { return &___U3CAdsGamerTokenU3Ek__BackingField_16; }
	inline void set_U3CAdsGamerTokenU3Ek__BackingField_16(String_t* value)
	{
		___U3CAdsGamerTokenU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdsGamerTokenU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrackingOptOutU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CTrackingOptOutU3Ek__BackingField_17)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_U3CTrackingOptOutU3Ek__BackingField_17() const { return ___U3CTrackingOptOutU3Ek__BackingField_17; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_U3CTrackingOptOutU3Ek__BackingField_17() { return &___U3CTrackingOptOutU3Ek__BackingField_17; }
	inline void set_U3CTrackingOptOutU3Ek__BackingField_17(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___U3CTrackingOptOutU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CAdsABGroupU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CAdsABGroupU3Ek__BackingField_18)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CAdsABGroupU3Ek__BackingField_18() const { return ___U3CAdsABGroupU3Ek__BackingField_18; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CAdsABGroupU3Ek__BackingField_18() { return &___U3CAdsABGroupU3Ek__BackingField_18; }
	inline void set_U3CAdsABGroupU3Ek__BackingField_18(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CAdsABGroupU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CAdsGameIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CAdsGameIdU3Ek__BackingField_19)); }
	inline String_t* get_U3CAdsGameIdU3Ek__BackingField_19() const { return ___U3CAdsGameIdU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CAdsGameIdU3Ek__BackingField_19() { return &___U3CAdsGameIdU3Ek__BackingField_19; }
	inline void set_U3CAdsGameIdU3Ek__BackingField_19(String_t* value)
	{
		___U3CAdsGameIdU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdsGameIdU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStoreABGroupU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CStoreABGroupU3Ek__BackingField_20)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CStoreABGroupU3Ek__BackingField_20() const { return ___U3CStoreABGroupU3Ek__BackingField_20; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CStoreABGroupU3Ek__BackingField_20() { return &___U3CStoreABGroupU3Ek__BackingField_20; }
	inline void set_U3CStoreABGroupU3Ek__BackingField_20(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CStoreABGroupU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CCatalogIdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CCatalogIdU3Ek__BackingField_21)); }
	inline String_t* get_U3CCatalogIdU3Ek__BackingField_21() const { return ___U3CCatalogIdU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CCatalogIdU3Ek__BackingField_21() { return &___U3CCatalogIdU3Ek__BackingField_21; }
	inline void set_U3CCatalogIdU3Ek__BackingField_21(String_t* value)
	{
		___U3CCatalogIdU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCatalogIdU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStoreNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CStoreNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CStoreNameU3Ek__BackingField_22() const { return ___U3CStoreNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CStoreNameU3Ek__BackingField_22() { return &___U3CStoreNameU3Ek__BackingField_22; }
	inline void set_U3CStoreNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CStoreNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStoreNameU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameVersionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CGameVersionU3Ek__BackingField_23)); }
	inline String_t* get_U3CGameVersionU3Ek__BackingField_23() const { return ___U3CGameVersionU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CGameVersionU3Ek__BackingField_23() { return &___U3CGameVersionU3Ek__BackingField_23; }
	inline void set_U3CGameVersionU3Ek__BackingField_23(String_t* value)
	{
		___U3CGameVersionU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameVersionU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStoreTestEnabledU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F, ___U3CStoreTestEnabledU3Ek__BackingField_24)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_U3CStoreTestEnabledU3Ek__BackingField_24() const { return ___U3CStoreTestEnabledU3Ek__BackingField_24; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_U3CStoreTestEnabledU3Ek__BackingField_24() { return &___U3CStoreTestEnabledU3Ek__BackingField_24; }
	inline void set_U3CStoreTestEnabledU3Ek__BackingField_24(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___U3CStoreTestEnabledU3Ek__BackingField_24 = value;
	}
};

struct ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F_StaticFields
{
public:
	// UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.ProfileData::ProfileInstance
	ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * ___ProfileInstance_1;

public:
	inline static int32_t get_offset_of_ProfileInstance_1() { return static_cast<int32_t>(offsetof(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F_StaticFields, ___ProfileInstance_1)); }
	inline ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * get_ProfileInstance_1() const { return ___ProfileInstance_1; }
	inline ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F ** get_address_of_ProfileInstance_1() { return &___ProfileInstance_1; }
	inline void set_ProfileInstance_1(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * value)
	{
		___ProfileInstance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProfileInstance_1), (void*)value);
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


// UnityEngine.Purchasing.Result
struct Result_t86708FE469AC066AEE50EAD921DC02C6E6806709 
{
public:
	// System.Int32 UnityEngine.Purchasing.Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t86708FE469AC066AEE50EAD921DC02C6E6806709, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<quantity>k__BackingField
	int32_t ___U3CquantityU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productID>k__BackingField
	String_t* ___U3CproductIDU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalTransactionIdentifier>k__BackingField
	String_t* ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<purchaseDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CpurchaseDateU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalPurchaseDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CoriginalPurchaseDateU3Ek__BackingField_5;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<subscriptionExpirationDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CsubscriptionExpirationDateU3Ek__BackingField_6;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<cancellationDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CcancellationDateU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isFreeTrial>k__BackingField
	int32_t ___U3CisFreeTrialU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productType>k__BackingField
	int32_t ___U3CproductTypeU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isIntroductoryPricePeriod>k__BackingField
	int32_t ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CquantityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CquantityU3Ek__BackingField_0)); }
	inline int32_t get_U3CquantityU3Ek__BackingField_0() const { return ___U3CquantityU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CquantityU3Ek__BackingField_0() { return &___U3CquantityU3Ek__BackingField_0; }
	inline void set_U3CquantityU3Ek__BackingField_0(int32_t value)
	{
		___U3CquantityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproductIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CproductIDU3Ek__BackingField_1)); }
	inline String_t* get_U3CproductIDU3Ek__BackingField_1() const { return ___U3CproductIDU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CproductIDU3Ek__BackingField_1() { return &___U3CproductIDU3Ek__BackingField_1; }
	inline void set_U3CproductIDU3Ek__BackingField_1(String_t* value)
	{
		___U3CproductIDU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIDU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CtransactionIDU3Ek__BackingField_2)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_2() const { return ___U3CtransactionIDU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_2() { return &___U3CtransactionIDU3Ek__BackingField_2; }
	inline void set_U3CtransactionIDU3Ek__BackingField_2(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3)); }
	inline String_t* get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() const { return ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return &___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline void set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(String_t* value)
	{
		___U3CoriginalTransactionIdentifierU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalTransactionIdentifierU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpurchaseDateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CpurchaseDateU3Ek__BackingField_4)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CpurchaseDateU3Ek__BackingField_4() const { return ___U3CpurchaseDateU3Ek__BackingField_4; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CpurchaseDateU3Ek__BackingField_4() { return &___U3CpurchaseDateU3Ek__BackingField_4; }
	inline void set_U3CpurchaseDateU3Ek__BackingField_4(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CpurchaseDateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CoriginalPurchaseDateU3Ek__BackingField_5)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CoriginalPurchaseDateU3Ek__BackingField_5() const { return ___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return &___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline void set_U3CoriginalPurchaseDateU3Ek__BackingField_5(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CoriginalPurchaseDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CsubscriptionExpirationDateU3Ek__BackingField_6)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CsubscriptionExpirationDateU3Ek__BackingField_6() const { return ___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return &___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline void set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CsubscriptionExpirationDateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CcancellationDateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CcancellationDateU3Ek__BackingField_7)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CcancellationDateU3Ek__BackingField_7() const { return ___U3CcancellationDateU3Ek__BackingField_7; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CcancellationDateU3Ek__BackingField_7() { return &___U3CcancellationDateU3Ek__BackingField_7; }
	inline void set_U3CcancellationDateU3Ek__BackingField_7(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CcancellationDateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CisFreeTrialU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CisFreeTrialU3Ek__BackingField_8)); }
	inline int32_t get_U3CisFreeTrialU3Ek__BackingField_8() const { return ___U3CisFreeTrialU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CisFreeTrialU3Ek__BackingField_8() { return &___U3CisFreeTrialU3Ek__BackingField_8; }
	inline void set_U3CisFreeTrialU3Ek__BackingField_8(int32_t value)
	{
		___U3CisFreeTrialU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CproductTypeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CproductTypeU3Ek__BackingField_9)); }
	inline int32_t get_U3CproductTypeU3Ek__BackingField_9() const { return ___U3CproductTypeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CproductTypeU3Ek__BackingField_9() { return &___U3CproductTypeU3Ek__BackingField_9; }
	inline void set_U3CproductTypeU3Ek__BackingField_9(int32_t value)
	{
		___U3CproductTypeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723, ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10)); }
	inline int32_t get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() const { return ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return &___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline void set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(int32_t value)
	{
		___U3CisIntroductoryPricePeriodU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode
struct StoreSpecificPurchaseErrorCode_tEC6091A6F1A2EFDFC5D000EFE85AAADF9E067E56 
{
public:
	// System.Int32 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreSpecificPurchaseErrorCode_tEC6091A6F1A2EFDFC5D000EFE85AAADF9E067E56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.SubscriptionPeriodUnit
struct SubscriptionPeriodUnit_t9D51F0FE62E05B4948329E932A39D753D8C03F73 
{
public:
	// System.Int32 UnityEngine.Purchasing.SubscriptionPeriodUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SubscriptionPeriodUnit_t9D51F0FE62E05B4948329E932A39D753D8C03F73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.TranslationLocale
struct TranslationLocale_tF20AFBA9EF0124617F608D14843BC0B9483D6994 
{
public:
	// System.Int32 UnityEngine.Purchasing.TranslationLocale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TranslationLocale_tF20AFBA9EF0124617F608D14843BC0B9483D6994, ___value___2)); }
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


// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306  : public UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914
{
public:

public:
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

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
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


// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.Extension.ProductDescription::type
	int32_t ___type_1;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___U3CmetadataU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CstoreSpecificIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_0() const { return ___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return &___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CmetadataU3Ek__BackingField_2)); }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * get_U3CmetadataU3Ek__BackingField_2() const { return ___U3CmetadataU3Ek__BackingField_2; }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 ** get_address_of_U3CmetadataU3Ek__BackingField_2() { return &___U3CmetadataU3Ek__BackingField_2; }
	inline void set_U3CmetadataU3Ek__BackingField_2(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * value)
	{
		___U3CmetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CreceiptU3Ek__BackingField_3)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_3() const { return ___U3CreceiptU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_3() { return &___U3CreceiptU3Ek__BackingField_3; }
	inline void set_U3CreceiptU3Ek__BackingField_3(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CtransactionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_4() const { return ___U3CtransactionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_4() { return &___U3CtransactionIdU3Ek__BackingField_4; }
	inline void set_U3CtransactionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIdU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<reason>k__BackingField
	int32_t ___U3CreasonU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CproductIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_0() const { return ___U3CproductIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_0() { return &___U3CproductIdU3Ek__BackingField_0; }
	inline void set_U3CproductIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CreasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CreasonU3Ek__BackingField_1() const { return ___U3CreasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreasonU3Ek__BackingField_1() { return &___U3CreasonU3Ek__BackingField_1; }
	inline void set_U3CreasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CreasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmessageU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Purchasing.GoogleProductMetadata
struct GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8  : public ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48
{
public:
	// System.String UnityEngine.Purchasing.GoogleProductMetadata::<originalJson>k__BackingField
	String_t* ___U3CoriginalJsonU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.GoogleProductMetadata::<subscriptionPeriod>k__BackingField
	String_t* ___U3CsubscriptionPeriodU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.GoogleProductMetadata::<freeTrialPeriod>k__BackingField
	String_t* ___U3CfreeTrialPeriodU3Ek__BackingField_7;
	// System.String UnityEngine.Purchasing.GoogleProductMetadata::<introductoryPrice>k__BackingField
	String_t* ___U3CintroductoryPriceU3Ek__BackingField_8;
	// System.String UnityEngine.Purchasing.GoogleProductMetadata::<introductoryPricePeriod>k__BackingField
	String_t* ___U3CintroductoryPricePeriodU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Purchasing.GoogleProductMetadata::<introductoryPriceCycles>k__BackingField
	int32_t ___U3CintroductoryPriceCyclesU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CoriginalJsonU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8, ___U3CoriginalJsonU3Ek__BackingField_5)); }
	inline String_t* get_U3CoriginalJsonU3Ek__BackingField_5() const { return ___U3CoriginalJsonU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CoriginalJsonU3Ek__BackingField_5() { return &___U3CoriginalJsonU3Ek__BackingField_5; }
	inline void set_U3CoriginalJsonU3Ek__BackingField_5(String_t* value)
	{
		___U3CoriginalJsonU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalJsonU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubscriptionPeriodU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8, ___U3CsubscriptionPeriodU3Ek__BackingField_6)); }
	inline String_t* get_U3CsubscriptionPeriodU3Ek__BackingField_6() const { return ___U3CsubscriptionPeriodU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CsubscriptionPeriodU3Ek__BackingField_6() { return &___U3CsubscriptionPeriodU3Ek__BackingField_6; }
	inline void set_U3CsubscriptionPeriodU3Ek__BackingField_6(String_t* value)
	{
		___U3CsubscriptionPeriodU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubscriptionPeriodU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfreeTrialPeriodU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8, ___U3CfreeTrialPeriodU3Ek__BackingField_7)); }
	inline String_t* get_U3CfreeTrialPeriodU3Ek__BackingField_7() const { return ___U3CfreeTrialPeriodU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CfreeTrialPeriodU3Ek__BackingField_7() { return &___U3CfreeTrialPeriodU3Ek__BackingField_7; }
	inline void set_U3CfreeTrialPeriodU3Ek__BackingField_7(String_t* value)
	{
		___U3CfreeTrialPeriodU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfreeTrialPeriodU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CintroductoryPriceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8, ___U3CintroductoryPriceU3Ek__BackingField_8)); }
	inline String_t* get_U3CintroductoryPriceU3Ek__BackingField_8() const { return ___U3CintroductoryPriceU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CintroductoryPriceU3Ek__BackingField_8() { return &___U3CintroductoryPriceU3Ek__BackingField_8; }
	inline void set_U3CintroductoryPriceU3Ek__BackingField_8(String_t* value)
	{
		___U3CintroductoryPriceU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CintroductoryPriceU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CintroductoryPricePeriodU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8, ___U3CintroductoryPricePeriodU3Ek__BackingField_9)); }
	inline String_t* get_U3CintroductoryPricePeriodU3Ek__BackingField_9() const { return ___U3CintroductoryPricePeriodU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CintroductoryPricePeriodU3Ek__BackingField_9() { return &___U3CintroductoryPricePeriodU3Ek__BackingField_9; }
	inline void set_U3CintroductoryPricePeriodU3Ek__BackingField_9(String_t* value)
	{
		___U3CintroductoryPricePeriodU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CintroductoryPricePeriodU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CintroductoryPriceCyclesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8, ___U3CintroductoryPriceCyclesU3Ek__BackingField_10)); }
	inline int32_t get_U3CintroductoryPriceCyclesU3Ek__BackingField_10() const { return ___U3CintroductoryPriceCyclesU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CintroductoryPriceCyclesU3Ek__BackingField_10() { return &___U3CintroductoryPriceCyclesU3Ek__BackingField_10; }
	inline void set_U3CintroductoryPriceCyclesU3Ek__BackingField_10(int32_t value)
	{
		___U3CintroductoryPriceCyclesU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.Purchasing.JSONStore
struct JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B  : public AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C
{
public:
	// UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.JSONStore::m_managedStore
	StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC * ___m_managedStore_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.JSONStore::unity
	RuntimeObject* ___unity_1;
	// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.JSONStore::store
	RuntimeObject* ___store_2;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isManagedStoreEnabled
	bool ___isManagedStoreEnabled_3;
	// UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.JSONStore::m_profileData
	ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * ___m_profileData_4;
	// System.Boolean UnityEngine.Purchasing.JSONStore::shouldLogPromoInitialization
	bool ___shouldLogPromoInitialization_5;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.JSONStore::m_Module
	StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * ___m_Module_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.JSONStore::m_BuilderProducts
	HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D * ___m_BuilderProducts_7;
	// UnityEngine.ILogger UnityEngine.Purchasing.JSONStore::m_Logger
	RuntimeObject* ___m_Logger_8;
	// UnityEngine.Purchasing.EventQueue UnityEngine.Purchasing.JSONStore::m_EventQueue
	EventQueue_t431AC70097C6ADA40F84674C98C742680AC2938A * ___m_EventQueue_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONStore::promoPayload
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___promoPayload_10;
	// System.Boolean UnityEngine.Purchasing.JSONStore::catalogDisabled
	bool ___catalogDisabled_11;
	// System.Boolean UnityEngine.Purchasing.JSONStore::eventsDisabled
	bool ___eventsDisabled_12;
	// System.String UnityEngine.Purchasing.JSONStore::iapBaseUrl
	String_t* ___iapBaseUrl_13;
	// System.String UnityEngine.Purchasing.JSONStore::eventBaseUrl
	String_t* ___eventBaseUrl_14;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::lastPurchaseFailureDescription
	PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * ___lastPurchaseFailureDescription_15;
	// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::_lastPurchaseErrorCode
	int32_t ____lastPurchaseErrorCode_16;
	// System.String UnityEngine.Purchasing.JSONStore::m_persistentDataPath
	String_t* ___m_persistentDataPath_17;
	// System.String UnityEngine.Purchasing.JSONStore::kStoreSpecificErrorCodeKey
	String_t* ___kStoreSpecificErrorCodeKey_18;

public:
	inline static int32_t get_offset_of_m_managedStore_0() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___m_managedStore_0)); }
	inline StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC * get_m_managedStore_0() const { return ___m_managedStore_0; }
	inline StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC ** get_address_of_m_managedStore_0() { return &___m_managedStore_0; }
	inline void set_m_managedStore_0(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC * value)
	{
		___m_managedStore_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_managedStore_0), (void*)value);
	}

	inline static int32_t get_offset_of_unity_1() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___unity_1)); }
	inline RuntimeObject* get_unity_1() const { return ___unity_1; }
	inline RuntimeObject** get_address_of_unity_1() { return &___unity_1; }
	inline void set_unity_1(RuntimeObject* value)
	{
		___unity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unity_1), (void*)value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___store_2)); }
	inline RuntimeObject* get_store_2() const { return ___store_2; }
	inline RuntimeObject** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(RuntimeObject* value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_2), (void*)value);
	}

	inline static int32_t get_offset_of_isManagedStoreEnabled_3() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___isManagedStoreEnabled_3)); }
	inline bool get_isManagedStoreEnabled_3() const { return ___isManagedStoreEnabled_3; }
	inline bool* get_address_of_isManagedStoreEnabled_3() { return &___isManagedStoreEnabled_3; }
	inline void set_isManagedStoreEnabled_3(bool value)
	{
		___isManagedStoreEnabled_3 = value;
	}

	inline static int32_t get_offset_of_m_profileData_4() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___m_profileData_4)); }
	inline ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * get_m_profileData_4() const { return ___m_profileData_4; }
	inline ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F ** get_address_of_m_profileData_4() { return &___m_profileData_4; }
	inline void set_m_profileData_4(ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * value)
	{
		___m_profileData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_profileData_4), (void*)value);
	}

	inline static int32_t get_offset_of_shouldLogPromoInitialization_5() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___shouldLogPromoInitialization_5)); }
	inline bool get_shouldLogPromoInitialization_5() const { return ___shouldLogPromoInitialization_5; }
	inline bool* get_address_of_shouldLogPromoInitialization_5() { return &___shouldLogPromoInitialization_5; }
	inline void set_shouldLogPromoInitialization_5(bool value)
	{
		___shouldLogPromoInitialization_5 = value;
	}

	inline static int32_t get_offset_of_m_Module_6() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___m_Module_6)); }
	inline StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * get_m_Module_6() const { return ___m_Module_6; }
	inline StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 ** get_address_of_m_Module_6() { return &___m_Module_6; }
	inline void set_m_Module_6(StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * value)
	{
		___m_Module_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Module_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BuilderProducts_7() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___m_BuilderProducts_7)); }
	inline HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D * get_m_BuilderProducts_7() const { return ___m_BuilderProducts_7; }
	inline HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D ** get_address_of_m_BuilderProducts_7() { return &___m_BuilderProducts_7; }
	inline void set_m_BuilderProducts_7(HashSet_1_t84B3F4758BD66A3C89791F1F3C2E5E36700F981D * value)
	{
		___m_BuilderProducts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BuilderProducts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_8() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___m_Logger_8)); }
	inline RuntimeObject* get_m_Logger_8() const { return ___m_Logger_8; }
	inline RuntimeObject** get_address_of_m_Logger_8() { return &___m_Logger_8; }
	inline void set_m_Logger_8(RuntimeObject* value)
	{
		___m_Logger_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventQueue_9() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___m_EventQueue_9)); }
	inline EventQueue_t431AC70097C6ADA40F84674C98C742680AC2938A * get_m_EventQueue_9() const { return ___m_EventQueue_9; }
	inline EventQueue_t431AC70097C6ADA40F84674C98C742680AC2938A ** get_address_of_m_EventQueue_9() { return &___m_EventQueue_9; }
	inline void set_m_EventQueue_9(EventQueue_t431AC70097C6ADA40F84674C98C742680AC2938A * value)
	{
		___m_EventQueue_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventQueue_9), (void*)value);
	}

	inline static int32_t get_offset_of_promoPayload_10() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___promoPayload_10)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_promoPayload_10() const { return ___promoPayload_10; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_promoPayload_10() { return &___promoPayload_10; }
	inline void set_promoPayload_10(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___promoPayload_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promoPayload_10), (void*)value);
	}

	inline static int32_t get_offset_of_catalogDisabled_11() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___catalogDisabled_11)); }
	inline bool get_catalogDisabled_11() const { return ___catalogDisabled_11; }
	inline bool* get_address_of_catalogDisabled_11() { return &___catalogDisabled_11; }
	inline void set_catalogDisabled_11(bool value)
	{
		___catalogDisabled_11 = value;
	}

	inline static int32_t get_offset_of_eventsDisabled_12() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___eventsDisabled_12)); }
	inline bool get_eventsDisabled_12() const { return ___eventsDisabled_12; }
	inline bool* get_address_of_eventsDisabled_12() { return &___eventsDisabled_12; }
	inline void set_eventsDisabled_12(bool value)
	{
		___eventsDisabled_12 = value;
	}

	inline static int32_t get_offset_of_iapBaseUrl_13() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___iapBaseUrl_13)); }
	inline String_t* get_iapBaseUrl_13() const { return ___iapBaseUrl_13; }
	inline String_t** get_address_of_iapBaseUrl_13() { return &___iapBaseUrl_13; }
	inline void set_iapBaseUrl_13(String_t* value)
	{
		___iapBaseUrl_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iapBaseUrl_13), (void*)value);
	}

	inline static int32_t get_offset_of_eventBaseUrl_14() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___eventBaseUrl_14)); }
	inline String_t* get_eventBaseUrl_14() const { return ___eventBaseUrl_14; }
	inline String_t** get_address_of_eventBaseUrl_14() { return &___eventBaseUrl_14; }
	inline void set_eventBaseUrl_14(String_t* value)
	{
		___eventBaseUrl_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventBaseUrl_14), (void*)value);
	}

	inline static int32_t get_offset_of_lastPurchaseFailureDescription_15() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___lastPurchaseFailureDescription_15)); }
	inline PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * get_lastPurchaseFailureDescription_15() const { return ___lastPurchaseFailureDescription_15; }
	inline PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C ** get_address_of_lastPurchaseFailureDescription_15() { return &___lastPurchaseFailureDescription_15; }
	inline void set_lastPurchaseFailureDescription_15(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * value)
	{
		___lastPurchaseFailureDescription_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastPurchaseFailureDescription_15), (void*)value);
	}

	inline static int32_t get_offset_of__lastPurchaseErrorCode_16() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ____lastPurchaseErrorCode_16)); }
	inline int32_t get__lastPurchaseErrorCode_16() const { return ____lastPurchaseErrorCode_16; }
	inline int32_t* get_address_of__lastPurchaseErrorCode_16() { return &____lastPurchaseErrorCode_16; }
	inline void set__lastPurchaseErrorCode_16(int32_t value)
	{
		____lastPurchaseErrorCode_16 = value;
	}

	inline static int32_t get_offset_of_m_persistentDataPath_17() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___m_persistentDataPath_17)); }
	inline String_t* get_m_persistentDataPath_17() const { return ___m_persistentDataPath_17; }
	inline String_t** get_address_of_m_persistentDataPath_17() { return &___m_persistentDataPath_17; }
	inline void set_m_persistentDataPath_17(String_t* value)
	{
		___m_persistentDataPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_persistentDataPath_17), (void*)value);
	}

	inline static int32_t get_offset_of_kStoreSpecificErrorCodeKey_18() { return static_cast<int32_t>(offsetof(JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B, ___kStoreSpecificErrorCodeKey_18)); }
	inline String_t* get_kStoreSpecificErrorCodeKey_18() const { return ___kStoreSpecificErrorCodeKey_18; }
	inline String_t** get_address_of_kStoreSpecificErrorCodeKey_18() { return &___kStoreSpecificErrorCodeKey_18; }
	inline void set_kStoreSpecificErrorCodeKey_18(String_t* value)
	{
		___kStoreSpecificErrorCodeKey_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kStoreSpecificErrorCodeKey_18), (void*)value);
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


// UnityEngine.Purchasing.ReceiptParserException
struct ReceiptParserException_t5A2EFF39ABA84157A32C64F49892145FAB595516  : public Exception_t
{
public:

public:
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


// UnityEngine.Purchasing.StoreConfiguration
struct StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StoreConfiguration::<androidStore>k__BackingField
	int32_t ___U3CandroidStoreU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CandroidStoreU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8, ___U3CandroidStoreU3Ek__BackingField_0)); }
	inline int32_t get_U3CandroidStoreU3Ek__BackingField_0() const { return ___U3CandroidStoreU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CandroidStoreU3Ek__BackingField_0() { return &___U3CandroidStoreU3Ek__BackingField_0; }
	inline void set_U3CandroidStoreU3Ek__BackingField_0(int32_t value)
	{
		___U3CandroidStoreU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Purchasing.SubscriptionInfo
struct SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_subscribed
	int32_t ___is_subscribed_0;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_expired
	int32_t ___is_expired_1;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_cancelled
	int32_t ___is_cancelled_2;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_free_trial
	int32_t ___is_free_trial_3;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_auto_renewing
	int32_t ___is_auto_renewing_4;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_introductory_price_period
	int32_t ___is_introductory_price_period_5;
	// System.String UnityEngine.Purchasing.SubscriptionInfo::productId
	String_t* ___productId_6;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::purchaseDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___purchaseDate_7;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::subscriptionExpireDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___subscriptionExpireDate_8;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::subscriptionCancelDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___subscriptionCancelDate_9;
	// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::remainedTime
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___remainedTime_10;
	// System.String UnityEngine.Purchasing.SubscriptionInfo::introductory_price
	String_t* ___introductory_price_11;
	// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::introductory_price_period
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___introductory_price_period_12;
	// System.Int64 UnityEngine.Purchasing.SubscriptionInfo::introductory_price_cycles
	int64_t ___introductory_price_cycles_13;

public:
	inline static int32_t get_offset_of_is_subscribed_0() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___is_subscribed_0)); }
	inline int32_t get_is_subscribed_0() const { return ___is_subscribed_0; }
	inline int32_t* get_address_of_is_subscribed_0() { return &___is_subscribed_0; }
	inline void set_is_subscribed_0(int32_t value)
	{
		___is_subscribed_0 = value;
	}

	inline static int32_t get_offset_of_is_expired_1() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___is_expired_1)); }
	inline int32_t get_is_expired_1() const { return ___is_expired_1; }
	inline int32_t* get_address_of_is_expired_1() { return &___is_expired_1; }
	inline void set_is_expired_1(int32_t value)
	{
		___is_expired_1 = value;
	}

	inline static int32_t get_offset_of_is_cancelled_2() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___is_cancelled_2)); }
	inline int32_t get_is_cancelled_2() const { return ___is_cancelled_2; }
	inline int32_t* get_address_of_is_cancelled_2() { return &___is_cancelled_2; }
	inline void set_is_cancelled_2(int32_t value)
	{
		___is_cancelled_2 = value;
	}

	inline static int32_t get_offset_of_is_free_trial_3() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___is_free_trial_3)); }
	inline int32_t get_is_free_trial_3() const { return ___is_free_trial_3; }
	inline int32_t* get_address_of_is_free_trial_3() { return &___is_free_trial_3; }
	inline void set_is_free_trial_3(int32_t value)
	{
		___is_free_trial_3 = value;
	}

	inline static int32_t get_offset_of_is_auto_renewing_4() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___is_auto_renewing_4)); }
	inline int32_t get_is_auto_renewing_4() const { return ___is_auto_renewing_4; }
	inline int32_t* get_address_of_is_auto_renewing_4() { return &___is_auto_renewing_4; }
	inline void set_is_auto_renewing_4(int32_t value)
	{
		___is_auto_renewing_4 = value;
	}

	inline static int32_t get_offset_of_is_introductory_price_period_5() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___is_introductory_price_period_5)); }
	inline int32_t get_is_introductory_price_period_5() const { return ___is_introductory_price_period_5; }
	inline int32_t* get_address_of_is_introductory_price_period_5() { return &___is_introductory_price_period_5; }
	inline void set_is_introductory_price_period_5(int32_t value)
	{
		___is_introductory_price_period_5 = value;
	}

	inline static int32_t get_offset_of_productId_6() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___productId_6)); }
	inline String_t* get_productId_6() const { return ___productId_6; }
	inline String_t** get_address_of_productId_6() { return &___productId_6; }
	inline void set_productId_6(String_t* value)
	{
		___productId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productId_6), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseDate_7() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___purchaseDate_7)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_purchaseDate_7() const { return ___purchaseDate_7; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_purchaseDate_7() { return &___purchaseDate_7; }
	inline void set_purchaseDate_7(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___purchaseDate_7 = value;
	}

	inline static int32_t get_offset_of_subscriptionExpireDate_8() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___subscriptionExpireDate_8)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_subscriptionExpireDate_8() const { return ___subscriptionExpireDate_8; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_subscriptionExpireDate_8() { return &___subscriptionExpireDate_8; }
	inline void set_subscriptionExpireDate_8(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___subscriptionExpireDate_8 = value;
	}

	inline static int32_t get_offset_of_subscriptionCancelDate_9() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___subscriptionCancelDate_9)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_subscriptionCancelDate_9() const { return ___subscriptionCancelDate_9; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_subscriptionCancelDate_9() { return &___subscriptionCancelDate_9; }
	inline void set_subscriptionCancelDate_9(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___subscriptionCancelDate_9 = value;
	}

	inline static int32_t get_offset_of_remainedTime_10() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___remainedTime_10)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_remainedTime_10() const { return ___remainedTime_10; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_remainedTime_10() { return &___remainedTime_10; }
	inline void set_remainedTime_10(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___remainedTime_10 = value;
	}

	inline static int32_t get_offset_of_introductory_price_11() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___introductory_price_11)); }
	inline String_t* get_introductory_price_11() const { return ___introductory_price_11; }
	inline String_t** get_address_of_introductory_price_11() { return &___introductory_price_11; }
	inline void set_introductory_price_11(String_t* value)
	{
		___introductory_price_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___introductory_price_11), (void*)value);
	}

	inline static int32_t get_offset_of_introductory_price_period_12() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___introductory_price_period_12)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_introductory_price_period_12() const { return ___introductory_price_period_12; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_introductory_price_period_12() { return &___introductory_price_period_12; }
	inline void set_introductory_price_period_12(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___introductory_price_period_12 = value;
	}

	inline static int32_t get_offset_of_introductory_price_cycles_13() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA, ___introductory_price_cycles_13)); }
	inline int64_t get_introductory_price_cycles_13() const { return ___introductory_price_cycles_13; }
	inline int64_t* get_address_of_introductory_price_cycles_13() { return &___introductory_price_cycles_13; }
	inline void set_introductory_price_cycles_13(int64_t value)
	{
		___introductory_price_cycles_13 = value;
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

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>
struct Action_1_t38FBBB64ACD76C48DEED6E7A2C77CD902E051BDF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.Int32>
struct Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.Object>
struct Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.AndroidJavaObject,System.Boolean>
struct Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct Func_2_t4F73E32FDE937DA6ED16932395122191E9837732  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<System.String>
struct Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1  : public MulticastDelegate_t
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


// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Purchasing.FakeStore
struct FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF  : public JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.FakeStore::m_Biller
	RuntimeObject* ___m_Biller_19;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.FakeStore::m_PurchasedProducts
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_PurchasedProducts_20;
	// System.Boolean UnityEngine.Purchasing.FakeStore::purchaseCalled
	bool ___purchaseCalled_21;
	// System.String UnityEngine.Purchasing.FakeStore::<unavailableProductId>k__BackingField
	String_t* ___U3CunavailableProductIdU3Ek__BackingField_22;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.FakeStore::UIMode
	int32_t ___UIMode_23;

public:
	inline static int32_t get_offset_of_m_Biller_19() { return static_cast<int32_t>(offsetof(FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF, ___m_Biller_19)); }
	inline RuntimeObject* get_m_Biller_19() const { return ___m_Biller_19; }
	inline RuntimeObject** get_address_of_m_Biller_19() { return &___m_Biller_19; }
	inline void set_m_Biller_19(RuntimeObject* value)
	{
		___m_Biller_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Biller_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_PurchasedProducts_20() { return static_cast<int32_t>(offsetof(FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF, ___m_PurchasedProducts_20)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_PurchasedProducts_20() const { return ___m_PurchasedProducts_20; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_PurchasedProducts_20() { return &___m_PurchasedProducts_20; }
	inline void set_m_PurchasedProducts_20(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_PurchasedProducts_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchasedProducts_20), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseCalled_21() { return static_cast<int32_t>(offsetof(FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF, ___purchaseCalled_21)); }
	inline bool get_purchaseCalled_21() const { return ___purchaseCalled_21; }
	inline bool* get_address_of_purchaseCalled_21() { return &___purchaseCalled_21; }
	inline void set_purchaseCalled_21(bool value)
	{
		___purchaseCalled_21 = value;
	}

	inline static int32_t get_offset_of_U3CunavailableProductIdU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF, ___U3CunavailableProductIdU3Ek__BackingField_22)); }
	inline String_t* get_U3CunavailableProductIdU3Ek__BackingField_22() const { return ___U3CunavailableProductIdU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CunavailableProductIdU3Ek__BackingField_22() { return &___U3CunavailableProductIdU3Ek__BackingField_22; }
	inline void set_U3CunavailableProductIdU3Ek__BackingField_22(String_t* value)
	{
		___U3CunavailableProductIdU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunavailableProductIdU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_UIMode_23() { return static_cast<int32_t>(offsetof(FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF, ___UIMode_23)); }
	inline int32_t get_UIMode_23() const { return ___UIMode_23; }
	inline int32_t* get_address_of_UIMode_23() { return &___UIMode_23; }
	inline void set_UIMode_23(int32_t value)
	{
		___UIMode_23 = value;
	}
};


// UnityEngine.Purchasing.InvalidProductTypeException
struct InvalidProductTypeException_tB35ADF6391206219C9716AD362377932B7CD5FC1  : public ReceiptParserException_t5A2EFF39ABA84157A32C64F49892145FAB595516
{
public:

public:
};


// UnityEngine.Purchasing.UDPImpl
struct UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89  : public JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B
{
public:
	// UnityEngine.Purchasing.INativeUDPStore UnityEngine.Purchasing.UDPImpl::m_Bindings
	RuntimeObject* ___m_Bindings_19;
	// System.Object UnityEngine.Purchasing.UDPImpl::m_UserInfo
	RuntimeObject * ___m_UserInfo_20;
	// System.String UnityEngine.Purchasing.UDPImpl::m_LastInitError
	String_t* ___m_LastInitError_21;
	// System.Boolean UnityEngine.Purchasing.UDPImpl::m_Initialized
	bool ___m_Initialized_22;

public:
	inline static int32_t get_offset_of_m_Bindings_19() { return static_cast<int32_t>(offsetof(UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89, ___m_Bindings_19)); }
	inline RuntimeObject* get_m_Bindings_19() const { return ___m_Bindings_19; }
	inline RuntimeObject** get_address_of_m_Bindings_19() { return &___m_Bindings_19; }
	inline void set_m_Bindings_19(RuntimeObject* value)
	{
		___m_Bindings_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserInfo_20() { return static_cast<int32_t>(offsetof(UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89, ___m_UserInfo_20)); }
	inline RuntimeObject * get_m_UserInfo_20() const { return ___m_UserInfo_20; }
	inline RuntimeObject ** get_address_of_m_UserInfo_20() { return &___m_UserInfo_20; }
	inline void set_m_UserInfo_20(RuntimeObject * value)
	{
		___m_UserInfo_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserInfo_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastInitError_21() { return static_cast<int32_t>(offsetof(UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89, ___m_LastInitError_21)); }
	inline String_t* get_m_LastInitError_21() const { return ___m_LastInitError_21; }
	inline String_t** get_address_of_m_LastInitError_21() { return &___m_LastInitError_21; }
	inline void set_m_LastInitError_21(String_t* value)
	{
		___m_LastInitError_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastInitError_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Initialized_22() { return static_cast<int32_t>(offsetof(UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89, ___m_Initialized_22)); }
	inline bool get_m_Initialized_22() const { return ___m_Initialized_22; }
	inline bool* get_address_of_m_Initialized_22() { return &___m_Initialized_22; }
	inline void set_m_Initialized_22(bool value)
	{
		___m_Initialized_22 = value;
	}
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Purchasing.UIFakeStore
struct UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A  : public FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF
{
public:
	// UnityEngine.Purchasing.UIFakeStore/DialogRequest UnityEngine.Purchasing.UIFakeStore::m_CurrentDialog
	DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * ___m_CurrentDialog_24;
	// System.Int32 UnityEngine.Purchasing.UIFakeStore::m_LastSelectedDropdownIndex
	int32_t ___m_LastSelectedDropdownIndex_25;
	// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::UIFakeStoreCanvasPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___UIFakeStoreCanvasPrefab_26;
	// UnityEngine.Canvas UnityEngine.Purchasing.UIFakeStore::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_27;
	// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::m_EventSystem
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_EventSystem_28;
	// System.String UnityEngine.Purchasing.UIFakeStore::m_ParentGameObjectPath
	String_t* ___m_ParentGameObjectPath_29;

public:
	inline static int32_t get_offset_of_m_CurrentDialog_24() { return static_cast<int32_t>(offsetof(UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A, ___m_CurrentDialog_24)); }
	inline DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * get_m_CurrentDialog_24() const { return ___m_CurrentDialog_24; }
	inline DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 ** get_address_of_m_CurrentDialog_24() { return &___m_CurrentDialog_24; }
	inline void set_m_CurrentDialog_24(DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * value)
	{
		___m_CurrentDialog_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentDialog_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastSelectedDropdownIndex_25() { return static_cast<int32_t>(offsetof(UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A, ___m_LastSelectedDropdownIndex_25)); }
	inline int32_t get_m_LastSelectedDropdownIndex_25() const { return ___m_LastSelectedDropdownIndex_25; }
	inline int32_t* get_address_of_m_LastSelectedDropdownIndex_25() { return &___m_LastSelectedDropdownIndex_25; }
	inline void set_m_LastSelectedDropdownIndex_25(int32_t value)
	{
		___m_LastSelectedDropdownIndex_25 = value;
	}

	inline static int32_t get_offset_of_UIFakeStoreCanvasPrefab_26() { return static_cast<int32_t>(offsetof(UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A, ___UIFakeStoreCanvasPrefab_26)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_UIFakeStoreCanvasPrefab_26() const { return ___UIFakeStoreCanvasPrefab_26; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_UIFakeStoreCanvasPrefab_26() { return &___UIFakeStoreCanvasPrefab_26; }
	inline void set_UIFakeStoreCanvasPrefab_26(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___UIFakeStoreCanvasPrefab_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIFakeStoreCanvasPrefab_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_27() { return static_cast<int32_t>(offsetof(UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A, ___m_Canvas_27)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_27() const { return ___m_Canvas_27; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_27() { return &___m_Canvas_27; }
	inline void set_m_Canvas_27(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_28() { return static_cast<int32_t>(offsetof(UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A, ___m_EventSystem_28)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_EventSystem_28() const { return ___m_EventSystem_28; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_EventSystem_28() { return &___m_EventSystem_28; }
	inline void set_m_EventSystem_28(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_EventSystem_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentGameObjectPath_29() { return static_cast<int32_t>(offsetof(UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A, ___m_ParentGameObjectPath_29)); }
	inline String_t* get_m_ParentGameObjectPath_29() const { return ___m_ParentGameObjectPath_29; }
	inline String_t** get_address_of_m_ParentGameObjectPath_29() { return &___m_ParentGameObjectPath_29; }
	inline void set_m_ParentGameObjectPath_29(String_t* value)
	{
		___m_ParentGameObjectPath_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentGameObjectPath_29), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier
struct LifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier::OnDestroyCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnDestroyCallback_4;

public:
	inline static int32_t get_offset_of_OnDestroyCallback_4() { return static_cast<int32_t>(offsetof(LifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2, ___OnDestroyCallback_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnDestroyCallback_4() const { return ___OnDestroyCallback_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnDestroyCallback_4() { return &___OnDestroyCallback_4; }
	inline void set_OnDestroyCallback_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnDestroyCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDestroyCallback_4), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_RaycastResultCache_4)); }
	inline List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_AxisEventData_5)); }
	inline AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_EventSystem_6)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_BaseEventData_7)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_InputOverride_8)); }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_DefaultInput_9)); }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
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


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C  : public BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C, ___m_PointerData_14)); }
	inline Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C, ___m_MouseState_15)); }
	inline MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
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


// UnityEngine.UI.Dropdown
struct Dropdown_tF6331401084B1213CAB10587A6EC81461501930F  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t836CD930F5F0862929A362435417DA9BCD4186F8 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Template_20)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_CaptionText_21)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_CaptionImage_22)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_ItemText_23)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_ItemImage_24)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Options_26)); }
	inline OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_OnValueChanged_27)); }
	inline DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Dropdown_29)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Blocker_30)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Items_31)); }
	inline List_1_t836CD930F5F0862929A362435417DA9BCD4186F8 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t836CD930F5F0862929A362435417DA9BCD4186F8 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t836CD930F5F0862929A362435417DA9BCD4186F8 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_tF6331401084B1213CAB10587A6EC81461501930F_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
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


// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5  : public PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_LastMoveVector_17)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_LastMousePosition_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_MousePosition_20)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
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
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
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
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m09D8ADADD1EA5CCDE1F95447CAFD680DFE93695B_gshared (Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mD6B6F563DF5530F25F812AACBABB00F40665DC40_gshared (Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m8F7880F43C4E281DBF7CA5A9431D5E6DD3797B7E_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB30D7275D69D9EFB8C6645D8D4494778FF64AEE7_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m1D60B8691728928CBD2559D4696E2AED74E86B2D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_mF06A421A80377818D8A65783B8F9B53C000101E4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m263AF496E7EB4748C16C752FDFB519059869BA6A_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Array::Exists<System.Object>(!!0[],System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_Exists_TisRuntimeObject_m48DED5B87E6471BA6C03DB312259DAC47E18D25B_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m35AC6924803D95F2FC0AE8A388AC0C3698334222_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_m748D846E8ED64152A3A2FB7982E4F2CC92BF83B6_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mEDC6536320376F89A62B52D47156AA0BAE93D2C4_gshared (RuntimeObject* ___source0, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_m0343A227B31BEB205D569F05AEAE761094FB1B34_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB938771D2527F09D99453FD856F1E33EBC83F9F2_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mD9405730668E8C5A369C5F533812713E3F0E8010_gshared (Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mDA42018F7419EC3301EBC8FDB8EB6B3016D88209_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_m38064E69DD787BA971B0757788FD11E7239A03B7_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m080A5CE50E989D99A8785C4DEDA7EBB21EC1B5A6_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ProductCollection_WithID_m5699DD6E408024CEDACE1E325F5F41EDFBE2AF02 (ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * __this, String_t* ___id0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithStoreSpecificID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * ProductCollection_WithStoreSpecificID_m7499B0260D5E254281B23E26D8A7B391D266C465 (ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_mFA75EC397E067D09FD66D56B4E7692C3FCC3E960_inline (const RuntimeMethod* method);
// UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.ProfileData::Instance(Uniject.IUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * ProfileData_Instance_mFCC52FA47967EC33027BD371E66EED7E6712CC77 (RuntimeObject* ___util0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.ProfileData::GetProfileIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ProfileData_GetProfileIds_mEFD81319AFA40CF0E9ABA9B03EE3A5DE8DEA52BB (ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.JSONStore::get_disableStoreCatalog()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool JSONStore_get_disableStoreCatalog_mD011B0CD7948C3C02A20A11B89E0D3F0AF66C018_inline (JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m7D728D0EDA2C18E641EDC8661D0BB9524806D9C4 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Purchasing.QueryHelper::ToQueryString(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QueryHelper_ToQueryString_m070F1CD55E410694E0A64C2E682014F8476B5FAB (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___parameters0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Purchasing.FileReference UnityEngine.Purchasing.FileReference::CreateInstance(System.String,UnityEngine.ILogger,Uniject.IUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * FileReference_CreateInstance_mAC367E4FF588A44E05EF9A07096E57F8F61367C9 (String_t* ___filename0, RuntimeObject* ___logger1, RuntimeObject* ___util2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.StoreCatalogImpl::.ctor(UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,System.String,System.String,UnityEngine.Purchasing.FileReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCatalogImpl__ctor_m15B492EDDE14906BDC874046497089B0788DEC27 (StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC * __this, RuntimeObject* ___util0, RuntimeObject* ___logger1, String_t* ___catalogURL2, String_t* ___storeName3, FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * ___fileReference4, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.StoreConfiguration::set_androidStore(UnityEngine.Purchasing.AppStore)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StoreConfiguration_set_androidStore_m50AB5CC063507B6BD1E0DC0F3D6C551AF9457850_inline (StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MiniJson_JsonDecode_m6D167C6EF57761FE7ED9D0746CBED75773CB2911 (String_t* ___json0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m5A987AD183687A89522922177A14425A5A1E4DB9 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_mA573B15329CA2AA7C59367D514D2927FC66217E2 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.StoreConfiguration::.ctor(UnityEngine.Purchasing.AppStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreConfiguration__ctor_m06F6EE9E8C5FFAEB3633A1EAD58CB2241C58F957 (StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 * __this, int32_t ___store0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Type UnityEngine.Purchasing.UDPReflectionUtils::GetTypeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UDPReflectionUtils_GetTypeByName_m76935CD19F4E1661BF41C7531637F5DF99758A25 (String_t* ___typeName0, const RuntimeMethod* method);
// System.Type UnityEngine.Purchasing.StoreServiceInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * StoreServiceInterface_GetClassType_m3C4730B482C0143DE6C28CD61B89AC11905B34E5 (const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Reflection.PropertyInfo UnityEngine.Purchasing.StoreServiceInterface::GetNameProp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * StoreServiceInterface_GetNameProp_mBA089F2910BAEBAD87251C85E372CC841D955684 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_m889C5BF8DEDA7BF043DE7379C7F895B27977856A_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.InvalidProductTypeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProductTypeException__ctor_m46D547119637BAD4178160932D3EE3C008F5F2B0 (InvalidProductTypeException_tB35ADF6391206219C9716AD362377932B7CD5FC1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.SerializationExtensions::TryGetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationExtensions_TryGetString_m936CE13752A8142BE26EEF523AEE0B4D4D0D816A (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, String_t* ___key1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m740F0CA2696F5D04F06456FCBFE08E942B12B4A6 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365 (String_t* ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromDays_m99DCC655C53C2898FF0C41D1DDFE17A749081DDB (double ___value0, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4 (int64_t ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddMonths(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_AddMonths_mFACFF352D9DFA0D4B3AC47BFFEA0564F163D7AEC (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___months0, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d10, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d21, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddYears(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_AddYears_m4D66AFB61758D852CEEFE29D103C88106C6847A2 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_purchaseDate_m917A2D424673A4B3F9E2BEE0E4D9E56EE0059861_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m71B2167B236F9D5304762CC97FE063705633D632_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m00E8EE4F0E8884C2BFFF1331A78D7C17E00F29BA_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_cancellationDate_mB5AAE152691A354CD299A27ABB24B52EFD2FB3FA_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_mC07A1557E17DD7E1E75F43325EE7A2EC214C12BD_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m73006639641517EE893E605E427803A417AB8E3D_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_Subtract_m12814A53110B4E3887A84A911C5F9C1402D98842 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.StoreServiceInterface::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreServiceInterface_GetName_m704F01FBE23B88BCB5B46AABEF184BB682204D72 (const RuntimeMethod* method);
// System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1 (const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetInitMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetInitMethod_m5E6E787525C5734D687FA3D0039435A369580B63 (const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetPurchaseMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetPurchaseMethod_mD59C6526FFC5C528BE73B66ADDD3BB4ADAAF2B64 (const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4 (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m09D8ADADD1EA5CCDE1F95447CAFD680DFE93695B_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mD6B6F563DF5530F25F812AACBABB00F40665DC40 (Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mD6B6F563DF5530F25F812AACBABB00F40665DC40_gshared)(__this, ___object0, ___method1, method);
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetRetrieveProductsMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetRetrieveProductsMethod_m7DDEE509C69CD733F61E0DEC005C2DAB04D0892F (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD9A340ACC5F6C97BF6DBF1645507886FD04CFFA4 (ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared)(__this, method);
}
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::.ctor(System.Collections.Generic.IList`1<!0>)
inline void ReadOnlyCollection_1__ctor_mCBFEF25AD14ABCCABBA7380F8B387EE26E67CD89 (ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m8F7880F43C4E281DBF7CA5A9431D5E6DD3797B7E_gshared)(__this, ___list0, method);
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetFinishTransactionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetFinishTransactionMethod_mB12C7F0BC90F45D3E799F60DC58EDF588ECFE49D (const RuntimeMethod* method);
// System.Type UnityEngine.Purchasing.InventoryInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * InventoryInterface_GetClassType_mE75B99E77E930C6DD1D18967DDBF1034A7B57311 (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>::.ctor()
inline void HashSet_1__ctor_mB3AF1F79F5C362D555D19E4C9928DBB388AF09B7 (HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 *, const RuntimeMethod*))HashSet_1__ctor_mB30D7275D69D9EFB8C6645D8D4494778FF64AEE7_gshared)(__this, method);
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::GetProductListMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * InventoryInterface_GetProductListMethod_m674077437516827A1F2FAA9FD80F934036FC5230 (const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisRuntimeObject_m1D60B8691728928CBD2559D4696E2AED74E86B2D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m1D60B8691728928CBD2559D4696E2AED74E86B2D_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_mF06A421A80377818D8A65783B8F9B53C000101E4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mF06A421A80377818D8A65783B8F9B53C000101E4_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetPriceProp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * ProductInfoInterface_GetPriceProp_m820DC77391ED01E7C43CA9586BD1DBBE2B048B7C (const RuntimeMethod* method);
// System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetTitleProp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * ProductInfoInterface_GetTitleProp_mC0F27F72EB31FD01E97BCAD30708E147A160BCD7 (const RuntimeMethod* method);
// System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetDescriptionProp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * ProductInfoInterface_GetDescriptionProp_m924675700E8D77D9EE7B6C75E19CDF6FC763C673 (const RuntimeMethod* method);
// System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetCurrencyProp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * ProductInfoInterface_GetCurrencyProp_m046BB22869D7CF49FC00206710F23C3B072A5AB5 (const RuntimeMethod* method);
// System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetPriceAmountMicrosProp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * ProductInfoInterface_GetPriceAmountMicrosProp_m0640B6CC3E5E8981A60C5D59E11169478D92F2D0 (const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mECE2EDC28EBA5F0B88702C15D0A3A1DABEE8D6A1 (int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m6AEED1DCCFC59CB0AEBEC253F049953427BA4912 (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Decimal_op_Division_m5A14CCDBC929DEB14F9AC195C7456DF0AE76F514 (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___d10, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___d21, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductMetadata__ctor_mF3BD4FBBF41E5F4F7335D0DC07EA91214F6A5598 (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, String_t* ___priceString0, String_t* ___title1, String_t* ___description2, String_t* ___currencyCode3, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___localizedPrice4, const RuntimeMethod* method);
// System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetProductIdProp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * ProductInfoInterface_GetProductIdProp_mF85F802C43AA899966346E5685F31B8EA7744C52 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductDescription__ctor_m5788E91EBC4C45696FC67D93B3CFD20FAE963E9B (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * __this, String_t* ___id0, ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___metadata1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::HasPurchaseMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * InventoryInterface_HasPurchaseMethod_m48B17F37F259E5F0AEAAA5AC6202BE230FFEAF77 (const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::GetPurchaseInfoMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * InventoryInterface_GetPurchaseInfoMethod_mDD77044A34A5B360B3ADBA6AB0FC8A847FA315BC (const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UDPBindings::StringPropertyToDictionary(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UDPBindings_StringPropertyToDictionary_m34700519458DCC72CC62E02398E2A4603B8EC2A0 (RuntimeObject * ___info0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m9C50ED57AD3C17DABBCF5791222C894E43C0CF75 (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductDescription__ctor_mCF9F28AC1C31FA18B4D520B0C1F83676F8BF6195 (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * __this, String_t* ___id0, ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___metadata1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>::Add(!0)
inline bool HashSet_1_Add_m9C5CBADE58A9A157DAC8673C37D88FECF2A2365F (HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 * __this, ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 *, ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *, const RuntimeMethod*))HashSet_1_Add_m263AF496E7EB4748C16C752FDFB519059869BA6A_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34 (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472 (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDescs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONSerializer_SerializeProductDescs_m5E15C30DA843C09D36C4F6B4E22456E6A182D0BA (RuntimeObject* ___products0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D (Type_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m213C1CF99C5564F985AC0A9282409C879E2C7457 (U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE746EF9212D5F61E7F68240BE31C69D8CACFDDC3 (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mD6B6F563DF5530F25F812AACBABB00F40665DC40_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m358BF1C9C0944309C79BC3D0CE902AFAF87CCCD8 (U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_GetString_m42E774E4F8E6A253C3A65D1F295542A19F0EE3A5 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore__ctor_mD682BBF25C5FE81FBC84F5D2001E224CF05CCFA5 (JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * MiniJsonExtensions_HashtableFromJson_mA595610C893A7E17982832DE2CEA5B5B33818056 (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UserInfoInterface_GetClassType_mE36B1BC3E79BFA8614D5EAE48997221C223A715B (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_DictionaryToStringProperty_mDC95F9B4482CD468C63E53B336D96D4F76143FD2 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, RuntimeObject * ___info1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_mF139C5E119C82402C67514832326275DBA7067DA (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseFailureDescription__ctor_mADD0068215835A69610F2B0934E9ABCE68107354 (PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * __this, String_t* ___productId0, int32_t ___reason1, String_t* ___message2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mB2AFE00939E25519A9A547B432B339139688A57C (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(!0)
inline Type_t * Dictionary_2_get_Item_m61BAD2DCD360856F59B04B784D0F1FD2A2D29A2A (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> UnityEngine.Purchasing.UDPReflectionUtils::GetAllAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPReflectionUtils_GetAllAssemblies_m6E12143E171ABE7E79AADB14E9698AA013BC073C (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m9823C800C6FED13159D40DAAA4795570D2FAE8A6 (U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m17CA8384751563EEAE48688727FFCF8502F59551 (Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Array::Exists<System.String>(!!0[],System.Predicate`1<!!0>)
inline bool Array_Exists_TisString_t_mE30BE3FC3C208B6A35AFB0E2A46E8CFCCD13C99F (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___array0, Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1 * ___match1, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1 *, const RuntimeMethod*))Array_Exists_TisRuntimeObject_m48DED5B87E6471BA6C03DB312259DAC47E18D25B_gshared)(___array0, ___match1, method);
}
// System.Collections.Generic.IEnumerable`1<System.Type> UnityEngine.Purchasing.UDPReflectionUtils::GetTypes(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPReflectionUtils_GetTypes_m5F15A5EA649AA92299887D676D17788F1D616D6F (Assembly_t * ___assembly0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m60B22E9A8666DB6E008158D80A157634C3192837 (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * __this, String_t* ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 *, String_t*, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0 (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23 (AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mD9362798CAFBCC0EC84A18FFA58185FD60249EF0 (Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * __this, Assembly_t * ___key0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 *, Assembly_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F**, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mC117EF735EF8C5ACA16F81A21C88F06F8E0A350A (Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * __this, Assembly_t * ___key0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 *, Assembly_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]>::.ctor()
inline void Dictionary_2__ctor_mDBCA5914D743B21AF6FDFE61315BE5B44FCDA9F3 (Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_m5A51097DB031E5558B864F77AA2BB488B23736F5 (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.FakeStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeStore__ctor_m3AB6D878CB8D1C4CDFB930CD136B369F3433C3C3 (FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_IsShowingDialog_m111FF741668A3DABF14A60A9726C80D140021CD0 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore/DialogRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogRequest__ctor_mC9EB7A725A054BE3EC60F8D14FAB0DDEE6E33F19 (DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_InstantiateDialog_m2A034F285F29B8CEF55C4782DDFF5BE3D8FCF08A (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1 (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m5EA55BE80E8E0FB0551D6C16C2BC57A726758C9A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Canvas>(!!0)
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Object_Instantiate_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m65B1DDB2A33E146C2F5006F6613DC2B243475C98 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___original0, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared)(___original0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier>()
inline LifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2 * GameObject_AddComponent_TisLifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2_m9EEFB6E4EA02CF046313922460E5162CCDECC690 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  LifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_mFDC6858AC164D8FD294829103D93ED606CDE939A (const RuntimeMethod* method)
{
	return ((  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m20BE06980A232E1D64016957059A9DD834173F68 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___components1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m1562E9B9218AF5A21D0D838E830E1245A737F677 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UIFakeStore_GetOkayButtonText_m10765D1A2AF34015874DF8D79795370875168F64 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UIFakeStore_GetCancelButtonText_m169D92F9F3CCD926F9D469C886ABD750E7AF550F (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83 * Dropdown_get_options_mE95E87D4EA905E9769CE8AC1CD1D9DB86A34F823 (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Clear()
inline void List_1_Clear_m0F6A2806D11105299DC8E4D83E06D49BAABB8ABE (List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_inline (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m8AA4FDEB8771F714C90DF651743B77E0C75DEC00 (OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(!0)
inline void List_1_Add_mE0B46236A82E92B7F76C0F3A94ABBD0F4625A77C (List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83 * __this, OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83 *, OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4 (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::RefreshShownValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_RefreshShownValue_m310DF4ABCFE31C74153AAE3874B40DDF3D6959E1 (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * UIFakeStore_GetOkayButton_mFA4103ECF0E8BB3F0CEF5735EB32858F880C6E9B (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * UIFakeStore_GetCancelButton_mD4BDD5C94EA6B5A31361863E99272C14C07634F0 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m35AC6924803D95F2FC0AE8A388AC0C3698334222 (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m35AC6924803D95F2FC0AE8A388AC0C3698334222_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967 (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UIFakeStore_GetDropdownContainerGameObject_mBD36398BEE313882E80EB1B81D79E6DB1F8D7AB3 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UIFakeStore_GetCancelButtonGameObject_mAC85CED50F0CA7D71982644618D9423F1341A624 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<UnityEngine.Purchasing.ProductDefinition>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_mF32335274B246A4E4D14DF74E057DA86AA3BB4B3 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_m748D846E8ED64152A3A2FB7982E4F2CC92BF83B6_gshared)(___source0, ___count1, method);
}
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCE8D097485C259C0294A0C8D6A2134782DBC3055 (Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Purchasing.ProductDefinition,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisString_t_mDCB16E76F44752CD2604A121727880DEE335250A (RuntimeObject* ___source0, Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mEDC6536320376F89A62B52D47156AA0BAE93D2C4_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enumerable_ToArray_TisString_t_m34F0EB317BEC1783F5D3E46852744966D246040C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m0343A227B31BEB205D569F05AEAE761094FB1B34_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* ___separator0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mBC0899C994D3FA5725FC61B8E104F2D5DF8B0C86 (ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mB938771D2527F09D99453FD856F1E33EBC83F9F2_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * GameObject_GetComponent_TisDropdown_tF6331401084B1213CAB10587A6EC81461501930F_mCEDADB496C533D2B1022FE5C0B5D68493866A5E2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_mD9405730668E8C5A369C5F533812713E3F0E8010 (Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 *, bool, int32_t, const RuntimeMethod*))Action_2_Invoke_mD9405730668E8C5A369C5F533812713E3F0E8010_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CloseDialog_m4DDF7697C7D910950ADAE661CE0876EB72E7C86B (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_OkayButtonClicked_m08943589D1FD46D5F9C84C780B14B41CCB84AAB0 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CancelButtonClicked_mB6A00EF6EC31658ADEA04963C173759305CD7259 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UIFakeStore_DropdownValueChanged_m9EF23C99DDC1BBFF8A7DEFD5CD8FA4608187CF78_inline (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, int32_t ___selectedItem0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE8A1A9ED594EC570CFF90D8BA55FBF18D1A21E37 (U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8 (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * __this, String_t* ___className0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass UnityEngine.Purchasing.UnityActivity::GetUnityPlayerClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * UnityActivity_GetUnityPlayerClass_m7588B6CF407A7A68A6BB8E34BEB2FA9414288D76 (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m944E5987B38F1229EB3E8122E030D0439D4513B0 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mDA42018F7419EC3301EBC8FDB8EB6B3016D88209_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m9ACBA98FE02BCB2477828B935D704C2DC09CE2A0 (U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m5EAE53C9E2A8893FD8FEA710378D22C162A0FDEA (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_m38064E69DD787BA971B0757788FD11E7239A03B7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Func`2<UnityEngine.AndroidJavaObject,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2E1758C82AEE3A0E3D37D20B713B65E736AE599D (Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<UnityEngine.AndroidJavaObject>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * Enumerable_FirstOrDefault_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m8E71188883E2E0B862A1FBDD4FDF14555D7F0745 (RuntimeObject* ___source0, Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE * ___predicate1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (RuntimeObject*, Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m080A5CE50E989D99A8785C4DEDA7EBB21EC1B5A6_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.Purchasing.Models.GooglePurchase::.ctor(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePurchase__ctor_mA2CBA9EB30E37D506569B1DFB620DEEB4C55AFFB (GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2 * __this, AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___purchase0, AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___skuDetails1, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::FormatPayload(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleReceiptEncoder_FormatPayload_m3C6EA9AF69D0E497A7AD5D29BFCA0FC9CAAE2612 (String_t* ___json0, String_t* ___signature1, String_t* ___skuDetails2, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJson_JsonEncode_m4A4910E62F31DAA87FE21E7CF3FF852DAB99C11D (RuntimeObject * ___json0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertSkusDetailsToProducts(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * SkuDetailsConverter_ConvertSkusDetailsToProducts_m5DE2D6F2EDF30DD715212E1ACC9358B6F2E982E3 (List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * ___skus0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>::Invoke(!0)
inline void Action_1_Invoke_mB78FBC3CDBB6D37CCC0B793459E21E9C76E9C95B (Action_1_t38FBBB64ACD76C48DEED6E7A2C77CD902E051BDF * __this, List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t38FBBB64ACD76C48DEED6E7A2C77CD902E051BDF *, List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>::.ctor()
inline void List_1__ctor_m232A852F11236B75DCC6E0FC84755225698710F6 (List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::GetEnumerator()
inline Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA  List_1_GetEnumerator_m1B6754118A88FC1D2E5BB5FAF3E3B1F002530808 (List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA  (*) (List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::get_Current()
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * Enumerator_get_Current_m09B9E1F07A03C37F57CCA1D9DF7A03974077ED7B_inline (Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA * __this, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ToListProducts(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * SkuDetailsConverter_ToListProducts_mA38776AC9D8F633ADA637808F1E1EE77DAD93470 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___skusDetails0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m7299DD85C9C737B3A35046AC5640B4D22070B177 (List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::MoveNext()
inline bool Enumerator_MoveNext_m9C9B41634596824D348FC05B7C4AA0E4F4F8FD29 (Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::Dispose()
inline void Enumerator_Dispose_m5668993760266C4D29C0F845EC7B6D7D6E613C82 (Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObjectWrapper__ctor_m2BD984F4526C765405E9E15B8D71C7B7EE4F81CF (AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413 * __this, AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___obj0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Extension.ProductDescription UnityEngine.Purchasing.Utils.SkuDetailsConverter::BuildProductDescription(UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * SkuDetailsConverter_BuildProductDescription_m71E6F0C1E5DCD86A48471FFB9B008AD7E228BE82 (RuntimeObject* ___skuDetails0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>::Add(!0)
inline void List_1_Add_mE66F416F525E3A70E26D4284CAC61A4B1872D0E5 (List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * __this, ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 *, ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mF93A2E5C1006C59187BA8F1F17E66CEC2D8F7FCE (double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleProductMetadata__ctor_mE925F2291403293B4DB77DADB548DC07D870C349 (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___priceString0, String_t* ___title1, String_t* ___description2, String_t* ___currencyCode3, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___localizedPrice4, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_originalJson(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_originalJson_m450F96D8080210167382D47128FCE127E0F0C551_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPrice(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_introductoryPrice_mB8CFE54561E665C18586FF250653AED873E2FB6D_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_subscriptionPeriod(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_subscriptionPeriod_m0F2FB78464C4E7EFF8D1FEE014E1709CD71ABE7E_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_freeTrialPeriod(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_freeTrialPeriod_mF8DB06A494AB72E51CA429376423B19D1A79EEED_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPricePeriod(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_introductoryPricePeriod_mCE1A4A279843EF6E153FC6652AAB351005065640_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPriceCycles(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_introductoryPriceCycles_m69627B6275460264E3FAE11DB42DFC25670D1174_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.AbstractStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractStore__ctor_m3DCD589B81128354031B3F5A542C19CD244049E0 (AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD5D471C649649A5C20B05AB73CC591A1973DB95F (Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.Purchasing.ProductDefinition>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_mB5E86AF9C61B8A4856C784CDA1729EA9C18A2DA4 (RuntimeObject* ___source0, Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m906D4708057CC961E65FE23C780018EE8E8C5702 (Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_m1AFD736097F79EC9A2123C4253A632A4012509FC (RuntimeObject* ___source0, Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mEDC6536320376F89A62B52D47156AA0BAE93D2C4_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Purchasing.Default.WinProductDescription>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t2E574C9651C33313D869CB2D905339E1047FE821 * Enumerable_ToList_TisWinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_mFF709F1DAD690C4EEE43B45B936D3007ED6E8274 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t2E574C9651C33313D869CB2D905339E1047FE821 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mF06A421A80377818D8A65783B8F9B53C000101E4_gshared)(___source0, method);
}
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_init_m011F5C8FB9EECBDB2B3904390DEF04DB83B94AB7 (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, int32_t ___delay0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m213C70881DED6069EB33CC15A4E820CBE8D2CA8D (U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * __this, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_mD2BEAABCBAC5D1AF62D0F8E01B2DCD2B725B2C2C (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * __this, int32_t ___lo0, int32_t ___mid1, int32_t ___hi2, bool ___isNegative3, uint8_t ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_m4F63EF3D6687F8B1B81F586EE8D56C581CE6CC26 (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::.ctor(UnityEngine.Purchasing.StandardPurchasingModule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftConfiguration__ctor_mD80B7A2CD2981A0C155FB53B170DB5F01ED3A47C (MicrosoftConfiguration_t645352385165DE50F0AA258086DB4AF85FC5C92C * __this, StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * ___module0, const RuntimeMethod* method)
{
	{
		// public MicrosoftConfiguration (StandardPurchasingModule module)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.module = module;
		StandardPurchasingModule_t831AF51518F4B4523B464966C49BCB8FE0B4D5B0 * L_0 = ___module0;
		__this->set_module_0(L_0);
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
// System.String UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::get_storeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreInstance_get_storeName_mCD3821F11FF2CE262EE5B6D76D133E540A90EA24 (StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0 * __this, const RuntimeMethod* method)
{
	{
		// internal string storeName { get; }
		String_t* L_0 = __this->get_U3CstoreNameU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StoreInstance_get_instance_m5350C795A082C0AB64FBCE2F6AAFD516FD76F070 (StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0 * __this, const RuntimeMethod* method)
{
	{
		// internal IStore instance { get; }
		RuntimeObject* L_0 = __this->get_U3CinstanceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::.ctor(System.String,UnityEngine.Purchasing.Extension.IStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreInstance__ctor_mB7233CA0882F90E40DD0A2E08A3D7948F0AF2C57 (StoreInstance_t32B0AC841BE197860A217FF998207B47DD2004E0 * __this, String_t* ___name0, RuntimeObject* ___instance1, const RuntimeMethod* method)
{
	{
		// internal StoreInstance (string name, IStore instance)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.storeName = name;
		String_t* L_0 = ___name0;
		__this->set_U3CstoreNameU3Ek__BackingField_0(L_0);
		// this.instance = instance;
		RuntimeObject* L_1 = ___instance1;
		__this->set_U3CinstanceU3Ek__BackingField_1(L_1);
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
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.StoreCallbackExtensionMethods::FindProductById(UnityEngine.Purchasing.Extension.IStoreCallback,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * StoreCallbackExtensionMethods_FindProductById_m1909C13555E775ECD33109F75C2D7C5480880FF5 (RuntimeObject* ___storeCallback0, String_t* ___sku1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreCallbackExtensionMethods_FindProductById_m1909C13555E775ECD33109F75C2D7C5480880FF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * G_B4_0 = NULL;
	Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * G_B3_0 = NULL;
	{
		// if (sku != null && storeCallback.products != null)
		String_t* L_0 = ___sku1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_1 = ___storeCallback0;
		NullCheck(L_1);
		ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * L_2 = InterfaceFuncInvoker0< ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.Extension.IStoreCallback::get_products() */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return storeCallback.products.WithID(sku) ?? storeCallback.products.WithStoreSpecificID(sku);
		RuntimeObject* L_3 = ___storeCallback0;
		NullCheck(L_3);
		ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * L_4 = InterfaceFuncInvoker0< ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.Extension.IStoreCallback::get_products() */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_3);
		String_t* L_5 = ___sku1;
		NullCheck(L_4);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_6 = ProductCollection_WithID_m5699DD6E408024CEDACE1E325F5F41EDFBE2AF02(L_4, L_5, /*hidden argument*/NULL);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_8 = ___storeCallback0;
		NullCheck(L_8);
		ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * L_9 = InterfaceFuncInvoker0< ProductCollection_t7BE71F2FA5BE05F5DA13EA701B513861516F4C07 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.Extension.IStoreCallback::get_products() */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_8);
		String_t* L_10 = ___sku1;
		NullCheck(L_9);
		Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 * L_11 = ProductCollection_WithStoreSpecificID_m7499B0260D5E254281B23E26D8A7B391D266C465(L_9, L_10, /*hidden argument*/NULL);
		G_B4_0 = L_11;
	}

IL_0027:
	{
		return G_B4_0;
	}

IL_0028:
	{
		// return null;
		return (Product_t830A133A97BEA12C3CD696853098A295D99A6DE4 *)NULL;
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
// UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.StoreCatalogImpl::CreateInstance(System.String,System.String,UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,Uniject.IUtil,UnityEngine.Purchasing.JSONStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC * StoreCatalogImpl_CreateInstance_m577E154C528A81AE523932492C0E5E1F2482594C (String_t* ___storeName0, String_t* ___baseUrl1, RuntimeObject* ___webUtil2, RuntimeObject* ___logger3, RuntimeObject* ___util4, JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B * ___baseStore5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreCatalogImpl_CreateInstance_m577E154C528A81AE523932492C0E5E1F2482594C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	String_t* V_1 = NULL;
	FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * V_2 = NULL;
	{
		// if ((String.IsNullOrEmpty(storeName))||(String.IsNullOrEmpty(baseUrl)))
		String_t* L_0 = ___storeName0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___baseUrl1;
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return null;
		return (StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC *)NULL;
	}

IL_0012:
	{
		// if (logger == null)
		RuntimeObject* L_4 = ___logger3;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		// logger = UnityEngine.Debug.unityLogger;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = Debug_get_unityLogger_mFA75EC397E067D09FD66D56B4E7692C3FCC3E960_inline(/*hidden argument*/NULL);
		___logger3 = L_5;
	}

IL_001c:
	{
		// profile = ProfileData.Instance(util);
		RuntimeObject* L_6 = ___util4;
		ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * L_7 = ProfileData_Instance_mFCC52FA47967EC33027BD371E66EED7E6712CC77(L_6, /*hidden argument*/NULL);
		((StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC_StaticFields*)il2cpp_codegen_static_fields_for(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC_il2cpp_TypeInfo_var))->set_profile_5(L_7);
		// Dictionary<string, object> queryParams = profile.GetProfileIds();
		ProfileData_tB832ABA7BC6DAF9541FE6AF686D263CFAFDE516F * L_8 = ((StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC_StaticFields*)il2cpp_codegen_static_fields_for(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC_il2cpp_TypeInfo_var))->get_profile_5();
		NullCheck(L_8);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_9 = ProfileData_GetProfileIds_mEFD81319AFA40CF0E9ABA9B03EE3A5DE8DEA52BB(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// if((baseStore != null) && baseStore.disableStoreCatalog)
		JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B * L_10 = ___baseStore5;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B * L_11 = ___baseStore5;
		NullCheck(L_11);
		bool L_12 = JSONStore_get_disableStoreCatalog_mD011B0CD7948C3C02A20A11B89E0D3F0AF66C018_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		// queryParams.Add("storeDisabled", "true");
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_13 = V_0;
		NullCheck(L_13);
		Dictionary_2_Add_m7D728D0EDA2C18E641EDC8661D0BB9524806D9C4(L_13, _stringLiteral06632E680E3B8A6EC9B2FADF761850D70436C3C5, _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB, /*hidden argument*/Dictionary_2_Add_m7D728D0EDA2C18E641EDC8661D0BB9524806D9C4_RuntimeMethod_var);
	}

IL_0050:
	{
		// var storeCatalogURL = baseUrl + "/catalog" + queryParams.ToQueryString();
		String_t* L_14 = ___baseUrl1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_15 = V_0;
		String_t* L_16 = QueryHelper_ToQueryString_m070F1CD55E410694E0A64C2E682014F8476B5FAB(L_15, /*hidden argument*/NULL);
		String_t* L_17 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_14, _stringLiteralB348A5B39F26DF673A82873C5069EA947D0CE1A0, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// var fileReference = FileReference.CreateInstance(kFileName, logger, util);
		RuntimeObject* L_18 = ___logger3;
		RuntimeObject* L_19 = ___util4;
		FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * L_20 = FileReference_CreateInstance_mAC367E4FF588A44E05EF9A07096E57F8F61367C9(_stringLiteral4F188D35DBEE4686EE3FC7AE3A910C11655DCA88, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// return new StoreCatalogImpl(webUtil, logger, storeCatalogURL, storeName, fileReference);
		RuntimeObject* L_21 = ___webUtil2;
		RuntimeObject* L_22 = ___logger3;
		String_t* L_23 = V_1;
		String_t* L_24 = ___storeName0;
		FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * L_25 = V_2;
		StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC * L_26 = (StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC *)il2cpp_codegen_object_new(StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC_il2cpp_TypeInfo_var);
		StoreCatalogImpl__ctor_m15B492EDDE14906BDC874046497089B0788DEC27(L_26, L_21, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void UnityEngine.Purchasing.StoreCatalogImpl::.ctor(UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,System.String,System.String,UnityEngine.Purchasing.FileReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCatalogImpl__ctor_m15B492EDDE14906BDC874046497089B0788DEC27 (StoreCatalogImpl_tEDACBFBA2E93FA0EF3B4AE549F0F5F34170877EC * __this, RuntimeObject* ___util0, RuntimeObject* ___logger1, String_t* ___catalogURL2, String_t* ___storeName3, FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * ___fileReference4, const RuntimeMethod* method)
{
	{
		// internal StoreCatalogImpl(IAsyncWebUtil util, ILogger logger, string catalogURL, string storeName, FileReference fileReference)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_AsyncUtil = util;
		RuntimeObject* L_0 = ___util0;
		__this->set_m_AsyncUtil_0(L_0);
		// m_Logger = logger;
		RuntimeObject* L_1 = ___logger1;
		__this->set_m_Logger_1(L_1);
		// m_CatalogURL = catalogURL;
		String_t* L_2 = ___catalogURL2;
		__this->set_m_CatalogURL_2(L_2);
		// m_StoreName = storeName;
		String_t* L_3 = ___storeName3;
		__this->set_m_StoreName_3(L_3);
		// m_cachedStoreCatalogReference = fileReference;
		FileReference_t7F813EACF7521D7623B24BA403CC5D79A02DE56F * L_4 = ___fileReference4;
		__this->set_m_cachedStoreCatalogReference_4(L_4);
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
// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StoreConfiguration::get_androidStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StoreConfiguration_get_androidStore_m33B9E4CACB602EE09E9A977E887D6ADF23A6DD39 (StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 * __this, const RuntimeMethod* method)
{
	{
		// public AppStore androidStore { get; private set; }
		int32_t L_0 = __this->get_U3CandroidStoreU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.StoreConfiguration::set_androidStore(UnityEngine.Purchasing.AppStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreConfiguration_set_androidStore_m50AB5CC063507B6BD1E0DC0F3D6C551AF9457850 (StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AppStore androidStore { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CandroidStoreU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.StoreConfiguration::.ctor(UnityEngine.Purchasing.AppStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreConfiguration__ctor_m06F6EE9E8C5FFAEB3633A1EAD58CB2241C58F957 (StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 * __this, int32_t ___store0, const RuntimeMethod* method)
{
	{
		// public StoreConfiguration(AppStore store) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// androidStore = store;
		int32_t L_0 = ___store0;
		StoreConfiguration_set_androidStore_m50AB5CC063507B6BD1E0DC0F3D6C551AF9457850_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.StoreConfiguration UnityEngine.Purchasing.StoreConfiguration::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 * StoreConfiguration_Deserialize_m447CBC97DD1949D75A7D29C93C3BA82A33CACC93 (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreConfiguration_Deserialize_m447CBC97DD1949D75A7D29C93C3BA82A33CACC93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// var dic = (Dictionary<string, object>) MiniJson.JsonDecode(json);
		String_t* L_0 = ___json0;
		RuntimeObject * L_1 = MiniJson_JsonDecode_m6D167C6EF57761FE7ED9D0746CBED75773CB2911(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)CastclassClass((RuntimeObject*)L_1, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var));
		// var key = (string)dic ["androidStore"];
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Dictionary_2_get_Item_m5A987AD183687A89522922177A14425A5A1E4DB9(L_2, _stringLiteralD846877EC9A537864A43E4C372339A9FB5C71261, /*hidden argument*/Dictionary_2_get_Item_m5A987AD183687A89522922177A14425A5A1E4DB9_RuntimeMethod_var);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		// if (!Enum.IsDefined (typeof(AppStore), key))
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (AppStore_tE65D022896B28CFD34753FF40FC7BB756B689AEE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		String_t* L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		bool L_7 = Enum_IsDefined_mA573B15329CA2AA7C59367D514D2927FC66217E2(L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		// store = AppStore.GooglePlay;
		V_1 = 1;
		goto IL_0059;
	}

IL_0033:
	{
		// store = (AppStore) Enum.Parse(typeof(AppStore), (string) dic["androidStore"], true);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (AppStore_tE65D022896B28CFD34753FF40FC7BB756B689AEE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = Dictionary_2_get_Item_m5A987AD183687A89522922177A14425A5A1E4DB9(L_10, _stringLiteralD846877EC9A537864A43E4C372339A9FB5C71261, /*hidden argument*/Dictionary_2_get_Item_m5A987AD183687A89522922177A14425A5A1E4DB9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_12 = Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7(L_9, ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)), (bool)1, /*hidden argument*/NULL);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_12, AppStore_tE65D022896B28CFD34753FF40FC7BB756B689AEE_il2cpp_TypeInfo_var))));
	}

IL_0059:
	{
		// return new StoreConfiguration(store);
		int32_t L_13 = V_1;
		StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 * L_14 = (StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 *)il2cpp_codegen_object_new(StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8_il2cpp_TypeInfo_var);
		StoreConfiguration__ctor_m06F6EE9E8C5FFAEB3633A1EAD58CB2241C58F957(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
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
// System.Type UnityEngine.Purchasing.StoreServiceInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * StoreServiceInterface_GetClassType_m3C4730B482C0143DE6C28CD61B89AC11905B34E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreServiceInterface_GetClassType_m3C4730B482C0143DE6C28CD61B89AC11905B34E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_typeCache == null)
		Type_t * L_0 = ((StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_StaticFields*)il2cpp_codegen_static_fields_for(StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// s_typeCache = UDPReflectionUtils.GetTypeByName(UDPReflectionConsts.k_StoreServiceType);
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
		Type_t * L_2 = UDPReflectionUtils_GetTypeByName_m76935CD19F4E1661BF41C7531637F5DF99758A25(_stringLiteral83BFA5E686CDB7B1182322585E1C688C9B988732, /*hidden argument*/NULL);
		((StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_StaticFields*)il2cpp_codegen_static_fields_for(StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_il2cpp_TypeInfo_var))->set_s_typeCache_0(L_2);
	}

IL_001c:
	{
		// return s_typeCache;
		Type_t * L_3 = ((StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_StaticFields*)il2cpp_codegen_static_fields_for(StoreServiceInterface_t9638FB7AF4A2FACE7C4667AB434CD1D405AF4320_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		return L_3;
	}
}
// System.Reflection.PropertyInfo UnityEngine.Purchasing.StoreServiceInterface::GetNameProp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * StoreServiceInterface_GetNameProp_mBA089F2910BAEBAD87251C85E372CC841D955684 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreServiceInterface_GetNameProp_mBA089F2910BAEBAD87251C85E372CC841D955684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetClassType().GetProperty(UDPReflectionConsts.k_StoreServiceNameProp, UDPReflectionUtils.k_StaticBindingFlags);
		Type_t * L_0 = StoreServiceInterface_GetClassType_m3C4730B482C0143DE6C28CD61B89AC11905B34E5(/*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInfo_t * L_1 = Type_GetProperty_m724FAA955DCE10E0C46A9485BCEA32C1CE608130(L_0, _stringLiteral18C9D66E71D49DE526535192BE7094812EEB6DB6, ((int32_t)24), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UnityEngine.Purchasing.StoreServiceInterface::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreServiceInterface_GetName_m704F01FBE23B88BCB5B46AABEF184BB682204D72 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreServiceInterface_GetName_m704F01FBE23B88BCB5B46AABEF184BB682204D72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (string)GetNameProp().GetValue(null, null);
		PropertyInfo_t * L_0 = StoreServiceInterface_GetNameProp_mBA089F2910BAEBAD87251C85E372CC841D955684(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject * L_1 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_0, NULL, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
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
// System.Void UnityEngine.Purchasing.SubscriptionInfo::.ctor(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionInfo__ctor_m956F158A7D795EF29469ED101104321E027D074A (SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * __this, AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * ___r0, String_t* ___intro_json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubscriptionInfo__ctor_m956F158A7D795EF29469ED101104321E027D074A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_9;
	memset((&V_9), 0, sizeof(V_9));
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_10;
	memset((&V_10), 0, sizeof(V_10));
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B21_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B20_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B22_0 = NULL;
	int32_t G_B23_0 = 0;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B23_1 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B25_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B26_1 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B28_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B27_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B29_0 = NULL;
	int32_t G_B30_0 = 0;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B30_1 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B32_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B33_1 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B36_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B34_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B35_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B37_0 = NULL;
	int32_t G_B38_0 = 0;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B38_1 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B40_0 = NULL;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B39_0 = NULL;
	int32_t G_B41_0 = 0;
	SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * G_B41_1 = NULL;
	{
		// public SubscriptionInfo(AppleInAppPurchaseReceipt r, string intro_json) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// var productType = (AppleStoreProductType) Enum.Parse(typeof(AppleStoreProductType), r.productType.ToString());
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (AppleStoreProductType_t5E9C5378D75CDCD4644F2D769DC60BE11AB98A6F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_2 = ___r0;
		NullCheck(L_2);
		int32_t L_3 = AppleInAppPurchaseReceipt_get_productType_m889C5BF8DEDA7BF043DE7379C7F895B27977856A_inline(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		String_t* L_4 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3(L_1, L_4, /*hidden argument*/NULL);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_5, AppleStoreProductType_t5E9C5378D75CDCD4644F2D769DC60BE11AB98A6F_il2cpp_TypeInfo_var))));
		// if (productType == AppleStoreProductType.Consumable || productType == AppleStoreProductType.NonConsumable) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = V_0;
		if (L_7)
		{
			goto IL_0036;
		}
	}

IL_0030:
	{
		// throw new InvalidProductTypeException();
		InvalidProductTypeException_tB35ADF6391206219C9716AD362377932B7CD5FC1 * L_8 = (InvalidProductTypeException_tB35ADF6391206219C9716AD362377932B7CD5FC1 *)il2cpp_codegen_object_new(InvalidProductTypeException_tB35ADF6391206219C9716AD362377932B7CD5FC1_il2cpp_TypeInfo_var);
		InvalidProductTypeException__ctor_m46D547119637BAD4178160932D3EE3C008F5F2B0(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, SubscriptionInfo__ctor_m956F158A7D795EF29469ED101104321E027D074A_RuntimeMethod_var);
	}

IL_0036:
	{
		// if (!string.IsNullOrEmpty(intro_json)) {
		String_t* L_9 = ___intro_json1;
		bool L_10 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_01c7;
		}
	}
	{
		// var intro_wrapper = (Dictionary<string, object>) MiniJson.JsonDecode(intro_json);
		String_t* L_11 = ___intro_json1;
		RuntimeObject * L_12 = MiniJson_JsonDecode_m6D167C6EF57761FE7ED9D0746CBED75773CB2911(L_11, /*hidden argument*/NULL);
		V_3 = ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)CastclassClass((RuntimeObject*)L_12, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var));
		// var nunit = -1;
		V_4 = (-1);
		// var unit = SubscriptionPeriodUnit.NotAvailable;
		V_5 = 4;
		// this.introductory_price = intro_wrapper.TryGetString("introductoryPrice") + intro_wrapper.TryGetString("introductoryPriceLocale");
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_13 = V_3;
		String_t* L_14 = SerializationExtensions_TryGetString_m936CE13752A8142BE26EEF523AEE0B4D4D0D816A(L_13, _stringLiteralDDA311F79A1B844489695C2C2BEFE0C0A5A83928, /*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_15 = V_3;
		String_t* L_16 = SerializationExtensions_TryGetString_m936CE13752A8142BE26EEF523AEE0B4D4D0D816A(L_15, _stringLiteralFF5DD0E304B39EF8CC99D49375CDF1C3C3FF885E, /*hidden argument*/NULL);
		String_t* L_17 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_14, L_16, /*hidden argument*/NULL);
		__this->set_introductory_price_11(L_17);
		// if (string.IsNullOrEmpty(this.introductory_price)) {
		String_t* L_18 = __this->get_introductory_price_11();
		bool L_19 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008e;
		}
	}
	{
		// this.introductory_price = "not available";
		__this->set_introductory_price_11(_stringLiteral5F2391220833847E88FA717EB295A329DD3B3C55);
		// } else {
		goto IL_00e3;
	}

IL_008e:
	{
	}

IL_008f:
	try
	{ // begin try (depth: 1)
		// this.introductory_price_cycles = Convert.ToInt64(intro_wrapper.TryGetString("introductoryPriceNumberOfPeriods"));
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_20 = V_3;
		String_t* L_21 = SerializationExtensions_TryGetString_m936CE13752A8142BE26EEF523AEE0B4D4D0D816A(L_20, _stringLiteralA3D9B910FBD7D49B662799307CC6280BB829F841, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_22 = Convert_ToInt64_m740F0CA2696F5D04F06456FCBFE08E942B12B4A6(L_21, /*hidden argument*/NULL);
		__this->set_introductory_price_cycles_13(L_22);
		// nunit = Convert.ToInt32(intro_wrapper.TryGetString("numberOfUnits"));
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_23 = V_3;
		String_t* L_24 = SerializationExtensions_TryGetString_m936CE13752A8142BE26EEF523AEE0B4D4D0D816A(L_23, _stringLiteral6AA2CA83CEC56CC9378EC0E01B0BF752281D2A45, /*hidden argument*/NULL);
		int32_t L_25 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		// unit = (SubscriptionPeriodUnit)Convert.ToInt32(intro_wrapper.TryGetString("unit"));
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_26 = V_3;
		String_t* L_27 = SerializationExtensions_TryGetString_m936CE13752A8142BE26EEF523AEE0B4D4D0D816A(L_26, _stringLiteral0DF9EEA0BAD5A55395DB9EC290DFCF4A883D5D3E, /*hidden argument*/NULL);
		int32_t L_28 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		// } catch(Exception e) {
		goto IL_00e3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00cb;
		throw e;
	}

CATCH_00cb:
	{ // begin catch(System.Exception)
		// } catch(Exception e) {
		V_7 = ((Exception_t *)__exception_local);
		// Debug.unityLogger.Log ("Unable to parse introductory period cycles and duration, this product does not have configuration of introductory price period", e);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = Debug_get_unityLogger_mFA75EC397E067D09FD66D56B4E7692C3FCC3E960_inline(/*hidden argument*/NULL);
		Exception_t * L_30 = V_7;
		NullCheck(L_29);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(5 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_29, _stringLiteral3D6A970D4287352BB3A6FB409DD0F9DF8FF9920A, L_30);
		// unit = SubscriptionPeriodUnit.NotAvailable;
		V_5 = 4;
		// }
		goto IL_00e3;
	} // end catch (depth: 1)

IL_00e3:
	{
		// DateTime now = DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_31 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_6 = L_31;
		// switch (unit) {
		int32_t L_32 = V_5;
		switch (L_32)
		{
			case 0:
			{
				goto IL_010a;
			}
			case 1:
			{
				goto IL_0135;
			}
			case 2:
			{
				goto IL_0161;
			}
			case 3:
			{
				goto IL_0189;
			}
			case 4:
			{
				goto IL_01b2;
			}
		}
	}
	{
		goto IL_01e5;
	}

IL_010a:
	{
		// this.introductory_price_period = TimeSpan.FromTicks(TimeSpan.FromDays(1).Ticks * nunit);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_33 = TimeSpan_FromDays_m99DCC655C53C2898FF0C41D1DDFE17A749081DDB((1.0), /*hidden argument*/NULL);
		V_10 = L_33;
		int64_t L_34 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_10), /*hidden argument*/NULL);
		int32_t L_35 = V_4;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_36 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)(((int64_t)((int64_t)L_35))))), /*hidden argument*/NULL);
		__this->set_introductory_price_period_12(L_36);
		// break;
		goto IL_01e5;
	}

IL_0135:
	{
		// TimeSpan month_span = now.AddMonths(1) - now;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_37 = DateTime_AddMonths_mFACFF352D9DFA0D4B3AC47BFFEA0564F163D7AEC((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_6), 1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_38 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_39 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_37, L_38, /*hidden argument*/NULL);
		V_8 = L_39;
		// this.introductory_price_period = TimeSpan.FromTicks(month_span.Ticks * nunit);
		int64_t L_40 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_8), /*hidden argument*/NULL);
		int32_t L_41 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_42 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)il2cpp_codegen_multiply((int64_t)L_40, (int64_t)(((int64_t)((int64_t)L_41))))), /*hidden argument*/NULL);
		__this->set_introductory_price_period_12(L_42);
		// break;
		goto IL_01e5;
	}

IL_0161:
	{
		// this.introductory_price_period = TimeSpan.FromTicks(TimeSpan.FromDays(7).Ticks * nunit);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_43 = TimeSpan_FromDays_m99DCC655C53C2898FF0C41D1DDFE17A749081DDB((7.0), /*hidden argument*/NULL);
		V_10 = L_43;
		int64_t L_44 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_10), /*hidden argument*/NULL);
		int32_t L_45 = V_4;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_46 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)il2cpp_codegen_multiply((int64_t)L_44, (int64_t)(((int64_t)((int64_t)L_45))))), /*hidden argument*/NULL);
		__this->set_introductory_price_period_12(L_46);
		// break;
		goto IL_01e5;
	}

IL_0189:
	{
		// TimeSpan year_span = now.AddYears(1) - now;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_47 = DateTime_AddYears_m4D66AFB61758D852CEEFE29D103C88106C6847A2((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_6), 1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_48 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_49 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_47, L_48, /*hidden argument*/NULL);
		V_9 = L_49;
		// this.introductory_price_period = TimeSpan.FromTicks(year_span.Ticks * nunit);
		int64_t L_50 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_9), /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_52 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)il2cpp_codegen_multiply((int64_t)L_50, (int64_t)(((int64_t)((int64_t)L_51))))), /*hidden argument*/NULL);
		__this->set_introductory_price_period_12(L_52);
		// break;
		goto IL_01e5;
	}

IL_01b2:
	{
		// this.introductory_price_period = TimeSpan.Zero;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_53 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set_introductory_price_period_12(L_53);
		// this.introductory_price_cycles = 0;
		__this->set_introductory_price_cycles_13((((int64_t)((int64_t)0))));
		// break;
		goto IL_01e5;
	}

IL_01c7:
	{
		// this.introductory_price = "not available";
		__this->set_introductory_price_11(_stringLiteral5F2391220833847E88FA717EB295A329DD3B3C55);
		// this.introductory_price_period = TimeSpan.Zero;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_54 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set_introductory_price_period_12(L_54);
		// this.introductory_price_cycles = 0;
		__this->set_introductory_price_cycles_13((((int64_t)((int64_t)0))));
	}

IL_01e5:
	{
		// DateTime current_date = DateTime.UtcNow;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_55 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_1 = L_55;
		// this.purchaseDate = r.purchaseDate;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_56 = ___r0;
		NullCheck(L_56);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_57 = AppleInAppPurchaseReceipt_get_purchaseDate_m917A2D424673A4B3F9E2BEE0E4D9E56EE0059861_inline(L_56, /*hidden argument*/NULL);
		__this->set_purchaseDate_7(L_57);
		// this.productId = r.productID;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_58 = ___r0;
		NullCheck(L_58);
		String_t* L_59 = AppleInAppPurchaseReceipt_get_productID_m71B2167B236F9D5304762CC97FE063705633D632_inline(L_58, /*hidden argument*/NULL);
		__this->set_productId_6(L_59);
		// this.subscriptionExpireDate = r.subscriptionExpirationDate;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_60 = ___r0;
		NullCheck(L_60);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_61 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m00E8EE4F0E8884C2BFFF1331A78D7C17E00F29BA_inline(L_60, /*hidden argument*/NULL);
		__this->set_subscriptionExpireDate_8(L_61);
		// this.subscriptionCancelDate = r.cancellationDate;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_62 = ___r0;
		NullCheck(L_62);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_63 = AppleInAppPurchaseReceipt_get_cancellationDate_mB5AAE152691A354CD299A27ABB24B52EFD2FB3FA_inline(L_62, /*hidden argument*/NULL);
		__this->set_subscriptionCancelDate_9(L_63);
		// if (productType == AppleStoreProductType.NonRenewingSubscription) {
		int32_t L_64 = V_0;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_024e;
		}
	}
	{
		// this.is_subscribed = Result.Unsupported;
		__this->set_is_subscribed_0(2);
		// this.is_expired = Result.Unsupported;
		__this->set_is_expired_1(2);
		// this.is_cancelled = Result.Unsupported;
		__this->set_is_cancelled_2(2);
		// this.is_free_trial = Result.Unsupported;
		__this->set_is_free_trial_3(2);
		// this.is_auto_renewing = Result.Unsupported;
		__this->set_is_auto_renewing_4(2);
		// this.is_introductory_price_period = Result.Unsupported;
		__this->set_is_introductory_price_period_5(2);
		// } else {
		goto IL_0320;
	}

IL_024e:
	{
		// this.is_cancelled = (r.cancellationDate.Ticks > 0) && (r.cancellationDate.Ticks < current_date.Ticks) ? Result.True : Result.False;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_65 = ___r0;
		NullCheck(L_65);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_66 = AppleInAppPurchaseReceipt_get_cancellationDate_mB5AAE152691A354CD299A27ABB24B52EFD2FB3FA_inline(L_65, /*hidden argument*/NULL);
		V_11 = L_66;
		int64_t L_67 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_11), /*hidden argument*/NULL);
		G_B20_0 = __this;
		if ((((int64_t)L_67) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			G_B21_0 = __this;
			goto IL_027a;
		}
	}
	{
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_68 = ___r0;
		NullCheck(L_68);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_69 = AppleInAppPurchaseReceipt_get_cancellationDate_mB5AAE152691A354CD299A27ABB24B52EFD2FB3FA_inline(L_68, /*hidden argument*/NULL);
		V_11 = L_69;
		int64_t L_70 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_11), /*hidden argument*/NULL);
		int64_t L_71 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		G_B21_0 = G_B20_0;
		if ((((int64_t)L_70) < ((int64_t)L_71)))
		{
			G_B22_0 = G_B20_0;
			goto IL_027d;
		}
	}

IL_027a:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B21_0;
		goto IL_027e;
	}

IL_027d:
	{
		G_B23_0 = 0;
		G_B23_1 = G_B22_0;
	}

IL_027e:
	{
		NullCheck(G_B23_1);
		G_B23_1->set_is_cancelled_2(G_B23_0);
		// this.is_subscribed = r.subscriptionExpirationDate.Ticks >= current_date.Ticks ? Result.True : Result.False;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_72 = ___r0;
		NullCheck(L_72);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_73 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m00E8EE4F0E8884C2BFFF1331A78D7C17E00F29BA_inline(L_72, /*hidden argument*/NULL);
		V_11 = L_73;
		int64_t L_74 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_11), /*hidden argument*/NULL);
		int64_t L_75 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		G_B24_0 = __this;
		if ((((int64_t)L_74) >= ((int64_t)L_75)))
		{
			G_B25_0 = __this;
			goto IL_029f;
		}
	}
	{
		G_B26_0 = 1;
		G_B26_1 = G_B24_0;
		goto IL_02a0;
	}

IL_029f:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
	}

IL_02a0:
	{
		NullCheck(G_B26_1);
		G_B26_1->set_is_subscribed_0(G_B26_0);
		// this.is_expired = (r.subscriptionExpirationDate.Ticks > 0 && r.subscriptionExpirationDate.Ticks < current_date.Ticks) ? Result.True : Result.False;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_76 = ___r0;
		NullCheck(L_76);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_77 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m00E8EE4F0E8884C2BFFF1331A78D7C17E00F29BA_inline(L_76, /*hidden argument*/NULL);
		V_11 = L_77;
		int64_t L_78 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_11), /*hidden argument*/NULL);
		G_B27_0 = __this;
		if ((((int64_t)L_78) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			G_B28_0 = __this;
			goto IL_02d1;
		}
	}
	{
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_79 = ___r0;
		NullCheck(L_79);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_80 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m00E8EE4F0E8884C2BFFF1331A78D7C17E00F29BA_inline(L_79, /*hidden argument*/NULL);
		V_11 = L_80;
		int64_t L_81 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_11), /*hidden argument*/NULL);
		int64_t L_82 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		G_B28_0 = G_B27_0;
		if ((((int64_t)L_81) < ((int64_t)L_82)))
		{
			G_B29_0 = G_B27_0;
			goto IL_02d4;
		}
	}

IL_02d1:
	{
		G_B30_0 = 1;
		G_B30_1 = G_B28_0;
		goto IL_02d5;
	}

IL_02d4:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
	}

IL_02d5:
	{
		NullCheck(G_B30_1);
		G_B30_1->set_is_expired_1(G_B30_0);
		// this.is_free_trial = (r.isFreeTrial == 1) ? Result.True : Result.False;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_83 = ___r0;
		NullCheck(L_83);
		int32_t L_84 = AppleInAppPurchaseReceipt_get_isFreeTrial_mC07A1557E17DD7E1E75F43325EE7A2EC214C12BD_inline(L_83, /*hidden argument*/NULL);
		G_B31_0 = __this;
		if ((((int32_t)L_84) == ((int32_t)1)))
		{
			G_B32_0 = __this;
			goto IL_02e7;
		}
	}
	{
		G_B33_0 = 1;
		G_B33_1 = G_B31_0;
		goto IL_02e8;
	}

IL_02e7:
	{
		G_B33_0 = 0;
		G_B33_1 = G_B32_0;
	}

IL_02e8:
	{
		NullCheck(G_B33_1);
		G_B33_1->set_is_free_trial_3(G_B33_0);
		// this.is_auto_renewing = ((productType == AppleStoreProductType.AutoRenewingSubscription) && this.is_cancelled == Result.False
		//         && this.is_expired == Result.False) ? Result.True : Result.False;
		int32_t L_85 = V_0;
		G_B34_0 = __this;
		if ((!(((uint32_t)L_85) == ((uint32_t)3))))
		{
			G_B36_0 = __this;
			goto IL_0304;
		}
	}
	{
		int32_t L_86 = __this->get_is_cancelled_2();
		G_B35_0 = G_B34_0;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			G_B36_0 = G_B34_0;
			goto IL_0304;
		}
	}
	{
		int32_t L_87 = __this->get_is_expired_1();
		G_B36_0 = G_B35_0;
		if ((((int32_t)L_87) == ((int32_t)1)))
		{
			G_B37_0 = G_B35_0;
			goto IL_0307;
		}
	}

IL_0304:
	{
		G_B38_0 = 1;
		G_B38_1 = G_B36_0;
		goto IL_0308;
	}

IL_0307:
	{
		G_B38_0 = 0;
		G_B38_1 = G_B37_0;
	}

IL_0308:
	{
		NullCheck(G_B38_1);
		G_B38_1->set_is_auto_renewing_4(G_B38_0);
		// this.is_introductory_price_period = r.isIntroductoryPricePeriod == 1 ? Result.True : Result.False;
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_88 = ___r0;
		NullCheck(L_88);
		int32_t L_89 = AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m73006639641517EE893E605E427803A417AB8E3D_inline(L_88, /*hidden argument*/NULL);
		G_B39_0 = __this;
		if ((((int32_t)L_89) == ((int32_t)1)))
		{
			G_B40_0 = __this;
			goto IL_031a;
		}
	}
	{
		G_B41_0 = 1;
		G_B41_1 = G_B39_0;
		goto IL_031b;
	}

IL_031a:
	{
		G_B41_0 = 0;
		G_B41_1 = G_B40_0;
	}

IL_031b:
	{
		NullCheck(G_B41_1);
		G_B41_1->set_is_introductory_price_period_5(G_B41_0);
	}

IL_0320:
	{
		// if (this.is_subscribed == Result.True) {
		int32_t L_90 = __this->get_is_subscribed_0();
		if (L_90)
		{
			goto IL_033f;
		}
	}
	{
		// this.remainedTime = r.subscriptionExpirationDate.Subtract(current_date);
		AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * L_91 = ___r0;
		NullCheck(L_91);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_92 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m00E8EE4F0E8884C2BFFF1331A78D7C17E00F29BA_inline(L_91, /*hidden argument*/NULL);
		V_11 = L_92;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_93 = V_1;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_94 = DateTime_Subtract_m12814A53110B4E3887A84A911C5F9C1402D98842((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_11), L_93, /*hidden argument*/NULL);
		__this->set_remainedTime_10(L_94);
		// } else {
		return;
	}

IL_033f:
	{
		// this.remainedTime = TimeSpan.Zero;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_95 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set_remainedTime_10(L_95);
		// }
		return;
	}
}
// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubscriptionInfo_isExpired_m40A1FE8D4523A7CAE4917C370B9BA41E4EF1B5BF (SubscriptionInfo_t4074AA957C04E635B03B74C06A06A2760F5D6DAA * __this, const RuntimeMethod* method)
{
	{
		// public Result isExpired() { return this.is_expired; }
		int32_t L_0 = __this->get_is_expired_1();
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
// System.String UnityEngine.Purchasing.UDP::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UDP_get_Name_mA19C18298EB398B975E9C10493499538E375DD3F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDP_get_Name_mA19C18298EB398B975E9C10493499538E375DD3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// return StoreServiceInterface.GetName();
		String_t* L_0 = StoreServiceInterface_GetName_m704F01FBE23B88BCB5B46AABEF184BB682204D72(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0011;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0008;
		throw e;
	}

CATCH_0008:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// return "UDP";
		V_0 = _stringLiteralE9A6F622E340090FEB219EB5C94B0DF756E8E486;
		goto IL_0011;
	} // end catch (depth: 1)

IL_0011:
	{
		// }
		String_t* L_1 = V_0;
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
// System.Void UnityEngine.Purchasing.UDPBindings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings__ctor_mA8F8DF8D40788F9CF0EF4B4F8CC623979A763955 (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings__ctor_mA8F8DF8D40788F9CF0EF4B4F8CC623979A763955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		// public UDPBindings()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Type udpIapBridge = UdpIapBridgeInterface.GetClassType();
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (udpIapBridge != null)
		Type_t * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_2 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_1, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_Bridge = Activator.CreateInstance(udpIapBridge);
		Type_t * L_3 = V_0;
		RuntimeObject * L_4 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_3, /*hidden argument*/NULL);
		__this->set_m_Bridge_0(L_4);
		// }
		return;
	}

IL_0022:
	{
		// Debug.LogError("Failed to access UDP. Please make sure your UDP package is installed and up-to-date");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral605FEF0BA0D91B21456F08AAD3F3430F7965A26D, /*hidden argument*/NULL);
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_5 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, UDPBindings__ctor_mA8F8DF8D40788F9CF0EF4B4F8CC623979A763955_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::Initialize(System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_Initialize_m36E5133D28B738C3C5473233C5A184A566E22D24 (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_Initialize_m36E5133D28B738C3C5473233C5A184A566E22D24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Bridge != null)
		RuntimeObject * L_0 = __this->get_m_Bridge_0();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// var initMethod = UdpIapBridgeInterface.GetInitMethod();
		MethodInfo_t * L_1 = UdpIapBridgeInterface_GetInitMethod_m5E6E787525C5734D687FA3D0039435A369580B63(/*hidden argument*/NULL);
		// initMethod.Invoke(m_Bridge, new object[] {callback});
		RuntimeObject * L_2 = __this->get_m_Bridge_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_5 = ___callback0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_1);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_1, L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0024:
	{
		// Debug.LogError("Cannot Initialize UDP store module. Please make sure your UDP package is installed and up-to-date");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralF0850B5B860948D19714676332550A5DC7C82049, /*hidden argument*/NULL);
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_6 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, UDPBindings_Initialize_m36E5133D28B738C3C5473233C5A184A566E22D24_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_Purchase_mBEDA768F6C7A1C2C1F7F28D71F8105DD308E42E5 (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, String_t* ___productId0, Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___callback1, String_t* ___developerPayload2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_Purchase_mBEDA768F6C7A1C2C1F7F28D71F8105DD308E42E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Bridge != null)
		RuntimeObject * L_0 = __this->get_m_Bridge_0();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// var purchaseMethod = UdpIapBridgeInterface.GetPurchaseMethod();
		MethodInfo_t * L_1 = UdpIapBridgeInterface_GetPurchaseMethod_mD59C6526FFC5C528BE73B66ADDD3BB4ADAAF2B64(/*hidden argument*/NULL);
		// purchaseMethod.Invoke(m_Bridge, new object[] {productId, callback, developerPayload});
		RuntimeObject * L_2 = __this->get_m_Bridge_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = ___productId0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_7 = ___callback1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_6;
		String_t* L_9 = ___developerPayload2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		NullCheck(L_1);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_1, L_2, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002c:
	{
		// Debug.LogError("Cannot Purchase via UDP. Please make sure your UDP package is installed and up-to-date");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral5DA09102E2C35C6E4B633B2C30A831212814D272, /*hidden argument*/NULL);
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_10 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, UDPBindings_Purchase_mBEDA768F6C7A1C2C1F7F28D71F8105DD308E42E5_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_RetrieveProducts_m133916567B921ACCB950F33A574ED7D09EB377C3 (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * ___products0, Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_RetrieveProducts_m133916567B921ACCB950F33A574ED7D09EB377C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503 * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (m_Bridge != null)
		RuntimeObject * L_0 = __this->get_m_Bridge_0();
		if (!L_0)
		{
			goto IL_0093;
		}
	}
	{
		// if (m_RetrieveProductsCallbackCache != null)
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_1 = __this->get_m_RetrieveProductsCallbackCache_1();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// callback(false, "{ \"error\" : \"already retrieving products\" }");
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4(L_2, (bool)0, _stringLiteral865D8C1E90DC1EDA4DC9155444CD1C69A57057C4, /*hidden argument*/Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4_RuntimeMethod_var);
		// return;
		return;
	}

IL_0020:
	{
		// m_RetrieveProductsCallbackCache = callback;
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_3 = ___callback1;
		__this->set_m_RetrieveProductsCallbackCache_1(L_3);
		// Action<bool, object> retrieveCallback = OnInventoryQueried;
		Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503 * L_4 = (Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503 *)il2cpp_codegen_object_new(Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503_il2cpp_TypeInfo_var);
		Action_2__ctor_mD6B6F563DF5530F25F812AACBABB00F40665DC40(L_4, __this, (intptr_t)((intptr_t)UDPBindings_OnInventoryQueried_m223473D27E27F075F794D31CEE740A86A377219F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD6B6F563DF5530F25F812AACBABB00F40665DC40_RuntimeMethod_var);
		V_0 = L_4;
		// var retrieveProductsMethod = UdpIapBridgeInterface.GetRetrieveProductsMethod();
		MethodInfo_t * L_5 = UdpIapBridgeInterface_GetRetrieveProductsMethod_m7DDEE509C69CD733F61E0DEC005C2DAB04D0892F(/*hidden argument*/NULL);
		V_1 = L_5;
		// List<string> ids = new List<String>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_6, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		V_2 = L_6;
		// foreach (var product in products)
		ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * L_7 = ___products0;
		NullCheck(L_7);
		RuntimeObject* L_8 = ReadOnlyCollection_1_GetEnumerator_mD9A340ACC5F6C97BF6DBF1645507886FD04CFFA4(L_7, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_mD9A340ACC5F6C97BF6DBF1645507886FD04CFFA4_RuntimeMethod_var);
		V_3 = L_8;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0049:
		{
			// foreach (var product in products)
			RuntimeObject* L_9 = V_3;
			NullCheck(L_9);
			ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_10 = InterfaceFuncInvoker0< ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductDefinition>::get_Current() */, IEnumerator_1_t56920F5F2D0BE9BB76C32B2CE4216B9C43352B09_il2cpp_TypeInfo_var, L_9);
			V_4 = L_10;
			// ids.Add(product.storeSpecificId);
			List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_11 = V_2;
			ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_12 = V_4;
			NullCheck(L_12);
			String_t* L_13 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_11, L_13, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		}

IL_005e:
		{
			// foreach (var product in products)
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0049;
			}
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_3;
			if (!L_16)
			{
				goto IL_0071;
			}
		}

IL_006b:
		{
			RuntimeObject* L_17 = V_3;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_17);
		}

IL_0071:
		{
			IL2CPP_END_FINALLY(104)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
	}

IL_0072:
	{
		// retrieveProductsMethod.Invoke(m_Bridge, new object[] {new ReadOnlyCollection<string>(ids), retrieveCallback});
		MethodInfo_t * L_18 = V_1;
		RuntimeObject * L_19 = __this->get_m_Bridge_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_20;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_22 = V_2;
		ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172 * L_23 = (ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t420DF5289F41935D97517FA20886D2BA121B4172_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_mCBFEF25AD14ABCCABBA7380F8B387EE26E67CD89(L_23, L_22, /*hidden argument*/ReadOnlyCollection_1__ctor_mCBFEF25AD14ABCCABBA7380F8B387EE26E67CD89_RuntimeMethod_var);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_21;
		Action_2_t953424DB8C99BAF81B46D47618605FFF6709F503 * L_25 = V_0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		NullCheck(L_18);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_18, L_19, L_24, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0093:
	{
		// Debug.LogError("Cannot Retrieve Products from UDP. Please make sure your UDP package is installed and up-to-date");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralA9BB9CFCB62B68A83AB4C25DE93C70956D2FD0DF, /*hidden argument*/NULL);
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_26 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, UDPBindings_RetrieveProducts_m133916567B921ACCB950F33A574ED7D09EB377C3_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_FinishTransaction_m292791E98A4C5203CA4D38DF94FF6AB748C1E11B (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___productDefinition0, String_t* ___transactionID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_FinishTransaction_m292791E98A4C5203CA4D38DF94FF6AB748C1E11B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Bridge != null)
		RuntimeObject * L_0 = __this->get_m_Bridge_0();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// var finishTransactionMethod = UdpIapBridgeInterface.GetFinishTransactionMethod();
		MethodInfo_t * L_1 = UdpIapBridgeInterface_GetFinishTransactionMethod_mB12C7F0BC90F45D3E799F60DC58EDF588ECFE49D(/*hidden argument*/NULL);
		// finishTransactionMethod.Invoke(m_Bridge, new object[] {transactionID});
		RuntimeObject * L_2 = __this->get_m_Bridge_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = ___transactionID1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_1);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_1, L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0024:
	{
		// Debug.LogError("Cannot Complete transaction for UDP. Please make sure your UDP package is installed and up-to-date");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral8A0C6E5A1A065612979FD4D633714DE5BC457828, /*hidden argument*/NULL);
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_6 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, UDPBindings_FinishTransaction_m292791E98A4C5203CA4D38DF94FF6AB748C1E11B_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnInventoryQueried(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnInventoryQueried_m223473D27E27F075F794D31CEE740A86A377219F (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, bool ___success0, RuntimeObject * ___payload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnInventoryQueried_m223473D27E27F075F794D31CEE740A86A377219F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Type_t * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 * V_4 = NULL;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject * V_6 = NULL;
	PropertyInfo_t * V_7 = NULL;
	PropertyInfo_t * V_8 = NULL;
	PropertyInfo_t * V_9 = NULL;
	PropertyInfo_t * V_10 = NULL;
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * V_11 = NULL;
	String_t* V_12 = NULL;
	ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * V_13 = NULL;
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_14 = NULL;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool actualSuccess = success;
		bool L_0 = ___success0;
		V_0 = L_0;
		// Type inventoryType = InventoryInterface.GetClassType();
		Type_t * L_1 = InventoryInterface_GetClassType_mE75B99E77E930C6DD1D18967DDBF1034A7B57311(/*hidden argument*/NULL);
		V_2 = L_1;
		// if (success)
		bool L_2 = ___success0;
		if (!L_2)
		{
			goto IL_01ea;
		}
	}
	{
		// if (inventoryType != null)
		Type_t * L_3 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_01e0;
		}
	}
	{
		// object inventory = payload;
		RuntimeObject * L_5 = ___payload1;
		V_3 = L_5;
		// if (inventory != null && inventory.GetType() == inventoryType)
		RuntimeObject * L_6 = V_3;
		if (!L_6)
		{
			goto IL_01d6;
		}
	}
	{
		RuntimeObject * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_7, /*hidden argument*/NULL);
		Type_t * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_01d6;
		}
	}
	{
		// HashSet<ProductDescription> fetchedProducts = new HashSet<ProductDescription>();
		HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 * L_11 = (HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 *)il2cpp_codegen_object_new(HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mB3AF1F79F5C362D555D19E4C9928DBB388AF09B7(L_11, /*hidden argument*/HashSet_1__ctor_mB3AF1F79F5C362D555D19E4C9928DBB388AF09B7_RuntimeMethod_var);
		V_4 = L_11;
		// var getProductList = InventoryInterface.GetProductListMethod();
		MethodInfo_t * L_12 = InventoryInterface_GetProductListMethod_m674077437516827A1F2FAA9FD80F934036FC5230(/*hidden argument*/NULL);
		// var products = (IEnumerable) getProductList.Invoke(inventory, null);
		RuntimeObject * L_13 = V_3;
		NullCheck(L_12);
		RuntimeObject * L_14 = MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_12, L_13, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		// var productList = products.Cast<object>().ToList();
		RuntimeObject* L_15 = Enumerable_Cast_TisRuntimeObject_m1D60B8691728928CBD2559D4696E2AED74E86B2D(((RuntimeObject*)Castclass((RuntimeObject*)L_14, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)), /*hidden argument*/Enumerable_Cast_TisRuntimeObject_m1D60B8691728928CBD2559D4696E2AED74E86B2D_RuntimeMethod_var);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = Enumerable_ToList_TisRuntimeObject_mF06A421A80377818D8A65783B8F9B53C000101E4(L_15, /*hidden argument*/Enumerable_ToList_TisRuntimeObject_mF06A421A80377818D8A65783B8F9B53C000101E4_RuntimeMethod_var);
		// foreach (var productInfo in productList)
		NullCheck(L_16);
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_17 = List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D(L_16, /*hidden argument*/List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_RuntimeMethod_var);
		V_5 = L_17;
	}

IL_005c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b0;
		}

IL_0061:
		{
			// foreach (var productInfo in productList)
			RuntimeObject * L_18 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_5), /*hidden argument*/Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_RuntimeMethod_var);
			V_6 = L_18;
			// var priceProp = ProductInfoInterface.GetPriceProp();
			PropertyInfo_t * L_19 = ProductInfoInterface_GetPriceProp_m820DC77391ED01E7C43CA9586BD1DBBE2B048B7C(/*hidden argument*/NULL);
			// var titleProp = ProductInfoInterface.GetTitleProp();
			PropertyInfo_t * L_20 = ProductInfoInterface_GetTitleProp_mC0F27F72EB31FD01E97BCAD30708E147A160BCD7(/*hidden argument*/NULL);
			V_7 = L_20;
			// var descProp = ProductInfoInterface.GetDescriptionProp();
			PropertyInfo_t * L_21 = ProductInfoInterface_GetDescriptionProp_m924675700E8D77D9EE7B6C75E19CDF6FC763C673(/*hidden argument*/NULL);
			V_8 = L_21;
			// var currencyProp = ProductInfoInterface.GetCurrencyProp();
			PropertyInfo_t * L_22 = ProductInfoInterface_GetCurrencyProp_m046BB22869D7CF49FC00206710F23C3B072A5AB5(/*hidden argument*/NULL);
			V_9 = L_22;
			// var microsProp = ProductInfoInterface.GetPriceAmountMicrosProp();
			PropertyInfo_t * L_23 = ProductInfoInterface_GetPriceAmountMicrosProp_m0640B6CC3E5E8981A60C5D59E11169478D92F2D0(/*hidden argument*/NULL);
			V_10 = L_23;
			// ProductMetadata metadata = new ProductMetadata(
			//     (string) priceProp.GetValue(productInfo, null),
			//     (string) titleProp.GetValue(productInfo, null),
			//     (string) descProp.GetValue(productInfo, null),
			//     (string) currencyProp.GetValue(productInfo, null),
			//     Convert.ToDecimal((long) microsProp.GetValue(productInfo, null)) / 1000000);
			RuntimeObject * L_24 = V_6;
			NullCheck(L_19);
			RuntimeObject * L_25 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_19, L_24, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
			PropertyInfo_t * L_26 = V_7;
			RuntimeObject * L_27 = V_6;
			NullCheck(L_26);
			RuntimeObject * L_28 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_26, L_27, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
			PropertyInfo_t * L_29 = V_8;
			RuntimeObject * L_30 = V_6;
			NullCheck(L_29);
			RuntimeObject * L_31 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_29, L_30, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
			PropertyInfo_t * L_32 = V_9;
			RuntimeObject * L_33 = V_6;
			NullCheck(L_32);
			RuntimeObject * L_34 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_32, L_33, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
			PropertyInfo_t * L_35 = V_10;
			RuntimeObject * L_36 = V_6;
			NullCheck(L_35);
			RuntimeObject * L_37 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_35, L_36, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
			Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_38 = Convert_ToDecimal_mECE2EDC28EBA5F0B88702C15D0A3A1DABEE8D6A1(((*(int64_t*)((int64_t*)UnBox(L_37, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_39;
			memset((&L_39), 0, sizeof(L_39));
			Decimal__ctor_m6AEED1DCCFC59CB0AEBEC253F049953427BA4912((&L_39), ((int32_t)1000000), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var);
			Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_40 = Decimal_op_Division_m5A14CCDBC929DEB14F9AC195C7456DF0AE76F514(L_38, L_39, /*hidden argument*/NULL);
			ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_41 = (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 *)il2cpp_codegen_object_new(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48_il2cpp_TypeInfo_var);
			ProductMetadata__ctor_mF3BD4FBBF41E5F4F7335D0DC07EA91214F6A5598(L_41, ((String_t*)CastclassSealed((RuntimeObject*)L_25, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_31, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_34, String_t_il2cpp_TypeInfo_var)), L_40, /*hidden argument*/NULL);
			V_11 = L_41;
			// var idProp = ProductInfoInterface.GetProductIdProp();
			PropertyInfo_t * L_42 = ProductInfoInterface_GetProductIdProp_mF85F802C43AA899966346E5685F31B8EA7744C52(/*hidden argument*/NULL);
			// var productId = (string) idProp.GetValue(productInfo, null);
			RuntimeObject * L_43 = V_6;
			NullCheck(L_42);
			RuntimeObject * L_44 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_42, L_43, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
			V_12 = ((String_t*)CastclassSealed((RuntimeObject*)L_44, String_t_il2cpp_TypeInfo_var));
			// ProductDescription desc = new ProductDescription(productId, metadata);
			String_t* L_45 = V_12;
			ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_46 = V_11;
			ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_47 = (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *)il2cpp_codegen_object_new(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var);
			ProductDescription__ctor_m5788E91EBC4C45696FC67D93B3CFD20FAE963E9B(L_47, L_45, L_46, /*hidden argument*/NULL);
			V_13 = L_47;
			// var hasPurchase = InventoryInterface.HasPurchaseMethod();
			MethodInfo_t * L_48 = InventoryInterface_HasPurchaseMethod_m48B17F37F259E5F0AEAAA5AC6202BE230FFEAF77(/*hidden argument*/NULL);
			// if ((bool) hasPurchase.Invoke(inventory, new object[] {productId}))
			RuntimeObject * L_49 = V_3;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_50 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_51 = L_50;
			String_t* L_52 = V_12;
			NullCheck(L_51);
			ArrayElementTypeCheck (L_51, L_52);
			(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_52);
			NullCheck(L_48);
			RuntimeObject * L_53 = MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_48, L_49, L_51, /*hidden argument*/NULL);
			if (!((*(bool*)((bool*)UnBox(L_53, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
			{
				goto IL_01a6;
			}
		}

IL_012b:
		{
			// var getPurchaseInfo = InventoryInterface.GetPurchaseInfoMethod();
			MethodInfo_t * L_54 = InventoryInterface_GetPurchaseInfoMethod_mDD77044A34A5B360B3ADBA6AB0FC8A847FA315BC(/*hidden argument*/NULL);
			// object purchase = getPurchaseInfo.Invoke(inventory, new object[] {productId});
			RuntimeObject * L_55 = V_3;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_56 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = L_56;
			String_t* L_58 = V_12;
			NullCheck(L_57);
			ArrayElementTypeCheck (L_57, L_58);
			(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_58);
			NullCheck(L_54);
			RuntimeObject * L_59 = MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_54, L_55, L_57, /*hidden argument*/NULL);
			// var dic = StringPropertyToDictionary(purchase);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_60 = UDPBindings_StringPropertyToDictionary_m34700519458DCC72CC62E02398E2A4603B8EC2A0(L_59, /*hidden argument*/NULL);
			V_14 = L_60;
			// string transactionId = dic["GameOrderId"];
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_61 = V_14;
			NullCheck(L_61);
			String_t* L_62 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_61, _stringLiteral0650DE9E26E2AA79CC57EDED9B8928F8668B9EA5, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
			V_15 = L_62;
			// var storeSpecificId = dic["ProductId"];
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_63 = V_14;
			NullCheck(L_63);
			String_t* L_64 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_63, _stringLiteralC9470C99119C4E0DCB89D108BEAC5078E9E95560, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
			V_16 = L_64;
			// if (!string.IsNullOrEmpty(transactionId))
			String_t* L_65 = V_15;
			bool L_66 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_65, /*hidden argument*/NULL);
			if (L_66)
			{
				goto IL_017b;
			}
		}

IL_016d:
		{
			// dic["transactionId"] = transactionId;
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_67 = V_14;
			String_t* L_68 = V_15;
			NullCheck(L_67);
			Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_67, _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55, L_68, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		}

IL_017b:
		{
			// if (!string.IsNullOrEmpty(storeSpecificId))
			String_t* L_69 = V_16;
			bool L_70 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_69, /*hidden argument*/NULL);
			if (L_70)
			{
				goto IL_0192;
			}
		}

IL_0184:
		{
			// dic["storeSpecificId"] = storeSpecificId;
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_71 = V_14;
			String_t* L_72 = V_16;
			NullCheck(L_71);
			Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_71, _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA, L_72, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		}

IL_0192:
		{
			// desc = new ProductDescription(productId, metadata, dic.toJson(), transactionId);
			String_t* L_73 = V_12;
			ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_74 = V_11;
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_75 = V_14;
			String_t* L_76 = MiniJsonExtensions_toJson_m9C50ED57AD3C17DABBCF5791222C894E43C0CF75(L_75, /*hidden argument*/NULL);
			String_t* L_77 = V_15;
			ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_78 = (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *)il2cpp_codegen_object_new(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var);
			ProductDescription__ctor_mCF9F28AC1C31FA18B4D520B0C1F83676F8BF6195(L_78, L_73, L_74, L_76, L_77, /*hidden argument*/NULL);
			V_13 = L_78;
		}

IL_01a6:
		{
			// fetchedProducts.Add(desc);
			HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 * L_79 = V_4;
			ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_80 = V_13;
			NullCheck(L_79);
			HashSet_1_Add_m9C5CBADE58A9A157DAC8673C37D88FECF2A2365F(L_79, L_80, /*hidden argument*/HashSet_1_Add_m9C5CBADE58A9A157DAC8673C37D88FECF2A2365F_RuntimeMethod_var);
		}

IL_01b0:
		{
			// foreach (var productInfo in productList)
			bool L_81 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_RuntimeMethod_var);
			if (L_81)
			{
				goto IL_0061;
			}
		}

IL_01bc:
		{
			IL2CPP_LEAVE(0x1CC, FINALLY_01be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01be;
	}

FINALLY_01be:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_5), /*hidden argument*/Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_RuntimeMethod_var);
		IL2CPP_END_FINALLY(446)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(446)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1CC, IL_01cc)
	}

IL_01cc:
	{
		// parsedPayload = JSONSerializer.SerializeProductDescs(fetchedProducts);
		HashSet_1_tD124B3084BB5AAA3E5A146345DA6EEC111503353 * L_82 = V_4;
		String_t* L_83 = JSONSerializer_SerializeProductDescs_m5E15C30DA843C09D36C4F6B4E22456E6A182D0BA(L_82, /*hidden argument*/NULL);
		V_1 = L_83;
		// }
		goto IL_01f1;
	}

IL_01d6:
	{
		// actualSuccess = false;
		V_0 = (bool)0;
		// parsedPayload = "{ \"error\" : \"Cannot load inventory from UDP. Please make sure your UDP package is installed and up-to-date\" }";
		V_1 = _stringLiteralADD8AB52483B0A272A273D3AD8A6584135A7CA2C;
		// }
		goto IL_01f1;
	}

IL_01e0:
	{
		// actualSuccess = false;
		V_0 = (bool)0;
		// parsedPayload = "{ \"error\" : \"Cannot parse inventory type for UDP. Please make sure your UDP package is installed and up-to-date\" }";
		V_1 = _stringLiteral18D237CCE08A4A1E9941E356C26F1E39000B8F76;
		// }
		goto IL_01f1;
	}

IL_01ea:
	{
		// parsedPayload = (string) payload;
		RuntimeObject * L_84 = ___payload1;
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_84, String_t_il2cpp_TypeInfo_var));
	}

IL_01f1:
	{
		// m_RetrieveProductsCallbackCache(actualSuccess, parsedPayload);
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_85 = __this->get_m_RetrieveProductsCallbackCache_1();
		bool L_86 = V_0;
		String_t* L_87 = V_1;
		NullCheck(L_85);
		Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4(L_85, L_86, L_87, /*hidden argument*/Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4_RuntimeMethod_var);
		// m_RetrieveProductsCallbackCache = null;
		__this->set_m_RetrieveProductsCallbackCache_1((Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_RetrieveProducts_mB5048A3254490EE0D3532C83843E6F3A0AB44187 (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_RetrieveProducts_mB5048A3254490EE0D3532C83843E6F3A0AB44187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, UDPBindings_RetrieveProducts_mB5048A3254490EE0D3532C83843E6F3A0AB44187_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_Purchase_m7E253740A3B939AB6556DC89DBD243860A9519C7 (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_Purchase_m7E253740A3B939AB6556DC89DBD243860A9519C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, UDPBindings_Purchase_m7E253740A3B939AB6556DC89DBD243860A9519C7_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_FinishTransaction_mAD92802CE576E5F35234F545752881C1446AE45D (UDPBindings_tAF8C89938397C0F3312B9994978EEC2298CB1399 * __this, String_t* ___productJSON0, String_t* ___transactionID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_FinishTransaction_mAD92802CE576E5F35234F545752881C1446AE45D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, UDPBindings_FinishTransaction_mAD92802CE576E5F35234F545752881C1446AE45D_RuntimeMethod_var);
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UDPBindings::StringPropertyToDictionary(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UDPBindings_StringPropertyToDictionary_m34700519458DCC72CC62E02398E2A4603B8EC2A0 (RuntimeObject * ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_StringPropertyToDictionary_m34700519458DCC72CC62E02398E2A4603B8EC2A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_0 = NULL;
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// var dictionary = new Dictionary<string, string>();
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_0, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		V_0 = L_0;
		// if (info == null){
		RuntimeObject * L_1 = ___info0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return dictionary;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_2 = V_0;
		return L_2;
	}

IL_000b:
	{
		// var properties = info.GetType().GetProperties();
		RuntimeObject * L_3 = ___info0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_5 = Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D(L_4, /*hidden argument*/NULL);
		// foreach (var property in properties)
		V_1 = L_5;
		V_2 = 0;
		goto IL_0060;
	}

IL_001b:
	{
		// foreach (var property in properties)
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (property.PropertyType == typeof(string))
		PropertyInfo_t * L_10 = V_3;
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_10);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_12, /*hidden argument*/NULL);
		bool L_14 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_11, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		// string value = (string)property.GetValue(info, null);
		PropertyInfo_t * L_15 = V_3;
		RuntimeObject * L_16 = ___info0;
		NullCheck(L_15);
		RuntimeObject * L_17 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_15, L_16, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		V_4 = ((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(value))
		String_t* L_18 = V_4;
		bool L_19 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_005c;
		}
	}
	{
		// dictionary[property.Name] = value;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_20 = V_0;
		PropertyInfo_t * L_21 = V_3;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		String_t* L_23 = V_4;
		NullCheck(L_20);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_20, L_22, L_23, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0060:
	{
		// foreach (var property in properties)
		int32_t L_25 = V_2;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		// return dictionary;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_27 = V_0;
		return L_27;
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
// System.Void UnityEngine.Purchasing.UDPImpl::SetNativeStore(UnityEngine.Purchasing.INativeUDPStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_SetNativeStore_m1654B252B5088E86AEDC396EE884721AE7EFE370 (UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * __this, RuntimeObject* ___nativeUdpStore0, const RuntimeMethod* method)
{
	{
		// m_Bindings = nativeUdpStore;
		RuntimeObject* L_0 = ___nativeUdpStore0;
		__this->set_m_Bindings_19(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_Initialize_m7334C2A82107E96BB125B943990B0727A5E73016 (UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	{
		// unity = callback;
		RuntimeObject* L_0 = ___callback0;
		((JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B *)__this)->set_unity_1(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_RetrieveProducts_m48122E221E2111561B6E779201F7AE95E5F5A815 (UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * __this, ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_RetrieveProducts_m48122E221E2111561B6E779201F7AE95E5F5A815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * L_0 = (U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m213C1CF99C5564F985AC0A9282409C879E2C7457(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * L_2 = V_0;
		ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * L_3 = ___products0;
		NullCheck(L_2);
		L_2->set_products_1(L_3);
		// Action<bool, string> retrieveCallback = (success, json) =>
		// {
		//     if (success && !string.IsNullOrEmpty(json))
		//     {
		//         OnProductsRetrieved(json);
		//     }
		//     else
		//     {
		//         m_Logger.Log("RetrieveProducts failed: " + json);
		//     }
		// };
		U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * L_4 = V_0;
		U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * L_5 = V_0;
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_6 = (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 *)il2cpp_codegen_object_new(Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44_il2cpp_TypeInfo_var);
		Action_2__ctor_mE746EF9212D5F61E7F68240BE31C69D8CACFDDC3(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m020EC94DC56CEBFAAFA8DBCE474810C4F73C2285_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE746EF9212D5F61E7F68240BE31C69D8CACFDDC3_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_retrieveCallback_2(L_6);
		// if (!m_Initialized)
		bool L_7 = __this->get_m_Initialized_22();
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		// m_Bindings.Initialize((success, message) =>
		// {
		//     // Clear the message and userInfo when an Initialized is called successfully.
		//     m_LastInitError = "";
		//     m_UserInfo = null;
		// 
		//     if (success)
		//     {
		//         if (!string.IsNullOrEmpty(message))
		//         {
		//             var dic = message.HashtableFromJson();
		//             if (dic.ContainsKey("Channel"))
		//             {
		//                 Type udpUserInfo = UserInfoInterface.GetClassType();
		//                 if (udpUserInfo != null)
		//                 {
		//                     m_UserInfo = Activator.CreateInstance(udpUserInfo);
		//                     DictionaryToStringProperty(dic, m_UserInfo);
		//                 }
		//             }
		//         }
		// 
		//         m_Initialized = true;
		//         // IStoreCallback do not have initialize success callback.
		//         m_Bindings.RetrieveProducts(products, retrieveCallback);
		//     }
		//     else
		//     {
		//         m_LastInitError = message;
		//         unity.OnSetupFailed(InitializationFailureReason.AppNotKnown);
		//     }
		// });
		RuntimeObject* L_8 = __this->get_m_Bindings_19();
		U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * L_9 = V_0;
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_10 = (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 *)il2cpp_codegen_object_new(Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44_il2cpp_TypeInfo_var);
		Action_2__ctor_mE746EF9212D5F61E7F68240BE31C69D8CACFDDC3(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m7880AC237B144F453EBAB013DB422305FA56453B_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE746EF9212D5F61E7F68240BE31C69D8CACFDDC3_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.INativeUDPStore::Initialize(System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_t6D15B6453F17002782CAB783179C3E61B1BCE0FE_il2cpp_TypeInfo_var, L_8, L_10);
		// }
		return;
	}

IL_0046:
	{
		// m_Bindings.RetrieveProducts(products, retrieveCallback);
		RuntimeObject* L_11 = __this->get_m_Bindings_19();
		U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * L_12 = V_0;
		NullCheck(L_12);
		ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * L_13 = L_12->get_products_1();
		U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * L_14 = V_0;
		NullCheck(L_14);
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_15 = L_14->get_retrieveCallback_2();
		NullCheck(L_11);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 *, Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_t6D15B6453F17002782CAB783179C3E61B1BCE0FE_il2cpp_TypeInfo_var, L_11, L_13, L_15);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_Purchase_m22A1F20917497F6A6A8762CE161A2CFFADE7357F (UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_Purchase_m22A1F20917497F6A6A8762CE161A2CFFADE7357F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * L_0 = (U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m358BF1C9C0944309C79BC3D0CE902AFAF87CCCD8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * L_1 = V_0;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_2 = ___product0;
		NullCheck(L_1);
		L_1->set_product_0(L_2);
		U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U3CU3E4__this_1(__this);
		// m_Bindings.Purchase(product.storeSpecificId, (success, message) =>
		// {
		//     var dic = message.HashtableFromJson();
		//     if (success)
		//     {
		//         var transactionId = dic.GetString("GameOrderId");
		//         var storeSpecificId = dic.GetString("ProductId");
		//         if (!string.IsNullOrEmpty(transactionId))
		//         {
		//             dic["transactionId"] = transactionId;
		//         }
		// 
		//         if (!string.IsNullOrEmpty(storeSpecificId))
		//         {
		//             dic["storeSpecificId"] = storeSpecificId;
		//         }
		// 
		//         if (!product.storeSpecificId.Equals(storeSpecificId))
		//         {
		//             m_Logger.LogFormat(LogType.Error,
		//                 "UDPImpl received mismatching product Id for purchase. Expected {0}, received {1}",
		//                 product.storeSpecificId, storeSpecificId);
		//         }
		// 
		//         var data = dic.toJson();
		//         unity.OnPurchaseSucceeded(product.storeSpecificId, data, transactionId);
		//     }
		//     else
		//     {
		//         PurchaseFailureReason reason = (PurchaseFailureReason) Enum.Parse(typeof(PurchaseFailureReason),
		//             k_Unknown);
		// 
		//         var reasonString = reason.ToString();
		//         var errDic = new Dictionary<string, object> {["error"] = reasonString};
		// 
		//         if (dic.ContainsKey("purchaseInfo"))
		//         {
		//             errDic["purchaseInfo"] = dic["purchaseInfo"];
		//         }
		// 
		//         var errData = errDic.toJson();
		//         var pfd = new PurchaseFailureDescription(product.storeSpecificId, reason, message);
		//         unity.OnPurchaseFailed(pfd);
		//     }
		// }, developerPayload);
		RuntimeObject* L_4 = __this->get_m_Bindings_19();
		U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * L_5 = V_0;
		NullCheck(L_5);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_6 = L_5->get_product_0();
		NullCheck(L_6);
		String_t* L_7 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_6, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * L_8 = V_0;
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_9 = (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 *)il2cpp_codegen_object_new(Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44_il2cpp_TypeInfo_var);
		Action_2__ctor_mE746EF9212D5F61E7F68240BE31C69D8CACFDDC3(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mCAFED78C4A2BA7252D5E6512AAEB107F5E29410F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE746EF9212D5F61E7F68240BE31C69D8CACFDDC3_RuntimeMethod_var);
		String_t* L_10 = ___developerPayload1;
		NullCheck(L_4);
		InterfaceActionInvoker3< String_t*, Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 *, String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.INativeUDPStore::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String) */, INativeUDPStore_t6D15B6453F17002782CAB783179C3E61B1BCE0FE_il2cpp_TypeInfo_var, L_4, L_7, L_9, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_FinishTransaction_m470E5EB1291D0250D16511759D2CB2DAC3B268E0 (UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_FinishTransaction_m470E5EB1291D0250D16511759D2CB2DAC3B268E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (product == null || transactionId == null)
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___product0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___transactionId1;
		if (L_1)
		{
			goto IL_0007;
		}
	}

IL_0006:
	{
		// return;
		return;
	}

IL_0007:
	{
		// if (product.type == ProductType.Consumable)
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_2 = ___product0;
		NullCheck(L_2);
		int32_t L_3 = ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		// m_Bindings.FinishTransaction(product, transactionId);
		RuntimeObject* L_4 = __this->get_m_Bindings_19();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_5 = ___product0;
		String_t* L_6 = ___transactionId1;
		NullCheck(L_4);
		InterfaceActionInvoker2< ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 *, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.INativeUDPStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String) */, INativeUDPStore_t6D15B6453F17002782CAB783179C3E61B1BCE0FE_il2cpp_TypeInfo_var, L_4, L_5, L_6);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_DictionaryToStringProperty_mDC95F9B4482CD468C63E53B336D96D4F76143FD2 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, RuntimeObject * ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_DictionaryToStringProperty_mDC95F9B4482CD468C63E53B336D96D4F76143FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_0 = NULL;
	int32_t V_1 = 0;
	PropertyInfo_t * V_2 = NULL;
	{
		// var properties = info.GetType().GetProperties();
		RuntimeObject * L_0 = ___info1;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_2 = Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D(L_1, /*hidden argument*/NULL);
		// foreach (var property in properties)
		V_0 = L_2;
		V_1 = 0;
		goto IL_0048;
	}

IL_0010:
	{
		// foreach (var property in properties)
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PropertyInfo_t * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (property.PropertyType == typeof(string))
		PropertyInfo_t * L_7 = V_2;
		NullCheck(L_7);
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_7);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_9, /*hidden argument*/NULL);
		bool L_11 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// property.SetValue(info, (string) dic.GetString(property.Name), null);
		PropertyInfo_t * L_12 = V_2;
		RuntimeObject * L_13 = ___info1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_14 = ___dic0;
		PropertyInfo_t * L_15 = V_2;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		String_t* L_17 = MiniJsonExtensions_GetString_m42E774E4F8E6A253C3A65D1F295542A19F0EE3A5(L_14, L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_12, L_13, L_17, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
	}

IL_0044:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0048:
	{
		// foreach (var property in properties)
		int32_t L_19 = V_1;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl__ctor_m2EBA67C45B5317EF1646E16AEEE2AEADA58AD1E1 (UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * __this, const RuntimeMethod* method)
{
	{
		JSONStore__ctor_mD682BBF25C5FE81FBC84F5D2001E224CF05CCFA5(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m213C1CF99C5564F985AC0A9282409C879E2C7457 (U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::<RetrieveProducts>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m020EC94DC56CEBFAAFA8DBCE474810C4F73C2285 (U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * __this, bool ___success0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_m020EC94DC56CEBFAAFA8DBCE474810C4F73C2285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (success && !string.IsNullOrEmpty(json))
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = ___json1;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// OnProductsRetrieved(json);
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_3 = __this->get_U3CU3E4__this_0();
		String_t* L_4 = ___json1;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String) */, L_3, L_4);
		// }
		return;
	}

IL_0018:
	{
		// m_Logger.Log("RetrieveProducts failed: " + json);
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_5 = __this->get_U3CU3E4__this_0();
		NullCheck(L_5);
		RuntimeObject* L_6 = ((JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B *)L_5)->get_m_Logger_8();
		String_t* L_7 = ___json1;
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral6924EAA29A3250A2EDE96D82BEEED19218ED1778, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_6, L_8);
		// };
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::<RetrieveProducts>b__1(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m7880AC237B144F453EBAB013DB422305FA56453B (U3CU3Ec__DisplayClass7_0_t269203273EFB4B92BB200188270161748564F5B6 * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m7880AC237B144F453EBAB013DB422305FA56453B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// m_LastInitError = "";
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		L_0->set_m_LastInitError_21(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// m_UserInfo = null;
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_1 = __this->get_U3CU3E4__this_0();
		NullCheck(L_1);
		L_1->set_m_UserInfo_20(NULL);
		// if (success)
		bool L_2 = ___success0;
		if (!L_2)
		{
			goto IL_0095;
		}
	}
	{
		// if (!string.IsNullOrEmpty(message))
		String_t* L_3 = ___message1;
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_006c;
		}
	}
	{
		// var dic = message.HashtableFromJson();
		String_t* L_5 = ___message1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_6 = MiniJsonExtensions_HashtableFromJson_mA595610C893A7E17982832DE2CEA5B5B33818056(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (dic.ContainsKey("Channel"))
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_7, _stringLiteral879F0B1BEF59EEEBF78CFD3A22F6F8077810CECF, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		// Type udpUserInfo = UserInfoInterface.GetClassType();
		Type_t * L_9 = UserInfoInterface_GetClassType_mE36B1BC3E79BFA8614D5EAE48997221C223A715B(/*hidden argument*/NULL);
		V_1 = L_9;
		// if (udpUserInfo != null)
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_10, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006c;
		}
	}
	{
		// m_UserInfo = Activator.CreateInstance(udpUserInfo);
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_12 = __this->get_U3CU3E4__this_0();
		Type_t * L_13 = V_1;
		RuntimeObject * L_14 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_m_UserInfo_20(L_14);
		// DictionaryToStringProperty(dic, m_UserInfo);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_15 = V_0;
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_16 = __this->get_U3CU3E4__this_0();
		NullCheck(L_16);
		RuntimeObject * L_17 = L_16->get_m_UserInfo_20();
		UDPImpl_DictionaryToStringProperty_mDC95F9B4482CD468C63E53B336D96D4F76143FD2(L_15, L_17, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// m_Initialized = true;
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_18 = __this->get_U3CU3E4__this_0();
		NullCheck(L_18);
		L_18->set_m_Initialized_22((bool)1);
		// m_Bindings.RetrieveProducts(products, retrieveCallback);
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_19 = __this->get_U3CU3E4__this_0();
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->get_m_Bindings_19();
		ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * L_21 = __this->get_products_1();
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_22 = __this->get_retrieveCallback_2();
		NullCheck(L_20);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 *, Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_t6D15B6453F17002782CAB783179C3E61B1BCE0FE_il2cpp_TypeInfo_var, L_20, L_21, L_22);
		// }
		return;
	}

IL_0095:
	{
		// m_LastInitError = message;
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_23 = __this->get_U3CU3E4__this_0();
		String_t* L_24 = ___message1;
		NullCheck(L_23);
		L_23->set_m_LastInitError_21(L_24);
		// unity.OnSetupFailed(InitializationFailureReason.AppNotKnown);
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_25 = __this->get_U3CU3E4__this_0();
		NullCheck(L_25);
		RuntimeObject* L_26 = ((JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B *)L_25)->get_unity_1();
		NullCheck(L_26);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_26, 2);
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
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m358BF1C9C0944309C79BC3D0CE902AFAF87CCCD8 (U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0::<Purchase>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mCAFED78C4A2BA7252D5E6512AAEB107F5E29410F (U3CU3Ec__DisplayClass8_0_t1F7F6D90BE66A3F1EAB5EEFBDC34E3BC2E92A386 * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mCAFED78C4A2BA7252D5E6512AAEB107F5E29410F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_6 = NULL;
	PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * V_7 = NULL;
	{
		// var dic = message.HashtableFromJson();
		String_t* L_0 = ___message1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = MiniJsonExtensions_HashtableFromJson_mA595610C893A7E17982832DE2CEA5B5B33818056(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (success)
		bool L_2 = ___success0;
		if (!L_2)
		{
			goto IL_00bd;
		}
	}
	{
		// var transactionId = dic.GetString("GameOrderId");
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_3 = V_0;
		String_t* L_4 = MiniJsonExtensions_GetString_m42E774E4F8E6A253C3A65D1F295542A19F0EE3A5(L_3, _stringLiteral0650DE9E26E2AA79CC57EDED9B8928F8668B9EA5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_1 = L_4;
		// var storeSpecificId = dic.GetString("ProductId");
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_5 = V_0;
		String_t* L_6 = MiniJsonExtensions_GetString_m42E774E4F8E6A253C3A65D1F295542A19F0EE3A5(L_5, _stringLiteralC9470C99119C4E0DCB89D108BEAC5078E9E95560, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (!string.IsNullOrEmpty(transactionId))
		String_t* L_7 = V_1;
		bool L_8 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		// dic["transactionId"] = transactionId;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_9 = V_0;
		String_t* L_10 = V_1;
		NullCheck(L_9);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_9, _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55, L_10, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0043:
	{
		// if (!string.IsNullOrEmpty(storeSpecificId))
		String_t* L_11 = V_2;
		bool L_12 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		// dic["storeSpecificId"] = storeSpecificId;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_13 = V_0;
		String_t* L_14 = V_2;
		NullCheck(L_13);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_13, _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA, L_14, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0057:
	{
		// if (!product.storeSpecificId.Equals(storeSpecificId))
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_15 = __this->get_product_0();
		NullCheck(L_15);
		String_t* L_16 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_15, /*hidden argument*/NULL);
		String_t* L_17 = V_2;
		NullCheck(L_16);
		bool L_18 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0098;
		}
	}
	{
		// m_Logger.LogFormat(LogType.Error,
		//     "UDPImpl received mismatching product Id for purchase. Expected {0}, received {1}",
		//     product.storeSpecificId, storeSpecificId);
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_19 = __this->get_U3CU3E4__this_1();
		NullCheck(L_19);
		RuntimeObject* L_20 = ((JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B *)L_19)->get_m_Logger_8();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_21;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_23 = __this->get_product_0();
		NullCheck(L_23);
		String_t* L_24 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_22;
		String_t* L_26 = V_2;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_26);
		NullCheck(L_20);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(8 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_20, 0, _stringLiteral4A4184D459A962FE4EB8DED81C690B6BFD3D1DC8, L_25);
	}

IL_0098:
	{
		// var data = dic.toJson();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_27 = V_0;
		String_t* L_28 = MiniJsonExtensions_toJson_mF139C5E119C82402C67514832326275DBA7067DA(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		// unity.OnPurchaseSucceeded(product.storeSpecificId, data, transactionId);
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_29 = __this->get_U3CU3E4__this_1();
		NullCheck(L_29);
		RuntimeObject* L_30 = ((JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B *)L_29)->get_unity_1();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_31 = __this->get_product_0();
		NullCheck(L_31);
		String_t* L_32 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_31, /*hidden argument*/NULL);
		String_t* L_33 = V_3;
		String_t* L_34 = V_1;
		NullCheck(L_30);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_30, L_32, L_33, L_34);
		// }
		return;
	}

IL_00bd:
	{
		// PurchaseFailureReason reason = (PurchaseFailureReason) Enum.Parse(typeof(PurchaseFailureReason),
		//     k_Unknown);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_35 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_37 = Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3(L_36, _stringLiteralBC7819B34FF87570745FBE461E36A16F80E562CE, /*hidden argument*/NULL);
		V_4 = ((*(int32_t*)((int32_t*)UnBox(L_37, PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var))));
		// var reasonString = reason.ToString();
		RuntimeObject * L_38 = Box(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_38);
		String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		V_4 = *(int32_t*)UnBox(L_38);
		V_5 = L_39;
		// var errDic = new Dictionary<string, object> {["error"] = reasonString};
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_40 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_40, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_41 = L_40;
		String_t* L_42 = V_5;
		NullCheck(L_41);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_41, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_42, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		V_6 = L_41;
		// if (dic.ContainsKey("purchaseInfo"))
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_43, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		if (!L_44)
		{
			goto IL_011f;
		}
	}
	{
		// errDic["purchaseInfo"] = dic["purchaseInfo"];
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_45 = V_6;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_46 = V_0;
		NullCheck(L_46);
		RuntimeObject * L_47 = Dictionary_2_get_Item_m5A987AD183687A89522922177A14425A5A1E4DB9(L_46, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, /*hidden argument*/Dictionary_2_get_Item_m5A987AD183687A89522922177A14425A5A1E4DB9_RuntimeMethod_var);
		NullCheck(L_45);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_45, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, L_47, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_011f:
	{
		// var errData = errDic.toJson();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_48 = V_6;
		MiniJsonExtensions_toJson_mF139C5E119C82402C67514832326275DBA7067DA(L_48, /*hidden argument*/NULL);
		// var pfd = new PurchaseFailureDescription(product.storeSpecificId, reason, message);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_49 = __this->get_product_0();
		NullCheck(L_49);
		String_t* L_50 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_49, /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		String_t* L_52 = ___message1;
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_53 = (PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C *)il2cpp_codegen_object_new(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C_il2cpp_TypeInfo_var);
		PurchaseFailureDescription__ctor_mADD0068215835A69610F2B0934E9ABCE68107354(L_53, L_50, L_51, L_52, /*hidden argument*/NULL);
		V_7 = L_53;
		// unity.OnPurchaseFailed(pfd);
		UDPImpl_t599F940A08ACBDBF3CF533435F7BFFA98E165E89 * L_54 = __this->get_U3CU3E4__this_1();
		NullCheck(L_54);
		RuntimeObject* L_55 = ((JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B *)L_54)->get_unity_1();
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_56 = V_7;
		NullCheck(L_55);
		InterfaceActionInvoker1< PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * >::Invoke(5 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_55, L_56);
		// }, developerPayload);
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
// System.Type UnityEngine.Purchasing.UDPReflectionUtils::GetTypeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UDPReflectionUtils_GetTypeByName_m76935CD19F4E1661BF41C7531637F5DF99758A25 (String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPReflectionUtils_GetTypeByName_m76935CD19F4E1661BF41C7531637F5DF99758A25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Type_t * V_3 = NULL;
	Type_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (s_typeCache.ContainsKey(typeName))
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
		Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * L_0 = ((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->get_s_typeCache_1();
		String_t* L_1 = ___typeName0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_mB2AFE00939E25519A9A547B432B339139688A57C(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB2AFE00939E25519A9A547B432B339139688A57C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return s_typeCache[typeName];
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
		Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * L_3 = ((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->get_s_typeCache_1();
		String_t* L_4 = ___typeName0;
		NullCheck(L_3);
		Type_t * L_5 = Dictionary_2_get_Item_m61BAD2DCD360856F59B04B784D0F1FD2A2D29A2A(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m61BAD2DCD360856F59B04B784D0F1FD2A2D29A2A_RuntimeMethod_var);
		return L_5;
	}

IL_0019:
	{
		// var assemblies = GetAllAssemblies();
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = UDPReflectionUtils_GetAllAssemblies_m6E12143E171ABE7E79AADB14E9698AA013BC073C(/*hidden argument*/NULL);
		// foreach (var assembly in assemblies)
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>::GetEnumerator() */, IEnumerable_1_tBFDC7AB9303FD887DBCCC85A53C8B5CAC97D3FB2_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a2;
		}

IL_0026:
		{
			U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 * L_8 = (U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass6_0__ctor_m9823C800C6FED13159D40DAAA4795570D2FAE8A6(L_8, /*hidden argument*/NULL);
			V_1 = L_8;
			// foreach (var assembly in assemblies)
			U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 * L_9 = V_1;
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			Assembly_t * L_11 = InterfaceFuncInvoker0< Assembly_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.Assembly>::get_Current() */, IEnumerator_1_tDC8F6184694A436104AFB088454AD2DAF27828BB_il2cpp_TypeInfo_var, L_10);
			NullCheck(L_9);
			L_9->set_assembly_0(L_11);
			// if (Array.Exists(k_whiteListedAssemblies, x => assembly.FullName.StartsWith(x)))
			IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = ((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->get_k_whiteListedAssemblies_2();
			U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 * L_13 = V_1;
			Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1 * L_14 = (Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1 *)il2cpp_codegen_object_new(Predicate_1_t1659E8BF0558E8AFCAE8175EB0B5FD7E43E5F9C1_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m17CA8384751563EEAE48688727FFCF8502F59551(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m9DEBF3A6E422010E6155DD2A1CFB9BF07A907584_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m17CA8384751563EEAE48688727FFCF8502F59551_RuntimeMethod_var);
			bool L_15 = Array_Exists_TisString_t_mE30BE3FC3C208B6A35AFB0E2A46E8CFCCD13C99F(L_12, L_14, /*hidden argument*/Array_Exists_TisString_t_mE30BE3FC3C208B6A35AFB0E2A46E8CFCCD13C99F_RuntimeMethod_var);
			if (!L_15)
			{
				goto IL_00a2;
			}
		}

IL_0050:
		{
			// var types = GetTypes(assembly);
			U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 * L_16 = V_1;
			NullCheck(L_16);
			Assembly_t * L_17 = L_16->get_assembly_0();
			IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
			RuntimeObject* L_18 = UDPReflectionUtils_GetTypes_m5F15A5EA649AA92299887D676D17788F1D616D6F(L_17, /*hidden argument*/NULL);
			// foreach (var type in types)
			NullCheck(L_18);
			RuntimeObject* L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_tF9225691990EF9799D9F4B64E4063CA0D1DF03CA_il2cpp_TypeInfo_var, L_18);
			V_2 = L_19;
		}

IL_0061:
		try
		{ // begin try (depth: 2)
			{
				goto IL_008e;
			}

IL_0063:
			{
				// foreach (var type in types)
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				Type_t * L_21 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_tD69E8826508E7125AE670336B26E5A752639FE46_il2cpp_TypeInfo_var, L_20);
				V_3 = L_21;
				// if (type.FullName == typeName)
				Type_t * L_22 = V_3;
				NullCheck(L_22);
				String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_22);
				String_t* L_24 = ___typeName0;
				bool L_25 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, L_24, /*hidden argument*/NULL);
				if (!L_25)
				{
					goto IL_008e;
				}
			}

IL_0078:
			{
				// s_typeCache[type.FullName] = type;
				IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
				Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * L_26 = ((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->get_s_typeCache_1();
				Type_t * L_27 = V_3;
				NullCheck(L_27);
				String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_27);
				Type_t * L_29 = V_3;
				NullCheck(L_26);
				Dictionary_2_set_Item_m60B22E9A8666DB6E008158D80A157634C3192837(L_26, L_28, L_29, /*hidden argument*/Dictionary_2_set_Item_m60B22E9A8666DB6E008158D80A157634C3192837_RuntimeMethod_var);
				// return type;
				Type_t * L_30 = V_3;
				V_4 = L_30;
				IL2CPP_LEAVE(0xBB, FINALLY_0098);
			}

IL_008e:
			{
				// foreach (var type in types)
				RuntimeObject* L_31 = V_2;
				NullCheck(L_31);
				bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_31);
				if (L_32)
				{
					goto IL_0063;
				}
			}

IL_0096:
			{
				IL2CPP_LEAVE(0xA2, FINALLY_0098);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0098;
		}

FINALLY_0098:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_33 = V_2;
				if (!L_33)
				{
					goto IL_00a1;
				}
			}

IL_009b:
			{
				RuntimeObject* L_34 = V_2;
				NullCheck(L_34);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_34);
			}

IL_00a1:
			{
				IL2CPP_END_FINALLY(152)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(152)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xBB, FINALLY_00af);
			IL2CPP_JUMP_TBL(0xA2, IL_00a2)
		}

IL_00a2:
		{
			// foreach (var assembly in assemblies)
			RuntimeObject* L_35 = V_0;
			NullCheck(L_35);
			bool L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_35);
			if (L_36)
			{
				goto IL_0026;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xB9, FINALLY_00af);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_37 = V_0;
			if (!L_37)
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			RuntimeObject* L_38 = V_0;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_38);
		}

IL_00b8:
		{
			IL2CPP_END_FINALLY(175)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
	}

IL_00b9:
	{
		// return null;
		return (Type_t *)NULL;
	}

IL_00bb:
	{
		// }
		Type_t * L_39 = V_4;
		return L_39;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> UnityEngine.Purchasing.UDPReflectionUtils::GetAllAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPReflectionUtils_GetAllAssemblies_m6E12143E171ABE7E79AADB14E9698AA013BC073C (const RuntimeMethod* method)
{
	{
		// return AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * L_0 = AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0(/*hidden argument*/NULL);
		NullCheck(L_0);
		AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_1 = AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23(L_0, /*hidden argument*/NULL);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> UnityEngine.Purchasing.UDPReflectionUtils::GetTypes(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPReflectionUtils_GetTypes_m5F15A5EA649AA92299887D676D17788F1D616D6F (Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPReflectionUtils_GetTypes_m5F15A5EA649AA92299887D676D17788F1D616D6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_0 = NULL;
	{
		// if (!s_assemblyTypeCache.TryGetValue(assembly, out var types))
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
		Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * L_0 = ((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->get_s_assemblyTypeCache_0();
		Assembly_t * L_1 = ___assembly0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mD9362798CAFBCC0EC84A18FFA58185FD60249EF0(L_0, L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mD9362798CAFBCC0EC84A18FFA58185FD60249EF0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// types = assembly.GetTypes();
		Assembly_t * L_3 = ___assembly0;
		NullCheck(L_3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_4 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(13 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_3);
		V_0 = L_4;
		// s_assemblyTypeCache[assembly] = types;
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
		Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * L_5 = ((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->get_s_assemblyTypeCache_0();
		Assembly_t * L_6 = ___assembly0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_7 = V_0;
		NullCheck(L_5);
		Dictionary_2_set_Item_mC117EF735EF8C5ACA16F81A21C88F06F8E0A350A(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_mC117EF735EF8C5ACA16F81A21C88F06F8E0A350A_RuntimeMethod_var);
	}

IL_0022:
	{
		// return types;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
// System.Void UnityEngine.Purchasing.UDPReflectionUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPReflectionUtils__cctor_m163B59E7C2074193C7880167B734EE92DC7770CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPReflectionUtils__cctor_m163B59E7C2074193C7880167B734EE92DC7770CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<Assembly, Type[]> s_assemblyTypeCache = new Dictionary<Assembly, Type[]>();
		Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 * L_0 = (Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420 *)il2cpp_codegen_object_new(Dictionary_2_t43239B2F7BDF2E1736DA874ACCD165C10A2ED420_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDBCA5914D743B21AF6FDFE61315BE5B44FCDA9F3(L_0, /*hidden argument*/Dictionary_2__ctor_mDBCA5914D743B21AF6FDFE61315BE5B44FCDA9F3_RuntimeMethod_var);
		((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->set_s_assemblyTypeCache_0(L_0);
		// static Dictionary<string, Type> s_typeCache = new Dictionary<string, Type>();
		Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 * L_1 = (Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7 *)il2cpp_codegen_object_new(Dictionary_2_tC8A571CC573451CE6BC80D6EF755F2B1B23C54A7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5A51097DB031E5558B864F77AA2BB488B23736F5(L_1, /*hidden argument*/Dictionary_2__ctor_m5A51097DB031E5558B864F77AA2BB488B23736F5_RuntimeMethod_var);
		((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->set_s_typeCache_1(L_1);
		// static readonly string[] k_whiteListedAssemblies = {"UnityEngine", "UnityEditor", "UDP", "com.unity"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral50D86FCBE2ABB9A65B07323B311FF2296682029D);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral50D86FCBE2ABB9A65B07323B311FF2296682029D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1A1DCCB1D5BC0A7A3EFB09F20E038D03DC5D80A1);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1A1DCCB1D5BC0A7A3EFB09F20E038D03DC5D80A1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralE9A6F622E340090FEB219EB5C94B0DF756E8E486);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE9A6F622E340090FEB219EB5C94B0DF756E8E486);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral827D1E5DDFC3FF9C18C0A4496AF384B97410A035);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral827D1E5DDFC3FF9C18C0A4496AF384B97410A035);
		((UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_StaticFields*)il2cpp_codegen_static_fields_for(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var))->set_k_whiteListedAssemblies_2(L_6);
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
// System.Void UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m9823C800C6FED13159D40DAAA4795570D2FAE8A6 (U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::<GetTypeByName>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m9DEBF3A6E422010E6155DD2A1CFB9BF07A907584 (U3CU3Ec__DisplayClass6_0_t5E0ADF131542E53A2BC4C53E3573CDE0A5BCF553 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// if (Array.Exists(k_whiteListedAssemblies, x => assembly.FullName.StartsWith(x)))
		Assembly_t * L_0 = __this->get_assembly_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_0);
		String_t* L_2 = ___x0;
		NullCheck(L_1);
		bool L_3 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Purchasing.UIFakeStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore__ctor_m3AC4FBC8B0246B26706AD6CF0525775756AC9BF5 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	{
		// public UIFakeStore() {
		FakeStore__ctor_m3AB6D878CB8D1C4CDFB930CD136B369F3433C3C3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>,System.Action`2<System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_StartUI_mCE81711C83C1FC9837E6C0DBD183455FF0921D26 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, String_t* ___queryText0, String_t* ___okayButtonText1, String_t* ___cancelButtonText2, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___options3, Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_StartUI_mCE81711C83C1FC9837E6C0DBD183455FF0921D26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * V_0 = NULL;
	{
		// if (IsShowingDialog())
		bool L_0 = UIFakeStore_IsShowingDialog_m111FF741668A3DABF14A60A9726C80D140021CD0(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// DialogRequest dr = new DialogRequest ();
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_1 = (DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 *)il2cpp_codegen_object_new(DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0_il2cpp_TypeInfo_var);
		DialogRequest__ctor_mC9EB7A725A054BE3EC60F8D14FAB0DDEE6E33F19(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// dr.QueryText = queryText;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_2 = V_0;
		String_t* L_3 = ___queryText0;
		NullCheck(L_2);
		L_2->set_QueryText_0(L_3);
		// dr.OkayButtonText = okayButtonText;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_4 = V_0;
		String_t* L_5 = ___okayButtonText1;
		NullCheck(L_4);
		L_4->set_OkayButtonText_1(L_5);
		// dr.CancelButtonText = cancelButtonText;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_6 = V_0;
		String_t* L_7 = ___cancelButtonText2;
		NullCheck(L_6);
		L_6->set_CancelButtonText_2(L_7);
		// dr.Options = options;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_8 = V_0;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_9 = ___options3;
		NullCheck(L_8);
		L_8->set_Options_3(L_9);
		// dr.Callback = callback;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_10 = V_0;
		Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * L_11 = ___callback4;
		NullCheck(L_10);
		L_10->set_Callback_4(L_11);
		// m_CurrentDialog = dr;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_12 = V_0;
		__this->set_m_CurrentDialog_24(L_12);
		// InstantiateDialog();
		UIFakeStore_InstantiateDialog_m2A034F285F29B8CEF55C4782DDFF5BE3D8FCF08A(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_InstantiateDialog_m2A034F285F29B8CEF55C4782DDFF5BE3D8FCF08A (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_InstantiateDialog_m2A034F285F29B8CEF55C4782DDFF5BE3D8FCF08A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * V_0 = NULL;
	Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (m_CurrentDialog == null)
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_0 = __this->get_m_CurrentDialog_24();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError(this + " requires m_CurrentDialog. Not showing dialog.");
		String_t* L_1 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(__this, _stringLiteral1ADA184F1D1A8E8B4B4B2D86D2C26C1CB9D8F313, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// if (UIFakeStoreCanvasPrefab == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_UIFakeStoreCanvasPrefab_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// UIFakeStoreCanvasPrefab = Resources.Load("UIFakeStoreCanvas") as GameObject;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_4 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralE429FB2288A21731831D07F6A3F28574CAD4130E, /*hidden argument*/NULL);
		__this->set_UIFakeStoreCanvasPrefab_26(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_4, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)));
	}

IL_003c:
	{
		// Canvas dialogCanvas = UIFakeStoreCanvasPrefab.GetComponent<Canvas>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_UIFakeStoreCanvasPrefab_26();
		NullCheck(L_5);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_6 = GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m5EA55BE80E8E0FB0551D6C16C2BC57A726758C9A(L_5, /*hidden argument*/GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m5EA55BE80E8E0FB0551D6C16C2BC57A726758C9A_RuntimeMethod_var);
		V_0 = L_6;
		// m_Canvas = Object.Instantiate(dialogCanvas);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_8 = Object_Instantiate_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m65B1DDB2A33E146C2F5006F6613DC2B243475C98(L_7, /*hidden argument*/Object_Instantiate_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m65B1DDB2A33E146C2F5006F6613DC2B243475C98_RuntimeMethod_var);
		__this->set_m_Canvas_27(L_8);
		// LifecycleNotifier notifier = m_Canvas.gameObject.AddComponent<LifecycleNotifier>() as LifecycleNotifier;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_9 = __this->get_m_Canvas_27();
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		LifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2 * L_11 = GameObject_AddComponent_TisLifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2_m9EEFB6E4EA02CF046313922460E5162CCDECC690(L_10, /*hidden argument*/GameObject_AddComponent_TisLifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2_m9EEFB6E4EA02CF046313922460E5162CCDECC690_RuntimeMethod_var);
		// notifier.OnDestroyCallback = () =>
		// {
		//     // Indicates we've completely closed our dialog
		//     m_CurrentDialog = null;
		// };
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_12 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_12, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m9FBF7D6C41752C3D937F1768DD1BCDD845A355AE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_OnDestroyCallback_4(L_12);
		// m_ParentGameObjectPath = m_Canvas.name + "/Panel/";
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_13 = __this->get_m_Canvas_27();
		NullCheck(L_13);
		String_t* L_14 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_14, _stringLiteralC039C05D919B5F6F72A138DFB099EAE2E67B89A6, /*hidden argument*/NULL);
		__this->set_m_ParentGameObjectPath_29(L_15);
		// if (Object.FindObjectOfType<EventSystem>() == null)
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_16 = Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_mFDC6858AC164D8FD294829103D93ED606CDE939A(/*hidden argument*/Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_mFDC6858AC164D8FD294829103D93ED606CDE939A_RuntimeMethod_var);
		bool L_17 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_16, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00e7;
		}
	}
	{
		// m_EventSystem = new GameObject("EventSystem", typeof(EventSystem));
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_18 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_19 = L_18;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_20 = { reinterpret_cast<intptr_t> (EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_m20BE06980A232E1D64016957059A9DD834173F68(L_22, _stringLiteral68DEF667D36D69C74A4858297D53552058192BC2, L_19, /*hidden argument*/NULL);
		__this->set_m_EventSystem_28(L_22);
		// m_EventSystem.AddComponent<StandaloneInputModule>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = __this->get_m_EventSystem_28();
		NullCheck(L_23);
		GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m1562E9B9218AF5A21D0D838E830E1245A737F677(L_23, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m1562E9B9218AF5A21D0D838E830E1245A737F677_RuntimeMethod_var);
		// m_EventSystem.transform.parent = m_Canvas.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_m_EventSystem_28();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_26 = __this->get_m_Canvas_27();
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_25, L_27, /*hidden argument*/NULL);
	}

IL_00e7:
	{
		// var qt = GameObject.Find(m_ParentGameObjectPath + "HeaderText");
		String_t* L_28 = __this->get_m_ParentGameObjectPath_29();
		String_t* L_29 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_28, _stringLiteralCE303C0991F6ED665CA1B89420A443F1CB8BD6A0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_29, /*hidden argument*/NULL);
		// Text queryTextComponent = qt.GetComponent<Text>();
		NullCheck(L_30);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_31 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_30, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		// queryTextComponent.text = m_CurrentDialog.QueryText;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_32 = __this->get_m_CurrentDialog_24();
		NullCheck(L_32);
		String_t* L_33 = L_32->get_QueryText_0();
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_33);
		// Text allowText = GetOkayButtonText();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_34 = UIFakeStore_GetOkayButtonText_m10765D1A2AF34015874DF8D79795370875168F64(__this, /*hidden argument*/NULL);
		// allowText.text = m_CurrentDialog.OkayButtonText;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_35 = __this->get_m_CurrentDialog_24();
		NullCheck(L_35);
		String_t* L_36 = L_35->get_OkayButtonText_1();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_36);
		// Text denyText = GetCancelButtonText();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_37 = UIFakeStore_GetCancelButtonText_m169D92F9F3CCD926F9D469C886ABD750E7AF550F(__this, /*hidden argument*/NULL);
		// denyText.text = m_CurrentDialog.CancelButtonText;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_38 = __this->get_m_CurrentDialog_24();
		NullCheck(L_38);
		String_t* L_39 = L_38->get_CancelButtonText_2();
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_39);
		// GetDropdown().options.Clear(); // Assume it has defaults prepopulated
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_40 = UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83 * L_41 = Dropdown_get_options_mE95E87D4EA905E9769CE8AC1CD1D9DB86A34F823(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		List_1_Clear_m0F6A2806D11105299DC8E4D83E06D49BAABB8ABE(L_41, /*hidden argument*/List_1_Clear_m0F6A2806D11105299DC8E4D83E06D49BAABB8ABE_RuntimeMethod_var);
		// foreach (var item in m_CurrentDialog.Options)
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_42 = __this->get_m_CurrentDialog_24();
		NullCheck(L_42);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_43 = L_42->get_Options_3();
		NullCheck(L_43);
		Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  L_44 = List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE(L_43, /*hidden argument*/List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE_RuntimeMethod_var);
		V_1 = L_44;
	}

IL_015e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_017e;
		}

IL_0160:
		{
			// foreach (var item in m_CurrentDialog.Options)
			String_t* L_45 = Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_inline((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_1), /*hidden argument*/Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_RuntimeMethod_var);
			V_2 = L_45;
			// GetDropdown().options.Add(new Dropdown.OptionData(item));
			Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_46 = UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14(__this, /*hidden argument*/NULL);
			NullCheck(L_46);
			List_1_t0DDB27AB6344CB9453EA6F22B7CB0057BD9F5D83 * L_47 = Dropdown_get_options_mE95E87D4EA905E9769CE8AC1CD1D9DB86A34F823(L_46, /*hidden argument*/NULL);
			String_t* L_48 = V_2;
			OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * L_49 = (OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 *)il2cpp_codegen_object_new(OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831_il2cpp_TypeInfo_var);
			OptionData__ctor_m8AA4FDEB8771F714C90DF651743B77E0C75DEC00(L_49, L_48, /*hidden argument*/NULL);
			NullCheck(L_47);
			List_1_Add_mE0B46236A82E92B7F76C0F3A94ABBD0F4625A77C(L_47, L_49, /*hidden argument*/List_1_Add_mE0B46236A82E92B7F76C0F3A94ABBD0F4625A77C_RuntimeMethod_var);
		}

IL_017e:
		{
			// foreach (var item in m_CurrentDialog.Options)
			bool L_50 = Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_0160;
			}
		}

IL_0187:
		{
			IL2CPP_LEAVE(0x197, FINALLY_0189);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0189;
	}

FINALLY_0189:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_1), /*hidden argument*/Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(393)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(393)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x197, IL_0197)
	}

IL_0197:
	{
		// if (m_CurrentDialog.Options.Count > 0)
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_51 = __this->get_m_CurrentDialog_24();
		NullCheck(L_51);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_52 = L_51->get_Options_3();
		NullCheck(L_52);
		int32_t L_53 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_52, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_01b1;
		}
	}
	{
		// m_LastSelectedDropdownIndex = 0;
		__this->set_m_LastSelectedDropdownIndex_25(0);
	}

IL_01b1:
	{
		// GetDropdown().RefreshShownValue();
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_54 = UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Dropdown_RefreshShownValue_m310DF4ABCFE31C74153AAE3874B40DDF3D6959E1(L_54, /*hidden argument*/NULL);
		// GetOkayButton().onClick.AddListener(() => {
		//     this.OkayButtonClicked();
		// });
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_55 = UIFakeStore_GetOkayButton_mFA4103ECF0E8BB3F0CEF5735EB32858F880C6E9B(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_56 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_55, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_57 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_57, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m404CCCDBE2F1BC2ECE78CA1867492305FF5F2E51_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_56);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_56, L_57, /*hidden argument*/NULL);
		// GetCancelButton().onClick.AddListener(() => {
		//     this.CancelButtonClicked();
		// });
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_58 = UIFakeStore_GetCancelButton_mD4BDD5C94EA6B5A31361863E99272C14C07634F0(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_59 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_58, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_60 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_60, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_2_mC45E6B524E3ABF2ED95EB75BAC79AB5AB79A7E4B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_59);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_59, L_60, /*hidden argument*/NULL);
		// GetDropdown().onValueChanged.AddListener((int selectedItem) => {
		//     this.DropdownValueChanged(selectedItem);
		// });
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_61 = UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * L_62 = Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline(L_61, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_63 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)il2cpp_codegen_object_new(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m35AC6924803D95F2FC0AE8A388AC0C3698334222(L_63, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_3_m8BEAD3289EC70DC9622AB8DB5211FE4C748D6708_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m35AC6924803D95F2FC0AE8A388AC0C3698334222_RuntimeMethod_var);
		NullCheck(L_62);
		UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967(L_62, L_63, /*hidden argument*/UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_RuntimeMethod_var);
		// if (UIMode == FakeStoreUIMode.StandardUser)
		int32_t L_64 = ((FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF *)__this)->get_UIMode_23();
		if ((!(((uint32_t)L_64) == ((uint32_t)1))))
		{
			goto IL_0235;
		}
	}
	{
		// GetDropdown ().onValueChanged.RemoveAllListeners ();
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_65 = UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * L_66 = Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_66, /*hidden argument*/NULL);
		// GameObject.Destroy (GetDropdownContainerGameObject ());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_67 = UIFakeStore_GetDropdownContainerGameObject_mBD36398BEE313882E80EB1B81D79E6DB1F8D7AB3(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_67, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0235:
	{
		// else if (UIMode == FakeStoreUIMode.DeveloperUser)
		int32_t L_68 = ((FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF *)__this)->get_UIMode_23();
		if ((!(((uint32_t)L_68) == ((uint32_t)2))))
		{
			goto IL_0259;
		}
	}
	{
		// GetCancelButton().onClick.RemoveAllListeners();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_69 = UIFakeStore_GetCancelButton_mD4BDD5C94EA6B5A31361863E99272C14C07634F0(__this, /*hidden argument*/NULL);
		NullCheck(L_69);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_70 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_70, /*hidden argument*/NULL);
		// GameObject.Destroy (GetCancelButtonGameObject ());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_71 = UIFakeStore_GetCancelButtonGameObject_mAC85CED50F0CA7D71982644618D9423F1341A624(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_71, /*hidden argument*/NULL);
	}

IL_0259:
	{
		// }
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore::CreatePurchaseQuestion(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIFakeStore_CreatePurchaseQuestion_m325DAC9055DE2FFCCA324935457B51D2028169BD (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___definition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CreatePurchaseQuestion_m325DAC9055DE2FFCCA324935457B51D2028169BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Do you want to Purchase " + definition.id + "?" + EnvironmentDescriptionPostfix;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___definition0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral612CCEAFC5E6C12AB161F0817E11A34091FDC66F, L_1, _stringLiteral91307256DBF150F37E879000F1FC6DD8A4F61A55, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore::CreateRetrieveProductsQuestion(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIFakeStore_CreateRetrieveProductsQuestion_m982989821B70A36922D6D5B0DE43F114A63F51CB (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * ___definitions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CreateRetrieveProductsQuestion_m982989821B70A36922D6D5B0DE43F114A63F51CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	{
		// string title = "Do you want to initialize purchasing for products {";
		V_0 = _stringLiteral3E2A8439E4695DDC6BC1202334D8B1BB4B30A081;
		// title += string.Join(", ", definitions.Take(RetrieveProductsDescriptionCount).Select(pid => pid.id).ToArray());
		String_t* L_0 = V_0;
		ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * L_1 = ___definitions0;
		RuntimeObject* L_2 = Enumerable_Take_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_mF32335274B246A4E4D14DF74E057DA86AA3BB4B3(L_1, 2, /*hidden argument*/Enumerable_Take_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_mF32335274B246A4E4D14DF74E057DA86AA3BB4B3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_il2cpp_TypeInfo_var);
		Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * L_3 = ((U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
		G_B1_3 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
			G_B2_3 = L_0;
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_il2cpp_TypeInfo_var);
		U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 * L_5 = ((U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * L_6 = (Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 *)il2cpp_codegen_object_new(Func_2_t4F73E32FDE937DA6ED16932395122191E9837732_il2cpp_TypeInfo_var);
		Func_2__ctor_mCE8D097485C259C0294A0C8D6A2134782DBC3055(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m852F7D5FBF166CA57890D06F1D21A076116247A7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCE8D097485C259C0294A0C8D6A2134782DBC3055_RuntimeMethod_var);
		Func_2_t4F73E32FDE937DA6ED16932395122191E9837732 * L_7 = L_6;
		((U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0032:
	{
		RuntimeObject* L_8 = Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisString_t_mDCB16E76F44752CD2604A121727880DEE335250A(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisString_t_mDCB16E76F44752CD2604A121727880DEE335250A_RuntimeMethod_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = Enumerable_ToArray_TisString_t_m34F0EB317BEC1783F5D3E46852744966D246040C(L_8, /*hidden argument*/Enumerable_ToArray_TisString_t_m34F0EB317BEC1783F5D3E46852744966D246040C_RuntimeMethod_var);
		String_t* L_10 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(G_B2_2, L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(G_B2_3, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// if (definitions.Count > RetrieveProductsDescriptionCount)
		ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * L_12 = ___definitions0;
		NullCheck(L_12);
		int32_t L_13 = ReadOnlyCollection_1_get_Count_mBC0899C994D3FA5725FC61B8E104F2D5DF8B0C86(L_12, /*hidden argument*/ReadOnlyCollection_1_get_Count_mBC0899C994D3FA5725FC61B8E104F2D5DF8B0C86_RuntimeMethod_var);
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_005c;
		}
	}
	{
		// title += ", ...";
		String_t* L_14 = V_0;
		String_t* L_15 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_14, _stringLiteral256DAE5FE812DD0A653073C3C142A5D806F220A4, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// title += "}?" + EnvironmentDescriptionPostfix;
		String_t* L_16 = V_0;
		String_t* L_17 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_16, _stringLiteralF4B93D791AC7157AD28161C767FFDE25B19D3F5C, /*hidden argument*/NULL);
		V_0 = L_17;
		// return title;
		String_t* L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * UIFakeStore_GetOkayButton_mFA4103ECF0E8BB3F0CEF5735EB32858F880C6E9B (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetOkayButton_mFA4103ECF0E8BB3F0CEF5735EB32858F880C6E9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GameObject.Find(m_ParentGameObjectPath + "Button1").GetComponent<Button>();
		String_t* L_0 = __this->get_m_ParentGameObjectPath_29();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral90B6C7CAE0684A0F98CF10CC368E2592F0962CCD, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * UIFakeStore_GetCancelButton_mD4BDD5C94EA6B5A31361863E99272C14C07634F0 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButton_mD4BDD5C94EA6B5A31361863E99272C14C07634F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject gameObject = GameObject.Find (m_ParentGameObjectPath + "Button2");
		String_t* L_0 = __this->get_m_ParentGameObjectPath_29();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral57B4B0A1A4CF3BDCB8E8681D5D4224017FA907BC, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (gameObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return gameObject.GetComponent<Button>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_0;
		NullCheck(L_5);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_6 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_5, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		return L_6;
	}

IL_0026:
	{
		// return null;
		return (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UIFakeStore_GetCancelButtonGameObject_mAC85CED50F0CA7D71982644618D9423F1341A624 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButtonGameObject_mAC85CED50F0CA7D71982644618D9423F1341A624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GameObject.Find (m_ParentGameObjectPath + "Button2");
		String_t* L_0 = __this->get_m_ParentGameObjectPath_29();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral57B4B0A1A4CF3BDCB8E8681D5D4224017FA907BC, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UIFakeStore_GetOkayButtonText_m10765D1A2AF34015874DF8D79795370875168F64 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetOkayButtonText_m10765D1A2AF34015874DF8D79795370875168F64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GameObject.Find (m_ParentGameObjectPath + "Button1/Text").GetComponent<Text> ();
		String_t* L_0 = __this->get_m_ParentGameObjectPath_29();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral8D07EC60F2CF6909F3E4F72A9EE7313D45135EE3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_2, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UIFakeStore_GetCancelButtonText_m169D92F9F3CCD926F9D469C886ABD750E7AF550F (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButtonText_m169D92F9F3CCD926F9D469C886ABD750E7AF550F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GameObject.Find (m_ParentGameObjectPath + "Button2/Text").GetComponent<Text> ();
		String_t* L_0 = __this->get_m_ParentGameObjectPath_29();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralD8FAE6A4434F8709F349B6E9420638C8FD6886E8, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_2, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// var gameObject = GameObject.Find (m_ParentGameObjectPath + "Panel2/Panel3/Dropdown");
		String_t* L_0 = __this->get_m_ParentGameObjectPath_29();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral86CFC158C16EBD828F9FD0FFE04C280216023CA9, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (gameObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return gameObject.GetComponent<Dropdown> ();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_0;
		NullCheck(L_5);
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_6 = GameObject_GetComponent_TisDropdown_tF6331401084B1213CAB10587A6EC81461501930F_mCEDADB496C533D2B1022FE5C0B5D68493866A5E2(L_5, /*hidden argument*/GameObject_GetComponent_TisDropdown_tF6331401084B1213CAB10587A6EC81461501930F_mCEDADB496C533D2B1022FE5C0B5D68493866A5E2_RuntimeMethod_var);
		return L_6;
	}

IL_0026:
	{
		// return null;
		return (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UIFakeStore_GetDropdownContainerGameObject_mBD36398BEE313882E80EB1B81D79E6DB1F8D7AB3 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetDropdownContainerGameObject_mBD36398BEE313882E80EB1B81D79E6DB1F8D7AB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GameObject.Find(m_ParentGameObjectPath + "Panel2");
		String_t* L_0 = __this->get_m_ParentGameObjectPath_29();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral86479F128971C5FEA69496AB7A91F4897C770FAC, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_OkayButtonClicked_m08943589D1FD46D5F9C84C780B14B41CCB84AAB0 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_OkayButtonClicked_m08943589D1FD46D5F9C84C780B14B41CCB84AAB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (m_LastSelectedDropdownIndex == 0 || UIMode != FakeStoreUIMode.DeveloperUser)
		int32_t L_0 = __this->get_m_LastSelectedDropdownIndex_25();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ((FakeStore_t3B790CA12C26FC893C3B1427AEEB8A199E9C69CF *)__this)->get_UIMode_23();
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		// result = true;
		V_0 = (bool)1;
	}

IL_0015:
	{
		// int codeValue = Math.Max(0, m_LastSelectedDropdownIndex - 1); // Pop SuccessString
		int32_t L_2 = __this->get_m_LastSelectedDropdownIndex_25();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_3 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		// m_CurrentDialog.Callback(result, codeValue);
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_4 = __this->get_m_CurrentDialog_24();
		NullCheck(L_4);
		Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * L_5 = L_4->get_Callback_4();
		bool L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		Action_2_Invoke_mD9405730668E8C5A369C5F533812713E3F0E8010(L_5, L_6, L_7, /*hidden argument*/Action_2_Invoke_mD9405730668E8C5A369C5F533812713E3F0E8010_RuntimeMethod_var);
		// CloseDialog();
		UIFakeStore_CloseDialog_m4DDF7697C7D910950ADAE661CE0876EB72E7C86B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CancelButtonClicked_mB6A00EF6EC31658ADEA04963C173759305CD7259 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CancelButtonClicked_mB6A00EF6EC31658ADEA04963C173759305CD7259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int codeValue = Math.Max(0, m_LastSelectedDropdownIndex - 1); // Pop SuccessString
		int32_t L_0 = __this->get_m_LastSelectedDropdownIndex_25();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_1 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_1;
		// m_CurrentDialog.Callback(false, codeValue);
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_2 = __this->get_m_CurrentDialog_24();
		NullCheck(L_2);
		Action_2_tEB9373E8B81B0B3EC4F138738D1E3EF2254910F8 * L_3 = L_2->get_Callback_4();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Action_2_Invoke_mD9405730668E8C5A369C5F533812713E3F0E8010(L_3, (bool)0, L_4, /*hidden argument*/Action_2_Invoke_mD9405730668E8C5A369C5F533812713E3F0E8010_RuntimeMethod_var);
		// CloseDialog();
		UIFakeStore_CloseDialog_m4DDF7697C7D910950ADAE661CE0876EB72E7C86B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_DropdownValueChanged_m9EF23C99DDC1BBFF8A7DEFD5CD8FA4608187CF78 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, int32_t ___selectedItem0, const RuntimeMethod* method)
{
	{
		// m_LastSelectedDropdownIndex = selectedItem;
		int32_t L_0 = ___selectedItem0;
		__this->set_m_LastSelectedDropdownIndex_25(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CloseDialog_m4DDF7697C7D910950ADAE661CE0876EB72E7C86B (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CloseDialog_m4DDF7697C7D910950ADAE661CE0876EB72E7C86B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurrentDialog = null;
		__this->set_m_CurrentDialog_24((DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 *)NULL);
		// GetOkayButton().onClick.RemoveAllListeners();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = UIFakeStore_GetOkayButton_mFA4103ECF0E8BB3F0CEF5735EB32858F880C6E9B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_1 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_1, /*hidden argument*/NULL);
		// if (GetCancelButton ())
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = UIFakeStore_GetCancelButton_mD4BDD5C94EA6B5A31361863E99272C14C07634F0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// GetCancelButton().onClick.RemoveAllListeners();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_4 = UIFakeStore_GetCancelButton_mD4BDD5C94EA6B5A31361863E99272C14C07634F0(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_5 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// if (GetDropdown () != null)
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_6 = UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// GetDropdown ().onValueChanged.RemoveAllListeners ();
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_8 = UIFakeStore_GetDropdown_m950037CA68A4DB89B0788881F750FA6B0A270F14(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * L_9 = Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_9, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// GameObject.Destroy(m_Canvas.gameObject);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_10 = __this->get_m_Canvas_27();
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_IsShowingDialog_m111FF741668A3DABF14A60A9726C80D140021CD0 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	{
		// return m_CurrentDialog != null;
		DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * L_0 = __this->get_m_CurrentDialog_24();
		return (bool)((!(((RuntimeObject*)(DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m9FBF7D6C41752C3D937F1768DD1BCDD845A355AE (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	{
		// m_CurrentDialog = null;
		__this->set_m_CurrentDialog_24((DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 *)NULL);
		// };
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m404CCCDBE2F1BC2ECE78CA1867492305FF5F2E51 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	{
		// this.OkayButtonClicked();
		UIFakeStore_OkayButtonClicked_m08943589D1FD46D5F9C84C780B14B41CCB84AAB0(__this, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_2_mC45E6B524E3ABF2ED95EB75BAC79AB5AB79A7E4B (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, const RuntimeMethod* method)
{
	{
		// this.CancelButtonClicked();
		UIFakeStore_CancelButtonClicked_mB6A00EF6EC31658ADEA04963C173759305CD7259(__this, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_3_m8BEAD3289EC70DC9622AB8DB5211FE4C748D6708 (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, int32_t ___selectedItem0, const RuntimeMethod* method)
{
	{
		// this.DropdownValueChanged(selectedItem);
		int32_t L_0 = ___selectedItem0;
		UIFakeStore_DropdownValueChanged_m9EF23C99DDC1BBFF8A7DEFD5CD8FA4608187CF78_inline(__this, L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFCE2F9321E792D2662707A5FB565228778B2531B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mFCE2F9321E792D2662707A5FB565228778B2531B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 * L_0 = (U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 *)il2cpp_codegen_object_new(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE8A1A9ED594EC570CFF90D8BA55FBF18D1A21E37(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE8A1A9ED594EC570CFF90D8BA55FBF18D1A21E37 (U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore/<>c::<CreateRetrieveProductsQuestion>b__18_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m852F7D5FBF166CA57890D06F1D21A076116247A7 (U3CU3Ec_tF4D22DC33DBC0C531C13614DF71FED3FFBAF62E9 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___pid0, const RuntimeMethod* method)
{
	{
		// title += string.Join(", ", definitions.Take(RetrieveProductsDescriptionCount).Select(pid => pid.id).ToArray());
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___pid0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_id_mCE9454D6DD3ED1C62F89A31162A6E00BDF0DC522_inline(L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UIFakeStore/DialogRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogRequest__ctor_mC9EB7A725A054BE3EC60F8D14FAB0DDEE6E33F19 (DialogRequest_t7CC27D6F856F294AC1EC62DD82298CCF81E94ED0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleNotifier_OnDestroy_m718BB63925801D67B111DA240CE170EFE7B41484 (LifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2 * __this, const RuntimeMethod* method)
{
	{
		// if (OnDestroyCallback != null)
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_OnDestroyCallback_4();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// OnDestroyCallback();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = __this->get_OnDestroyCallback_4();
		NullCheck(L_1);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleNotifier__ctor_mC60EED98BC93A27BAABC9C52D8114C0DC7D1F4D9 (LifecycleNotifier_tE780505BF8EB364EC5B1BECA2AF503824E3B68D2 * __this, const RuntimeMethod* method)
{
	{
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
// System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_typeCache == null)
		Type_t * L_0 = ((UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_StaticFields*)il2cpp_codegen_static_fields_for(UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// s_typeCache = UDPReflectionUtils.GetTypeByName(UDPReflectionConsts.k_UdpIapBridgeType);
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
		Type_t * L_2 = UDPReflectionUtils_GetTypeByName_m76935CD19F4E1661BF41C7531637F5DF99758A25(_stringLiteralF4C8FA3454083851E6E98BE6A8AEBF7F806185FE, /*hidden argument*/NULL);
		((UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_StaticFields*)il2cpp_codegen_static_fields_for(UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_il2cpp_TypeInfo_var))->set_s_typeCache_0(L_2);
	}

IL_001c:
	{
		// return s_typeCache;
		Type_t * L_3 = ((UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_StaticFields*)il2cpp_codegen_static_fields_for(UdpIapBridgeInterface_t230AEC2ED717CEBCD28E2E77AD5A95733648A63D_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetInitMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetInitMethod_m5E6E787525C5734D687FA3D0039435A369580B63 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetInitMethod_m5E6E787525C5734D687FA3D0039435A369580B63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetClassType().GetMethod(UDPReflectionConsts.k_UdpIapBridgeInitMethod, UDPReflectionUtils.k_InstanceBindingFlags);
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1(/*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD(L_0, _stringLiteralA459DFF3012DA591453989E5860A6FD825F63CE3, ((int32_t)20), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetPurchaseMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetPurchaseMethod_mD59C6526FFC5C528BE73B66ADDD3BB4ADAAF2B64 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetPurchaseMethod_mD59C6526FFC5C528BE73B66ADDD3BB4ADAAF2B64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetClassType().GetMethod(UDPReflectionConsts.k_UdpIapBridgePurchaseMethod, UDPReflectionUtils.k_InstanceBindingFlags);
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1(/*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD(L_0, _stringLiteral160F06D4799C85021A810F68C5B517EEA37A2737, ((int32_t)20), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetRetrieveProductsMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetRetrieveProductsMethod_m7DDEE509C69CD733F61E0DEC005C2DAB04D0892F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetRetrieveProductsMethod_m7DDEE509C69CD733F61E0DEC005C2DAB04D0892F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetClassType().GetMethod(UDPReflectionConsts.k_UdpIapBridgeRetrieveProductsMethod, UDPReflectionUtils.k_InstanceBindingFlags);
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1(/*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD(L_0, _stringLiteral6A771F1FCD449BF0867673C6554A1140B638FC62, ((int32_t)20), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetFinishTransactionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UdpIapBridgeInterface_GetFinishTransactionMethod_mB12C7F0BC90F45D3E799F60DC58EDF588ECFE49D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UdpIapBridgeInterface_GetFinishTransactionMethod_mB12C7F0BC90F45D3E799F60DC58EDF588ECFE49D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetClassType().GetMethod(UDPReflectionConsts.k_UdpIapBridgeFinishTransactionMethod, UDPReflectionUtils.k_InstanceBindingFlags);
		Type_t * L_0 = UdpIapBridgeInterface_GetClassType_mB491154445F776F9009F1A4AE3B7BF08B15C55B1(/*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD(L_0, _stringLiteral9F842731F7ED121968BA73230D9EEE58A0107DC7, ((int32_t)20), /*hidden argument*/NULL);
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
// UnityEngine.AndroidJavaClass UnityEngine.Purchasing.UnityActivity::GetUnityPlayerClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * UnityActivity_GetUnityPlayerClass_m7588B6CF407A7A68A6BB8E34BEB2FA9414288D76 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityActivity_GetUnityPlayerClass_m7588B6CF407A7A68A6BB8E34BEB2FA9414288D76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AndroidJavaClass(k_AndroidClassName);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE *)il2cpp_codegen_object_new(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8(L_0, _stringLiteralA004F7A71A664C60394CBEBEC2BC71B669D9F986, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.UnityActivity::GetCurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * UnityActivity_GetCurrentActivity_mFA27960CB96275451155C56D4A4620786AE91CDC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityActivity_GetCurrentActivity_mFA27960CB96275451155C56D4A4620786AE91CDC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetUnityPlayerClass().GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = UnityActivity_GetUnityPlayerClass_m7588B6CF407A7A68A6BB8E34BEB2FA9414288D76(/*hidden argument*/NULL);
		NullCheck(L_0);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m944E5987B38F1229EB3E8122E030D0439D4513B0(L_0, _stringLiteral32EAF9220C696B2C222E361F16ACA8FB08EC6083, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m944E5987B38F1229EB3E8122E030D0439D4513B0_RuntimeMethod_var);
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
// System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UserInfoInterface_GetClassType_mE36B1BC3E79BFA8614D5EAE48997221C223A715B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserInfoInterface_GetClassType_mE36B1BC3E79BFA8614D5EAE48997221C223A715B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_typeCache == null)
		Type_t * L_0 = ((UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_StaticFields*)il2cpp_codegen_static_fields_for(UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// s_typeCache = UDPReflectionUtils.GetTypeByName(UDPReflectionConsts.k_UserInfoType);
		IL2CPP_RUNTIME_CLASS_INIT(UDPReflectionUtils_t4FD1CDB451B7299D51CFE23414018466E5830E63_il2cpp_TypeInfo_var);
		Type_t * L_2 = UDPReflectionUtils_GetTypeByName_m76935CD19F4E1661BF41C7531637F5DF99758A25(_stringLiteral81BF2721BD61A95B94B72264D96CAB3E2392B882, /*hidden argument*/NULL);
		((UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_StaticFields*)il2cpp_codegen_static_fields_for(UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_il2cpp_TypeInfo_var))->set_s_typeCache_0(L_2);
	}

IL_001c:
	{
		// return s_typeCache;
		Type_t * L_3 = ((UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_StaticFields*)il2cpp_codegen_static_fields_for(UserInfoInterface_tB922E5C847D79319FF4F6FE9DF4B310285B7F2D0_il2cpp_TypeInfo_var))->get_s_typeCache_0();
		return L_3;
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
// System.IDisposable UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::get_androidJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObjectWrapper_get_androidJavaObject_mF8445C5CA73A13EC24812F5ECB3E8479CA34A71E (AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413 * __this, const RuntimeMethod* method)
{
	{
		// IDisposable androidJavaObject { get; }
		RuntimeObject* L_0 = __this->get_U3CandroidJavaObjectU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObjectWrapper__ctor_m2BD984F4526C765405E9E15B8D71C7B7EE4F81CF (AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413 * __this, AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___obj0, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObjectWrapper(AndroidJavaObject obj)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// androidJavaObject = obj;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = ___obj0;
		__this->set_U3CandroidJavaObjectU3Ek__BackingField_0(L_0);
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
// UnityEngine.Purchasing.Models.GooglePurchase UnityEngine.Purchasing.Utils.GooglePurchaseHelper::MakeGooglePurchase(System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2 * GooglePurchaseHelper_MakeGooglePurchase_m54E609D02071B4C57FA97C0A06F43EDD01267F9C (RuntimeObject* ___skuDetails0, AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___purchase1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GooglePurchaseHelper_MakeGooglePurchase_m54E609D02071B4C57FA97C0A06F43EDD01267F9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF * V_0 = NULL;
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF * L_0 = (U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m9ACBA98FE02BCB2477828B935D704C2DC09CE2A0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var sku = purchase.Call<string>("getSku");
		U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF * L_1 = V_0;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_2 = ___purchase1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4 = AndroidJavaObject_Call_TisString_t_m5EAE53C9E2A8893FD8FEA710378D22C162A0FDEA(L_2, _stringLiteral6FF1395A89987127DC5697BE3C2DCDF5C76FFC2F, L_3, /*hidden argument*/AndroidJavaObject_Call_TisString_t_m5EAE53C9E2A8893FD8FEA710378D22C162A0FDEA_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_sku_0(L_4);
		// var skuDetail = skuDetails.FirstOrDefault(skuDetailJavaObject =>
		// {
		//     var skuDetailsSku = skuDetailJavaObject.Call<string>("getSku");
		//     return sku == skuDetailsSku;
		// });
		RuntimeObject* L_5 = ___skuDetails0;
		U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF * L_6 = V_0;
		Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE * L_7 = (Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE *)il2cpp_codegen_object_new(Func_2_t88AEE604B08796E566459CFE69CFDC75F3EF67AE_il2cpp_TypeInfo_var);
		Func_2__ctor_m2E1758C82AEE3A0E3D37D20B713B65E736AE599D(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m5A4D465513C2CD10F1F23318848243202A76525C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2E1758C82AEE3A0E3D37D20B713B65E736AE599D_RuntimeMethod_var);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_8 = Enumerable_FirstOrDefault_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m8E71188883E2E0B862A1FBDD4FDF14555D7F0745(L_5, L_7, /*hidden argument*/Enumerable_FirstOrDefault_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m8E71188883E2E0B862A1FBDD4FDF14555D7F0745_RuntimeMethod_var);
		V_1 = L_8;
		// return skuDetail != null ? new GooglePurchase(purchase, skuDetail) : null;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_9 = V_1;
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		return (GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2 *)NULL;
	}

IL_0034:
	{
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_10 = ___purchase1;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_11 = V_1;
		GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2 * L_12 = (GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2 *)il2cpp_codegen_object_new(GooglePurchase_t0978E98A02DEA233C99D860D0292FA3716B202F2_il2cpp_TypeInfo_var);
		GooglePurchase__ctor_mA2CBA9EB30E37D506569B1DFB620DEEB4C55AFFB(L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m9ACBA98FE02BCB2477828B935D704C2DC09CE2A0 (U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Utils.GooglePurchaseHelper/<>c__DisplayClass0_0::<MakeGooglePurchase>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m5A4D465513C2CD10F1F23318848243202A76525C (U3CU3Ec__DisplayClass0_0_t7E379FB9373712F813385CECA82DFAF449D168CF * __this, AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___skuDetailJavaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m5A4D465513C2CD10F1F23318848243202A76525C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var skuDetailsSku = skuDetailJavaObject.Call<string>("getSku");
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = ___skuDetailJavaObject0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2 = AndroidJavaObject_Call_TisString_t_m5EAE53C9E2A8893FD8FEA710378D22C162A0FDEA(L_0, _stringLiteral6FF1395A89987127DC5697BE3C2DCDF5C76FFC2F, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_m5EAE53C9E2A8893FD8FEA710378D22C162A0FDEA_RuntimeMethod_var);
		V_0 = L_2;
		// return sku == skuDetailsSku;
		String_t* L_3 = __this->get_sku_0();
		String_t* L_4 = V_0;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, L_4, /*hidden argument*/NULL);
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
// System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::EncodeReceipt(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleReceiptEncoder_EncodeReceipt_m5821B95E537411927C44BF9FC0B36CE372815AC2 (String_t* ___transactionId0, String_t* ___purchaseOriginalJson1, String_t* ___purchaseSignature2, String_t* ___skuDetailsJson3, const RuntimeMethod* method)
{
	{
		// return FormatPayload(purchaseOriginalJson, purchaseSignature, skuDetailsJson);
		String_t* L_0 = ___purchaseOriginalJson1;
		String_t* L_1 = ___purchaseSignature2;
		String_t* L_2 = ___skuDetailsJson3;
		String_t* L_3 = GoogleReceiptEncoder_FormatPayload_m3C6EA9AF69D0E497A7AD5D29BFCA0FC9CAAE2612(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::FormatPayload(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleReceiptEncoder_FormatPayload_m3C6EA9AF69D0E497A7AD5D29BFCA0FC9CAAE2612 (String_t* ___json0, String_t* ___signature1, String_t* ___skuDetails2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleReceiptEncoder_FormatPayload_m3C6EA9AF69D0E497A7AD5D29BFCA0FC9CAAE2612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var dic = new Dictionary<string, object>
		// {
		//     ["json"] = json,
		//     ["signature"] = signature,
		//     ["skuDetails"] = skuDetails
		// };
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = L_0;
		String_t* L_2 = ___json0;
		NullCheck(L_1);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_1, _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662, L_2, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_3 = L_1;
		String_t* L_4 = ___signature1;
		NullCheck(L_3);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_3, _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A, L_4, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_5 = L_3;
		String_t* L_6 = ___skuDetails2;
		NullCheck(L_5);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_5, _stringLiteralFD6AF9EA23BB5137277450B0EDF5E4FED279E0F0, L_6, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		// return MiniJson.JsonEncode(dic);
		String_t* L_7 = MiniJson_JsonEncode_m4A4910E62F31DAA87FE21E7CF3FF852DAB99C11D(L_5, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertOnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m62B4AAB6EE3293F1EA8255FFF0C4E9D73F129CA7 (List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * ___skus0, Action_1_t38FBBB64ACD76C48DEED6E7A2C77CD902E051BDF * ___onProductsReceived1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m62B4AAB6EE3293F1EA8255FFF0C4E9D73F129CA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * V_0 = NULL;
	{
		// var products = ConvertSkusDetailsToProducts(skus);
		List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * L_0 = ___skus0;
		List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * L_1 = SkuDetailsConverter_ConvertSkusDetailsToProducts_m5DE2D6F2EDF30DD715212E1ACC9358B6F2E982E3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// onProductsReceived(products);
		Action_1_t38FBBB64ACD76C48DEED6E7A2C77CD902E051BDF * L_2 = ___onProductsReceived1;
		List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * L_3 = V_0;
		NullCheck(L_2);
		Action_1_Invoke_mB78FBC3CDBB6D37CCC0B793459E21E9C76E9C95B(L_2, L_3, /*hidden argument*/Action_1_Invoke_mB78FBC3CDBB6D37CCC0B793459E21E9C76E9C95B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertSkusDetailsToProducts(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * SkuDetailsConverter_ConvertSkusDetailsToProducts_m5DE2D6F2EDF30DD715212E1ACC9358B6F2E982E3 (List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * ___skus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkuDetailsConverter_ConvertSkusDetailsToProducts_m5DE2D6F2EDF30DD715212E1ACC9358B6F2E982E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * V_0 = NULL;
	Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<ProductDescription> products = new List<ProductDescription>();
		List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * L_0 = (List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 *)il2cpp_codegen_object_new(List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3_il2cpp_TypeInfo_var);
		List_1__ctor_m232A852F11236B75DCC6E0FC84755225698710F6(L_0, /*hidden argument*/List_1__ctor_m232A852F11236B75DCC6E0FC84755225698710F6_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (AndroidJavaObject skuDetails in skus)
		List_1_t3C5028D50D77F75F8C5465F4AC28B86CFCF83558 * L_1 = ___skus0;
		NullCheck(L_1);
		Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA  L_2 = List_1_GetEnumerator_m1B6754118A88FC1D2E5BB5FAF3E3B1F002530808(L_1, /*hidden argument*/List_1_GetEnumerator_m1B6754118A88FC1D2E5BB5FAF3E3B1F002530808_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_000f:
		{
			// foreach (AndroidJavaObject skuDetails in skus)
			AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = Enumerator_get_Current_m09B9E1F07A03C37F57CCA1D9DF7A03974077ED7B_inline((Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA *)(&V_1), /*hidden argument*/Enumerator_get_Current_m09B9E1F07A03C37F57CCA1D9DF7A03974077ED7B_RuntimeMethod_var);
			V_2 = L_3;
			// products.AddRange(skuDetails.ToListProducts());
			List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * L_4 = V_0;
			AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_5 = V_2;
			List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * L_6 = SkuDetailsConverter_ToListProducts_mA38776AC9D8F633ADA637808F1E1EE77DAD93470(L_5, /*hidden argument*/NULL);
			NullCheck(L_4);
			List_1_AddRange_m7299DD85C9C737B3A35046AC5640B4D22070B177(L_4, L_6, /*hidden argument*/List_1_AddRange_m7299DD85C9C737B3A35046AC5640B4D22070B177_RuntimeMethod_var);
		}

IL_0023:
		{
			// foreach (AndroidJavaObject skuDetails in skus)
			bool L_7 = Enumerator_MoveNext_m9C9B41634596824D348FC05B7C4AA0E4F4F8FD29((Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m9C9B41634596824D348FC05B7C4AA0E4F4F8FD29_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000f;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5668993760266C4D29C0F845EC7B6D7D6E613C82((Enumerator_t90D354ACD472DFACC92FF85D10238FF5CB55AADA *)(&V_1), /*hidden argument*/Enumerator_Dispose_m5668993760266C4D29C0F845EC7B6D7D6E613C82_RuntimeMethod_var);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// return products;
		List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ToListProducts(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * SkuDetailsConverter_ToListProducts_mA38776AC9D8F633ADA637808F1E1EE77DAD93470 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___skusDetails0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkuDetailsConverter_ToListProducts_mA38776AC9D8F633ADA637808F1E1EE77DAD93470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<ProductDescription>()
		// {
		//     BuildProductDescription(new AndroidJavaObjectWrapper(skusDetails))
		// };
		List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * L_0 = (List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 *)il2cpp_codegen_object_new(List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3_il2cpp_TypeInfo_var);
		List_1__ctor_m232A852F11236B75DCC6E0FC84755225698710F6(L_0, /*hidden argument*/List_1__ctor_m232A852F11236B75DCC6E0FC84755225698710F6_RuntimeMethod_var);
		List_1_tC430F26ABBE7E2DF6D050BB7990FC39D5BDE0AD3 * L_1 = L_0;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_2 = ___skusDetails0;
		AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413 * L_3 = (AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413 *)il2cpp_codegen_object_new(AndroidJavaObjectWrapper_t086171EB203137FFF853357FD42A4B4E543FE413_il2cpp_TypeInfo_var);
		AndroidJavaObjectWrapper__ctor_m2BD984F4526C765405E9E15B8D71C7B7EE4F81CF(L_3, L_2, /*hidden argument*/NULL);
		ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_4 = SkuDetailsConverter_BuildProductDescription_m71E6F0C1E5DCD86A48471FFB9B008AD7E228BE82(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_mE66F416F525E3A70E26D4284CAC61A4B1872D0E5(L_1, L_4, /*hidden argument*/List_1_Add_mE66F416F525E3A70E26D4284CAC61A4B1872D0E5_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Purchasing.Extension.ProductDescription UnityEngine.Purchasing.Utils.SkuDetailsConverter::BuildProductDescription(UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * SkuDetailsConverter_BuildProductDescription_m71E6F0C1E5DCD86A48471FFB9B008AD7E228BE82 (RuntimeObject* ___skuDetails0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkuDetailsConverter_BuildProductDescription_m71E6F0C1E5DCD86A48471FFB9B008AD7E228BE82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * V_10 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	double G_B3_0 = 0.0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// string sku = skuDetails.Call<string>("getSku");
		RuntimeObject* L_0 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_0, _stringLiteral6FF1395A89987127DC5697BE3C2DCDF5C76FFC2F, L_1);
		// string price = skuDetails.Call<string>("getPrice");
		RuntimeObject* L_3 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_5 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_3, _stringLiteral4FADE2304D0F918F838A2911F634759D7E5F4693, L_4);
		// decimal priceAmount = Convert.ToDecimal(skuDetails.Call<long>("getPriceAmountMicros") > 0 ? skuDetails.Call<long>("getPriceAmountMicros") / 1000000.0 : 0);
		RuntimeObject* L_6 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_6);
		int64_t L_8 = GenericInterfaceFuncInvoker2< int64_t, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m81602CBF1279C037CA054B02F2DD145E3CDAC392_RuntimeMethod_var, L_6, _stringLiteral40B8101AAD206C47959D4E844C689B81CDF84F11, L_7);
		G_B1_0 = L_5;
		G_B1_1 = L_2;
		if ((((int64_t)L_8) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			G_B2_0 = L_5;
			G_B2_1 = L_2;
			goto IL_003f;
		}
	}
	{
		G_B3_0 = (0.0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_005a;
	}

IL_003f:
	{
		RuntimeObject* L_9 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_9);
		int64_t L_11 = GenericInterfaceFuncInvoker2< int64_t, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m81602CBF1279C037CA054B02F2DD145E3CDAC392_RuntimeMethod_var, L_9, _stringLiteral40B8101AAD206C47959D4E844C689B81CDF84F11, L_10);
		G_B3_0 = ((double)((double)(((double)((double)L_11)))/(double)(1000000.0)));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_12 = Convert_ToDecimal_mF93A2E5C1006C59187BA8F1F17E66CEC2D8F7FCE(G_B3_0, /*hidden argument*/NULL);
		V_0 = L_12;
		// string title = skuDetails.Call<string>("getTitle");
		RuntimeObject* L_13 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_15 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_13, _stringLiteral57AD7770710D7E2152605841736EF253260F181D, L_14);
		V_1 = L_15;
		// string description = skuDetails.Call<string>("getDescription");
		RuntimeObject* L_16 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_18 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_16, _stringLiteral49BF0050A22870F465A2B74BFFA94D12CF9B0184, L_17);
		V_2 = L_18;
		// string priceCurrencyCode = skuDetails.Call<string>("getPriceCurrencyCode");
		RuntimeObject* L_19 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_21 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_19, _stringLiteral4EDC38A1218F1F3B9B8ABBBADB827D09D4DB3BE6, L_20);
		V_3 = L_21;
		// string originalJson = skuDetails.Call<string>("getOriginalJson");
		RuntimeObject* L_22 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_22);
		String_t* L_24 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_22, _stringLiteral7CDCFF85882580FB64BCCED0D9C8752D6BF8372F, L_23);
		V_4 = L_24;
		// string subscriptionPeriod = skuDetails.Call<string>("getSubscriptionPeriod");
		RuntimeObject* L_25 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_25);
		String_t* L_27 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_25, _stringLiteral95F98151B6AE07CC17A086DD7AD22BF42F174D7C, L_26);
		V_5 = L_27;
		// string freeTrialPeriod = skuDetails.Call<string>("getFreeTrialPeriod");
		RuntimeObject* L_28 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_30 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_28, _stringLiteral6A7872B4584263708E07DB7D63148B6E0F6CF086, L_29);
		V_6 = L_30;
		// string introductoryPrice = skuDetails.Call<string>("getIntroductoryPrice");
		RuntimeObject* L_31 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_31);
		String_t* L_33 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_31, _stringLiteral5E63969C8D5459C7461427E2BC97C111DAAD9529, L_32);
		V_7 = L_33;
		// string introductoryPricePeriod = skuDetails.Call<string>("getIntroductoryPricePeriod");
		RuntimeObject* L_34 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_34);
		String_t* L_36 = GenericInterfaceFuncInvoker2< String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisString_t_m6B866FAEA7532A9315186BD8E6E5CB6B853C41CB_RuntimeMethod_var, L_34, _stringLiteral2FD62DAF47E8725D3E59AA70B61573BE22A286DB, L_35);
		V_8 = L_36;
		// int introductoryPriceCycles = skuDetails.Call<int>("getIntroductoryPriceCycles");
		RuntimeObject* L_37 = ___skuDetails0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_37);
		int32_t L_39 = GenericInterfaceFuncInvoker2< int32_t, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IAndroidJavaObjectWrapper_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m52459E2129FC539E97B02C27A70F35B7B12F4025_RuntimeMethod_var, L_37, _stringLiteral504EEED775E8D8706D2E75ADA2A8E509B9CA77E5, L_38);
		V_9 = L_39;
		// GoogleProductMetadata productMetadata = new GoogleProductMetadata(
		//     price,
		//     title,
		//     description,
		//     priceCurrencyCode,
		//     priceAmount)
		// {
		//     originalJson = originalJson,
		//     introductoryPrice = introductoryPrice,
		//     subscriptionPeriod = subscriptionPeriod,
		//     freeTrialPeriod = freeTrialPeriod,
		//     introductoryPricePeriod = introductoryPricePeriod,
		//     introductoryPriceCycles = introductoryPriceCycles
		// };
		String_t* L_40 = V_1;
		String_t* L_41 = V_2;
		String_t* L_42 = V_3;
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_43 = V_0;
		GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * L_44 = (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 *)il2cpp_codegen_object_new(GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8_il2cpp_TypeInfo_var);
		GoogleProductMetadata__ctor_mE925F2291403293B4DB77DADB548DC07D870C349(L_44, G_B3_1, L_40, L_41, L_42, L_43, /*hidden argument*/NULL);
		GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * L_45 = L_44;
		String_t* L_46 = V_4;
		NullCheck(L_45);
		GoogleProductMetadata_set_originalJson_m450F96D8080210167382D47128FCE127E0F0C551_inline(L_45, L_46, /*hidden argument*/NULL);
		GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * L_47 = L_45;
		String_t* L_48 = V_7;
		NullCheck(L_47);
		GoogleProductMetadata_set_introductoryPrice_mB8CFE54561E665C18586FF250653AED873E2FB6D_inline(L_47, L_48, /*hidden argument*/NULL);
		GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * L_49 = L_47;
		String_t* L_50 = V_5;
		NullCheck(L_49);
		GoogleProductMetadata_set_subscriptionPeriod_m0F2FB78464C4E7EFF8D1FEE014E1709CD71ABE7E_inline(L_49, L_50, /*hidden argument*/NULL);
		GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * L_51 = L_49;
		String_t* L_52 = V_6;
		NullCheck(L_51);
		GoogleProductMetadata_set_freeTrialPeriod_mF8DB06A494AB72E51CA429376423B19D1A79EEED_inline(L_51, L_52, /*hidden argument*/NULL);
		GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * L_53 = L_51;
		String_t* L_54 = V_8;
		NullCheck(L_53);
		GoogleProductMetadata_set_introductoryPricePeriod_mCE1A4A279843EF6E153FC6652AAB351005065640_inline(L_53, L_54, /*hidden argument*/NULL);
		GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * L_55 = L_53;
		int32_t L_56 = V_9;
		NullCheck(L_55);
		GoogleProductMetadata_set_introductoryPriceCycles_m69627B6275460264E3FAE11DB42DFC25670D1174_inline(L_55, L_56, /*hidden argument*/NULL);
		V_10 = L_55;
		// ProductDescription product = new ProductDescription(
		//     sku,
		//     productMetadata,
		//     "",
		//     ""
		// );
		GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * L_57 = V_10;
		ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_58 = (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *)il2cpp_codegen_object_new(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var);
		ProductDescription__ctor_mCF9F28AC1C31FA18B4D520B0C1F83676F8BF6195(L_58, G_B3_2, L_57, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// return product;
		return L_58;
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
// System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore__ctor_mD6F8D8FB88E8EF0539FABB2FE1303D79507E3BFA (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, RuntimeObject* ___win80, RuntimeObject* ___util1, RuntimeObject* ___logger2, const RuntimeMethod* method)
{
	{
		// public WinRTStore(IWindowsIAP win8, IUtil util,
		//                          ILogger logger) {
		AbstractStore__ctor_m3DCD589B81128354031B3F5A542C19CD244049E0(__this, /*hidden argument*/NULL);
		// this.win8 = win8;
		RuntimeObject* L_0 = ___win80;
		__this->set_win8_0(L_0);
		// this.util = util;
		RuntimeObject* L_1 = ___util1;
		__this->set_util_2(L_1);
		// this.logger = logger;
		RuntimeObject* L_2 = ___logger2;
		__this->set_logger_3(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_Initialize_m064EF6A958C5F2F303440B4318B1035118639291 (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, RuntimeObject* ___biller0, const RuntimeMethod* method)
{
	{
		// this.callback = biller;
		RuntimeObject* L_0 = ___biller0;
		__this->set_callback_1(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_RetrieveProducts_m8C23F7EDFE7D488C11E8F2C5CA7AB62C1E7577F2 (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * ___productDefs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_RetrieveProducts_m8C23F7EDFE7D488C11E8F2C5CA7AB62C1E7577F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * G_B2_0 = NULL;
	ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * G_B2_1 = NULL;
	Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * G_B1_0 = NULL;
	ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * G_B1_1 = NULL;
	Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// var dummyProducts = from def in productDefs
		//                where def.type != ProductType.Subscription
		//                select new WinProductDescription(
		//                    def.storeSpecificId, "$0.01",
		//                    "Fake title - " + def.storeSpecificId,
		//                    "Fake description - " + def.storeSpecificId,
		//                    "USD", 0.01m, null, null, def.type == ProductType.Consumable);
		ReadOnlyCollection_1_tBAB3D8E4A7C952039AFBA60603E409D0173170F4 * L_0 = ___productDefs0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var);
		Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * L_1 = ((U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var))->get_U3CU3E9__8_0_1();
		Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * L_3 = ((U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * L_4 = (Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C *)il2cpp_codegen_object_new(Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C_il2cpp_TypeInfo_var);
		Func_2__ctor_mD5D471C649649A5C20B05AB73CC591A1973DB95F(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m13CD3D50B8247D298123CAB640BC4EA2CA35028B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD5D471C649649A5C20B05AB73CC591A1973DB95F_RuntimeMethod_var);
		Func_2_tE94BC585C534BA7146FF106108C557790D38BA9C * L_5 = L_4;
		((U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var))->set_U3CU3E9__8_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6 = Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_mB5E86AF9C61B8A4856C784CDA1729EA9C18A2DA4(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_mB5E86AF9C61B8A4856C784CDA1729EA9C18A2DA4_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var);
		Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * L_7 = ((U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var))->get_U3CU3E9__8_1_2();
		Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * L_9 = ((U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * L_10 = (Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D *)il2cpp_codegen_object_new(Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D_il2cpp_TypeInfo_var);
		Func_2__ctor_m906D4708057CC961E65FE23C780018EE8E8C5702(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m4E58280C013FF718D9C74A2AEEA211FB9D79F68B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m906D4708057CC961E65FE23C780018EE8E8C5702_RuntimeMethod_var);
		Func_2_tC13B215CAD6E9E78A4CB8D62E4A69406A7DE921D * L_11 = L_10;
		((U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var))->set_U3CU3E9__8_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0044:
	{
		RuntimeObject* L_12 = Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_m1AFD736097F79EC9A2123C4253A632A4012509FC(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_m1AFD736097F79EC9A2123C4253A632A4012509FC_RuntimeMethod_var);
		V_0 = L_12;
		// win8.BuildDummyProducts(dummyProducts.ToList());
		RuntimeObject* L_13 = __this->get_win8_0();
		RuntimeObject* L_14 = V_0;
		List_1_t2E574C9651C33313D869CB2D905339E1047FE821 * L_15 = Enumerable_ToList_TisWinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_mFF709F1DAD690C4EEE43B45B936D3007ED6E8274(L_14, /*hidden argument*/Enumerable_ToList_TisWinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_mFF709F1DAD690C4EEE43B45B936D3007ED6E8274_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker1< List_1_t2E574C9651C33313D869CB2D905339E1047FE821 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::BuildDummyProducts(System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>) */, IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773_il2cpp_TypeInfo_var, L_13, L_15);
		// init(0);
		WinRTStore_init_m011F5C8FB9EECBDB2B3904390DEF04DB83B94AB7(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_FinishTransaction_m217AD245C56080A86BE026C551E3EC21EB8E07CA (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_FinishTransaction_m217AD245C56080A86BE026C551E3EC21EB8E07CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.win8.FinaliseTransaction(transactionId);
		RuntimeObject* L_0 = __this->get_win8_0();
		String_t* L_1 = ___transactionId1;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::FinaliseTransaction(System.String) */, IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_init_m011F5C8FB9EECBDB2B3904390DEF04DB83B94AB7 (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, int32_t ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_init_m011F5C8FB9EECBDB2B3904390DEF04DB83B94AB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// win8.Initialize(this);
		RuntimeObject* L_0 = __this->get_win8_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Initialize(UnityEngine.Purchasing.Default.IWindowsIAPCallback) */, IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773_il2cpp_TypeInfo_var, L_0, __this);
		// win8.RetrieveProducts(true);
		RuntimeObject* L_1 = __this->get_win8_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773_il2cpp_TypeInfo_var, L_1, (bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_Purchase_m04073B006C5BBCFCF1F3EA945B33805CED7FF218 (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_Purchase_m04073B006C5BBCFCF1F3EA945B33805CED7FF218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// win8.Purchase(product.storeSpecificId);
		RuntimeObject* L_0 = __this->get_win8_0();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_1 = ___product0;
		NullCheck(L_1);
		String_t* L_2 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Purchase(System.String) */, IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_restoreTransactions_m96F050608EEB70FE4A4AA85D54739724047A6BB2 (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, bool ___pausing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_restoreTransactions_m96F050608EEB70FE4A4AA85D54739724047A6BB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!pausing) {
		bool L_0 = ___pausing0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if(m_CanReceivePurchases)
		bool L_1 = __this->get_m_CanReceivePurchases_4();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// win8.RetrieveProducts(false);
		RuntimeObject* L_2 = __this->get_win8_0();
		NullCheck(L_2);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773_il2cpp_TypeInfo_var, L_2, (bool)0);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::RestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_RestoreTransactions_mD7765620C75AD0876589E2779A9DCB0B3DC44A3D (WinRTStore_t1313C4EF104989252DDBB2DCF4B72BB539777CC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_RestoreTransactions_mD7765620C75AD0876589E2779A9DCB0B3DC44A3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// logger.Log("Explicit RestoreTransactions()");
		RuntimeObject* L_0 = __this->get_logger_3();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_0, _stringLiteralEDEDA8D96D6BEFA5C97172CAF6624B6A80182222);
		// win8.RetrieveProducts(false);
		RuntimeObject* L_1 = __this->get_win8_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t94601309201736FBE65E3CA0E84DF747ECC48773_il2cpp_TypeInfo_var, L_1, (bool)0);
		// m_CanReceivePurchases = true;
		__this->set_m_CanReceivePurchases_4((bool)1);
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
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4C01AFCA36E01CBC6E08DF6AB427732AC3690E3C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m4C01AFCA36E01CBC6E08DF6AB427732AC3690E3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * L_0 = (U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 *)il2cpp_codegen_object_new(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m213C70881DED6069EB33CC15A4E820CBE8D2CA8D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m213C70881DED6069EB33CC15A4E820CBE8D2CA8D (U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.WinRTStore/<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m13CD3D50B8247D298123CAB640BC4EA2CA35028B (U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___def0, const RuntimeMethod* method)
{
	{
		// where def.type != ProductType.Subscription
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___def0;
		NullCheck(L_0);
		int32_t L_1 = ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore/<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m4E58280C013FF718D9C74A2AEEA211FB9D79F68B (U3CU3Ec_t5DEB569B4D0D5171F4926DD8B367A2B9DC2E21E4 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___def0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m4E58280C013FF718D9C74A2AEEA211FB9D79F68B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// select new WinProductDescription(
		//     def.storeSpecificId, "$0.01",
		//     "Fake title - " + def.storeSpecificId,
		//     "Fake description - " + def.storeSpecificId,
		//     "USD", 0.01m, null, null, def.type == ProductType.Consumable);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___def0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_0, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_2 = ___def0;
		NullCheck(L_2);
		String_t* L_3 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCA9D01ECC70A5325ED60FF47E843538E385AE1F6, L_3, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_5 = ___def0;
		NullCheck(L_5);
		String_t* L_6 = ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE75AEFABDAA785AC2B8267F716185360ED501BCB, L_6, /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Decimal__ctor_mD2BEAABCBAC5D1AF62D0F8E01B2DCD2B725B2C2C((&L_8), 1, 0, 0, (bool)0, (uint8_t)2, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_9 = ___def0;
		NullCheck(L_9);
		int32_t L_10 = ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline(L_9, /*hidden argument*/NULL);
		WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 * L_11 = (WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1 *)il2cpp_codegen_object_new(WinProductDescription_t0927F80E5833E8D65C0C9BFD06D820D9AA5844C1_il2cpp_TypeInfo_var);
		WinProductDescription__ctor_m4F63EF3D6687F8B1B81F586EE8D56C581CE6CC26(L_11, L_1, _stringLiteral862E356EFB96FF23BE395FDD8CF34602BA87D015, L_4, L_7, _stringLiteral57814CFBAE5C6D00F5CAB49E34B9AA2CE8269EB9, L_8, (String_t*)NULL, (String_t*)NULL, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_mFA75EC397E067D09FD66D56B4E7692C3FCC3E960_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debug_get_unityLogger_mFA75EC397E067D09FD66D56B4E7692C3FCC3E960UnityEngine_Purchasing_Stores1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var))->get_s_Logger_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool JSONStore_get_disableStoreCatalog_mD011B0CD7948C3C02A20A11B89E0D3F0AF66C018_inline (JSONStore_t9996E6B989C477EA5F73E6E6493872B5C539880B * __this, const RuntimeMethod* method)
{
	{
		// return catalogDisabled;
		bool L_0 = __this->get_catalogDisabled_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StoreConfiguration_set_androidStore_m50AB5CC063507B6BD1E0DC0F3D6C551AF9457850_inline (StoreConfiguration_t4F3A282D4C3A2553C95ACF059200BDEAE9F10CD8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AppStore androidStore { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CandroidStoreU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_m889C5BF8DEDA7BF043DE7379C7F895B27977856A_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method)
{
	{
		// public int productType { get; internal set; }
		int32_t L_0 = __this->get_U3CproductTypeU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_purchaseDate_m917A2D424673A4B3F9E2BEE0E4D9E56EE0059861_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime purchaseDate { get; internal set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CpurchaseDateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m71B2167B236F9D5304762CC97FE063705633D632_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method)
{
	{
		// public string productID { get; internal set; }
		String_t* L_0 = __this->get_U3CproductIDU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m00E8EE4F0E8884C2BFFF1331A78D7C17E00F29BA_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime subscriptionExpirationDate { get; internal set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CsubscriptionExpirationDateU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_cancellationDate_mB5AAE152691A354CD299A27ABB24B52EFD2FB3FA_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime cancellationDate { get; internal set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CcancellationDateU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_mC07A1557E17DD7E1E75F43325EE7A2EC214C12BD_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method)
{
	{
		// public int isFreeTrial { get; internal set; }
		int32_t L_0 = __this->get_U3CisFreeTrialU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m73006639641517EE893E605E427803A417AB8E3D_inline (AppleInAppPurchaseReceipt_tC1FBB3AEE61ACADF2EA005E5562BB96190CFA723 * __this, const RuntimeMethod* method)
{
	{
		// public int isIntroductoryPricePeriod {get; internal set; }
		int32_t L_0 = __this->get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_mDCE2CF4A590465A2DEE933CA305754DCC8CC89E2_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method)
{
	{
		// public string storeSpecificId { get; private set; }
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method)
{
	{
		// public ProductType type { get; private set; }
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_2();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * __this, const RuntimeMethod* method)
{
	{
		// public DropdownEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * L_0 = __this->get_m_OnValueChanged_27();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UIFakeStore_DropdownValueChanged_m9EF23C99DDC1BBFF8A7DEFD5CD8FA4608187CF78_inline (UIFakeStore_t8C5B8471266DD2AEE2077295A03617424005414A * __this, int32_t ___selectedItem0, const RuntimeMethod* method)
{
	{
		// m_LastSelectedDropdownIndex = selectedItem;
		int32_t L_0 = ___selectedItem0;
		__this->set_m_LastSelectedDropdownIndex_25(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_originalJson_m450F96D8080210167382D47128FCE127E0F0C551_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string originalJson { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalJsonU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_introductoryPrice_mB8CFE54561E665C18586FF250653AED873E2FB6D_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string introductoryPrice { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CintroductoryPriceU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_subscriptionPeriod_m0F2FB78464C4E7EFF8D1FEE014E1709CD71ABE7E_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string subscriptionPeriod { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CsubscriptionPeriodU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_freeTrialPeriod_mF8DB06A494AB72E51CA429376423B19D1A79EEED_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string freeTrialPeriod { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CfreeTrialPeriodU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_introductoryPricePeriod_mCE1A4A279843EF6E153FC6652AAB351005065640_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string introductoryPricePeriod { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CintroductoryPricePeriodU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GoogleProductMetadata_set_introductoryPriceCycles_m69627B6275460264E3FAE11DB42DFC25670D1174_inline (GoogleProductMetadata_tC8DA107366DBBD880B96FFD94BD423A0628E29A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int introductoryPriceCycles { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CintroductoryPriceCyclesU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
