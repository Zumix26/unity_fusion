#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AssertException_tCA7C43FC9481011C405E3177480D5961583725AF;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct EmbeddedAttribute_t97821AE477F79516DB31E4AE03E97471B4CB5B1D;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ILogDumpable_tF7971A8D248BF21B2B429C1D840994D662C28D8A;
struct ILogSource_tF3DA613BD3B0DEE672B43AABD1B269191AD34120;
struct ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024;
struct ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1;
struct IsReadOnlyAttribute_tC5E2B1A10F146DBABB9AEED2F62CE4DA2E539F5E;
struct IsUnmanagedAttribute_t59FB1F97B7BB3598F41D696A413E03232349641C;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogDumpable_tF7971A8D248BF21B2B429C1D840994D662C28D8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AlwaysFail_m3B098A1C40AAC3C7CF0964F9B8F58B9E8F01E26F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Always_m02F48B35B4ECA37CC0C89CFCDB6656E960409F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Always_m33D3DA9E628919B4B38B9789A80931C0C589A1BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_m911E026C27B73741BA5481D5EA63CB89649BC5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_m995D6B96BCCC7F55928DAA2C2E54EA9BF9707D12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_mC32649F86CDD7A225D4E9AC9B093769E6FB3F594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_mF25C18F92B92CDBB1638FA3E8433E9CC3AB6B6A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Fail_m3AC72DE6C9620DD6E032D70CA6270EC097D65671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Fail_m3FF26D46F2BAE2E52C54D41BA1DF3EAEB1CE464E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Fail_m57143F5584A6B703C6ADDEE2C74B7A0A98853040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tFA4B8DD8D59CD3C8F0365C7233538CD567E93BBF 
{
};
struct Assert_t0933039451CA30AAD4836AB4EEE49E6A8F0D2CD1  : public RuntimeObject
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99  : public RuntimeObject
{
};
struct LogUtils_t3C8741E179D59B39485E23009EE24AF7C852E39D  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Lock_t32A78416DABEA294270289BDD467DFA016411297  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct EmbeddedAttribute_t97821AE477F79516DB31E4AE03E97471B4CB5B1D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct IsReadOnlyAttribute_tC5E2B1A10F146DBABB9AEED2F62CE4DA2E539F5E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct IsUnmanagedAttribute_t59FB1F97B7BB3598F41D696A413E03232349641C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 
{
	String_t* ___Prefix;
	RuntimeObject* ___Source;
};
struct LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_pinvoke
{
	char* ___Prefix;
	Il2CppIUnknown* ___Source;
};
struct LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_com
{
	Il2CppChar* ___Prefix;
	Il2CppIUnknown* ___Source;
};
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
struct DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B 
{
	RuntimeObject* ___Obj;
};
struct DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_pinvoke
{
	RuntimeObject* ___Obj;
};
struct DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_com
{
	RuntimeObject* ___Obj;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct LogType_t31783F322251CAAFA31B0181DF05C4483723B80B 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct AssertException_tCA7C43FC9481011C405E3177480D5961583725AF  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields
{
	RuntimeObject* ____logger;
	uint8_t ___LogLevel;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7 (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27 (LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* __this, String_t* ___0_prefix, RuntimeObject* ___1_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5 (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5 (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ExceptionInternal_m965D6D8166AA30F0837C99305AD5E01D7F40751A (Exception_t* ___0_exn, String_t* ___1_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogContext_GetCurrentTimeStampString_mEAD1311030B65F6D74EB3C38DF5019CD06090B74 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToLongTimeString_m5E9B5E9F6385171AF3FD9A6535F74BDD255F8661 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08_inline (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DumpDefferedClass_ToString_m63E428B6AAD02097A6097E104BB9D20171B975B2 (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m62D8C96456D26296425095A0EB82B397F682A5D3 (EmbeddedAttribute_t97821AE477F79516DB31E4AE03E97471B4CB5B1D* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m5305F630EF8BD5A061CD184DD5DDD1F1E2B15231 (IsReadOnlyAttribute_tC5E2B1A10F146DBABB9AEED2F62CE4DA2E539F5E* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m99005C1BD305D39F2CF6D25FDCCEEF7241863686 (IsUnmanagedAttribute_t59FB1F97B7BB3598F41D696A413E03232349641C* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7 (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Fail_m3FF26D46F2BAE2E52C54D41BA1DF3EAEB1CE464E (const RuntimeMethod* method) 
{
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_0 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Fail_m3FF26D46F2BAE2E52C54D41BA1DF3EAEB1CE464E_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Fail_m57143F5584A6B703C6ADDEE2C74B7A0A98853040 (String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_error;
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Fail_m57143F5584A6B703C6ADDEE2C74B7A0A98853040_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Fail_m3AC72DE6C9620DD6E032D70CA6270EC097D65671 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_3 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Fail_m3AC72DE6C9620DD6E032D70CA6270EC097D65671_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_m911E026C27B73741BA5481D5EA63CB89649BC5F4 (RuntimeObject* ___0_condition, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_m911E026C27B73741BA5481D5EA63CB89649BC5F4_RuntimeMethod_var)));
	}

IL_0009:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_mC32649F86CDD7A225D4E9AC9B093769E6FB3F594 (void* ___0_condition, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_condition;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000b;
		}
	}
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_mC32649F86CDD7A225D4E9AC9B093769E6FB3F594_RuntimeMethod_var)));
	}

IL_000b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_mF25C18F92B92CDBB1638FA3E8433E9CC3AB6B6A8 (bool ___0_condition, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_mF25C18F92B92CDBB1638FA3E8433E9CC3AB6B6A8_RuntimeMethod_var)));
	}

IL_0009:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_m995D6B96BCCC7F55928DAA2C2E54EA9BF9707D12 (bool ___0_condition, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___1_error;
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_2 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_m995D6B96BCCC7F55928DAA2C2E54EA9BF9707D12_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_AlwaysFail_m3B098A1C40AAC3C7CF0964F9B8F58B9E8F01E26F (String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_error;
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_AlwaysFail_m3B098A1C40AAC3C7CF0964F9B8F58B9E8F01E26F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Always_m02F48B35B4ECA37CC0C89CFCDB6656E960409F2B (bool ___0_condition, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Always_m02F48B35B4ECA37CC0C89CFCDB6656E960409F2B_RuntimeMethod_var)));
	}

IL_0009:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Always_m33D3DA9E628919B4B38B9789A80931C0C589A1BA (bool ___0_condition, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___1_error;
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_2 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Always_m33D3DA9E628919B4B38B9789A80931C0C589A1BA_RuntimeMethod_var)));
	}

IL_000a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Init_m58AD459A0E55A15B06D8A7CD91D2B02B7C081967 (RuntimeObject* ___0_logger, uint8_t ___1_LogLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					Type_t* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002c:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			RuntimeObject* L_5 = ___0_logger;
			il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
			((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger), (void*)L_5);
			uint8_t L_6 = ___1_LogLevel;
			((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel = L_6;
			goto IL_002d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_get_Initialized_mE9564A8701EC4481BEF509D156DA42D358925365 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Exception_m2CD3BFA506678DB70A6633E19F428D1D7A9C16B2 (Exception_t* ___0_exn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0041;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			Exception_t* L_9 = ___0_exn;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_10 = (&V_3);
			il2cpp_codegen_initobj(L_10, sizeof(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074));
			NullCheck(L_8);
			InterfaceActionInvoker2< Exception_t*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(1, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, L_9, L_10);
			goto IL_0042;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ExceptionInternal_m965D6D8166AA30F0837C99305AD5E01D7F40751A (Exception_t* ___0_exn, String_t* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0042:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			Exception_t* L_9 = ___0_exn;
			String_t* L_10 = ___1_stream;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), L_10, NULL, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker2< Exception_t*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(1, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, L_9, (&V_3));
			goto IL_0043;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_m31DDA9DD385A56A551BDDE5EA1B19671CF836050 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Debug_m231D853CA4D75BF48BD2D2FA0575B3EBD399BD1A (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_DebugWarn_m7FA68A40C7DA1C844368BEBF0E81EC5EB924F546 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_DebugError_mEF614F48F82EF857A6984E727F2A2C9A1CA702C4 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Debug_mE64B0C6F0EDB42A1002C5B07204B05A57DFFC7CC (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_DebugWarn_mAFC33816191C82BD493EFD3B9D8E3B5D4861D8B4 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_DebugError_mEC53E2FBBB8F7FEB9B6DC09D93ED7A847FB09901 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoRealtime_mC681CCB9CEA6B43222971E38D8F8374ED493BCF0 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnRealtime_m018A9136C1E1DC137E1E7C222C8B5C2563558467 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorRealtime_mCFCAE3B0B5CAC51AC21C7842E0F270A70DB963BD (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ExceptionRealtime_m378CDD99CC9ACFAE2CFBCF33B15C434BAEBE351B (Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_ex;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ExceptionInternal_m965D6D8166AA30F0837C99305AD5E01D7F40751A(L_0, _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m87ECE01CB4FC332F7A549E806F6CC2E31F82246C (RuntimeObject* ___0_sourceProxy, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B5_3 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	RuntimeObject* G_B4_3 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	int32_t G_B6_3 = 0;
	RuntimeObject* G_B6_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_004f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_004e;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				Type_t* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				RuntimeObject* L_8 = V_0;
				RuntimeObject* L_9 = ___1_msg;
				RuntimeObject* L_10 = ___0_sourceProxy;
				if (L_10)
				{
					G_B5_0 = NULL;
					G_B5_1 = L_9;
					G_B5_2 = 2;
					G_B5_3 = L_8;
					goto IL_0030_1;
				}
				G_B4_0 = NULL;
				G_B4_1 = L_9;
				G_B4_2 = 2;
				G_B4_3 = L_8;
			}
			{
				G_B6_0 = ((RuntimeObject*)(NULL));
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				G_B6_3 = G_B4_2;
				G_B6_4 = G_B4_3;
				goto IL_0036_1;
			}

IL_0030_1:
			{
				RuntimeObject* L_11 = ___0_sourceProxy;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_11);
				G_B6_0 = L_12;
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
				G_B6_3 = G_B5_2;
				G_B6_4 = G_B5_3;
			}

IL_0036_1:
			{
				LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_13;
				memset((&L_13), 0, sizeof(L_13));
				LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_13), (String_t*)G_B6_1, G_B6_0, NULL);
				V_3 = L_13;
				NullCheck(G_B6_4);
				InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, G_B6_4, G_B6_3, G_B6_2, (&V_3));
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			String_t* L_10 = ___1_stream;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), L_10, NULL, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 2, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			String_t* L_10 = ___2_stream;
			RuntimeObject* L_11 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_12;
			memset((&L_12), 0, sizeof(L_12));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_12), L_10, L_11, NULL);
			V_3 = L_12;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 2, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_m87E3E181297CB224BFA282BDFD494619B3D23F49 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0042:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_10 = (&V_3);
			il2cpp_codegen_initobj(L_10, sizeof(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074));
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 1, L_9, L_10);
			goto IL_0043;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_mC15634B0CA8BA36B8334A7454B94AC4F250B6390 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			RuntimeObject* L_10 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), (String_t*)NULL, L_10, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 1, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5 (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			String_t* L_10 = ___1_stream;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), L_10, NULL, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 1, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			String_t* L_10 = ___2_stream;
			RuntimeObject* L_11 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_12;
			memset((&L_12), 0, sizeof(L_12));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_12), L_10, L_11, NULL);
			V_3 = L_12;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 1, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mF2B91AB1906898C0FB8817C95D0E94221CE1EABE (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0042:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_10 = (&V_3);
			il2cpp_codegen_initobj(L_10, sizeof(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074));
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 0, L_9, L_10);
			goto IL_0043;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m7F9072C1FAD6BE612C5304207004762617E16371 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			RuntimeObject* L_10 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), (String_t*)NULL, L_10, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 0, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m61B8BD6803FF2A478E249EC9348CD1D760E06EEC (RuntimeObject* ___0_sourceProxy, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B5_3 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	RuntimeObject* G_B4_3 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	int32_t G_B6_3 = 0;
	RuntimeObject* G_B6_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_004e;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				Type_t* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				RuntimeObject* L_8 = V_0;
				RuntimeObject* L_9 = ___1_msg;
				RuntimeObject* L_10 = ___0_sourceProxy;
				if (L_10)
				{
					G_B5_0 = NULL;
					G_B5_1 = L_9;
					G_B5_2 = 0;
					G_B5_3 = L_8;
					goto IL_0030_1;
				}
				G_B4_0 = NULL;
				G_B4_1 = L_9;
				G_B4_2 = 0;
				G_B4_3 = L_8;
			}
			{
				G_B6_0 = ((RuntimeObject*)(NULL));
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				G_B6_3 = G_B4_2;
				G_B6_4 = G_B4_3;
				goto IL_0036_1;
			}

IL_0030_1:
			{
				RuntimeObject* L_11 = ___0_sourceProxy;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_11);
				G_B6_0 = L_12;
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
				G_B6_3 = G_B5_2;
				G_B6_4 = G_B5_3;
			}

IL_0036_1:
			{
				LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_13;
				memset((&L_13), 0, sizeof(L_13));
				LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_13), (String_t*)G_B6_1, G_B6_0, NULL);
				V_3 = L_13;
				NullCheck(G_B6_4);
				InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, G_B6_4, G_B6_3, G_B6_2, (&V_3));
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5 (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			String_t* L_10 = ___1_stream;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), L_10, NULL, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 0, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			String_t* L_10 = ___2_stream;
			RuntimeObject* L_11 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_12;
			memset((&L_12), 0, sizeof(L_12));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_12), L_10, L_11, NULL);
			V_3 = L_12;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 0, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__cctor_m5AA973FCC7A95742E9D9C302127E11A64648D3D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel = 3;
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
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_pinvoke(const LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074& unmarshaled, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_pinvoke& marshaled)
{
	marshaled.___Prefix = il2cpp_codegen_marshal_string(unmarshaled.___Prefix);
	if (unmarshaled.___Source != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Source))
		{
			marshaled.___Source = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Source));
			(marshaled.___Source)->AddRef();
		}
		else
		{
			marshaled.___Source = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Source);
		}
	}
	else
	{
		marshaled.___Source = NULL;
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_pinvoke_back(const LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_pinvoke& marshaled, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Prefix = il2cpp_codegen_marshal_string_result(marshaled.___Prefix);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Prefix), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Prefix));
	if (marshaled.___Source != NULL)
	{
		unmarshaled.___Source = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Source, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Source), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Source, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Source))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Source), Il2CppIUnknown::IID, marshaled.___Source);
		}
	}
	else
	{
		unmarshaled.___Source = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Source), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_pinvoke_cleanup(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Prefix);
	marshaled.___Prefix = NULL;
	if (marshaled.___Source != NULL)
	{
		(marshaled.___Source)->Release();
		marshaled.___Source = NULL;
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_com(const LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074& unmarshaled, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_com& marshaled)
{
	marshaled.___Prefix = il2cpp_codegen_marshal_bstring(unmarshaled.___Prefix);
	if (unmarshaled.___Source != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Source))
		{
			marshaled.___Source = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Source));
			(marshaled.___Source)->AddRef();
		}
		else
		{
			marshaled.___Source = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Source);
		}
	}
	else
	{
		marshaled.___Source = NULL;
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_com_back(const LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_com& marshaled, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Prefix = il2cpp_codegen_marshal_bstring_result(marshaled.___Prefix);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Prefix), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Prefix));
	if (marshaled.___Source != NULL)
	{
		unmarshaled.___Source = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Source, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Source), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Source, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Source))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Source), Il2CppIUnknown::IID, marshaled.___Source);
		}
	}
	else
	{
		unmarshaled.___Source = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Source), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_com_cleanup(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Prefix);
	marshaled.___Prefix = NULL;
	if (marshaled.___Source != NULL)
	{
		(marshaled.___Source)->Release();
		marshaled.___Source = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27 (LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* __this, String_t* ___0_prefix, RuntimeObject* ___1_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = LogContext_GetCurrentTimeStampString_mEAD1311030B65F6D74EB3C38DF5019CD06090B74(NULL);
		String_t* L_1 = ___0_prefix;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
		__this->___Prefix = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Prefix), (void*)L_2);
		RuntimeObject* L_3 = ___1_source;
		__this->___Source = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Source), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27_AdjustorThunk (RuntimeObject* __this, String_t* ___0_prefix, RuntimeObject* ___1_source, const RuntimeMethod* method)
{
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074*>(__this + _offset);
	LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27(_thisAdjusted, ___0_prefix, ___1_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogContext_GetCurrentTimeStampString_mEAD1311030B65F6D74EB3C38DF5019CD06090B74 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToLongTimeString_m5E9B5E9F6385171AF3FD9A6535F74BDD255F8661((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_1, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_pinvoke(const DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B& unmarshaled, DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ObjException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Obj' of type 'DumpDefferedClass': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ObjException, NULL);
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_pinvoke_back(const DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_pinvoke& marshaled, DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B& unmarshaled)
{
	Exception_t* ___ObjException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Obj' of type 'DumpDefferedClass': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ObjException, NULL);
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_pinvoke_cleanup(DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_com(const DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B& unmarshaled, DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_com& marshaled)
{
	Exception_t* ___ObjException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Obj' of type 'DumpDefferedClass': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ObjException, NULL);
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_com_back(const DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_com& marshaled, DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B& unmarshaled)
{
	Exception_t* ___ObjException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Obj' of type 'DumpDefferedClass': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ObjException, NULL);
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_com_cleanup(DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08 (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->___Obj = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Obj), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B*>(__this + _offset);
	DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08_inline(_thisAdjusted, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DumpDefferedClass_ToString_m63E428B6AAD02097A6097E104BB9D20171B975B2 (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogDumpable_tF7971A8D248BF21B2B429C1D840994D662C28D8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___Obj;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___Obj;
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< StringBuilder_t* >::Invoke(0, ILogDumpable_tF7971A8D248BF21B2B429C1D840994D662C28D8A_il2cpp_TypeInfo_var, L_2, L_3);
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		return L_5;
	}

IL_0021:
	{
		return _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
	}
}
IL2CPP_EXTERN_C  String_t* DumpDefferedClass_ToString_m63E428B6AAD02097A6097E104BB9D20171B975B2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DumpDefferedClass_ToString_m63E428B6AAD02097A6097E104BB9D20171B975B2(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08_inline (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->___Obj = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Obj), (void*)L_0);
		return;
	}
}
