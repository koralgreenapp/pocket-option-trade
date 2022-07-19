#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>
struct Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>
struct Func_2_t2BB42BE7865F68814D217891C87A2C0A0F4A6D95;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct KeyCollection_t84AA1F1B52EFFF1EF375587F234C18CE2DD07628;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct KeyCollection_t8840529BDE55CE192C4363210E4F099FB337B2DA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Database.FirebaseDatabase>
struct KeyCollection_tBE56BE44F1E8BD1CE613005863364535F676632D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>
struct TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.DataSnapshot>
struct TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.Internal.InternalDataSnapshot>
struct TaskFactory_1_tA73E498CF30C0ED5BE1E5709F77D6C31DBD0FABC;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087;
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>
struct Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct ValueCollection_tBEA221820CB204DE404E8E0EC3D2485AA8C1334B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct ValueCollection_t9920295899C04624513998B1605017BDABA72056;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Database.FirebaseDatabase>
struct ValueCollection_t133834B402F7BF43F587D3265F51AA6F4059CE28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Internal.InternalListener>[]
struct EntryU5BU5D_t6FB8446E6A2A8D6E952F3157C3A8231C53D2C9EC;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>[]
struct EntryU5BU5D_t8F7D64088845416B9D70EF89EFCA73CF7972BC35;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Database.FirebaseDatabase>[]
struct EntryU5BU5D_tC8B84C3E81C717DCA697ADAEB9CA340295C77DA4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D;
// Firebase.Database.DatabaseError
struct DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8;
// Firebase.Database.DatabaseException
struct DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470;
// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47;
// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4;
// Firebase.Database.Internal.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Firebase.Platform.IClockService
struct IClockService_t73670E2711989DB3EB884D84BE9A79D303AC1D91;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Firebase.Platform.ILoggingService
struct ILoggingService_tD55B1336E14C994826F5A52B0F362008247F1066;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D;
// Firebase.Database.Internal.InternalDataSnapshot
struct InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A;
// Firebase.Database.Internal.InternalDatabaseReference
struct InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9;
// Firebase.Database.Internal.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690;
// Firebase.Database.Internal.InternalListener
struct InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48;
// Firebase.Database.Internal.InternalQuery
struct InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// Firebase.Database.Query
struct Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C;
// Firebase.Variant
struct Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0;
// Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A;
// Firebase.Database.Internal.Future_InternalDataSnapshot/Action
struct Action_t3C9E886ED952A5C1AC45907686BC24896CA35010;
// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1;
// Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2
struct U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A;
// Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0
struct U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9;
// Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1
struct U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1;
// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50;
// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E;
// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901;
// Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1
struct U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF;
// Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0
struct U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E;
// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_tB71F05EC8B3BBACF74EB566C58EEB8EA4A7135B5;
// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444;
// Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0
struct U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t3C9E886ED952A5C1AC45907686BC24896CA35010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangeType_t2832ACD2CF41270724FACC1679BB51380EEB08F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_t583B10CDBD5439637E1CF97DADFC462BF527D753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07F1E3DA016554FBC48202BBEF3B67E41B513EBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983;
IL2CPP_EXTERN_C String_t* _stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2;
IL2CPP_EXTERN_C String_t* _stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102;
IL2CPP_EXTERN_C String_t* _stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C;
IL2CPP_EXTERN_C String_t* _stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201;
IL2CPP_EXTERN_C String_t* _stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A;
IL2CPP_EXTERN_C String_t* _stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral4FBD1DB26924C1F6A36CB8F2F4850DE51995B3F9;
IL2CPP_EXTERN_C String_t* _stringLiteral50384A583A192C06635CCD8BE23070E725470116;
IL2CPP_EXTERN_C String_t* _stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C;
IL2CPP_EXTERN_C String_t* _stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD;
IL2CPP_EXTERN_C String_t* _stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A;
IL2CPP_EXTERN_C String_t* _stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480;
IL2CPP_EXTERN_C String_t* _stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92;
IL2CPP_EXTERN_C String_t* _stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5;
IL2CPP_EXTERN_C String_t* _stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50;
IL2CPP_EXTERN_C String_t* _stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AFB5B2F4FF415E9A57A58EEFBA6C5E92E3529C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145;
IL2CPP_EXTERN_C String_t* _stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m58C335670AC2A0F8330AF901C8A0C9981971A685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1D2AF40B69ACF82943C614BB12EE07C7FAF0393F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3252CBDBF92D3408E081F662845DE0B41E437C4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC4800DDEB2B34EB7E059CC1263FCFC0E65278884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0CA3C595095035722115DE6CA7F448F2E4B9EE19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5A49A6251995F0D50EE2D53D9BFC990EC9F2AB0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE19D1657AA32878CF901B95E4D43169AE38A570E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m21DF5CF653BF8AEA149C21D6FAFF055A967C6FC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m59C07F6643E8DEBA6C9A301C0AE84791A7888A70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDB2D45DD861B8E39D37B45FED51B5A2C6EC667A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m42DA01E2CDA9AE33FE52C36A7F4E5A77BD511E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDADD4AF2D09DB970C2DA40007E966A4C0C19521D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mD9F0F6BC91CA464914467DE2F22466FAF7D61711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_mF0005360FD07073793D18180159FCAAAFE21C539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_OnAppDisposed_m47C09B6E45483FFE71C9D0933E1F2B4829504359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_GetResult_mB737568CE9D114E1F8464CE0F46AD7A3B0E273B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m7905C61D5D9AE818AA4AC3F0F838FA01B5E4D852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3F18A53533DF61CC0DC043AEC2AEB91ECB7EDD00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_OnCompletion_m7B5EEB5EB2E01FF2DF8F69C3523DBCFC7179E319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_ThrowIfDisposed_mD724684DB59E023BCDA95A70A67FF931536F16B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnCancelledHandler_m6027BABC8ED7A3782F0660E4D4BC1ACDBBFC19FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildChangeHandler_m111693C2C3696B07FE2D29391D27DEF39BCF5BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildRemovedHandler_mC4C07D126798B369EF865A3E0E6CCE30900C032F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_Child_m0C3CD54CDE33C62A364C33257CCBCDD1B4C124EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_HasChild_m3E2C6C83F8BDDE16D473719E25B9F2CAF88FE0DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_key_string_mA08D3ACDC44D92546C101D520B4204945D3C218E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_value_mFD409F71BE0E82EE0B1E7811A7C709CF5E198133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_is_valid_mB4B11E42888407DCEAF91D4039CFDEDDD0BFFA0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_url_m75413615D60C2ED0D1EED5593DA41A98C7C02E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetInstanceInternal_m6AFC797A4CCA2B52D59ED691B83855359FAC772F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetReference_m00248F0144085605261A71E86DF3B536048239F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetReference_m1AF54569B091F82DE0C5342DB271E691784A4F6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_ReleaseReferenceInternal_m30CED62A62A60A82A8A6F9860843253067924623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyChildListener_m574B9F1F70D80C9104E164EE160233BBA6F3F958_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyValueListener_m274A8010A85AD724836E9F5FE18AB1B8BDCF95C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_GetValueAsync_m611875BC39C804373A70F5E501C80A5C7394DD48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterChildListenerCallbacks_m342FC1A852F73C6495982A6E25105C7D476179C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterValueListenerCallbacks_mB06CDAA0D4A24EA071875E618C12ABAA1B21201B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_is_valid_m77F5C421E26AA0EB8CC6EB64293A7DFA0EF168DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnCancelledHandler_mB24789B71507858E38EB48965B0D9FBD031959F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnValueChangedHandler_mA40B20FA26915907919D53C45D5BF5395ACE2BDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query_CheckTaskStatus_TisDataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_m0BD48C74FC4E2777FFE0F76E1A04664DFB242143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query__ctor_m552F3EFCA95A9C93A383A34876A17C3591230A36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m0F996413862002E3DD7FDD548EA24FBA1FF5AB09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m814FE6192698629E0DFBB16FEA3E3173833B47B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mEDFDDC2387E881554214C5B8DE33BF35215B7042_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA88C63402F8142B4B866BC0DD46EE47853411DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_mFF75740AD491554899C097E0DADC53F7BD9B648B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mECC442D4BA10495F1BD419C6AD29532037348E84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m37109E9C6FE3E8E0A6670C71B07FD3AA6BB87294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0A7C01CC0882A4E72DF371C5072D20C368744F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m3173701684EF764B16D4DAE820BD88C8A5311AC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3C325A55848E3FC203DA02C6B477FD51C8467CEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m2B27B45C6AF0D649049D2B61E4489E3A44CAA0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m1F571A4058F2A2AC6170CBBA6A3332460BE78EFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mD37F18C4EE97E0C708E7C336F8391E8F4C87B9CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_mA373DD8147413E53F25953713F3785AFCA8D4CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m1B4CB3A2C3DCEF73AF006FF16442D1EEFDDB6384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_mF936FEB70EF48BE9A856AD893D796F16CA38DD13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_mEC703BD3E8DF60DEBAD638DD1D617657FD1D7A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m40BDB5DEA558FEF78598FC3F4B0FCADB03B2F174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m74C29E72B54DDDEE9833B780A78F1D4201BB2103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m3751A7ECA2C4F3CB06550D41F2C80B426E860C26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mF499A152BCAEA9DE368EDF914174B9BD5FBAD4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m036CE247B543C1C3E90DE1A2369F8FA8A1D46192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m2764F9E5D6DC04C4D667CA027C319F5E17CAC143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mC31F6F48C8E15755E811AFAB79C859ECCB787D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m238D408D4BE81829E0E4D5C073565EF0B62DA816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mFC6340F68B8E4E596967CB4A864D6C925D5F5655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mDE1B11AAEBA15DBB45A24DCB6D80A3F36CB51D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mC2B193143B43BA821FF81A8AFDEAE4C94148690E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_m8D036E948FE5F0D8033360D715E7E2F3282DC29E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mAE7AAAFE60ACB5EB41753A9D7FD24987399C11FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mDB964A1EF1CA2AA7BA57124523322644BD33CFB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_U3CU3Em__0_m22FFF028B3E9BB0B1DDCBD737A2EFEA9578B5DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE99BE1160B69FA574DABCC3B746235310995F04A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6FB8446E6A2A8D6E952F3157C3A8231C53D2C9EC* ___entries_1;
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
	KeyCollection_t84AA1F1B52EFFF1EF375587F234C18CE2DD07628 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBEA221820CB204DE404E8E0EC3D2485AA8C1334B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___entries_1)); }
	inline EntryU5BU5D_t6FB8446E6A2A8D6E952F3157C3A8231C53D2C9EC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6FB8446E6A2A8D6E952F3157C3A8231C53D2C9EC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6FB8446E6A2A8D6E952F3157C3A8231C53D2C9EC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___keys_7)); }
	inline KeyCollection_t84AA1F1B52EFFF1EF375587F234C18CE2DD07628 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t84AA1F1B52EFFF1EF375587F234C18CE2DD07628 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t84AA1F1B52EFFF1EF375587F234C18CE2DD07628 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ___values_8)); }
	inline ValueCollection_tBEA221820CB204DE404E8E0EC3D2485AA8C1334B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBEA221820CB204DE404E8E0EC3D2485AA8C1334B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBEA221820CB204DE404E8E0EC3D2485AA8C1334B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* ___entries_1;
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
	KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___entries_1)); }
	inline EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___keys_7)); }
	inline KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___values_8)); }
	inline ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8F7D64088845416B9D70EF89EFCA73CF7972BC35* ___entries_1;
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
	KeyCollection_t8840529BDE55CE192C4363210E4F099FB337B2DA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9920295899C04624513998B1605017BDABA72056 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___entries_1)); }
	inline EntryU5BU5D_t8F7D64088845416B9D70EF89EFCA73CF7972BC35* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8F7D64088845416B9D70EF89EFCA73CF7972BC35** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8F7D64088845416B9D70EF89EFCA73CF7972BC35* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___keys_7)); }
	inline KeyCollection_t8840529BDE55CE192C4363210E4F099FB337B2DA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8840529BDE55CE192C4363210E4F099FB337B2DA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8840529BDE55CE192C4363210E4F099FB337B2DA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ___values_8)); }
	inline ValueCollection_t9920295899C04624513998B1605017BDABA72056 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9920295899C04624513998B1605017BDABA72056 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9920295899C04624513998B1605017BDABA72056 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC8B84C3E81C717DCA697ADAEB9CA340295C77DA4* ___entries_1;
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
	KeyCollection_tBE56BE44F1E8BD1CE613005863364535F676632D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t133834B402F7BF43F587D3265F51AA6F4059CE28 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___entries_1)); }
	inline EntryU5BU5D_tC8B84C3E81C717DCA697ADAEB9CA340295C77DA4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC8B84C3E81C717DCA697ADAEB9CA340295C77DA4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC8B84C3E81C717DCA697ADAEB9CA340295C77DA4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___keys_7)); }
	inline KeyCollection_tBE56BE44F1E8BD1CE613005863364535F676632D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBE56BE44F1E8BD1CE613005863364535F676632D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBE56BE44F1E8BD1CE613005863364535F676632D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ___values_8)); }
	inline ValueCollection_t133834B402F7BF43F587D3265F51AA6F4059CE28 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t133834B402F7BF43F587D3265F51AA6F4059CE28 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t133834B402F7BF43F587D3265F51AA6F4059CE28 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* ___entries_1;
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
	KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___entries_1)); }
	inline EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___keys_7)); }
	inline KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___values_8)); }
	inline ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27, ___m_task_0)); }
	inline Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>
struct TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF, ___m_task_0)); }
	inline Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Firebase.Database.DataSnapshot
struct DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database_1;

public:
	inline static int32_t get_offset_of_internalSnapshot_0() { return static_cast<int32_t>(offsetof(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D, ___internalSnapshot_0)); }
	inline InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * get_internalSnapshot_0() const { return ___internalSnapshot_0; }
	inline InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A ** get_address_of_internalSnapshot_0() { return &___internalSnapshot_0; }
	inline void set_internalSnapshot_0(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * value)
	{
		___internalSnapshot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSnapshot_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D, ___database_1)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}
};


// Firebase.Database.DatabaseError
struct DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_2;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_3;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8, ___U3CCodeU3Ek__BackingField_2)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_2() const { return ___U3CCodeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_2() { return &___U3CCodeU3Ek__BackingField_2; }
	inline void set_U3CCodeU3Ek__BackingField_2(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8, ___U3CMessageU3Ek__BackingField_3)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_3() const { return ___U3CMessageU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_3() { return &___U3CMessageU3Ek__BackingField_3; }
	inline void set_U3CMessageU3Ek__BackingField_3(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetailsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8, ___U3CDetailsU3Ek__BackingField_4)); }
	inline String_t* get_U3CDetailsU3Ek__BackingField_4() const { return ___U3CDetailsU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CDetailsU3Ek__BackingField_4() { return &___U3CDetailsU3Ek__BackingField_4; }
	inline void set_U3CDetailsU3Ek__BackingField_4(String_t* value)
	{
		___U3CDetailsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetailsU3Ek__BackingField_4), (void*)value);
	}
};

struct DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	RuntimeObject* ___ErrorReasons_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Firebase.Database.DatabaseError::ErrorCodes
	RuntimeObject* ___ErrorCodes_1;

public:
	inline static int32_t get_offset_of_ErrorReasons_0() { return static_cast<int32_t>(offsetof(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields, ___ErrorReasons_0)); }
	inline RuntimeObject* get_ErrorReasons_0() const { return ___ErrorReasons_0; }
	inline RuntimeObject** get_address_of_ErrorReasons_0() { return &___ErrorReasons_0; }
	inline void set_ErrorReasons_0(RuntimeObject* value)
	{
		___ErrorReasons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorReasons_0), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorCodes_1() { return static_cast<int32_t>(offsetof(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields, ___ErrorCodes_1)); }
	inline RuntimeObject* get_ErrorCodes_1() const { return ___ErrorCodes_1; }
	inline RuntimeObject** get_address_of_ErrorCodes_1() { return &___ErrorCodes_1; }
	inline void set_ErrorCodes_1(RuntimeObject* value)
	{
		___ErrorCodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorCodes_1), (void*)value);
	}
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE
struct DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932  : public RuntimeObject
{
public:

public:
};

struct DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper Firebase.Database.Internal.DatabaseInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E * ___swigExceptionHelper_0;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper Firebase.Database.Internal.DatabaseInternalPINVOKE::swigStringHelper
	SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Platform.FirebaseAppPlatform::<app>k__BackingField
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___U3CappU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CappU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5, ___U3CappU3Ek__BackingField_0)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_U3CappU3Ek__BackingField_0() const { return ___U3CappU3Ek__BackingField_0; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_U3CappU3Ek__BackingField_0() { return &___U3CappU3Ek__BackingField_0; }
	inline void set_U3CappU3Ek__BackingField_0(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___U3CappU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappU3Ek__BackingField_0), (void*)value);
	}
};


// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___internalDatabase_0;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_1;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___U3CAppU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_internalDatabase_0() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___internalDatabase_0)); }
	inline InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * get_internalDatabase_0() const { return ___internalDatabase_0; }
	inline InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 ** get_address_of_internalDatabase_0() { return &___internalDatabase_0; }
	inline void set_internalDatabase_0(InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * value)
	{
		___internalDatabase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalDatabase_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470, ___U3CAppU3Ek__BackingField_2)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_U3CAppU3Ek__BackingField_2() const { return ___U3CAppU3Ek__BackingField_2; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_U3CAppU3Ek__BackingField_2() { return &___U3CAppU3Ek__BackingField_2; }
	inline void set_U3CAppU3Ek__BackingField_2(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___U3CAppU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppU3Ek__BackingField_2), (void*)value);
	}
};

struct FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * ___databases_3;

public:
	inline static int32_t get_offset_of_databases_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields, ___databases_3)); }
	inline Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * get_databases_3() const { return ___databases_3; }
	inline Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 ** get_address_of_databases_3() { return &___databases_3; }
	inline void set_databases_3(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * value)
	{
		___databases_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databases_3), (void*)value);
	}
};


// Firebase.Database.Internal.InternalListener
struct InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uid
	int32_t ___uid_2;

public:
	inline static int32_t get_offset_of_uid_2() { return static_cast<int32_t>(offsetof(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48, ___uid_2)); }
	inline int32_t get_uid_2() const { return ___uid_2; }
	inline int32_t* get_address_of_uid_2() { return &___uid_2; }
	inline void set_uid_2(int32_t value)
	{
		___uid_2 = value;
	}
};

struct InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uidGenerator
	int32_t ___uidGenerator_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener> Firebase.Database.Internal.InternalListener::databaseCallbacks
	Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * ___databaseCallbacks_1;

public:
	inline static int32_t get_offset_of_uidGenerator_0() { return static_cast<int32_t>(offsetof(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields, ___uidGenerator_0)); }
	inline int32_t get_uidGenerator_0() const { return ___uidGenerator_0; }
	inline int32_t* get_address_of_uidGenerator_0() { return &___uidGenerator_0; }
	inline void set_uidGenerator_0(int32_t value)
	{
		___uidGenerator_0 = value;
	}

	inline static int32_t get_offset_of_databaseCallbacks_1() { return static_cast<int32_t>(offsetof(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields, ___databaseCallbacks_1)); }
	inline Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * get_databaseCallbacks_1() const { return ___databaseCallbacks_1; }
	inline Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 ** get_address_of_databaseCallbacks_1() { return &___databaseCallbacks_1; }
	inline void set_databaseCallbacks_1(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * value)
	{
		___databaseCallbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databaseCallbacks_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Firebase.Database.Query
struct Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * ___childListener_3;

public:
	inline static int32_t get_offset_of_internalQuery_0() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___internalQuery_0)); }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * get_internalQuery_0() const { return ___internalQuery_0; }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 ** get_address_of_internalQuery_0() { return &___internalQuery_0; }
	inline void set_internalQuery_0(InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * value)
	{
		___internalQuery_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___database_1)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueListener_2() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___valueListener_2)); }
	inline InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * get_valueListener_2() const { return ___valueListener_2; }
	inline InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 ** get_address_of_valueListener_2() { return &___valueListener_2; }
	inline void set_valueListener_2(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * value)
	{
		___valueListener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueListener_2), (void*)value);
	}

	inline static int32_t get_offset_of_childListener_3() { return static_cast<int32_t>(offsetof(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C, ___childListener_3)); }
	inline InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * get_childListener_3() const { return ___childListener_3; }
	inline InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D ** get_address_of_childListener_3() { return &___childListener_3; }
	inline void set_childListener_3(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * value)
	{
		___childListener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childListener_3), (void*)value);
	}
};


// Firebase.Platform.Services
struct Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861  : public RuntimeObject
{
public:

public:
};

struct Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields
{
public:
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_1;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAppConfigU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CAppConfigU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CAppConfigU3Ek__BackingField_0() const { return ___U3CAppConfigU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CAppConfigU3Ek__BackingField_0() { return &___U3CAppConfigU3Ek__BackingField_0; }
	inline void set_U3CAppConfigU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CAppConfigU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppConfigU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CClockU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClockU3Ek__BackingField_1() const { return ___U3CClockU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClockU3Ek__BackingField_1() { return &___U3CClockU3Ek__BackingField_1; }
	inline void set_U3CClockU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClockU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClockU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CLoggingU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CLoggingU3Ek__BackingField_2() const { return ___U3CLoggingU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CLoggingU3Ek__BackingField_2() { return &___U3CLoggingU3Ek__BackingField_2; }
	inline void set_U3CLoggingU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CLoggingU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggingU3Ek__BackingField_2), (void*)value);
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

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___applicationDelegate_0;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___arithmeticDelegate_1;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___divideByZeroDelegate_2;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___indexOutOfRangeDelegate_3;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___invalidCastDelegate_4;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___invalidOperationDelegate_5;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___ioDelegate_6;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___nullReferenceDelegate_7;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___outOfMemoryDelegate_8;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___overflowDelegate_9;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___systemDelegate_10;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentDelegate_11;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentNullDelegate_12;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_StaticFields
{
public:
	// System.Int32 Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_ThreadStaticFields
{
public:
	// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.Future_InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::fu
	Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A, ___fu_0)); }
	inline Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * get_fu_0() const { return ___fu_0; }
	inline Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A, ___tcs_1)); }
	inline TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0
struct U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot> Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * ___tcs_0;
	// Firebase.Database.Query Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::$this
	Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * ___U24this_1;

public:
	inline static int32_t get_offset_of_tcs_0() { return static_cast<int32_t>(offsetof(U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF, ___tcs_0)); }
	inline TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * get_tcs_0() const { return ___tcs_0; }
	inline TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 ** get_address_of_tcs_0() { return &___tcs_0; }
	inline void set_tcs_0(TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * value)
	{
		___tcs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF, ___U24this_1)); }
	inline Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * get_U24this_1() const { return ___U24this_1; }
	inline Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
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


// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___U3CDatabaseErrorU3Ek__BackingField_2;
	// System.String Firebase.Database.ChildChangedEventArgs::<PreviousChildName>k__BackingField
	String_t* ___U3CPreviousChildNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousChildNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA, ___U3CPreviousChildNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CPreviousChildNameU3Ek__BackingField_3() const { return ___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPreviousChildNameU3Ek__BackingField_3() { return &___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline void set_U3CPreviousChildNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CPreviousChildNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousChildNameU3Ek__BackingField_3), (void*)value);
	}
};


// Firebase.Database.DatabaseReference
struct DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C  : public Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C
{
public:
	// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___U3CDatabaseU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_internalReference_4() { return static_cast<int32_t>(offsetof(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C, ___internalReference_4)); }
	inline InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * get_internalReference_4() const { return ___internalReference_4; }
	inline InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 ** get_address_of_internalReference_4() { return &___internalReference_4; }
	inline void set_internalReference_4(InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * value)
	{
		___internalReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C, ___U3CDatabaseU3Ek__BackingField_5)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_U3CDatabaseU3Ek__BackingField_5() const { return ___U3CDatabaseU3Ek__BackingField_5; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_U3CDatabaseU3Ek__BackingField_5() { return &___U3CDatabaseU3Ek__BackingField_5; }
	inline void set_U3CDatabaseU3Ek__BackingField_5(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___U3CDatabaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseU3Ek__BackingField_5), (void*)value);
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


// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___U3CDatabaseErrorU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseErrorU3Ek__BackingField_2), (void*)value);
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Database.Internal.ChildChangeType
struct ChildChangeType_t2832ACD2CF41270724FACC1679BB51380EEB08F3 
{
public:
	// System.Int32 Firebase.Database.Internal.ChildChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChildChangeType_t2832ACD2CF41270724FACC1679BB51380EEB08F3, ___value___2)); }
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

// Firebase.Database.Internal.Error
struct Error_t583B10CDBD5439637E1CF97DADFC462BF527D753 
{
public:
	// System.Int32 Firebase.Database.Internal.Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Error_t583B10CDBD5439637E1CF97DADFC462BF527D753, ___value___2)); }
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

// Firebase.FutureStatus
struct FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// Firebase.InitResult
struct InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D  : public InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48
{
public:
	// System.Object Firebase.Database.Internal.InternalChildListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Internal.InternalChildListener::internalQuery
	InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalChildListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalChildListener::database
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database_6;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::cancelledImpl
	EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * ___cancelledImpl_7;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childAddedImpl
	EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * ___childAddedImpl_8;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childChangedImpl
	EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * ___childChangedImpl_9;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childMovedImpl
	EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * ___childMovedImpl_10;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childRemovedImpl
	EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * ___childRemovedImpl_11;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventLock_3), (void*)value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___internalQuery_4)); }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_4), (void*)value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___database_6)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_cancelledImpl_7() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___cancelledImpl_7)); }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * get_cancelledImpl_7() const { return ___cancelledImpl_7; }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 ** get_address_of_cancelledImpl_7() { return &___cancelledImpl_7; }
	inline void set_cancelledImpl_7(EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * value)
	{
		___cancelledImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancelledImpl_7), (void*)value);
	}

	inline static int32_t get_offset_of_childAddedImpl_8() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___childAddedImpl_8)); }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * get_childAddedImpl_8() const { return ___childAddedImpl_8; }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 ** get_address_of_childAddedImpl_8() { return &___childAddedImpl_8; }
	inline void set_childAddedImpl_8(EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * value)
	{
		___childAddedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childAddedImpl_8), (void*)value);
	}

	inline static int32_t get_offset_of_childChangedImpl_9() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___childChangedImpl_9)); }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * get_childChangedImpl_9() const { return ___childChangedImpl_9; }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 ** get_address_of_childChangedImpl_9() { return &___childChangedImpl_9; }
	inline void set_childChangedImpl_9(EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * value)
	{
		___childChangedImpl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childChangedImpl_9), (void*)value);
	}

	inline static int32_t get_offset_of_childMovedImpl_10() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___childMovedImpl_10)); }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * get_childMovedImpl_10() const { return ___childMovedImpl_10; }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 ** get_address_of_childMovedImpl_10() { return &___childMovedImpl_10; }
	inline void set_childMovedImpl_10(EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * value)
	{
		___childMovedImpl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childMovedImpl_10), (void*)value);
	}

	inline static int32_t get_offset_of_childRemovedImpl_11() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D, ___childRemovedImpl_11)); }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * get_childRemovedImpl_11() const { return ___childRemovedImpl_11; }
	inline EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 ** get_address_of_childRemovedImpl_11() { return &___childRemovedImpl_11; }
	inline void set_childRemovedImpl_11(EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * value)
	{
		___childRemovedImpl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childRemovedImpl_11), (void*)value);
	}
};

struct InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields
{
public:
	// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache0
	OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___U3CU3Ef__mgU24cache0_12;
	// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache1
	OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * ___U3CU3Ef__mgU24cache1_13;
	// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache2
	OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * ___U3CU3Ef__mgU24cache2_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_12() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields, ___U3CU3Ef__mgU24cache0_12)); }
	inline OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * get_U3CU3Ef__mgU24cache0_12() const { return ___U3CU3Ef__mgU24cache0_12; }
	inline OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 ** get_address_of_U3CU3Ef__mgU24cache0_12() { return &___U3CU3Ef__mgU24cache0_12; }
	inline void set_U3CU3Ef__mgU24cache0_12(OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * value)
	{
		___U3CU3Ef__mgU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_13() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields, ___U3CU3Ef__mgU24cache1_13)); }
	inline OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * get_U3CU3Ef__mgU24cache1_13() const { return ___U3CU3Ef__mgU24cache1_13; }
	inline OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E ** get_address_of_U3CU3Ef__mgU24cache1_13() { return &___U3CU3Ef__mgU24cache1_13; }
	inline void set_U3CU3Ef__mgU24cache1_13(OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * value)
	{
		___U3CU3Ef__mgU24cache1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_14() { return static_cast<int32_t>(offsetof(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields, ___U3CU3Ef__mgU24cache2_14)); }
	inline OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * get_U3CU3Ef__mgU24cache2_14() const { return ___U3CU3Ef__mgU24cache2_14; }
	inline OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 ** get_address_of_U3CU3Ef__mgU24cache2_14() { return &___U3CU3Ef__mgU24cache2_14; }
	inline void set_U3CU3Ef__mgU24cache2_14(OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * value)
	{
		___U3CU3Ef__mgU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache2_14), (void*)value);
	}
};


// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312  : public InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48
{
public:
	// System.Object Firebase.Database.Internal.InternalValueListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Internal.InternalValueListener::internalQuery
	InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalValueListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalValueListener::database
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database_6;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.InternalValueListener::valueChangedImpl
	EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * ___valueChangedImpl_7;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventLock_3), (void*)value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312, ___internalQuery_4)); }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_4), (void*)value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312, ___database_6)); }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_valueChangedImpl_7() { return static_cast<int32_t>(offsetof(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312, ___valueChangedImpl_7)); }
	inline EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * get_valueChangedImpl_7() const { return ___valueChangedImpl_7; }
	inline EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 ** get_address_of_valueChangedImpl_7() { return &___valueChangedImpl_7; }
	inline void set_valueChangedImpl_7(EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * value)
	{
		___valueChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueChangedImpl_7), (void*)value);
	}
};

struct InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields
{
public:
	// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate Firebase.Database.Internal.InternalValueListener::<>f__mg$cache0
	OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___U3CU3Ef__mgU24cache0_8;
	// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate Firebase.Database.Internal.InternalValueListener::<>f__mg$cache1
	OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * ___U3CU3Ef__mgU24cache1_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_9() { return static_cast<int32_t>(offsetof(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields, ___U3CU3Ef__mgU24cache1_9)); }
	inline OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * get_U3CU3Ef__mgU24cache1_9() const { return ___U3CU3Ef__mgU24cache1_9; }
	inline OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 ** get_address_of_U3CU3Ef__mgU24cache1_9() { return &___U3CU3Ef__mgU24cache1_9; }
	inline void set_U3CU3Ef__mgU24cache1_9(OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * value)
	{
		___U3CU3Ef__mgU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_9), (void*)value);
	}
};


// Firebase.LogLevel
struct LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1
struct U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0
struct U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.VariantExtension/KeyOptions
struct KeyOptions_tC3DA83A90A6537206BDE298E41A5FA0752D50643 
{
public:
	// System.Int32 Firebase.VariantExtension/KeyOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyOptions_tC3DA83A90A6537206BDE298E41A5FA0752D50643, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087, ___m_result_40)); }
	inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * get_m_result_40() const { return ___m_result_40; }
	inline DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t24659E5AB2CA427FA53F1AAFB5668B0639ACBF05 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t5339F454F4EAD362D78114465F3864611F5EF39B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>
struct Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB, ___m_result_40)); }
	inline InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * get_m_result_40() const { return ___m_result_40; }
	inline InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tA73E498CF30C0ED5BE1E5709F77D6C31DBD0FABC * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2BB42BE7865F68814D217891C87A2C0A0F4A6D95 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tA73E498CF30C0ED5BE1E5709F77D6C31DBD0FABC * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tA73E498CF30C0ED5BE1E5709F77D6C31DBD0FABC ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tA73E498CF30C0ED5BE1E5709F77D6C31DBD0FABC * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t2BB42BE7865F68814D217891C87A2C0A0F4A6D95 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t2BB42BE7865F68814D217891C87A2C0A0F4A6D95 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t2BB42BE7865F68814D217891C87A2C0A0F4A6D95 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Firebase.Database.DatabaseException
struct DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140  : public Exception_t
{
public:

public:
};


// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_15;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_15)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_15() const { return ___appPlatform_15; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_15() { return &___appPlatform_15; }
	inline void set_appPlatform_15(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_15), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_14;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___U3CU3Ef__amU24cache0_16;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__am$cache1
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3Ef__amU24cache1_17;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__am$cache2
	Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * ___U3CU3Ef__amU24cache2_18;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache3
	Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * ___U3CU3Ef__amU24cache3_19;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache4
	Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * ___U3CU3Ef__amU24cache4_20;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_13)); }
	inline int32_t get_CheckDependenciesThread_13() const { return ___CheckDependenciesThread_13; }
	inline int32_t* get_address_of_CheckDependenciesThread_13() { return &___CheckDependenciesThread_13; }
	inline void set_CheckDependenciesThread_13(int32_t value)
	{
		___CheckDependenciesThread_13 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_14)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_14() const { return ___CheckDependenciesThreadLock_14; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_14() { return &___CheckDependenciesThreadLock_14; }
	inline void set_CheckDependenciesThreadLock_14(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_20), (void*)value);
	}
};


// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.Internal.InternalDataSnapshot
struct InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDataSnapshot::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.Internal.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalFirebaseDatabase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.Internal.InternalQuery
struct InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalQuery::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalQuery::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Firebase.Variant
struct Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2
struct U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Internal.Error Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_2), (void*)value);
	}
};


// Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0
struct U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::callbackId
	int32_t ___callbackId_1;
	// Firebase.Database.Internal.ChildChangeType Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::changeType
	int32_t ___changeType_2;
	// System.String Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::previousChildName
	String_t* ___previousChildName_3;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}

	inline static int32_t get_offset_of_changeType_2() { return static_cast<int32_t>(offsetof(U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9, ___changeType_2)); }
	inline int32_t get_changeType_2() const { return ___changeType_2; }
	inline int32_t* get_address_of_changeType_2() { return &___changeType_2; }
	inline void set_changeType_2(int32_t value)
	{
		___changeType_2 = value;
	}

	inline static int32_t get_offset_of_previousChildName_3() { return static_cast<int32_t>(offsetof(U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9, ___previousChildName_3)); }
	inline String_t* get_previousChildName_3() const { return ___previousChildName_3; }
	inline String_t** get_address_of_previousChildName_3() { return &___previousChildName_3; }
	inline void set_previousChildName_3(String_t* value)
	{
		___previousChildName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousChildName_3), (void*)value);
	}
};


// Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1
struct U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Internal.Error Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_2), (void*)value);
	}
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>
struct Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.Future_InternalDataSnapshot::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionCB
	SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action> Firebase.Database.Internal.Future_InternalDataSnapshot::Callbacks
	Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * ___Callbacks_3;
	// System.Int32 Firebase.Database.Internal.Future_InternalDataSnapshot::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Database.Internal.Future_InternalDataSnapshot::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Firebase.Database.Internal.InternalDatabaseReference
struct InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9  : public InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDatabaseReference::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Firebase.Database.Internal.Future_InternalDataSnapshot/Action
struct Action_t3C9E886ED952A5C1AC45907686BC24896CA35010  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_tB71F05EC8B3BBACF74EB566C58EEB8EA4A7135B5  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuationAction0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Query::CheckTaskStatus<System.Object>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Query_CheckTaskStatus_TisRuntimeObject_m2B988AFCC6557775F98CFA431250F60E0A47E458_gshared (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___tcs1, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA4DE9565B9657161571B217BAD3940297B6F110C_inline (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m8B1970EEE6D0F1E90AEF6BDA0ED94F0C38F33922_inline (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m2AFF0A9E85368545CB897E95C39247301254440A_inline (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_mF3A4D367B1075E0508A08D8C42230DF1E8AEAAB2 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * ___internalSnapshot0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_GetValue_m19EF009E5CD1AE6F6A9EBD6C5475682BEF7E950E (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, bool ___useExportFormat0, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_mA08D3ACDC44D92546C101D520B4204945D3C218E (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, const RuntimeMethod* method);
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * InternalDataSnapshot_Child_m0C3CD54CDE33C62A364C33257CCBCDD1B4C124EE (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::HasChild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshot_HasChild_m3E2C6C83F8BDDE16D473719E25B9F2CAF88FE0DA (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, String_t* ___path0, const RuntimeMethod* method);
// Firebase.Variant Firebase.Database.Internal.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * InternalDataSnapshot_value_mFD409F71BE0E82EE0B1E7811A7C709CF5E198133 (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, const RuntimeMethod* method);
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant,Firebase.VariantExtension/KeyOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VariantExtension_ToObject_m977B0559C06BBAC95FA4CDE4B9773A23FDA967C6 (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___variant0, int32_t ___options1, const RuntimeMethod* method);
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m5FE3B41597AB6C593B50F13F2EF059DAED8C3E74 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_mD2CC38B1B1053529402B7BCAB2129C80D63E9821 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *, const RuntimeMethod*))Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared)(__this, method);
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m17A129E452E44A91FB0CD1D1303C8CFF3F0793C2_inline (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Message_m54166FC06EE023916325942F18AD855E5548804F_inline (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m4C35CD0623CE87CA0D1941A7475320DF51BB25CA_inline (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Internal.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_mA2AFFC06A2E8A6C5A71394A01C3D759402C5D231 (int32_t ___error0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_m38B3479297DC749697FAEF989342AC0E34A39C31 (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_mB65407A635E3D7C51491173E3B6FA7262BC509AF_inline (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m0ADB82550973C1BB4A57B3132C00D087565746C3 (SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m5FCC61DE0A2198978283B58325176E9BE096021B (SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_m552F3EFCA95A9C93A383A34876A17C3591230A36 (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * __this, InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m282D95F9AD43BBE5C0730E1EA650BF37ADFADAA2_inline (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___value0, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m75413615D60C2ED0D1EED5593DA41A98C7C02E46 (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mAB8EC36294084545DDF7F18AFDB2DBA696D5E037_inline (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseDatabase_get_App_m93AA2C6AE670C913DED5B495355537612429DEBD_inline (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_m80A3AEFD4797B025F808225460CDE1AE5652BC12 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::Remove(!0)
inline bool Dictionary_2_Remove_m1D2AF40B69ACF82943C614BB12EE07C7FAF0393F (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m5067A29469F9322D223E0A094F11D696548E9E7F (DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 * __this, String_t* ___message0, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * FirebaseDatabase_GetInstance_m76521A08A8A8C5388359A14B8F880AE83CE73110 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mAE84F30BF7A0A0D522CC280712623B53961FB98D_inline (const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::get_AppPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * FirebaseApp_get_AppPlatform_m95A32F1D4ECE2C65F4691EE17E4BDF1A57FAED9D (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * FirebaseDatabase_GetInstance_mF0005360FD07073793D18180159FCAAAFE21C539 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0CA3C595095035722115DE6CA7F448F2E4B9EE19 (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * __this, String_t* ___key0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 *, String_t*, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.Internal.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * InternalFirebaseDatabase_GetInstanceInternal_m6AFC797A4CCA2B52D59ED691B83855359FAC772F (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m3DCF10547AE51EC2489E9D5721C2C2C8F4BB4312 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___internalDB1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m42DA01E2CDA9AE33FE52C36A7F4E5A77BD511E07 (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * __this, String_t* ___key0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 *, String_t*, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * InternalFirebaseDatabase_GetReference_m1AF54569B091F82DE0C5342DB271E691784A4F6C (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_mD496EC179B693747AF9272C2F2CFAB37AF2771B1 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * ___internalRef0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method);
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * InternalFirebaseDatabase_GetReference_m00248F0144085605261A71E86DF3B536048239F2 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::.ctor()
inline void Dictionary_2__ctor_m59C07F6643E8DEBA6C9A301C0AE84791A7888A70 (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m7905C61D5D9AE818AA4AC3F0F838FA01B5E4D852 (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast_m64BA929E9911EEC6F44B4F376FE790D36B275D2E (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetCompletionData_m1D3D08062F81C195B4298C7B980AA3EB166D5672 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_Future_InternalDataSnapshot_mCD15C4DF3700F6D147F3953AC09ABA42D643CC6A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mA788F542E33A4820FB5D5940955D9516D0C51D39 (U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::.ctor()
inline void TaskCompletionSource_1__ctor_m3751A7ECA2C4F3CB06550D41F2C80B426E860C26 (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_mEC703BD3E8DF60DEBAD638DD1D617657FD1D7A5F (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::get_Task()
inline Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * TaskCompletionSource_1_get_Task_m036CE247B543C1C3E90DE1A2369F8FA8A1D46192_inline (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * (*) (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mD4D4FE593498B18687FE8C1591C34F77F325A11A (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Internal.Future_InternalDataSnapshot/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetOnCompletionCallback_m388C32DC2FD7271395EC78E82CB4BDF60F08B570 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_ThrowIfDisposed_mD724684DB59E023BCDA95A70A67FF931536F16B3 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mE0AC37E93A8DA64EBA7614EFDF0EC8177BD1EE64 (SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::.ctor()
inline void Dictionary_2__ctor_mDB2D45DD861B8E39D37B45FED51B5A2C6EC667A7 (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDADD4AF2D09DB970C2DA40007E966A4C0C19521D (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * __this, int32_t ___key0, Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 *, int32_t, Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_m7B5EEB5EB2E01FF2DF8F69C3523DBCFC7179E319 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3F18A53533DF61CC0DC043AEC2AEB91ECB7EDD00 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5A49A6251995F0D50EE2D53D9BFC990EC9F2AB0F (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * __this, int32_t ___key0, Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 *, int32_t, Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m3252CBDBF92D3408E081F662845DE0B41E437C4D (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m1BF962C259EF45F747580BC1ACB7139C30D3D809 (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion_m9A84CA46732DEAEBEBF6F788A095A0DDFA310FF3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3201D5745B28C1D9BF8B25A5A8F94098E2F08778 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_GetResult_mBD295645420E54C1EFBC1D04AA7823171CF07DB8 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_mC8A7803BFA8D85177E7EFD11ABA7652B82842DAF (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m111693C2C3696B07FE2D29391D27DEF39BCF5BB5 (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_mC4C07D126798B369EF865A3E0E6CCE30900C032F (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m6027BABC8ED7A3782F0660E4D4BC1ACDBBFC19FF (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_mAC9F991B98CED300FF2BC7902FF1DB48253E641C (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m905FC42ABBD238AD00D4CA41B4FEA96EB9E16D23 (OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m3DA4B6DA14D6A7733B2D3BF6F5721F7E8A811E84 (OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m342FC1A852F73C6495982A6E25105C7D476179C2 (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___cancelledCallback0, OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * ___childChangeCallback1, OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * ___childRemovedCallback2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_m79710E8F1FD901F6E8C6AEA2B5041B4FB06C905E (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_mA71371CAFDD9DF4B40B34441D7186E9FAA3159EC (int32_t ___uid0, InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 ** ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_m3F0222C7469ACF362ACF082D5A7B3E95194D3FA6 (U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_m7E6AE23F4E493961862651CCCDD4F7D8BC58E493 (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_mFFE132800267C1A72DFBDC65B4F1F1E10FBEABE0 (U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_m574B9F1F70D80C9104E164EE160233BBA6F3F958 (intptr_t ___listener0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_mD65E290C301E8AD2554F55A6890835A72451A52F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_Child__SWIG_0_m63B22D97C465090993DB812C640B9FC7305B0112 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_mB03F74C67FE8CFC0291AC4D0CCCB4829153575CC (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m878DD5FF4C57B86B116F1922BAD9BE19CD302B78 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant__ctor_mDE4F4CD06BFEFA94C7B3757DAF5EB3F4E10DAD8E (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_HasChild__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_HasChild__SWIG_0_mD6EA27B750CFCF0C352F0D029F0D4010ABF0749D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_mF28EA341999CF2EA228D5E67B312AB5BBC04A7B9 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_m736CC3B9078648C1EF156BFA18FBA806C721D5F4 (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_mB8C23C8750171A9332CE19F1673D6B840030144A (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m6B1DE6D779DEBBCDAC3D6608AB78902731322961 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_m513030CE720E2CB96D768F3DE923DAB3BC557A46 (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m9CF27D5E250321F8FFA662FA21936CDC68F6D318 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_mEF41BCB9921F0B6BF032A47FFB5D9FADC3E14BD9 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m30CED62A62A60A82A8A6F9860843253067924623 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___instance0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_mC828792DE38FF094DF8EBFB3893970B750A116A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mAD8499D9D769CCD45207112000EE7AF91CFD202D (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1_m23724B9178254372FEE2AA5E3DE9D3421B55EFAD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal_mD59392C0A9FC28291377D8A56213F6A8237B9A2F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_m4254206AB58573A28C3FE1E3D1FE1C7D95E8BD93 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::getCPtr(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  InternalFirebaseDatabase_getCPtr_m0208AE9D9E511615C40AA4747AD67A0219F0B378 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal_mB07FA307D72E3FCE950686068836241C55C58D6C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mE19D1657AA32878CF901B95E4D43169AE38A570E (Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * __this, int32_t ___key0, InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 *, int32_t, InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m2064F1B8862AF3AB856E8F8477DAAD68B7642FCE (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::Remove(!0)
inline bool Dictionary_2_Remove_mC4800DDEB2B34EB7E059CC1263FCFC0E65278884 (Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::.ctor()
inline void Dictionary_2__ctor_m21DF5CF653BF8AEA149C21D6FAFF055A967C6FC3 (Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m4730478C2C75CF942C7063B23B14F4EDA8DA7066 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_GetValue_mAF4A5B79FC653747C6CFED886056551259EBDD0C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__ctor_mBD0542E2976FE5CE03F92C53F981AD18511E0B11 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot::GetTask(Firebase.Database.Internal.Future_InternalDataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * Future_InternalDataSnapshot_GetTask_mA849249BF0D4F49613ED11751B8B7E0281E4C380 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * ___fu0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_mDDAEBCC7568D01D1D1AD9ACE99F511305B1E30FF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_mA9E498943E0A447DDB704E8D67635CA255E47128 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_m760407797521E23161F015FD63BCA9EF5B0C4159 (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___jarg10, OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_m93E5BE35CA129D4069021DA2198646CA7BC037A9 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_m8DEE61FBE9F68036DE929FBB50220533D84973D3 (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___jarg10, OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * ___jarg21, OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_mA40B20FA26915907919D53C45D5BF5395ACE2BDA (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_mB24789B71507858E38EB48965B0D9FBD031959F7 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m1E5CB914A443BBEA65327C6909B8F35834782602 (OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_mB06CDAA0D4A24EA071875E618C12ABAA1B21201B (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___cancelledCallback0, OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * ___valueChangedCallback1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_mE348CB520803C141F981FF68AD8109BB8CD9155A (U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_m16DA70EA0E84751261B659883535CD3CDC442FBF (U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m274A8010A85AD724836E9F5FE18AB1B8BDCF95C0 (intptr_t ___listener0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_m33BF6880327D5F9AFA1A432DE72323D38730FAC7 (InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * __this, InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_m694203006FE0205106688331909EB8E290733831 (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * __this, InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0__ctor_m5BA902CFC5CFE89B09B422D5F4A967CBA50CDE05 (U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::.ctor()
inline void TaskCompletionSource_1__ctor_mF499A152BCAEA9DE368EDF914174B9BD5FBAD4D3 (TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m58C335670AC2A0F8330AF901C8A0C9981971A685 (Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mC31F6F48C8E15755E811AFAB79C859ECCB787D0F (Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * __this, Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB *, Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6 *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::get_Task()
inline Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * TaskCompletionSource_1_get_Task_m2764F9E5D6DC04C4D667CA027C319F5E17CAC143_inline (TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * (*) (TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.InternalQuery::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * InternalQuery_GetValueAsync_m611875BC39C804373A70F5E501C80A5C7394DD48 (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalDataSnapshotTask(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * Query_WrapInternalDataSnapshotTask_mD66B30C95FF21216495D9F24C95C388DDE50DD83 (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * __this, Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * ___it0, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mA7EF06296508E6B5632A967C65E17F632E445A71_inline (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mF56E13C79AC85F6415ECABC7E63B0C86EB864D40_inline (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m0F996413862002E3DD7FDD548EA24FBA1FF5AB09 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mFF75740AD491554899C097E0DADC53F7BD9B648B (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mECC442D4BA10495F1BD419C6AD29532037348E84 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0A7C01CC0882A4E72DF371C5072D20C368744F41 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m3173701684EF764B16D4DAE820BD88C8A5311AC8 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3C325A55848E3FC203DA02C6B477FD51C8467CEB (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m37109E9C6FE3E8E0A6670C71B07FD3AA6BB87294 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m2B27B45C6AF0D649049D2B61E4489E3A44CAA0A5 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m1F571A4058F2A2AC6170CBBA6A3332460BE78EFE (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mD37F18C4EE97E0C708E7C336F8391E8F4C87B9CD (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mA373DD8147413E53F25953713F3785AFCA8D4CE3 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m814FE6192698629E0DFBB16FEA3E3173833B47B3 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mEDFDDC2387E881554214C5B8DE33BF35215B7042 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA88C63402F8142B4B866BC0DD46EE47853411DC2 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953 (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m2218A5FD8E97C779CB0C978A08CBD7C38679900F (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_mDD5933C26B5EE8A65766383EEA892836BCE887E4 (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___applicationDelegate0, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___arithmeticDelegate1, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___divideByZeroDelegate2, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___indexOutOfRangeDelegate3, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___invalidCastDelegate4, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___invalidOperationDelegate5, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___ioDelegate6, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___nullReferenceDelegate7, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___outOfMemoryDelegate8, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___overflowDelegate9, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m9B3FBB6656A7EF3E9ED980A8955232D994B26696 (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentDelegate0, ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentNullDelegate1, ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918 (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14 (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m1B4CB3A2C3DCEF73AF006FF16442D1EEFDDB6384 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m04F81FC6C90DC3A07C7BC11BC63C5D8D859FE6FE (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m7D80EA63ED56EBDB86B4DD48B717AFC0C1D45038 (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * ___stringDelegate0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_mF936FEB70EF48BE9A856AD893D796F16CA38DD13 (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * Future_InternalDataSnapshot_GetResult_mB737568CE9D114E1F8464CE0F46AD7A3B0E273B3 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m40BDB5DEA558FEF78598FC3F4B0FCADB03B2F174 (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * __this, InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF *, InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_m41E36427FAA5985CB8FF0F6BEADB1A1146E85A18 (int32_t ___callbackId0, InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D ** ___childListener1, const RuntimeMethod* method);
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * DatabaseError_FromError_m74CA7DACBF40FE664D4B088E9B8A615D61DC769B (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mD42C6C55669872BB1FE653538F28E73C3F9AA9BD (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___error0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424 (EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * __this, RuntimeObject * ___sender0, ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 *, RuntimeObject *, ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * DataSnapshot_CreateSnapshot_m95E10FC734582079840902AA6B7734600FFD88E2 (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * ___internalSnapshot0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mEFA05E8BE4CF521CCD301438B1D0D2AAAD4646F8 (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m8D191EB665078398BE6D37D59B164BD3AF166F7E (int32_t ___callbackId0, InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 ** ___valueListener1, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m4FDC6BB1BC5E618849D97A391F097F726CE997E4 (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___error0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mD9F0F6BC91CA464914467DE2F22466FAF7D61711 (EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * __this, RuntimeObject * ___sender0, ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 *, RuntimeObject *, ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m379BA084F6E53F5B2DD49386D43DF6AF94CACF81 (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___snapshot0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Query::CheckTaskStatus<Firebase.Database.DataSnapshot>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
inline bool Query_CheckTaskStatus_TisDataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_m0BD48C74FC4E2777FFE0F76E1A04664DFB242143 (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * ___tcs1, const RuntimeMethod* method)
{
	return ((  bool (*) (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 *, const RuntimeMethod*))Query_CheckTaskStatus_TisRuntimeObject_m2B988AFCC6557775F98CFA431250F60E0A47E458_gshared)(__this, ___task0, ___tcs1, method);
}
// !0 System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>::get_Result()
inline InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * Task_1_get_Result_m238D408D4BE81829E0E4D5C073565EF0B62DA816 (Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * __this, const RuntimeMethod* method)
{
	return ((  InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * (*) (Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m74C29E72B54DDDEE9833B780A78F1D4201BB2103 (TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 *, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData(void*, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_Future_InternalDataSnapshot_GetResult(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_delete_Future_InternalDataSnapshot(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1(void*, char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal(void*, char*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_delete_InternalDataSnapshot(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalDataSnapshot_Child__SWIG_0(void*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_InternalDataSnapshot_key_string(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalDataSnapshot_value(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_InternalDataSnapshot_HasChild__SWIG_0(void*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_delete_InternalQuery(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalQuery_GetValue(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_InternalQuery_is_valid(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalQuery_DestroyValueListener(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalQuery_DestroyChildListener(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_delete_InternalDatabaseReference(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_is_valid(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_InternalDatabaseReference_url(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_SWIGUpcast(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_DatabaseInternal(Il2CppMethodPointer);
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
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mEFA05E8BE4CF521CCD301438B1D0D2AAAD4646F8 (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___previousChildName1;
		ChildChangedEventArgs_set_PreviousChildName_mA4DE9565B9657161571B217BAD3940297B6F110C_inline(__this, L_0, /*hidden argument*/NULL);
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_1 = ___snapshot0;
		ChildChangedEventArgs_set_Snapshot_m8B1970EEE6D0F1E90AEF6BDA0ED94F0C38F33922_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mD42C6C55669872BB1FE653538F28E73C3F9AA9BD (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_0 = ___error0;
		ChildChangedEventArgs_set_DatabaseError_m2AFF0A9E85368545CB897E95C39247301254440A_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m8B1970EEE6D0F1E90AEF6BDA0ED94F0C38F33922 (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m2AFF0A9E85368545CB897E95C39247301254440A (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA4DE9565B9657161571B217BAD3940297B6F110C (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
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
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_mF3A4D367B1075E0508A08D8C42230DF1E8AEAAB2 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * ___internalSnapshot0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_0 = ___internalSnapshot0;
		__this->set_internalSnapshot_0(L_0);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_1 = ___database1;
		__this->set_database_1(L_1);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * DataSnapshot_CreateSnapshot_m95E10FC734582079840902AA6B7734600FFD88E2 (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * ___internalSnapshot0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_0 = ___internalSnapshot0;
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_1 = ___database1;
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_2 = (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D *)il2cpp_codegen_object_new(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_mF3A4D367B1075E0508A08D8C42230DF1E8AEAAB2(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_mD2CC38B1B1053529402B7BCAB2129C80D63E9821 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0;
		L_0 = DataSnapshot_GetValue_m19EF009E5CD1AE6F6A9EBD6C5475682BEF7E950E(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m5FE3B41597AB6C593B50F13F2EF059DAED8C3E74 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InternalDataSnapshot_key_string_mA08D3ACDC44D92546C101D520B4204945D3C218E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * DataSnapshot_Child_m51E603CB4C964BF967BAEA9E7332FEA365C51F5A (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_0 = __this->get_internalSnapshot_0();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_2;
		L_2 = InternalDataSnapshot_Child_m0C3CD54CDE33C62A364C33257CCBCDD1B4C124EE(L_0, L_1, /*hidden argument*/NULL);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_3 = __this->get_database_1();
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_4 = (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D *)il2cpp_codegen_object_new(DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_mF3A4D367B1075E0508A08D8C42230DF1E8AEAAB2(L_4, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Firebase.Database.DataSnapshot::HasChild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSnapshot_HasChild_mF2A4B994AF7BC21A09CD3AAC37788C7F036D7703 (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, String_t* ___path0, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_0 = __this->get_internalSnapshot_0();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InternalDataSnapshot_HasChild_m3E2C6C83F8BDDE16D473719E25B9F2CAF88FE0DA(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_GetValue_m19EF009E5CD1AE6F6A9EBD6C5475682BEF7E950E (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, bool ___useExportFormat0, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_1;
		L_1 = InternalDataSnapshot_value_mFD409F71BE0E82EE0B1E7811A7C709CF5E198133(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2;
		L_2 = VariantExtension_ToObject_m977B0559C06BBAC95FA4CDE4B9773A23FDA967C6(L_1, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Firebase.Database.DataSnapshot::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_ToString_m900D014709B804D80A3550913A3DB12B18B5630A (DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = DataSnapshot_get_Key_m5FE3B41597AB6C593B50F13F2EF059DAED8C3E74(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		RuntimeObject * L_6;
		L_6 = DataSnapshot_get_Value_mD2CC38B1B1053529402B7BCAB2129C80D63E9821(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		String_t* L_8;
		L_8 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Firebase.Database.DatabaseError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__cctor_mFEFA69C2061DBC1CF702174AC717155254531906 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_0 = (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB *)il2cpp_codegen_object_new(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E(L_0, /*hidden argument*/Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var);
		((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->set_ErrorReasons_0(L_0);
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_1 = (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *)il2cpp_codegen_object_new(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912(L_1, /*hidden argument*/Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var);
		((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->set_ErrorCodes_1(L_1);
		RuntimeObject* L_2 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_2, (-1), _stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9);
		RuntimeObject* L_3 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_3, ((int32_t)-2), _stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3);
		RuntimeObject* L_4 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_4, ((int32_t)-3), _stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2);
		RuntimeObject* L_5 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_5, ((int32_t)-4), _stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145);
		RuntimeObject* L_6 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_6);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_6, ((int32_t)-6), _stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C);
		RuntimeObject* L_7 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_7, ((int32_t)-7), _stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5);
		RuntimeObject* L_8 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_8);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_8, ((int32_t)-8), _stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C);
		RuntimeObject* L_9 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_9, ((int32_t)-9), _stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D);
		RuntimeObject* L_10 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_10, ((int32_t)-10), _stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480);
		RuntimeObject* L_11 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_11, ((int32_t)-11), _stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD);
		RuntimeObject* L_12 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_12, ((int32_t)-24), _stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4);
		RuntimeObject* L_13 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_13, ((int32_t)-25), _stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B);
		RuntimeObject* L_14 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_14, ((int32_t)-999), _stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C);
		RuntimeObject* L_15 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_15, _stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C, (-1));
		RuntimeObject* L_16 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_16, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, ((int32_t)-2));
		RuntimeObject* L_17 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_17, _stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A, ((int32_t)-3));
		RuntimeObject* L_18 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_18, _stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C, ((int32_t)-4));
		RuntimeObject* L_19 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_19, _stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983, ((int32_t)-6));
		RuntimeObject* L_20 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_20, _stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5, ((int32_t)-7));
		RuntimeObject* L_21 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_21, _stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50, ((int32_t)-8));
		RuntimeObject* L_22 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_22, _stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A, ((int32_t)-9));
		RuntimeObject* L_23 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_23, _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102, ((int32_t)-10));
		RuntimeObject* L_24 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_24, _stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92, ((int32_t)-24));
		RuntimeObject* L_25 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_25, _stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3, ((int32_t)-25));
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_m38B3479297DC749697FAEF989342AC0E34A39C31 (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * G_B2_0 = NULL;
	DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * G_B3_1 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___code0;
		DatabaseError_set_Code_m17A129E452E44A91FB0CD1D1303C8CFF3F0793C2_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		DatabaseError_set_Message_m54166FC06EE023916325942F18AD855E5548804F_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___details2;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0025:
	{
		String_t* L_4 = ___details2;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		NullCheck(G_B3_1);
		DatabaseError_set_Details_m4C35CD0623CE87CA0D1941A7475320DF51BB25CA_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m17A129E452E44A91FB0CD1D1303C8CFF3F0793C2 (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_mB65407A635E3D7C51491173E3B6FA7262BC509AF (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Message_m54166FC06EE023916325942F18AD855E5548804F (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m4C35CD0623CE87CA0D1941A7475320DF51BB25CA (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Internal.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_mA2AFFC06A2E8A6C5A71394A01C3D759402C5D231 (int32_t ___error0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_0054;
			}
			case 6:
			{
				goto IL_0057;
			}
			case 7:
			{
				goto IL_005a;
			}
			case 8:
			{
				goto IL_005d;
			}
			case 9:
			{
				goto IL_0060;
			}
			case 10:
			{
				goto IL_0066;
			}
			case 11:
			{
				goto IL_0069;
			}
			case 12:
			{
				goto IL_0069;
			}
			case 13:
			{
				goto IL_0069;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_0045:
	{
		return ((int32_t)-4);
	}

IL_0048:
	{
		return ((int32_t)-6);
	}

IL_004b:
	{
		return ((int32_t)-7);
	}

IL_004e:
	{
		return ((int32_t)-8);
	}

IL_0051:
	{
		return ((int32_t)-24);
	}

IL_0054:
	{
		return ((int32_t)-2);
	}

IL_0057:
	{
		return ((int32_t)-9);
	}

IL_005a:
	{
		return ((int32_t)-3);
	}

IL_005d:
	{
		return ((int32_t)-10);
	}

IL_0060:
	{
		return ((int32_t)-999);
	}

IL_0066:
	{
		return ((int32_t)-25);
	}

IL_0069:
	{
		return ((int32_t)-999);
	}
}
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * DatabaseError_FromError_m74CA7DACBF40FE664D4B088E9B8A615D61DC769B (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DatabaseError_ErrorToCode_mA2AFFC06A2E8A6C5A71394A01C3D759402C5D231(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___msg1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___msg1;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.String>::get_Item(!0) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_6, L_7);
		G_B4_0 = L_8;
		goto IL_002e;
	}

IL_002d:
	{
		String_t* L_9 = ___msg1;
		G_B4_0 = L_9;
	}

IL_002e:
	{
		V_1 = G_B4_0;
		int32_t L_10 = V_0;
		String_t* L_11 = V_1;
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_12 = (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 *)il2cpp_codegen_object_new(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		DatabaseError__ctor_m38B3479297DC749697FAEF989342AC0E34A39C31(L_12, L_10, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String Firebase.Database.DatabaseError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_ToString_m58D8F77BE9B3CD0CABEAFAD51BBC03A128391BD1 (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = DatabaseError_get_Message_mB65407A635E3D7C51491173E3B6FA7262BC509AF_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A, L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m5067A29469F9322D223E0A094F11D696548E9E7F (DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_mE3245AEE1FB5FA49586C2798D432BC6A0D504353 (DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 * __this, String_t* ___message0, Exception_t * ___cause1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___cause1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE__cctor_m2D506701ECDCB47E1E7F7ACC17151E89BBDF8C0E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E * L_0 = (SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E *)il2cpp_codegen_object_new(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m0ADB82550973C1BB4A57B3132C00D087565746C3(L_0, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040 * L_1 = (SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040 *)il2cpp_codegen_object_new(SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m5FCC61DE0A2198978283B58325176E9BE096021B(L_1, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion_m9A84CA46732DEAEBEBF6F788A095A0DDFA310FF3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	return returnValue;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3201D5745B28C1D9BF8B25A5A8F94098E2F08778 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);

}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_GetResult_mBD295645420E54C1EFBC1D04AA7823171CF07DB8 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_Future_InternalDataSnapshot_GetResult)(____jarg10_marshaled);

	return returnValue;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_Future_InternalDataSnapshot_mCD15C4DF3700F6D147F3953AC09ABA42D643CC6A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_Future_InternalDataSnapshot)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_mC828792DE38FF094DF8EBFB3893970B750A116A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0)(____jarg10_marshaled);

	return returnValue;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1_m23724B9178254372FEE2AA5E3DE9D3421B55EFAD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal_mD59392C0A9FC28291377D8A56213F6A8237B9A2F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal_mB07FA307D72E3FCE950686068836241C55C58D6C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal)(____jarg10_marshaled);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_mD65E290C301E8AD2554F55A6890835A72451A52F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalDataSnapshot)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_Child__SWIG_0_m63B22D97C465090993DB812C640B9FC7305B0112 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_Child__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_mB03F74C67FE8CFC0291AC4D0CCCB4829153575CC (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_key_string)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m878DD5FF4C57B86B116F1922BAD9BE19CD302B78 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_value)(____jarg10_marshaled);

	return returnValue;
}
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_HasChild__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_HasChild__SWIG_0_mD6EA27B750CFCF0C352F0D029F0D4010ABF0749D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_HasChild__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m4730478C2C75CF942C7063B23B14F4EDA8DA7066 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalQuery)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_GetValue_mAF4A5B79FC653747C6CFED886056551259EBDD0C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_GetValue)(____jarg10_marshaled);

	return returnValue;
}
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_mDDAEBCC7568D01D1D1AD9ACE99F511305B1E30FF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_is_valid)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_mA9E498943E0A447DDB704E8D67635CA255E47128 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_DestroyValueListener)(___jarg10);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_m760407797521E23161F015FD63BCA9EF5B0C4159 (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___jarg10, OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_RegisterValueListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_m93E5BE35CA129D4069021DA2198646CA7BC037A9 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_DestroyChildListener)(___jarg10);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_m8DEE61FBE9F68036DE929FBB50220533D84973D3 (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___jarg10, OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * ___jarg21, OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Marshaling of parameter '___jarg32' to native representation
	Il2CppMethodPointer ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg32));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_RegisterChildListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m6B1DE6D779DEBBCDAC3D6608AB78902731322961 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalDatabaseReference)(____jarg10_marshaled);

}
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m9CF27D5E250321F8FFA662FA21936CDC68F6D318 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_is_valid)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_mEF41BCB9921F0B6BF032A47FFB5D9FADC3E14BD9 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_url)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast_m64BA929E9911EEC6F44B4F376FE790D36B275D2E (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast)(___jarg10);

	return returnValue;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_mF28EA341999CF2EA228D5E67B312AB5BBC04A7B9 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_SWIGUpcast)(___jarg10);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_mD496EC179B693747AF9272C2F2CFAB37AF2771B1 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * ___internalRef0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_0 = ___internalRef0;
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_1 = ___database1;
		Query__ctor_m552F3EFCA95A9C93A383A34876A17C3591230A36(__this, L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_2 = ___internalRef0;
		__this->set_internalReference_4(L_2);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_3 = ___database1;
		DatabaseReference_set_Database_m282D95F9AD43BBE5C0730E1EA650BF37ADFADAA2_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m282D95F9AD43BBE5C0730E1EA650BF37ADFADAA2 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Firebase.Database.DatabaseReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseReference_ToString_m2BB61CB7DDDCDDADA46F1C6EA588938F2413FDD6 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_0 = __this->get_internalReference_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InternalDatabaseReference_url_m75413615D60C2ED0D1EED5593DA41A98C7C02E46(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Firebase.Database.DatabaseReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseReference_Equals_mB1C04B6F3F60D03B3097F2BE0D5B387EAFE2FC24 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!((DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C *)IsInstSealed((RuntimeObject*)L_0, DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		RuntimeObject * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 Firebase.Database.DatabaseReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseReference_GetHashCode_mE3528E66EEB75B578CA801273B3209DC2F29A345 (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m3DCF10547AE51EC2489E9D5721C2C2C8F4BB4312 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___internalDB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_OnAppDisposed_m47C09B6E45483FFE71C9D0933E1F2B4829504359_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		FirebaseDatabase_set_App_mAB8EC36294084545DDF7F18AFDB2DBA696D5E037_inline(__this, L_0, /*hidden argument*/NULL);
		InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_1 = ___internalDB1;
		__this->set_internalDatabase_0(L_1);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2;
		L_2 = FirebaseDatabase_get_App_m93AA2C6AE670C913DED5B495355537612429DEBD_inline(__this, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_3, __this, (intptr_t)((intptr_t)FirebaseDatabase_OnAppDisposed_m47C09B6E45483FFE71C9D0933E1F2B4829504359_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Finalize_mDFB31597C9E456D5A72953FC2B07058BA97C5A66 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseDatabase_Dispose_m80A3AEFD4797B025F808225460CDE1AE5652BC12(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_OnAppDisposed_m47C09B6E45483FFE71C9D0933E1F2B4829504359 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___eventArgs1, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_Dispose_m80A3AEFD4797B025F808225460CDE1AE5652BC12(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_m80A3AEFD4797B025F808225460CDE1AE5652BC12 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1D2AF40B69ACF82943C614BB12EE07C7FAF0393F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_OnAppDisposed_m47C09B6E45483FFE71C9D0933E1F2B4829504359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_0, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_1 = __this->get_internalDatabase_0();
			if (L_1)
			{
				goto IL_001e;
			}
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
			Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * L_2 = ((FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var))->get_databases_3();
			V_1 = L_2;
			RuntimeObject * L_3 = V_1;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
		}

IL_002a:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
			Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * L_4 = ((FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var))->get_databases_3();
			String_t* L_5 = __this->get_name_1();
			NullCheck(L_4);
			bool L_6;
			L_6 = Dictionary_2_Remove_m1D2AF40B69ACF82943C614BB12EE07C7FAF0393F(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m1D2AF40B69ACF82943C614BB12EE07C7FAF0393F_RuntimeMethod_var);
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0040;
		}

FINALLY_0040:
		{ // begin finally (depth: 2)
			RuntimeObject * L_7 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(64)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(64)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x47, IL_0047)
		}

IL_0047:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_8;
			L_8 = FirebaseDatabase_get_App_m93AA2C6AE670C913DED5B495355537612429DEBD_inline(__this, /*hidden argument*/NULL);
			EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
			EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_9, __this, (intptr_t)((intptr_t)FirebaseDatabase_OnAppDisposed_m47C09B6E45483FFE71C9D0933E1F2B4829504359_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_8);
			FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812(L_8, L_9, /*hidden argument*/NULL);
			FirebaseDatabase_set_App_mAB8EC36294084545DDF7F18AFDB2DBA696D5E037_inline(__this, (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL, /*hidden argument*/NULL);
			InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_10 = __this->get_internalDatabase_0();
			NullCheck(L_10);
			VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose() */, L_10);
			__this->set_internalDatabase_0((InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 *)NULL);
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseDatabase_get_App_m93AA2C6AE670C913DED5B495355537612429DEBD (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = __this->get_U3CAppU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mAB8EC36294084545DDF7F18AFDB2DBA696D5E037 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_2(L_0);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0;
		L_0 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 * L_2 = (DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140_il2cpp_TypeInfo_var)));
		DatabaseException__ctor_m5067A29469F9322D223E0A094F11D696548E9E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50384A583A192C06635CCD8BE23070E725470116)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_get_DefaultInstance_m75D618D373BDD71ACEA9A351126AB3F937B69D4A_RuntimeMethod_var)));
	}

IL_0017:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_4;
		L_4 = FirebaseDatabase_GetInstance_m76521A08A8A8C5388359A14B8F880AE83CE73110(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * FirebaseDatabase_GetInstance_m76521A08A8A8C5388359A14B8F880AE83CE73110 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Services_get_AppConfig_mAE84F30BF7A0A0D522CC280712623B53961FB98D_inline(/*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = ___app0;
		NullCheck(L_2);
		FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * L_3;
		L_3 = FirebaseApp_get_AppPlatform_m95A32F1D4ECE2C65F4691EE17E4BDF1A57FAED9D(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(0 /* System.String Firebase.Platform.IAppConfigExtensions::GetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A_il2cpp_TypeInfo_var, L_1, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_5;
		L_5 = FirebaseDatabase_GetInstance_mF0005360FD07073793D18180159FCAAAFE21C539(L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * FirebaseDatabase_GetInstance_mF0005360FD07073793D18180159FCAAAFE21C539 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0CA3C595095035722115DE6CA7F448F2E4B9EE19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m42DA01E2CDA9AE33FE52C36A7F4E5A77BD511E07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	int32_t V_3 = 0;
	InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		String_t* L_0 = ___url1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 * L_2 = (DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140_il2cpp_TypeInfo_var)));
		DatabaseException__ctor_m5067A29469F9322D223E0A094F11D696548E9E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FBD1DB26924C1F6A36CB8F2F4850DE51995B3F9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_mF0005360FD07073793D18180159FCAAAFE21C539_RuntimeMethod_var)));
	}

IL_0016:
	{
		V_0 = (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 *)NULL;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_3 = ___app0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___url1;
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * L_7 = ((FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var))->get_databases_3();
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_8, /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
			Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * L_9 = ((FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var))->get_databases_3();
			String_t* L_10 = V_1;
			NullCheck(L_9);
			bool L_11;
			L_11 = Dictionary_2_TryGetValue_m0CA3C595095035722115DE6CA7F448F2E4B9EE19(L_9, L_10, (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m0CA3C595095035722115DE6CA7F448F2E4B9EE19_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0087;
			}
		}

IL_0048:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_12 = ___app0;
			String_t* L_13 = ___url1;
			InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_14;
			L_14 = InternalFirebaseDatabase_GetInstanceInternal_m6AFC797A4CCA2B52D59ED691B83855359FAC772F(L_12, L_13, (int32_t*)(&V_3), /*hidden argument*/NULL);
			V_4 = L_14;
			InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_15 = V_4;
			if (!L_15)
			{
				goto IL_0060;
			}
		}

IL_005a:
		{
			int32_t L_16 = V_3;
			if (!L_16)
			{
				goto IL_006b;
			}
		}

IL_0060:
		{
			DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 * L_17 = (DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_tF930F9D59783A56D6A0783B2FBC0AD464C493140_il2cpp_TypeInfo_var)));
			DatabaseException__ctor_m5067A29469F9322D223E0A094F11D696548E9E7F(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AFB5B2F4FF415E9A57A58EEFBA6C5E92E3529C)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_mF0005360FD07073793D18180159FCAAAFE21C539_RuntimeMethod_var)));
		}

IL_006b:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_18 = ___app0;
			InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_19 = V_4;
			FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_20 = (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 *)il2cpp_codegen_object_new(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
			FirebaseDatabase__ctor_m3DCF10547AE51EC2489E9D5721C2C2C8F4BB4312(L_20, L_18, L_19, /*hidden argument*/NULL);
			V_0 = L_20;
			FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_21 = V_0;
			String_t* L_22 = V_1;
			NullCheck(L_21);
			L_21->set_name_1(L_22);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
			Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * L_23 = ((FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var))->get_databases_3();
			String_t* L_24 = V_1;
			FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_25 = V_0;
			NullCheck(L_23);
			Dictionary_2_set_Item_m42DA01E2CDA9AE33FE52C36A7F4E5A77BD511E07(L_23, L_24, L_25, /*hidden argument*/Dictionary_2_set_Item_m42DA01E2CDA9AE33FE52C36A7F4E5A77BD511E07_RuntimeMethod_var);
		}

IL_0087:
		{
			IL2CPP_LEAVE(0x93, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_26 = V_2;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_26, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x93, IL_0093)
	}

IL_0093:
	{
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_27 = V_0;
		return L_27;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * FirebaseDatabase_get_RootReference_m01D00EAFB2836E43A5CA68CBDEFE1D965CF45A72 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_0 = __this->get_internalDatabase_0();
		NullCheck(L_0);
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_1;
		L_1 = InternalFirebaseDatabase_GetReference_m1AF54569B091F82DE0C5342DB271E691784A4F6C(L_0, /*hidden argument*/NULL);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_2 = (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C *)il2cpp_codegen_object_new(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_mD496EC179B693747AF9272C2F2CFAB37AF2771B1(L_2, L_1, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * FirebaseDatabase_GetReference_mEB739ABE53B33393ED40B60B03C44AEB4525BD85 (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_0 = __this->get_internalDatabase_0();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_2;
		L_2 = InternalFirebaseDatabase_GetReference_m00248F0144085605261A71E86DF3B536048239F2(L_0, L_1, /*hidden argument*/NULL);
		DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * L_3 = (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C *)il2cpp_codegen_object_new(DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_mD496EC179B693747AF9272C2F2CFAB37AF2771B1(L_3, L_2, __this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__cctor_m7CA2F9F63C990ABFEAC91DC0C53ABFF9DFE86583 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m59C07F6643E8DEBA6C9A301C0AE84791A7888A70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 * L_0 = (Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2 *)il2cpp_codegen_object_new(Dictionary_2_t45E1EFCD85CF4521B6551E53405DA603C66106F2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m59C07F6643E8DEBA6C9A301C0AE84791A7888A70(L_0, /*hidden argument*/Dictionary_2__ctor_m59C07F6643E8DEBA6C9A301C0AE84791A7888A70_RuntimeMethod_var);
		((FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470_il2cpp_TypeInfo_var))->set_databases_3(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m7905C61D5D9AE818AA4AC3F0F838FA01B5E4D852(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m7905C61D5D9AE818AA4AC3F0F838FA01B5E4D852(___key0, NULL);

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__ctor_mBD0542E2976FE5CE03F92C53F981AD18511E0B11 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast_m64BA929E9911EEC6F44B4F376FE790D36B275D2E((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_Finalize_mB7553CEE6FED6B3854801DE96B5F09EC78946A59 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_Dispose_m97702F3298F6866ACDB4DAF947376F3FE80FE261 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_005f;
			}
		}

IL_0026:
		{
			Future_InternalDataSnapshot_SetCompletionData_m1D3D08062F81C195B4298C7B980AA3EB166D5672(__this, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_5 = ((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_004e;
			}
		}

IL_003c:
		{
			((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_Future_InternalDataSnapshot_mCD15C4DF3700F6D147F3953AC09ABA42D643CC6A(L_6, /*hidden argument*/NULL);
		}

IL_004e:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_7);
		}

IL_005f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x77, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot::GetTask(Firebase.Database.Internal.Future_InternalDataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * Future_InternalDataSnapshot_GetTask_mA849249BF0D4F49613ED11751B8B7E0281E4C380 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t3C9E886ED952A5C1AC45907686BC24896CA35010_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mEC703BD3E8DF60DEBAD638DD1D617657FD1D7A5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m3751A7ECA2C4F3CB06550D41F2C80B426E860C26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m036CE247B543C1C3E90DE1A2369F8FA8A1D46192_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mFC6340F68B8E4E596967CB4A864D6C925D5F5655_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_0 = (U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_mA788F542E33A4820FB5D5940955D9516D0C51D39(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_1 = V_0;
		Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_3 = V_0;
		TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * L_4 = (TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF *)il2cpp_codegen_object_new(TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m3751A7ECA2C4F3CB06550D41F2C80B426E860C26(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m3751A7ECA2C4F3CB06550D41F2C80B426E860C26_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_5 = V_0;
		NullCheck(L_5);
		Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_6 = L_5->get_fu_0();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * L_9 = L_8->get_tcs_1();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_mEC703BD3E8DF60DEBAD638DD1D617657FD1D7A5F(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_mEC703BD3E8DF60DEBAD638DD1D617657FD1D7A5F_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * L_12 = L_11->get_tcs_1();
		NullCheck(L_12);
		Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * L_13;
		L_13 = TaskCompletionSource_1_get_Task_m036CE247B543C1C3E90DE1A2369F8FA8A1D46192_inline(L_12, /*hidden argument*/TaskCompletionSource_1_get_Task_m036CE247B543C1C3E90DE1A2369F8FA8A1D46192_RuntimeMethod_var);
		return L_13;
	}

IL_004b:
	{
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_14 = V_0;
		NullCheck(L_14);
		Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_15 = L_14->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_16 = V_0;
		Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * L_17 = (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 *)il2cpp_codegen_object_new(Action_t3C9E886ED952A5C1AC45907686BC24896CA35010_il2cpp_TypeInfo_var);
		Action__ctor_mD4D4FE593498B18687FE8C1591C34F77F325A11A(L_17, L_16, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mFC6340F68B8E4E596967CB4A864D6C925D5F5655_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		Future_InternalDataSnapshot_SetOnCompletionCallback_m388C32DC2FD7271395EC78E82CB4BDF60F08B570(L_15, L_17, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * L_20;
		L_20 = TaskCompletionSource_1_get_Task_m036CE247B543C1C3E90DE1A2369F8FA8A1D46192_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_m036CE247B543C1C3E90DE1A2369F8FA8A1D46192_RuntimeMethod_var);
		return L_20;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_ThrowIfDisposed_mD724684DB59E023BCDA95A70A67FF931536F16B3 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_2();
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_ThrowIfDisposed_mD724684DB59E023BCDA95A70A67FF931536F16B3_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Internal.Future_InternalDataSnapshot/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetOnCompletionCallback_m388C32DC2FD7271395EC78E82CB4BDF60F08B570 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDB2D45DD861B8E39D37B45FED51B5A2C6EC667A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDADD4AF2D09DB970C2DA40007E966A4C0C19521D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m7905C61D5D9AE818AA4AC3F0F838FA01B5E4D852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Future_InternalDataSnapshot_ThrowIfDisposed_mD724684DB59E023BCDA95A70A67FF931536F16B3(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * L_1 = (SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_mE0AC37E93A8DA64EBA7614EFDF0EC8177BD1EE64(L_1, NULL, (intptr_t)((intptr_t)Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m7905C61D5D9AE818AA4AC3F0F838FA01B5E4D852_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
			Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * L_4 = ((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * L_5 = (Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 *)il2cpp_codegen_object_new(Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mDB2D45DD861B8E39D37B45FED51B5A2C6EC667A7(L_5, /*hidden argument*/Dictionary_2__ctor_mDB2D45DD861B8E39D37B45FED51B5A2C6EC667A7_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
			((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
			int32_t L_6 = ((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * L_8 = ((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_mDADD4AF2D09DB970C2DA40007E966A4C0C19521D(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_mDADD4AF2D09DB970C2DA40007E966A4C0C19521D_RuntimeMethod_var);
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14;
		L_14 = Future_InternalDataSnapshot_SWIG_OnCompletion_m7B5EEB5EB2E01FF2DF8F69C3523DBCFC7179E319(__this, L_12, L_13, /*hidden argument*/NULL);
		Future_InternalDataSnapshot_SetCompletionData_m1D3D08062F81C195B4298C7B980AA3EB166D5672(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetCompletionData_m1D3D08062F81C195B4298C7B980AA3EB166D5672 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		Future_InternalDataSnapshot_ThrowIfDisposed_mD724684DB59E023BCDA95A70A67FF931536F16B3(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3F18A53533DF61CC0DC043AEC2AEB91ECB7EDD00(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m7905C61D5D9AE818AA4AC3F0F838FA01B5E4D852 (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3252CBDBF92D3408E081F662845DE0B41E437C4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5A49A6251995F0D50EE2D53D9BFC990EC9F2AB0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
			Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * L_2 = ((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
			Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * L_3 = ((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_m5A49A6251995F0D50EE2D53D9BFC990EC9F2AB0F(L_3, L_4, (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5A49A6251995F0D50EE2D53D9BFC990EC9F2AB0F_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
			Dictionary_2_t77E31D5C0EC46C490C8C6CA3ED81BCB3DE810661 * L_6 = ((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			bool L_8;
			L_8 = Dictionary_2_Remove_m3252CBDBF92D3408E081F662845DE0B41E437C4D(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m3252CBDBF92D3408E081F662845DE0B41E437C4D_RuntimeMethod_var);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * L_11 = V_0;
		NullCheck(L_11);
		Action_Invoke_m1BF962C259EF45F747580BC1ACB7139C30D3D809(L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_m7B5EEB5EB2E01FF2DF8F69C3523DBCFC7179E319 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion_m9A84CA46732DEAEBEBF6F788A095A0DDFA310FF3(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_SWIG_OnCompletion_m7B5EEB5EB2E01FF2DF8F69C3523DBCFC7179E319_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3F18A53533DF61CC0DC043AEC2AEB91ECB7EDD00 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3201D5745B28C1D9BF8B25A5A8F94098E2F08778(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3F18A53533DF61CC0DC043AEC2AEB91ECB7EDD00_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * Future_InternalDataSnapshot_GetResult_mB737568CE9D114E1F8464CE0F46AD7A3B0E273B3 (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_GetResult_mBD295645420E54C1EFBC1D04AA7823171CF07DB8(L_0, /*hidden argument*/NULL);
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_2 = (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A *)il2cpp_codegen_object_new(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mC8A7803BFA8D85177E7EFD11ABA7652B82842DAF(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_GetResult_mB737568CE9D114E1F8464CE0F46AD7A3B0E273B3_RuntimeMethod_var)));
	}

IL_0022:
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__cctor_m51EAEA60B47247E5F619D654C80AEC67C7B79ACD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildChangeHandler_m111693C2C3696B07FE2D29391D27DEF39BCF5BB5(int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, char* ___previousChildName3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___previousChildName3' to managed representation
	String_t* ____previousChildName3_unmarshaled = NULL;
	____previousChildName3_unmarshaled = il2cpp_codegen_marshal_string_result(___previousChildName3);

	// Managed method invocation
	InternalChildListener_OnChildChangeHandler_m111693C2C3696B07FE2D29391D27DEF39BCF5BB5(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildRemovedHandler_mC4C07D126798B369EF865A3E0E6CCE30900C032F(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalChildListener_OnChildRemovedHandler_mC4C07D126798B369EF865A3E0E6CCE30900C032F(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnCancelledHandler_m6027BABC8ED7A3782F0660E4D4BC1ACDBBFC19FF(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalChildListener_OnCancelledHandler_m6027BABC8ED7A3782F0660E4D4BC1ACDBBFC19FF(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.InternalChildListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__cctor_mA4D2CC82B36620D623C9679CC1FA24409F63C0D1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnCancelledHandler_m6027BABC8ED7A3782F0660E4D4BC1ACDBBFC19FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnChildChangeHandler_m111693C2C3696B07FE2D29391D27DEF39BCF5BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnChildRemovedHandler_mC4C07D126798B369EF865A3E0E6CCE30900C032F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * G_B4_0 = NULL;
	OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * G_B3_0 = NULL;
	OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * G_B6_0 = NULL;
	OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * G_B6_1 = NULL;
	OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * G_B5_0 = NULL;
	OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * G_B5_1 = NULL;
	{
		OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * L_0 = ((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_12();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * L_1 = (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 *)il2cpp_codegen_object_new(OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_mAC9F991B98CED300FF2BC7902FF1DB48253E641C(L_1, NULL, (intptr_t)((intptr_t)InternalChildListener_OnCancelledHandler_m6027BABC8ED7A3782F0660E4D4BC1ACDBBFC19FF_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_12(L_1);
	}

IL_0018:
	{
		OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * L_2 = ((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_12();
		OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * L_3 = ((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_13();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0035;
		}
	}
	{
		OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * L_4 = (OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E *)il2cpp_codegen_object_new(OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E_il2cpp_TypeInfo_var);
		OnChildChangeDelegate__ctor_m905FC42ABBD238AD00D4CA41B4FEA96EB9E16D23(L_4, NULL, (intptr_t)((intptr_t)InternalChildListener_OnChildChangeHandler_m111693C2C3696B07FE2D29391D27DEF39BCF5BB5_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_13(L_4);
		G_B4_0 = G_B3_0;
	}

IL_0035:
	{
		OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * L_5 = ((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_13();
		OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * L_6 = ((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_14();
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B6_0 = L_5;
			G_B6_1 = G_B4_0;
			goto IL_0052;
		}
	}
	{
		OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * L_7 = (OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 *)il2cpp_codegen_object_new(OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901_il2cpp_TypeInfo_var);
		OnChildRemovedDelegate__ctor_m3DA4B6DA14D6A7733B2D3BF6F5721F7E8A811E84(L_7, NULL, (intptr_t)((intptr_t)InternalChildListener_OnChildRemovedHandler_mC4C07D126798B369EF865A3E0E6CCE30900C032F_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_14(L_7);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0052:
	{
		OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * L_8 = ((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_14();
		InternalQuery_RegisterChildListenerCallbacks_m342FC1A852F73C6495982A6E25105C7D476179C2(G_B6_1, G_B6_0, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_m694203006FE0205106688331909EB8E290733831 (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * __this, InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		InternalListener__ctor_m79710E8F1FD901F6E8C6AEA2B5041B4FB06C905E(__this, /*hidden argument*/NULL);
		InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_m41E36427FAA5985CB8FF0F6BEADB1A1146E85A18 (int32_t ___callbackId0, InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D ** ___childListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * V_0 = NULL;
	{
		V_0 = (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalListener_TryGetListener_mA71371CAFDD9DF4B40B34441D7186E9FAA3159EC(L_0, (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D ** L_2 = ___childListener1;
		InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * L_3 = V_0;
		*((RuntimeObject **)L_2) = (RuntimeObject *)((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D *)IsInstSealed((RuntimeObject*)L_3, InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D *)IsInstSealed((RuntimeObject*)L_3, InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var)));
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D ** L_4 = ___childListener1;
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_5 = *((InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D **)L_4);
		return (bool)((((int32_t)((((RuntimeObject*)(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D ** L_6 = ___childListener1;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m111693C2C3696B07FE2D29391D27DEF39BCF5BB5 (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_m8D036E948FE5F0D8033360D715E7E2F3282DC29E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * V_0 = NULL;
	{
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * L_0 = (U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 *)il2cpp_codegen_object_new(U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9_il2cpp_TypeInfo_var);
		U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_m3F0222C7469ACF362ACF082D5A7B3E95194D3FA6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * L_1 = V_0;
		intptr_t L_2 = ___snapshot2;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * L_5 = V_0;
		int32_t L_6 = ___changeType1;
		NullCheck(L_5);
		L_5->set_changeType_2(L_6);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * L_7 = V_0;
		String_t* L_8 = ___previousChildName3;
		NullCheck(L_7);
		L_7->set_previousChildName_3(L_8);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_m8D036E948FE5F0D8033360D715E7E2F3282DC29E_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_mC4C07D126798B369EF865A3E0E6CCE30900C032F (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mAE7AAAFE60ACB5EB41753A9D7FD24987399C11FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 * V_0 = NULL;
	{
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 * L_0 = (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 *)il2cpp_codegen_object_new(U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1_il2cpp_TypeInfo_var);
		U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_m7E6AE23F4E493961862651CCCDD4F7D8BC58E493(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 * L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mAE7AAAFE60ACB5EB41753A9D7FD24987399C11FF_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m6027BABC8ED7A3782F0660E4D4BC1ACDBBFC19FF (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mC2B193143B43BA821FF81A8AFDEAE4C94148690E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * V_0 = NULL;
	{
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * L_0 = (U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A *)il2cpp_codegen_object_new(U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A_il2cpp_TypeInfo_var);
		U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_mFFE132800267C1A72DFBDC65B4F1F1E10FBEABE0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->set_msg_2(L_6);
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mC2B193143B43BA821FF81A8AFDEAE4C94148690E_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_DestroyCppListener_m5C9240D0BCC8DCAE2D8AA0EA81D238AAF18BB00D (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = __this->get_cppListener_5();
		InternalQuery_DestroyChildListener_m574B9F1F70D80C9104E164EE160233BBA6F3F958((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002b:
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
// System.Void Firebase.Database.Internal.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_mC8A7803BFA8D85177E7EFD11ABA7652B82842DAF (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Finalize_m585B370EDA47B63D114FC49260601FB46AF04511 (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mD0DA4256BC7602E86C23AA5E36D07EA4458FED13 (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_mD65E290C301E8AD2554F55A6890835A72451A52F(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * InternalDataSnapshot_Child_m0C3CD54CDE33C62A364C33257CCBCDD1B4C124EE (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_Child__SWIG_0_m63B22D97C465090993DB812C640B9FC7305B0112(L_0, L_1, /*hidden argument*/NULL);
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_3 = (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A *)il2cpp_codegen_object_new(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mC8A7803BFA8D85177E7EFD11ABA7652B82842DAF(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_Child_m0C3CD54CDE33C62A364C33257CCBCDD1B4C124EE_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_6 = V_0;
		return L_6;
	}
}
// System.String Firebase.Database.Internal.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_mA08D3ACDC44D92546C101D520B4204945D3C218E (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_mB03F74C67FE8CFC0291AC4D0CCCB4829153575CC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_key_string_mA08D3ACDC44D92546C101D520B4204945D3C218E_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.Variant Firebase.Database.Internal.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * InternalDataSnapshot_value_mFD409F71BE0E82EE0B1E7811A7C709CF5E198133 (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m878DD5FF4C57B86B116F1922BAD9BE19CD302B78(L_0, /*hidden argument*/NULL);
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_2 = (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 *)il2cpp_codegen_object_new(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var);
		Variant__ctor_mDE4F4CD06BFEFA94C7B3757DAF5EB3F4E10DAD8E(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_value_mFD409F71BE0E82EE0B1E7811A7C709CF5E198133_RuntimeMethod_var)));
	}

IL_0022:
	{
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::HasChild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshot_HasChild_m3E2C6C83F8BDDE16D473719E25B9F2CAF88FE0DA (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_HasChild__SWIG_0_mD6EA27B750CFCF0C352F0D029F0D4010ABF0749D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_HasChild_m3E2C6C83F8BDDE16D473719E25B9F2CAF88FE0DA_RuntimeMethod_var)));
	}

IL_001d:
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
// System.Void Firebase.Database.Internal.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mAD8499D9D769CCD45207112000EE7AF91CFD202D (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_mF28EA341999CF2EA228D5E67B312AB5BBC04A7B9((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		InternalQuery__ctor_m736CC3B9078648C1EF156BFA18FBA806C721D5F4(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDatabaseReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Finalize_mDA077A20E69EA6B292EB99868A8FB35F1674445E (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalQuery::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		InternalQuery_Finalize_mB8C23C8750171A9332CE19F1673D6B840030144A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDatabaseReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Dispose_m7A34A1859B39A814ACF30F7E64842454E0B3C768 (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = ((InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 *)__this)->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			((InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m6B1DE6D779DEBBCDAC3D6608AB78902731322961(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			InternalQuery_Dispose_m513030CE720E2CB96D768F3DE923DAB3BC557A46(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDatabaseReference::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDatabaseReference_is_valid_mB4B11E42888407DCEAF91D4039CFDEDDD0BFFA0C (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m9CF27D5E250321F8FFA662FA21936CDC68F6D318(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_is_valid_mB4B11E42888407DCEAF91D4039CFDEDDD0BFFA0C_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Database.Internal.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m75413615D60C2ED0D1EED5593DA41A98C7C02E46 (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_mEF41BCB9921F0B6BF032A47FFB5D9FADC3E14BD9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_url_m75413615D60C2ED0D1EED5593DA41A98C7C02E46_RuntimeMethod_var)));
	}

IL_001c:
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
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_m4254206AB58573A28C3FE1E3D1FE1C7D95E8BD93 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::getCPtr(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  InternalFirebaseDatabase_getCPtr_m0208AE9D9E511615C40AA4747AD67A0219F0B378 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Finalize_m0FCAFB5876430D62CEF0204F8E72A02AE7D4E547 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m413ABD6C99EACADD5842CD5696AF10E29255EC70 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		InternalFirebaseDatabase_ReleaseReferenceInternal_m30CED62A62A60A82A8A6F9860843253067924623(__this, /*hidden argument*/NULL);
		__this->set_swigCMemOwn_1((bool)0);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3C, FINALLY_0035);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * InternalFirebaseDatabase_GetReference_m1AF54569B091F82DE0C5342DB271E691784A4F6C (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_mC828792DE38FF094DF8EBFB3893970B750A116A3(L_0, /*hidden argument*/NULL);
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_2 = (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 *)il2cpp_codegen_object_new(InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_mAD8499D9D769CCD45207112000EE7AF91CFD202D(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetReference_m1AF54569B091F82DE0C5342DB271E691784A4F6C_RuntimeMethod_var)));
	}

IL_0022:
	{
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_5 = V_0;
		return L_5;
	}
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * InternalFirebaseDatabase_GetReference_m00248F0144085605261A71E86DF3B536048239F2 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1_m23724B9178254372FEE2AA5E3DE9D3421B55EFAD(L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_3 = (InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 *)il2cpp_codegen_object_new(InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_mAD8499D9D769CCD45207112000EE7AF91CFD202D(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetReference_m00248F0144085605261A71E86DF3B536048239F2_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDatabaseReference_t377189DFC646DE6CD547BB5910CB7B7679C477B9 * L_6 = V_0;
		return L_6;
	}
}
// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.Internal.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * InternalFirebaseDatabase_GetInstanceInternal_m6AFC797A4CCA2B52D59ED691B83855359FAC772F (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * V_2 = NULL;
	InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
			L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
			String_t* L_2 = ___url1;
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
			intptr_t L_3;
			L_3 = DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal_mD59392C0A9FC28291377D8A56213F6A8237B9A2F(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5;
			L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			G_B4_0 = ((InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 *)(NULL));
			goto IL_002e;
		}

IL_0027:
		{
			intptr_t L_6 = V_1;
			InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_7 = (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 *)il2cpp_codegen_object_new(InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690_il2cpp_TypeInfo_var);
			InternalFirebaseDatabase__ctor_m4254206AB58573A28C3FE1E3D1FE1C7D95E8BD93(L_7, (intptr_t)L_6, (bool)0, /*hidden argument*/NULL);
			G_B4_0 = L_7;
		}

IL_002e:
		{
			V_2 = G_B4_0;
			bool L_8;
			L_8 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_9;
			L_9 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetInstanceInternal_m6AFC797A4CCA2B52D59ED691B83855359FAC772F_RuntimeMethod_var)));
		}

IL_003f:
		{
			InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_10 = V_2;
			V_3 = L_10;
			IL2CPP_LEAVE(0x4A, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		int32_t* L_11 = ___init_result_out2;
		int32_t L_12 = V_0;
		*((int32_t*)L_11) = (int32_t)L_12;
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m30CED62A62A60A82A8A6F9860843253067924623 (InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t4C3834289FA32AADAAC3C0B5124E5E8E119DA690 * L_0 = ___instance0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = InternalFirebaseDatabase_getCPtr_m0208AE9D9E511615C40AA4747AD67A0219F0B378(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal_mB07FA307D72E3FCE950686068836241C55C58D6C(L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_ReleaseReferenceInternal_m30CED62A62A60A82A8A6F9860843253067924623_RuntimeMethod_var)));
	}

IL_001b:
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
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_m79710E8F1FD901F6E8C6AEA2B5041B4FB06C905E (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * L_0 = ((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		int32_t L_2 = ((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->get_uidGenerator_0();
		int32_t L_3 = L_2;
		((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->set_uidGenerator_0(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set_uid_2(L_3);
		IL2CPP_LEAVE(0x31, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_mA71371CAFDD9DF4B40B34441D7186E9FAA3159EC (int32_t ___uid0, InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 ** ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE19D1657AA32878CF901B95E4D43169AE38A570E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * L_0 = ((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * L_2 = ((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = ___uid0;
		InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 ** L_4 = ___listener1;
		NullCheck(L_2);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mE19D1657AA32878CF901B95E4D43169AE38A570E(L_2, L_3, (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_mE19D1657AA32878CF901B95E4D43169AE38A570E_RuntimeMethod_var);
		V_1 = L_5;
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x25, IL_0025)
	}

IL_0025:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Finalize_m402FCBC2490EE8E44B94C4A77F71F086ED888FD5 (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		InternalListener_Dispose_m2064F1B8862AF3AB856E8F8477DAAD68B7642FCE(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m2064F1B8862AF3AB856E8F8477DAAD68B7642FCE (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC4800DDEB2B34EB7E059CC1263FCFC0E65278884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * L_0 = ((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * L_2 = ((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = __this->get_uid_2();
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_Remove_mC4800DDEB2B34EB7E059CC1263FCFC0E65278884(L_2, L_3, /*hidden argument*/Dictionary_2_Remove_mC4800DDEB2B34EB7E059CC1263FCFC0E65278884_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__cctor_m1939E8AD0030007246A62C76EEA1455EC489E1A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m21DF5CF653BF8AEA149C21D6FAFF055A967C6FC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->set_uidGenerator_0(0);
		Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 * L_0 = (Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9 *)il2cpp_codegen_object_new(Dictionary_2_tCEEC77A1340599FFCCFAFC5D1DE3EC3AE6497EF9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m21DF5CF653BF8AEA149C21D6FAFF055A967C6FC3(L_0, /*hidden argument*/Dictionary_2__ctor_m21DF5CF653BF8AEA149C21D6FAFF055A967C6FC3_RuntimeMethod_var);
		((InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var))->set_databaseCallbacks_1(L_0);
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
// System.Void Firebase.Database.Internal.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_m736CC3B9078648C1EF156BFA18FBA806C721D5F4 (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_mB8C23C8750171A9332CE19F1673D6B840030144A (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalQuery::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_m513030CE720E2CB96D768F3DE923DAB3BC557A46 (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m4730478C2C75CF942C7063B23B14F4EDA8DA7066(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.InternalQuery::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * InternalQuery_GetValueAsync_m611875BC39C804373A70F5E501C80A5C7394DD48 (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_GetValue_mAF4A5B79FC653747C6CFED886056551259EBDD0C(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_GetValueAsync_m611875BC39C804373A70F5E501C80A5C7394DD48_RuntimeMethod_var)));
	}

IL_001c:
	{
		intptr_t L_4 = V_0;
		Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_5 = (Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 *)il2cpp_codegen_object_new(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
		Future_InternalDataSnapshot__ctor_mBD0542E2976FE5CE03F92C53F981AD18511E0B11(L_5, (intptr_t)L_4, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782_il2cpp_TypeInfo_var);
		Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * L_6;
		L_6 = Future_InternalDataSnapshot_GetTask_mA849249BF0D4F49613ED11751B8B7E0281E4C380(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Firebase.Database.Internal.InternalQuery::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalQuery_is_valid_m77F5C421E26AA0EB8CC6EB64293A7DFA0EF168DA (InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_mDDAEBCC7568D01D1D1AD9ACE99F511305B1E30FF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_is_valid_m77F5C421E26AA0EB8CC6EB64293A7DFA0EF168DA_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m274A8010A85AD724836E9F5FE18AB1B8BDCF95C0 (intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_mA9E498943E0A447DDB704E8D67635CA255E47128((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_DestroyValueListener_m274A8010A85AD724836E9F5FE18AB1B8BDCF95C0_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_mB06CDAA0D4A24EA071875E618C12ABAA1B21201B (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___cancelledCallback0, OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * ___valueChangedCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * L_0 = ___cancelledCallback0;
		OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * L_1 = ___valueChangedCallback1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_m760407797521E23161F015FD63BCA9EF5B0C4159(L_0, L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_RegisterValueListenerCallbacks_mB06CDAA0D4A24EA071875E618C12ABAA1B21201B_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_m574B9F1F70D80C9104E164EE160233BBA6F3F958 (intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_m93E5BE35CA129D4069021DA2198646CA7BC037A9((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_DestroyChildListener_m574B9F1F70D80C9104E164EE160233BBA6F3F958_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m342FC1A852F73C6495982A6E25105C7D476179C2 (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * ___cancelledCallback0, OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * ___childChangeCallback1, OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * ___childRemovedCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * L_0 = ___cancelledCallback0;
		OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * L_1 = ___childChangeCallback1;
		OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * L_2 = ___childRemovedCallback2;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_m8DEE61FBE9F68036DE929FBB50220533D84973D3(L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_RegisterChildListenerCallbacks_m342FC1A852F73C6495982A6E25105C7D476179C2_RuntimeMethod_var)));
	}

IL_0018:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnValueChangedHandler_mA40B20FA26915907919D53C45D5BF5395ACE2BDA(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalValueListener_OnValueChangedHandler_mA40B20FA26915907919D53C45D5BF5395ACE2BDA(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnCancelledHandler_mB24789B71507858E38EB48965B0D9FBD031959F7(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalValueListener_OnCancelledHandler_mB24789B71507858E38EB48965B0D9FBD031959F7(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.InternalValueListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__cctor_m6465810D102962F7FEFB7876E4F75AB72B0D5877 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_OnCancelledHandler_mB24789B71507858E38EB48965B0D9FBD031959F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_OnValueChangedHandler_mA40B20FA26915907919D53C45D5BF5395ACE2BDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * G_B4_0 = NULL;
	OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * G_B3_0 = NULL;
	{
		OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * L_0 = ((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * L_1 = (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 *)il2cpp_codegen_object_new(OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_mAC9F991B98CED300FF2BC7902FF1DB48253E641C(L_1, NULL, (intptr_t)((intptr_t)InternalValueListener_OnCancelledHandler_mB24789B71507858E38EB48965B0D9FBD031959F7_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_8(L_1);
	}

IL_0018:
	{
		OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * L_2 = ((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * L_3 = ((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0035;
		}
	}
	{
		OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * L_4 = (OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 *)il2cpp_codegen_object_new(OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444_il2cpp_TypeInfo_var);
		OnValueChangedDelegate__ctor_m1E5CB914A443BBEA65327C6909B8F35834782602(L_4, NULL, (intptr_t)((intptr_t)InternalValueListener_OnValueChangedHandler_mA40B20FA26915907919D53C45D5BF5395ACE2BDA_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_9(L_4);
		G_B4_0 = G_B3_0;
	}

IL_0035:
	{
		OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * L_5 = ((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		InternalQuery_RegisterValueListenerCallbacks_mB06CDAA0D4A24EA071875E618C12ABAA1B21201B(G_B4_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_m33BF6880327D5F9AFA1A432DE72323D38730FAC7 (InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * __this, InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		InternalListener__ctor_m79710E8F1FD901F6E8C6AEA2B5041B4FB06C905E(__this, /*hidden argument*/NULL);
		InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m8D191EB665078398BE6D37D59B164BD3AF166F7E (int32_t ___callbackId0, InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 ** ___valueListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * V_0 = NULL;
	{
		V_0 = (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalListener_TryGetListener_mA71371CAFDD9DF4B40B34441D7186E9FAA3159EC(L_0, (InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 ** L_2 = ___valueListener1;
		InternalListener_tE8680CDB1FF31888C1C78E10D9B5146992577A48 * L_3 = V_0;
		*((RuntimeObject **)L_2) = (RuntimeObject *)((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 *)IsInstSealed((RuntimeObject*)L_3, InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 *)IsInstSealed((RuntimeObject*)L_3, InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var)));
		InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 ** L_4 = ___valueListener1;
		InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * L_5 = *((InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 **)L_4);
		return (bool)((((int32_t)((((RuntimeObject*)(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 ** L_6 = ___valueListener1;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_mA40B20FA26915907919D53C45D5BF5395ACE2BDA (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mDB964A1EF1CA2AA7BA57124523322644BD33CFB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E * V_0 = NULL;
	{
		U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E * L_0 = (U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E *)il2cpp_codegen_object_new(U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E_il2cpp_TypeInfo_var);
		U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_mE348CB520803C141F981FF68AD8109BB8CD9155A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E * L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mDB964A1EF1CA2AA7BA57124523322644BD33CFB4_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_mB24789B71507858E38EB48965B0D9FBD031959F7 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mDE1B11AAEBA15DBB45A24DCB6D80A3F36CB51D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * V_0 = NULL;
	{
		U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * L_0 = (U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF *)il2cpp_codegen_object_new(U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF_il2cpp_TypeInfo_var);
		U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_m16DA70EA0E84751261B659883535CD3CDC442FBF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->set_msg_2(L_6);
		U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mDE1B11AAEBA15DBB45A24DCB6D80A3F36CB51D81_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_DestroyCppListener_m48A32F634EC202FD14D8222B9FE8A002A665FBF1 (InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = __this->get_cppListener_5();
		InternalQuery_DestroyValueListener_m274A8010A85AD724836E9F5FE18AB1B8BDCF95C0((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002b:
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
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_m552F3EFCA95A9C93A383A34876A17C3591230A36 (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * __this, InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * ___internalQuery0, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * L_0 = ___internalQuery0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Firebase.Database.Internal.InternalQuery::is_valid() */, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07F1E3DA016554FBC48202BBEF3B67E41B513EBA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Query__ctor_m552F3EFCA95A9C93A383A34876A17C3591230A36_RuntimeMethod_var)));
	}

IL_001c:
	{
		InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * L_3 = ___internalQuery0;
		__this->set_internalQuery_0(L_3);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_4 = ___database1;
		__this->set_database_1(L_4);
		InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * L_5 = ___internalQuery0;
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_6 = ___database1;
		InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * L_7 = (InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 *)il2cpp_codegen_object_new(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var);
		InternalValueListener__ctor_m33BF6880327D5F9AFA1A432DE72323D38730FAC7(L_7, L_5, L_6, /*hidden argument*/NULL);
		__this->set_valueListener_2(L_7);
		InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * L_8 = ___internalQuery0;
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_9 = ___database1;
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_10 = (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D *)il2cpp_codegen_object_new(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		InternalChildListener__ctor_m694203006FE0205106688331909EB8E290733831(L_10, L_8, L_9, /*hidden argument*/NULL);
		__this->set_childListener_3(L_10);
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalDataSnapshotTask(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * Query_WrapInternalDataSnapshotTask_mD66B30C95FF21216495D9F24C95C388DDE50DD83 (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * __this, Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * ___it0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m58C335670AC2A0F8330AF901C8A0C9981971A685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mF499A152BCAEA9DE368EDF914174B9BD5FBAD4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m2764F9E5D6DC04C4D667CA027C319F5E17CAC143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mC31F6F48C8E15755E811AFAB79C859ECCB787D0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_U3CU3Em__0_m22FFF028B3E9BB0B1DDCBD737A2EFEA9578B5DC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * V_0 = NULL;
	{
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * L_0 = (U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF *)il2cpp_codegen_object_new(U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF_il2cpp_TypeInfo_var);
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0__ctor_m5BA902CFC5CFE89B09B422D5F4A967CBA50CDE05(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * L_2 = V_0;
		TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * L_3 = (TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mF499A152BCAEA9DE368EDF914174B9BD5FBAD4D3(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_mF499A152BCAEA9DE368EDF914174B9BD5FBAD4D3_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_tcs_0(L_3);
		Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * L_4 = ___it0;
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * L_5 = V_0;
		Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6 * L_6 = (Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6 *)il2cpp_codegen_object_new(Action_1_t6173F3EA2E1988AF66B5B64F353DEBAFF3E8E6F6_il2cpp_TypeInfo_var);
		Action_1__ctor_m58C335670AC2A0F8330AF901C8A0C9981971A685(L_6, L_5, (intptr_t)((intptr_t)U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_U3CU3Em__0_m22FFF028B3E9BB0B1DDCBD737A2EFEA9578B5DC0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m58C335670AC2A0F8330AF901C8A0C9981971A685_RuntimeMethod_var);
		NullCheck(L_4);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = Task_1_ContinueWith_mC31F6F48C8E15755E811AFAB79C859ECCB787D0F(L_4, L_6, /*hidden argument*/Task_1_ContinueWith_mC31F6F48C8E15755E811AFAB79C859ECCB787D0F_RuntimeMethod_var);
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * L_9 = L_8->get_tcs_0();
		NullCheck(L_9);
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_10;
		L_10 = TaskCompletionSource_1_get_Task_m2764F9E5D6DC04C4D667CA027C319F5E17CAC143_inline(L_9, /*hidden argument*/TaskCompletionSource_1_get_Task_m2764F9E5D6DC04C4D667CA027C319F5E17CAC143_RuntimeMethod_var);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * Query_GetValueAsync_m1DE61C007517461EE4E0789CE6A480570B1564C8 (Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * __this, const RuntimeMethod* method)
{
	{
		InternalQuery_tA0F264A7A6B3D704A15AD3CFCD8EEE8E546DE199 * L_0 = __this->get_internalQuery_0();
		NullCheck(L_0);
		Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * L_1;
		L_1 = InternalQuery_GetValueAsync_m611875BC39C804373A70F5E501C80A5C7394DD48(L_0, /*hidden argument*/NULL);
		Task_1_t931B58DD64B4EFD7FD4C3DD754009EEE56897087 * L_2;
		L_2 = Query_WrapInternalDataSnapshotTask_mD66B30C95FF21216495D9F24C95C388DDE50DD83(__this, L_1, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m379BA084F6E53F5B2DD49386D43DF6AF94CACF81 (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___snapshot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_0 = ___snapshot0;
		ValueChangedEventArgs_set_Snapshot_mA7EF06296508E6B5632A967C65E17F632E445A71_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m4FDC6BB1BC5E618849D97A391F097F726CE997E4 (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_0 = ___error0;
		ValueChangedEventArgs_set_DatabaseError_mF56E13C79AC85F6415ECABC7E63B0C86EB864D40_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mA7EF06296508E6B5632A967C65E17F632E445A71 (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mF56E13C79AC85F6415ECABC7E63B0C86EB864D40 (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m0F996413862002E3DD7FDD548EA24FBA1FF5AB09(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m0F996413862002E3DD7FDD548EA24FBA1FF5AB09(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mFF75740AD491554899C097E0DADC53F7BD9B648B(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_mFF75740AD491554899C097E0DADC53F7BD9B648B(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mECC442D4BA10495F1BD419C6AD29532037348E84(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mECC442D4BA10495F1BD419C6AD29532037348E84(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0A7C01CC0882A4E72DF371C5072D20C368744F41(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0A7C01CC0882A4E72DF371C5072D20C368744F41(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m3173701684EF764B16D4DAE820BD88C8A5311AC8(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m3173701684EF764B16D4DAE820BD88C8A5311AC8(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3C325A55848E3FC203DA02C6B477FD51C8467CEB(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3C325A55848E3FC203DA02C6B477FD51C8467CEB(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m37109E9C6FE3E8E0A6670C71B07FD3AA6BB87294(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m37109E9C6FE3E8E0A6670C71B07FD3AA6BB87294(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m2B27B45C6AF0D649049D2B61E4489E3A44CAA0A5(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m2B27B45C6AF0D649049D2B61E4489E3A44CAA0A5(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m1F571A4058F2A2AC6170CBBA6A3332460BE78EFE(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m1F571A4058F2A2AC6170CBBA6A3332460BE78EFE(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mD37F18C4EE97E0C708E7C336F8391E8F4C87B9CD(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mD37F18C4EE97E0C708E7C336F8391E8F4C87B9CD(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mA373DD8147413E53F25953713F3785AFCA8D4CE3(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_mA373DD8147413E53F25953713F3785AFCA8D4CE3(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m814FE6192698629E0DFBB16FEA3E3173833B47B3(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m814FE6192698629E0DFBB16FEA3E3173833B47B3(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mEDFDDC2387E881554214C5B8DE33BF35215B7042(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mEDFDDC2387E881554214C5B8DE33BF35215B7042(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA88C63402F8142B4B866BC0DD46EE47853411DC2(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA88C63402F8142B4B866BC0DD46EE47853411DC2(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m5DAD7A2AFC923954B0010750C19AD9299543845C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m0F996413862002E3DD7FDD548EA24FBA1FF5AB09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m814FE6192698629E0DFBB16FEA3E3173833B47B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mEDFDDC2387E881554214C5B8DE33BF35215B7042_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA88C63402F8142B4B866BC0DD46EE47853411DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_mFF75740AD491554899C097E0DADC53F7BD9B648B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_mECC442D4BA10495F1BD419C6AD29532037348E84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m37109E9C6FE3E8E0A6670C71B07FD3AA6BB87294_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0A7C01CC0882A4E72DF371C5072D20C368744F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m3173701684EF764B16D4DAE820BD88C8A5311AC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m3C325A55848E3FC203DA02C6B477FD51C8467CEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m2B27B45C6AF0D649049D2B61E4489E3A44CAA0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m1F571A4058F2A2AC6170CBBA6A3332460BE78EFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_mD37F18C4EE97E0C708E7C336F8391E8F4C87B9CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_mA373DD8147413E53F25953713F3785AFCA8D4CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_0 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m0F996413862002E3DD7FDD548EA24FBA1FF5AB09_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_1 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_mFF75740AD491554899C097E0DADC53F7BD9B648B_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_2 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_mECC442D4BA10495F1BD419C6AD29532037348E84_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_3 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0A7C01CC0882A4E72DF371C5072D20C368744F41_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_4 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m3173701684EF764B16D4DAE820BD88C8A5311AC8_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_5 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m3C325A55848E3FC203DA02C6B477FD51C8467CEB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_6 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m37109E9C6FE3E8E0A6670C71B07FD3AA6BB87294_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_7 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m2B27B45C6AF0D649049D2B61E4489E3A44CAA0A5_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_8 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m1F571A4058F2A2AC6170CBBA6A3332460BE78EFE_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_9 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_mD37F18C4EE97E0C708E7C336F8391E8F4C87B9CD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_10 = (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E *)il2cpp_codegen_object_new(ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_mA373DD8147413E53F25953713F3785AFCA8D4CE3_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * L_11 = (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m2218A5FD8E97C779CB0C978A08CBD7C38679900F(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m814FE6192698629E0DFBB16FEA3E3173833B47B3_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * L_12 = (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m2218A5FD8E97C779CB0C978A08CBD7C38679900F(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mEDFDDC2387E881554214C5B8DE33BF35215B7042_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * L_13 = (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m2218A5FD8E97C779CB0C978A08CBD7C38679900F(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA88C63402F8142B4B866BC0DD46EE47853411DC2_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_14 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_15 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_16 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_17 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_18 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_19 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_20 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_21 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_22 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_23 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * L_24 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_mDD5933C26B5EE8A65766383EEA892836BCE887E4(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * L_25 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * L_26 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * L_27 = ((SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m9B3FBB6656A7EF3E9ED980A8955232D994B26696(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m0ADB82550973C1BB4A57B3132C00D087565746C3 (SWIGExceptionHelper_t3445DE1ECADC3122BA9E221E39BCD55FD76AE22E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_mDD5933C26B5EE8A65766383EEA892836BCE887E4 (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___applicationDelegate0, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___arithmeticDelegate1, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___divideByZeroDelegate2, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___indexOutOfRangeDelegate3, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___invalidCastDelegate4, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___invalidOperationDelegate5, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___ioDelegate6, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___nullReferenceDelegate7, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___outOfMemoryDelegate8, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___overflowDelegate9, ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_DatabaseInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m9B3FBB6656A7EF3E9ED980A8955232D994B26696 (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentDelegate0, ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentNullDelegate1, ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_DatabaseInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m0F996413862002E3DD7FDD548EA24FBA1FF5AB09 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mFF75740AD491554899C097E0DADC53F7BD9B648B (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mECC442D4BA10495F1BD419C6AD29532037348E84 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0A7C01CC0882A4E72DF371C5072D20C368744F41 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m3173701684EF764B16D4DAE820BD88C8A5311AC8 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3C325A55848E3FC203DA02C6B477FD51C8467CEB (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m37109E9C6FE3E8E0A6670C71B07FD3AA6BB87294 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m2B27B45C6AF0D649049D2B61E4489E3A44CAA0A5 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m1F571A4058F2A2AC6170CBBA6A3332460BE78EFE (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mD37F18C4EE97E0C708E7C336F8391E8F4C87B9CD (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mA373DD8147413E53F25953713F3785AFCA8D4CE3 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m814FE6192698629E0DFBB16FEA3E3173833B47B3 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mEDFDDC2387E881554214C5B8DE33BF35215B7042 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA88C63402F8142B4B866BC0DD46EE47853411DC2 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177(L_8, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Exception_t * L_0 = ((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_5 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_mEB47FC268D105585A346BF7AD739894E30461177_RuntimeMethod_var)));
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m12D105915687E89EBB9CE8446A66F671294A828E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (DatabaseInternalPINVOKE_t1D4393E46F390744D2215B5ABDEB6BF99328B932_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t598FE8E30B9457312ECB6973A125405701E7F216_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m1B4CB3A2C3DCEF73AF006FF16442D1EEFDDB6384(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m1B4CB3A2C3DCEF73AF006FF16442D1EEFDDB6384(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m5C1032DAB951169BA2A4C1B2729ACBA3D540F066 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m1B4CB3A2C3DCEF73AF006FF16442D1EEFDDB6384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * L_0 = (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B *)il2cpp_codegen_object_new(SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m04F81FC6C90DC3A07C7BC11BC63C5D8D859FE6FE(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m1B4CB3A2C3DCEF73AF006FF16442D1EEFDDB6384_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * L_1 = ((SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m7D80EA63ED56EBDB86B4DD48B717AFC0C1D45038(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m5FCC61DE0A2198978283B58325176E9BE096021B (SWIGStringHelper_tB66B16ED5BFF2AF2C7952C1288F9659F7939B040 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m7D80EA63ED56EBDB86B4DD48B717AFC0C1D45038 (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_DatabaseInternal)(____stringDelegate0_marshaled);

}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m1B4CB3A2C3DCEF73AF006FF16442D1EEFDDB6384 (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
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
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mA788F542E33A4820FB5D5940955D9516D0C51D39 (U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mFC6340F68B8E4E596967CB4A864D6C925D5F5655 (U3CGetTaskU3Ec__AnonStorey0_t871680D4CE9F27571B0AD8F193FA1DBFDAB9093A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_mF936FEB70EF48BE9A856AD893D796F16CA38DD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mEC703BD3E8DF60DEBAD638DD1D617657FD1D7A5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m40BDB5DEA558FEF78598FC3F4B0FCADB03B2F174_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)2))))
			{
				goto IL_0021;
			}
		}

IL_0011:
		{
			TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_mF936FEB70EF48BE9A856AD893D796F16CA38DD13(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_mF936FEB70EF48BE9A856AD893D796F16CA38DD13_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0021:
		{
			Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_3 = __this->get_fu_0();
			NullCheck(L_3);
			int32_t L_4;
			L_4 = FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			int32_t L_5 = V_0;
			if (!L_5)
			{
				goto IL_0054;
			}
		}

IL_0033:
		{
			TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9;
			L_9 = FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774(L_8, /*hidden argument*/NULL);
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_mEC703BD3E8DF60DEBAD638DD1D617657FD1D7A5F(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_mEC703BD3E8DF60DEBAD638DD1D617657FD1D7A5F_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0054:
		{
			TaskCompletionSource_1_t98B3237FC25BA25DAAC9E1ED72EA4265692F02CF * L_11 = __this->get_tcs_1();
			Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_12 = __this->get_fu_0();
			NullCheck(L_12);
			InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_13;
			L_13 = Future_InternalDataSnapshot_GetResult_mB737568CE9D114E1F8464CE0F46AD7A3B0E273B3(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_m40BDB5DEA558FEF78598FC3F4B0FCADB03B2F174(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_m40BDB5DEA558FEF78598FC3F4B0FCADB03B2F174_RuntimeMethod_var);
		}

IL_006a:
		{
			goto IL_0086;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006f;
		}
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_14 = V_1;
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(4, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0086;
	} // end catch (depth: 1)

IL_0086:
	{
		Future_InternalDataSnapshot_tE50D574CB430FB94DB2113492F5A9A1079163782 * L_16 = __this->get_fu_0();
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_16);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mD4D4FE593498B18687FE8C1591C34F77F325A11A (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m1BF962C259EF45F747580BC1ACB7139C30D3D809 (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.Future_InternalDataSnapshot/Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_mE5E18243A8A7897EF1760AA7AAA461F92C50960D (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m4C0BB675CA2DA60083DCF1215151C06450D6DF07 (Action_t3C9E886ED952A5C1AC45907686BC24896CA35010 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 (SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mE0AC37E93A8DA64EBA7614EFDF0EC8177BD1EE64 (SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m703A41C6CEAB74514175A6213200DF67F6C79EBF (SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m013A3522139019F8A223CB324AEB6D969EE2F6F4 (SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m1B17CE7321E4119166B6DC80B6CD703F45B4B9B7 (SWIG_CompletionDelegate_tA8D1F511687314492DCF200EFA9141D61FE38AC1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_mFFE132800267C1A72DFBDC65B4F1F1E10FBEABE0 (U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mC2B193143B43BA821FF81A8AFDEAE4C94148690E (U3COnCancelledHandlerU3Ec__AnonStorey2_tFB771BA61C4535C22FDD7571CB2B344E36051B9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * V_0 = NULL;
	InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * V_1 = NULL;
	{
		V_0 = (EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 *)NULL;
		int32_t L_0 = __this->get_callbackId_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalChildListener_TryGetListener_m41E36427FAA5985CB8FF0F6BEADB1A1146E85A18(L_0, (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D **)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_2 = V_1;
		NullCheck(L_2);
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_3 = L_2->get_cancelledImpl_7();
		V_0 = L_3;
	}

IL_001b:
	{
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_5 = V_0;
		int32_t L_6 = __this->get_error_1();
		String_t* L_7 = __this->get_msg_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_8;
		L_8 = DatabaseError_FromError_m74CA7DACBF40FE664D4B088E9B8A615D61DC769B(L_6, L_7, /*hidden argument*/NULL);
		ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * L_9 = (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA *)il2cpp_codegen_object_new(ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_mD42C6C55669872BB1FE653538F28E73C3F9AA9BD(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424(L_5, NULL, L_9, /*hidden argument*/EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424_RuntimeMethod_var);
	}

IL_003e:
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
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_m3F0222C7469ACF362ACF082D5A7B3E95194D3FA6 (U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_m8D036E948FE5F0D8033360D715E7E2F3282DC29E (U3COnChildChangeHandlerU3Ec__AnonStorey0_tDD171971D07C89A61C52DCAEA952D60E9C3C99B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * V_0 = NULL;
	EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * V_1 = NULL;
	InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * V_2 = NULL;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_1 = (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A *)il2cpp_codegen_object_new(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mC8A7803BFA8D85177E7EFD11ABA7652B82842DAF(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 *)NULL;
		V_2 = (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalChildListener_TryGetListener_m41E36427FAA5985CB8FF0F6BEADB1A1146E85A18(L_2, (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_4 = __this->get_changeType_2();
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = __this->get_changeType_2();
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->get_changeType_2();
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0070;
	}

IL_004c:
	{
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_7 = V_2;
		NullCheck(L_7);
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_8 = L_7->get_childAddedImpl_8();
		V_1 = L_8;
		goto IL_0070;
	}

IL_0058:
	{
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_10 = L_9->get_childChangedImpl_9();
		V_1 = L_10;
		goto IL_0070;
	}

IL_0064:
	{
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_12 = L_11->get_childMovedImpl_10();
		V_1 = L_12;
		goto IL_0070;
	}

IL_0070:
	{
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_13 = V_1;
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_14 = V_1;
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_15 = V_0;
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_16 = V_2;
		NullCheck(L_16);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_17 = L_16->get_database_6();
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_18;
		L_18 = DataSnapshot_CreateSnapshot_m95E10FC734582079840902AA6B7734600FFD88E2(L_15, L_17, /*hidden argument*/NULL);
		String_t* L_19 = __this->get_previousChildName_3();
		ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * L_20 = (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA *)il2cpp_codegen_object_new(ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_mEFA05E8BE4CF521CCD301438B1D0D2AAAD4646F8(L_20, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_14);
		EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424(L_14, NULL, L_20, /*hidden argument*/EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424_RuntimeMethod_var);
		goto IL_009f;
	}

IL_0099:
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_21);
	}

IL_009f:
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
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_m7E6AE23F4E493961862651CCCDD4F7D8BC58E493 (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mAE7AAAFE60ACB5EB41753A9D7FD24987399C11FF (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t8D960BF23D5189AEDFE856329F5A308AAD97FCA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * V_0 = NULL;
	EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * V_1 = NULL;
	InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * V_2 = NULL;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_1 = (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A *)il2cpp_codegen_object_new(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mC8A7803BFA8D85177E7EFD11ABA7652B82842DAF(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 *)NULL;
		V_2 = (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalChildListener_TryGetListener_m41E36427FAA5985CB8FF0F6BEADB1A1146E85A18(L_2, (InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_4 = V_2;
		NullCheck(L_4);
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_5 = L_4->get_childRemovedImpl_11();
		V_1 = L_5;
	}

IL_002a:
	{
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		EventHandler_1_t93916DA5095F1484760C21BA33B40280D4C7F698 * L_7 = V_1;
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_8 = V_0;
		InternalChildListener_tC011D6B03432167133E2D36BE06B0AC956CCCA3D * L_9 = V_2;
		NullCheck(L_9);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_10 = L_9->get_database_6();
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_11;
		L_11 = DataSnapshot_CreateSnapshot_m95E10FC734582079840902AA6B7734600FFD88E2(L_8, L_10, /*hidden argument*/NULL);
		ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * L_12 = (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA *)il2cpp_codegen_object_new(ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_mEFA05E8BE4CF521CCD301438B1D0D2AAAD4646F8(L_12, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424(L_7, NULL, L_12, /*hidden argument*/EventHandler_1_Invoke_m91AC45C7E239BBF1DEAF7D32C7E95B7966D44424_RuntimeMethod_var);
		goto IL_0054;
	}

IL_004e:
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_13 = V_0;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_13);
	}

IL_0054:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_mAC9F991B98CED300FF2BC7902FF1DB48253E641C (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_m197A669A3FDAA0A2D46DA26EB8EF65FA2576E6AA (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.Error,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancelledDelegate_BeginInvoke_m3246E7F8127D7DF49C21627DEEF4A6D3327A12FE (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_t583B10CDBD5439637E1CF97DADFC462BF527D753_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_t583B10CDBD5439637E1CF97DADFC462BF527D753_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_EndInvoke_m305956966B7B06FB9E599C3B28D1BE19FB82A632 (OnCancelledDelegate_t40947EF3CCD2658FE2C310FA373A3F4F2F2CAE50 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E (OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___previousChildName3' to native representation
	char* ____previousChildName3_marshaled = NULL;
	____previousChildName3_marshaled = il2cpp_codegen_marshal_string(___previousChildName3);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_marshaled);

	// Marshaling cleanup of parameter '___previousChildName3' native representation
	il2cpp_codegen_marshal_free(____previousChildName3_marshaled);
	____previousChildName3_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m905FC42ABBD238AD00D4CA41B4FEA96EB9E16D23 (OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::Invoke(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_Invoke_m0E282F7DBE982B5A4A8073FA83D82002CE243355 (OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						GenericVirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						VirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChildChangeDelegate_BeginInvoke_m0F1CE19FFA21A7B95B6B3C2A581369229C0AB1EC (OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangeType_t2832ACD2CF41270724FACC1679BB51380EEB08F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(ChildChangeType_t2832ACD2CF41270724FACC1679BB51380EEB08F3_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot2);
	__d_args[3] = ___previousChildName3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_EndInvoke_m1B731E38F19BA6A18E47970D7CA0EBDCB3068575 (OnChildChangeDelegate_tB80E8A850EA35A5A4EEAABA7F4F3959DB9CC2E9E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 (OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m3DA4B6DA14D6A7733B2D3BF6F5721F7E8A811E84 (OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_Invoke_mFAE8292457FB6B629C4E6E8B500732D82762B29B (OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChildRemovedDelegate_BeginInvoke_m48FACEFA435E90F16907B5B227CF0D800958C0EF (OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_EndInvoke_m835630F0A71AC34DD23DB5D4D4591C514BC68B89 (OnChildRemovedDelegate_t23B4EEB805091F65ADC9E60B7833F218CFBEC901 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_m16DA70EA0E84751261B659883535CD3CDC442FBF (U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mDE1B11AAEBA15DBB45A24DCB6D80A3F36CB51D81 (U3COnCancelledHandlerU3Ec__AnonStorey1_t85FD14D746B05A6E73EDB25B7CCFEE542B08E6AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD9F0F6BC91CA464914467DE2F22466FAF7D61711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * V_0 = NULL;
	InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * V_1 = NULL;
	{
		V_0 = (EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 *)NULL;
		int32_t L_0 = __this->get_callbackId_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalValueListener_TryGetListener_m8D191EB665078398BE6D37D59B164BD3AF166F7E(L_0, (InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 **)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * L_2 = V_1;
		NullCheck(L_2);
		EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * L_3 = L_2->get_valueChangedImpl_7();
		V_0 = L_3;
	}

IL_001b:
	{
		EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * L_5 = V_0;
		int32_t L_6 = __this->get_error_1();
		String_t* L_7 = __this->get_msg_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8_il2cpp_TypeInfo_var);
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_8;
		L_8 = DatabaseError_FromError_m74CA7DACBF40FE664D4B088E9B8A615D61DC769B(L_6, L_7, /*hidden argument*/NULL);
		ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * L_9 = (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C *)il2cpp_codegen_object_new(ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m4FDC6BB1BC5E618849D97A391F097F726CE997E4(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_mD9F0F6BC91CA464914467DE2F22466FAF7D61711(L_5, NULL, L_9, /*hidden argument*/EventHandler_1_Invoke_mD9F0F6BC91CA464914467DE2F22466FAF7D61711_RuntimeMethod_var);
	}

IL_003e:
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
// System.Void Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_mE348CB520803C141F981FF68AD8109BB8CD9155A (U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mDB964A1EF1CA2AA7BA57124523322644BD33CFB4 (U3COnValueChangedHandlerU3Ec__AnonStorey0_t6C09F7B305988C3A32EB8B3FBDDAAAC208BF4E0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD9F0F6BC91CA464914467DE2F22466FAF7D61711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * V_0 = NULL;
	EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * V_1 = NULL;
	InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * V_2 = NULL;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_1 = (InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A *)il2cpp_codegen_object_new(InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mC8A7803BFA8D85177E7EFD11ABA7652B82842DAF(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 *)NULL;
		V_2 = (InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalValueListener_TryGetListener_m8D191EB665078398BE6D37D59B164BD3AF166F7E(L_2, (InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * L_4 = V_2;
		NullCheck(L_4);
		EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * L_5 = L_4->get_valueChangedImpl_7();
		V_1 = L_5;
	}

IL_002a:
	{
		EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		EventHandler_1_tE68E9E7629CD2155E1DD20C5D07E46CF1B3271D2 * L_7 = V_1;
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_8 = V_0;
		InternalValueListener_tB6B7AAE3D24C0231A1E226CC18AB178237E33312 * L_9 = V_2;
		NullCheck(L_9);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_10 = L_9->get_database_6();
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_11;
		L_11 = DataSnapshot_CreateSnapshot_m95E10FC734582079840902AA6B7734600FFD88E2(L_8, L_10, /*hidden argument*/NULL);
		ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * L_12 = (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C *)il2cpp_codegen_object_new(ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m379BA084F6E53F5B2DD49386D43DF6AF94CACF81(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_mD9F0F6BC91CA464914467DE2F22466FAF7D61711(L_7, NULL, L_12, /*hidden argument*/EventHandler_1_Invoke_mD9F0F6BC91CA464914467DE2F22466FAF7D61711_RuntimeMethod_var);
		goto IL_0053;
	}

IL_004d:
	{
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_13 = V_0;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_13);
	}

IL_0053:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_tB71F05EC8B3BBACF74EB566C58EEB8EA4A7135B5 (OnCancelledDelegate_tB71F05EC8B3BBACF74EB566C58EEB8EA4A7135B5 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_mAA318FB742F18120A243B47FC6D72140EEC1DE16 (OnCancelledDelegate_tB71F05EC8B3BBACF74EB566C58EEB8EA4A7135B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_m90766BC908B6716A87215FDD6AC72B618E5BAD14 (OnCancelledDelegate_tB71F05EC8B3BBACF74EB566C58EEB8EA4A7135B5 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.Error,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancelledDelegate_BeginInvoke_mD08C61418D9963286D9DC1F9CCC87759605A3BB9 (OnCancelledDelegate_tB71F05EC8B3BBACF74EB566C58EEB8EA4A7135B5 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_t583B10CDBD5439637E1CF97DADFC462BF527D753_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_t583B10CDBD5439637E1CF97DADFC462BF527D753_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_EndInvoke_mB881B5BEC7CD77CF90FB393DBEEAFAAF05DF44EF (OnCancelledDelegate_tB71F05EC8B3BBACF74EB566C58EEB8EA4A7135B5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 (OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m1E5CB914A443BBEA65327C6909B8F35834782602 (OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_Invoke_m001BBEE0573C71B012477DB670E05E5A0188A501 (OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnValueChangedDelegate_BeginInvoke_mE5F7C9F84E78214ECD0C32D76FA139EAA6A88AB8 (OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_EndInvoke_m0F55B7BE7BC79401D21D6664E953EA0EF212EA60 (OnValueChangedDelegate_t66E523D3B802E99A6B08885964ADA321A85F3444 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0__ctor_m5BA902CFC5CFE89B09B422D5F4A967CBA50CDE05 (U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::<>m__0(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_U3CU3Em__0_m22FFF028B3E9BB0B1DDCBD737A2EFEA9578B5DC0 (U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tC297FE6E7D8CE2EA691D22F0AA947B7DDF040BAF * __this, Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_CheckTaskStatus_TisDataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_m0BD48C74FC4E2777FFE0F76E1A04664DFB242143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m74C29E72B54DDDEE9833B780A78F1D4201BB2103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m238D408D4BE81829E0E4D5C073565EF0B62DA816_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * L_0 = __this->get_U24this_1();
		Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * L_1 = ___task0;
		TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * L_2 = __this->get_tcs_0();
		NullCheck(L_0);
		bool L_3;
		L_3 = Query_CheckTaskStatus_TisDataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_m0BD48C74FC4E2777FFE0F76E1A04664DFB242143(L_0, L_1, L_2, /*hidden argument*/Query_CheckTaskStatus_TisDataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D_m0BD48C74FC4E2777FFE0F76E1A04664DFB242143_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		TaskCompletionSource_1_t0191AA91EA1ABB8621B9AE6BAF286EF65E50DB27 * L_4 = __this->get_tcs_0();
		Task_1_t2CF02342842EC9BAEC044DA936E059F2108BADAB * L_5 = ___task0;
		NullCheck(L_5);
		InternalDataSnapshot_t568D80FFC578B56F60735E5CCD40C35444842A3A * L_6;
		L_6 = Task_1_get_Result_m238D408D4BE81829E0E4D5C073565EF0B62DA816(L_5, /*hidden argument*/Task_1_get_Result_m238D408D4BE81829E0E4D5C073565EF0B62DA816_RuntimeMethod_var);
		Query_t040D26D9F80119DD12A4B48ABAD1830398144B2C * L_7 = __this->get_U24this_1();
		NullCheck(L_7);
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_8 = L_7->get_database_1();
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_9;
		L_9 = DataSnapshot_CreateSnapshot_m95E10FC734582079840902AA6B7734600FFD88E2(L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		TaskCompletionSource_1_SetResult_m74C29E72B54DDDEE9833B780A78F1D4201BB2103(L_4, L_9, /*hidden argument*/TaskCompletionSource_1_SetResult_m74C29E72B54DDDEE9833B780A78F1D4201BB2103_RuntimeMethod_var);
	}

IL_0038:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m2218A5FD8E97C779CB0C978A08CBD7C38679900F (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_mEBDC0CA8F10C79F697B4597CEEFC327EB35DB726 (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m1F64DEDB3EC6328A5BA96EDEF8D80486C5F8451B (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m656951391F1A7B635CD4CAC46CDA0CB5D016CB1B (ExceptionArgumentDelegate_tAAC96DC361951DB60D42537F7BE5BBEE26731386 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m284E32D68B64BA26EA082FDEA3719C06EDEB5953 (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mE6FA5905EB58B7E24B27878A286398BB1AD60D37 (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m4BE4AFB0EE65C4EE3AD33A4446F1E2528F1BCDB4 (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m09C7BE40F9B61F679D83C70721B5C71FBF763483 (ExceptionDelegate_t515727DF058BBDC843A38ACCB3FCE9F2C8C62D2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m04F81FC6C90DC3A07C7BC11BC63C5D8D859FE6FE (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m632E7B90E5EE36D5B0BBE6EC8C9C68B6F3DC04E6 (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mEAA10B2BA061D5AC655F5DAA8604E80697F37550 (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m40BCFFDDEF5EA045528011532052C87905EA97E7 (SWIGStringDelegate_tEC83CFCF354A8CE82D4CAF132FD5AC459AE1224B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA4DE9565B9657161571B217BAD3940297B6F110C_inline (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m8B1970EEE6D0F1E90AEF6BDA0ED94F0C38F33922_inline (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m2AFF0A9E85368545CB897E95C39247301254440A_inline (ChildChangedEventArgs_t09802594379425BAB88FE6946A7812EE887147BA * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m17A129E452E44A91FB0CD1D1303C8CFF3F0793C2_inline (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Message_m54166FC06EE023916325942F18AD855E5548804F_inline (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m4C35CD0623CE87CA0D1941A7475320DF51BB25CA_inline (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_mB65407A635E3D7C51491173E3B6FA7262BC509AF_inline (DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m282D95F9AD43BBE5C0730E1EA650BF37ADFADAA2_inline (DatabaseReference_t77F184B86833D9A4C514C5EAD116D088F1BBEA9C * __this, FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mAB8EC36294084545DDF7F18AFDB2DBA696D5E037_inline (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseDatabase_get_App_m93AA2C6AE670C913DED5B495355537612429DEBD_inline (FirebaseDatabase_tF1A65E0ED193AF145CFAFF4D2A13F851118CE470 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = __this->get_U3CAppU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mAE84F30BF7A0A0D522CC280712623B53961FB98D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields*)il2cpp_codegen_static_fields_for(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var))->get_U3CAppConfigU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mA7EF06296508E6B5632A967C65E17F632E445A71_inline (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t27BF9705C3D362AC0A6D18BE34169040F7F5911D * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mF56E13C79AC85F6415ECABC7E63B0C86EB864D40_inline (ValueChangedEventArgs_tCFDF49267E5DE9B5B6420FBF6DEDBCBB7F78025C * __this, DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t18A92561B9B095955CECD2D14718AB4090A74EE8 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
