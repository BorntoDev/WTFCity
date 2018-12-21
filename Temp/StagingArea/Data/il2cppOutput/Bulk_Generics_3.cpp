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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1613291102;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.Collections.Generic.IEnumerator`1<System.Reflection.CustomAttributeNamedArgument>
struct IEnumerator_1_t720436178;
// System.Collections.Generic.IEnumerator`1<System.Reflection.CustomAttributeTypedArgument>
struct IEnumerator_1_t3155720625;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct IEnumerator_1_t1787089080;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t600458651;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2103185493;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t243502644;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t4176035766;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t1200778106;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2024462082;
// System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>
struct Collection_1_t3527188924;
// System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>
struct Collection_1_t1667506075;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2330998371;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t4292682451;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>
struct ReadOnlyCollection_1_t1500441997;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>
struct ReadOnlyCollection_1_t3935726444;
// System.Comparison`1<Cinemachine.CameraState/CustomBlendable>
struct Comparison_1_t3306260399;
// System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>
struct Comparison_1_t3293622236;
// System.Comparison`1<System.Boolean>
struct Comparison_1_t4167186440;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2725876932;
// System.Comparison`1<System.Object>
struct Comparison_1_t2855037343;
// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t62796889;
// System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>
struct Comparison_1_t2498081336;
// System.Comparison`1<UnityEngine.AnimatorClipInfo>
struct Comparison_1_t2931648334;
// System.Comparison`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct Comparison_1_t1360909010;
// System.Comparison`1<UnityEngine.Playables.Playable>
struct Comparison_1_t234756786;
// System.Comparison`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>
struct Comparison_1_t1757609100;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t1931160702;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t3497244643;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2442480487;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Func`1<System.Object>
struct Func_1_t2509852811;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2447130374;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t4119323734;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t3398609381;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.ICloneable
struct ICloneable_t724424198;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidCastException
struct InvalidCastException_t3927145244;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
struct U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833;
// System.Linq.Expressions.Expression
struct Expression_t1588164026;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<Cinemachine.CameraState/CustomBlendable>
struct Predicate_1_t61656048;
// System.Predicate`1<Cinemachine.CinemachineClearShot/Pair>
struct Predicate_1_t49017885;
// System.Predicate`1<System.Boolean>
struct Predicate_1_t922582089;
// System.Predicate`1<System.Int32>
struct Predicate_1_t3776239877;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t1113159834;
// System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>
struct Predicate_1_t3548444281;
// System.Predicate`1<UnityEngine.AnimatorClipInfo>
struct Predicate_1_t3982011279;
// System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct Predicate_1_t2411271955;
// System.Predicate`1<UnityEngine.Playables.Playable>
struct Predicate_1_t1285119731;
// System.Predicate`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>
struct Predicate_1_t2807972045;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2981523647;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t252640292;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t2063956538;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t3872988374;
// System.String
struct String_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2703961024;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3944607041;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t2423483305;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t982173797;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t1111334208;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t3723462114;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t832123510;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t214452203;
// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t3068109991;
// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t3197270402;
// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t1514431012;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t362407658;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4059188962;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t2756980746;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t682124106;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3535781894;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3664942305;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1982102915;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2933211702;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3283971887;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1262235195;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1557236713;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t682480391;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t3960448221;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t3832605257;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t614268397;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2404744798;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t4085588227;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_t2524209546;
// UnityEngine.IntervalNode`1<System.Object>
struct IntervalNode_1_t1018600634;
// UnityEngine.IntervalTree`1<System.Object>
struct IntervalTree_1_t1489772131;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Playables.IPlayableBehaviour
struct IPlayableBehaviour_t216449062;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_t3723878365;

extern RuntimeClass* AnimatorClipInfo_t3156717155_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayTypeMismatchException_t2342549375_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomAttributeNamedArgument_t287865710_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomAttributeTypedArgument_t2723150157_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomBlendable_t3531329220_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* ICloneable_t724424198_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_t3904884886_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IExposedPropertyTable_t2524209546_il2cpp_TypeInfo_var;
extern RuntimeClass* IInterval_t948809774_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCastException_t3927145244_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* InvokableCall_t832123510_il2cpp_TypeInfo_var;
extern RuntimeClass* LoadSceneMode_t3251202195_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* OrderBlock_t1585977831_il2cpp_TypeInfo_var;
extern RuntimeClass* Pair_t3518691057_il2cpp_TypeInfo_var;
extern RuntimeClass* Playable_t459825607_il2cpp_TypeInfo_var;
extern RuntimeClass* Scene_t2348375561_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WeightInfo_t1982677921_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1721815597;
extern String_t* _stringLiteral1864861238;
extern String_t* _stringLiteral1949155672;
extern String_t* _stringLiteral2002595880;
extern String_t* _stringLiteral2248280106;
extern String_t* _stringLiteral3824629377;
extern String_t* _stringLiteral3941568111;
extern const RuntimeMethod* Collection_1_CheckWritable_m1688928016_RuntimeMethod_var;
extern const RuntimeMethod* Collection_1_CheckWritable_m1826758503_RuntimeMethod_var;
extern const RuntimeMethod* Collection_1_CheckWritable_m2948668795_RuntimeMethod_var;
extern const RuntimeMethod* Collection_1_ConvertItem_m169929357_RuntimeMethod_var;
extern const RuntimeMethod* Collection_1_ConvertItem_m1743542180_RuntimeMethod_var;
extern const RuntimeMethod* Collection_1_ConvertItem_m1981511297_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3694449643_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_System_Collections_IEnumerator_Reset_m4269083576_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m42805805_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m3497872319_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m4071643321_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m4150391468_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m891112188_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_2_Invoke_m1520082677_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_3_Invoke_m3141788616_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_4_Invoke_m3371718871_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1245201994_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4156046467_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m1801617894_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m2018837163_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Peek_m1713833142_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Peek_m2302800625_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_System_Collections_ICollection_CopyTo_m3452613063_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_System_Collections_ICollection_CopyTo_m917596678_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m1971992302_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m2068090025_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2686599243_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3521523143_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3769274581_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m2772202961_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m3057662987_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m522482168_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4193727143_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m576609459_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m620491000_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1020890112_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1216842453_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m4219875092_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2594256520_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2659121554_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m3969985996_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m1300028287_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m2669767497_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m88350439_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Add_m1307486000_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Add_m1600429137_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Add_m1881324749_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Clear_m108858531_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Clear_m2164373218_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Clear_m2903987613_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Insert_m1097034733_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Insert_m2454144384_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Insert_m2746084579_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m1980090087_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m2129436005_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m4204563965_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Remove_m1842121503_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Remove_m1965826685_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_Remove_m4129318771_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_set_Item_m3468968652_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_set_Item_m3582274843_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_System_Collections_IList_set_Item_m4166186676_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m2122524688_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m2610384050_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m3265034937_RuntimeMethod_var;
extern const RuntimeMethod* ScriptPlayable_1__ctor_m224242934_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m756553478_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_System_Collections_ICollection_CopyTo_m1056090330_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_RuntimeMethod_var;
extern const RuntimeType* ScriptableObject_t2528358522_0_0_0_var;
extern const uint32_t Collection_1_CheckWritable_m1688928016_MetadataUsageId;
extern const uint32_t Collection_1_CheckWritable_m1826758503_MetadataUsageId;
extern const uint32_t Collection_1_CheckWritable_m2948668795_MetadataUsageId;
extern const uint32_t Collection_1_ConvertItem_m169929357_MetadataUsageId;
extern const uint32_t Collection_1_ConvertItem_m1743542180_MetadataUsageId;
extern const uint32_t Collection_1_ConvertItem_m1981511297_MetadataUsageId;
extern const uint32_t Collection_1_IsValidItem_m1475436662_MetadataUsageId;
extern const uint32_t Collection_1_IsValidItem_m2967404270_MetadataUsageId;
extern const uint32_t Collection_1_IsValidItem_m93481171_MetadataUsageId;
extern const uint32_t Collection_1_System_Collections_ICollection_CopyTo_m1091651328_MetadataUsageId;
extern const uint32_t Collection_1_System_Collections_ICollection_CopyTo_m1516601228_MetadataUsageId;
extern const uint32_t Collection_1_System_Collections_ICollection_CopyTo_m46221116_MetadataUsageId;
extern const uint32_t Collection_1__ctor_m2425854902_MetadataUsageId;
extern const uint32_t Collection_1__ctor_m3380123530_MetadataUsageId;
extern const uint32_t Collection_1__ctor_m627519480_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m1001295017_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m1735646405_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m1765981570_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m1918167472_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m202185845_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m2734221724_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m3263247262_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m4264168485_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m549500440_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m771564713_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m793617530_MetadataUsageId;
extern const uint32_t Comparison_1_BeginInvoke_m899707730_MetadataUsageId;
extern const uint32_t Enumerator_MoveNext_m3694449643_MetadataUsageId;
extern const uint32_t Enumerator_System_Collections_IEnumerator_Reset_m4269083576_MetadataUsageId;
extern const uint32_t Enumerator_get_Current_m42805805_MetadataUsageId;
extern const uint32_t ExposedReference_1_Resolve_m497587869_MetadataUsageId;
extern const uint32_t Func_3_BeginInvoke_m2576783546_MetadataUsageId;
extern const uint32_t IntervalNode_1_Query_m183711453_MetadataUsageId;
extern const uint32_t IntervalNode_1__ctor_m3567615865_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m3497872319_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m4071643321_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m4150391468_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m891112188_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m337513891_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m4147324340_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m854286695_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m974734014_MetadataUsageId;
extern const uint32_t InvokableCall_2_Invoke_m1520082677_MetadataUsageId;
extern const uint32_t InvokableCall_2__ctor_m3619012188_MetadataUsageId;
extern const uint32_t InvokableCall_3_Invoke_m3141788616_MetadataUsageId;
extern const uint32_t InvokableCall_3__ctor_m4245235439_MetadataUsageId;
extern const uint32_t InvokableCall_4_Invoke_m3371718871_MetadataUsageId;
extern const uint32_t InvokableCall_4__ctor_m3136187504_MetadataUsageId;
extern const uint32_t Nullable_1_Equals_m1466134572_MetadataUsageId;
extern const uint32_t Nullable_1_Equals_m2119234996_MetadataUsageId;
extern const uint32_t Nullable_1_ToString_m1520177337_MetadataUsageId;
extern const uint32_t Nullable_1_ToString_m3428050117_MetadataUsageId;
extern const uint32_t Nullable_1_get_Value_m1801617894_MetadataUsageId;
extern const uint32_t Nullable_1_get_Value_m2018837163_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m1281248445_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m2148880776_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m2800560563_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m2845045805_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m2852911217_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m29636740_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m3318409775_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m3459414084_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m3843624646_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m401952161_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m4251051144_MetadataUsageId;
extern const uint32_t Predicate_1_BeginInvoke_m575979877_MetadataUsageId;
extern const uint32_t Queue_1_Peek_m1713833142_MetadataUsageId;
extern const uint32_t Queue_1_Peek_m2302800625_MetadataUsageId;
extern const uint32_t Queue_1_System_Collections_ICollection_CopyTo_m3452613063_MetadataUsageId;
extern const uint32_t Queue_1_System_Collections_ICollection_CopyTo_m917596678_MetadataUsageId;
extern const uint32_t Queue_1__ctor_m1971992302_MetadataUsageId;
extern const uint32_t Queue_1__ctor_m2068090025_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2686599243_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3521523143_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3769274581_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m2772202961_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m3057662987_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m522482168_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4193727143_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m576609459_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m620491000_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1020890112_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1216842453_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m4219875092_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2594256520_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2659121554_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m3969985996_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m1300028287_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m2669767497_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m88350439_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1627200331_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1705891372_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m3127175806_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m1190113002_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m3243251448_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m610559569_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Add_m1307486000_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Add_m1600429137_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Add_m1881324749_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Clear_m108858531_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Clear_m2164373218_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Clear_m2903987613_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Insert_m1097034733_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Insert_m2454144384_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Insert_m2746084579_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m1980090087_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m2129436005_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m4204563965_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Remove_m1842121503_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Remove_m1965826685_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_Remove_m4129318771_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_set_Item_m3468968652_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_set_Item_m3582274843_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1_System_Collections_IList_set_Item_m4166186676_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1__ctor_m2122524688_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1__ctor_m2610384050_MetadataUsageId;
extern const uint32_t ReadOnlyCollection_1__ctor_m3265034937_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m1519549235_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CloneScriptInstanceFromIClonable_m4246296930_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CloneScriptInstance_m3384895362_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CreateHandle_m3597998059_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CreateScriptInstance_m4187935646_MetadataUsageId;
extern const uint32_t ScriptPlayable_1__ctor_m224242934_MetadataUsageId;
extern const uint32_t Stack_1_Pop_m756553478_MetadataUsageId;
extern const uint32_t Stack_1_System_Collections_ICollection_CopyTo_m1056090330_MetadataUsageId;
extern const uint32_t U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m838916350_MetadataUsageId;
extern const uint32_t U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m612748497_MetadataUsageId;
extern const uint32_t U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m2530432941_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m3721186338_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m4018737650_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m677813163_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_m1733258791_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_m1769266175_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m1397247356_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m322741469_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m2734859485_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m3604335408_MetadataUsageId;
extern const uint32_t UnityEvent_2_FindMethod_Impl_m2569180594_MetadataUsageId;
extern const uint32_t UnityEvent_3_FindMethod_Impl_m1640458315_MetadataUsageId;
extern const uint32_t UnityEvent_4_FindMethod_Impl_m3410547086_MetadataUsageId;
struct Object_t631007953_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
struct TypeU5BU5D_t3940880105;
struct WorkRequestU5BU5D_t3723878365;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef LIST_1_T1759940452_H
#define LIST_1_T1759940452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.CustomAttributeNamedArgument>
struct  List_1_t1759940452  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CustomAttributeNamedArgumentU5BU5D_t3710464795* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1759940452, ____items_1)); }
	inline CustomAttributeNamedArgumentU5BU5D_t3710464795* get__items_1() const { return ____items_1; }
	inline CustomAttributeNamedArgumentU5BU5D_t3710464795** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CustomAttributeNamedArgumentU5BU5D_t3710464795* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1759940452, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1759940452, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1759940452_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CustomAttributeNamedArgumentU5BU5D_t3710464795* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1759940452_StaticFields, ___EmptyArray_4)); }
	inline CustomAttributeNamedArgumentU5BU5D_t3710464795* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CustomAttributeNamedArgumentU5BU5D_t3710464795** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CustomAttributeNamedArgumentU5BU5D_t3710464795* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1759940452_H
#ifndef LIST_1_T4195224899_H
#define LIST_1_T4195224899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.CustomAttributeTypedArgument>
struct  List_1_t4195224899  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CustomAttributeTypedArgumentU5BU5D_t1465843424* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4195224899, ____items_1)); }
	inline CustomAttributeTypedArgumentU5BU5D_t1465843424* get__items_1() const { return ____items_1; }
	inline CustomAttributeTypedArgumentU5BU5D_t1465843424** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CustomAttributeTypedArgumentU5BU5D_t1465843424* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4195224899, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4195224899, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4195224899_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CustomAttributeTypedArgumentU5BU5D_t1465843424* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4195224899_StaticFields, ___EmptyArray_4)); }
	inline CustomAttributeTypedArgumentU5BU5D_t1465843424* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CustomAttributeTypedArgumentU5BU5D_t1465843424** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CustomAttributeTypedArgumentU5BU5D_t1465843424* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4195224899_H
#ifndef LIST_1_T4176035766_H
#define LIST_1_T4176035766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_t4176035766  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t3944607041* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4176035766_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BaseInvokableCallU5BU5D_t3944607041* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4176035766_StaticFields, ___EmptyArray_4)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4176035766_H
#ifndef QUEUE_1_T2926365658_H
#define QUEUE_1_T2926365658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t2926365658  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t2926365658, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t2926365658, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Queue_1_t2926365658, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(Queue_1_t2926365658, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T2926365658_H
#ifndef QUEUE_1_T1200778106_H
#define QUEUE_1_T1200778106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct  Queue_1_t1200778106  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	WorkRequestU5BU5D_t3723878365* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____array_0)); }
	inline WorkRequestU5BU5D_t3723878365* get__array_0() const { return ____array_0; }
	inline WorkRequestU5BU5D_t3723878365** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WorkRequestU5BU5D_t3723878365* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T1200778106_H
#ifndef STACK_1_T3923495619_H
#define STACK_1_T3923495619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t3923495619  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3923495619_H
#ifndef COLLECTION_1_T2024462082_H
#define COLLECTION_1_T2024462082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.Collection`1<System.Object>
struct  Collection_1_t2024462082  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.Collection`1::syncRoot
	RuntimeObject * ___syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Collection_1_t2024462082, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t2024462082, ___syncRoot_1)); }
	inline RuntimeObject * get_syncRoot_1() const { return ___syncRoot_1; }
	inline RuntimeObject ** get_address_of_syncRoot_1() { return &___syncRoot_1; }
	inline void set_syncRoot_1(RuntimeObject * value)
	{
		___syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTION_1_T2024462082_H
#ifndef COLLECTION_1_T3527188924_H
#define COLLECTION_1_T3527188924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>
struct  Collection_1_t3527188924  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.Collection`1::syncRoot
	RuntimeObject * ___syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Collection_1_t3527188924, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t3527188924, ___syncRoot_1)); }
	inline RuntimeObject * get_syncRoot_1() const { return ___syncRoot_1; }
	inline RuntimeObject ** get_address_of_syncRoot_1() { return &___syncRoot_1; }
	inline void set_syncRoot_1(RuntimeObject * value)
	{
		___syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTION_1_T3527188924_H
#ifndef COLLECTION_1_T1667506075_H
#define COLLECTION_1_T1667506075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>
struct  Collection_1_t1667506075  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.Collection`1::syncRoot
	RuntimeObject * ___syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Collection_1_t1667506075, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t1667506075, ___syncRoot_1)); }
	inline RuntimeObject * get_syncRoot_1() const { return ___syncRoot_1; }
	inline RuntimeObject ** get_address_of_syncRoot_1() { return &___syncRoot_1; }
	inline void set_syncRoot_1(RuntimeObject * value)
	{
		___syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTION_1_T1667506075_H
#ifndef READONLYCOLLECTION_1_T4292682451_H
#define READONLYCOLLECTION_1_T4292682451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct  ReadOnlyCollection_1_t4292682451  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t4292682451, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T4292682451_H
#ifndef READONLYCOLLECTION_1_T1500441997_H
#define READONLYCOLLECTION_1_T1500441997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>
struct  ReadOnlyCollection_1_t1500441997  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1500441997, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T1500441997_H
#ifndef READONLYCOLLECTION_1_T3935726444_H
#define READONLYCOLLECTION_1_T3935726444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>
struct  ReadOnlyCollection_1_t3935726444  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3935726444, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T3935726444_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef U3CCREATEWHEREITERATORU3EC__ITERATOR1D_1_T230129833_H
#define U3CCREATEWHEREITERATORU3EC__ITERATOR1D_1_T230129833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
struct  U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::source
	RuntimeObject* ___source_0;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::<$s_120>__0
	RuntimeObject* ___U3CU24s_120U3E__0_1;
	// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::<element>__1
	RuntimeObject * ___U3CelementU3E__1_2;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::predicate
	Func_2_t3759279471 * ___predicate_3;
	// System.Int32 System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::$PC
	int32_t ___U24PC_4;
	// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::$current
	RuntimeObject * ___U24current_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::<$>source
	RuntimeObject* ___U3CU24U3Esource_6;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1::<$>predicate
	Func_2_t3759279471 * ___U3CU24U3Epredicate_7;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_120U3E__0_1() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U3CU24s_120U3E__0_1)); }
	inline RuntimeObject* get_U3CU24s_120U3E__0_1() const { return ___U3CU24s_120U3E__0_1; }
	inline RuntimeObject** get_address_of_U3CU24s_120U3E__0_1() { return &___U3CU24s_120U3E__0_1; }
	inline void set_U3CU24s_120U3E__0_1(RuntimeObject* value)
	{
		___U3CU24s_120U3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_120U3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CelementU3E__1_2() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U3CelementU3E__1_2)); }
	inline RuntimeObject * get_U3CelementU3E__1_2() const { return ___U3CelementU3E__1_2; }
	inline RuntimeObject ** get_address_of_U3CelementU3E__1_2() { return &___U3CelementU3E__1_2; }
	inline void set_U3CelementU3E__1_2(RuntimeObject * value)
	{
		___U3CelementU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CelementU3E__1_2), value);
	}

	inline static int32_t get_offset_of_predicate_3() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___predicate_3)); }
	inline Func_2_t3759279471 * get_predicate_3() const { return ___predicate_3; }
	inline Func_2_t3759279471 ** get_address_of_predicate_3() { return &___predicate_3; }
	inline void set_predicate_3(Func_2_t3759279471 * value)
	{
		___predicate_3 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_3), value);
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Esource_6() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U3CU24U3Esource_6)); }
	inline RuntimeObject* get_U3CU24U3Esource_6() const { return ___U3CU24U3Esource_6; }
	inline RuntimeObject** get_address_of_U3CU24U3Esource_6() { return &___U3CU24U3Esource_6; }
	inline void set_U3CU24U3Esource_6(RuntimeObject* value)
	{
		___U3CU24U3Esource_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Esource_6), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Epredicate_7() { return static_cast<int32_t>(offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833, ___U3CU24U3Epredicate_7)); }
	inline Func_2_t3759279471 * get_U3CU24U3Epredicate_7() const { return ___U3CU24U3Epredicate_7; }
	inline Func_2_t3759279471 ** get_address_of_U3CU24U3Epredicate_7() { return &___U3CU24U3Epredicate_7; }
	inline void set_U3CU24U3Epredicate_7(Func_2_t3759279471 * value)
	{
		___U3CU24U3Epredicate_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Epredicate_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEWHEREITERATORU3EC__ITERATOR1D_1_T230129833_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BASEINVOKABLECALL_T2703961024_H
#define BASEINVOKABLECALL_T2703961024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2703961024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2703961024_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef INTERVALNODE_1_T1018600634_H
#define INTERVALNODE_1_T1018600634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IntervalNode`1<System.Object>
struct  IntervalNode_1_t1018600634  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.IntervalNode`1::m_Center
	int64_t ___m_Center_0;
	// System.Collections.Generic.List`1<T> UnityEngine.IntervalNode`1::m_Children
	List_1_t257213610 * ___m_Children_1;
	// UnityEngine.IntervalNode`1<T> UnityEngine.IntervalNode`1::m_LeftNode
	IntervalNode_1_t1018600634 * ___m_LeftNode_2;
	// UnityEngine.IntervalNode`1<T> UnityEngine.IntervalNode`1::m_RightNode
	IntervalNode_1_t1018600634 * ___m_RightNode_3;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(IntervalNode_1_t1018600634, ___m_Center_0)); }
	inline int64_t get_m_Center_0() const { return ___m_Center_0; }
	inline int64_t* get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(int64_t value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Children_1() { return static_cast<int32_t>(offsetof(IntervalNode_1_t1018600634, ___m_Children_1)); }
	inline List_1_t257213610 * get_m_Children_1() const { return ___m_Children_1; }
	inline List_1_t257213610 ** get_address_of_m_Children_1() { return &___m_Children_1; }
	inline void set_m_Children_1(List_1_t257213610 * value)
	{
		___m_Children_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Children_1), value);
	}

	inline static int32_t get_offset_of_m_LeftNode_2() { return static_cast<int32_t>(offsetof(IntervalNode_1_t1018600634, ___m_LeftNode_2)); }
	inline IntervalNode_1_t1018600634 * get_m_LeftNode_2() const { return ___m_LeftNode_2; }
	inline IntervalNode_1_t1018600634 ** get_address_of_m_LeftNode_2() { return &___m_LeftNode_2; }
	inline void set_m_LeftNode_2(IntervalNode_1_t1018600634 * value)
	{
		___m_LeftNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_LeftNode_2), value);
	}

	inline static int32_t get_offset_of_m_RightNode_3() { return static_cast<int32_t>(offsetof(IntervalNode_1_t1018600634, ___m_RightNode_3)); }
	inline IntervalNode_1_t1018600634 * get_m_RightNode_3() const { return ___m_RightNode_3; }
	inline IntervalNode_1_t1018600634 ** get_address_of_m_RightNode_3() { return &___m_RightNode_3; }
	inline void set_m_RightNode_3(IntervalNode_1_t1018600634 * value)
	{
		___m_RightNode_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_RightNode_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALNODE_1_T1018600634_H
#ifndef INTERVALTREE_1_T1489772131_H
#define INTERVALTREE_1_T1489772131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IntervalTree`1<System.Object>
struct  IntervalTree_1_t1489772131  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.IntervalTree`1::m_Nodes
	List_1_t257213610 * ___m_Nodes_0;
	// System.Boolean UnityEngine.IntervalTree`1::m_Dirty
	bool ___m_Dirty_1;
	// UnityEngine.IntervalNode`1<T> UnityEngine.IntervalTree`1::m_Root
	IntervalNode_1_t1018600634 * ___m_Root_2;

public:
	inline static int32_t get_offset_of_m_Nodes_0() { return static_cast<int32_t>(offsetof(IntervalTree_1_t1489772131, ___m_Nodes_0)); }
	inline List_1_t257213610 * get_m_Nodes_0() const { return ___m_Nodes_0; }
	inline List_1_t257213610 ** get_address_of_m_Nodes_0() { return &___m_Nodes_0; }
	inline void set_m_Nodes_0(List_1_t257213610 * value)
	{
		___m_Nodes_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Nodes_0), value);
	}

	inline static int32_t get_offset_of_m_Dirty_1() { return static_cast<int32_t>(offsetof(IntervalTree_1_t1489772131, ___m_Dirty_1)); }
	inline bool get_m_Dirty_1() const { return ___m_Dirty_1; }
	inline bool* get_address_of_m_Dirty_1() { return &___m_Dirty_1; }
	inline void set_m_Dirty_1(bool value)
	{
		___m_Dirty_1 = value;
	}

	inline static int32_t get_offset_of_m_Root_2() { return static_cast<int32_t>(offsetof(IntervalTree_1_t1489772131, ___m_Root_2)); }
	inline IntervalNode_1_t1018600634 * get_m_Root_2() const { return ___m_Root_2; }
	inline IntervalNode_1_t1018600634 ** get_address_of_m_Root_2() { return &___m_Root_2; }
	inline void set_m_Root_2(IntervalNode_1_t1018600634 * value)
	{
		___m_Root_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Root_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALTREE_1_T1489772131_H
#ifndef PAIR_T3518691057_H
#define PAIR_T3518691057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cinemachine.CinemachineClearShot/Pair
struct  Pair_t3518691057 
{
public:
	// System.Int32 Cinemachine.CinemachineClearShot/Pair::a
	int32_t ___a_0;
	// System.Single Cinemachine.CinemachineClearShot/Pair::b
	float ___b_1;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Pair_t3518691057, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Pair_t3518691057, ___b_1)); }
	inline float get_b_1() const { return ___b_1; }
	inline float* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(float value)
	{
		___b_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAIR_T3518691057_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T3588277760_H
#define ENUMERATOR_T3588277760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct  Enumerator_t3588277760 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::q
	Queue_1_t2926365658 * ___q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::idx
	int32_t ___idx_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::ver
	int32_t ___ver_2;

public:
	inline static int32_t get_offset_of_q_0() { return static_cast<int32_t>(offsetof(Enumerator_t3588277760, ___q_0)); }
	inline Queue_1_t2926365658 * get_q_0() const { return ___q_0; }
	inline Queue_1_t2926365658 ** get_address_of_q_0() { return &___q_0; }
	inline void set_q_0(Queue_1_t2926365658 * value)
	{
		___q_0 = value;
		Il2CppCodeGenWriteBarrier((&___q_0), value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(Enumerator_t3588277760, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3588277760, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3588277760_H
#ifndef ENUMERATOR_T1862690208_H
#define ENUMERATOR_T1862690208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1/Enumerator<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct  Enumerator_t1862690208 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::q
	Queue_1_t1200778106 * ___q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::idx
	int32_t ___idx_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::ver
	int32_t ___ver_2;

public:
	inline static int32_t get_offset_of_q_0() { return static_cast<int32_t>(offsetof(Enumerator_t1862690208, ___q_0)); }
	inline Queue_1_t1200778106 * get_q_0() const { return ___q_0; }
	inline Queue_1_t1200778106 ** get_address_of_q_0() { return &___q_0; }
	inline void set_q_0(Queue_1_t1200778106 * value)
	{
		___q_0 = value;
		Il2CppCodeGenWriteBarrier((&___q_0), value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(Enumerator_t1862690208, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1862690208, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1862690208_H
#ifndef ENUMERATOR_T1142515742_H
#define ENUMERATOR_T1142515742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Object>
struct  Enumerator_t1142515742 
{
public:
	// System.Collections.Generic.Stack`1<T> System.Collections.Generic.Stack`1/Enumerator::parent
	Stack_1_t3923495619 * ___parent_0;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::idx
	int32_t ___idx_1;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Enumerator_t1142515742, ___parent_0)); }
	inline Stack_1_t3923495619 * get_parent_0() const { return ___parent_0; }
	inline Stack_1_t3923495619 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Stack_1_t3923495619 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(Enumerator_t1142515742, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1142515742, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1142515742_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ANIMATORCLIPINFO_T3156717155_H
#define ANIMATORCLIPINFO_T3156717155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t3156717155 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3156717155, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3156717155, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T3156717155_H
#ifndef ORDERBLOCK_T1585977831_H
#define ORDERBLOCK_T1585977831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t1585977831 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t3245792599 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___callback_1)); }
	inline UnityAction_t3245792599 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t3245792599 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t3245792599 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T1585977831_H
#ifndef INVOKABLECALL_T832123510_H
#define INVOKABLECALL_T832123510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t832123510  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t3245792599 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t832123510, ___Delegate_0)); }
	inline UnityAction_t3245792599 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t3245792599 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t3245792599 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T832123510_H
#ifndef INVOKABLECALL_1_T214452203_H
#define INVOKABLECALL_1_T214452203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t214452203  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t682124106 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t214452203, ___Delegate_0)); }
	inline UnityAction_1_t682124106 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t682124106 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t682124106 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T214452203_H
#ifndef INVOKABLECALL_1_T3068109991_H
#define INVOKABLECALL_1_T3068109991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t3068109991  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3535781894 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3068109991, ___Delegate_0)); }
	inline UnityAction_1_t3535781894 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3535781894 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3535781894 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3068109991_H
#ifndef INVOKABLECALL_1_T3197270402_H
#define INVOKABLECALL_1_T3197270402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t3197270402  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3664942305 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3197270402, ___Delegate_0)); }
	inline UnityAction_1_t3664942305 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3664942305 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3664942305 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3197270402_H
#ifndef INVOKABLECALL_1_T1514431012_H
#define INVOKABLECALL_1_T1514431012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_t1514431012  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t1982102915 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t1514431012, ___Delegate_0)); }
	inline UnityAction_1_t1982102915 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t1982102915 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t1982102915 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T1514431012_H
#ifndef INVOKABLECALL_2_T362407658_H
#define INVOKABLECALL_2_T362407658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t362407658  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t3283971887 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t362407658, ___Delegate_0)); }
	inline UnityAction_2_t3283971887 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t3283971887 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t3283971887 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_2_T362407658_H
#ifndef INVOKABLECALL_3_T4059188962_H
#define INVOKABLECALL_3_T4059188962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4059188962  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1557236713 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4059188962, ___Delegate_0)); }
	inline UnityAction_3_t1557236713 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1557236713 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1557236713 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_3_T4059188962_H
#ifndef INVOKABLECALL_4_T2756980746_H
#define INVOKABLECALL_4_T2756980746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t2756980746  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_t682480391 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t2756980746, ___Delegate_0)); }
	inline UnityAction_4_t682480391 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_t682480391 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_t682480391 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_4_T2756980746_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3832605257_H
#ifndef UNITYEVENT_1_T3961765668_H
#define UNITYEVENT_1_T3961765668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t3961765668  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3961765668, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3961765668_H
#ifndef UNITYEVENT_2_T614268397_H
#define UNITYEVENT_2_T614268397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_t614268397  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t614268397, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T614268397_H
#ifndef UNITYEVENT_3_T2404744798_H
#define UNITYEVENT_3_T2404744798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t2404744798  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2404744798, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T2404744798_H
#ifndef UNITYEVENT_4_T4085588227_H
#define UNITYEVENT_4_T4085588227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t4085588227  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_4_t4085588227, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_4_T4085588227_H
#ifndef PROPERTYNAME_T3749835189_H
#define PROPERTYNAME_T3749835189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t3749835189 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t3749835189, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T3749835189_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#define ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArrayTypeMismatchException
struct  ArrayTypeMismatchException_t2342549375  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef INVALIDCASTEXCEPTION_T3927145244_H
#define INVALIDCASTEXCEPTION_T3927145244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3927145244  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3927145244_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef EXPRESSIONTYPE_T2886294549_H
#define EXPRESSIONTYPE_T2886294549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionType
struct  ExpressionType_t2886294549 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExpressionType_t2886294549, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONTYPE_T2886294549_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef NULLABLE_1_T2603721331_H
#define NULLABLE_1_T2603721331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_t2603721331 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t881159249  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2603721331, ___value_0)); }
	inline TimeSpan_t881159249  get_value_0() const { return ___value_0; }
	inline TimeSpan_t881159249 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t881159249  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2603721331, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2603721331_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef CACHEDINVOKABLECALL_1_T2423483305_H
#define CACHEDINVOKABLECALL_1_T2423483305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct  CachedInvokableCall_1_t2423483305  : public InvokableCall_1_t214452203
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	bool ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t2423483305, ___m_Arg1_1)); }
	inline bool get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline bool* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(bool value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T2423483305_H
#ifndef CACHEDINVOKABLECALL_1_T982173797_H
#define CACHEDINVOKABLECALL_1_T982173797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct  CachedInvokableCall_1_t982173797  : public InvokableCall_1_t3068109991
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	int32_t ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t982173797, ___m_Arg1_1)); }
	inline int32_t get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline int32_t* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(int32_t value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T982173797_H
#ifndef CACHEDINVOKABLECALL_1_T1111334208_H
#define CACHEDINVOKABLECALL_1_T1111334208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct  CachedInvokableCall_1_t1111334208  : public InvokableCall_1_t3197270402
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	RuntimeObject * ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t1111334208, ___m_Arg1_1)); }
	inline RuntimeObject * get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline RuntimeObject ** get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(RuntimeObject * value)
	{
		___m_Arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T1111334208_H
#ifndef CACHEDINVOKABLECALL_1_T3723462114_H
#define CACHEDINVOKABLECALL_1_T3723462114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct  CachedInvokableCall_1_t3723462114  : public InvokableCall_1_t1514431012
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	float ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t3723462114, ___m_Arg1_1)); }
	inline float get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline float* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(float value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T3723462114_H
#ifndef EXPOSEDREFERENCE_1_T3345160085_H
#define EXPOSEDREFERENCE_1_T3345160085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExposedReference`1<System.Object>
struct  ExposedReference_1_t3345160085 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t3749835189  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_t631007953 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t3345160085, ___exposedName_0)); }
	inline PropertyName_t3749835189  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t3749835189 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t3749835189  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t3345160085, ___defaultValue_1)); }
	inline Object_t631007953 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_t631007953 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_t631007953 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPOSEDREFERENCE_1_T3345160085_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PLAYABLEGRAPH_T3515989261_H
#define PLAYABLEGRAPH_T3515989261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t3515989261 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T3515989261_H
#ifndef PLAYABLEHANDLE_T1095853803_H
#define PLAYABLEHANDLE_T1095853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1095853803 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1095853803_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T3251202195_H
#ifndef CUSTOMBLENDABLE_T3531329220_H
#define CUSTOMBLENDABLE_T3531329220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cinemachine.CameraState/CustomBlendable
struct  CustomBlendable_t3531329220 
{
public:
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_t631007953 * ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_t3531329220, ___m_Custom_0)); }
	inline Object_t631007953 * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_t631007953 ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_t631007953 * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Custom_0), value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_t3531329220, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t3531329220_marshaled_pinvoke
{
	Object_t631007953_marshaled_pinvoke ___m_Custom_0;
	float ___m_Weight_1;
};
// Native definition for COM marshalling of Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t3531329220_marshaled_com
{
	Object_t631007953_marshaled_com* ___m_Custom_0;
	float ___m_Weight_1;
};
#endif // CUSTOMBLENDABLE_T3531329220_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef EXPRESSION_T1588164026_H
#define EXPRESSION_T1588164026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression
struct  Expression_t1588164026  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::node_type
	int32_t ___node_type_0;
	// System.Type System.Linq.Expressions.Expression::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_node_type_0() { return static_cast<int32_t>(offsetof(Expression_t1588164026, ___node_type_0)); }
	inline int32_t get_node_type_0() const { return ___node_type_0; }
	inline int32_t* get_address_of_node_type_0() { return &___node_type_0; }
	inline void set_node_type_0(int32_t value)
	{
		___node_type_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Expression_t1588164026, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1588164026_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef PLAYABLE_T459825607_H
#define PLAYABLE_T459825607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t459825607 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t459825607, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t459825607_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t459825607  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t459825607_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t459825607  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t459825607 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t459825607  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T459825607_H
#ifndef SCRIPTPLAYABLE_1_T818619019_H
#define SCRIPTPLAYABLE_1_T818619019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct  ScriptPlayable_1_t818619019 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t818619019, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t818619019_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t818619019  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t818619019_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t818619019  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t818619019 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t818619019  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLE_1_T818619019_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef COMPARISON_1_T3306260399_H
#define COMPARISON_1_T3306260399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<Cinemachine.CameraState/CustomBlendable>
struct  Comparison_1_t3306260399  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T3306260399_H
#ifndef COMPARISON_1_T3293622236_H
#define COMPARISON_1_T3293622236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>
struct  Comparison_1_t3293622236  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T3293622236_H
#ifndef COMPARISON_1_T4167186440_H
#define COMPARISON_1_T4167186440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Boolean>
struct  Comparison_1_t4167186440  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T4167186440_H
#ifndef COMPARISON_1_T2725876932_H
#define COMPARISON_1_T2725876932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Int32>
struct  Comparison_1_t2725876932  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2725876932_H
#ifndef COMPARISON_1_T2855037343_H
#define COMPARISON_1_T2855037343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Object>
struct  Comparison_1_t2855037343  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2855037343_H
#ifndef COMPARISON_1_T62796889_H
#define COMPARISON_1_T62796889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct  Comparison_1_t62796889  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T62796889_H
#ifndef COMPARISON_1_T2498081336_H
#define COMPARISON_1_T2498081336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>
struct  Comparison_1_t2498081336  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2498081336_H
#ifndef COMPARISON_1_T2931648334_H
#define COMPARISON_1_T2931648334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.AnimatorClipInfo>
struct  Comparison_1_t2931648334  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2931648334_H
#ifndef COMPARISON_1_T1360909010_H
#define COMPARISON_1_T1360909010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct  Comparison_1_t1360909010  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T1360909010_H
#ifndef COMPARISON_1_T234756786_H
#define COMPARISON_1_T234756786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.Playables.Playable>
struct  Comparison_1_t234756786  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T234756786_H
#ifndef COMPARISON_1_T1931160702_H
#define COMPARISON_1_T1931160702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.Vector2>
struct  Comparison_1_t1931160702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T1931160702_H
#ifndef COMPARISON_1_T3497244643_H
#define COMPARISON_1_T3497244643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.Vector3>
struct  Comparison_1_t3497244643  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T3497244643_H
#ifndef CONVERTER_2_T2442480487_H
#define CONVERTER_2_T2442480487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t2442480487  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T2442480487_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
#ifndef FUNC_1_T2509852811_H
#define FUNC_1_T2509852811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Object>
struct  Func_1_t2509852811  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2509852811_H
#ifndef FUNC_2_T3759279471_H
#define FUNC_2_T3759279471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t3759279471  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3759279471_H
#ifndef FUNC_2_T2447130374_H
#define FUNC_2_T2447130374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Object>
struct  Func_2_t2447130374  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2447130374_H
#ifndef FUNC_3_T4119323734_H
#define FUNC_3_T4119323734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct  Func_3_t4119323734  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T4119323734_H
#ifndef FUNC_3_T3398609381_H
#define FUNC_3_T3398609381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Object,System.Object>
struct  Func_3_t3398609381  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3398609381_H
#ifndef LAMBDAEXPRESSION_T3131094331_H
#define LAMBDAEXPRESSION_T3131094331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t3131094331  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t1588164026 * ___body_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t2330998371 * ___parameters_3;

public:
	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___body_2)); }
	inline Expression_t1588164026 * get_body_2() const { return ___body_2; }
	inline Expression_t1588164026 ** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(Expression_t1588164026 * value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((&___body_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___parameters_3)); }
	inline ReadOnlyCollection_1_t2330998371 * get_parameters_3() const { return ___parameters_3; }
	inline ReadOnlyCollection_1_t2330998371 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(ReadOnlyCollection_1_t2330998371 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMBDAEXPRESSION_T3131094331_H
#ifndef PREDICATE_1_T61656048_H
#define PREDICATE_1_T61656048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<Cinemachine.CameraState/CustomBlendable>
struct  Predicate_1_t61656048  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T61656048_H
#ifndef PREDICATE_1_T49017885_H
#define PREDICATE_1_T49017885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<Cinemachine.CinemachineClearShot/Pair>
struct  Predicate_1_t49017885  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T49017885_H
#ifndef PREDICATE_1_T922582089_H
#define PREDICATE_1_T922582089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Boolean>
struct  Predicate_1_t922582089  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T922582089_H
#ifndef PREDICATE_1_T3776239877_H
#define PREDICATE_1_T3776239877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Int32>
struct  Predicate_1_t3776239877  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3776239877_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
#ifndef PREDICATE_1_T1113159834_H
#define PREDICATE_1_T1113159834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct  Predicate_1_t1113159834  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T1113159834_H
#ifndef PREDICATE_1_T3548444281_H
#define PREDICATE_1_T3548444281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>
struct  Predicate_1_t3548444281  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3548444281_H
#ifndef PREDICATE_1_T3982011279_H
#define PREDICATE_1_T3982011279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.AnimatorClipInfo>
struct  Predicate_1_t3982011279  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3982011279_H
#ifndef PREDICATE_1_T2411271955_H
#define PREDICATE_1_T2411271955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct  Predicate_1_t2411271955  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T2411271955_H
#ifndef PREDICATE_1_T1285119731_H
#define PREDICATE_1_T1285119731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.Playables.Playable>
struct  Predicate_1_t1285119731  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T1285119731_H
#ifndef PREDICATE_1_T2981523647_H
#define PREDICATE_1_T2981523647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.Vector2>
struct  Predicate_1_t2981523647  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T2981523647_H
#ifndef PREDICATE_1_T252640292_H
#define PREDICATE_1_T252640292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.Vector3>
struct  Predicate_1_t252640292  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T252640292_H
#ifndef GETTER_2_T2063956538_H
#define GETTER_2_T2063956538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct  Getter_2_t2063956538  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTER_2_T2063956538_H
#ifndef STATICGETTER_1_T3872988374_H
#define STATICGETTER_1_T3872988374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct  StaticGetter_1_t3872988374  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATICGETTER_1_T3872988374_H
#ifndef UNITYACTION_1_T682124106_H
#define UNITYACTION_1_T682124106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_t682124106  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T682124106_H
#ifndef UNITYACTION_1_T3535781894_H
#define UNITYACTION_1_T3535781894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t3535781894  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3535781894_H
#ifndef UNITYACTION_1_T3664942305_H
#define UNITYACTION_1_T3664942305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t3664942305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3664942305_H
#ifndef UNITYACTION_1_T1982102915_H
#define UNITYACTION_1_T1982102915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t1982102915  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1982102915_H
#ifndef UNITYACTION_1_T2933211702_H
#define UNITYACTION_1_T2933211702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t2933211702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2933211702_H
#ifndef UNITYACTION_2_T3283971887_H
#define UNITYACTION_2_T3283971887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t3283971887  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T3283971887_H
#ifndef UNITYACTION_2_T2165061829_H
#define UNITYACTION_2_T2165061829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t2165061829  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T2165061829_H
#ifndef UNITYACTION_2_T1262235195_H
#define UNITYACTION_2_T1262235195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t1262235195  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T1262235195_H
#ifndef UNITYACTION_3_T1557236713_H
#define UNITYACTION_3_T1557236713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1557236713  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_3_T1557236713_H
#ifndef UNITYACTION_4_T682480391_H
#define UNITYACTION_4_T682480391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_t682480391  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_4_T682480391_H
#ifndef WEIGHTINFO_T1982677921_H
#define WEIGHTINFO_T1982677921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
struct  WeightInfo_t1982677921 
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::mixer
	Playable_t459825607  ___mixer_0;
	// UnityEngine.Playables.Playable UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::parentMixer
	Playable_t459825607  ___parentMixer_1;
	// System.Int32 UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::port
	int32_t ___port_2;
	// System.Boolean UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::modulate
	bool ___modulate_3;

public:
	inline static int32_t get_offset_of_mixer_0() { return static_cast<int32_t>(offsetof(WeightInfo_t1982677921, ___mixer_0)); }
	inline Playable_t459825607  get_mixer_0() const { return ___mixer_0; }
	inline Playable_t459825607 * get_address_of_mixer_0() { return &___mixer_0; }
	inline void set_mixer_0(Playable_t459825607  value)
	{
		___mixer_0 = value;
	}

	inline static int32_t get_offset_of_parentMixer_1() { return static_cast<int32_t>(offsetof(WeightInfo_t1982677921, ___parentMixer_1)); }
	inline Playable_t459825607  get_parentMixer_1() const { return ___parentMixer_1; }
	inline Playable_t459825607 * get_address_of_parentMixer_1() { return &___parentMixer_1; }
	inline void set_parentMixer_1(Playable_t459825607  value)
	{
		___parentMixer_1 = value;
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(WeightInfo_t1982677921, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}

	inline static int32_t get_offset_of_modulate_3() { return static_cast<int32_t>(offsetof(WeightInfo_t1982677921, ___modulate_3)); }
	inline bool get_modulate_3() const { return ___modulate_3; }
	inline bool* get_address_of_modulate_3() { return &___modulate_3; }
	inline void set_modulate_3(bool value)
	{
		___modulate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
struct WeightInfo_t1982677921_marshaled_pinvoke
{
	Playable_t459825607  ___mixer_0;
	Playable_t459825607  ___parentMixer_1;
	int32_t ___port_2;
	int32_t ___modulate_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
struct WeightInfo_t1982677921_marshaled_com
{
	Playable_t459825607  ___mixer_0;
	Playable_t459825607  ___parentMixer_1;
	int32_t ___port_2;
	int32_t ___modulate_3;
};
#endif // WEIGHTINFO_T1982677921_H
#ifndef COMPARISON_1_T1757609100_H
#define COMPARISON_1_T1757609100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>
struct  Comparison_1_t1757609100  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T1757609100_H
#ifndef EXPRESSION_1_T3066134371_H
#define EXPRESSION_1_T3066134371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression`1<System.Object>
struct  Expression_1_t3066134371  : public LambdaExpression_t3131094331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_1_T3066134371_H
#ifndef PREDICATE_1_T2807972045_H
#define PREDICATE_1_T2807972045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>
struct  Predicate_1_t2807972045  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T2807972045_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_t3723878365  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WorkRequest_t1354518612  m_Items[1];

public:
	inline WorkRequest_t1354518612  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t1354518612 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t1354518612  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WorkRequest_t1354518612  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t1354518612 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t1354518612  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t287865710  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t287865710  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t287865710  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t2723150157  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t2723150157  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t2723150157  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Queue`1<T>)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_m1880089175_gshared (Enumerator_t3588277760 * __this, Queue_1_t2926365658 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Collections.Generic.Queue`1<T>)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_m3618492419_gshared (Enumerator_t1862690208 * __this, Queue_1_t1200778106 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_m3419056812_gshared (Enumerator_t1142515742 * __this, Stack_1_t3923495619 * ___t0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m4269083576_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m42805805_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method);
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m3895111131_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2862011382_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3694449643_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<Cinemachine.CameraState/CustomBlendable>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m2508766599_gshared (Comparison_1_t3306260399 * __this, CustomBlendable_t3531329220  ___x0, CustomBlendable_t3531329220  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m949811449_gshared (Comparison_1_t3293622236 * __this, Pair_t3518691057  ___x0, Pair_t3518691057  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<System.Boolean>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3120494323_gshared (Comparison_1_t4167186440 * __this, bool ___x0, bool ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m758547514_gshared (Comparison_1_t2725876932 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3571748132_gshared (Comparison_1_t2855037343 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m211021171_gshared (Comparison_1_t62796889 * __this, CustomAttributeNamedArgument_t287865710  ___x0, CustomAttributeNamedArgument_t287865710  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m517083441_gshared (Comparison_1_t2498081336 * __this, CustomAttributeTypedArgument_t2723150157  ___x0, CustomAttributeTypedArgument_t2723150157  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<UnityEngine.AnimatorClipInfo>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m1295715919_gshared (Comparison_1_t2931648334 * __this, AnimatorClipInfo_t3156717155  ___x0, AnimatorClipInfo_t3156717155  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3899730459_gshared (Comparison_1_t1360909010 * __this, OrderBlock_t1585977831  ___x0, OrderBlock_t1585977831  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<UnityEngine.Playables.Playable>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3612291633_gshared (Comparison_1_t234756786 * __this, Playable_t459825607  ___x0, Playable_t459825607  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m2064114998_gshared (Comparison_1_t1757609100 * __this, WeightInfo_t1982677921  ___x0, WeightInfo_t1982677921  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m941130260_gshared (Comparison_1_t1931160702 * __this, Vector2_t2156229523  ___x0, Vector2_t2156229523  ___y1, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m945371617_gshared (Comparison_1_t3497244643 * __this, Vector3_t3722313464  ___x0, Vector3_t3722313464  ___y1, const RuntimeMethod* method);
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Converter_2_Invoke_m2710846192_gshared (Converter_2_t2442480487 * __this, RuntimeObject * ___input0, const RuntimeMethod* method);
// TResult System.Func`1<System.Boolean>::Invoke()
extern "C" IL2CPP_METHOD_ATTR bool Func_1_Invoke_m370346740_gshared (Func_1_t3822001908 * __this, const RuntimeMethod* method);
// TResult System.Func`1<System.Object>::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m939761484_gshared (Func_1_t2509852811 * __this, const RuntimeMethod* method);
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1574203759_gshared (Func_2_t3759279471 * __this, RuntimeObject * ___arg10, const RuntimeMethod* method);
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m3943476943_gshared (Func_2_t2447130374 * __this, RuntimeObject * ___arg10, const RuntimeMethod* method);
// TResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(T1,T2)
extern "C" IL2CPP_METHOD_ATTR bool Func_3_Invoke_m4134091626_gshared (Func_3_t4119323734 * __this, int32_t ___arg10, intptr_t ___arg21, const RuntimeMethod* method);
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_m1194147890_gshared (Func_3_t3398609381 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m509459810_gshared (Nullable_1_t1819850047 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1994351731_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// T System.Nullable`1<System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_m2018837163_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Nullable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m3590524177_gshared (Nullable_1_t1819850047 * __this, Nullable_1_t1819850047  p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m1466134572_gshared (Nullable_1_t1819850047 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.Nullable`1<System.Boolean>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m1030690889_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// System.String System.Nullable`1<System.Boolean>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m3428050117_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3314784284_gshared (Nullable_1_t2603721331 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1210311128_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  Nullable_1_get_Value_m1801617894_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m4046255732_gshared (Nullable_1_t2603721331 * __this, Nullable_1_t2603721331  p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m2119234996_gshared (Nullable_1_t2603721331 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m4232053575_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m1520177337_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<Cinemachine.CameraState/CustomBlendable>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2363125758_gshared (Predicate_1_t61656048 * __this, CustomBlendable_t3531329220  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<Cinemachine.CinemachineClearShot/Pair>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m446093848_gshared (Predicate_1_t49017885 * __this, Pair_t3518691057  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m28611209_gshared (Predicate_1_t922582089 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2308795536_gshared (Predicate_1_t3776239877 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3369767990_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2315049893_gshared (Predicate_1_t1113159834 * __this, CustomAttributeNamedArgument_t287865710  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m685699837_gshared (Predicate_1_t3548444281 * __this, CustomAttributeTypedArgument_t2723150157  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<UnityEngine.AnimatorClipInfo>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2372669878_gshared (Predicate_1_t3982011279 * __this, AnimatorClipInfo_t3156717155  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m851618236_gshared (Predicate_1_t2411271955 * __this, OrderBlock_t1585977831  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<UnityEngine.Playables.Playable>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m313563199_gshared (Predicate_1_t1285119731 * __this, Playable_t459825607  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3135892059_gshared (Predicate_1_t2807972045 * __this, WeightInfo_t1982677921  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2758354419_gshared (Predicate_1_t2981523647 * __this, Vector2_t2156229523  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m1229727214_gshared (Predicate_1_t252640292 * __this, Vector3_t3722313464  ___obj0, const RuntimeMethod* method);
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Getter_2_Invoke_m3667195478_gshared (Getter_2_t2063956538 * __this, RuntimeObject * ____this0, const RuntimeMethod* method);
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_Invoke_m3640162116_gshared (StaticGetter_1_t3872988374 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3535252839_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3388120194_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m272661351_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m1035307306_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m2304474703_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m1904347475_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m218720656_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_m497587869_gshared (ExposedReference_1_t3345160085 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_m224242934_gshared (ScriptPlayable_1_t818619019 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  ScriptPlayable_1_GetHandle_m4044520055_gshared (ScriptPlayable_1_t818619019 * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_m949756923_gshared (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_m3817690859_gshared (ScriptPlayable_1_t818619019 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_m3658320404_gshared (ScriptPlayable_1_t818619019 * __this, ScriptPlayable_1_t818619019  ___other0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m2751210921 (ArgumentNullException_t1615371798 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m2047740448 (ArgumentOutOfRangeException_t777629997 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Queue`1<T>)
inline void Enumerator__ctor_m1880089175 (Enumerator_t3588277760 * __this, Queue_1_t2926365658 * p0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3588277760 *, Queue_1_t2926365658 *, const RuntimeMethod*))Enumerator__ctor_m1880089175_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Collections.Generic.Queue`1<T>)
inline void Enumerator__ctor_m3618492419 (Enumerator_t1862690208 * __this, Queue_1_t1200778106 * p0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1862690208 *, Queue_1_t1200778106 *, const RuntimeMethod*))Enumerator__ctor_m3618492419_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
inline void Enumerator__ctor_m3419056812 (Enumerator_t1142515742 * __this, Stack_1_t3923495619 * ___t0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1142515742 *, Stack_1_t3923495619 *, const RuntimeMethod*))Enumerator__ctor_m3419056812_gshared)(__this, ___t0, method);
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
inline void Enumerator_System_Collections_IEnumerator_Reset_m4269083576 (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1142515742 *, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_m4269083576_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m42805805 (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t1142515742 *, const RuntimeMethod*))Enumerator_get_Current_m42805805_gshared)(__this, method);
}
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
inline RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m3895111131 (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t1142515742 *, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m3895111131_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_m2862011382 (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1142515742 *, const RuntimeMethod*))Enumerator_Dispose_m2862011382_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m3694449643 (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1142515742 *, const RuntimeMethod*))Enumerator_MoveNext_m3694449643_gshared)(__this, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_CopyTo_m225704097 (RuntimeArray * __this, RuntimeArray * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_m816310962 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Comparison`1<Cinemachine.CameraState/CustomBlendable>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m2508766599 (Comparison_1_t3306260399 * __this, CustomBlendable_t3531329220  ___x0, CustomBlendable_t3531329220  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t3306260399 *, CustomBlendable_t3531329220 , CustomBlendable_t3531329220 , const RuntimeMethod*))Comparison_1_Invoke_m2508766599_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m949811449 (Comparison_1_t3293622236 * __this, Pair_t3518691057  ___x0, Pair_t3518691057  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t3293622236 *, Pair_t3518691057 , Pair_t3518691057 , const RuntimeMethod*))Comparison_1_Invoke_m949811449_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<System.Boolean>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m3120494323 (Comparison_1_t4167186440 * __this, bool ___x0, bool ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t4167186440 *, bool, bool, const RuntimeMethod*))Comparison_1_Invoke_m3120494323_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m758547514 (Comparison_1_t2725876932 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t2725876932 *, int32_t, int32_t, const RuntimeMethod*))Comparison_1_Invoke_m758547514_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m3571748132 (Comparison_1_t2855037343 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t2855037343 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Comparison_1_Invoke_m3571748132_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m211021171 (Comparison_1_t62796889 * __this, CustomAttributeNamedArgument_t287865710  ___x0, CustomAttributeNamedArgument_t287865710  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t62796889 *, CustomAttributeNamedArgument_t287865710 , CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*))Comparison_1_Invoke_m211021171_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m517083441 (Comparison_1_t2498081336 * __this, CustomAttributeTypedArgument_t2723150157  ___x0, CustomAttributeTypedArgument_t2723150157  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t2498081336 *, CustomAttributeTypedArgument_t2723150157 , CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*))Comparison_1_Invoke_m517083441_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<UnityEngine.AnimatorClipInfo>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m1295715919 (Comparison_1_t2931648334 * __this, AnimatorClipInfo_t3156717155  ___x0, AnimatorClipInfo_t3156717155  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t2931648334 *, AnimatorClipInfo_t3156717155 , AnimatorClipInfo_t3156717155 , const RuntimeMethod*))Comparison_1_Invoke_m1295715919_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m3899730459 (Comparison_1_t1360909010 * __this, OrderBlock_t1585977831  ___x0, OrderBlock_t1585977831  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t1360909010 *, OrderBlock_t1585977831 , OrderBlock_t1585977831 , const RuntimeMethod*))Comparison_1_Invoke_m3899730459_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<UnityEngine.Playables.Playable>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m3612291633 (Comparison_1_t234756786 * __this, Playable_t459825607  ___x0, Playable_t459825607  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t234756786 *, Playable_t459825607 , Playable_t459825607 , const RuntimeMethod*))Comparison_1_Invoke_m3612291633_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m2064114998 (Comparison_1_t1757609100 * __this, WeightInfo_t1982677921  ___x0, WeightInfo_t1982677921  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t1757609100 *, WeightInfo_t1982677921 , WeightInfo_t1982677921 , const RuntimeMethod*))Comparison_1_Invoke_m2064114998_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m941130260 (Comparison_1_t1931160702 * __this, Vector2_t2156229523  ___x0, Vector2_t2156229523  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t1931160702 *, Vector2_t2156229523 , Vector2_t2156229523 , const RuntimeMethod*))Comparison_1_Invoke_m941130260_gshared)(__this, ___x0, ___y1, method);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
inline int32_t Comparison_1_Invoke_m945371617 (Comparison_1_t3497244643 * __this, Vector3_t3722313464  ___x0, Vector3_t3722313464  ___y1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Comparison_1_t3497244643 *, Vector3_t3722313464 , Vector3_t3722313464 , const RuntimeMethod*))Comparison_1_Invoke_m945371617_gshared)(__this, ___x0, ___y1, method);
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
inline RuntimeObject * Converter_2_Invoke_m2710846192 (Converter_2_t2442480487 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Converter_2_t2442480487 *, RuntimeObject *, const RuntimeMethod*))Converter_2_Invoke_m2710846192_gshared)(__this, ___input0, method);
}
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_m370346740 (Func_1_t3822001908 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t3822001908 *, const RuntimeMethod*))Func_1_Invoke_m370346740_gshared)(__this, method);
}
// TResult System.Func`1<System.Object>::Invoke()
inline RuntimeObject * Func_1_Invoke_m939761484 (Func_1_t2509852811 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_1_t2509852811 *, const RuntimeMethod*))Func_1_Invoke_m939761484_gshared)(__this, method);
}
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m1574203759 (Func_2_t3759279471 * __this, RuntimeObject * ___arg10, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m1574203759_gshared)(__this, ___arg10, method);
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject * Func_2_Invoke_m3943476943 (Func_2_t2447130374 * __this, RuntimeObject * ___arg10, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_2_t2447130374 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m3943476943_gshared)(__this, ___arg10, method);
}
// TResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(T1,T2)
inline bool Func_3_Invoke_m4134091626 (Func_3_t4119323734 * __this, int32_t ___arg10, intptr_t ___arg21, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t4119323734 *, int32_t, intptr_t, const RuntimeMethod*))Func_3_Invoke_m4134091626_gshared)(__this, ___arg10, ___arg21, method);
}
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
inline RuntimeObject * Func_3_Invoke_m1194147890 (Func_3_t3398609381 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_3_t3398609381 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Func_3_Invoke_m1194147890_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m509459810 (Nullable_1_t1819850047 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1819850047 *, bool, const RuntimeMethod*))Nullable_1__ctor_m509459810_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1994351731 (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1994351731_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method);
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_m2018837163 (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_get_Value_m2018837163_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Nullable`1<T>)
inline bool Nullable_1_Equals_m3590524177 (Nullable_1_t1819850047 * __this, Nullable_1_t1819850047  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1819850047 *, Nullable_1_t1819850047 , const RuntimeMethod*))Nullable_1_Equals_m3590524177_gshared)(__this, p0, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Object)
inline bool Nullable_1_Equals_m1466134572 (Nullable_1_t1819850047 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1819850047 *, RuntimeObject *, const RuntimeMethod*))Nullable_1_Equals_m1466134572_gshared)(__this, ___other0, method);
}
// System.Boolean System.Boolean::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Boolean_Equals_m2410333903 (bool* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m3167312162 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.Nullable`1<System.Boolean>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_m1030690889 (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_GetHashCode_m1030690889_gshared)(__this, method);
}
// System.String System.Boolean::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method);
// System.String System.Nullable`1<System.Boolean>::ToString()
inline String_t* Nullable_1_ToString_m3428050117 (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_ToString_m3428050117_gshared)(__this, method);
}
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
inline void Nullable_1__ctor_m3314784284 (Nullable_1_t2603721331 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t2603721331 *, TimeSpan_t881159249 , const RuntimeMethod*))Nullable_1__ctor_m3314784284_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1210311128 (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1210311128_gshared)(__this, method);
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t881159249  Nullable_1_get_Value_m1801617894 (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t881159249  (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_get_Value_m1801617894_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
inline bool Nullable_1_Equals_m4046255732 (Nullable_1_t2603721331 * __this, Nullable_1_t2603721331  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2603721331 *, Nullable_1_t2603721331 , const RuntimeMethod*))Nullable_1_Equals_m4046255732_gshared)(__this, p0, method);
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
inline bool Nullable_1_Equals_m2119234996 (Nullable_1_t2603721331 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2603721331 *, RuntimeObject *, const RuntimeMethod*))Nullable_1_Equals_m2119234996_gshared)(__this, ___other0, method);
}
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TimeSpan_Equals_m45505612 (TimeSpan_t881159249 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TimeSpan_GetHashCode_m1939414618 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_m4232053575 (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_GetHashCode_m4232053575_gshared)(__this, method);
}
// System.String System.TimeSpan::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m1128692466 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.String System.Nullable`1<System.TimeSpan>::ToString()
inline String_t* Nullable_1_ToString_m1520177337 (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_ToString_m1520177337_gshared)(__this, method);
}
// System.Boolean System.Predicate`1<Cinemachine.CameraState/CustomBlendable>::Invoke(T)
inline bool Predicate_1_Invoke_m2363125758 (Predicate_1_t61656048 * __this, CustomBlendable_t3531329220  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t61656048 *, CustomBlendable_t3531329220 , const RuntimeMethod*))Predicate_1_Invoke_m2363125758_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<Cinemachine.CinemachineClearShot/Pair>::Invoke(T)
inline bool Predicate_1_Invoke_m446093848 (Predicate_1_t49017885 * __this, Pair_t3518691057  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t49017885 *, Pair_t3518691057 , const RuntimeMethod*))Predicate_1_Invoke_m446093848_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
inline bool Predicate_1_Invoke_m28611209 (Predicate_1_t922582089 * __this, bool ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t922582089 *, bool, const RuntimeMethod*))Predicate_1_Invoke_m28611209_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
inline bool Predicate_1_Invoke_m2308795536 (Predicate_1_t3776239877 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t3776239877 *, int32_t, const RuntimeMethod*))Predicate_1_Invoke_m2308795536_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
inline bool Predicate_1_Invoke_m3369767990 (Predicate_1_t3905400288 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))Predicate_1_Invoke_m3369767990_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
inline bool Predicate_1_Invoke_m2315049893 (Predicate_1_t1113159834 * __this, CustomAttributeNamedArgument_t287865710  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t1113159834 *, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*))Predicate_1_Invoke_m2315049893_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
inline bool Predicate_1_Invoke_m685699837 (Predicate_1_t3548444281 * __this, CustomAttributeTypedArgument_t2723150157  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t3548444281 *, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*))Predicate_1_Invoke_m685699837_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<UnityEngine.AnimatorClipInfo>::Invoke(T)
inline bool Predicate_1_Invoke_m2372669878 (Predicate_1_t3982011279 * __this, AnimatorClipInfo_t3156717155  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t3982011279 *, AnimatorClipInfo_t3156717155 , const RuntimeMethod*))Predicate_1_Invoke_m2372669878_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T)
inline bool Predicate_1_Invoke_m851618236 (Predicate_1_t2411271955 * __this, OrderBlock_t1585977831  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2411271955 *, OrderBlock_t1585977831 , const RuntimeMethod*))Predicate_1_Invoke_m851618236_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<UnityEngine.Playables.Playable>::Invoke(T)
inline bool Predicate_1_Invoke_m313563199 (Predicate_1_t1285119731 * __this, Playable_t459825607  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t1285119731 *, Playable_t459825607 , const RuntimeMethod*))Predicate_1_Invoke_m313563199_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::Invoke(T)
inline bool Predicate_1_Invoke_m3135892059 (Predicate_1_t2807972045 * __this, WeightInfo_t1982677921  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2807972045 *, WeightInfo_t1982677921 , const RuntimeMethod*))Predicate_1_Invoke_m3135892059_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
inline bool Predicate_1_Invoke_m2758354419 (Predicate_1_t2981523647 * __this, Vector2_t2156229523  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2981523647 *, Vector2_t2156229523 , const RuntimeMethod*))Predicate_1_Invoke_m2758354419_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
inline bool Predicate_1_Invoke_m1229727214 (Predicate_1_t252640292 * __this, Vector3_t3722313464  ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t252640292 *, Vector3_t3722313464 , const RuntimeMethod*))Predicate_1_Invoke_m1229727214_gshared)(__this, ___obj0, method);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject * Getter_2_Invoke_m3667195478 (Getter_2_t2063956538 * __this, RuntimeObject * ____this0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Getter_2_t2063956538 *, RuntimeObject *, const RuntimeMethod*))Getter_2_Invoke_m3667195478_gshared)(__this, ____this0, method);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
inline RuntimeObject * StaticGetter_1_Invoke_m3640162116 (StaticGetter_1_t3872988374 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (StaticGetter_1_t3872988374 *, const RuntimeMethod*))StaticGetter_1_Invoke_m3640162116_gshared)(__this, method);
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m2110966014 (BaseInvokableCall_t2703961024 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * NetFxCoreExtensions_CreateDelegate_m751211712 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m768115019 (BaseInvokableCall_t2703961024 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m878393606 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___delegate0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m2361978888 (Delegate_t1188392813 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m444570327 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
inline void UnityAction_1_Invoke_m3535252839 (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))UnityAction_1_Invoke_m3535252839_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
inline void UnityAction_1_Invoke_m3388120194 (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))UnityAction_1_Invoke_m3388120194_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
inline void UnityAction_1_Invoke_m272661351 (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))UnityAction_1_Invoke_m272661351_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
inline void UnityAction_1_Invoke_m1035307306 (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))UnityAction_1_Invoke_m1035307306_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
inline void UnityAction_1_Invoke_m3649732398 (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2933211702 *, Scene_t2348375561 , const RuntimeMethod*))UnityAction_1_Invoke_m3649732398_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m2304474703 (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t3283971887 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_2_Invoke_m2304474703_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m1541286357 (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t2165061829 *, Scene_t2348375561 , int32_t, const RuntimeMethod*))UnityAction_2_Invoke_m1541286357_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m944492567 (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1262235195 *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*))UnityAction_2_Invoke_m944492567_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
inline void UnityAction_3_Invoke_m1904347475 (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_t1557236713 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_3_Invoke_m1904347475_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
inline void UnityAction_4_Invoke_m218720656 (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_4_t682480391 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_4_Invoke_m218720656_gshared)(__this, ___arg00, ___arg11, ___arg22, ___arg33, method);
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m1851535676 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_m3539965410 (UnityEventBase_t3960448221 * __this, BaseInvokableCall_t2703961024 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m3326364145 (UnityEventBase_t3960448221 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3989987635 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t3940880105* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
extern "C" IL2CPP_METHOD_ATTR List_1_t4176035766 * UnityEventBase_PrepareInvoke_m1785382128 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_t2703961024 * List_1_get_Item_m4156046467 (List_1_t4176035766 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_t2703961024 * (*) (List_1_t4176035766 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m1437964737 (InvokableCall_t832123510 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m1245201994 (List_1_t4176035766 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4176035766 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
inline RuntimeObject * ExposedReference_1_Resolve_m497587869 (ExposedReference_1_t3345160085 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ExposedReference_1_t3345160085 *, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_m497587869_gshared)(__this, ___resolver0, method);
}
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Min_m2427345610 (RuntimeObject * __this /* static, unused */, int64_t p0, int64_t p1, const RuntimeMethod* method);
// System.Int64 System.Math::Max(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Max_m3392967427 (RuntimeObject * __this /* static, unused */, int64_t p0, int64_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m470245444 (Enumerator_t2146457487 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t2146457487 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2142368520 (Enumerator_t2146457487 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2146457487 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m777349566 (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method);
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
extern "C" IL2CPP_METHOD_ATTR Type_t * PlayableHandle_GetPlayableType_m432385838 (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m318645277 (InvalidCastException_t3927145244 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
inline void ScriptPlayable_1__ctor_m224242934 (ScriptPlayable_1_t818619019 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_t818619019 *, PlayableHandle_t1095853803 , const RuntimeMethod*))ScriptPlayable_1__ctor_m224242934_gshared)(__this, ___handle0, method);
}
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  PlayableHandle_get_Null_m218234861 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableGraph::CreatePlayableHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  PlayableGraph_CreatePlayableHandle_m1596980658 (PlayableGraph_t3515989261 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m2596808857 (PlayableHandle_t1095853803 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance(System.Object)
extern "C" IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_m4072572491 (PlayableHandle_t1095853803 * __this, RuntimeObject * ___scriptInstance0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___x0, Object_t631007953 * ___y1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Object_Instantiate_m3403600534 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___original0, const RuntimeMethod* method);
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_m3233469693 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
inline PlayableHandle_t1095853803  ScriptPlayable_1_GetHandle_m4044520055 (ScriptPlayable_1_t818619019 * __this, const RuntimeMethod* method)
{
	return ((  PlayableHandle_t1095853803  (*) (ScriptPlayable_1_t818619019 *, const RuntimeMethod*))ScriptPlayable_1_GetHandle_m4044520055_gshared)(__this, method);
}
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
inline RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_m949756923 (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (PlayableHandle_t1095853803 *, const RuntimeMethod*))PlayableHandle_GetObject_TisRuntimeObject_m949756923_gshared)(__this, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
inline RuntimeObject * ScriptPlayable_1_GetBehaviour_m3817690859 (ScriptPlayable_1_t818619019 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ScriptPlayable_1_t818619019 *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m3817690859_gshared)(__this, method);
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void Playable__ctor_m3175303195 (Playable_t459825607 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  Playable_GetHandle_m98909670 (Playable_t459825607 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m3344837515 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  ___x0, PlayableHandle_t1095853803  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
inline bool ScriptPlayable_1_Equals_m3658320404 (ScriptPlayable_1_t818619019 * __this, ScriptPlayable_1_t818619019  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ScriptPlayable_1_t818619019 *, ScriptPlayable_1_t818619019 , const RuntimeMethod*))ScriptPlayable_1_Equals_m3658320404_gshared)(__this, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)0);
		__this->set__array_0(L_0);
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m2068090025_gshared (Queue_1_t2926365658 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queue_1__ctor_m2068090025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, (String_t*)_stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Queue_1__ctor_m2068090025_RuntimeMethod_var);
	}

IL_0018:
	{
		int32_t L_2 = ___count0;
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->set__array_0(L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m917596678_gshared (Queue_1_t2926365658 * __this, RuntimeArray * ___array0, int32_t ___idx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queue_1_System_Collections_ICollection_CopyTo_m917596678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Queue_1_System_Collections_ICollection_CopyTo_m917596678_RuntimeMethod_var);
	}

IL_000c:
	{
		int32_t L_2 = ___idx1;
		RuntimeArray * L_3 = ___array0;
		int32_t L_4 = Array_get_Length_m21610649((RuntimeArray *)L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) > ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Queue_1_System_Collections_ICollection_CopyTo_m917596678_RuntimeMethod_var);
	}

IL_001e:
	{
		RuntimeArray * L_6 = ___array0;
		int32_t L_7 = Array_get_Length_m21610649((RuntimeArray *)L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___idx1;
		int32_t L_9 = (int32_t)__this->get__size_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_10 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, Queue_1_System_Collections_ICollection_CopyTo_m917596678_RuntimeMethod_var);
	}

IL_0037:
	{
		int32_t L_11 = (int32_t)__this->get__size_2();
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t2843939325* L_12 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
			V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))));
			int32_t L_13 = V_0;
			int32_t L_14 = (int32_t)__this->get__head_1();
			V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14));
			ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
			int32_t L_16 = (int32_t)__this->get__head_1();
			RuntimeArray * L_17 = ___array0;
			int32_t L_18 = ___idx1;
			int32_t L_19 = (int32_t)__this->get__size_2();
			int32_t L_20 = V_1;
			int32_t L_21 = Math_Min_m3468062251(NULL /*static, unused*/, (int32_t)L_19, (int32_t)L_20, /*hidden argument*/NULL);
			Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (RuntimeArray *)L_17, (int32_t)L_18, (int32_t)L_21, /*hidden argument*/NULL);
			int32_t L_22 = (int32_t)__this->get__size_2();
			int32_t L_23 = V_1;
			if ((((int32_t)L_22) <= ((int32_t)L_23)))
			{
				goto IL_0098;
			}
		}

IL_0080:
		{
			ObjectU5BU5D_t2843939325* L_24 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
			RuntimeArray * L_25 = ___array0;
			int32_t L_26 = ___idx1;
			int32_t L_27 = V_1;
			int32_t L_28 = (int32_t)__this->get__size_2();
			int32_t L_29 = V_1;
			Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (RuntimeArray *)L_25, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), /*hidden argument*/NULL);
		}

IL_0098:
		{
			goto IL_00a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArrayTypeMismatchException_t2342549375_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009d;
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.ArrayTypeMismatchException)
		{
			ArgumentException_t132251570 * L_30 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3698743796(L_30, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, Queue_1_System_Collections_ICollection_CopyTo_m917596678_RuntimeMethod_var);
		}

IL_00a4:
		{
			goto IL_00a9;
		}
	} // end catch (depth: 1)

IL_00a9:
	{
		return;
	}
}
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_System_Collections_ICollection_get_SyncRoot_m3056525871_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3648012175_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t3588277760  L_0 = ((  Enumerator_t3588277760  (*) (Queue_1_t2926365658 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Queue_1_t2926365658 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t3588277760  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m66170101_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t3588277760  L_0 = ((  Enumerator_t3588277760  (*) (Queue_1_t2926365658 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Queue_1_t2926365658 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t3588277760  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m2346748943_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (Queue_1_t2926365658 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Queue_1_t2926365658 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_0;
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
		int32_t L_2 = (int32_t)__this->get__head_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject *)L_3);
		int32_t L_4 = (int32_t)__this->get__head_1();
		int32_t L_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		V_2 = (int32_t)L_5;
		__this->set__head_1(L_5);
		int32_t L_6 = V_2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
		if ((!(((uint32_t)L_6) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))))))
		{
			goto IL_0046;
		}
	}
	{
		__this->set__head_1(0);
	}

IL_0046:
	{
		int32_t L_8 = (int32_t)__this->get__size_2();
		__this->set__size_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = (int32_t)__this->get__version_3();
		__this->set__version_3(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Peek_m2302800625_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queue_1_Peek_m2302800625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Queue_1_Peek_m2302800625_RuntimeMethod_var);
	}

IL_0011:
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
		int32_t L_3 = (int32_t)__this->get__head_1();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3588277760  Queue_1_GetEnumerator_m3453105872_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t3588277760  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m1880089175((&L_0), (Queue_1_t2926365658 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
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
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m263978079_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		WorkRequestU5BU5D_t3723878365* L_0 = (WorkRequestU5BU5D_t3723878365*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)0);
		__this->set__array_0(L_0);
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m1971992302_gshared (Queue_1_t1200778106 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queue_1__ctor_m1971992302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, (String_t*)_stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Queue_1__ctor_m1971992302_RuntimeMethod_var);
	}

IL_0018:
	{
		int32_t L_2 = ___count0;
		WorkRequestU5BU5D_t3723878365* L_3 = (WorkRequestU5BU5D_t3723878365*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->set__array_0(L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m3452613063_gshared (Queue_1_t1200778106 * __this, RuntimeArray * ___array0, int32_t ___idx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queue_1_System_Collections_ICollection_CopyTo_m3452613063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Queue_1_System_Collections_ICollection_CopyTo_m3452613063_RuntimeMethod_var);
	}

IL_000c:
	{
		int32_t L_2 = ___idx1;
		RuntimeArray * L_3 = ___array0;
		int32_t L_4 = Array_get_Length_m21610649((RuntimeArray *)L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) > ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Queue_1_System_Collections_ICollection_CopyTo_m3452613063_RuntimeMethod_var);
	}

IL_001e:
	{
		RuntimeArray * L_6 = ___array0;
		int32_t L_7 = Array_get_Length_m21610649((RuntimeArray *)L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___idx1;
		int32_t L_9 = (int32_t)__this->get__size_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_10 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, Queue_1_System_Collections_ICollection_CopyTo_m3452613063_RuntimeMethod_var);
	}

IL_0037:
	{
		int32_t L_11 = (int32_t)__this->get__size_2();
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			WorkRequestU5BU5D_t3723878365* L_12 = (WorkRequestU5BU5D_t3723878365*)__this->get__array_0();
			V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))));
			int32_t L_13 = V_0;
			int32_t L_14 = (int32_t)__this->get__head_1();
			V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14));
			WorkRequestU5BU5D_t3723878365* L_15 = (WorkRequestU5BU5D_t3723878365*)__this->get__array_0();
			int32_t L_16 = (int32_t)__this->get__head_1();
			RuntimeArray * L_17 = ___array0;
			int32_t L_18 = ___idx1;
			int32_t L_19 = (int32_t)__this->get__size_2();
			int32_t L_20 = V_1;
			int32_t L_21 = Math_Min_m3468062251(NULL /*static, unused*/, (int32_t)L_19, (int32_t)L_20, /*hidden argument*/NULL);
			Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (RuntimeArray *)L_17, (int32_t)L_18, (int32_t)L_21, /*hidden argument*/NULL);
			int32_t L_22 = (int32_t)__this->get__size_2();
			int32_t L_23 = V_1;
			if ((((int32_t)L_22) <= ((int32_t)L_23)))
			{
				goto IL_0098;
			}
		}

IL_0080:
		{
			WorkRequestU5BU5D_t3723878365* L_24 = (WorkRequestU5BU5D_t3723878365*)__this->get__array_0();
			RuntimeArray * L_25 = ___array0;
			int32_t L_26 = ___idx1;
			int32_t L_27 = V_1;
			int32_t L_28 = (int32_t)__this->get__size_2();
			int32_t L_29 = V_1;
			Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (RuntimeArray *)L_25, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), /*hidden argument*/NULL);
		}

IL_0098:
		{
			goto IL_00a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArrayTypeMismatchException_t2342549375_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009d;
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.ArrayTypeMismatchException)
		{
			ArgumentException_t132251570 * L_30 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3698743796(L_30, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, Queue_1_System_Collections_ICollection_CopyTo_m3452613063_RuntimeMethod_var);
		}

IL_00a4:
		{
			goto IL_00a9;
		}
	} // end catch (depth: 1)

IL_00a9:
	{
		return;
	}
}
// System.Object System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_System_Collections_ICollection_get_SyncRoot_m2296777650_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2263220760_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t1862690208  L_0 = ((  Enumerator_t1862690208  (*) (Queue_1_t1200778106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Queue_1_t1200778106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t1862690208  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m3464578225_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t1862690208  L_0 = ((  Enumerator_t1862690208  (*) (Queue_1_t1200778106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Queue_1_t1200778106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t1862690208  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// T System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR WorkRequest_t1354518612  Queue_1_Dequeue_m979967976_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	WorkRequest_t1354518612  V_0;
	memset(&V_0, 0, sizeof(V_0));
	WorkRequest_t1354518612  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		WorkRequest_t1354518612  L_0 = ((  WorkRequest_t1354518612  (*) (Queue_1_t1200778106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Queue_1_t1200778106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (WorkRequest_t1354518612 )L_0;
		WorkRequestU5BU5D_t3723878365* L_1 = (WorkRequestU5BU5D_t3723878365*)__this->get__array_0();
		int32_t L_2 = (int32_t)__this->get__head_1();
		il2cpp_codegen_initobj((&V_1), sizeof(WorkRequest_t1354518612 ));
		WorkRequest_t1354518612  L_3 = V_1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (WorkRequest_t1354518612 )L_3);
		int32_t L_4 = (int32_t)__this->get__head_1();
		int32_t L_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		V_2 = (int32_t)L_5;
		__this->set__head_1(L_5);
		int32_t L_6 = V_2;
		WorkRequestU5BU5D_t3723878365* L_7 = (WorkRequestU5BU5D_t3723878365*)__this->get__array_0();
		if ((!(((uint32_t)L_6) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))))))
		{
			goto IL_0046;
		}
	}
	{
		__this->set__head_1(0);
	}

IL_0046:
	{
		int32_t L_8 = (int32_t)__this->get__size_2();
		__this->set__size_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = (int32_t)__this->get__version_3();
		__this->set__version_3(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		WorkRequest_t1354518612  L_10 = V_0;
		return L_10;
	}
}
// T System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Peek()
extern "C" IL2CPP_METHOD_ATTR WorkRequest_t1354518612  Queue_1_Peek_m1713833142_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queue_1_Peek_m1713833142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Queue_1_Peek_m1713833142_RuntimeMethod_var);
	}

IL_0011:
	{
		WorkRequestU5BU5D_t3723878365* L_2 = (WorkRequestU5BU5D_t3723878365*)__this->get__array_0();
		int32_t L_3 = (int32_t)__this->get__head_1();
		int32_t L_4 = L_3;
		WorkRequest_t1354518612  L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m3368911732_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t1862690208  Queue_1_GetEnumerator_m3312077919_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t1862690208  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m3618492419((&L_0), (Queue_1_t1200778106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
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
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_m3419056812_gshared (Enumerator_t1142515742 * __this, Stack_1_t3923495619 * ___t0, const RuntimeMethod* method)
{
	{
		Stack_1_t3923495619 * L_0 = ___t0;
		__this->set_parent_0(L_0);
		__this->set_idx_1(((int32_t)-2));
		Stack_1_t3923495619 * L_1 = ___t0;
		int32_t L_2 = (int32_t)L_1->get__version_2();
		__this->set__version_2(L_2);
		return;
	}
}
extern "C"  void Enumerator__ctor_m3419056812_AdjustorThunk (RuntimeObject * __this, Stack_1_t3923495619 * ___t0, const RuntimeMethod* method)
{
	Enumerator_t1142515742 * _thisAdjusted = reinterpret_cast<Enumerator_t1142515742 *>(__this + 1);
	Enumerator__ctor_m3419056812(_thisAdjusted, ___t0, method);
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m4269083576_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_System_Collections_IEnumerator_Reset_m4269083576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->get__version_2();
		Stack_1_t3923495619 * L_1 = (Stack_1_t3923495619 *)__this->get_parent_0();
		int32_t L_2 = (int32_t)L_1->get__version_2();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Enumerator_System_Collections_IEnumerator_Reset_m4269083576_RuntimeMethod_var);
	}

IL_001c:
	{
		__this->set_idx_1(((int32_t)-2));
		return;
	}
}
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m4269083576_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t1142515742 * _thisAdjusted = reinterpret_cast<Enumerator_t1142515742 *>(__this + 1);
	Enumerator_System_Collections_IEnumerator_Reset_m4269083576(_thisAdjusted, method);
}
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m3895111131_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = Enumerator_get_Current_m42805805((Enumerator_t1142515742 *)(Enumerator_t1142515742 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return L_0;
	}
}
extern "C"  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m3895111131_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t1142515742 * _thisAdjusted = reinterpret_cast<Enumerator_t1142515742 *>(__this + 1);
	return Enumerator_System_Collections_IEnumerator_get_Current_m3895111131(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2862011382_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	{
		__this->set_idx_1(((int32_t)-2));
		return;
	}
}
extern "C"  void Enumerator_Dispose_m2862011382_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t1142515742 * _thisAdjusted = reinterpret_cast<Enumerator_t1142515742 *>(__this + 1);
	Enumerator_Dispose_m2862011382(_thisAdjusted, method);
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3694449643_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_MoveNext_m3694449643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get__version_2();
		Stack_1_t3923495619 * L_1 = (Stack_1_t3923495619 *)__this->get_parent_0();
		int32_t L_2 = (int32_t)L_1->get__version_2();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Enumerator_MoveNext_m3694449643_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = (int32_t)__this->get_idx_1();
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_003a;
		}
	}
	{
		Stack_1_t3923495619 * L_5 = (Stack_1_t3923495619 *)__this->get_parent_0();
		int32_t L_6 = (int32_t)L_5->get__size_1();
		__this->set_idx_1(L_6);
	}

IL_003a:
	{
		int32_t L_7 = (int32_t)__this->get_idx_1();
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (int32_t)__this->get_idx_1();
		int32_t L_9 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		V_0 = (int32_t)L_9;
		__this->set_idx_1(L_9);
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return (bool)G_B7_0;
	}
}
extern "C"  bool Enumerator_MoveNext_m3694449643_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t1142515742 * _thisAdjusted = reinterpret_cast<Enumerator_t1142515742 *>(__this + 1);
	return Enumerator_MoveNext_m3694449643(_thisAdjusted, method);
}
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m42805805_gshared (Enumerator_t1142515742 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_get_Current_m42805805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->get_idx_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Enumerator_get_Current_m42805805_RuntimeMethod_var);
	}

IL_0012:
	{
		Stack_1_t3923495619 * L_2 = (Stack_1_t3923495619 *)__this->get_parent_0();
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)L_2->get__array_0();
		int32_t L_4 = (int32_t)__this->get_idx_1();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
extern "C"  RuntimeObject * Enumerator_get_Current_m42805805_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t1142515742 * _thisAdjusted = reinterpret_cast<Enumerator_t1142515742 *>(__this + 1);
	return Enumerator_get_Current_m42805805(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_System_Collections_ICollection_get_SyncRoot_m1016294875_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m1056090330_gshared (Stack_1_t3923495619 * __this, RuntimeArray * ___dest0, int32_t ___idx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stack_1_System_Collections_ICollection_CopyTo_m1056090330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_000b:
		{
			ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
			RuntimeArray * L_2 = ___dest0;
			int32_t L_3 = ___idx1;
			Array_CopyTo_m225704097((RuntimeArray *)(RuntimeArray *)L_1, (RuntimeArray *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
			RuntimeArray * L_4 = ___dest0;
			int32_t L_5 = ___idx1;
			int32_t L_6 = (int32_t)__this->get__size_1();
			Array_Reverse_m816310962(NULL /*static, unused*/, (RuntimeArray *)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		}

IL_0025:
		{
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArrayTypeMismatchException_t2342549375_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.ArrayTypeMismatchException)
		{
			ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3698743796(L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Stack_1_System_Collections_ICollection_CopyTo_m1056090330_RuntimeMethod_var);
		}

IL_0031:
		{
			goto IL_0036;
		}
	} // end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1512721589_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t1142515742  L_0 = ((  Enumerator_t1142515742  (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Stack_1_t3923495619 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Enumerator_t1142515742  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m1118546120_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t1142515742  L_0 = ((  Enumerator_t1142515742  (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Stack_1_t3923495619 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Enumerator_t1142515742  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stack_1_Pop_m756553478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Stack_1_Pop_m756553478_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)__this->get__version_2();
		__this->set__version_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
		int32_t L_4 = (int32_t)__this->get__size_1();
		int32_t L_5 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		V_1 = (int32_t)L_5;
		__this->set__size_1(L_5);
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = (RuntimeObject *)L_8;
		ObjectU5BU5D_t2843939325* L_9 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
		int32_t L_10 = (int32_t)__this->get__size_1();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject *)L_11);
		RuntimeObject * L_12 = V_0;
		return L_12;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * ___t0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t2843939325** G_B4_0 = NULL;
	ObjectU5BU5D_t2843939325** G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325** G_B5_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get__size_1();
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))))))
		{
			goto IL_0043;
		}
	}

IL_001e:
	{
		ObjectU5BU5D_t2843939325** L_3 = (ObjectU5BU5D_t2843939325**)__this->get_address_of__array_0();
		int32_t L_4 = (int32_t)__this->get__size_1();
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B3_0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_5 = (int32_t)__this->get__size_1();
		G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_5));
		G_B5_1 = G_B4_0;
	}

IL_003e:
	{
		((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2843939325**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t2843939325**)(ObjectU5BU5D_t2843939325**)G_B5_1, (int32_t)G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_0043:
	{
		int32_t L_6 = (int32_t)__this->get__version_2();
		__this->set__version_2(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get__array_0();
		int32_t L_8 = (int32_t)__this->get__size_1();
		int32_t L_9 = (int32_t)L_8;
		V_0 = (int32_t)L_9;
		__this->set__size_1(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		int32_t L_10 = V_0;
		RuntimeObject * L_11 = ___t0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject *)L_11);
		return;
	}
}
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m1599740434_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return L_0;
	}
}
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t1142515742  Stack_1_GetEnumerator_m2255833865_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t1142515742  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m3419056812((&L_0), (Stack_1_t3923495619 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Collection_1__ctor_m627519480_gshared (Collection_1_t2024462082 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1__ctor_m627519480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_0 = (List_1_t257213610 *)L_0;
		List_1_t257213610 * L_1 = V_0;
		V_1 = (RuntimeObject*)L_1;
		RuntimeObject* L_2 = V_1;
		RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__this->set_syncRoot_1(L_3);
		List_1_t257213610 * L_4 = V_0;
		__this->set_list_0(L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3382994786_gshared (Collection_1_t2024462082 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_ICollection_CopyTo_m46221116_gshared (Collection_1_t2024462082 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_System_Collections_ICollection_CopyTo_m46221116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICollection_t3904884886_il2cpp_TypeInfo_var)), (RuntimeArray *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IEnumerable_GetEnumerator_m219616015_gshared (Collection_1_t2024462082 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_Add_m2739652888_gshared (Collection_1_t2024462082 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		RuntimeObject * L_3 = ___value0;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t2024462082 *)__this, (int32_t)L_2, (RuntimeObject *)L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_Contains_m2030779275_gshared (Collection_1_t2024462082 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		bool L_4 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_2, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))));
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_IndexOf_m1327058868_gshared (Collection_1_t2024462082 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_2, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Insert_m1510039065_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t2024462082 *)__this, (int32_t)L_0, (RuntimeObject *)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Remove_m3686118478_gshared (Collection_1_t2024462082 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		RuntimeObject * L_1 = ___value0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		int32_t L_3 = ((  int32_t (*) (Collection_1_t2024462082 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Collection_1_t2024462082 *)__this, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t2024462082 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Collection_1_System_Collections_ICollection_get_SyncRoot_m4197918277_gshared (Collection_1_t2024462082 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_syncRoot_1();
		return L_0;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Collection_1_System_Collections_IList_get_Item_m432419097_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_set_Item_m510036531_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T) */, (Collection_1_t2024462082 *)__this, (int32_t)L_0, (RuntimeObject *)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Add_m381519377_gshared (Collection_1_t2024462082 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		RuntimeObject * L_3 = ___item0;
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t2024462082 *)__this, (int32_t)L_2, (RuntimeObject *)L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Clear_m1300437781_gshared (Collection_1_t2024462082 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(30 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems() */, (Collection_1_t2024462082 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" IL2CPP_METHOD_ATTR void Collection_1_ClearItems_m1096166028_gshared (Collection_1_t2024462082 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Clear() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_Contains_m1573275621_gshared (Collection_1_t2024462082 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_CopyTo_m3805949289_gshared (Collection_1_t2024462082 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		ObjectU5BU5D_t2843939325* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< ObjectU5BU5D_t2843939325*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (ObjectU5BU5D_t2843939325*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_m2781054157_gshared (Collection_1_t2024462082 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_IndexOf_m2532283559_gshared (Collection_1_t2024462082 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_1 = ___item0;
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Insert_m1409455950_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___item1;
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t2024462082 *)__this, (int32_t)L_0, (RuntimeObject *)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_InsertItem_m1638143248_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___item1;
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1, (RuntimeObject *)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_Remove_m2519072506_gshared (Collection_1_t2024462082 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		int32_t L_1 = ((  int32_t (*) (Collection_1_t2024462082 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Collection_1_t2024462082 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t2024462082 *)__this, (int32_t)L_3);
		return (bool)1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_RemoveAt_m4173013674_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t2024462082 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_RemoveItem_m4079307753_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Object>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_m2853642267_gshared (Collection_1_t2024462082 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Collection_1_get_Item_m4103760396_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_set_Item_m2229506155_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T) */, (Collection_1_t2024462082 *)__this, (int32_t)L_0, (RuntimeObject *)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_SetItem_m1093999320_gshared (Collection_1_t2024462082 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___item1;
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1, (RuntimeObject *)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_IsValidItem_m2967404270_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_IsValidItem_m2967404270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_1 = ___item0;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 15)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_2, /*hidden argument*/NULL);
		bool L_4 = Type_get_IsValueType_m3108065642((Type_t *)L_3, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return (bool)G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Collection_1_ConvertItem_m1743542180_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_ConvertItem_m1743542180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___item0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_2 = ___item0;
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	}

IL_0012:
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, (String_t*)_stringLiteral1949155672, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Collection_1_ConvertItem_m1743542180_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_CheckWritable_m1688928016_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_CheckWritable_m1688928016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___list0;
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t1314879016 * L_2 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Collection_1_CheckWritable_m1688928016_RuntimeMethod_var);
	}

IL_0011:
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
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Collection_1__ctor_m3380123530_gshared (Collection_1_t3527188924 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1__ctor_m3380123530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1759940452 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		List_1_t1759940452 * L_0 = (List_1_t1759940452 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t1759940452 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_0 = (List_1_t1759940452 *)L_0;
		List_1_t1759940452 * L_1 = V_0;
		V_1 = (RuntimeObject*)L_1;
		RuntimeObject* L_2 = V_1;
		RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__this->set_syncRoot_1(L_3);
		List_1_t1759940452 * L_4 = V_0;
		__this->set_list_0(L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2759388582_gshared (Collection_1_t3527188924 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_ICollection_CopyTo_m1091651328_gshared (Collection_1_t3527188924 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_System_Collections_ICollection_CopyTo_m1091651328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICollection_t3904884886_il2cpp_TypeInfo_var)), (RuntimeArray *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IEnumerable_GetEnumerator_m835943801_gshared (Collection_1_t3527188924 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_Add_m1225163487_gshared (Collection_1_t3527188924 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		RuntimeObject * L_3 = ___value0;
		CustomAttributeNamedArgument_t287865710  L_4 = ((  CustomAttributeNamedArgument_t287865710  (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::InsertItem(System.Int32,T) */, (Collection_1_t3527188924 *)__this, (int32_t)L_2, (CustomAttributeNamedArgument_t287865710 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_Contains_m3551606021_gshared (Collection_1_t3527188924 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		bool L_4 = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_2, (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_IndexOf_m3786556474_gshared (Collection_1_t3527188924 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_2, (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Insert_m665731615_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		CustomAttributeNamedArgument_t287865710  L_2 = ((  CustomAttributeNamedArgument_t287865710  (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::InsertItem(System.Int32,T) */, (Collection_1_t3527188924 *)__this, (int32_t)L_0, (CustomAttributeNamedArgument_t287865710 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Remove_m1376852449_gshared (Collection_1_t3527188924 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		RuntimeObject * L_1 = ___value0;
		CustomAttributeNamedArgument_t287865710  L_2 = ((  CustomAttributeNamedArgument_t287865710  (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		int32_t L_3 = ((  int32_t (*) (Collection_1_t3527188924 *, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Collection_1_t3527188924 *)__this, (CustomAttributeNamedArgument_t287865710 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::RemoveItem(System.Int32) */, (Collection_1_t3527188924 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Collection_1_System_Collections_ICollection_get_SyncRoot_m2229947369_gshared (Collection_1_t3527188924 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_syncRoot_1();
		return L_0;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Collection_1_System_Collections_IList_get_Item_m1368877441_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t287865710 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		CustomAttributeNamedArgument_t287865710  L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_set_Item_m3534631570_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		CustomAttributeNamedArgument_t287865710  L_2 = ((  CustomAttributeNamedArgument_t287865710  (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::SetItem(System.Int32,T) */, (Collection_1_t3527188924 *)__this, (int32_t)L_0, (CustomAttributeNamedArgument_t287865710 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Add_m1736908447_gshared (Collection_1_t3527188924 * __this, CustomAttributeNamedArgument_t287865710  ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		CustomAttributeNamedArgument_t287865710  L_3 = ___item0;
		VirtActionInvoker2< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::InsertItem(System.Int32,T) */, (Collection_1_t3527188924 *)__this, (int32_t)L_2, (CustomAttributeNamedArgument_t287865710 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Clear_m1802910984_gshared (Collection_1_t3527188924 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(30 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::ClearItems() */, (Collection_1_t3527188924 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::ClearItems()
extern "C" IL2CPP_METHOD_ATTR void Collection_1_ClearItems_m2079015882_gshared (Collection_1_t3527188924 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::Clear() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_Contains_m1635530429_gshared (Collection_1_t3527188924 * __this, CustomAttributeNamedArgument_t287865710  ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgument_t287865710  L_1 = ___item0;
		bool L_2 = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (CustomAttributeNamedArgument_t287865710 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_CopyTo_m2405591765_gshared (Collection_1_t3527188924 * __this, CustomAttributeNamedArgumentU5BU5D_t3710464795* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< CustomAttributeNamedArgumentU5BU5D_t3710464795*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (CustomAttributeNamedArgumentU5BU5D_t3710464795*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_m1824095167_gshared (Collection_1_t3527188924 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_IndexOf_m202514423_gshared (Collection_1_t3527188924 * __this, CustomAttributeNamedArgument_t287865710  ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgument_t287865710  L_1 = ___item0;
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (CustomAttributeNamedArgument_t287865710 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Insert_m4064447728_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, CustomAttributeNamedArgument_t287865710  ___item1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_1 = ___item1;
		VirtActionInvoker2< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::InsertItem(System.Int32,T) */, (Collection_1_t3527188924 *)__this, (int32_t)L_0, (CustomAttributeNamedArgument_t287865710 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::InsertItem(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_InsertItem_m353733697_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, CustomAttributeNamedArgument_t287865710  ___item1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_2 = ___item1;
		InterfaceActionInvoker2< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1, (CustomAttributeNamedArgument_t287865710 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_Remove_m1394514143_gshared (Collection_1_t3527188924 * __this, CustomAttributeNamedArgument_t287865710  ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		CustomAttributeNamedArgument_t287865710  L_0 = ___item0;
		int32_t L_1 = ((  int32_t (*) (Collection_1_t3527188924 *, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Collection_1_t3527188924 *)__this, (CustomAttributeNamedArgument_t287865710 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::RemoveItem(System.Int32) */, (Collection_1_t3527188924 *)__this, (int32_t)L_3);
		return (bool)1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_RemoveAt_m2594497299_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::RemoveItem(System.Int32) */, (Collection_1_t3527188924 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::RemoveItem(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_RemoveItem_m1131853396_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_m4116549002_gshared (Collection_1_t3527188924 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t287865710  Collection_1_get_Item_m320095871_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t287865710 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_set_Item_m3534473787_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, CustomAttributeNamedArgument_t287865710  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_1 = ___value1;
		VirtActionInvoker2< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::SetItem(System.Int32,T) */, (Collection_1_t3527188924 *)__this, (int32_t)L_0, (CustomAttributeNamedArgument_t287865710 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::SetItem(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_SetItem_m1660144856_gshared (Collection_1_t3527188924 * __this, int32_t ___index0, CustomAttributeNamedArgument_t287865710  ___item1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_2 = ___item1;
		InterfaceActionInvoker2< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1, (CustomAttributeNamedArgument_t287865710 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::IsValidItem(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_IsValidItem_m1475436662_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_IsValidItem_m1475436662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_1 = ___item0;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 15)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_2, /*hidden argument*/NULL);
		bool L_4 = Type_get_IsValueType_m3108065642((Type_t *)L_3, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return (bool)G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::ConvertItem(System.Object)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t287865710  Collection_1_ConvertItem_m1981511297_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_ConvertItem_m1981511297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___item0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_2 = ___item0;
		return ((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, (String_t*)_stringLiteral1949155672, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Collection_1_ConvertItem_m1981511297_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeNamedArgument>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_CheckWritable_m1826758503_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_CheckWritable_m1826758503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___list0;
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t1314879016 * L_2 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Collection_1_CheckWritable_m1826758503_RuntimeMethod_var);
	}

IL_0011:
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
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Collection_1__ctor_m2425854902_gshared (Collection_1_t1667506075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1__ctor_m2425854902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4195224899 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		List_1_t4195224899 * L_0 = (List_1_t4195224899 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t4195224899 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_0 = (List_1_t4195224899 *)L_0;
		List_1_t4195224899 * L_1 = V_0;
		V_1 = (RuntimeObject*)L_1;
		RuntimeObject* L_2 = V_1;
		RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__this->set_syncRoot_1(L_3);
		List_1_t4195224899 * L_4 = V_0;
		__this->set_list_0(L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1419845799_gshared (Collection_1_t1667506075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_ICollection_CopyTo_m1516601228_gshared (Collection_1_t1667506075 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_System_Collections_ICollection_CopyTo_m1516601228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICollection_t3904884886_il2cpp_TypeInfo_var)), (RuntimeArray *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IEnumerable_GetEnumerator_m2770152814_gshared (Collection_1_t1667506075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeTypedArgument>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_Add_m4130721479_gshared (Collection_1_t1667506075 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		RuntimeObject * L_3 = ___value0;
		CustomAttributeTypedArgument_t2723150157  L_4 = ((  CustomAttributeTypedArgument_t2723150157  (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::InsertItem(System.Int32,T) */, (Collection_1_t1667506075 *)__this, (int32_t)L_2, (CustomAttributeTypedArgument_t2723150157 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_Contains_m770254693_gshared (Collection_1_t1667506075 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		bool L_4 = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_2, (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_IndexOf_m4096172810_gshared (Collection_1_t1667506075 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_2, (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Insert_m238083555_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		CustomAttributeTypedArgument_t2723150157  L_2 = ((  CustomAttributeTypedArgument_t2723150157  (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::InsertItem(System.Int32,T) */, (Collection_1_t1667506075 *)__this, (int32_t)L_0, (CustomAttributeTypedArgument_t2723150157 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Remove_m4145242747_gshared (Collection_1_t1667506075 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		RuntimeObject * L_1 = ___value0;
		CustomAttributeTypedArgument_t2723150157  L_2 = ((  CustomAttributeTypedArgument_t2723150157  (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		int32_t L_3 = ((  int32_t (*) (Collection_1_t1667506075 *, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Collection_1_t1667506075 *)__this, (CustomAttributeTypedArgument_t2723150157 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::RemoveItem(System.Int32) */, (Collection_1_t1667506075 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Collection_1_System_Collections_ICollection_get_SyncRoot_m2514790028_gshared (Collection_1_t1667506075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_syncRoot_1();
		return L_0;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Collection_1_System_Collections_IList_get_Item_m4270028271_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_t2723150157 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		CustomAttributeTypedArgument_t2723150157  L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_set_Item_m4234446892_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		CustomAttributeTypedArgument_t2723150157  L_2 = ((  CustomAttributeTypedArgument_t2723150157  (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		VirtActionInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::SetItem(System.Int32,T) */, (Collection_1_t1667506075 *)__this, (int32_t)L_0, (CustomAttributeTypedArgument_t2723150157 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Add_m1180505945_gshared (Collection_1_t1667506075 * __this, CustomAttributeTypedArgument_t2723150157  ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		CustomAttributeTypedArgument_t2723150157  L_3 = ___item0;
		VirtActionInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::InsertItem(System.Int32,T) */, (Collection_1_t1667506075 *)__this, (int32_t)L_2, (CustomAttributeTypedArgument_t2723150157 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Clear_m1850706650_gshared (Collection_1_t1667506075 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(30 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::ClearItems() */, (Collection_1_t1667506075 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::ClearItems()
extern "C" IL2CPP_METHOD_ATTR void Collection_1_ClearItems_m4018514455_gshared (Collection_1_t1667506075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::Clear() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_Contains_m981881783_gshared (Collection_1_t1667506075 * __this, CustomAttributeTypedArgument_t2723150157  ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgument_t2723150157  L_1 = ___item0;
		bool L_2 = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (CustomAttributeTypedArgument_t2723150157 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_CopyTo_m3142835220_gshared (Collection_1_t1667506075 * __this, CustomAttributeTypedArgumentU5BU5D_t1465843424* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< CustomAttributeTypedArgumentU5BU5D_t1465843424*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (CustomAttributeTypedArgumentU5BU5D_t1465843424*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_m1651518914_gshared (Collection_1_t1667506075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeTypedArgument>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_IndexOf_m2150223968_gshared (Collection_1_t1667506075 * __this, CustomAttributeTypedArgument_t2723150157  ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgument_t2723150157  L_1 = ___item0;
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (CustomAttributeTypedArgument_t2723150157 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_Insert_m3320865810_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, CustomAttributeTypedArgument_t2723150157  ___item1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_1 = ___item1;
		VirtActionInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::InsertItem(System.Int32,T) */, (Collection_1_t1667506075 *)__this, (int32_t)L_0, (CustomAttributeTypedArgument_t2723150157 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::InsertItem(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_InsertItem_m168969280_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, CustomAttributeTypedArgument_t2723150157  ___item1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_2 = ___item1;
		InterfaceActionInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1, (CustomAttributeTypedArgument_t2723150157 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_Remove_m3611142372_gshared (Collection_1_t1667506075 * __this, CustomAttributeTypedArgument_t2723150157  ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		CustomAttributeTypedArgument_t2723150157  L_0 = ___item0;
		int32_t L_1 = ((  int32_t (*) (Collection_1_t1667506075 *, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Collection_1_t1667506075 *)__this, (CustomAttributeTypedArgument_t2723150157 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::RemoveItem(System.Int32) */, (Collection_1_t1667506075 *)__this, (int32_t)L_3);
		return (bool)1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_RemoveAt_m1763805052_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::RemoveItem(System.Int32) */, (Collection_1_t1667506075 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::RemoveItem(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_RemoveItem_m1793654223_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_m3580287489_gshared (Collection_1_t1667506075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_t2723150157  Collection_1_get_Item_m1493027586_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_t2723150157 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_set_Item_m3051224697_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, CustomAttributeTypedArgument_t2723150157  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_1 = ___value1;
		VirtActionInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::SetItem(System.Int32,T) */, (Collection_1_t1667506075 *)__this, (int32_t)L_0, (CustomAttributeTypedArgument_t2723150157 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::SetItem(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_SetItem_m1252556583_gshared (Collection_1_t1667506075 * __this, int32_t ___index0, CustomAttributeTypedArgument_t2723150157  ___item1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_2 = ___item1;
		InterfaceActionInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (int32_t)L_1, (CustomAttributeTypedArgument_t2723150157 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::IsValidItem(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Collection_1_IsValidItem_m93481171_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_IsValidItem_m93481171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_1 = ___item0;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 15)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_2, /*hidden argument*/NULL);
		bool L_4 = Type_get_IsValueType_m3108065642((Type_t *)L_3, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return (bool)G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::ConvertItem(System.Object)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_t2723150157  Collection_1_ConvertItem_m169929357_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_ConvertItem_m169929357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___item0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_2 = ___item0;
		return ((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, (String_t*)_stringLiteral1949155672, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Collection_1_ConvertItem_m169929357_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Reflection.CustomAttributeTypedArgument>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void Collection_1_CheckWritable_m2948668795_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collection_1_CheckWritable_m2948668795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___list0;
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t1314879016 * L_2 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Collection_1_CheckWritable_m2948668795_RuntimeMethod_var);
	}

IL_0011:
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m2122524688_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1__ctor_m2122524688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral3941568111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ReadOnlyCollection_1__ctor_m2122524688_RuntimeMethod_var);
	}

IL_0017:
	{
		RuntimeObject* L_2 = ___list0;
		__this->set_list_0(L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3521523143_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3521523143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3521523143_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m3057662987_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m3057662987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m3057662987_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1216842453_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1216842453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1216842453_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4193727143_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4193727143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4193727143_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2594256520_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2594256520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2594256520_RuntimeMethod_var);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m901419595_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ReadOnlyCollection_1_t4292682451 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ReadOnlyCollection_1_t4292682451 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m1300028287_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m1300028287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m1300028287_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3152485890_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1627200331_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1627200331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICollection_t3904884886_il2cpp_TypeInfo_var)), (RuntimeArray *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m3243251448_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m3243251448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m1600429137_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Add_m1600429137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Add_m1600429137_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_m2903987613_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Clear_m2903987613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Clear_m2903987613_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m1327645028_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		bool L_4 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_2, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3))));
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m198887188_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_2, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m2454144384_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Insert_m2454144384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Insert_m2454144384_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m1965826685_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Remove_m1965826685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Remove_m1965826685_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m1980090087_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m1980090087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m1980090087_RuntimeMethod_var);
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m2522539235_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_IList_get_Item_m1900827001_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m3468968652_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_set_Item_m3468968652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_set_Item_m3468968652_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m2979956790_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_1 = ___value0;
		bool L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m1885337237_gshared (ReadOnlyCollection_1_t4292682451 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		ObjectU5BU5D_t2843939325* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< ObjectU5BU5D_t2843939325*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (ObjectU5BU5D_t2843939325*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2599182567_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m427809401_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_1 = ___value0;
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3533048922_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_get_Item_m3234599553_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (int32_t)L_1);
		return L_2;
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m3265034937_gshared (ReadOnlyCollection_1_t1500441997 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1__ctor_m3265034937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral3941568111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ReadOnlyCollection_1__ctor_m3265034937_RuntimeMethod_var);
	}

IL_0017:
	{
		RuntimeObject* L_2 = ___list0;
		__this->set_list_0(L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3769274581_gshared (ReadOnlyCollection_1_t1500441997 * __this, CustomAttributeNamedArgument_t287865710  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3769274581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3769274581_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m2772202961_gshared (ReadOnlyCollection_1_t1500441997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m2772202961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m2772202961_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1020890112_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, CustomAttributeNamedArgument_t287865710  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1020890112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1020890112_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m620491000_gshared (ReadOnlyCollection_1_t1500441997 * __this, CustomAttributeNamedArgument_t287865710  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m620491000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m620491000_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2659121554_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2659121554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2659121554_RuntimeMethod_var);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t287865710  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m3189289772_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_1 = ((  CustomAttributeNamedArgument_t287865710  (*) (ReadOnlyCollection_1_t1500441997 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ReadOnlyCollection_1_t1500441997 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m2669767497_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, CustomAttributeNamedArgument_t287865710  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m2669767497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m2669767497_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m803101750_gshared (ReadOnlyCollection_1_t1500441997 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m3127175806_gshared (ReadOnlyCollection_1_t1500441997 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m3127175806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICollection_t3904884886_il2cpp_TypeInfo_var)), (RuntimeArray *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m610559569_gshared (ReadOnlyCollection_1_t1500441997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m610559569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m1307486000_gshared (ReadOnlyCollection_1_t1500441997 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Add_m1307486000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Add_m1307486000_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Clear()
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_m108858531_gshared (ReadOnlyCollection_1_t1500441997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Clear_m108858531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Clear_m108858531_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m1294103577_gshared (ReadOnlyCollection_1_t1500441997 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		bool L_4 = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_2, (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2708534183_gshared (ReadOnlyCollection_1_t1500441997 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_2, (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m2746084579_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Insert_m2746084579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Insert_m2746084579_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m1842121503_gshared (ReadOnlyCollection_1_t1500441997 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Remove_m1842121503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Remove_m1842121503_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m4204563965_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m4204563965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m4204563965_RuntimeMethod_var);
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m3235017172_gshared (ReadOnlyCollection_1_t1500441997 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_IList_get_Item_m3076053687_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t287865710 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (int32_t)L_1);
		CustomAttributeNamedArgument_t287865710  L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m3582274843_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_set_Item_m3582274843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_set_Item_m3582274843_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m1169298096_gshared (ReadOnlyCollection_1_t1500441997 * __this, CustomAttributeNamedArgument_t287865710  ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgument_t287865710  L_1 = ___value0;
		bool L_2 = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (CustomAttributeNamedArgument_t287865710 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m3474153465_gshared (ReadOnlyCollection_1_t1500441997 * __this, CustomAttributeNamedArgumentU5BU5D_t3710464795* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< CustomAttributeNamedArgumentU5BU5D_t3710464795*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (CustomAttributeNamedArgumentU5BU5D_t3710464795*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2915975691_gshared (ReadOnlyCollection_1_t1500441997 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2192265022_gshared (ReadOnlyCollection_1_t1500441997 * __this, CustomAttributeNamedArgument_t287865710  ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgument_t287865710  L_1 = ___value0;
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeNamedArgument_t287865710  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (CustomAttributeNamedArgument_t287865710 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1336304542_gshared (ReadOnlyCollection_1_t1500441997 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t287865710  ReadOnlyCollection_1_get_Item_m155866516_gshared (ReadOnlyCollection_1_t1500441997 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t287865710  L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t287865710 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (int32_t)L_1);
		return L_2;
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m2610384050_gshared (ReadOnlyCollection_1_t3935726444 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1__ctor_m2610384050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral3941568111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ReadOnlyCollection_1__ctor_m2610384050_RuntimeMethod_var);
	}

IL_0017:
	{
		RuntimeObject* L_2 = ___list0;
		__this->set_list_0(L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2686599243_gshared (ReadOnlyCollection_1_t3935726444 * __this, CustomAttributeTypedArgument_t2723150157  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2686599243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2686599243_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m522482168_gshared (ReadOnlyCollection_1_t3935726444 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m522482168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m522482168_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m4219875092_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, CustomAttributeTypedArgument_t2723150157  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m4219875092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m4219875092_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m576609459_gshared (ReadOnlyCollection_1_t3935726444 * __this, CustomAttributeTypedArgument_t2723150157  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m576609459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m576609459_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m3969985996_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m3969985996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m3969985996_RuntimeMethod_var);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_t2723150157  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m978644313_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_1 = ((  CustomAttributeTypedArgument_t2723150157  (*) (ReadOnlyCollection_1_t3935726444 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ReadOnlyCollection_1_t3935726444 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m88350439_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, CustomAttributeTypedArgument_t2723150157  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m88350439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m88350439_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2788045022_gshared (ReadOnlyCollection_1_t3935726444 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1705891372_gshared (ReadOnlyCollection_1_t3935726444 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1705891372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICollection_t3904884886_il2cpp_TypeInfo_var)), (RuntimeArray *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m1190113002_gshared (ReadOnlyCollection_1_t3935726444 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m1190113002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m1881324749_gshared (ReadOnlyCollection_1_t3935726444 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Add_m1881324749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Add_m1881324749_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Clear()
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_m2164373218_gshared (ReadOnlyCollection_1_t3935726444 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Clear_m2164373218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Clear_m2164373218_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m1478471296_gshared (ReadOnlyCollection_1_t3935726444 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		bool L_4 = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_2, (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1554444589_gshared (ReadOnlyCollection_1_t3935726444 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_2, (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m1097034733_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Insert_m1097034733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Insert_m1097034733_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m4129318771_gshared (ReadOnlyCollection_1_t3935726444 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_Remove_m4129318771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_Remove_m4129318771_RuntimeMethod_var);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m2129436005_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m2129436005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m2129436005_RuntimeMethod_var);
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m2528824501_gshared (ReadOnlyCollection_1_t3935726444 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_IList_get_Item_m762570940_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_t2723150157 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (int32_t)L_1);
		CustomAttributeTypedArgument_t2723150157  L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m4166186676_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadOnlyCollection_1_System_Collections_IList_set_Item_m4166186676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ReadOnlyCollection_1_System_Collections_IList_set_Item_m4166186676_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3869904379_gshared (ReadOnlyCollection_1_t3935726444 * __this, CustomAttributeTypedArgument_t2723150157  ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgument_t2723150157  L_1 = ___value0;
		bool L_2 = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (CustomAttributeTypedArgument_t2723150157 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m3132438051_gshared (ReadOnlyCollection_1_t3935726444 * __this, CustomAttributeTypedArgumentU5BU5D_t1465843424* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< CustomAttributeTypedArgumentU5BU5D_t1465843424*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (CustomAttributeTypedArgumentU5BU5D_t1465843424*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m52674105_gshared (ReadOnlyCollection_1_t3935726444 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeTypedArgument>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1305514714_gshared (ReadOnlyCollection_1_t3935726444 * __this, CustomAttributeTypedArgument_t2723150157  ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgument_t2723150157  L_1 = ___value0;
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeTypedArgument_t2723150157  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (CustomAttributeTypedArgument_t2723150157 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2091157553_gshared (ReadOnlyCollection_1_t3935726444 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_t2723150157  ReadOnlyCollection_1_get_Item_m3437922467_gshared (ReadOnlyCollection_1_t3935726444 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_t2723150157  L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_t2723150157 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0, (int32_t)L_1);
		return L_2;
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
// System.Void System.Comparison`1<Cinemachine.CameraState/CustomBlendable>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3210549696_gshared (Comparison_1_t3306260399 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<Cinemachine.CameraState/CustomBlendable>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m2508766599_gshared (Comparison_1_t3306260399 * __this, CustomBlendable_t3531329220  ___x0, CustomBlendable_t3531329220  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m2508766599((Comparison_1_t3306260399 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, CustomBlendable_t3531329220 , CustomBlendable_t3531329220 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, CustomBlendable_t3531329220 , CustomBlendable_t3531329220 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, CustomBlendable_t3531329220 , CustomBlendable_t3531329220  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, CustomBlendable_t3531329220 , CustomBlendable_t3531329220  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, CustomBlendable_t3531329220 , CustomBlendable_t3531329220  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, CustomBlendable_t3531329220 , CustomBlendable_t3531329220  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, CustomBlendable_t3531329220 , CustomBlendable_t3531329220 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<Cinemachine.CameraState/CustomBlendable>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m549500440_gshared (Comparison_1_t3306260399 * __this, CustomBlendable_t3531329220  ___x0, CustomBlendable_t3531329220  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m549500440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(CustomBlendable_t3531329220_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(CustomBlendable_t3531329220_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<Cinemachine.CameraState/CustomBlendable>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m2103455158_gshared (Comparison_1_t3306260399 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m1633097551_gshared (Comparison_1_t3293622236 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m949811449_gshared (Comparison_1_t3293622236 * __this, Pair_t3518691057  ___x0, Pair_t3518691057  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m949811449((Comparison_1_t3293622236 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, Pair_t3518691057 , Pair_t3518691057 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, Pair_t3518691057 , Pair_t3518691057 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, Pair_t3518691057 , Pair_t3518691057  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, Pair_t3518691057 , Pair_t3518691057  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, Pair_t3518691057 , Pair_t3518691057  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, Pair_t3518691057 , Pair_t3518691057  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, Pair_t3518691057 , Pair_t3518691057 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m202185845_gshared (Comparison_1_t3293622236 * __this, Pair_t3518691057  ___x0, Pair_t3518691057  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m202185845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Pair_t3518691057_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Pair_t3518691057_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m1115602222_gshared (Comparison_1_t3293622236 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3096108673_gshared (Comparison_1_t4167186440 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<System.Boolean>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3120494323_gshared (Comparison_1_t4167186440 * __this, bool ___x0, bool ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m3120494323((Comparison_1_t4167186440 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, bool, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, bool, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, bool, bool >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, bool, bool >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, bool, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<System.Boolean>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m1001295017_gshared (Comparison_1_t4167186440 * __this, bool ___x0, bool ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m1001295017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m3550077913_gshared (Comparison_1_t4167186440 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m2649066178_gshared (Comparison_1_t2725876932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m758547514_gshared (Comparison_1_t2725876932 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m758547514((Comparison_1_t2725876932 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m1918167472_gshared (Comparison_1_t2725876932 * __this, int32_t ___x0, int32_t ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m1918167472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m435367240_gshared (Comparison_1_t2725876932 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m793514796_gshared (Comparison_1_t2855037343 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3571748132_gshared (Comparison_1_t2855037343 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m3571748132((Comparison_1_t2855037343 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(targetMethod, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(targetMethod, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___x0, ___y1);
					else
						result = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m4001121028_gshared (Comparison_1_t2855037343 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___x0;
	__d_args[1] = ___y1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m4272774412_gshared (Comparison_1_t2855037343 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m340433212_gshared (Comparison_1_t62796889 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m211021171_gshared (Comparison_1_t62796889 * __this, CustomAttributeNamedArgument_t287865710  ___x0, CustomAttributeNamedArgument_t287865710  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m211021171((Comparison_1_t62796889 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, CustomAttributeNamedArgument_t287865710 , CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, CustomAttributeNamedArgument_t287865710 , CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, CustomAttributeNamedArgument_t287865710 , CustomAttributeNamedArgument_t287865710  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, CustomAttributeNamedArgument_t287865710 , CustomAttributeNamedArgument_t287865710  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, CustomAttributeNamedArgument_t287865710 , CustomAttributeNamedArgument_t287865710  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, CustomAttributeNamedArgument_t287865710 , CustomAttributeNamedArgument_t287865710  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, CustomAttributeNamedArgument_t287865710 , CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m3263247262_gshared (Comparison_1_t62796889 * __this, CustomAttributeNamedArgument_t287865710  ___x0, CustomAttributeNamedArgument_t287865710  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m3263247262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(CustomAttributeNamedArgument_t287865710_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(CustomAttributeNamedArgument_t287865710_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m3337344523_gshared (Comparison_1_t62796889 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m533218197_gshared (Comparison_1_t2498081336 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m517083441_gshared (Comparison_1_t2498081336 * __this, CustomAttributeTypedArgument_t2723150157  ___x0, CustomAttributeTypedArgument_t2723150157  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m517083441((Comparison_1_t2498081336 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, CustomAttributeTypedArgument_t2723150157 , CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, CustomAttributeTypedArgument_t2723150157 , CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157 , CustomAttributeTypedArgument_t2723150157  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157 , CustomAttributeTypedArgument_t2723150157  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157 , CustomAttributeTypedArgument_t2723150157  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, CustomAttributeTypedArgument_t2723150157 , CustomAttributeTypedArgument_t2723150157  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, CustomAttributeTypedArgument_t2723150157 , CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m1735646405_gshared (Comparison_1_t2498081336 * __this, CustomAttributeTypedArgument_t2723150157  ___x0, CustomAttributeTypedArgument_t2723150157  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m1735646405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(CustomAttributeTypedArgument_t2723150157_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(CustomAttributeTypedArgument_t2723150157_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m1514982988_gshared (Comparison_1_t2498081336 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<UnityEngine.AnimatorClipInfo>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m1942809147_gshared (Comparison_1_t2931648334 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<UnityEngine.AnimatorClipInfo>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m1295715919_gshared (Comparison_1_t2931648334 * __this, AnimatorClipInfo_t3156717155  ___x0, AnimatorClipInfo_t3156717155  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m1295715919((Comparison_1_t2931648334 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, AnimatorClipInfo_t3156717155 , AnimatorClipInfo_t3156717155 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, AnimatorClipInfo_t3156717155 , AnimatorClipInfo_t3156717155 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, AnimatorClipInfo_t3156717155 , AnimatorClipInfo_t3156717155  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, AnimatorClipInfo_t3156717155 , AnimatorClipInfo_t3156717155  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, AnimatorClipInfo_t3156717155 , AnimatorClipInfo_t3156717155  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, AnimatorClipInfo_t3156717155 , AnimatorClipInfo_t3156717155  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, AnimatorClipInfo_t3156717155 , AnimatorClipInfo_t3156717155 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<UnityEngine.AnimatorClipInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m2734221724_gshared (Comparison_1_t2931648334 * __this, AnimatorClipInfo_t3156717155  ___x0, AnimatorClipInfo_t3156717155  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m2734221724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(AnimatorClipInfo_t3156717155_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(AnimatorClipInfo_t3156717155_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<UnityEngine.AnimatorClipInfo>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m624165032_gshared (Comparison_1_t2931648334 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<UnityEngine.BeforeRenderHelper/OrderBlock>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m1597376039_gshared (Comparison_1_t1360909010 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3899730459_gshared (Comparison_1_t1360909010 * __this, OrderBlock_t1585977831  ___x0, OrderBlock_t1585977831  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m3899730459((Comparison_1_t1360909010 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, OrderBlock_t1585977831 , OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, OrderBlock_t1585977831 , OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, OrderBlock_t1585977831 , OrderBlock_t1585977831  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, OrderBlock_t1585977831 , OrderBlock_t1585977831  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, OrderBlock_t1585977831 , OrderBlock_t1585977831  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, OrderBlock_t1585977831 , OrderBlock_t1585977831  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, OrderBlock_t1585977831 , OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<UnityEngine.BeforeRenderHelper/OrderBlock>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m793617530_gshared (Comparison_1_t1360909010 * __this, OrderBlock_t1585977831  ___x0, OrderBlock_t1585977831  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m793617530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(OrderBlock_t1585977831_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(OrderBlock_t1585977831_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<UnityEngine.BeforeRenderHelper/OrderBlock>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m2999525154_gshared (Comparison_1_t1360909010 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<UnityEngine.Playables.Playable>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3929528471_gshared (Comparison_1_t234756786 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<UnityEngine.Playables.Playable>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m3612291633_gshared (Comparison_1_t234756786 * __this, Playable_t459825607  ___x0, Playable_t459825607  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m3612291633((Comparison_1_t234756786 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, Playable_t459825607 , Playable_t459825607 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, Playable_t459825607 , Playable_t459825607 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, Playable_t459825607 , Playable_t459825607  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, Playable_t459825607 , Playable_t459825607  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, Playable_t459825607 , Playable_t459825607  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, Playable_t459825607 , Playable_t459825607  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, Playable_t459825607 , Playable_t459825607 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Playables.Playable>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m899707730_gshared (Comparison_1_t234756786 * __this, Playable_t459825607  ___x0, Playable_t459825607  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m899707730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Playable_t459825607_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Playable_t459825607_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<UnityEngine.Playables.Playable>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m3324250136_gshared (Comparison_1_t234756786 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m2702149282_gshared (Comparison_1_t1757609100 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m2064114998_gshared (Comparison_1_t1757609100 * __this, WeightInfo_t1982677921  ___x0, WeightInfo_t1982677921  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m2064114998((Comparison_1_t1757609100 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, WeightInfo_t1982677921 , WeightInfo_t1982677921 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, WeightInfo_t1982677921 , WeightInfo_t1982677921 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, WeightInfo_t1982677921 , WeightInfo_t1982677921  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, WeightInfo_t1982677921 , WeightInfo_t1982677921  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, WeightInfo_t1982677921 , WeightInfo_t1982677921  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, WeightInfo_t1982677921 , WeightInfo_t1982677921  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, WeightInfo_t1982677921 , WeightInfo_t1982677921 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m771564713_gshared (Comparison_1_t1757609100 * __this, WeightInfo_t1982677921  ___x0, WeightInfo_t1982677921  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m771564713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(WeightInfo_t1982677921_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(WeightInfo_t1982677921_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m2991432311_gshared (Comparison_1_t1757609100 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m1824284137_gshared (Comparison_1_t1931160702 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m941130260_gshared (Comparison_1_t1931160702 * __this, Vector2_t2156229523  ___x0, Vector2_t2156229523  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m941130260((Comparison_1_t1931160702 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, Vector2_t2156229523 , Vector2_t2156229523 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, Vector2_t2156229523 , Vector2_t2156229523 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, Vector2_t2156229523 , Vector2_t2156229523  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, Vector2_t2156229523 , Vector2_t2156229523  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, Vector2_t2156229523 , Vector2_t2156229523  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, Vector2_t2156229523 , Vector2_t2156229523  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, Vector2_t2156229523 , Vector2_t2156229523 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m4264168485_gshared (Comparison_1_t1931160702 * __this, Vector2_t2156229523  ___x0, Vector2_t2156229523  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m4264168485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m1096746294_gshared (Comparison_1_t1931160702 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m4078530878_gshared (Comparison_1_t3497244643 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_Invoke_m945371617_gshared (Comparison_1_t3497244643 * __this, Vector3_t3722313464  ___x0, Vector3_t3722313464  ___y1, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		Comparison_1_Invoke_m945371617((Comparison_1_t3497244643 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, Vector3_t3722313464 , Vector3_t3722313464 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, Vector3_t3722313464 , Vector3_t3722313464 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< int32_t, Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< int32_t, Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, Vector3_t3722313464 , Vector3_t3722313464 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Comparison_1_BeginInvoke_m1765981570_gshared (Comparison_1_t3497244643 * __this, Vector3_t3722313464  ___x0, Vector3_t3722313464  ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Comparison_1_BeginInvoke_m1765981570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t Comparison_1_EndInvoke_m827964479_gshared (Comparison_1_t3497244643 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Converter_2__ctor_m856212702_gshared (Converter_2_t2442480487 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Converter_2_Invoke_m2710846192_gshared (Converter_2_t2442480487 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		Converter_2_Invoke_m2710846192((Converter_2_t2442480487 *)__this->get_prev_9(), ___input0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___input0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___input0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Converter_2_BeginInvoke_m1968129036_gshared (Converter_2_t2442480487 * __this, RuntimeObject * ___input0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Converter_2_EndInvoke_m155242283_gshared (Converter_2_t2442480487 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m671686221_gshared (Func_1_t3822001908 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`1<System.Boolean>::Invoke()
extern "C" IL2CPP_METHOD_ATTR bool Func_1_Invoke_m370346740_gshared (Func_1_t3822001908 * __this, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Func_1_Invoke_m370346740((Func_1_t3822001908 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Func`1<System.Boolean>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Func_1_BeginInvoke_m1832944778_gshared (Func_1_t3822001908 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// TResult System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Func_1_EndInvoke_m3767477006_gshared (Func_1_t3822001908 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m298111648_gshared (Func_1_t2509852811 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`1<System.Object>::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m939761484_gshared (Func_1_t2509852811 * __this, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		Func_1_Invoke_m939761484((Func_1_t2509852811 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Func_1_BeginInvoke_m148425738_gshared (Func_1_t2509852811 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_1_EndInvoke_m3591709415_gshared (Func_1_t2509852811 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m3104565095_gshared (Func_2_t3759279471 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1574203759_gshared (Func_2_t3759279471 * __this, RuntimeObject * ___arg10, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Func_2_Invoke_m1574203759((Func_2_t3759279471 *)__this->get_prev_9(), ___arg10, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___arg10, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg10, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___arg10);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___arg10);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Func_2_BeginInvoke_m741019616_gshared (Func_2_t3759279471 * __this, RuntimeObject * ___arg10, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg10;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Func_2_EndInvoke_m675918185_gshared (Func_2_t3759279471 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m348566106_gshared (Func_2_t2447130374 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m3943476943_gshared (Func_2_t2447130374 * __this, RuntimeObject * ___arg10, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		Func_2_Invoke_m3943476943((Func_2_t2447130374 *)__this->get_prev_9(), ___arg10, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___arg10, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg10, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___arg10);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___arg10);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Func_2_BeginInvoke_m2941925968_gshared (Func_2_t2447130374 * __this, RuntimeObject * ___arg10, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg10;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_2_EndInvoke_m805099398_gshared (Func_2_t2447130374 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Func`3<System.Int32,System.IntPtr,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_m2966131480_gshared (Func_3_t4119323734 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(T1,T2)
extern "C" IL2CPP_METHOD_ATTR bool Func_3_Invoke_m4134091626_gshared (Func_3_t4119323734 * __this, int32_t ___arg10, intptr_t ___arg21, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Func_3_Invoke_m4134091626((Func_3_t4119323734 *)__this->get_prev_9(), ___arg10, ___arg21, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, int32_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___arg10, ___arg21, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, int32_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg10, ___arg21, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg10, ___arg21);
					else
						result = GenericVirtFuncInvoker2< bool, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg10, ___arg21);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21);
					else
						result = VirtFuncInvoker2< bool, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Func_3_BeginInvoke_m2576783546_gshared (Func_3_t4119323734 * __this, int32_t ___arg10, intptr_t ___arg21, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Func_3_BeginInvoke_m2576783546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___arg10);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg21);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// TResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Func_3_EndInvoke_m905146398_gshared (Func_3_t4119323734 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_m1375075958_gshared (Func_3_t3398609381 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_m1194147890_gshared (Func_3_t3398609381 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		Func_3_Invoke_m1194147890((Func_3_t3398609381 *)__this->get_prev_9(), ___arg10, ___arg21, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___arg10, ___arg21, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg10, ___arg21, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21);
					else
						result = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Func_3_BeginInvoke_m2985061395_gshared (Func_3_t3398609381 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// TResult System.Func`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_3_EndInvoke_m57200468_gshared (Func_3_t3398609381 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
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
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m1723214851_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m1909387290_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_5();
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m2550921559_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_5();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m3813267333_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m183487175_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * V_0 = NULL;
	{
		int32_t* L_0 = (int32_t*)__this->get_address_of_U24PC_4();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)(int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 *)L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * L_3 = V_0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_U3CU24U3Esource_6();
		L_3->set_source_0(L_4);
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * L_5 = V_0;
		Func_2_t3759279471 * L_6 = (Func_2_t3759279471 *)__this->get_U3CU24U3Epredicate_7();
		L_5->set_predicate_3(L_6);
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m612748497_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m612748497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_4();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_4((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_source_0();
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_2);
		__this->set_U3CU24s_120U3E__0_1(L_3);
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0089;
				}
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			RuntimeObject* L_5 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_5);
			__this->set_U3CelementU3E__1_2(L_6);
			Func_2_t3759279471 * L_7 = (Func_2_t3759279471 *)__this->get_predicate_3();
			RuntimeObject * L_8 = (RuntimeObject *)__this->get_U3CelementU3E__1_2();
			bool L_9 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t3759279471 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			RuntimeObject * L_10 = (RuntimeObject *)__this->get_U3CelementU3E__1_2();
			__this->set_U24current_5(L_10);
			__this->set_U24PC_4(1);
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC0, FINALLY_009e);
		}

IL_0089:
		{
			RuntimeObject* L_11 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			if (L_12)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00a2:
		{
			RuntimeObject* L_14 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			if (L_14)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00ab:
		{
			RuntimeObject* L_15 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b7:
	{
		__this->set_U24PC_4((-1));
	}

IL_00be:
	{
		return (bool)0;
	}

IL_00c0:
	{
		return (bool)1;
	}
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m838916350_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m838916350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_4();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_2 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->get_U3CU24s_120U3E__0_1();
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t230129833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m2453824118_RuntimeMethod_var);
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
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m509459810_gshared (Nullable_1_t1819850047 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		__this->set_has_value_1((bool)1);
		bool L_0 = ___value0;
		__this->set_value_0(L_0);
		return;
	}
}
extern "C"  void Nullable_1__ctor_m509459810_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	Nullable_1_t1819850047  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<bool*>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t1819850047 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t1819850047 *)(__this + 1))->get_has_value_1());
	}
	Nullable_1__ctor_m509459810(&_thisAdjusted, ___value0, method);
	*reinterpret_cast<bool*>(__this + 1) = _thisAdjusted.get_value_0();
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1994351731_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
extern "C"  bool Nullable_1_get_HasValue_m1994351731_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t1819850047  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<bool*>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t1819850047 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t1819850047 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_get_HasValue_m1994351731(&_thisAdjusted, method);
	*reinterpret_cast<bool*>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// T System.Nullable`1<System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_m2018837163_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_get_Value_m2018837163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, (String_t*)_stringLiteral2248280106, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Nullable_1_get_Value_m2018837163_RuntimeMethod_var);
	}

IL_0016:
	{
		bool L_2 = (bool)__this->get_value_0();
		return L_2;
	}
}
extern "C"  bool Nullable_1_get_Value_m2018837163_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t1819850047  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<bool*>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t1819850047 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t1819850047 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_get_Value_m2018837163(&_thisAdjusted, method);
	*reinterpret_cast<bool*>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m1466134572_gshared (Nullable_1_t1819850047 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_Equals_m1466134572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)__this->get_has_value_1();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0010:
	{
		RuntimeObject * L_2 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		RuntimeObject * L_3 = ___other0;
		void* L_4 = alloca(sizeof(Nullable_1_t1819850047 ));
		UnBoxNullable(L_3, Boolean_t97287965_il2cpp_TypeInfo_var, L_4);
		bool L_5 = Nullable_1_Equals_m3590524177((Nullable_1_t1819850047 *)(Nullable_1_t1819850047 *)__this, (Nullable_1_t1819850047 )((*(Nullable_1_t1819850047 *)((Nullable_1_t1819850047 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_5;
	}
}
extern "C"  bool Nullable_1_Equals_m1466134572_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Nullable_1_t1819850047  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<bool*>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t1819850047 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t1819850047 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_Equals_m1466134572(&_thisAdjusted, ___other0, method);
	*reinterpret_cast<bool*>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Nullable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m3590524177_gshared (Nullable_1_t1819850047 * __this, Nullable_1_t1819850047  ___other0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)(&___other0)->get_has_value_1();
		bool L_1 = (bool)__this->get_has_value_1();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		bool L_2 = (bool)__this->get_has_value_1();
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		bool* L_3 = (bool*)(&___other0)->get_address_of_value_0();
		bool L_4 = (bool)__this->get_value_0();
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_5);
		bool L_7 = Boolean_Equals_m2410333903((bool*)(bool*)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  bool Nullable_1_Equals_m3590524177_AdjustorThunk (RuntimeObject * __this, Nullable_1_t1819850047  ___other0, const RuntimeMethod* method)
{
	Nullable_1_t1819850047  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<bool*>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t1819850047 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t1819850047 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_Equals_m3590524177(&_thisAdjusted, ___other0, method);
	*reinterpret_cast<bool*>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Int32 System.Nullable`1<System.Boolean>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m1030690889_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		bool* L_1 = (bool*)__this->get_address_of_value_0();
		int32_t L_2 = Boolean_GetHashCode_m3167312162((bool*)(bool*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  int32_t Nullable_1_GetHashCode_m1030690889_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t1819850047  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<bool*>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t1819850047 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t1819850047 *)(__this + 1))->get_has_value_1());
	}
	int32_t _returnValue = Nullable_1_GetHashCode_m1030690889(&_thisAdjusted, method);
	*reinterpret_cast<bool*>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.String System.Nullable`1<System.Boolean>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m3428050117_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_ToString_m3428050117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool* L_1 = (bool*)__this->get_address_of_value_0();
		String_t* L_2 = Boolean_ToString_m2664721875((bool*)(bool*)L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_3;
	}
}
extern "C"  String_t* Nullable_1_ToString_m3428050117_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t1819850047  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<bool*>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t1819850047 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t1819850047 *)(__this + 1))->get_has_value_1());
	}
	String_t* _returnValue = Nullable_1_ToString_m3428050117(&_thisAdjusted, method);
	*reinterpret_cast<bool*>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3314784284_gshared (Nullable_1_t2603721331 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	{
		__this->set_has_value_1((bool)1);
		TimeSpan_t881159249  L_0 = ___value0;
		__this->set_value_0(L_0);
		return;
	}
}
extern "C"  void Nullable_1__ctor_m3314784284_AdjustorThunk (RuntimeObject * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	Nullable_1__ctor_m3314784284(&_thisAdjusted, ___value0, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1210311128_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
extern "C"  bool Nullable_1_get_HasValue_m1210311128_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_get_HasValue_m1210311128(&_thisAdjusted, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  Nullable_1_get_Value_m1801617894_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_get_Value_m1801617894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, (String_t*)_stringLiteral2248280106, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Nullable_1_get_Value_m1801617894_RuntimeMethod_var);
	}

IL_0016:
	{
		TimeSpan_t881159249  L_2 = (TimeSpan_t881159249 )__this->get_value_0();
		return L_2;
	}
}
extern "C"  TimeSpan_t881159249  Nullable_1_get_Value_m1801617894_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	TimeSpan_t881159249  _returnValue = Nullable_1_get_Value_m1801617894(&_thisAdjusted, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m2119234996_gshared (Nullable_1_t2603721331 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_Equals_m2119234996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)__this->get_has_value_1();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0010:
	{
		RuntimeObject * L_2 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		RuntimeObject * L_3 = ___other0;
		void* L_4 = alloca(sizeof(Nullable_1_t2603721331 ));
		UnBoxNullable(L_3, TimeSpan_t881159249_il2cpp_TypeInfo_var, L_4);
		bool L_5 = Nullable_1_Equals_m4046255732((Nullable_1_t2603721331 *)(Nullable_1_t2603721331 *)__this, (Nullable_1_t2603721331 )((*(Nullable_1_t2603721331 *)((Nullable_1_t2603721331 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_5;
	}
}
extern "C"  bool Nullable_1_Equals_m2119234996_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_Equals_m2119234996(&_thisAdjusted, ___other0, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_Equals_m4046255732_gshared (Nullable_1_t2603721331 * __this, Nullable_1_t2603721331  ___other0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)(&___other0)->get_has_value_1();
		bool L_1 = (bool)__this->get_has_value_1();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		bool L_2 = (bool)__this->get_has_value_1();
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		TimeSpan_t881159249 * L_3 = (TimeSpan_t881159249 *)(&___other0)->get_address_of_value_0();
		TimeSpan_t881159249  L_4 = (TimeSpan_t881159249 )__this->get_value_0();
		TimeSpan_t881159249  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_5);
		bool L_7 = TimeSpan_Equals_m45505612((TimeSpan_t881159249 *)(TimeSpan_t881159249 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  bool Nullable_1_Equals_m4046255732_AdjustorThunk (RuntimeObject * __this, Nullable_1_t2603721331  ___other0, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	bool _returnValue = Nullable_1_Equals_m4046255732(&_thisAdjusted, ___other0, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m4232053575_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		TimeSpan_t881159249 * L_1 = (TimeSpan_t881159249 *)__this->get_address_of_value_0();
		int32_t L_2 = TimeSpan_GetHashCode_m1939414618((TimeSpan_t881159249 *)(TimeSpan_t881159249 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  int32_t Nullable_1_GetHashCode_m4232053575_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	int32_t _returnValue = Nullable_1_GetHashCode_m4232053575(&_thisAdjusted, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m1520177337_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_ToString_m1520177337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		TimeSpan_t881159249 * L_1 = (TimeSpan_t881159249 *)__this->get_address_of_value_0();
		String_t* L_2 = TimeSpan_ToString_m1128692466((TimeSpan_t881159249 *)(TimeSpan_t881159249 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_3;
	}
}
extern "C"  String_t* Nullable_1_ToString_m1520177337_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Nullable_1_t2603721331  _thisAdjusted;
	if (!il2cpp_codegen_is_fake_boxed_object(__this))
	{
		_thisAdjusted.set_value_0(*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1));
		_thisAdjusted.set_has_value_1(true);
	}
	else
	{
		_thisAdjusted.set_value_0(((Nullable_1_t2603721331 *)(__this + 1))->get_value_0());
		_thisAdjusted.set_has_value_1(((Nullable_1_t2603721331 *)(__this + 1))->get_has_value_1());
	}
	String_t* _returnValue = Nullable_1_ToString_m1520177337(&_thisAdjusted, method);
	*reinterpret_cast<TimeSpan_t881159249 *>(__this + 1) = _thisAdjusted.get_value_0();
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<Cinemachine.CameraState/CustomBlendable>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m807763307_gshared (Predicate_1_t61656048 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<Cinemachine.CameraState/CustomBlendable>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2363125758_gshared (Predicate_1_t61656048 * __this, CustomBlendable_t3531329220  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m2363125758((Predicate_1_t61656048 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, CustomBlendable_t3531329220 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, CustomBlendable_t3531329220 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, CustomBlendable_t3531329220  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, CustomBlendable_t3531329220  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, CustomBlendable_t3531329220  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, CustomBlendable_t3531329220  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, CustomBlendable_t3531329220 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<Cinemachine.CameraState/CustomBlendable>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m3318409775_gshared (Predicate_1_t61656048 * __this, CustomBlendable_t3531329220  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m3318409775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CustomBlendable_t3531329220_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<Cinemachine.CameraState/CustomBlendable>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m2284200322_gshared (Predicate_1_t61656048 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<Cinemachine.CinemachineClearShot/Pair>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m1191387751_gshared (Predicate_1_t49017885 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<Cinemachine.CinemachineClearShot/Pair>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m446093848_gshared (Predicate_1_t49017885 * __this, Pair_t3518691057  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m446093848((Predicate_1_t49017885 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, Pair_t3518691057 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Pair_t3518691057 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Pair_t3518691057  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, Pair_t3518691057  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Pair_t3518691057  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, Pair_t3518691057  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Pair_t3518691057 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<Cinemachine.CinemachineClearShot/Pair>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m2852911217_gshared (Predicate_1_t49017885 * __this, Pair_t3518691057  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m2852911217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Pair_t3518691057_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<Cinemachine.CinemachineClearShot/Pair>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3274923849_gshared (Predicate_1_t49017885 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2943702050_gshared (Predicate_1_t922582089 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m28611209_gshared (Predicate_1_t922582089 * __this, bool ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m28611209((Predicate_1_t922582089 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, bool >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, bool >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m3843624646_gshared (Predicate_1_t922582089 * __this, bool ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m3843624646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m2744427925_gshared (Predicate_1_t922582089 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2074002922_gshared (Predicate_1_t3776239877 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2308795536_gshared (Predicate_1_t3776239877 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m2308795536((Predicate_1_t3776239877 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m29636740_gshared (Predicate_1_t3776239877 * __this, int32_t ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m29636740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3675319632_gshared (Predicate_1_t3776239877 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m327447107_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3369767990_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m3369767990((Predicate_1_t3905400288 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___obj0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m213497518_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m1490920825_gshared (Predicate_1_t3905400288 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3002344741_gshared (Predicate_1_t1113159834 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2315049893_gshared (Predicate_1_t1113159834 * __this, CustomAttributeNamedArgument_t287865710  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m2315049893((Predicate_1_t1113159834 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, CustomAttributeNamedArgument_t287865710  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, CustomAttributeNamedArgument_t287865710 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m3459414084_gshared (Predicate_1_t1113159834 * __this, CustomAttributeNamedArgument_t287865710  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m3459414084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CustomAttributeNamedArgument_t287865710_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3884403745_gshared (Predicate_1_t1113159834 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m4256519903_gshared (Predicate_1_t3548444281 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m685699837_gshared (Predicate_1_t3548444281 * __this, CustomAttributeTypedArgument_t2723150157  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m685699837((Predicate_1_t3548444281 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, CustomAttributeTypedArgument_t2723150157  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, CustomAttributeTypedArgument_t2723150157 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m401952161_gshared (Predicate_1_t3548444281 * __this, CustomAttributeTypedArgument_t2723150157  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m401952161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CustomAttributeTypedArgument_t2723150157_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3252191495_gshared (Predicate_1_t3548444281 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.AnimatorClipInfo>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m1972519196_gshared (Predicate_1_t3982011279 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.AnimatorClipInfo>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2372669878_gshared (Predicate_1_t3982011279 * __this, AnimatorClipInfo_t3156717155  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m2372669878((Predicate_1_t3982011279 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, AnimatorClipInfo_t3156717155 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, AnimatorClipInfo_t3156717155 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, AnimatorClipInfo_t3156717155  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, AnimatorClipInfo_t3156717155  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, AnimatorClipInfo_t3156717155  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, AnimatorClipInfo_t3156717155  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, AnimatorClipInfo_t3156717155 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.AnimatorClipInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m575979877_gshared (Predicate_1_t3982011279 * __this, AnimatorClipInfo_t3156717155  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m575979877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(AnimatorClipInfo_t3156717155_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<UnityEngine.AnimatorClipInfo>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m236137904_gshared (Predicate_1_t3982011279 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m1646720565_gshared (Predicate_1_t2411271955 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m851618236_gshared (Predicate_1_t2411271955 * __this, OrderBlock_t1585977831  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m851618236((Predicate_1_t2411271955 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, OrderBlock_t1585977831  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, OrderBlock_t1585977831  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, OrderBlock_t1585977831  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, OrderBlock_t1585977831  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, OrderBlock_t1585977831 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m2845045805_gshared (Predicate_1_t2411271955 * __this, OrderBlock_t1585977831  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m2845045805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(OrderBlock_t1585977831_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m2307501513_gshared (Predicate_1_t2411271955 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.Playables.Playable>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m873919720_gshared (Predicate_1_t1285119731 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.Playables.Playable>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m313563199_gshared (Predicate_1_t1285119731 * __this, Playable_t459825607  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m313563199((Predicate_1_t1285119731 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, Playable_t459825607 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Playable_t459825607 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Playable_t459825607  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, Playable_t459825607  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Playable_t459825607  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, Playable_t459825607  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Playable_t459825607 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Playables.Playable>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m2148880776_gshared (Predicate_1_t1285119731 * __this, Playable_t459825607  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m2148880776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Playable_t459825607_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<UnityEngine.Playables.Playable>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3600922082_gshared (Predicate_1_t1285119731 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m512594829_gshared (Predicate_1_t2807972045 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3135892059_gshared (Predicate_1_t2807972045 * __this, WeightInfo_t1982677921  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m3135892059((Predicate_1_t2807972045 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, WeightInfo_t1982677921 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, WeightInfo_t1982677921 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, WeightInfo_t1982677921  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, WeightInfo_t1982677921  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, WeightInfo_t1982677921  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, WeightInfo_t1982677921  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, WeightInfo_t1982677921 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m4251051144_gshared (Predicate_1_t2807972045 * __this, WeightInfo_t1982677921  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m4251051144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WeightInfo_t1982677921_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m2188183987_gshared (Predicate_1_t2807972045 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2000726592_gshared (Predicate_1_t2981523647 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2758354419_gshared (Predicate_1_t2981523647 * __this, Vector2_t2156229523  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m2758354419((Predicate_1_t2981523647 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, Vector2_t2156229523 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Vector2_t2156229523 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Vector2_t2156229523  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, Vector2_t2156229523  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Vector2_t2156229523  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, Vector2_t2156229523  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Vector2_t2156229523 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m2800560563_gshared (Predicate_1_t2981523647 * __this, Vector2_t2156229523  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m2800560563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m4041069564_gshared (Predicate_1_t2981523647 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m4128261089_gshared (Predicate_1_t252640292 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m1229727214_gshared (Predicate_1_t252640292 * __this, Vector3_t3722313464  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m1229727214((Predicate_1_t252640292 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, Vector3_t3722313464 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Vector3_t3722313464 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Vector3_t3722313464  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, Vector3_t3722313464  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Vector3_t3722313464  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, Vector3_t3722313464  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Vector3_t3722313464 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m1281248445_gshared (Predicate_1_t252640292 * __this, Vector3_t3722313464  ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Predicate_1_BeginInvoke_m1281248445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m4121290523_gshared (Predicate_1_t252640292 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Getter_2__ctor_m122643074_gshared (Getter_2_t2063956538 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Getter_2_Invoke_m3667195478_gshared (Getter_2_t2063956538 * __this, RuntimeObject * ____this0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		Getter_2_Invoke_m3667195478((Getter_2_t2063956538 *)__this->get_prev_9(), ____this0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ____this0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ____this0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ____this0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ____this0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____this0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____this0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ____this0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ____this0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ____this0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ____this0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ____this0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(____this0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Getter_2_BeginInvoke_m3421506930_gshared (Getter_2_t2063956538 * __this, RuntimeObject * ____this0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Getter_2_EndInvoke_m491985352_gshared (Getter_2_t2063956538 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StaticGetter_1__ctor_m3696559939_gshared (StaticGetter_1_t3872988374 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_Invoke_m3640162116_gshared (StaticGetter_1_t3872988374 * __this, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		StaticGetter_1_Invoke_m3640162116((StaticGetter_1_t3872988374 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StaticGetter_1_BeginInvoke_m2666084926_gshared (StaticGetter_1_t3872988374 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_EndInvoke_m3076990878_gshared (StaticGetter_1_t3872988374 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m3078689395_gshared (CachedInvokableCall_1_t2423483305 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, bool ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t214452203 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t214452203 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		bool L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m3002667207_gshared (CachedInvokableCall_1_t2423483305 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t214452203 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m812947504_gshared (CachedInvokableCall_1_t2423483305 * __this, bool ___arg00, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t214452203 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m2046334630_gshared (CachedInvokableCall_1_t982173797 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, int32_t ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t3068109991 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m502907382_gshared (CachedInvokableCall_1_t982173797 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t3068109991 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2909479018_gshared (CachedInvokableCall_1_t982173797 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t3068109991 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m3714231058_gshared (CachedInvokableCall_1_t1111334208 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, RuntimeObject * ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m931536002_gshared (CachedInvokableCall_1_t1111334208 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m853073645_gshared (CachedInvokableCall_1_t1111334208 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m1997047287_gshared (CachedInvokableCall_1_t3723462114 * __this, Object_t631007953 * ___target0, MethodInfo_t * ___theFunction1, float ___argument2, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t1514431012 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2734252625_gshared (CachedInvokableCall_1_t3723462114 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t1514431012 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(T)
extern "C" IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m1355947625_gshared (CachedInvokableCall_1_t3723462114 * __this, float ___arg00, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t1514431012 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m337513891_gshared (InvokableCall_1_t214452203 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m337513891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t214452203 *, UnityAction_1_t682124106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m1028560745_gshared (InvokableCall_1_t214452203 * __this, UnityAction_1_t682124106 * ___action0, const RuntimeMethod* method)
{
	{
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_0 = ___action0;
		((  void (*) (InvokableCall_1_t214452203 *, UnityAction_1_t682124106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t214452203 *)__this, (UnityAction_1_t682124106 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1011133128_gshared (InvokableCall_1_t214452203 * __this, UnityAction_1_t682124106 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t682124106 * V_0 = NULL;
	UnityAction_1_t682124106 * V_1 = NULL;
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t682124106 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t682124106 * L_1 = V_0;
		V_1 = (UnityAction_1_t682124106 *)L_1;
		UnityAction_1_t682124106 ** L_2 = (UnityAction_1_t682124106 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t682124106 * L_3 = V_1;
		UnityAction_1_t682124106 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_6 = V_0;
		UnityAction_1_t682124106 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t682124106 *>((UnityAction_1_t682124106 **)(UnityAction_1_t682124106 **)L_2, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t682124106 *)L_6);
		V_0 = (UnityAction_1_t682124106 *)L_7;
		UnityAction_1_t682124106 * L_8 = V_0;
		UnityAction_1_t682124106 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t682124106 *)L_8) == ((RuntimeObject*)(UnityAction_1_t682124106 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1293546855_gshared (InvokableCall_1_t214452203 * __this, UnityAction_1_t682124106 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t682124106 * V_0 = NULL;
	UnityAction_1_t682124106 * V_1 = NULL;
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t682124106 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t682124106 * L_1 = V_0;
		V_1 = (UnityAction_1_t682124106 *)L_1;
		UnityAction_1_t682124106 ** L_2 = (UnityAction_1_t682124106 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t682124106 * L_3 = V_1;
		UnityAction_1_t682124106 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_6 = V_0;
		UnityAction_1_t682124106 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t682124106 *>((UnityAction_1_t682124106 **)(UnityAction_1_t682124106 **)L_2, (UnityAction_1_t682124106 *)((UnityAction_1_t682124106 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t682124106 *)L_6);
		V_0 = (UnityAction_1_t682124106 *)L_7;
		UnityAction_1_t682124106 * L_8 = V_0;
		UnityAction_1_t682124106 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t682124106 *)L_8) == ((RuntimeObject*)(UnityAction_1_t682124106 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m3497872319_gshared (InvokableCall_1_t214452203 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m3497872319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m3497872319_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t682124106 * L_5 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t682124106 * L_7 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t682124106 *)L_7, (bool)((*(bool*)((bool*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m3859772291_gshared (InvokableCall_1_t214452203 * __this, bool ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t682124106 * L_2 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		bool L_3 = ___args00;
		((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t682124106 *)L_2, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m3228745517_gshared (InvokableCall_1_t214452203 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t682124106 * L_0 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t682124106 * L_3 = (UnityAction_1_t682124106 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m854286695_gshared (InvokableCall_1_t3068109991 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m854286695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t3068109991 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m250126292_gshared (InvokableCall_1_t3068109991 * __this, UnityAction_1_t3535781894 * ___action0, const RuntimeMethod* method)
{
	{
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_0 = ___action0;
		((  void (*) (InvokableCall_1_t3068109991 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3068109991 *)__this, (UnityAction_1_t3535781894 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m3984829522_gshared (InvokableCall_1_t3068109991 * __this, UnityAction_1_t3535781894 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3535781894 * V_0 = NULL;
	UnityAction_1_t3535781894 * V_1 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3535781894 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3535781894 * L_1 = V_0;
		V_1 = (UnityAction_1_t3535781894 *)L_1;
		UnityAction_1_t3535781894 ** L_2 = (UnityAction_1_t3535781894 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3535781894 * L_3 = V_1;
		UnityAction_1_t3535781894 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_6 = V_0;
		UnityAction_1_t3535781894 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3535781894 *>((UnityAction_1_t3535781894 **)(UnityAction_1_t3535781894 **)L_2, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3535781894 *)L_6);
		V_0 = (UnityAction_1_t3535781894 *)L_7;
		UnityAction_1_t3535781894 * L_8 = V_0;
		UnityAction_1_t3535781894 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3535781894 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3535781894 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1404598405_gshared (InvokableCall_1_t3068109991 * __this, UnityAction_1_t3535781894 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3535781894 * V_0 = NULL;
	UnityAction_1_t3535781894 * V_1 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3535781894 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3535781894 * L_1 = V_0;
		V_1 = (UnityAction_1_t3535781894 *)L_1;
		UnityAction_1_t3535781894 ** L_2 = (UnityAction_1_t3535781894 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3535781894 * L_3 = V_1;
		UnityAction_1_t3535781894 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_6 = V_0;
		UnityAction_1_t3535781894 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3535781894 *>((UnityAction_1_t3535781894 **)(UnityAction_1_t3535781894 **)L_2, (UnityAction_1_t3535781894 *)((UnityAction_1_t3535781894 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3535781894 *)L_6);
		V_0 = (UnityAction_1_t3535781894 *)L_7;
		UnityAction_1_t3535781894 * L_8 = V_0;
		UnityAction_1_t3535781894 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3535781894 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3535781894 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m891112188_gshared (InvokableCall_1_t3068109991 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m891112188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m891112188_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t3535781894 * L_5 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t3535781894 * L_7 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3535781894 *)L_7, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1665111854_gshared (InvokableCall_1_t3068109991 * __this, int32_t ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t3535781894 * L_2 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		int32_t L_3 = ___args00;
		((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3535781894 *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m2748617534_gshared (InvokableCall_1_t3068109991 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t3535781894 * L_0 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t3535781894 * L_3 = (UnityAction_1_t3535781894 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m974734014_gshared (InvokableCall_1_t3197270402 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m974734014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t3197270402 *, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m2204476693_gshared (InvokableCall_1_t3197270402 * __this, UnityAction_1_t3664942305 * ___action0, const RuntimeMethod* method)
{
	{
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_0 = ___action0;
		((  void (*) (InvokableCall_1_t3197270402 *, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t3197270402 *)__this, (UnityAction_1_t3664942305 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1149657958_gshared (InvokableCall_1_t3197270402 * __this, UnityAction_1_t3664942305 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3664942305 * V_0 = NULL;
	UnityAction_1_t3664942305 * V_1 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3664942305 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3664942305 * L_1 = V_0;
		V_1 = (UnityAction_1_t3664942305 *)L_1;
		UnityAction_1_t3664942305 ** L_2 = (UnityAction_1_t3664942305 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3664942305 * L_3 = V_1;
		UnityAction_1_t3664942305 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_6 = V_0;
		UnityAction_1_t3664942305 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3664942305 *>((UnityAction_1_t3664942305 **)(UnityAction_1_t3664942305 **)L_2, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3664942305 *)L_6);
		V_0 = (UnityAction_1_t3664942305 *)L_7;
		UnityAction_1_t3664942305 * L_8 = V_0;
		UnityAction_1_t3664942305 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3664942305 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3664942305 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1459577645_gshared (InvokableCall_1_t3197270402 * __this, UnityAction_1_t3664942305 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3664942305 * V_0 = NULL;
	UnityAction_1_t3664942305 * V_1 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3664942305 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3664942305 * L_1 = V_0;
		V_1 = (UnityAction_1_t3664942305 *)L_1;
		UnityAction_1_t3664942305 ** L_2 = (UnityAction_1_t3664942305 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3664942305 * L_3 = V_1;
		UnityAction_1_t3664942305 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_6 = V_0;
		UnityAction_1_t3664942305 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3664942305 *>((UnityAction_1_t3664942305 **)(UnityAction_1_t3664942305 **)L_2, (UnityAction_1_t3664942305 *)((UnityAction_1_t3664942305 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3664942305 *)L_6);
		V_0 = (UnityAction_1_t3664942305 *)L_7;
		UnityAction_1_t3664942305 * L_8 = V_0;
		UnityAction_1_t3664942305 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3664942305 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3664942305 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m4071643321_gshared (InvokableCall_1_t3197270402 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m4071643321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m4071643321_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t3664942305 * L_5 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1111745191_gshared (InvokableCall_1_t3197270402 * __this, RuntimeObject * ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t3664942305 * L_2 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		RuntimeObject * L_3 = ___args00;
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3664942305 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m667253485_gshared (InvokableCall_1_t3197270402 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t3664942305 * L_0 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t3664942305 * L_3 = (UnityAction_1_t3664942305 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m4147324340_gshared (InvokableCall_1_t1514431012 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m4147324340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t1514431012 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m550191732_gshared (InvokableCall_1_t1514431012 * __this, UnityAction_1_t1982102915 * ___action0, const RuntimeMethod* method)
{
	{
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_0 = ___action0;
		((  void (*) (InvokableCall_1_t1514431012 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t1514431012 *)__this, (UnityAction_1_t1982102915 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1440777569_gshared (InvokableCall_1_t1514431012 * __this, UnityAction_1_t1982102915 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t1982102915 * V_0 = NULL;
	UnityAction_1_t1982102915 * V_1 = NULL;
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t1982102915 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t1982102915 * L_1 = V_0;
		V_1 = (UnityAction_1_t1982102915 *)L_1;
		UnityAction_1_t1982102915 ** L_2 = (UnityAction_1_t1982102915 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t1982102915 * L_3 = V_1;
		UnityAction_1_t1982102915 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_6 = V_0;
		UnityAction_1_t1982102915 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t1982102915 *>((UnityAction_1_t1982102915 **)(UnityAction_1_t1982102915 **)L_2, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t1982102915 *)L_6);
		V_0 = (UnityAction_1_t1982102915 *)L_7;
		UnityAction_1_t1982102915 * L_8 = V_0;
		UnityAction_1_t1982102915 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t1982102915 *)L_8) == ((RuntimeObject*)(UnityAction_1_t1982102915 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m790146436_gshared (InvokableCall_1_t1514431012 * __this, UnityAction_1_t1982102915 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t1982102915 * V_0 = NULL;
	UnityAction_1_t1982102915 * V_1 = NULL;
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t1982102915 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t1982102915 * L_1 = V_0;
		V_1 = (UnityAction_1_t1982102915 *)L_1;
		UnityAction_1_t1982102915 ** L_2 = (UnityAction_1_t1982102915 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t1982102915 * L_3 = V_1;
		UnityAction_1_t1982102915 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_6 = V_0;
		UnityAction_1_t1982102915 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t1982102915 *>((UnityAction_1_t1982102915 **)(UnityAction_1_t1982102915 **)L_2, (UnityAction_1_t1982102915 *)((UnityAction_1_t1982102915 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t1982102915 *)L_6);
		V_0 = (UnityAction_1_t1982102915 *)L_7;
		UnityAction_1_t1982102915 * L_8 = V_0;
		UnityAction_1_t1982102915 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t1982102915 *)L_8) == ((RuntimeObject*)(UnityAction_1_t1982102915 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m4150391468_gshared (InvokableCall_1_t1514431012 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m4150391468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m4150391468_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t1982102915 * L_5 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t1982102915 * L_7 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t1982102915 *)L_7, (float)((*(float*)((float*)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1920505169_gshared (InvokableCall_1_t1514431012 * __this, float ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t1982102915 * L_2 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		float L_3 = ___args00;
		((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t1982102915 *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m1741895083_gshared (InvokableCall_1_t1514431012 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t1982102915 * L_0 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t1982102915 * L_3 = (UnityAction_1_t1982102915 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_m3619012188_gshared (InvokableCall_2_t362407658 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_m3619012188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t3283971887 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_m1520082677_gshared (InvokableCall_2_t362407658 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_m1520082677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_2_Invoke_m1520082677_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		UnityAction_2_t3283971887 * L_8 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		bool L_9 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		UnityAction_2_t3283971887 * L_10 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_11 = ___args0;
		int32_t L_12 = 0;
		RuntimeObject * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		ObjectU5BU5D_t2843939325* L_14 = ___args0;
		int32_t L_15 = 1;
		RuntimeObject * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		((  void (*) (UnityAction_2_t3283971887 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t3283971887 *)L_10, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0050:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_2_Find_m265590023_gshared (InvokableCall_2_t362407658 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t3283971887 * L_0 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_2_t3283971887 * L_3 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_m4245235439_gshared (InvokableCall_3_t4059188962 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_m4245235439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1557236713 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m3141788616_gshared (InvokableCall_3_t4059188962 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m3141788616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_3_Invoke_m3141788616_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_3_t1557236713 * L_11 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		bool L_12 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		UnityAction_3_t1557236713 * L_13 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_14 = ___args0;
		int32_t L_15 = 0;
		RuntimeObject * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		ObjectU5BU5D_t2843939325* L_17 = ___args0;
		int32_t L_18 = 1;
		RuntimeObject * L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t2843939325* L_20 = ___args0;
		int32_t L_21 = 2;
		RuntimeObject * L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		((  void (*) (UnityAction_3_t1557236713 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_3_t1557236713 *)L_13, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0060:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_3_Find_m26605783_gshared (InvokableCall_3_t4059188962 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t1557236713 * L_0 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_3_t1557236713 * L_3 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_m3136187504_gshared (InvokableCall_4_t2756980746 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_m3136187504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_t682480391 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_m3371718871_gshared (InvokableCall_4_t2756980746 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_m3371718871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_4_Invoke_m3371718871_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_t2843939325* L_11 = ___args0;
		int32_t L_12 = 3;
		RuntimeObject * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		UnityAction_4_t682480391 * L_14 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		bool L_15 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		UnityAction_4_t682480391 * L_16 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_17 = ___args0;
		int32_t L_18 = 0;
		RuntimeObject * L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t2843939325* L_20 = ___args0;
		int32_t L_21 = 1;
		RuntimeObject * L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		ObjectU5BU5D_t2843939325* L_23 = ___args0;
		int32_t L_24 = 2;
		RuntimeObject * L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		ObjectU5BU5D_t2843939325* L_26 = ___args0;
		int32_t L_27 = 3;
		RuntimeObject * L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		((  void (*) (UnityAction_4_t682480391 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((UnityAction_4_t682480391 *)L_16, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_25, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_28, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0070:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_4_Find_m2717860129_gshared (InvokableCall_4_t2756980746 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_t682480391 * L_0 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_4_t682480391 * L_3 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m483887086_gshared (UnityAction_1_t682124106 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3535252839_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3535252839((UnityAction_1_t682124106 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m3721186338_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m3721186338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1872049713_gshared (UnityAction_1_t682124106 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3569411354_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3388120194_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3388120194((UnityAction_1_t3535781894 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4018737650_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4018737650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m290165017_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2434317150_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m272661351_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m272661351((UnityAction_1_t3664942305 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m992932529_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m4173210162_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m4218191642_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m1035307306_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m1035307306((UnityAction_1_t1982102915 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m2530432941_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m2530432941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1615818599_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m63817492_gshared (UnityAction_1_t2933211702 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3649732398((UnityAction_1_t2933211702 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m677813163_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m677813163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m367631613_gshared (UnityAction_1_t2933211702 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m4260941619_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m2304474703_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m2304474703((UnityAction_2_t3283971887 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1322091188_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m1292612021_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m3108471759_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m1541286357((UnityAction_2_t2165061829 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1769266175_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m1769266175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(LoadSceneMode_t3251202195_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m2179051926_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m2941677221_gshared (UnityAction_2_t1262235195 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m944492567((UnityAction_2_t1262235195 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1733258791_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m1733258791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m2385586247_gshared (UnityAction_2_t1262235195 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3__ctor_m2228523061_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m1904347475_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_3_Invoke_m1904347475((UnityAction_3_t1557236713 *)__this->get_prev_9(), ___arg00, ___arg11, ___arg22, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m1515014307_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m1256921407_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m4196105227_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m218720656_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_4_Invoke_m218720656((UnityAction_4_t682480391 *)__this->get_prev_9(), ___arg00, ___arg11, ___arg22, ___arg33, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_m2207320832_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_m1236619780_gshared (UnityAction_4_t682480391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m3816765192_gshared (UnityEvent_1_t3832605257 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m3158408092_gshared (UnityEvent_1_t3832605257 * __this, UnityAction_1_t3535781894 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t3535781894 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m1953458448_gshared (UnityEvent_1_t3832605257 * __this, UnityAction_1_t3535781894 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = ___call0;
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m1397247356_gshared (UnityEvent_1_t3832605257 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m1397247356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m617150804_gshared (UnityEvent_1_t3832605257 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3068109991 * L_2 = (InvokableCall_1_t3068109991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3068109991 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m2283422164_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = ___action0;
		InvokableCall_1_t3068109991 * L_1 = (InvokableCall_1_t3068109991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3068109991 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t3535781894 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3604335408_gshared (UnityEvent_1_t3832605257 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m3604335408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3068109991 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3068109991 *)((InvokableCall_1_t3068109991 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3068109991 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3068109991 * L_5 = V_2;
		int32_t L_6 = ___arg00;
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t3068109991 *)L_5, (int32_t)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		int32_t L_18 = ___arg00;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_t2703961024 * L_21 = V_4;
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_21, (ObjectU5BU5D_t2843939325*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_t4176035766 * L_25 = V_0;
		int32_t L_26 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_25, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1789019280_gshared (UnityEvent_1_t3961765668 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m3703050950_gshared (UnityEvent_1_t3961765668 * __this, UnityAction_1_t3664942305 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t3664942305 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m4140584754_gshared (UnityEvent_1_t3961765668 * __this, UnityAction_1_t3664942305 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = ___call0;
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m322741469_gshared (UnityEvent_1_t3961765668 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m322741469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1223269239_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3197270402 * L_2 = (InvokableCall_1_t3197270402 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1604725783_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t3664942305 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = ___action0;
		InvokableCall_1_t3197270402 * L_1 = (InvokableCall_1_t3197270402 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3197270402 *, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t3664942305 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m2734859485_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m2734859485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3197270402 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3197270402 *)((InvokableCall_1_t3197270402 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3197270402 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3197270402 * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t3197270402 *)L_5, (RuntimeObject *)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_18 = ___arg00;
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		BaseInvokableCall_t2703961024 * L_19 = V_4;
		ObjectU5BU5D_t2843939325* L_20 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_19, (ObjectU5BU5D_t2843939325*)L_20);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_22 = V_1;
		List_1_t4176035766 * L_23 = V_0;
		int32_t L_24 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_23, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m155249342_gshared (UnityEvent_2_t614268397 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m2569180594_gshared (UnityEvent_2_t614268397 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m2569180594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_2_GetDelegate_m3909669659_gshared (UnityEvent_2_t614268397 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t362407658 * L_2 = (InvokableCall_2_t362407658 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t362407658 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m3891569313_gshared (UnityEvent_3_t2404744798 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m1640458315_gshared (UnityEvent_3_t2404744798 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_m1640458315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t3940880105* L_9 = (TypeU5BU5D_t3940880105*)L_6;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_3_GetDelegate_m1156357290_gshared (UnityEvent_3_t2404744798 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4059188962 * L_2 = (InvokableCall_3_t4059188962 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4059188962 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m831487108_gshared (UnityEvent_4_t4085588227 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m3410547086_gshared (UnityEvent_4_t4085588227 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m3410547086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t3940880105* L_9 = (TypeU5BU5D_t3940880105*)L_6;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t3940880105* L_12 = (TypeU5BU5D_t3940880105*)L_9;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_13, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_4_GetDelegate_m3111342790_gshared (UnityEvent_4_t4085588227 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t2756980746 * L_2 = (InvokableCall_4_t2756980746 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t2756980746 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
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
// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_m497587869_gshared (ExposedReference_1_t3345160085 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExposedReference_1_Resolve_m497587869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Object_t631007953 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject* L_0 = ___resolver0;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = ___resolver0;
		PropertyName_t3749835189  L_2 = (PropertyName_t3749835189 )__this->get_exposedName_0();
		Object_t631007953 * L_3 = InterfaceFuncInvoker2< Object_t631007953 *, PropertyName_t3749835189 , bool* >::Invoke(0 /* UnityEngine.Object UnityEngine.IExposedPropertyTable::GetReferenceValue(UnityEngine.PropertyName,System.Boolean&) */, IExposedPropertyTable_t2524209546_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (PropertyName_t3749835189 )L_2, (bool*)(bool*)(&V_0));
		V_1 = (Object_t631007953 *)L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Object_t631007953 * L_5 = V_1;
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
		goto IL_0045;
	}

IL_002e:
	{
	}

IL_002f:
	{
		Object_t631007953 * L_6 = (Object_t631007953 *)__this->get_defaultValue_1();
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
		goto IL_0045;
	}

IL_0045:
	{
		RuntimeObject * L_7 = V_2;
		return L_7;
	}
}
extern "C"  RuntimeObject * ExposedReference_1_Resolve_m497587869_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	ExposedReference_1_t3345160085 * _thisAdjusted = reinterpret_cast<ExposedReference_1_t3345160085 *>(__this + 1);
	return ExposedReference_1_Resolve_m497587869(_thisAdjusted, ___resolver0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.IntervalNode`1<System.Object>::.ctor(System.Collections.Generic.ICollection`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IntervalNode_1__ctor_m3567615865_gshared (IntervalNode_1_t1018600634 * __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalNode_1__ctor_m3567615865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	List_1_t257213610 * V_4 = NULL;
	List_1_t257213610 * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___items0;
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0188;
	}

IL_0017:
	{
		V_0 = (int64_t)((int64_t)std::numeric_limits<int64_t>::max());
		V_1 = (int64_t)((int64_t)std::numeric_limits<int64_t>::min());
		RuntimeObject* L_2 = ___items0;
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_2);
		V_3 = (RuntimeObject*)L_3;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0069;
		}

IL_0038:
		{
			RuntimeObject* L_4 = V_3;
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_4);
			V_2 = (RuntimeObject *)L_5;
			int64_t L_6 = V_0;
			int64_t L_7 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 UnityEngine.IInterval::get_intervalStart() */, IInterval_t948809774_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
			int64_t L_8 = Math_Min_m2427345610(NULL /*static, unused*/, (int64_t)L_6, (int64_t)L_7, /*hidden argument*/NULL);
			V_0 = (int64_t)L_8;
			int64_t L_9 = V_1;
			int64_t L_10 = InterfaceFuncInvoker0< int64_t >::Invoke(1 /* System.Int64 UnityEngine.IInterval::get_intervalEnd() */, IInterval_t948809774_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
			int64_t L_11 = Math_Max_m3392967427(NULL /*static, unused*/, (int64_t)L_9, (int64_t)L_10, /*hidden argument*/NULL);
			V_1 = (int64_t)L_11;
		}

IL_0069:
		{
			RuntimeObject* L_12 = V_3;
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			if (L_13)
			{
				goto IL_0038;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_3;
			if (!L_14)
			{
				goto IL_0085;
			}
		}

IL_007f:
		{
			RuntimeObject* L_15 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		int64_t L_16 = V_1;
		int64_t L_17 = V_0;
		__this->set_m_Center_0(((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_16, (int64_t)L_17))/(int64_t)(((int64_t)((int64_t)2))))));
		List_1_t257213610 * L_18 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		__this->set_m_Children_1(L_18);
		List_1_t257213610 * L_19 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_4 = (List_1_t257213610 *)L_19;
		List_1_t257213610 * L_20 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_5 = (List_1_t257213610 *)L_20;
		RuntimeObject* L_21 = ___items0;
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_21);
		V_7 = (RuntimeObject*)L_22;
	}

IL_00b4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011d;
		}

IL_00b9:
		{
			RuntimeObject* L_23 = V_7;
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_23);
			V_6 = (RuntimeObject *)L_24;
			int64_t L_25 = InterfaceFuncInvoker0< int64_t >::Invoke(1 /* System.Int64 UnityEngine.IInterval::get_intervalEnd() */, IInterval_t948809774_il2cpp_TypeInfo_var, (RuntimeObject*)(V_6));
			int64_t L_26 = (int64_t)__this->get_m_Center_0();
			if ((((int64_t)L_25) >= ((int64_t)L_26)))
			{
				goto IL_00e9;
			}
		}

IL_00db:
		{
			List_1_t257213610 * L_27 = V_4;
			RuntimeObject * L_28 = V_6;
			((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t257213610 *)L_27, (RuntimeObject *)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			goto IL_011c;
		}

IL_00e9:
		{
			int64_t L_29 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 UnityEngine.IInterval::get_intervalStart() */, IInterval_t948809774_il2cpp_TypeInfo_var, (RuntimeObject*)(V_6));
			int64_t L_30 = (int64_t)__this->get_m_Center_0();
			if ((((int64_t)L_29) <= ((int64_t)L_30)))
			{
				goto IL_010f;
			}
		}

IL_0101:
		{
			List_1_t257213610 * L_31 = V_5;
			RuntimeObject * L_32 = V_6;
			((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t257213610 *)L_31, (RuntimeObject *)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			goto IL_011c;
		}

IL_010f:
		{
			List_1_t257213610 * L_33 = (List_1_t257213610 *)__this->get_m_Children_1();
			RuntimeObject * L_34 = V_6;
			((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t257213610 *)L_33, (RuntimeObject *)L_34, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		}

IL_011c:
		{
		}

IL_011d:
		{
			RuntimeObject* L_35 = V_7;
			bool L_36 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			if (L_36)
			{
				goto IL_00b9;
			}
		}

IL_0129:
		{
			IL2CPP_LEAVE(0x13D, FINALLY_012e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012e;
	}

FINALLY_012e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_37 = V_7;
			if (!L_37)
			{
				goto IL_013c;
			}
		}

IL_0135:
		{
			RuntimeObject* L_38 = V_7;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_38);
		}

IL_013c:
		{
			IL2CPP_END_FINALLY(302)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(302)
	{
		IL2CPP_JUMP_TBL(0x13D, IL_013d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013d:
	{
		List_1_t257213610 * L_39 = (List_1_t257213610 *)__this->get_m_Children_1();
		int32_t L_40 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t257213610 *)L_39, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_40)
		{
			goto IL_0154;
		}
	}
	{
		__this->set_m_Children_1((List_1_t257213610 *)NULL);
	}

IL_0154:
	{
		List_1_t257213610 * L_41 = V_4;
		int32_t L_42 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t257213610 *)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_016e;
		}
	}
	{
		List_1_t257213610 * L_43 = V_4;
		IntervalNode_1_t1018600634 * L_44 = (IntervalNode_1_t1018600634 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		((  void (*) (IntervalNode_1_t1018600634 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)(L_44, (RuntimeObject*)L_43, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		__this->set_m_LeftNode_2(L_44);
	}

IL_016e:
	{
		List_1_t257213610 * L_45 = V_5;
		int32_t L_46 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t257213610 *)L_45, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0188;
		}
	}
	{
		List_1_t257213610 * L_47 = V_5;
		IntervalNode_1_t1018600634 * L_48 = (IntervalNode_1_t1018600634 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		((  void (*) (IntervalNode_1_t1018600634 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)(L_48, (RuntimeObject*)L_47, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		__this->set_m_RightNode_3(L_48);
	}

IL_0188:
	{
		return;
	}
}
// System.Void UnityEngine.IntervalNode`1<System.Object>::Query(System.Int64,System.Int32,System.Collections.Generic.List`1<T>&)
extern "C" IL2CPP_METHOD_ATTR void IntervalNode_1_Query_m183711453_gshared (IntervalNode_1_t1018600634 * __this, int64_t ___time0, int32_t ___bitflag1, List_1_t257213610 ** ___results2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalNode_1_Query_m183711453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Enumerator_t2146457487  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_Children_1();
		if (!L_0)
		{
			goto IL_0087;
		}
	}
	{
		List_1_t257213610 * L_1 = (List_1_t257213610 *)__this->get_m_Children_1();
		Enumerator_t2146457487  L_2 = ((  Enumerator_t2146457487  (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t257213610 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (Enumerator_t2146457487 )L_2;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0067;
		}

IL_001f:
		{
			RuntimeObject * L_3 = Enumerator_get_Current_m470245444((Enumerator_t2146457487 *)(Enumerator_t2146457487 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
			V_0 = (RuntimeObject *)L_3;
			int64_t L_4 = ___time0;
			int64_t L_5 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 UnityEngine.IInterval::get_intervalStart() */, IInterval_t948809774_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0));
			if ((((int64_t)L_4) < ((int64_t)L_5)))
			{
				goto IL_0066;
			}
		}

IL_003b:
		{
			int64_t L_6 = ___time0;
			int64_t L_7 = InterfaceFuncInvoker0< int64_t >::Invoke(1 /* System.Int64 UnityEngine.IInterval::get_intervalEnd() */, IInterval_t948809774_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0));
			if ((((int64_t)L_6) >= ((int64_t)L_7)))
			{
				goto IL_0066;
			}
		}

IL_004e:
		{
			int32_t L_8 = ___bitflag1;
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UnityEngine.IInterval::set_intervalBit(System.Int32) */, IInterval_t948809774_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), (int32_t)L_8);
			List_1_t257213610 ** L_9 = ___results2;
			List_1_t257213610 * L_10 = *((List_1_t257213610 **)L_9);
			RuntimeObject * L_11 = V_0;
			((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t257213610 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		}

IL_0066:
		{
		}

IL_0067:
		{
			bool L_12 = Enumerator_MoveNext_m2142368520((Enumerator_t2146457487 *)(Enumerator_t2146457487 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			if (L_12)
			{
				goto IL_001f;
			}
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t2146457487 > L_13(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13), (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__128 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__128.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__128.method);
		V_1 = L_13.m_Value;
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
	}

IL_0087:
	{
		int64_t L_14 = ___time0;
		int64_t L_15 = (int64_t)__this->get_m_Center_0();
		if ((((int64_t)L_14) >= ((int64_t)L_15)))
		{
			goto IL_00b1;
		}
	}
	{
		IntervalNode_1_t1018600634 * L_16 = (IntervalNode_1_t1018600634 *)__this->get_m_LeftNode_2();
		if (!L_16)
		{
			goto IL_00b1;
		}
	}
	{
		IntervalNode_1_t1018600634 * L_17 = (IntervalNode_1_t1018600634 *)__this->get_m_LeftNode_2();
		int64_t L_18 = ___time0;
		int32_t L_19 = ___bitflag1;
		List_1_t257213610 ** L_20 = ___results2;
		((  void (*) (IntervalNode_1_t1018600634 *, int64_t, int32_t, List_1_t257213610 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((IntervalNode_1_t1018600634 *)L_17, (int64_t)L_18, (int32_t)L_19, (List_1_t257213610 **)(List_1_t257213610 **)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		goto IL_00d6;
	}

IL_00b1:
	{
		int64_t L_21 = ___time0;
		int64_t L_22 = (int64_t)__this->get_m_Center_0();
		if ((((int64_t)L_21) <= ((int64_t)L_22)))
		{
			goto IL_00d6;
		}
	}
	{
		IntervalNode_1_t1018600634 * L_23 = (IntervalNode_1_t1018600634 *)__this->get_m_RightNode_3();
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		IntervalNode_1_t1018600634 * L_24 = (IntervalNode_1_t1018600634 *)__this->get_m_RightNode_3();
		int64_t L_25 = ___time0;
		int32_t L_26 = ___bitflag1;
		List_1_t257213610 ** L_27 = ___results2;
		((  void (*) (IntervalNode_1_t1018600634 *, int64_t, int32_t, List_1_t257213610 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((IntervalNode_1_t1018600634 *)L_24, (int64_t)L_25, (int32_t)L_26, (List_1_t257213610 **)(List_1_t257213610 **)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
	}

IL_00d6:
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
// System.Void UnityEngine.IntervalTree`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1__ctor_m4064574865_gshared (IntervalTree_1_t1489772131 * __this, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Nodes_0(L_0);
		__this->set_m_Dirty_1((bool)1);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.IntervalTree`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1_Add_m2348542272_gshared (IntervalTree_1_t1489772131 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_Nodes_0();
		RuntimeObject * L_1 = ___item0;
		((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((List_1_t257213610 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		__this->set_m_Dirty_1((bool)1);
		return;
	}
}
// System.Void UnityEngine.IntervalTree`1<System.Object>::IntersectsWith(System.Int64,System.Int32,System.Collections.Generic.List`1<T>&)
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1_IntersectsWith_m4191173397_gshared (IntervalTree_1_t1489772131 * __this, int64_t ___value0, int32_t ___bitFlag1, List_1_t257213610 ** ___results2, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Dirty_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		List_1_t257213610 * L_1 = (List_1_t257213610 *)__this->get_m_Nodes_0();
		IntervalNode_1_t1018600634 * L_2 = (IntervalNode_1_t1018600634 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (IntervalNode_1_t1018600634 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Root_2(L_2);
		__this->set_m_Dirty_1((bool)0);
	}

IL_0026:
	{
		IntervalNode_1_t1018600634 * L_3 = (IntervalNode_1_t1018600634 *)__this->get_m_Root_2();
		int64_t L_4 = ___value0;
		int32_t L_5 = ___bitFlag1;
		List_1_t257213610 ** L_6 = ___results2;
		((  void (*) (IntervalNode_1_t1018600634 *, int64_t, int32_t, List_1_t257213610 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((IntervalNode_1_t1018600634 *)L_3, (int64_t)L_4, (int32_t)L_5, (List_1_t257213610 **)(List_1_t257213610 **)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
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
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_m224242934_gshared (ScriptPlayable_1_t818619019 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1__ctor_m224242934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_m777349566((PlayableHandle_t1095853803 *)(PlayableHandle_t1095853803 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		Type_t * L_3 = PlayableHandle_GetPlayableType_m432385838((PlayableHandle_t1095853803 *)(PlayableHandle_t1095853803 *)(&___handle0), /*hidden argument*/NULL);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_2, (Type_t *)L_3);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		Type_t * L_5 = PlayableHandle_GetPlayableType_m432385838((PlayableHandle_t1095853803 *)(PlayableHandle_t1095853803 *)(&___handle0), /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m2556382932(NULL /*static, unused*/, (String_t*)_stringLiteral3824629377, (RuntimeObject *)L_5, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		InvalidCastException_t3927145244 * L_9 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, ScriptPlayable_1__ctor_m224242934_RuntimeMethod_var);
	}

IL_004a:
	{
	}

IL_004b:
	{
		PlayableHandle_t1095853803  L_10 = ___handle0;
		__this->set_m_Handle_0(L_10);
		return;
	}
}
extern "C"  void ScriptPlayable_1__ctor_m224242934_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	ScriptPlayable_1_t818619019 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_t818619019 *>(__this + 1);
	ScriptPlayable_1__ctor_m224242934(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::get_Null()
extern "C" IL2CPP_METHOD_ATTR ScriptPlayable_1_t818619019  ScriptPlayable_1_get_Null_m3134832429_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	ScriptPlayable_1_t818619019  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ScriptPlayable_1_t818619019  L_0 = ((ScriptPlayable_1_t818619019_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_m_NullPlayable_1();
		V_0 = (ScriptPlayable_1_t818619019 )L_0;
		goto IL_000c;
	}

IL_000c:
	{
		ScriptPlayable_1_t818619019  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ScriptPlayable_1_t818619019  ScriptPlayable_1_Create_m975256185_gshared (RuntimeObject * __this /* static, unused */, PlayableGraph_t3515989261  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ScriptPlayable_1_t818619019  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableGraph_t3515989261  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		PlayableHandle_t1095853803  L_2 = ((  PlayableHandle_t1095853803  (*) (RuntimeObject * /* static, unused */, PlayableGraph_t3515989261 , RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (PlayableGraph_t3515989261 )L_0, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2))), (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (PlayableHandle_t1095853803 )L_2;
		PlayableHandle_t1095853803  L_3 = V_0;
		ScriptPlayable_1_t818619019  L_4;
		memset(&L_4, 0, sizeof(L_4));
		ScriptPlayable_1__ctor_m224242934((&L_4), (PlayableHandle_t1095853803 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_1 = (ScriptPlayable_1_t818619019 )L_4;
		goto IL_001b;
	}

IL_001b:
	{
		ScriptPlayable_1_t818619019  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,T,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ScriptPlayable_1_t818619019  ScriptPlayable_1_Create_m234094962_gshared (RuntimeObject * __this /* static, unused */, PlayableGraph_t3515989261  ___graph0, RuntimeObject * ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ScriptPlayable_1_t818619019  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableGraph_t3515989261  L_0 = ___graph0;
		RuntimeObject * L_1 = ___template1;
		int32_t L_2 = ___inputCount2;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		PlayableHandle_t1095853803  L_3 = ((  PlayableHandle_t1095853803  (*) (RuntimeObject * /* static, unused */, PlayableGraph_t3515989261 , RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (PlayableGraph_t3515989261 )L_0, (RuntimeObject *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (PlayableHandle_t1095853803 )L_3;
		PlayableHandle_t1095853803  L_4 = V_0;
		ScriptPlayable_1_t818619019  L_5;
		memset(&L_5, 0, sizeof(L_5));
		ScriptPlayable_1__ctor_m224242934((&L_5), (PlayableHandle_t1095853803 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_1 = (ScriptPlayable_1_t818619019 )L_5;
		goto IL_0016;
	}

IL_0016:
	{
		ScriptPlayable_1_t818619019  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::CreateHandle(UnityEngine.Playables.PlayableGraph,T,System.Int32)
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  ScriptPlayable_1_CreateHandle_m3597998059_gshared (RuntimeObject * __this /* static, unused */, PlayableGraph_t3515989261  ___graph0, RuntimeObject * ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CreateHandle_m3597998059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	PlayableHandle_t1095853803  V_1;
	memset(&V_1, 0, sizeof(V_1));
	PlayableHandle_t1095853803  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (RuntimeObject *)NULL;
		RuntimeObject * L_0 = ___template1;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_1;
		goto IL_0029;
	}

IL_001b:
	{
		RuntimeObject * L_2 = ___template1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_3;
	}

IL_0029:
	{
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, (String_t*)_stringLiteral1721815597, (String_t*)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_9 = PlayableHandle_get_Null_m218234861(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = (PlayableHandle_t1095853803 )L_9;
		goto IL_008f;
	}

IL_0059:
	{
		PlayableHandle_t1095853803  L_10 = PlayableGraph_CreatePlayableHandle_m1596980658((PlayableGraph_t3515989261 *)(PlayableGraph_t3515989261 *)(&___graph0), /*hidden argument*/NULL);
		V_2 = (PlayableHandle_t1095853803 )L_10;
		bool L_11 = PlayableHandle_IsValid_m777349566((PlayableHandle_t1095853803 *)(PlayableHandle_t1095853803 *)(&V_2), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0078;
		}
	}
	{
		PlayableHandle_t1095853803  L_12 = PlayableHandle_get_Null_m218234861(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = (PlayableHandle_t1095853803 )L_12;
		goto IL_008f;
	}

IL_0078:
	{
		int32_t L_13 = ___inputCount2;
		PlayableHandle_SetInputCount_m2596808857((PlayableHandle_t1095853803 *)(PlayableHandle_t1095853803 *)(&V_2), (int32_t)L_13, /*hidden argument*/NULL);
		RuntimeObject * L_14 = V_0;
		PlayableHandle_SetScriptInstance_m4072572491((PlayableHandle_t1095853803 *)(PlayableHandle_t1095853803 *)(&V_2), (RuntimeObject *)L_14, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_15 = V_2;
		V_1 = (PlayableHandle_t1095853803 )L_15;
		goto IL_008f;
	}

IL_008f:
	{
		PlayableHandle_t1095853803  L_16 = V_1;
		return L_16;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CreateScriptInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CreateScriptInstance_m4187935646_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CreateScriptInstance_m4187935646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (ScriptableObject_t2528358522_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_2, /*hidden argument*/NULL);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_1, (Type_t *)L_3);
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_5, /*hidden argument*/NULL);
		ScriptableObject_t2528358522 * L_7 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
		goto IL_0055;
	}

IL_004a:
	{
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_0 = (RuntimeObject*)L_8;
	}

IL_0055:
	{
		RuntimeObject* L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_005c;
	}

IL_005c:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstance(UnityEngine.Playables.IPlayableBehaviour)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstance_m3384895362_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstance_m3384895362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_t631007953 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		V_0 = (Object_t631007953 *)((Object_t631007953 *)IsInst((RuntimeObject*)L_0, Object_t631007953_il2cpp_TypeInfo_var));
		Object_t631007953 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t631007953 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, Object_t631007953 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)(NULL /*static, unused*/, (Object_t631007953 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = (RuntimeObject *)L_4;
		goto IL_0040;
	}

IL_0020:
	{
		RuntimeObject* L_5 = ___source0;
		V_2 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, ICloneable_t724424198_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_8;
		goto IL_0040;
	}

IL_0039:
	{
		V_1 = (RuntimeObject *)NULL;
		goto IL_0040;
	}

IL_0040:
	{
		RuntimeObject * L_9 = V_1;
		return L_9;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstanceFromEngineObject(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m1519549235_gshared (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m1519549235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_t631007953 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Object_t631007953 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_1 = Object_Instantiate_m3403600534(NULL /*static, unused*/, (Object_t631007953 *)L_0, /*hidden argument*/NULL);
		V_0 = (Object_t631007953 *)L_1;
		Object_t631007953 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Object_t631007953 * L_4 = V_0;
		Object_t631007953 * L_5 = (Object_t631007953 *)L_4;
		int32_t L_6 = Object_get_hideFlags_m3233469693((Object_t631007953 *)L_5, /*hidden argument*/NULL);
		Object_set_hideFlags_m1648752846((Object_t631007953 *)L_5, (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)52))), /*hidden argument*/NULL);
	}

IL_0025:
	{
		Object_t631007953 * L_7 = V_0;
		V_1 = (RuntimeObject *)L_7;
		goto IL_002c;
	}

IL_002c:
	{
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstanceFromIClonable(System.ICloneable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstanceFromIClonable_m4246296930_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstanceFromIClonable_m4246296930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.ICloneable::Clone() */, ICloneable_t724424198_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		V_0 = (RuntimeObject *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  ScriptPlayable_1_GetHandle_m4044520055_gshared (ScriptPlayable_1_t818619019 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = (PlayableHandle_t1095853803 )__this->get_m_Handle_0();
		V_0 = (PlayableHandle_t1095853803 )L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  ScriptPlayable_1_GetHandle_m4044520055_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ScriptPlayable_1_t818619019 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_t818619019 *>(__this + 1);
	return ScriptPlayable_1_GetHandle_m4044520055(_thisAdjusted, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_m3817690859_gshared (ScriptPlayable_1_t818619019 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		PlayableHandle_t1095853803 * L_0 = (PlayableHandle_t1095853803 *)__this->get_address_of_m_Handle_0();
		RuntimeObject * L_1 = PlayableHandle_GetObject_TisRuntimeObject_m949756923((PlayableHandle_t1095853803 *)(PlayableHandle_t1095853803 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_0 = (RuntimeObject *)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
extern "C"  RuntimeObject * ScriptPlayable_1_GetBehaviour_m3817690859_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ScriptPlayable_1_t818619019 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_t818619019 *>(__this + 1);
	return ScriptPlayable_1_GetBehaviour_m3817690859(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
extern "C" IL2CPP_METHOD_ATTR Playable_t459825607  ScriptPlayable_1_op_Implicit_m2421719176_gshared (RuntimeObject * __this /* static, unused */, ScriptPlayable_1_t818619019  ___playable0, const RuntimeMethod* method)
{
	Playable_t459825607  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = ScriptPlayable_1_GetHandle_m4044520055((ScriptPlayable_1_t818619019 *)(ScriptPlayable_1_t818619019 *)(&___playable0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Playable_t459825607  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Playable__ctor_m3175303195((&L_1), (PlayableHandle_t1095853803 )L_0, /*hidden argument*/NULL);
		V_0 = (Playable_t459825607 )L_1;
		goto IL_0013;
	}

IL_0013:
	{
		Playable_t459825607  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
extern "C" IL2CPP_METHOD_ATTR ScriptPlayable_1_t818619019  ScriptPlayable_1_op_Explicit_m2226842945_gshared (RuntimeObject * __this /* static, unused */, Playable_t459825607  ___playable0, const RuntimeMethod* method)
{
	ScriptPlayable_1_t818619019  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = Playable_GetHandle_m98909670((Playable_t459825607 *)(Playable_t459825607 *)(&___playable0), /*hidden argument*/NULL);
		ScriptPlayable_1_t818619019  L_1;
		memset(&L_1, 0, sizeof(L_1));
		ScriptPlayable_1__ctor_m224242934((&L_1), (PlayableHandle_t1095853803 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (ScriptPlayable_1_t818619019 )L_1;
		goto IL_0013;
	}

IL_0013:
	{
		ScriptPlayable_1_t818619019  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_m3658320404_gshared (ScriptPlayable_1_t818619019 * __this, ScriptPlayable_1_t818619019  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = ScriptPlayable_1_GetHandle_m4044520055((ScriptPlayable_1_t818619019 *)(ScriptPlayable_1_t818619019 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		PlayableHandle_t1095853803  L_1 = ScriptPlayable_1_GetHandle_m4044520055((ScriptPlayable_1_t818619019 *)(ScriptPlayable_1_t818619019 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, (PlayableHandle_t1095853803 )L_0, (PlayableHandle_t1095853803 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool ScriptPlayable_1_Equals_m3658320404_AdjustorThunk (RuntimeObject * __this, ScriptPlayable_1_t818619019  ___other0, const RuntimeMethod* method)
{
	ScriptPlayable_1_t818619019 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_t818619019 *>(__this + 1);
	return ScriptPlayable_1_Equals_m3658320404(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptPlayable_1__cctor_m603954186_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		PlayableHandle_t1095853803  L_0 = PlayableHandle_get_Null_m218234861(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScriptPlayable_1_t818619019  L_1;
		memset(&L_1, 0, sizeof(L_1));
		ScriptPlayable_1__ctor_m224242934((&L_1), (PlayableHandle_t1095853803 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((ScriptPlayable_1_t818619019_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_m_NullPlayable_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
