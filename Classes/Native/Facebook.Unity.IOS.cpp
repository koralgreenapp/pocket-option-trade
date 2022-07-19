#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Facebook.Unity.AuthenticationToken
struct AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Facebook.Unity.IOS.IOSWrapper
struct IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC;
// Facebook.Unity.Profile
struct Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C;
IL2CPP_EXTERN_C String_t* _stringLiteral678830C5836DCD590137DA23DA474CD589366649;
IL2CPP_EXTERN_C String_t* _stringLiteral81861CA7BE722F39376AE14F09BA19F73DB86EBF;
IL2CPP_EXTERN_C String_t* _stringLiteral84BD1476CFD81DB95A69E18C0BD3E1DE29BD872F;
IL2CPP_EXTERN_C String_t* _stringLiteral864CC40A200813B9284307874D1D3C8ACD06DE8C;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1511AE7356E5E0E5B6B5905112292E8DF67CB2;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB4E90A95CCF1967874568BF14CC0DD2FBA9D0D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7F2EA94F25E42499DF1BBEA8E07B2BB10492332;
IL2CPP_EXTERN_C String_t* _stringLiteralFB93E07C14A0B1974E643326E4D9D107C343190E;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE99B2CEAB78B45B3348A522FDB8A8F641C8AB4DE 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Facebook.Unity.AuthenticationToken
struct AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.AuthenticationToken::<TokenString>k__BackingField
	String_t* ___U3CTokenStringU3Ek__BackingField_0;
	// System.String Facebook.Unity.AuthenticationToken::<Nonce>k__BackingField
	String_t* ___U3CNonceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTokenStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215, ___U3CTokenStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CTokenStringU3Ek__BackingField_0() const { return ___U3CTokenStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTokenStringU3Ek__BackingField_0() { return &___U3CTokenStringU3Ek__BackingField_0; }
	inline void set_U3CTokenStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CTokenStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenStringU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNonceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215, ___U3CNonceU3Ek__BackingField_1)); }
	inline String_t* get_U3CNonceU3Ek__BackingField_1() const { return ___U3CNonceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNonceU3Ek__BackingField_1() { return &___U3CNonceU3Ek__BackingField_1; }
	inline void set_U3CNonceU3Ek__BackingField_1(String_t* value)
	{
		___U3CNonceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNonceU3Ek__BackingField_1), (void*)value);
	}
};


// Facebook.Unity.IOS.IOSWrapper
struct IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.Profile
struct Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.Profile::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_0;
	// System.String Facebook.Unity.Profile::<FirstName>k__BackingField
	String_t* ___U3CFirstNameU3Ek__BackingField_1;
	// System.String Facebook.Unity.Profile::<MiddleName>k__BackingField
	String_t* ___U3CMiddleNameU3Ek__BackingField_2;
	// System.String Facebook.Unity.Profile::<LastName>k__BackingField
	String_t* ___U3CLastNameU3Ek__BackingField_3;
	// System.String Facebook.Unity.Profile::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.String Facebook.Unity.Profile::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_5;
	// System.String Facebook.Unity.Profile::<ImageURL>k__BackingField
	String_t* ___U3CImageURLU3Ek__BackingField_6;
	// System.String Facebook.Unity.Profile::<LinkURL>k__BackingField
	String_t* ___U3CLinkURLU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CUserIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979, ___U3CUserIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CUserIDU3Ek__BackingField_0() const { return ___U3CUserIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUserIDU3Ek__BackingField_0() { return &___U3CUserIDU3Ek__BackingField_0; }
	inline void set_U3CUserIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CUserIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFirstNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979, ___U3CFirstNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CFirstNameU3Ek__BackingField_1() const { return ___U3CFirstNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFirstNameU3Ek__BackingField_1() { return &___U3CFirstNameU3Ek__BackingField_1; }
	inline void set_U3CFirstNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CFirstNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFirstNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMiddleNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979, ___U3CMiddleNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CMiddleNameU3Ek__BackingField_2() const { return ___U3CMiddleNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMiddleNameU3Ek__BackingField_2() { return &___U3CMiddleNameU3Ek__BackingField_2; }
	inline void set_U3CMiddleNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CMiddleNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMiddleNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979, ___U3CLastNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CLastNameU3Ek__BackingField_3() const { return ___U3CLastNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CLastNameU3Ek__BackingField_3() { return &___U3CLastNameU3Ek__BackingField_3; }
	inline void set_U3CLastNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CLastNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979, ___U3CNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameU3Ek__BackingField_4() const { return ___U3CNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_4() { return &___U3CNameU3Ek__BackingField_4; }
	inline void set_U3CNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEmailU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979, ___U3CEmailU3Ek__BackingField_5)); }
	inline String_t* get_U3CEmailU3Ek__BackingField_5() const { return ___U3CEmailU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CEmailU3Ek__BackingField_5() { return &___U3CEmailU3Ek__BackingField_5; }
	inline void set_U3CEmailU3Ek__BackingField_5(String_t* value)
	{
		___U3CEmailU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEmailU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageURLU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979, ___U3CImageURLU3Ek__BackingField_6)); }
	inline String_t* get_U3CImageURLU3Ek__BackingField_6() const { return ___U3CImageURLU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CImageURLU3Ek__BackingField_6() { return &___U3CImageURLU3Ek__BackingField_6; }
	inline void set_U3CImageURLU3Ek__BackingField_6(String_t* value)
	{
		___U3CImageURLU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageURLU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLinkURLU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979, ___U3CLinkURLU3Ek__BackingField_7)); }
	inline String_t* get_U3CLinkURLU3Ek__BackingField_7() const { return ___U3CLinkURLU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CLinkURLU3Ek__BackingField_7() { return &___U3CLinkURLU3Ek__BackingField_7; }
	inline void set_U3CLinkURLU3Ek__BackingField_7(String_t* value)
	{
		___U3CLinkURLU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLinkURLU3Ek__BackingField_7), (void*)value);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBInit(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBInit_m037F49E941382F2FD477139C93BA84B778147827 (String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLoginWithTrackingPreference(System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLoginWithTrackingPreference_m22534DBB0024DC0993950A664CA9A9E1497C68BD (int32_t ___requestId0, String_t* ___scope1, String_t* ___tracking2, String_t* ___nonce3, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogInWithReadPermissions(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogInWithReadPermissions_mD6D038B0C96863722C59F091DADB0A562474EF37 (int32_t ___requestId0, String_t* ___scope1, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogInWithPublishPermissions(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogInWithPublishPermissions_m09D0FCAF197F7A573DC2D2A443D4AFE529A92E30 (int32_t ___requestId0, String_t* ___scope1, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogOut_m1CEB6CF4915570DA6B53A36ECB82FB7E119A130A (const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetPushNotificationsDeviceTokenString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetPushNotificationsDeviceTokenString_mE2A338336F40B072CAEEF13EABF6AF2F1FA13DA7 (String_t* ___token0, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetShareDialogMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetShareDialogMode_mE6E934E0A8350F2392E0EA3D78BFDCDC13E671E8 (int32_t ___mode0, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBShareLink(System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBShareLink_m553CEB21DE0E8E95B8F79C0468A99079F7BED7E7 (int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBFeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBFeedShare_m1A375ECB87CE8EC88AA58043D4F9C256E8499234 (int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppRequest_mD69DDE3872087786629E57AF6FAEF2D1F881C7F8 (int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBOpenGamingServicesFriendFinder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBOpenGamingServicesFriendFinder_mCFFE40E92109541328B8FC598CA0A68F3DA21E3D (int32_t ___requestID0, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsActivateApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsActivateApp_m522F9036F9E8A4EED19FA91C96714B90E12A8C85 (const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsLogEvent_mF3A3BAD0DF82C6AB0BE32FC9FD98409C305DC33F (String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals4, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsLogPurchase_m46C5AF4354263CCCA8477EFEAFE6D179F7C7FAC1 (double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals4, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsSetLimitEventUsage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsSetLimitEventUsage_m24474A968DA87CAAE8637279F0BD2757794E936A (bool ___limitEventUsage0, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAutoLogAppEventsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAutoLogAppEventsEnabled_m2EFB8AB3EB9374735B25AF22E9C64BFAD669BD40 (bool ___autoLogAppEventsEnabled0, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAdvertiserIDCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAdvertiserIDCollectionEnabled_mA9BFCAC14F6A773A4F5CE2D92000812CD79D331C (bool ___advertiserIDCollectionEnabledID0, const RuntimeMethod* method);
// System.Boolean Facebook.Unity.IOS.IOSWrapper::IOSFBAdvertiserTrackingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWrapper_IOSFBAdvertiserTrackingEnabled_m13DE9B83C434C8CBC0D3DBB005816271B20DD524 (bool ___advertiserTrackingEnabled0, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBGetAppLink(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBGetAppLink_mD831E85D38D380AE0555219B724D214FE193C966 (int32_t ___requestID0, const RuntimeMethod* method);
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBSdkVersion_mAF99D64C391E86E26DBF4CB2E93EB610EDBCB93E (const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetUserID_m744BA6DD8199E64900AE14EDA87C6C4CD5F60EDF (String_t* ___userID0, const RuntimeMethod* method);
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBGetUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBGetUserID_m8F8ABB090825D49CAB7CC38BC5DC9662B51AF39F (const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBUpdateUserProperties(System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUpdateUserProperties_mDC9F1D563E0160C1C03F0DE9BBAAFF88D2F90022 (int32_t ___numParams0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals2, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetDataProcessingOptions(System.String[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetDataProcessingOptions_mFA65F906910152AE38DF613E18F4A60716E612EC (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___options0, int32_t ___numOptions1, int32_t ___country2, int32_t ___state3, const RuntimeMethod* method);
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBCurrentAuthenticationToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBCurrentAuthenticationToken_m2734D92A741B27D9851364C734EFBA93CEC754E5 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.String> Facebook.Unity.Utilities::ParseStringDictionaryFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utilities_ParseStringDictionaryFromString_mF9A13BF3A0FCBDB7036721CAE4B925CFE6182AF0 (String_t* ___input0, const RuntimeMethod* method);
// System.Void Facebook.Unity.AuthenticationToken::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationToken__ctor_m582B8C72C50CD0B411857B7570F8AE7A908811B3 (AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215 * __this, String_t* ___tokenString0, String_t* ___nonce1, const RuntimeMethod* method);
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBCurrentProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBCurrentProfile_m1D5E1C7B664F545F153EF15212E4E3E70E7284E1 (const RuntimeMethod* method);
// System.Void Facebook.Unity.Profile::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profile__ctor_m0CFE2B418C4D535114807B5E737E9D0FE59A383C (Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979 * __this, String_t* ___userID0, String_t* ___firstName1, String_t* ___middleName2, String_t* ___lastName3, String_t* ___name4, String_t* ___email5, String_t* ___imageURL6, String_t* ___linkURL7, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBUploadImageToMediaLibrary(System.Int32,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUploadImageToMediaLibrary_mC44210C6B232492985CDE1E547197CF2650B3017 (int32_t ___requestID0, String_t* ___caption1, String_t* ___imageUri2, bool ___shouldLaunchMediaDialog3, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBUploadVideoToMediaLibrary(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUploadVideoToMediaLibrary_m4790CC6C43F426503AB9EC7EA689CDE7968BB87B (int32_t ___requestID0, String_t* ___caption1, String_t* ___videoUri2, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBFetchDeferredAppLink(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBFetchDeferredAppLink_mB3864E606FABFDA01AD232A0D06800D4DFC84F2B (int32_t ___requestID0, const RuntimeMethod* method);
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBRefreshCurrentAccessToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBRefreshCurrentAccessToken_m4305641AE6021D8A26EDF424C2D89F8BF78A4000 (int32_t ___requestID0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBInit(char*, int32_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBLogInWithReadPermissions(int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBLoginWithTrackingPreference(int32_t, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBLogInWithPublishPermissions(int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBLogOut();
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBSetPushNotificationsDeviceTokenString(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBSetShareDialogMode(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBShareLink(int32_t, char*, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBFeedShare(int32_t, char*, char*, char*, char*, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppRequest(int32_t, char*, char*, char*, char**, int32_t, char*, char**, int32_t, int32_t, int32_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppEventsActivateApp();
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppEventsLogEvent(char*, double, int32_t, char**, char**);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppEventsLogPurchase(double, char*, int32_t, char**, char**);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAppEventsSetLimitEventUsage(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAutoLogAppEventsEnabled(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBAdvertiserIDCollectionEnabled(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IOSFBAdvertiserTrackingEnabled(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBGetAppLink(int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL IOSFBSdkVersion();
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBFetchDeferredAppLink(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBRefreshCurrentAccessToken(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBSetUserID(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBOpenGamingServicesFriendFinder(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBUploadImageToMediaLibrary(int32_t, char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBUploadVideoToMediaLibrary(int32_t, char*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL IOSFBGetUserID();
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBSetDataProcessingOptions(char**, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL IOSFBUpdateUserProperties(int32_t, char**, char**);
IL2CPP_EXTERN_C char* DEFAULT_CALL IOSFBCurrentAuthenticationToken();
IL2CPP_EXTERN_C char* DEFAULT_CALL IOSFBCurrentProfile();
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
// System.Void Facebook.Unity.IOS.IOSWrapper::Init(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_Init_m9A345491950DAB5D783C44708A26D5114022B1B2 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___appId0;
		bool L_1 = ___frictionlessRequests1;
		String_t* L_2 = ___urlSuffix2;
		String_t* L_3 = ___unityUserAgentSuffix3;
		IOSWrapper_IOSFBInit_m037F49E941382F2FD477139C93BA84B778147827(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::LoginWithTrackingPreference(System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LoginWithTrackingPreference_mACC496EADD1A470F2C68D6B3B8F918439A0E0831 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, String_t* ___scope1, String_t* ___tracking2, String_t* ___nonce3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		String_t* L_1 = ___scope1;
		String_t* L_2 = ___tracking2;
		String_t* L_3 = ___nonce3;
		IOSWrapper_IOSFBLoginWithTrackingPreference_m22534DBB0024DC0993950A664CA9A9E1497C68BD(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::LogInWithReadPermissions(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogInWithReadPermissions_mFEF9430E7DD0321111F19B9EC3BF08857C1AA92D (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, String_t* ___scope1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		String_t* L_1 = ___scope1;
		IOSWrapper_IOSFBLogInWithReadPermissions_mD6D038B0C96863722C59F091DADB0A562474EF37(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::LogInWithPublishPermissions(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogInWithPublishPermissions_m703CB5F53B4F1C221F648E64CA69D9172C0B0637 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, String_t* ___scope1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		String_t* L_1 = ___scope1;
		IOSWrapper_IOSFBLogInWithPublishPermissions_m09D0FCAF197F7A573DC2D2A443D4AFE529A92E30(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::LogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogOut_m5A906794E232C29AE17595005ECD12D0ECA7376A (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, const RuntimeMethod* method)
{
	{
		IOSWrapper_IOSFBLogOut_m1CEB6CF4915570DA6B53A36ECB82FB7E119A130A(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::SetPushNotificationsDeviceTokenString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_SetPushNotificationsDeviceTokenString_m5A1D3A41563D185232658CEB94CF5F170B2337B7 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, String_t* ___token0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___token0;
		IOSWrapper_IOSFBSetPushNotificationsDeviceTokenString_mE2A338336F40B072CAEEF13EABF6AF2F1FA13DA7(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::SetShareDialogMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_SetShareDialogMode_m19D7E2EB21D924C1F6EFA79DD2635A63EDAA9DFC (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode0;
		IOSWrapper_IOSFBSetShareDialogMode_mE6E934E0A8350F2392E0EA3D78BFDCDC13E671E8(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::ShareLink(System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_ShareLink_m459852FE143118D535BE57A2073C0828A43881AA (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		String_t* L_1 = ___contentURL1;
		String_t* L_2 = ___contentTitle2;
		String_t* L_3 = ___contentDescription3;
		String_t* L_4 = ___photoURL4;
		IOSWrapper_IOSFBShareLink_m553CEB21DE0E8E95B8F79C0468A99079F7BED7E7(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::FeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FeedShare_mEC9FE44596C2323BEB42545672D63508AFC2C1A0 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		String_t* L_1 = ___toId1;
		String_t* L_2 = ___link2;
		String_t* L_3 = ___linkName3;
		String_t* L_4 = ___linkCaption4;
		String_t* L_5 = ___linkDescription5;
		String_t* L_6 = ___picture6;
		String_t* L_7 = ___mediaSource7;
		IOSWrapper_IOSFBFeedShare_m1A375ECB87CE8EC88AA58043D4F9C256E8499234(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::AppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_AppRequest_m8E3B2C81D41FF66D3273DC7B4D71EBA06C081869 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		String_t* L_1 = ___message1;
		String_t* L_2 = ___actionType2;
		String_t* L_3 = ___objectId3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___to4;
		int32_t L_5 = ___toLength5;
		String_t* L_6 = ___filters6;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___excludeIds7;
		int32_t L_8 = ___excludeIdsLength8;
		bool L_9 = ___hasMaxRecipients9;
		int32_t L_10 = ___maxRecipients10;
		String_t* L_11 = ___data11;
		String_t* L_12 = ___title12;
		IOSWrapper_IOSFBAppRequest_mD69DDE3872087786629E57AF6FAEF2D1F881C7F8(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::OpenFriendFinderDialog(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_OpenFriendFinderDialog_mEF8F50944D08170FD175F264D4D954FAAD7AEFAD (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		IOSWrapper_IOSFBOpenGamingServicesFriendFinder_mCFFE40E92109541328B8FC598CA0A68F3DA21E3D(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::FBAppEventsActivateApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBAppEventsActivateApp_m10304714B738D547C9FCB77FA5CBD90F444964CB (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, const RuntimeMethod* method)
{
	{
		IOSWrapper_IOSFBAppEventsActivateApp_m522F9036F9E8A4EED19FA91C96714B90E12A8C85(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::LogAppEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogAppEvent_m1FB503D3579187B1EA2DFB58A78D86C6331E9C77 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___logEvent0;
		double L_1 = ___valueToSum1;
		int32_t L_2 = ___numParams2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___paramKeys3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___paramVals4;
		IOSWrapper_IOSFBAppEventsLogEvent_mF3A3BAD0DF82C6AB0BE32FC9FD98409C305DC33F(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::LogPurchaseAppEvent(System.Double,System.String,System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_LogPurchaseAppEvent_mE66B96C32FF805B3C7FA591B38EAFDDBA7E5CAF7 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals4, const RuntimeMethod* method)
{
	{
		double L_0 = ___logPurchase0;
		String_t* L_1 = ___currency1;
		int32_t L_2 = ___numParams2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___paramKeys3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___paramVals4;
		IOSWrapper_IOSFBAppEventsLogPurchase_m46C5AF4354263CCCA8477EFEAFE6D179F7C7FAC1(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::FBAppEventsSetLimitEventUsage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBAppEventsSetLimitEventUsage_m5955FDB2D6F7911128660102277C2A57CC16C78F (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, bool ___limitEventUsage0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___limitEventUsage0;
		IOSWrapper_IOSFBAppEventsSetLimitEventUsage_m24474A968DA87CAAE8637279F0BD2757794E936A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::FBAutoLogAppEventsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBAutoLogAppEventsEnabled_mF0D08388AD5102A2FE68796FFE20888649F32320 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, bool ___autoLogAppEventsEnabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___autoLogAppEventsEnabled0;
		IOSWrapper_IOSFBAutoLogAppEventsEnabled_m2EFB8AB3EB9374735B25AF22E9C64BFAD669BD40(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::FBAdvertiserIDCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBAdvertiserIDCollectionEnabled_m1D14CE947ECFA6527793265C37669F2E8DBC8297 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, bool ___advertiserIDCollectionEnabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___advertiserIDCollectionEnabled0;
		IOSWrapper_IOSFBAdvertiserIDCollectionEnabled_mA9BFCAC14F6A773A4F5CE2D92000812CD79D331C(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.Unity.IOS.IOSWrapper::FBAdvertiserTrackingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWrapper_FBAdvertiserTrackingEnabled_m05FBB65EBFEB1D9085D5D010077DA5691A4C7CA6 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, bool ___advertiserTrackingEnabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___advertiserTrackingEnabled0;
		bool L_1;
		L_1 = IOSWrapper_IOSFBAdvertiserTrackingEnabled_m13DE9B83C434C8CBC0D3DBB005816271B20DD524(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::GetAppLink(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_GetAppLink_m0E52DD73409091AAAAB97670F84C7E7E78539919 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		IOSWrapper_IOSFBGetAppLink_mD831E85D38D380AE0555219B724D214FE193C966(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.Unity.IOS.IOSWrapper::FBSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_FBSdkVersion_mE96D60394C52C371F9075A369F4C8E436C8EC1D4 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = IOSWrapper_IOSFBSdkVersion_mAF99D64C391E86E26DBF4CB2E93EB610EDBCB93E(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::FBSetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FBSetUserID_m9ED8FC9DC8ACA543BDEFB1243D4932EB19C1A519 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, String_t* ___userID0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___userID0;
		IOSWrapper_IOSFBSetUserID_m744BA6DD8199E64900AE14EDA87C6C4CD5F60EDF(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.Unity.IOS.IOSWrapper::FBGetUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_FBGetUserID_m8112086AC524D3FE11A03010F6FC0BD055612931 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = IOSWrapper_IOSFBGetUserID_m8F8ABB090825D49CAB7CC38BC5DC9662B51AF39F(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::UpdateUserProperties(System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_UpdateUserProperties_mEE22B5EBD3D7198E7F53310DC86365F3B328BD88 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___numParams0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___numParams0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___paramKeys1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___paramVals2;
		IOSWrapper_IOSFBUpdateUserProperties_mDC9F1D563E0160C1C03F0DE9BBAAFF88D2F90022(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::SetDataProcessingOptions(System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_SetDataProcessingOptions_mD49AC0D147F51547BDDAA6BC685202F2D3DD21BC (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___options0, int32_t ___country1, int32_t ___state2, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___options0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___options0;
		NullCheck(L_1);
		int32_t L_2 = ___country1;
		int32_t L_3 = ___state2;
		IOSWrapper_IOSFBSetDataProcessingOptions_mFA65F906910152AE38DF613E18F4A60716E612EC(L_0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.Unity.AuthenticationToken Facebook.Unity.IOS.IOSWrapper::CurrentAuthenticationToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215 * IOSWrapper_CurrentAuthenticationToken_mD08E5242EAB8FD64DB2DAFFD855367664392D393 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB4E90A95CCF1967874568BF14CC0DD2FBA9D0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB93E07C14A0B1974E643326E4D9D107C343190E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215 * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		String_t* L_0;
		L_0 = IOSWrapper_IOSFBCurrentAuthenticationToken_m2734D92A741B27D9851364C734EFBA93CEC754E5(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215 *)NULL;
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = Utilities_ParseStringDictionaryFromString_mF9A13BF3A0FCBDB7036721CAE4B925CFE6182AF0(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = L_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_5, _stringLiteralDFB4E90A95CCF1967874568BF14CC0DD2FBA9D0D, (String_t**)(&V_1));
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_5, _stringLiteralFB93E07C14A0B1974E643326E4D9D107C343190E, (String_t**)(&V_2));
		String_t* L_8 = V_1;
		String_t* L_9 = V_2;
		AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215 * L_10 = (AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215 *)il2cpp_codegen_object_new(AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215_il2cpp_TypeInfo_var);
		AuthenticationToken__ctor_m582B8C72C50CD0B411857B7570F8AE7A908811B3(L_10, L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = (AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215 *)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		AuthenticationToken_t77405A31AE5D114FA45948BDC237A2FA41C9E215 * L_11 = V_3;
		return L_11;
	}
}
// Facebook.Unity.Profile Facebook.Unity.IOS.IOSWrapper::CurrentProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979 * IOSWrapper_CurrentProfile_mB09F2240F560A2416A5FD65980B8E309038A1D40 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral678830C5836DCD590137DA23DA474CD589366649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81861CA7BE722F39376AE14F09BA19F73DB86EBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD1476CFD81DB95A69E18C0BD3E1DE29BD872F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral864CC40A200813B9284307874D1D3C8ACD06DE8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1511AE7356E5E0E5B6B5905112292E8DF67CB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7F2EA94F25E42499DF1BBEA8E07B2BB10492332);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979 * V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		String_t* L_0;
		L_0 = IOSWrapper_IOSFBCurrentProfile_m1D5E1C7B664F545F153EF15212E4E3E70E7284E1(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979 *)NULL;
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = Utilities_ParseStringDictionaryFromString_mF9A13BF3A0FCBDB7036721CAE4B925CFE6182AF0(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = L_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_5, _stringLiteralF7F2EA94F25E42499DF1BBEA8E07B2BB10492332, (String_t**)(&V_1));
		RuntimeObject* L_7 = L_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_7, _stringLiteralCA1511AE7356E5E0E5B6B5905112292E8DF67CB2, (String_t**)(&V_2));
		RuntimeObject* L_9 = L_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_9, _stringLiteral864CC40A200813B9284307874D1D3C8ACD06DE8C, (String_t**)(&V_3));
		RuntimeObject* L_11 = L_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_11, _stringLiteral678830C5836DCD590137DA23DA474CD589366649, (String_t**)(&V_4));
		RuntimeObject* L_13 = L_11;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_13, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, (String_t**)(&V_5));
		RuntimeObject* L_15 = L_13;
		NullCheck(L_15);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_15, _stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C, (String_t**)(&V_6));
		RuntimeObject* L_17 = L_15;
		NullCheck(L_17);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_17, _stringLiteral84BD1476CFD81DB95A69E18C0BD3E1DE29BD872F, (String_t**)(&V_7));
		NullCheck(L_17);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_17, _stringLiteral81861CA7BE722F39376AE14F09BA19F73DB86EBF, (String_t**)(&V_8));
		String_t* L_20 = V_1;
		String_t* L_21 = V_2;
		String_t* L_22 = V_3;
		String_t* L_23 = V_4;
		String_t* L_24 = V_5;
		String_t* L_25 = V_6;
		String_t* L_26 = V_7;
		String_t* L_27 = V_8;
		Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979 * L_28 = (Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979 *)il2cpp_codegen_object_new(Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979_il2cpp_TypeInfo_var);
		Profile__ctor_m0CFE2B418C4D535114807B5E737E9D0FE59A383C(L_28, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_9 = L_28;
		goto IL_00a2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009c;
		}
		throw e;
	}

CATCH_009c:
	{ // begin catch(System.Exception)
		V_9 = (Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979 *)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a2;
	} // end catch (depth: 1)

IL_00a2:
	{
		Profile_t3283817BCFBD3D12AA6D91FF69280C6620BBD979 * L_29 = V_9;
		return L_29;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::UploadImageToMediaLibrary(System.Int32,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_UploadImageToMediaLibrary_m40D491A6B53C43367729DD140C2F3B0884EC3446 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, String_t* ___caption1, String_t* ___imageUri2, bool ___shouldLaunchMediaDialog3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		String_t* L_1 = ___caption1;
		String_t* L_2 = ___imageUri2;
		bool L_3 = ___shouldLaunchMediaDialog3;
		IOSWrapper_IOSFBUploadImageToMediaLibrary_mC44210C6B232492985CDE1E547197CF2650B3017(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::UploadVideoToMediaLibrary(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_UploadVideoToMediaLibrary_mDE8BAAC210AEA9FA344EB16540C3F4D4BF08AC09 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, String_t* ___caption1, String_t* ___videoUri2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		String_t* L_1 = ___caption1;
		String_t* L_2 = ___videoUri2;
		IOSWrapper_IOSFBUploadVideoToMediaLibrary_m4790CC6C43F426503AB9EC7EA689CDE7968BB87B(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::FetchDeferredAppLink(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_FetchDeferredAppLink_m5FD6EDA29B511954E47ADDFD48CA5D2EC49E7842 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		IOSWrapper_IOSFBFetchDeferredAppLink_mB3864E606FABFDA01AD232A0D06800D4DFC84F2B(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::RefreshCurrentAccessToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_RefreshCurrentAccessToken_m934E29B797AFC2C479A1966E8F9A49D0F53A65AD (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___requestId0;
		IOSWrapper_IOSFBRefreshCurrentAccessToken_m4305641AE6021D8A26EDF424C2D89F8BF78A4000(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBInit(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBInit_m037F49E941382F2FD477139C93BA84B778147827 (String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, char*, char*);

	// Marshaling of parameter '___appId0' to native representation
	char* ____appId0_marshaled = NULL;
	____appId0_marshaled = il2cpp_codegen_marshal_string(___appId0);

	// Marshaling of parameter '___urlSuffix2' to native representation
	char* ____urlSuffix2_marshaled = NULL;
	____urlSuffix2_marshaled = il2cpp_codegen_marshal_string(___urlSuffix2);

	// Marshaling of parameter '___unityUserAgentSuffix3' to native representation
	char* ____unityUserAgentSuffix3_marshaled = NULL;
	____unityUserAgentSuffix3_marshaled = il2cpp_codegen_marshal_string(___unityUserAgentSuffix3);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBInit)(____appId0_marshaled, static_cast<int32_t>(___frictionlessRequests1), ____urlSuffix2_marshaled, ____unityUserAgentSuffix3_marshaled);

	// Marshaling cleanup of parameter '___appId0' native representation
	il2cpp_codegen_marshal_free(____appId0_marshaled);
	____appId0_marshaled = NULL;

	// Marshaling cleanup of parameter '___urlSuffix2' native representation
	il2cpp_codegen_marshal_free(____urlSuffix2_marshaled);
	____urlSuffix2_marshaled = NULL;

	// Marshaling cleanup of parameter '___unityUserAgentSuffix3' native representation
	il2cpp_codegen_marshal_free(____unityUserAgentSuffix3_marshaled);
	____unityUserAgentSuffix3_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogInWithReadPermissions(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogInWithReadPermissions_mD6D038B0C96863722C59F091DADB0A562474EF37 (int32_t ___requestId0, String_t* ___scope1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___scope1' to native representation
	char* ____scope1_marshaled = NULL;
	____scope1_marshaled = il2cpp_codegen_marshal_string(___scope1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBLogInWithReadPermissions)(___requestId0, ____scope1_marshaled);

	// Marshaling cleanup of parameter '___scope1' native representation
	il2cpp_codegen_marshal_free(____scope1_marshaled);
	____scope1_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLoginWithTrackingPreference(System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLoginWithTrackingPreference_m22534DBB0024DC0993950A664CA9A9E1497C68BD (int32_t ___requestId0, String_t* ___scope1, String_t* ___tracking2, String_t* ___nonce3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*);

	// Marshaling of parameter '___scope1' to native representation
	char* ____scope1_marshaled = NULL;
	____scope1_marshaled = il2cpp_codegen_marshal_string(___scope1);

	// Marshaling of parameter '___tracking2' to native representation
	char* ____tracking2_marshaled = NULL;
	____tracking2_marshaled = il2cpp_codegen_marshal_string(___tracking2);

	// Marshaling of parameter '___nonce3' to native representation
	char* ____nonce3_marshaled = NULL;
	____nonce3_marshaled = il2cpp_codegen_marshal_string(___nonce3);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBLoginWithTrackingPreference)(___requestId0, ____scope1_marshaled, ____tracking2_marshaled, ____nonce3_marshaled);

	// Marshaling cleanup of parameter '___scope1' native representation
	il2cpp_codegen_marshal_free(____scope1_marshaled);
	____scope1_marshaled = NULL;

	// Marshaling cleanup of parameter '___tracking2' native representation
	il2cpp_codegen_marshal_free(____tracking2_marshaled);
	____tracking2_marshaled = NULL;

	// Marshaling cleanup of parameter '___nonce3' native representation
	il2cpp_codegen_marshal_free(____nonce3_marshaled);
	____nonce3_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogInWithPublishPermissions(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogInWithPublishPermissions_m09D0FCAF197F7A573DC2D2A443D4AFE529A92E30 (int32_t ___requestId0, String_t* ___scope1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___scope1' to native representation
	char* ____scope1_marshaled = NULL;
	____scope1_marshaled = il2cpp_codegen_marshal_string(___scope1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBLogInWithPublishPermissions)(___requestId0, ____scope1_marshaled);

	// Marshaling cleanup of parameter '___scope1' native representation
	il2cpp_codegen_marshal_free(____scope1_marshaled);
	____scope1_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBLogOut_m1CEB6CF4915570DA6B53A36ECB82FB7E119A130A (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBLogOut)();

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetPushNotificationsDeviceTokenString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetPushNotificationsDeviceTokenString_mE2A338336F40B072CAEEF13EABF6AF2F1FA13DA7 (String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___token0' to native representation
	char* ____token0_marshaled = NULL;
	____token0_marshaled = il2cpp_codegen_marshal_string(___token0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBSetPushNotificationsDeviceTokenString)(____token0_marshaled);

	// Marshaling cleanup of parameter '___token0' native representation
	il2cpp_codegen_marshal_free(____token0_marshaled);
	____token0_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetShareDialogMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetShareDialogMode_mE6E934E0A8350F2392E0EA3D78BFDCDC13E671E8 (int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBSetShareDialogMode)(___mode0);

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBShareLink(System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBShareLink_m553CEB21DE0E8E95B8F79C0468A99079F7BED7E7 (int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*);

	// Marshaling of parameter '___contentURL1' to native representation
	char* ____contentURL1_marshaled = NULL;
	____contentURL1_marshaled = il2cpp_codegen_marshal_string(___contentURL1);

	// Marshaling of parameter '___contentTitle2' to native representation
	char* ____contentTitle2_marshaled = NULL;
	____contentTitle2_marshaled = il2cpp_codegen_marshal_string(___contentTitle2);

	// Marshaling of parameter '___contentDescription3' to native representation
	char* ____contentDescription3_marshaled = NULL;
	____contentDescription3_marshaled = il2cpp_codegen_marshal_string(___contentDescription3);

	// Marshaling of parameter '___photoURL4' to native representation
	char* ____photoURL4_marshaled = NULL;
	____photoURL4_marshaled = il2cpp_codegen_marshal_string(___photoURL4);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBShareLink)(___requestId0, ____contentURL1_marshaled, ____contentTitle2_marshaled, ____contentDescription3_marshaled, ____photoURL4_marshaled);

	// Marshaling cleanup of parameter '___contentURL1' native representation
	il2cpp_codegen_marshal_free(____contentURL1_marshaled);
	____contentURL1_marshaled = NULL;

	// Marshaling cleanup of parameter '___contentTitle2' native representation
	il2cpp_codegen_marshal_free(____contentTitle2_marshaled);
	____contentTitle2_marshaled = NULL;

	// Marshaling cleanup of parameter '___contentDescription3' native representation
	il2cpp_codegen_marshal_free(____contentDescription3_marshaled);
	____contentDescription3_marshaled = NULL;

	// Marshaling cleanup of parameter '___photoURL4' native representation
	il2cpp_codegen_marshal_free(____photoURL4_marshaled);
	____photoURL4_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBFeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBFeedShare_m1A375ECB87CE8EC88AA58043D4F9C256E8499234 (int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*, char*, char*, char*);

	// Marshaling of parameter '___toId1' to native representation
	char* ____toId1_marshaled = NULL;
	____toId1_marshaled = il2cpp_codegen_marshal_string(___toId1);

	// Marshaling of parameter '___link2' to native representation
	char* ____link2_marshaled = NULL;
	____link2_marshaled = il2cpp_codegen_marshal_string(___link2);

	// Marshaling of parameter '___linkName3' to native representation
	char* ____linkName3_marshaled = NULL;
	____linkName3_marshaled = il2cpp_codegen_marshal_string(___linkName3);

	// Marshaling of parameter '___linkCaption4' to native representation
	char* ____linkCaption4_marshaled = NULL;
	____linkCaption4_marshaled = il2cpp_codegen_marshal_string(___linkCaption4);

	// Marshaling of parameter '___linkDescription5' to native representation
	char* ____linkDescription5_marshaled = NULL;
	____linkDescription5_marshaled = il2cpp_codegen_marshal_string(___linkDescription5);

	// Marshaling of parameter '___picture6' to native representation
	char* ____picture6_marshaled = NULL;
	____picture6_marshaled = il2cpp_codegen_marshal_string(___picture6);

	// Marshaling of parameter '___mediaSource7' to native representation
	char* ____mediaSource7_marshaled = NULL;
	____mediaSource7_marshaled = il2cpp_codegen_marshal_string(___mediaSource7);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBFeedShare)(___requestId0, ____toId1_marshaled, ____link2_marshaled, ____linkName3_marshaled, ____linkCaption4_marshaled, ____linkDescription5_marshaled, ____picture6_marshaled, ____mediaSource7_marshaled);

	// Marshaling cleanup of parameter '___toId1' native representation
	il2cpp_codegen_marshal_free(____toId1_marshaled);
	____toId1_marshaled = NULL;

	// Marshaling cleanup of parameter '___link2' native representation
	il2cpp_codegen_marshal_free(____link2_marshaled);
	____link2_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkName3' native representation
	il2cpp_codegen_marshal_free(____linkName3_marshaled);
	____linkName3_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkCaption4' native representation
	il2cpp_codegen_marshal_free(____linkCaption4_marshaled);
	____linkCaption4_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkDescription5' native representation
	il2cpp_codegen_marshal_free(____linkDescription5_marshaled);
	____linkDescription5_marshaled = NULL;

	// Marshaling cleanup of parameter '___picture6' native representation
	il2cpp_codegen_marshal_free(____picture6_marshaled);
	____picture6_marshaled = NULL;

	// Marshaling cleanup of parameter '___mediaSource7' native representation
	il2cpp_codegen_marshal_free(____mediaSource7_marshaled);
	____mediaSource7_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppRequest_mD69DDE3872087786629E57AF6FAEF2D1F881C7F8 (int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char**, int32_t, char*, char**, int32_t, int32_t, int32_t, char*, char*);

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Marshaling of parameter '___actionType2' to native representation
	char* ____actionType2_marshaled = NULL;
	____actionType2_marshaled = il2cpp_codegen_marshal_string(___actionType2);

	// Marshaling of parameter '___objectId3' to native representation
	char* ____objectId3_marshaled = NULL;
	____objectId3_marshaled = il2cpp_codegen_marshal_string(___objectId3);

	// Marshaling of parameter '___to4' to native representation
	char** ____to4_marshaled = NULL;
	if (___to4 != NULL)
	{
		il2cpp_array_size_t ____to4_Length = (___to4)->max_length;
		____to4_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____to4_Length + 1);
		(____to4_marshaled)[____to4_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____to4_Length); i++)
		{
			(____to4_marshaled)[i] = il2cpp_codegen_marshal_string((___to4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____to4_marshaled = NULL;
	}

	// Marshaling of parameter '___filters6' to native representation
	char* ____filters6_marshaled = NULL;
	____filters6_marshaled = il2cpp_codegen_marshal_string(___filters6);

	// Marshaling of parameter '___excludeIds7' to native representation
	char** ____excludeIds7_marshaled = NULL;
	if (___excludeIds7 != NULL)
	{
		il2cpp_array_size_t ____excludeIds7_Length = (___excludeIds7)->max_length;
		____excludeIds7_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____excludeIds7_Length + 1);
		(____excludeIds7_marshaled)[____excludeIds7_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____excludeIds7_Length); i++)
		{
			(____excludeIds7_marshaled)[i] = il2cpp_codegen_marshal_string((___excludeIds7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____excludeIds7_marshaled = NULL;
	}

	// Marshaling of parameter '___data11' to native representation
	char* ____data11_marshaled = NULL;
	____data11_marshaled = il2cpp_codegen_marshal_string(___data11);

	// Marshaling of parameter '___title12' to native representation
	char* ____title12_marshaled = NULL;
	____title12_marshaled = il2cpp_codegen_marshal_string(___title12);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBAppRequest)(___requestId0, ____message1_marshaled, ____actionType2_marshaled, ____objectId3_marshaled, ____to4_marshaled, ___toLength5, ____filters6_marshaled, ____excludeIds7_marshaled, ___excludeIdsLength8, static_cast<int32_t>(___hasMaxRecipients9), ___maxRecipients10, ____data11_marshaled, ____title12_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

	// Marshaling cleanup of parameter '___actionType2' native representation
	il2cpp_codegen_marshal_free(____actionType2_marshaled);
	____actionType2_marshaled = NULL;

	// Marshaling cleanup of parameter '___objectId3' native representation
	il2cpp_codegen_marshal_free(____objectId3_marshaled);
	____objectId3_marshaled = NULL;

	// Marshaling cleanup of parameter '___to4' native representation
	if (____to4_marshaled != NULL)
	{
		const il2cpp_array_size_t ____to4_marshaled_CleanupLoopCount = (___to4 != NULL) ? (___to4)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____to4_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____to4_marshaled)[i]);
			(____to4_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____to4_marshaled);
		____to4_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___filters6' native representation
	il2cpp_codegen_marshal_free(____filters6_marshaled);
	____filters6_marshaled = NULL;

	// Marshaling cleanup of parameter '___excludeIds7' native representation
	if (____excludeIds7_marshaled != NULL)
	{
		const il2cpp_array_size_t ____excludeIds7_marshaled_CleanupLoopCount = (___excludeIds7 != NULL) ? (___excludeIds7)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____excludeIds7_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____excludeIds7_marshaled)[i]);
			(____excludeIds7_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____excludeIds7_marshaled);
		____excludeIds7_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___data11' native representation
	il2cpp_codegen_marshal_free(____data11_marshaled);
	____data11_marshaled = NULL;

	// Marshaling cleanup of parameter '___title12' native representation
	il2cpp_codegen_marshal_free(____title12_marshaled);
	____title12_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsActivateApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsActivateApp_m522F9036F9E8A4EED19FA91C96714B90E12A8C85 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBAppEventsActivateApp)();

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsLogEvent_mF3A3BAD0DF82C6AB0BE32FC9FD98409C305DC33F (String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, double, int32_t, char**, char**);

	// Marshaling of parameter '___logEvent0' to native representation
	char* ____logEvent0_marshaled = NULL;
	____logEvent0_marshaled = il2cpp_codegen_marshal_string(___logEvent0);

	// Marshaling of parameter '___paramKeys3' to native representation
	char** ____paramKeys3_marshaled = NULL;
	if (___paramKeys3 != NULL)
	{
		il2cpp_array_size_t ____paramKeys3_Length = (___paramKeys3)->max_length;
		____paramKeys3_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paramKeys3_Length + 1);
		(____paramKeys3_marshaled)[____paramKeys3_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramKeys3_Length); i++)
		{
			(____paramKeys3_marshaled)[i] = il2cpp_codegen_marshal_string((___paramKeys3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paramKeys3_marshaled = NULL;
	}

	// Marshaling of parameter '___paramVals4' to native representation
	char** ____paramVals4_marshaled = NULL;
	if (___paramVals4 != NULL)
	{
		il2cpp_array_size_t ____paramVals4_Length = (___paramVals4)->max_length;
		____paramVals4_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paramVals4_Length + 1);
		(____paramVals4_marshaled)[____paramVals4_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramVals4_Length); i++)
		{
			(____paramVals4_marshaled)[i] = il2cpp_codegen_marshal_string((___paramVals4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paramVals4_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBAppEventsLogEvent)(____logEvent0_marshaled, ___valueToSum1, ___numParams2, ____paramKeys3_marshaled, ____paramVals4_marshaled);

	// Marshaling cleanup of parameter '___logEvent0' native representation
	il2cpp_codegen_marshal_free(____logEvent0_marshaled);
	____logEvent0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramKeys3' native representation
	if (____paramKeys3_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paramKeys3_marshaled_CleanupLoopCount = (___paramKeys3 != NULL) ? (___paramKeys3)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramKeys3_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paramKeys3_marshaled)[i]);
			(____paramKeys3_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paramKeys3_marshaled);
		____paramKeys3_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___paramVals4' native representation
	if (____paramVals4_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paramVals4_marshaled_CleanupLoopCount = (___paramVals4 != NULL) ? (___paramVals4)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramVals4_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paramVals4_marshaled)[i]);
			(____paramVals4_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paramVals4_marshaled);
		____paramVals4_marshaled = NULL;
	}

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsLogPurchase_m46C5AF4354263CCCA8477EFEAFE6D179F7C7FAC1 (double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double, char*, int32_t, char**, char**);

	// Marshaling of parameter '___currency1' to native representation
	char* ____currency1_marshaled = NULL;
	____currency1_marshaled = il2cpp_codegen_marshal_string(___currency1);

	// Marshaling of parameter '___paramKeys3' to native representation
	char** ____paramKeys3_marshaled = NULL;
	if (___paramKeys3 != NULL)
	{
		il2cpp_array_size_t ____paramKeys3_Length = (___paramKeys3)->max_length;
		____paramKeys3_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paramKeys3_Length + 1);
		(____paramKeys3_marshaled)[____paramKeys3_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramKeys3_Length); i++)
		{
			(____paramKeys3_marshaled)[i] = il2cpp_codegen_marshal_string((___paramKeys3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paramKeys3_marshaled = NULL;
	}

	// Marshaling of parameter '___paramVals4' to native representation
	char** ____paramVals4_marshaled = NULL;
	if (___paramVals4 != NULL)
	{
		il2cpp_array_size_t ____paramVals4_Length = (___paramVals4)->max_length;
		____paramVals4_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paramVals4_Length + 1);
		(____paramVals4_marshaled)[____paramVals4_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramVals4_Length); i++)
		{
			(____paramVals4_marshaled)[i] = il2cpp_codegen_marshal_string((___paramVals4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paramVals4_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBAppEventsLogPurchase)(___logPurchase0, ____currency1_marshaled, ___numParams2, ____paramKeys3_marshaled, ____paramVals4_marshaled);

	// Marshaling cleanup of parameter '___currency1' native representation
	il2cpp_codegen_marshal_free(____currency1_marshaled);
	____currency1_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramKeys3' native representation
	if (____paramKeys3_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paramKeys3_marshaled_CleanupLoopCount = (___paramKeys3 != NULL) ? (___paramKeys3)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramKeys3_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paramKeys3_marshaled)[i]);
			(____paramKeys3_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paramKeys3_marshaled);
		____paramKeys3_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___paramVals4' native representation
	if (____paramVals4_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paramVals4_marshaled_CleanupLoopCount = (___paramVals4 != NULL) ? (___paramVals4)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramVals4_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paramVals4_marshaled)[i]);
			(____paramVals4_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paramVals4_marshaled);
		____paramVals4_marshaled = NULL;
	}

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsSetLimitEventUsage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAppEventsSetLimitEventUsage_m24474A968DA87CAAE8637279F0BD2757794E936A (bool ___limitEventUsage0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBAppEventsSetLimitEventUsage)(static_cast<int32_t>(___limitEventUsage0));

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAutoLogAppEventsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAutoLogAppEventsEnabled_m2EFB8AB3EB9374735B25AF22E9C64BFAD669BD40 (bool ___autoLogAppEventsEnabled0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBAutoLogAppEventsEnabled)(static_cast<int32_t>(___autoLogAppEventsEnabled0));

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAdvertiserIDCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBAdvertiserIDCollectionEnabled_mA9BFCAC14F6A773A4F5CE2D92000812CD79D331C (bool ___advertiserIDCollectionEnabledID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBAdvertiserIDCollectionEnabled)(static_cast<int32_t>(___advertiserIDCollectionEnabledID0));

}
// System.Boolean Facebook.Unity.IOS.IOSWrapper::IOSFBAdvertiserTrackingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWrapper_IOSFBAdvertiserTrackingEnabled_m13DE9B83C434C8CBC0D3DBB005816271B20DD524 (bool ___advertiserTrackingEnabled0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IOSFBAdvertiserTrackingEnabled)(static_cast<int32_t>(___advertiserTrackingEnabled0));

	return static_cast<bool>(returnValue);
}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBGetAppLink(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBGetAppLink_mD831E85D38D380AE0555219B724D214FE193C966 (int32_t ___requestID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBGetAppLink)(___requestID0);

}
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBSdkVersion_mAF99D64C391E86E26DBF4CB2E93EB610EDBCB93E (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(IOSFBSdkVersion)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBFetchDeferredAppLink(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBFetchDeferredAppLink_mB3864E606FABFDA01AD232A0D06800D4DFC84F2B (int32_t ___requestID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBFetchDeferredAppLink)(___requestID0);

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBRefreshCurrentAccessToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBRefreshCurrentAccessToken_m4305641AE6021D8A26EDF424C2D89F8BF78A4000 (int32_t ___requestID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBRefreshCurrentAccessToken)(___requestID0);

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetUserID_m744BA6DD8199E64900AE14EDA87C6C4CD5F60EDF (String_t* ___userID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___userID0' to native representation
	char* ____userID0_marshaled = NULL;
	____userID0_marshaled = il2cpp_codegen_marshal_string(___userID0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBSetUserID)(____userID0_marshaled);

	// Marshaling cleanup of parameter '___userID0' native representation
	il2cpp_codegen_marshal_free(____userID0_marshaled);
	____userID0_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBOpenGamingServicesFriendFinder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBOpenGamingServicesFriendFinder_mCFFE40E92109541328B8FC598CA0A68F3DA21E3D (int32_t ___requestID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBOpenGamingServicesFriendFinder)(___requestID0);

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBUploadImageToMediaLibrary(System.Int32,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUploadImageToMediaLibrary_mC44210C6B232492985CDE1E547197CF2650B3017 (int32_t ___requestID0, String_t* ___caption1, String_t* ___imageUri2, bool ___shouldLaunchMediaDialog3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, int32_t);

	// Marshaling of parameter '___caption1' to native representation
	char* ____caption1_marshaled = NULL;
	____caption1_marshaled = il2cpp_codegen_marshal_string(___caption1);

	// Marshaling of parameter '___imageUri2' to native representation
	char* ____imageUri2_marshaled = NULL;
	____imageUri2_marshaled = il2cpp_codegen_marshal_string(___imageUri2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBUploadImageToMediaLibrary)(___requestID0, ____caption1_marshaled, ____imageUri2_marshaled, static_cast<int32_t>(___shouldLaunchMediaDialog3));

	// Marshaling cleanup of parameter '___caption1' native representation
	il2cpp_codegen_marshal_free(____caption1_marshaled);
	____caption1_marshaled = NULL;

	// Marshaling cleanup of parameter '___imageUri2' native representation
	il2cpp_codegen_marshal_free(____imageUri2_marshaled);
	____imageUri2_marshaled = NULL;

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBUploadVideoToMediaLibrary(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUploadVideoToMediaLibrary_m4790CC6C43F426503AB9EC7EA689CDE7968BB87B (int32_t ___requestID0, String_t* ___caption1, String_t* ___videoUri2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*);

	// Marshaling of parameter '___caption1' to native representation
	char* ____caption1_marshaled = NULL;
	____caption1_marshaled = il2cpp_codegen_marshal_string(___caption1);

	// Marshaling of parameter '___videoUri2' to native representation
	char* ____videoUri2_marshaled = NULL;
	____videoUri2_marshaled = il2cpp_codegen_marshal_string(___videoUri2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBUploadVideoToMediaLibrary)(___requestID0, ____caption1_marshaled, ____videoUri2_marshaled);

	// Marshaling cleanup of parameter '___caption1' native representation
	il2cpp_codegen_marshal_free(____caption1_marshaled);
	____caption1_marshaled = NULL;

	// Marshaling cleanup of parameter '___videoUri2' native representation
	il2cpp_codegen_marshal_free(____videoUri2_marshaled);
	____videoUri2_marshaled = NULL;

}
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBGetUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBGetUserID_m8F8ABB090825D49CAB7CC38BC5DC9662B51AF39F (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(IOSFBGetUserID)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetDataProcessingOptions(System.String[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBSetDataProcessingOptions_mFA65F906910152AE38DF613E18F4A60716E612EC (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___options0, int32_t ___numOptions1, int32_t ___country2, int32_t ___state3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___options0' to native representation
	char** ____options0_marshaled = NULL;
	if (___options0 != NULL)
	{
		il2cpp_array_size_t ____options0_Length = (___options0)->max_length;
		____options0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____options0_Length + 1);
		(____options0_marshaled)[____options0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____options0_Length); i++)
		{
			(____options0_marshaled)[i] = il2cpp_codegen_marshal_string((___options0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____options0_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBSetDataProcessingOptions)(____options0_marshaled, ___numOptions1, ___country2, ___state3);

	// Marshaling cleanup of parameter '___options0' native representation
	if (____options0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____options0_marshaled_CleanupLoopCount = (___options0 != NULL) ? (___options0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____options0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____options0_marshaled)[i]);
			(____options0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____options0_marshaled);
		____options0_marshaled = NULL;
	}

}
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBUpdateUserProperties(System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper_IOSFBUpdateUserProperties_mDC9F1D563E0160C1C03F0DE9BBAAFF88D2F90022 (int32_t ___numParams0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramKeys1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paramVals2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char**, char**);

	// Marshaling of parameter '___paramKeys1' to native representation
	char** ____paramKeys1_marshaled = NULL;
	if (___paramKeys1 != NULL)
	{
		il2cpp_array_size_t ____paramKeys1_Length = (___paramKeys1)->max_length;
		____paramKeys1_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paramKeys1_Length + 1);
		(____paramKeys1_marshaled)[____paramKeys1_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramKeys1_Length); i++)
		{
			(____paramKeys1_marshaled)[i] = il2cpp_codegen_marshal_string((___paramKeys1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paramKeys1_marshaled = NULL;
	}

	// Marshaling of parameter '___paramVals2' to native representation
	char** ____paramVals2_marshaled = NULL;
	if (___paramVals2 != NULL)
	{
		il2cpp_array_size_t ____paramVals2_Length = (___paramVals2)->max_length;
		____paramVals2_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paramVals2_Length + 1);
		(____paramVals2_marshaled)[____paramVals2_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramVals2_Length); i++)
		{
			(____paramVals2_marshaled)[i] = il2cpp_codegen_marshal_string((___paramVals2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paramVals2_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(IOSFBUpdateUserProperties)(___numParams0, ____paramKeys1_marshaled, ____paramVals2_marshaled);

	// Marshaling cleanup of parameter '___paramKeys1' native representation
	if (____paramKeys1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paramKeys1_marshaled_CleanupLoopCount = (___paramKeys1 != NULL) ? (___paramKeys1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramKeys1_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paramKeys1_marshaled)[i]);
			(____paramKeys1_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paramKeys1_marshaled);
		____paramKeys1_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___paramVals2' native representation
	if (____paramVals2_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paramVals2_marshaled_CleanupLoopCount = (___paramVals2 != NULL) ? (___paramVals2)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paramVals2_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paramVals2_marshaled)[i]);
			(____paramVals2_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paramVals2_marshaled);
		____paramVals2_marshaled = NULL;
	}

}
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBCurrentAuthenticationToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBCurrentAuthenticationToken_m2734D92A741B27D9851364C734EFBA93CEC754E5 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(IOSFBCurrentAuthenticationToken)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBCurrentProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWrapper_IOSFBCurrentProfile_m1D5E1C7B664F545F153EF15212E4E3E70E7284E1 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(IOSFBCurrentProfile)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Facebook.Unity.IOS.IOSWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWrapper__ctor_m73203FBA39C6A09CC866FBB9BDCE9565F2ED9295 (IOSWrapper_tE9C5DC1C577E3FEDF32A6379331EFADD09720BCC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
