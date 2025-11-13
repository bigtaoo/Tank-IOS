#include "pch-cpp.hpp"





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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};

struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF;
struct Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E;
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70;
struct Action_2_t67647DD70912484E9205AC38396D2849ED602730;
struct AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D;
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
struct DelegateList_1_tACD45E40B18C717004FC47629F57F611B51C998E;
struct DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88;
struct DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD;
struct Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE;
struct Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D;
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434;
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
struct Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267;
struct IBsonSerializer_1_tE973130FB0A52FB4FE5BF9568C22251FB11CCCFF;
struct IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897;
struct IEnumerable_1_t2023355D3F8591C88E3F655D5AE10212E3D6DE82;
struct IEnumerable_1_tC91C43EA1819EB895C7131A70B77731B6775E46C;
struct IEnumerable_1_tF87C02535F5ADDDE139D4D2EE4BD06652C1791A4;
struct IEnumerable_1_tAE85277EF3BF9AD51680964A20636C9F5DA8D96A;
struct IEnumerable_1_tD06D678273075F648C114AE9DD59D84729D2C41E;
struct IEnumerable_1_tE0FCEA1D747D45FA2EAAA937DC7CABC81AA82A3C;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t8C657FE14F31902C20E001F3F10A922428229A2F;
struct IEnumerable_1_t38653E65BFB6CE747A02D783EA1BEA73B4995B2B;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_tB869CEDF8C7C2D9CF935980DB5D1E72C54DF5F1B;
struct IEnumerable_1_t1EC5938841AE7FDA33EBE79C996D3EA01AF35B22;
struct IEnumerable_1_tECF757607935BE772C9F257FFC987680BBB3CDF5;
struct IEnumerator_1_t1D99A246ECE169F5A23ACC2383AFBD1FC1BCDDD4;
struct IEnumerator_1_tBC35835C3EB76EE1C528081A97709A6EBED8A33B;
struct IEnumerator_1_t526C6CBBA5290F560D4704AB11CDA3D0D499F433;
struct IEnumerator_1_t1BE3FA34323DEEEE0DBD6D2A35D8A33DB2F5D4AF;
struct IEnumerator_1_tCEA476100C6010435568CDDFB8FC53C7BB8CA138;
struct IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B;
struct IEnumerator_1_t8FA46572A78639B858747F8601A87E15E3AD958F;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t96C69FC6D3BFF990C18CFAF5A304D4D336E5DD32;
struct IEnumerator_1_t29A8CA7355FCD9DC17EBB7F096703BD8AD63C49F;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tAB17DB1459F45B67DF7512E19425B26C4B6A9407;
struct IEnumerator_1_t2AE506746DD40D1B5F17C877E00D1A2DC8E3EC13;
struct IEnumerator_1_t799F7647CE8230B0558DEEB1D972247C04382C50;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct IMemoryPackFormatter_1_tC6C441B1FCF1CA5B9D38B47C1880CB238BF7A498;
struct Lazy_1_t6B6149F358A30399E8258D069ABE19B919C6B10E;
struct ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB;
struct ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF;
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843;
struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C;
struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1;
struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307;
struct ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B;
struct QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E;
struct QueueFormatter_1_t517714ABF327D2AD5711D51C35BC1C5932471E06;
struct QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C;
struct Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4;
struct Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29;
struct Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA;
struct Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73;
struct Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0;
struct Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F;
struct Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415;
struct Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F;
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9;
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1;
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
struct EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0;
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9;
struct AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D;
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152;
struct TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9;
struct AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct AsyncContinuation_tC47CF007B38ABE211301C5051668E3580F234DC1;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct Exception_t;
struct IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77;
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IBsonSerializer_tB854F2D37C9383EF88CEF0DC8F84CF2E73FC48E5;
struct IBsonSerializerRegistry_t505BD288312FF90D7DEC1F71F47A502706451281;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDiscriminatorConvention_t79B858B328F73DE888D2BDE1DE08CD0362B33BE3;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067;
struct IOperationCacheKey_t39BE25F281EA1D574F074D55F4CAF08F13DF3CCA;
struct IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C;
struct IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LogEventInfo_t0D46B012CC61C9446F0D58F06158DB50C3011BB1;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemoryPackReaderOptionalState_tD10AAFEC7197C272C3AF94D1268A6413DCEB4EE4;
struct MemoryPackWriterOptionalState_tA9FEFD48EAC3074FA44FC5CCBD3559964AD5FD3C;
struct MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50;
struct MethodInfo_t;
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
typedef Il2CppFullySharedGenericStruct Il2CppFullySharedGenericStruct;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05610D25C7DBBDB071AEA3EBE257EB80F7BE35A9;
IL2CPP_EXTERN_C String_t* _stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0;
IL2CPP_EXTERN_C String_t* _stringLiteral26E2095A8B52212AA5C1E02D88D8E33A9DB72C3B;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral50FBAEBA1E034B056BB4A216B2BE8DC46B7EE5F4;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA20EFD001806C9E74BCAF3C65E0C45A757CC6949;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_op_Implicit_mB435C4396E3D17F8DBF99AAB24431AB5C60E7292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0;
struct ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9;
struct AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D;
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562;
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tA8423D8D0AD7D2C9F636121F92DD7305F3BBE701  : public RuntimeObject
{
};
struct EmptyArray_1_t849D96721854622FBB927351A0174ADAC0B239F9  : public RuntimeObject
{
};
struct EmptyArray_1_t9C24CC52A2AB30E79DD69151944A0440DCCC9382  : public RuntimeObject
{
};
struct EmptyArray_1_t39AB31A727E172C7F4C28DADC5B5CC2DAE94C335  : public RuntimeObject
{
};
struct EmptyArray_1_tF08C119EE47F8A3626235913EE89BD5ACD824D57  : public RuntimeObject
{
};
struct EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A  : public RuntimeObject
{
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24  : public RuntimeObject
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct EmptyArray_1_t056A375939E428E7C9460D3E2642DBDD3FD61751  : public RuntimeObject
{
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C  : public RuntimeObject
{
};
struct EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF  : public RuntimeObject
{
};
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843  : public RuntimeObject
{
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemoryPackFormatter_1_tC3A6C2680519CA6CCBC3A736F60F813BB0DA80FF  : public RuntimeObject
{
};
struct QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E  : public RuntimeObject
{
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ____queue;
};
struct Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4  : public RuntimeObject
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* ____queue;
	int32_t ____capacity;
	bool ___U3CIsDisposedU3Ek__BackingField;
};
struct Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA  : public RuntimeObject
{
	EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73  : public RuntimeObject
{
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0  : public RuntimeObject
{
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F  : public RuntimeObject
{
	ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415  : public RuntimeObject
{
	AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8  : public RuntimeObject
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F  : public RuntimeObject
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9  : public RuntimeObject
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF  : public RuntimeObject
{
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68  : public RuntimeObject
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1  : public RuntimeObject
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct SerializerBase_1_tD984C1A1274BCFBFA794670FA44932191FFA8106  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D  : public RuntimeObject
{
	Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* ___U3CInternalIdTransformFuncU3Ek__BackingField;
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___U3CWebRequestOverrideU3Ek__BackingField;
	bool ___CallbackHooksEnabled;
	ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* ___m_ResourceProviders;
	RuntimeObject* ___m_allocator;
	ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* ___m_UpdateReceivers;
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ___m_UpdateReceiversToRemove;
	bool ___m_UpdatingReceivers;
	bool ___m_InsideUpdateMethod;
	Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* ___m_providerMap;
	Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* ___m_AssetOperationCache;
	HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* ___m_TrackedInstanceOperations;
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks;
	List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* ___m_DeferredCompleteCallbacks;
	bool ___m_InsideExecuteDeferredCallbacksMethod;
	List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* ___m_DeferredCallbacksToRegister;
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseOpNonCached;
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseOpCached;
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseInstanceOp;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___U3CCertificateHandlerInstanceU3Ek__BackingField;
	bool ___m_RegisteredForCallbacks;
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___m_ProviderOperationTypeCache;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 
{
	AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C 
{
	int64_t ___instanceId;
	RuntimeObject* ___entity;
};
struct EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D  : public SerializerBase_1_tD984C1A1274BCFBFA794670FA44932191FFA8106
{
	RuntimeObject* ____discriminatorConvention;
	Lazy_1_t6B6149F358A30399E8258D069ABE19B919C6B10E* ____lazyItemSerializer;
};
struct Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 
{
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____q;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 
{
	Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* ____q;
	int32_t ____version;
	int32_t ____index;
	int64_t ____currentElement;
};
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q;
	int32_t ____version;
	int32_t ____index;
	RuntimeObject* ____currentElement;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C;
struct QueueFormatter_1_t517714ABF327D2AD5711D51C35BC1C5932471E06  : public MemoryPackFormatter_1_tC3A6C2680519CA6CCBC3A736F60F813BB0DA80FF
{
};
struct Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29 
{
	Il2CppFullySharedGenericStruct* ____array;
	int32_t ___length;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____version;
	int32_t ___U3CCountU3Ek__BackingField;
};
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A 
{
	RuntimeObject* ____startObject;
	RuntimeObject* ____endObject;
	int32_t ____startInteger;
	int32_t ____endInteger;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 
{
	int32_t ___Item1;
	int64_t ___Item2;
	int32_t ___Item3;
};
struct AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF 
{
	LogEventInfo_t0D46B012CC61C9446F0D58F06158DB50C3011BB1* ___U3CLogEventU3Ek__BackingField;
	AsyncContinuation_tC47CF007B38ABE211301C5051668E3580F234DC1* ___U3CContinuationU3Ek__BackingField;
};
struct AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_marshaled_pinvoke
{
	LogEventInfo_t0D46B012CC61C9446F0D58F06158DB50C3011BB1* ___U3CLogEventU3Ek__BackingField;
	Il2CppMethodPointer ___U3CContinuationU3Ek__BackingField;
};
struct AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_marshaled_com
{
	LogEventInfo_t0D46B012CC61C9446F0D58F06158DB50C3011BB1* ___U3CLogEventU3Ek__BackingField;
	Il2CppMethodPointer ___U3CContinuationU3Ek__BackingField;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	char* ___m_LocationName;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	Il2CppChar* ___m_LocationName;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D 
{
	int64_t ___TotalBytes;
	int64_t ___DownloadedBytes;
	bool ___IsDone;
};
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke
{
	int64_t ___TotalBytes;
	int64_t ___DownloadedBytes;
	int32_t ___IsDone;
};
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com
{
	int64_t ___TotalBytes;
	int64_t ___DownloadedBytes;
	int32_t ___IsDone;
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
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 
{
	MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50* ___callback;
	RuntimeObject* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_com
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F__padding[40];
	};
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD 
{
	Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* ____q;
	int32_t ____version;
	int32_t ____index;
	EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C ____currentElement;
};
struct Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A 
{
	Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* ____q;
	int32_t ____version;
	int32_t ____index;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ____currentElement;
};
struct Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35 
{
	Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* ____q;
	int32_t ____version;
	int32_t ____index;
	ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 ____currentElement;
};
struct Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA 
{
	Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* ____q;
	int32_t ____version;
	int32_t ____index;
	AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF ____currentElement;
};
struct Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B 
{
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ____q;
	int32_t ____version;
	int32_t ____index;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ____currentElement;
};
struct Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 
{
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ____q;
	int32_t ____version;
	int32_t ____index;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ____currentElement;
};
struct Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 
{
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ____q;
	int32_t ____version;
	int32_t ____index;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ____currentElement;
};
struct QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C  : public EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D
{
};
struct ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 
{
	int32_t ___Item1;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___Item2;
};
struct AccessibilityNotification_t3275B813A36874907C1B64627F8C8F8A9A6C77F4 
{
	int32_t ___value__;
};
struct AsyncOperationStatus_t1D89963C21E9A4C34EF3312FDFE60060339C2A88 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
{
	int32_t ___value__;
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
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct ProviderBehaviourFlags_t9746DB555DCE3A375EC29BD12E12C2C549CC6E63 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Command_t8AE6C32AB4C4E5FC4B8C77082D0EE5275B3414B9 
{
	int32_t ___value__;
};
struct Type_t978C0427FF2CB3DE1CC7BB6CC19BAC9005EC519D 
{
	int32_t ___value__;
};
struct Type_tDE4005CDD70E001C9402FEE8D2F2431154FED092 
{
	int32_t ___value__;
};
struct ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 
{
	U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F ___buttons;
};
struct Type_tBD67F20EC8969784B5377C5DC8F261E207A14792 
{
	int32_t ___value__;
};
struct Direction_tCF5F04CE76DF556D8ABCA537FC7C977681A14996 
{
	int32_t ___value__;
};
struct Type_tDA196B70B848DC5CD4982EBF31E0945B199A68C7 
{
	int32_t ___value__;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751 : public RuntimeObject {};
struct Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F 
{
	Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* ____q;
	int32_t ____version;
	int32_t ____index;
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ____currentElement;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct AccessibilityNotificationContext_t074DE74548FF9F28BB9D9A4A5714FCBD4F833059 
{
	int32_t ___U3CnotificationU3Ek__BackingField;
	bool ___U3CisScreenReaderEnabledU3Ek__BackingField;
	String_t* ___U3CannouncementU3Ek__BackingField;
	bool ___U3CwasAnnouncementSuccessfulU3Ek__BackingField;
	int32_t ___U3CcurrentNodeIdU3Ek__BackingField;
	int32_t ___U3CnextNodeIdU3Ek__BackingField;
};
struct AccessibilityNotificationContext_t074DE74548FF9F28BB9D9A4A5714FCBD4F833059_marshaled_pinvoke
{
	int32_t ___U3CnotificationU3Ek__BackingField;
	int32_t ___U3CisScreenReaderEnabledU3Ek__BackingField;
	char* ___U3CannouncementU3Ek__BackingField;
	int32_t ___U3CwasAnnouncementSuccessfulU3Ek__BackingField;
	int32_t ___U3CcurrentNodeIdU3Ek__BackingField;
	int32_t ___U3CnextNodeIdU3Ek__BackingField;
};
struct AccessibilityNotificationContext_t074DE74548FF9F28BB9D9A4A5714FCBD4F833059_marshaled_com
{
	int32_t ___U3CnotificationU3Ek__BackingField;
	int32_t ___U3CisScreenReaderEnabledU3Ek__BackingField;
	Il2CppChar* ___U3CannouncementU3Ek__BackingField;
	int32_t ___U3CwasAnnouncementSuccessfulU3Ek__BackingField;
	int32_t ___U3CcurrentNodeIdU3Ek__BackingField;
	int32_t ___U3CnextNodeIdU3Ek__BackingField;
};
struct CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F 
{
	int32_t ___type;
	int32_t ___command;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 
{
	int32_t ___type;
	int32_t ___keyCode;
	ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 ___buttonsState;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD 
{
	int32_t ___type;
	int32_t ___direction;
	bool ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A 
{
	Il2CppChar ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};
struct Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434  : public MulticastDelegate_t
{
};
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};
struct ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B : public RuntimeObject {};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			RuntimeObject* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			RuntimeObject* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568 
{
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___bufferSource;
	int64_t ___totalLength;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___bufferReference;
	int32_t ___bufferLength;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rentBuffer;
	int32_t ___advancedCount;
	int32_t ___consumed;
	MemoryPackReaderOptionalState_tD10AAFEC7197C272C3AF94D1268A6413DCEB4EE4* ___optionalState;
};
struct MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37 
{
	RuntimeObject* ___bufferWriter;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___bufferReference;
	int32_t ___bufferLength;
	int32_t ___advancedCount;
	int32_t ___depth;
	int32_t ___writtenCount;
	bool ___serializeStringAsUtf8;
	MemoryPackWriterOptionalState_tA9FEFD48EAC3074FA44FC5CCBD3559964AD5FD3C* ___optionalState;
};
struct NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A 
{
	int32_t ___U3CnotificationU3Ek__BackingField;
	bool ___U3CisScreenReaderEnabledU3Ek__BackingField;
	String_t* ___U3CannouncementU3Ek__BackingField;
	bool ___U3CwasAnnouncementSuccessfulU3Ek__BackingField;
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CcurrentNodeU3Ek__BackingField;
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CnextNodeU3Ek__BackingField;
	float ___U3CfontScaleU3Ek__BackingField;
	bool ___U3CisBoldTextEnabledU3Ek__BackingField;
	bool ___U3CisClosedCaptioningEnabledU3Ek__BackingField;
	AccessibilityNotificationContext_t074DE74548FF9F28BB9D9A4A5714FCBD4F833059 ___U3CnativeContextU3Ek__BackingField;
};
struct NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_marshaled_pinvoke
{
	int32_t ___U3CnotificationU3Ek__BackingField;
	int32_t ___U3CisScreenReaderEnabledU3Ek__BackingField;
	char* ___U3CannouncementU3Ek__BackingField;
	int32_t ___U3CwasAnnouncementSuccessfulU3Ek__BackingField;
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CcurrentNodeU3Ek__BackingField;
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CnextNodeU3Ek__BackingField;
	float ___U3CfontScaleU3Ek__BackingField;
	int32_t ___U3CisBoldTextEnabledU3Ek__BackingField;
	int32_t ___U3CisClosedCaptioningEnabledU3Ek__BackingField;
	AccessibilityNotificationContext_t074DE74548FF9F28BB9D9A4A5714FCBD4F833059_marshaled_pinvoke ___U3CnativeContextU3Ek__BackingField;
};
struct NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_marshaled_com
{
	int32_t ___U3CnotificationU3Ek__BackingField;
	int32_t ___U3CisScreenReaderEnabledU3Ek__BackingField;
	Il2CppChar* ___U3CannouncementU3Ek__BackingField;
	int32_t ___U3CwasAnnouncementSuccessfulU3Ek__BackingField;
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CcurrentNodeU3Ek__BackingField;
	AccessibilityNode_t9998B596BE3A0232C1CFE3B2610DF52E0338A49A* ___U3CnextNodeU3Ek__BackingField;
	float ___U3CfontScaleU3Ek__BackingField;
	int32_t ___U3CisBoldTextEnabledU3Ek__BackingField;
	int32_t ___U3CisClosedCaptioningEnabledU3Ek__BackingField;
	AccessibilityNotificationContext_t074DE74548FF9F28BB9D9A4A5714FCBD4F833059_marshaled_com ___U3CnativeContextU3Ek__BackingField;
};
struct Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 
{
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ____q;
	int32_t ____version;
	int32_t ____index;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ____currentElement;
};
struct Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 
{
	Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* ____q;
	int32_t ____version;
	int32_t ____index;
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ____currentElement;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_tA8423D8D0AD7D2C9F636121F92DD7305F3BBE701_StaticFields
{
	EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* ___Value;
};
struct EmptyArray_1_t849D96721854622FBB927351A0174ADAC0B239F9_StaticFields
{
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ___Value;
};
struct EmptyArray_1_t9C24CC52A2AB30E79DD69151944A0440DCCC9382_StaticFields
{
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___Value;
};
struct EmptyArray_1_t39AB31A727E172C7F4C28DADC5B5CC2DAE94C335_StaticFields
{
	ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* ___Value;
};
struct EmptyArray_1_tF08C119EE47F8A3626235913EE89BD5ACD824D57_StaticFields
{
	AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* ___Value;
};
struct EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16_StaticFields
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A_StaticFields
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___Value;
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___Value;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct EmptyArray_1_t056A375939E428E7C9460D3E2642DBDD3FD61751_StaticFields
{
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ___Value;
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___Value;
};
struct EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF_StaticFields
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___Value;
};
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_StaticFields
{
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* ___s_emptyArray;
};
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields
{
	Action_2_t67647DD70912484E9205AC38396D2849ED602730* ___U3CExceptionHandlerU3Ek__BackingField;
	int32_t ___s_GroupOperationTypeHash;
	int32_t ___s_InstanceOperationTypeHash;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
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
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_StaticFields
{
	TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3* ___TypesWithState;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0  : public RuntimeArray
{
	ALIGN_FIELD (8) EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C m_Items[1];

	inline EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___entity), (void*)NULL);
	}
	inline EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___entity), (void*)NULL);
	}
};
struct ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 m_Items[1];

	inline ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item2))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item2))->___m_LocationName), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item2))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item2))->___m_LocationName), (void*)NULL);
		#endif
	}
};
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A m_Items[1];

	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
};
struct ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 m_Items[1];

	inline ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 value)
	{
		m_Items[index] = value;
	}
};
struct AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D  : public RuntimeArray
{
	ALIGN_FIELD (8) AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF m_Items[1];

	inline AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CLogEventU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CContinuationU3Ek__BackingField), (void*)NULL);
		#endif
	}
	inline AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CLogEventU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CContinuationU3Ek__BackingField), (void*)NULL);
		#endif
	}
};
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A  : public RuntimeArray
{
	ALIGN_FIELD (8) Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 m_Items[1];

	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____managedEvent), (void*)NULL);
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____managedEvent), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC  : public RuntimeArray
{
	ALIGN_FIELD (8) JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 m_Items[1];

	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		m_Items[index] = value;
	}
};
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
struct NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152  : public RuntimeArray
{
	ALIGN_FIELD (8) NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A m_Items[1];

	inline NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CannouncementU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CcurrentNodeU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnextNodeU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnativeContextU3Ek__BackingField))->___U3CannouncementU3Ek__BackingField), (void*)NULL);
		#endif
	}
	inline NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CannouncementU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CcurrentNodeU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnextNodeU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnativeContextU3Ek__BackingField))->___U3CannouncementU3Ek__BackingField), (void*)NULL);
		#endif
	}
};
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8  : public RuntimeArray
{
	ALIGN_FIELD (8) EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 m_Items[1];

	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
};
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9  : public RuntimeArray
{
	ALIGN_FIELD (8) CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 m_Items[1];

	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userData), (void*)NULL);
		#endif
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userData), (void*)NULL);
		#endif
	}
};
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562  : public RuntimeArray
{
	ALIGN_FIELD (8) AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D m_Items[1];

	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LocationName), (void*)NULL);
		#endif
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LocationName), (void*)NULL);
		#endif
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_gshared_inline (Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_1_IsValid_mE28D0DEC7BB8A4A921286FD5D7B1FB967CF1C8B1_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_1_get_IsDone_mC48CC186E4505E7279371FF795E69202D692BAAE_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_1_WaitForCompletion_m4E4B5C196ABB1FB73BC34C54E9E6E4955B6255F6_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_1_InternalGetDownloadStatus_mE368B3EC0D0617FAEB162B8DBCC3B0FCDCD05C3C_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_m052FD5134CC06547BA8188CEDD1E687F68158CAE_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_gshared_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_1_Release_m525B557AF9B665D33B03BB88680B2AEECB00C260_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_1_get_Result_m3BFABA5103704DD252ABCC2DDF622300E887773E_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_1_get_Status_m66615FF5C0E965DD89EC2878F815637D3D5C1672_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_1_get_OperationException_mD78C7A280DECB70FA64B42517EEEEFAB79BE3086_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 AsyncOperationHandle_1_Acquire_mD08A4CD8D98D771CDEFF1A2DCDBC16DC9C9556AD_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA1F84E8DE6EE58EC61B06CF79156F4D879EB22F4_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_set_Count_m492F175259EBBD40980CFEAD2552FAC80D2F9A7B_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Clear_mF853F852B3084238AD76E0F769EBFE6492D78286_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3993CA8E291739E42595747E5B7305E00D7715CC_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Dequeue_mF7595FEE7377BB38D320A113359E07F5CBCA1B7E_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mE9377ADF4C26AE9F3AF5B62ED82177660470E6EE_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Peek_m870CEBBE093C8C1F9F445EAFE8AE0126510DE5A1_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mEC6C3395C9379B1BD5A8BE44F8D0E39448739226_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Grow_m9837035CF2498C7C219035A9E7CDB91E5402D293_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCD4E03C1C8D93DFB2FEFA62131D99BA17E60C9DB_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF70E24A9CA369B3C8597846C926671C3EF187D34_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dispose_m0E9792F19EDAC0AEF274A9590A79F81BFC46A1EF_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* Array_Empty_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mC4B0FECC92855C44E71604889C944B897F116697_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* EnumerableHelpers_ToArray_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mE8EDD63BB58E43964F3C1C089DE188246185FF17_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3038138A08C09292EBA4F9B2F98272032CA11025_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mAB92E95FF9C31D670AAF9A160D818A474144C4AF_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC03638BE2272E9FEEBC121D971CA319F8D9436B1_gshared (Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD* __this, Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD40480C781DB3C748A1CCEE82EE83FAC25D94BEA_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_m552F576928C546170F4AD7013FE2771F6827B486_gshared (EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* ___0_array, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* EnumerableHelpers_ToArray_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m823DD3E24D0D38D0BB4C30AB8E1B14329F8EF4BB_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD_gshared (Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F* __this, Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D_gshared (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ___0_array, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* Array_Empty_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m9F1E47C2CABB5C014EFD54E6131CF0773FB3847C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* EnumerableHelpers_ToArray_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m360ED816490791952F3D2579432AB7DD998FACDF_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mE1E85E51C7EFF3DE8B0D63AF9DC53EF874D5C2F3_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m239E1DA9C68EB6BD2F78C2B5D189FDC39286A2B7_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m50EE6043B11E1C6A4492A3D3340DAD61FA366B53_gshared (Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A* __this, Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m55E9948839D8969A909A9E5202A65FAFEBD6138D_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m3739920CA87E2948569E7EFDDB00CF1E779947F0_gshared (ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_array, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* Array_Empty_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m8FA5840CC08FFC4902079926B1C5527808BD3755_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* EnumerableHelpers_ToArray_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m9A0DB32AB1E70F2E1664B1FF7D105D1D51E7B364_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAE49B79B9D188A1A02655AED630937902C02BF56_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m27A7CC4EBB067C684D9AD1872C85276705305BBE_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mADBFEB584F158FA209BEC236EDC9D5EE2E6D3684_gshared (Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35* __this, Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A06236F306C039FF5974FF3B7FCAA8B0AA79BFF_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m7C8C1A4C68F89589BC3D7A12812F51B4BFE33324_gshared (ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* ___0_array, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* Array_Empty_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_mE50439C1B1BF67A65FAFEDB0FA7AC2D70D46EF01_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* EnumerableHelpers_ToArray_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m18247BB464AD876B74C5E1AE527FC4E683859B21_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9513BF3E2C785969F5E8AA4B7CAF8EEB6FD1DA56_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m1440FA47B2CD0A95A5095BD426A1919131E6C38B_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAB470C6EE7746D1095CF3C1F55C91E48C2A288DA_gshared (Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA* __this, Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m742E3CA0B9EDA5A6BC9ACEE6AFBFED9115E6B270_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m833BBBFB793EACF9D301669E2AC4B78A8F82F0BA_gshared (AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* ___0_array, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* EnumerableHelpers_ToArray_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1D20801BA00DC3128E7FD23AF767610D335C1D69_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C_gshared (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18* __this, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73_gshared (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableHelpers_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFD5911DDBDB2B3C1BCDAEE1DDF9EA8DCD3C5A22_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE_gshared (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* EnumerableHelpers_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m47D67F4FA64C43B2A9D128F28E68587CC4936AFA_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6_gshared (Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59* __this, Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m21AD653D385418441AFA228C7669C7195302128F_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, int64_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* EnumerableHelpers_ToArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m9FE60EF16FC9F1660D9985A55E49DB74C66C07F6_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886_gshared (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE_gshared (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* EnumerableHelpers_ToArray_TisRuntimeObject_m4BA4DBD38B4DA66F8DEB40393971473B983BE06A_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_gshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* EnumerableHelpers_ToArray_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m4C2B20AC08050C8CEC18D394991A5A6C43957ECD_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA_gshared (Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1* __this, Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947_gshared (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ___0_array, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* EnumerableHelpers_ToArray_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_m06E2D92F346ECE1D3006850C5D354508A2E348AD_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E_gshared (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294_gshared (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___0_array, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* EnumerableHelpers_ToArray_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_m5C72A1C51AEA21BEEA39D2EA5519077F16929B4F_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB_gshared (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710* __this, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F_gshared (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___0_array, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m9E1E291F68BC8D68EBCBF0394CF1117A15C9378A_gshared (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

inline DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_inline (Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* __this, const RuntimeMethod* method)
{
	return ((  DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D (*) (Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434*, const RuntimeMethod*))Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_gshared_inline)(__this, method);
}
inline bool AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_IsValid_mE28D0DEC7BB8A4A921286FD5D7B1FB967CF1C8B1_gshared)(__this, method);
}
inline bool AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_get_IsDone_mC48CC186E4505E7279371FF795E69202D692BAAE_gshared)(__this, method);
}
inline RuntimeObject* AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_WaitForCompletion_m4E4B5C196ABB1FB73BC34C54E9E6E4955B6255F6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, float ___0_unscaledDeltaTime, const RuntimeMethod* method) ;
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
inline DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method)
{
	return ((  DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))AsyncOperationHandle_1_InternalGetDownloadStatus_mE368B3EC0D0617FAEB162B8DBCC3B0FCDCD05C3C_gshared)(__this, ___0_visited, method);
}
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_mB435C4396E3D17F8DBF99AAB24431AB5C60E7292 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ___0_obj, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90, const RuntimeMethod*))AsyncOperationHandle_1_op_Implicit_m052FD5134CC06547BA8188CEDD1E687F68158CAE_gshared)(___0_obj, method);
}
inline void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, const RuntimeMethod*))List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_gshared_inline)(__this, ___0_item, method);
}
inline void AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_Release_m525B557AF9B665D33B03BB88680B2AEECB00C260_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline RuntimeObject* AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_get_Result_m3BFABA5103704DD252ABCC2DDF622300E887773E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
inline float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
inline int32_t AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_get_Status_m66615FF5C0E965DD89EC2878F815637D3D5C1672_gshared)(__this, method);
}
inline Exception_t* AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_get_OperationException_mD78C7A280DECB70FA64B42517EEEEFAB79BE3086_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_op, const RuntimeMethod* method) ;
inline AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_Acquire_mD08A4CD8D98D771CDEFF1A2DCDBC16DC9C9556AD_gshared)(__this, method);
}
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryPackWriter_WriteNullCollectionHeader_m53BA106A7F32F868C8195C61351F9B5186ECF615_inline (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryPackWriter_WriteCollectionHeader_mC1F711AC12DABDE2595F282A0A43167395A0E1DD_inline (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryPackReader_TryReadCollectionHeader_m4C7FF4723026CC89738F84AA42F9480C2410F5C3_inline (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, int32_t* ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMemoryHelper_RemoveNativeMemoryByte_mE206862C7599EECAAB3066D023E1F10E0BEF325A (int64_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeMemoryHelper_Alloc_m7B1957F97AAB297DF09D837E97AF0176CE89910D_inline (uintptr_t ___0_byteCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeMemoryHelper_Alloc_m981BCB43B713A386BFFF2BDE9F55530F0B9C71B8_inline (uintptr_t ___0_elementCount, uintptr_t ___1_elementSize, const RuntimeMethod* method) ;
inline int32_t Queue_1_get_Count_mA1F84E8DE6EE58EC61B06CF79156F4D879EB22F4_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))Queue_1_get_Count_mA1F84E8DE6EE58EC61B06CF79156F4D879EB22F4_gshared_inline)(__this, method);
}
inline void Queue_1_set_Count_m492F175259EBBD40980CFEAD2552FAC80D2F9A7B_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))Queue_1_set_Count_m492F175259EBBD40980CFEAD2552FAC80D2F9A7B_gshared_inline)(__this, ___0_value, method);
}
inline void Queue_1_Clear_mF853F852B3084238AD76E0F769EBFE6492D78286_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))Queue_1_Clear_mF853F852B3084238AD76E0F769EBFE6492D78286_gshared_inline)(__this, method);
}
inline void Queue_1_Enqueue_m3993CA8E291739E42595747E5B7305E00D7715CC_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Queue_1_Enqueue_m3993CA8E291739E42595747E5B7305E00D7715CC_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_QueueEmptyException_mE64DD6E0A95440A157482982EDF552E803C3E19F (const RuntimeMethod* method) ;
inline void Queue_1_Dequeue_mF7595FEE7377BB38D320A113359E07F5CBCA1B7E_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Queue_1_Dequeue_mF7595FEE7377BB38D320A113359E07F5CBCA1B7E_gshared_inline)((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)__this, il2cppRetVal, method);
}
inline bool Queue_1_TryDequeue_mE9377ADF4C26AE9F3AF5B62ED82177660470E6EE_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Queue_1_TryDequeue_mE9377ADF4C26AE9F3AF5B62ED82177660470E6EE_gshared_inline)(__this, ___0_result, method);
}
inline void Queue_1_Peek_m870CEBBE093C8C1F9F445EAFE8AE0126510DE5A1_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Queue_1_Peek_m870CEBBE093C8C1F9F445EAFE8AE0126510DE5A1_gshared_inline)((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)__this, il2cppRetVal, method);
}
inline bool Queue_1_TryPeek_mEC6C3395C9379B1BD5A8BE44F8D0E39448739226_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Queue_1_TryPeek_mEC6C3395C9379B1BD5A8BE44F8D0E39448739226_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void Queue_1_Grow_m9837035CF2498C7C219035A9E7CDB91E5402D293_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))Queue_1_Grow_m9837035CF2498C7C219035A9E7CDB91E5402D293_gshared_inline)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A_inline (void* ___0_destination, void* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline void Queue_1_SetCapacity_mCD4E03C1C8D93DFB2FEFA62131D99BA17E60C9DB (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mCD4E03C1C8D93DFB2FEFA62131D99BA17E60C9DB_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF70E24A9CA369B3C8597846C926671C3EF187D34_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF70E24A9CA369B3C8597846C926671C3EF187D34_gshared_inline)(__this, ___0_index, method);
}
inline void Queue_1_Dispose_m0E9792F19EDAC0AEF274A9590A79F81BFC46A1EF (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))Queue_1_Dispose_m0E9792F19EDAC0AEF274A9590A79F81BFC46A1EF_gshared)(__this, method);
}
inline EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* Array_Empty_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mC4B0FECC92855C44E71604889C944B897F116697_inline (const RuntimeMethod* method)
{
	return ((  EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* (*) (const RuntimeMethod*))Array_Empty_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mC4B0FECC92855C44E71604889C944B897F116697_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
inline EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* EnumerableHelpers_ToArray_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mE8EDD63BB58E43964F3C1C089DE188246185FF17 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mE8EDD63BB58E43964F3C1C089DE188246185FF17_gshared)(___0_source, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void Queue_1_SetCapacity_m3038138A08C09292EBA4F9B2F98272032CA11025 (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m3038138A08C09292EBA4F9B2F98272032CA11025_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mAB92E95FF9C31D670AAF9A160D818A474144C4AF (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mAB92E95FF9C31D670AAF9A160D818A474144C4AF_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mC03638BE2272E9FEEBC121D971CA319F8D9436B1 (Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD* __this, Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD*, Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA*, const RuntimeMethod*))Enumerator__ctor_mC03638BE2272E9FEEBC121D971CA319F8D9436B1_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mD40480C781DB3C748A1CCEE82EE83FAC25D94BEA (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mD40480C781DB3C748A1CCEE82EE83FAC25D94BEA_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_m552F576928C546170F4AD7013FE2771F6827B486 (EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* ___0_array, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0*, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_m552F576928C546170F4AD7013FE2771F6827B486_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_inline (const RuntimeMethod* method)
{
	return ((  ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* (*) (const RuntimeMethod*))Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_gshared_inline)(method);
}
inline ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* EnumerableHelpers_ToArray_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m823DD3E24D0D38D0BB4C30AB8E1B14329F8EF4BB (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m823DD3E24D0D38D0BB4C30AB8E1B14329F8EF4BB_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD (Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F* __this, Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F*, Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73*, const RuntimeMethod*))Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ___0_array, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* Array_Empty_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m9F1E47C2CABB5C014EFD54E6131CF0773FB3847C_inline (const RuntimeMethod* method)
{
	return ((  ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* (*) (const RuntimeMethod*))Array_Empty_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m9F1E47C2CABB5C014EFD54E6131CF0773FB3847C_gshared_inline)(method);
}
inline ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* EnumerableHelpers_ToArray_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m360ED816490791952F3D2579432AB7DD998FACDF (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m360ED816490791952F3D2579432AB7DD998FACDF_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_mE1E85E51C7EFF3DE8B0D63AF9DC53EF874D5C2F3 (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mE1E85E51C7EFF3DE8B0D63AF9DC53EF874D5C2F3_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m239E1DA9C68EB6BD2F78C2B5D189FDC39286A2B7 (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m239E1DA9C68EB6BD2F78C2B5D189FDC39286A2B7_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m50EE6043B11E1C6A4492A3D3340DAD61FA366B53 (Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A* __this, Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A*, Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0*, const RuntimeMethod*))Enumerator__ctor_m50EE6043B11E1C6A4492A3D3340DAD61FA366B53_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m55E9948839D8969A909A9E5202A65FAFEBD6138D (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m55E9948839D8969A909A9E5202A65FAFEBD6138D_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m3739920CA87E2948569E7EFDDB00CF1E779947F0 (ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_array, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m3739920CA87E2948569E7EFDDB00CF1E779947F0_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* Array_Empty_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m8FA5840CC08FFC4902079926B1C5527808BD3755_inline (const RuntimeMethod* method)
{
	return ((  ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* (*) (const RuntimeMethod*))Array_Empty_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m8FA5840CC08FFC4902079926B1C5527808BD3755_gshared_inline)(method);
}
inline ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* EnumerableHelpers_ToArray_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m9A0DB32AB1E70F2E1664B1FF7D105D1D51E7B364 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m9A0DB32AB1E70F2E1664B1FF7D105D1D51E7B364_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_mAE49B79B9D188A1A02655AED630937902C02BF56 (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mAE49B79B9D188A1A02655AED630937902C02BF56_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m27A7CC4EBB067C684D9AD1872C85276705305BBE (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m27A7CC4EBB067C684D9AD1872C85276705305BBE_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mADBFEB584F158FA209BEC236EDC9D5EE2E6D3684 (Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35* __this, Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35*, Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F*, const RuntimeMethod*))Enumerator__ctor_mADBFEB584F158FA209BEC236EDC9D5EE2E6D3684_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m8A06236F306C039FF5974FF3B7FCAA8B0AA79BFF (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m8A06236F306C039FF5974FF3B7FCAA8B0AA79BFF_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m7C8C1A4C68F89589BC3D7A12812F51B4BFE33324 (ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* ___0_array, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9*, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m7C8C1A4C68F89589BC3D7A12812F51B4BFE33324_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* Array_Empty_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_mE50439C1B1BF67A65FAFEDB0FA7AC2D70D46EF01_inline (const RuntimeMethod* method)
{
	return ((  AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* (*) (const RuntimeMethod*))Array_Empty_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_mE50439C1B1BF67A65FAFEDB0FA7AC2D70D46EF01_gshared_inline)(method);
}
inline AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* EnumerableHelpers_ToArray_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m18247BB464AD876B74C5E1AE527FC4E683859B21 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m18247BB464AD876B74C5E1AE527FC4E683859B21_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_m9513BF3E2C785969F5E8AA4B7CAF8EEB6FD1DA56 (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9513BF3E2C785969F5E8AA4B7CAF8EEB6FD1DA56_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m1440FA47B2CD0A95A5095BD426A1919131E6C38B (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m1440FA47B2CD0A95A5095BD426A1919131E6C38B_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mAB470C6EE7746D1095CF3C1F55C91E48C2A288DA (Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA* __this, Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA*, Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415*, const RuntimeMethod*))Enumerator__ctor_mAB470C6EE7746D1095CF3C1F55C91E48C2A288DA_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m742E3CA0B9EDA5A6BC9ACEE6AFBFED9115E6B270 (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m742E3CA0B9EDA5A6BC9ACEE6AFBFED9115E6B270_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m833BBBFB793EACF9D301669E2AC4B78A8F82F0BA (AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* ___0_array, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D*, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m833BBBFB793EACF9D301669E2AC4B78A8F82F0BA_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline (const RuntimeMethod* method)
{
	return ((  EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* (*) (const RuntimeMethod*))Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_gshared_inline)(method);
}
inline EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* EnumerableHelpers_ToArray_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1D20801BA00DC3128E7FD23AF767610D335C1D69 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1D20801BA00DC3128E7FD23AF767610D335C1D69_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18* __this, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18*, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, const RuntimeMethod*))Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73 (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableHelpers_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFD5911DDBDB2B3C1BCDAEE1DDF9EA8DCD3C5A22 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFD5911DDBDB2B3C1BCDAEE1DDF9EA8DCD3C5A22_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0*, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline (const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (const RuntimeMethod*))Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline)(method);
}
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* EnumerableHelpers_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m47D67F4FA64C43B2A9D128F28E68587CC4936AFA (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m47D67F4FA64C43B2A9D128F28E68587CC4936AFA_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6 (Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59* __this, Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59*, Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F*, const RuntimeMethod*))Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6 (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m21AD653D385418441AFA228C7669C7195302128F (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, int64_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, int64_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m21AD653D385418441AFA228C7669C7195302128F_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method)
{
	return ((  JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* (*) (const RuntimeMethod*))Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline)(method);
}
inline JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* EnumerableHelpers_ToArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m9FE60EF16FC9F1660D9985A55E49DB74C66C07F6 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m9FE60EF16FC9F1660D9985A55E49DB74C66C07F6_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886 (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B*, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, const RuntimeMethod*))Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* EnumerableHelpers_ToArray_TisRuntimeObject_m4BA4DBD38B4DA66F8DEB40393971473B983BE06A (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisRuntimeObject_m4BA4DBD38B4DA66F8DEB40393971473B983BE06A_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A*, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_gshared)(__this, ___0_q, method);
}
inline NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_inline (const RuntimeMethod* method)
{
	return ((  NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* (*) (const RuntimeMethod*))Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_gshared_inline)(method);
}
inline NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* EnumerableHelpers_ToArray_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m4C2B20AC08050C8CEC18D394991A5A6C43957ECD (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m4C2B20AC08050C8CEC18D394991A5A6C43957ECD_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9 (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA (Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1* __this, Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1*, Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF*, const RuntimeMethod*))Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947 (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ___0_array, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline (const RuntimeMethod* method)
{
	return ((  EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* (*) (const RuntimeMethod*))Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline)(method);
}
inline EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* EnumerableHelpers_ToArray_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_m06E2D92F346ECE1D3006850C5D354508A2E348AD (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_m06E2D92F346ECE1D3006850C5D354508A2E348AD_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602*, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, const RuntimeMethod*))Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294 (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___0_array, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline (const RuntimeMethod* method)
{
	return ((  CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* (*) (const RuntimeMethod*))Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline)(method);
}
inline CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* EnumerableHelpers_ToArray_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_m5C72A1C51AEA21BEEA39D2EA5519077F16929B4F (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_m5C72A1C51AEA21BEEA39D2EA5519077F16929B4F_gshared)(___0_source, ___1_length, method);
}
inline void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710* __this, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710*, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, const RuntimeMethod*))Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___0_array, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* MemoryPackWriter_GetSpanReference_mBDC9FBD579D01DDDE17F4A277D51ADFD33BEEACA_inline (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryPackWriter_Advance_m35C954056DFEACA18B05DF9960E50ED90747A734_inline (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* MemoryPackReader_GetSpanReference_m5F005E327CC44E9D1A08210A11B0314FC079E0FD_inline (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryPackReader_Advance_m06C8CE0CEB90DE03132604EDE763603CC31D771C_inline (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MemoryPackReader_get_Remaining_m18B9E48E8AA0279DB66FFCB6661BA6EB0B5D7D5B (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryPackSerializationException_ThrowInsufficientBufferUnless_m23970143F2327E35304ABE38D2E94D525CFBE96C (int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMemoryHelper_AddNativeMemoryByte_mE19F6B6288DBD3999BF4BD0F9F9BCB3D91EE6059 (int64_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8 (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m9E1E291F68BC8D68EBCBF0394CF1117A15C9378A (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, const RuntimeMethod*))List_1_AddWithResize_m9E1E291F68BC8D68EBCBF0394CF1117A15C9378A_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void MemoryPackWriter_RequestNewBuffer_m107A5DDAC8A672E1322C77C7BFE4F0D8FFA5C006 (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryPackSerializationException_ThrowInvalidAdvance_mA9603926B71A1AA4578842A57119A8C071791AF3 (const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___0_start, method);
}
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR uint8_t* MemoryPackReader_GetNextSpan_mCB472048C2C0293133E2CEEADA557F998319C193 (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool MemoryPackReader_TryAdvanceSequence_mAF6CD8105C21596A398467C927365A0F6BDB9D89 (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, int32_t ___0_count, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___0_start, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProviderOperation_1_UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key_m9132B01400BADDE7AB512BBAAB6832088DDDCA49_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key_m43B227E8859BA2A5A4CEA9361D4FEC2AC5DAC1DF_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProviderOperation_1_get_ProvideHandleVersion_mBDD8AAB821064F3B489425D0640976BEB5409899_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProviderOperation_1_get_Location_mECFD0245303B531C9CDB7D85AFBEF59EB15E88F1_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_SetDownloadProgressCallback_mD1DC111957E3374ACE89BBC17193BA415848AAD2_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* ___0_callback, const RuntimeMethod* method) 
{
	{
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_0 = ___0_callback;
		il2cpp_codegen_write_instance_field_data<Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0);
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_1 = *(Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_2 = *(Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_2);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_3;
		L_3 = Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_inline(L_2, NULL);
		il2cpp_codegen_write_instance_field_data<DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_3);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_SetWaitForCompletionCallback_m423812D46C9DC8C0994E0AEB680139EAC4D01770_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_callback, const RuntimeMethod* method) 
{
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___0_callback;
		il2cpp_codegen_write_instance_field_data<Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProviderOperation_1_InvokeWaitForCompletion_m1A683F8730407E547EBA3316C7AA0FBEC4344A17_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B8_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B7_0 = NULL;
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		bool L_0;
		L_0 = ((  bool (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if (!L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)1;
	}

IL_0012:
	{
		bool L_2;
		L_2 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		bool L_3;
		L_3 = AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var);
	}

IL_0038:
	{
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_5 = *(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),4));
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_6 = L_5;
		if (L_6)
		{
			G_B8_0 = L_6;
			goto IL_0044;
		}
		G_B7_0 = L_6;
	}
	{
		goto IL_004e;
	}

IL_0044:
	{
		float L_7;
		L_7 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(G_B8_0);
		ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C(G_B8_0, L_7, NULL);
	}

IL_004e:
	{
		bool L_8 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),10));
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		((  void (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
	}

IL_005c:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_9 = *(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0066:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_10 = *(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_10);
		bool L_11;
		L_11 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D ProviderOperation_1_GetDownloadStatus_mFDB93DBF7D6C6444B88637DF56AA243942995C5F_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_1;
	memset((&V_1), 0, sizeof(V_1));
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_1 = V_1;
		G_B3_0 = L_1;
		goto IL_0024;
	}

IL_0018:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_2 = ___0_visited;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_3;
		L_3 = AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), L_2, AsyncOperationHandle_1_InternalGetDownloadStatus_mB5722FDD78A3C1070EB8D85F52C41FF1D22DAA3B_RuntimeMethod_var);
		G_B3_0 = L_3;
	}

IL_0024:
	{
		V_0 = G_B3_0;
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_4 = *(Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* L_5 = *(Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_5);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_6;
		L_6 = Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_inline(L_5, NULL);
		il2cpp_codegen_write_instance_field_data<DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_6);
	}

IL_003e:
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		int32_t L_7;
		L_7 = ((  int32_t (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_8 = (((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5))))->___TotalBytes;
		(((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5))))->___DownloadedBytes = L_8;
	}

IL_005d:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		int64_t L_9 = (((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5))))->___DownloadedBytes;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_10 = V_0;
		int64_t L_11 = L_10.___DownloadedBytes;
		(&V_1)->___DownloadedBytes = ((int64_t)il2cpp_codegen_add(L_9, L_11));
		int64_t L_12 = (((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5))))->___TotalBytes;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_13 = V_0;
		int64_t L_14 = L_13.___TotalBytes;
		(&V_1)->___TotalBytes = ((int64_t)il2cpp_codegen_add(L_12, L_14));
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		bool L_15;
		L_15 = ((  bool (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		(&V_1)->___IsDone = L_15;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1__ctor_m19974AF8E637426AAD4061FD1EEF012469132314_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (bool)1);
		((  void (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_GetDependencies_m44CD61303C9D48A944251D83C2496D002F39562C_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_deps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mB435C4396E3D17F8DBF99AAB24431AB5C60E7292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = ___0_deps;
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_2 = *(AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_3;
		L_3 = AsyncOperationHandle_1_op_Implicit_mB435C4396E3D17F8DBF99AAB24431AB5C60E7292(L_2, AsyncOperationHandle_1_op_Implicit_mB435C4396E3D17F8DBF99AAB24431AB5C60E7292_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_inline(L_1, L_3, List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_ReleaseDependencies_m52D8CF19801FC51D0A9FE2DBFFC072A9C1373B29_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProviderOperation_1_get_DebugName_m5FF758F052493E4D4252CB1A0E89E411EC8B78B5_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05610D25C7DBBDB071AEA3EBE257EB80F7BE35A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck((MemberInfo_t*)L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(23, (MemberInfo_t*)L_1);
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if (!L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral05610D25C7DBBDB071AEA3EBE257EB80F7BE35A9;
			goto IL_002f;
		}
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral05610D25C7DBBDB071AEA3EBE257EB80F7BE35A9;
	}
	{
		RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = ((  String_t* (*) (String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0034;
	}

IL_002f:
	{
		G_B3_0 = _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0034:
	{
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(G_B3_2, (RuntimeObject*)G_B3_1, (RuntimeObject*)G_B3_0, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_GetDependencies_mDB1581BDC6A11F06A0975706B14E90EA5416481B_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, RuntimeObject* ___0_dstList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_dstList;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(3, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		bool L_1;
		L_1 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		RuntimeObject* L_2;
		L_2 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		V_0 = 0;
		goto IL_0049;
	}

IL_0026:
	{
		RuntimeObject* L_3 = ___0_dstList;
		RuntimeObject* L_4;
		L_4 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_6;
		L_6 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_4, L_5);
		V_1 = L_6;
		RuntimeObject* L_7;
		L_7 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746((&V_1), NULL);
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0049:
	{
		int32_t L_9 = V_0;
		RuntimeObject* L_10;
		L_10 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ProviderOperation_1_get_RequestedType_m7A3E5D62B21563EF98B7355A41F75F5C4C7D2FC7_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProviderOperation_1_get_DependencyCount_mD3A85E95B0D27E7D1901EC1F9257B5FBE8AD4A4A_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		return L_3;
	}

IL_002b:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_SetProgressCallback_m0C600CFCA23A9BD990638E5F03D591FB64E438D2_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___0_callback, const RuntimeMethod* method) 
{
	{
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ___0_callback;
		il2cpp_codegen_write_instance_field_data<Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProviderOperation_1_get_Progress_m3BFE08D3630AEBF7B468031FD8C8050312F39442_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	RuntimeObject* V_2 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			V_0 = (1.0f);
			V_1 = (0.0f);
			Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = *(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			if (!L_0)
			{
				goto IL_0022_1;
			}
		}
		{
			float L_1 = V_1;
			Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_2 = *(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			NullCheck(L_2);
			float L_3;
			L_3 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_2, NULL);
			V_1 = ((float)il2cpp_codegen_add(L_1, L_3));
		}

IL_0022_1:
		{
			bool L_4;
			L_4 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_004e_1;
			}
		}
		{
			RuntimeObject* L_5;
			L_5 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_004e_1;
			}
		}
		{
			RuntimeObject* L_6;
			L_6 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
			NullCheck((RuntimeObject*)L_6);
			int32_t L_7;
			L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			if (L_7)
			{
				goto IL_0060_1;
			}
		}

IL_004e_1:
		{
			float L_8 = V_1;
			V_1 = ((float)il2cpp_codegen_add(L_8, (1.0f)));
			float L_9 = V_0;
			V_0 = ((float)il2cpp_codegen_add(L_9, (1.0f)));
			goto IL_00a0_1;
		}

IL_0060_1:
		{
			RuntimeObject* L_10;
			L_10 = AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Result_m7F9FBE56DE53D3672C79D753722BA4B411722ECC_RuntimeMethod_var);
			NullCheck((RuntimeObject*)L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			V_2 = L_11;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0096_1:
				{
					{
						RuntimeObject* L_12 = V_2;
						if (!L_12)
						{
							goto IL_009f_1;
						}
					}
					{
						RuntimeObject* L_13 = V_2;
						NullCheck((RuntimeObject*)L_13);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
					}

IL_009f_1:
					{
						return;
					}
				}
			});
			try
			{
				{
					goto IL_008c_2;
				}

IL_0073_2:
				{
					RuntimeObject* L_14 = V_2;
					NullCheck(L_14);
					AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_15;
					L_15 = InterfaceFuncInvoker0< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D >::Invoke(0, IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var, L_14);
					V_3 = L_15;
					float L_16 = V_1;
					float L_17;
					L_17 = AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC((&V_3), NULL);
					V_1 = ((float)il2cpp_codegen_add(L_16, L_17));
					float L_18 = V_0;
					V_0 = ((float)il2cpp_codegen_add(L_18, (1.0f)));
				}

IL_008c_2:
				{
					RuntimeObject* L_19 = V_2;
					NullCheck((RuntimeObject*)L_19);
					bool L_20;
					L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
					if (L_20)
					{
						goto IL_0073_2;
					}
				}
				{
					goto IL_00a0_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00a0_1:
		{
			float L_21 = V_1;
			float L_22 = V_0;
			float L_23;
			L_23 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)(L_21/L_22)), (0.99000001f), NULL);
			V_4 = L_23;
			goto IL_00bb;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b1;
		}
		throw e;
	}

CATCH_00b1:
	{
		RuntimeObject* L_24 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_4 = (0.0f);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00bb;
	}

IL_00bb:
	{
		float L_25 = V_4;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_Execute_m5AB0103E567E4B76200979C1850CD6B8F22B91DE_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FBAEBA1E034B056BB4A216B2BE8DC46B7EE5F4);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	memset(V_0, 0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_1;
		L_1 = AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_Status_m2826D9CA9BE09868CC0A611B33DFE15B03C1F047_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(5, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_2);
		if (((int32_t)((int32_t)L_3&1)))
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		Exception_t* L_5;
		L_5 = AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_OperationException_m45DB51ADF168EF07BEAFFD24D5A6ECAB7DE916AA_RuntimeMethod_var);
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_6, _stringLiteral50FBAEBA1E034B056BB4A216B2BE8DC46B7EE5F4, L_5, NULL);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_4: *(void**)L_4), (bool)0, L_6);
		return;
	}

IL_0050:
	{
	}
	try
	{
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_8 = *(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A((&L_9), L_8, (RuntimeObject*)__this, NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 >::Invoke(3, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_7, L_9);
		goto IL_007e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006a;
		}
		throw e;
	}

CATCH_006a:
	{
		Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_10;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		Exception_t* L_12 = V_1;
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_11: *(void**)L_11), (bool)0, L_12);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_007e;
	}

IL_007e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_Init_mEFE6E513E1513A37413C78471FC21A68007608DC_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_provider, RuntimeObject* ___2_location, AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ___3_depOp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = ___0_rm;
		il2cpp_codegen_write_instance_field_data<ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_0);
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_1 = ___3_depOp;
		il2cpp_codegen_write_instance_field_data<AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_1);
		bool L_2;
		L_2 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_3;
		L_3 = AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var);
	}

IL_0034:
	{
		RuntimeObject* L_4 = ___1_provider;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_4);
		RuntimeObject* L_5 = ___2_location;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_5);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (bool)1);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), (bool)0);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_6 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_6, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), NULL);
		((  void (*) (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_Init_m6FB45614D4B23A2205066979498648BAD719AC30_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_provider, RuntimeObject* ___2_location, AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ___3_depOp, bool ___4_releaseDependenciesOnFailure, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((((DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = ___0_rm;
		il2cpp_codegen_write_instance_field_data<ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_0);
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_1 = ___3_depOp;
		il2cpp_codegen_write_instance_field_data<AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_1);
		bool L_2;
		L_2 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_3;
		L_3 = AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_Acquire_mCDDF68BFF0F5C6450044727445B62722A15BDC0D_RuntimeMethod_var);
	}

IL_0034:
	{
		RuntimeObject* L_4 = ___1_provider;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_4);
		RuntimeObject* L_5 = ___2_location;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_5);
		bool L_6 = ___4_releaseDependenciesOnFailure;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_6);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), (bool)0);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), NULL);
		((  void (*) (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProviderOperation_1_WaitForCompletionHandler_m12B7892D284BFED6E77B8B6AEAB721321D43F0B9_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		bool L_0;
		L_0 = ((  bool (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		bool L_1;
		L_1 = AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_get_IsDone_m5CE276DB16D5DC467F8DC24D48C1F9673A3B6786_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_WaitForCompletion_m79B9DA519122674BFB51B968E6E7C94B04D1267B_RuntimeMethod_var);
	}

IL_0023:
	{
		bool L_3 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),10));
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		((  void (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
	}

IL_0031:
	{
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		bool L_4;
		L_4 = ((  bool (*) (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderOperation_1_Destroy_mAD684589B6D012AAEAE81664C37787E0B4369010_gshared (ProviderOperation_1_tDAD2CCF2EA2F73241DAE27B960D161573DF9686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	memset(V_0, 0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_3);
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(4, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_1, L_2, L_4);
	}

IL_0024:
	{
		bool L_5;
		L_5 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1((((AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
	}

IL_003c:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TObject_tDC9E3BF6AF8A685EECA3DA99B40EE4249DCF8D89);
		NullCheck((AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (AsyncOperationBase_1_tC223E14A32A76ACAD6A5CFD6C86F5C96F083B751*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_6: *(void**)L_6));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueDebugView_1__ctor_m5BED8A79886FE8FC41265AEFE9E49359FCF9CD51_gshared (QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_queue, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = ___0_queue;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26E2095A8B52212AA5C1E02D88D8E33A9DB72C3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = ___0_queue;
		__this->____queue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____queue), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* QueueDebugView_1_get_Items_m40CEA51D3341696D2675BA8401D968731793C48F_gshared (QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E* __this, const RuntimeMethod* method) 
{
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = __this->____queue;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueFormatter_1_Serialize_m57A217B98CC80E7749ECE2F30CB25039B8338AE4_gshared (QueueFormatter_1_t517714ABF327D2AD5711D51C35BC1C5932471E06* __this, MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* ___0_writer, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t5E134D830D3FFE0E11B005ABC1A29051C9EC3EF2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_11 = alloca(SizeOf_Enumerator_t5E134D830D3FFE0E11B005ABC1A29051C9EC3EF2);
	RuntimeObject* V_0 = NULL;
	Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C V_1 = alloca(SizeOf_Enumerator_t5E134D830D3FFE0E11B005ABC1A29051C9EC3EF2);
	memset(V_1, 0, SizeOf_Enumerator_t5E134D830D3FFE0E11B005ABC1A29051C9EC3EF2);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
	memset(V_2, 0, SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_0 = ___1_value;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = *((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)L_0);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* L_2 = ___0_writer;
		MemoryPackWriter_WriteNullCollectionHeader_m53BA106A7F32F868C8195C61351F9B5186ECF615_inline(L_2, NULL);
		return;
	}

IL_000b:
	{
		MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* L_3 = ___0_writer;
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_0 = L_4;
		MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* L_5 = ___0_writer;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_6 = ___1_value;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = *((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)L_6);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		MemoryPackWriter_WriteCollectionHeader_mC1F711AC12DABDE2595F282A0A43167395A0E1DD_inline(L_5, L_8, NULL);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_9 = ___1_value;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = *((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)L_9);
		NullCheck(L_10);
		InvokerActionInvoker1< Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_10, (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_11);
		il2cpp_codegen_memcpy(V_1, L_11, SizeOf_Enumerator_t5E134D830D3FFE0E11B005ABC1A29051C9EC3EF2);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 6), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_12, (void*)(Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)V_1);
				return;
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_0029_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)V_1, (Il2CppFullySharedGenericAny*)L_13);
				il2cpp_codegen_memcpy(V_2, L_13, SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
				RuntimeObject* L_14 = V_0;
				MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* L_15 = ___0_writer;
				NullCheck(L_14);
				InterfaceActionInvoker2< MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_14, L_15, (Il2CppFullySharedGenericAny*)V_2);
			}

IL_003a_1:
			{
				bool L_16;
				L_16 = ((  bool (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				if (L_16)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_0053;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueFormatter_1_Deserialize_m74AFD6EC1E112746EFEE05E85FE5CBF76C0796F4_gshared (QueueFormatter_1_t517714ABF327D2AD5711D51C35BC1C5932471E06* __this, MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* ___0_reader, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
	memset(V_3, 0, SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
	{
		MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* L_0 = ___0_reader;
		bool L_1;
		L_1 = MemoryPackReader_TryReadCollectionHeader_m4C7FF4723026CC89738F84AA42F9480C2410F5C3_inline(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_2 = ___1_value;
		*((RuntimeObject**)L_2) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)NULL);
		return;
	}

IL_000e:
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_3 = ___1_value;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = *((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)L_3);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_5 = ___1_value;
		int32_t L_6 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_7, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		goto IL_0023;
	}

IL_001c:
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_8 = ___1_value;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_9 = *((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)L_8);
		NullCheck(L_9);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0023:
	{
		MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* L_10 = ___0_reader;
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_1 = L_11;
		V_2 = 0;
		goto IL_004b;
	}

IL_002e:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
		RuntimeObject* L_12 = V_1;
		MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* L_13 = ___0_reader;
		NullCheck(L_12);
		InterfaceActionInvoker2< MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568*, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_12, L_13, (Il2CppFullySharedGenericAny*)V_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_14 = ___1_value;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_15 = *((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)L_14);
		il2cpp_codegen_memcpy(L_16, V_3, SizeOf_T_t9DA462113BF116708F69407DD4EE92854F181008);
		NullCheck(L_15);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_16: *(void**)L_16));
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004b:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueFormatter_1__ctor_m3CE17917209B24603B15D64E341A6BB4C7997694_gshared (QueueFormatter_1_t517714ABF327D2AD5711D51C35BC1C5932471E06* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (MemoryPackFormatter_1_tC3A6C2680519CA6CCBC3A736F60F813BB0DA80FF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((MemoryPackFormatter_1_tC3A6C2680519CA6CCBC3A736F60F813BB0DA80FF*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueSerializer_1__ctor_m99A462041DC92660F8B4CC1FC9B9EE479BE60CBD_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueSerializer_1__ctor_m3EE588C0F6E67452AEB870508BB953B1743541F4_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, RuntimeObject* ___0_itemSerializer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_itemSerializer;
		((  void (*) (EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueSerializer_1__ctor_m52A759FD1175324398CCCB9B0401FFCA1D3B3742_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, RuntimeObject* ___0_serializerRegistry, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_serializerRegistry;
		((  void (*) (EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* QueueSerializer_1_WithItemSerializer_mB7869697487B826AB49E9D8B1FD93FFEA3DB2E68_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, RuntimeObject* ___0_itemSerializer, const RuntimeMethod* method) 
{
	QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_itemSerializer;
		QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* L_1 = (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueSerializer_1_AddItem_mBF13647F292A67DA73F18D0325FCF32D133634C5_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, RuntimeObject* ___0_accumulator, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TItem_t6F66E81FB60038898ACE2B006B1FCC6B090DD208 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TItem_t6F66E81FB60038898ACE2B006B1FCC6B090DD208);
	{
		RuntimeObject* L_0 = ___0_accumulator;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_item : &___1_item), SizeOf_TItem_t6F66E81FB60038898ACE2B006B1FCC6B090DD208);
		NullCheck(((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 8))));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), ((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 8))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueueSerializer_1_CreateAccumulator_mB57E4E81270E64F65BB6E6878D43086D3AB9D0FA_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = (RuntimeObject*)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueueSerializer_1_EnumerateItemsInSerializationOrder_m4A4FCD962BEDC5C5371D1E5C84E11D18913597DD_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = ___0_value;
		V_0 = (RuntimeObject*)L_0;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* QueueSerializer_1_FinalizeResult_mD3C96FFB61F9EA77F454FB58F1EACA46FE02313F_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, RuntimeObject* ___0_accumulator, const RuntimeMethod* method) 
{
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_accumulator;
		V_0 = ((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		goto IL_000a;
	}

IL_000a:
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueueSerializer_1_MongoDB_Bson_Serialization_IChildSerializerConfigurable_get_ChildSerializer_m1D4DA1C48725E13494139A7E973EE6D36E3F86D0_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((EnumerableSerializerBase_2_tC09EFD02C38C7859C7962F6AF5E0064412B4CD8D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueueSerializer_1_MongoDB_Bson_Serialization_IChildSerializerConfigurable_WithChildSerializer_m15D5A349345CD90C6CA11636B2870C7AE5EFE073_gshared (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* __this, RuntimeObject* ___0_childSerializer, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_childSerializer;
		QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* L_1;
		L_1 = ((  QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C* (*) (QueueSerializer_1_t1711ED37D680ABAC0D5FF70B65145895A3E7E68C*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 3))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject*)L_1;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_2 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3751E4FF3045ADF82717312D89DECCCB0FAACBBB_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		__this->____capacity = L_0;
		int32_t L_1 = __this->____capacity;
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_2;
		L_2 = ((  Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____queue = L_2;
		((  void (*) (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m8161285868B8DC5257F40EC9DD991952F078F44E_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, const RuntimeMethod* method) 
{
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_0 = __this->____queue;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dispose_mE74B6882062619635E0D1A54C29B8A52D9CBC99D_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = ((  bool (*) (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_1 = __this->____queue;
		if ((((intptr_t)L_1) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003b;
		}
	}
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_2 = __this->____queue;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_3 = __this->____queue;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29>();
		NativeMemoryHelper_RemoveNativeMemoryByte_mE206862C7599EECAAB3066D023E1F10E0BEF325A(((int64_t)L_4), NULL);
		((  void (*) (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF2FD3A6AE89F96C2BD55193F3F8F2081506F7B34_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, const RuntimeMethod* method) 
{
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_0 = __this->____queue;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7E0C79B3BC0FB86E70533944350E7C14CE48BE67_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, Il2CppFullySharedGenericStruct* ___0_item, const RuntimeMethod* method) 
{
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_0 = __this->____queue;
		Il2CppFullySharedGenericStruct* L_1 = ___0_item;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m140D984A379ECE359B8D335A7435C6492BA16309_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF9334F462F8C5DD666E1081E073D22BA20503455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tF9334F462F8C5DD666E1081E073D22BA20503455);
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_0 = __this->____queue;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_0, (Il2CppFullySharedGenericStruct*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tF9334F462F8C5DD666E1081E073D22BA20503455);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mCC33DB58903628CAF7469084BA7D00AA6F65DB2B_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method) 
{
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_0 = __this->____queue;
		Il2CppFullySharedGenericStruct* L_1 = ___0_result;
		bool L_2;
		L_2 = ((  bool (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Peek_m546E405F8A7AC5BE60A6E3BA0632B8CC6684D8C6_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF9334F462F8C5DD666E1081E073D22BA20503455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tF9334F462F8C5DD666E1081E073D22BA20503455);
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_0 = __this->____queue;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_0, (Il2CppFullySharedGenericStruct*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tF9334F462F8C5DD666E1081E073D22BA20503455);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m6B6ED283C06A9295380D966A13FD12DB64781030_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method) 
{
	{
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_0 = __this->____queue;
		Il2CppFullySharedGenericStruct* L_1 = ___0_result;
		bool L_2;
		L_2 = ((  bool (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Finalize_mB35D99768BCCB66665D7B86022660809F3853D9E_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			((  void (*) (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
			goto IL_000f;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ReInit_mD91C654AB6E2859ABF8EAEEAE84D8BBA9CA09A0C_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = ((  bool (*) (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = __this->____capacity;
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_2;
		L_2 = ((  Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____queue = L_2;
		((  void (*) (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_get_IsDisposed_m818C23978C3F4BB94D5C8F2F10B6DC6E482456B4_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_set_IsDisposed_m1EBC1181F183318408DCA564531CDFE7DA776B92_gshared (Queue_1_tBCFAE14CAA20420A11615D49036971EB847795A4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDisposedU3Ek__BackingField = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* Queue_1_Create_m487333B9BC539FDB50C7ECF67B9309EA5D5F2595_gshared (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* V_0 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA20EFD001806C9E74BCAF3C65E0C45A757CC6949)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29>();
		uintptr_t L_3;
		L_3 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8((uint64_t)((int64_t)L_2), NULL);
		void* L_4;
		L_4 = NativeMemoryHelper_Alloc_m7B1957F97AAB297DF09D837E97AF0176CE89910D_inline(L_3, NULL);
		V_0 = (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_4;
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		uintptr_t L_7;
		L_7 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8((uint64_t)((int64_t)L_6), NULL);
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uintptr_t L_9;
		L_9 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8((uint64_t)((int64_t)L_8), NULL);
		void* L_10;
		L_10 = NativeMemoryHelper_Alloc_m981BCB43B713A386BFFF2BDE9F55530F0B9C71B8_inline(L_7, L_9, NULL);
		NullCheck(L_5);
		L_5->____array = (Il2CppFullySharedGenericStruct*)L_10;
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_11 = V_0;
		int32_t L_12 = ___0_capacity;
		NullCheck(L_11);
		L_11->___length = L_12;
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_13 = V_0;
		NullCheck(L_13);
		L_13->____head = 0;
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_14 = V_0;
		NullCheck(L_14);
		L_14->____tail = 0;
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_15 = V_0;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))((Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*)L_15, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_16 = V_0;
		NullCheck(L_16);
		L_16->____version = 0;
		Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA1F84E8DE6EE58EC61B06CF79156F4D879EB22F4_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Queue_1_get_Count_mA1F84E8DE6EE58EC61B06CF79156F4D879EB22F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Queue_1_get_Count_mA1F84E8DE6EE58EC61B06CF79156F4D879EB22F4_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_set_Count_m492F175259EBBD40980CFEAD2552FAC80D2F9A7B_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_set_Count_m492F175259EBBD40980CFEAD2552FAC80D2F9A7B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_set_Count_m492F175259EBBD40980CFEAD2552FAC80D2F9A7B_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF853F852B3084238AD76E0F769EBFE6492D78286_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	}

IL_000f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_Clear_mF853F852B3084238AD76E0F769EBFE6492D78286_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_Clear_mF853F852B3084238AD76E0F769EBFE6492D78286_inline(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3993CA8E291739E42595747E5B7305E00D7715CC_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_1 = __this->___length;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	}

IL_001c:
	{
		Il2CppFullySharedGenericStruct* L_3 = __this->____array;
		int32_t L_4 = __this->____tail;
		uint32_t L_5 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		Il2CppFullySharedGenericStruct* L_6 = ___0_item;
		il2cpp_codegen_memcpy(L_7, L_6, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))), L_7, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))), (void*)L_7);
		int32_t* L_8 = (int32_t*)(&__this->____tail);
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_9;
		L_9 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_0;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_Enqueue_m3993CA8E291739E42595747E5B7305E00D7715CC_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_item, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_Enqueue_m3993CA8E291739E42595747E5B7305E00D7715CC_inline(_thisAdjusted, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_mF7595FEE7377BB38D320A113359E07F5CBCA1B7E_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct* G_B2_0 = NULL;
	Il2CppFullySharedGenericStruct* G_B1_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = __this->____array;
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_QueueEmptyException_mE64DD6E0A95440A157482982EDF552E803C3E19F(NULL);
		G_B2_0 = G_B1_0;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		uint32_t L_4 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		il2cpp_codegen_memcpy(L_5, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)G_B2_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), (int32_t)L_4)))), SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		int32_t* L_6 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(__this, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_7;
		L_7 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = V_1;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_Dequeue_mF7595FEE7377BB38D320A113359E07F5CBCA1B7E_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_Dequeue_mF7595FEE7377BB38D320A113359E07F5CBCA1B7E_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mE9377ADF4C26AE9F3AF5B62ED82177660470E6EE_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		return (bool)0;
	}

IL_001f:
	{
		Il2CppFullySharedGenericStruct* L_4 = ___0_result;
		Il2CppFullySharedGenericStruct* L_5 = V_1;
		int32_t L_6 = V_0;
		uint32_t L_7 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		il2cpp_codegen_memcpy(L_8, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), (int32_t)L_7)))), SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_4, L_8, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (void**)(Il2CppFullySharedGenericStruct*)L_4, (void*)L_8);
		int32_t* L_9 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_10;
		L_10 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = V_2;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Queue_1_TryDequeue_mE9377ADF4C26AE9F3AF5B62ED82177660470E6EE_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	bool _returnValue;
	_returnValue = Queue_1_TryDequeue_mE9377ADF4C26AE9F3AF5B62ED82177660470E6EE_inline(_thisAdjusted, ___0_result, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Peek_m870CEBBE093C8C1F9F445EAFE8AE0126510DE5A1_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		ThrowHelper_QueueEmptyException_mE64DD6E0A95440A157482982EDF552E803C3E19F(NULL);
	}

IL_000d:
	{
		Il2CppFullySharedGenericStruct* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		uint32_t L_3 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_Peek_m870CEBBE093C8C1F9F445EAFE8AE0126510DE5A1_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_Peek_m870CEBBE093C8C1F9F445EAFE8AE0126510DE5A1_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mEC6C3395C9379B1BD5A8BE44F8D0E39448739226_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		return (bool)0;
	}

IL_0011:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_result;
		Il2CppFullySharedGenericStruct* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		uint32_t L_5 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		il2cpp_codegen_memcpy(L_6, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))), SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_6, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Queue_1_TryPeek_mEC6C3395C9379B1BD5A8BE44F8D0E39448739226_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	bool _returnValue;
	_returnValue = Queue_1_TryPeek_mEC6C3395C9379B1BD5A8BE44F8D0E39448739226_inline(_thisAdjusted, ___0_result, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Grow_m9837035CF2498C7C219035A9E7CDB91E5402D293_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___length;
		V_0 = ((int32_t)il2cpp_codegen_multiply(2, L_0));
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)2147483591)))))
		{
			goto IL_0017;
		}
	}
	{
		V_0 = ((int32_t)2147483591);
	}

IL_0017:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___length;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_2, ((int32_t)il2cpp_codegen_add(L_3, 4)), NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		V_1 = L_7;
	}

IL_002c:
	{
		int32_t L_8 = V_1;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_Grow_m9837035CF2498C7C219035A9E7CDB91E5402D293_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_Grow_m9837035CF2498C7C219035A9E7CDB91E5402D293_inline(_thisAdjusted, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCD4E03C1C8D93DFB2FEFA62131D99BA17E60C9DB_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* G_B6_0 = NULL;
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		uintptr_t L_1;
		L_1 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8((uint64_t)((int64_t)L_0), NULL);
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uintptr_t L_3;
		L_3 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8((uint64_t)((int64_t)L_2), NULL);
		void* L_4;
		L_4 = NativeMemoryHelper_Alloc_m981BCB43B713A386BFFF2BDE9F55530F0B9C71B8_inline(L_1, L_3, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_4;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_6 = __this->____head;
		int32_t L_7 = __this->____tail;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = V_0;
		Il2CppFullySharedGenericStruct* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		uint32_t L_11 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		int32_t L_12;
		L_12 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_13;
		L_13 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A_inline((void*)L_8, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), (int32_t)L_11)))), (uint32_t)((int32_t)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		goto IL_00bf;
	}

IL_005b:
	{
		Il2CppFullySharedGenericStruct* L_14 = V_0;
		Il2CppFullySharedGenericStruct* L_15 = __this->____array;
		int32_t L_16 = __this->____head;
		uint32_t L_17 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		int32_t L_18 = __this->___length;
		int32_t L_19 = __this->____head;
		int32_t L_20;
		L_20 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A_inline((void*)L_14, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20)), NULL);
		Il2CppFullySharedGenericStruct* L_21 = V_0;
		int32_t L_22 = __this->___length;
		uint32_t L_23 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		int32_t L_24 = __this->____head;
		uint32_t L_25 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		Il2CppFullySharedGenericStruct* L_26 = __this->____array;
		int32_t L_27 = __this->____tail;
		int32_t L_28;
		L_28 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A_inline((void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_subtract((intptr_t)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), (int32_t)L_23)))), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), (int32_t)L_25)))), (void*)L_26, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_27, L_28)), NULL);
	}

IL_00bf:
	{
		Il2CppFullySharedGenericStruct* L_29 = __this->____array;
		((  void (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_29, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_30 = __this->___length;
		int32_t L_31;
		L_31 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		NativeMemoryHelper_RemoveNativeMemoryByte_mE206862C7599EECAAB3066D023E1F10E0BEF325A(((int64_t)((int32_t)il2cpp_codegen_multiply(L_30, L_31))), NULL);
		Il2CppFullySharedGenericStruct* L_32 = V_0;
		__this->____array = L_32;
		__this->____head = 0;
		int32_t L_33;
		L_33 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_34 = ___0_capacity;
		if ((((int32_t)L_33) == ((int32_t)L_34)))
		{
			G_B6_0 = __this;
			goto IL_00fc;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_35;
		L_35 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		G_B7_0 = L_35;
		G_B7_1 = G_B5_0;
		goto IL_00fd;
	}

IL_00fc:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_00fd:
	{
		G_B7_1->____tail = G_B7_0;
		int32_t L_36 = ___0_capacity;
		__this->___length = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_SetCapacity_mCD4E03C1C8D93DFB2FEFA62131D99BA17E60C9DB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_SetCapacity_mCD4E03C1C8D93DFB2FEFA62131D99BA17E60C9DB(_thisAdjusted, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF70E24A9CA369B3C8597846C926671C3EF187D34_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___length;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		V_0 = 0;
	}

IL_0010:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_MoveNext_mF70E24A9CA369B3C8597846C926671C3EF187D34_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_MoveNext_mF70E24A9CA369B3C8597846C926671C3EF187D34_inline(_thisAdjusted, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dispose_m0E9792F19EDAC0AEF274A9590A79F81BFC46A1EF_gshared (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = __this->____array;
		if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = __this->____array;
		((  void (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_2 = __this->___length;
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		NativeMemoryHelper_RemoveNativeMemoryByte_mE206862C7599EECAAB3066D023E1F10E0BEF325A(((int64_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3))), NULL);
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Queue_1_Dispose_m0E9792F19EDAC0AEF274A9590A79F81BFC46A1EF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*>(__this + _offset);
	Queue_1_Dispose_m0E9792F19EDAC0AEF274A9590A79F81BFC46A1EF(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mDBF4A04D17BCC2C9CA1A3E59D3376BAC17FF5A9E_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_0;
		L_0 = Array_Empty_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mC4B0FECC92855C44E71604889C944B897F116697_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m362373D63F0C444E15D576E27F5205FA0333267A_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_6 = (EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0*)(EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5C4081065B04E377B8B7C749380BFEC6669C5F21_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_4;
		L_4 = EnumerableHelpers_ToArray_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mE8EDD63BB58E43964F3C1C089DE188246185FF17(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m103F800B15B22ECF9524EBB550E154682CDEBAC4_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m01C7B8DBE2E92A02AE557A8C9F0EFB282E7E5C11_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mE0E40D3F40B367D00CC9C7E20018CDD2121236FD_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m6E18EC5C75AF0FC3FC842CE3BF69BE64A1FA876B_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m7373BCAB1FD875C3356BFCBBDF4C1BA8EB493658_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_27 = __this->____array;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m3983AC2961418CBBAA8ECE3751D3A5B4FB28CDE6_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m656D104474DF1BE9E5BF67E5BB00E39FA34659E3_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m3038138A08C09292EBA4F9B2F98272032CA11025(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mAB92E95FF9C31D670AAF9A160D818A474144C4AF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD Queue_1_GetEnumerator_m448BAACF5C4B4425AE3BDF50959C4150A552E79C_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC03638BE2272E9FEEBC121D971CA319F8D9436B1((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB936A40E1E68F0A8BFCD490603FE67849DD86D8E_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC03638BE2272E9FEEBC121D971CA319F8D9436B1((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m291169E0B5A3F0DB85367180D4AEC64743C90627_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC03638BE2272E9FEEBC121D971CA319F8D9436B1((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_tC09041AF3C17C023C682D5C3F478F3D5990FF7AD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C Queue_1_Dequeue_m6D8C2928C5F4188E90B6FF840138CF0B7C6E93A1_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* V_1 = NULL;
	EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD40480C781DB3C748A1CCEE82EE83FAC25D94BEA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C));
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mAB92E95FF9C31D670AAF9A160D818A474144C4AF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mEEA26567F29AE06D09A31FDB1FABFDFBD043B12B_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* V_1 = NULL;
	EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C));
		return (bool)0;
	}

IL_001f:
	{
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C* L_4 = ___0_result;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C*)L_4)->___entity), (void*)NULL);
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C));
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mAB92E95FF9C31D670AAF9A160D818A474144C4AF(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C Queue_1_Peek_m69D15F225B11495968EC2F8D543FFDF7F98CE666_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD40480C781DB3C748A1CCEE82EE83FAC25D94BEA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mE577DDD20E7D44A92DFBCDE54484B4523B3E584A_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C));
		return (bool)0;
	}

IL_0011:
	{
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C* L_2 = ___0_result;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C*)L_2)->___entity), (void*)NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m67B978C53B8D7B9E59C4D877FFD7ACD5DB3CBD66_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_3 = __this->____array;
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_m552F576928C546170F4AD7013FE2771F6827B486(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_8 = __this->____array;
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_m552F576928C546170F4AD7013FE2771F6827B486(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_14 = __this->____array;
		EntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_m552F576928C546170F4AD7013FE2771F6827B486(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* Queue_1_ToArray_mD5D2B67FC3A8826805B2FE72DDFCCF1E0EA22C19_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_1;
		L_1 = Array_Empty_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mC4B0FECC92855C44E71604889C944B897F116697_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_3 = (EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0*)(EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_12 = V_0;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_15 = __this->____array;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_16 = V_0;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3038138A08C09292EBA4F9B2F98272032CA11025_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* V_0 = NULL;
	Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* G_B6_0 = NULL;
	Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_1 = (EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0*)(EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_11 = V_0;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_14 = __this->____array;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_15 = V_0;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mAB92E95FF9C31D670AAF9A160D818A474144C4AF_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD40480C781DB3C748A1CCEE82EE83FAC25D94BEA_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_mDD55BD28927253FA6025F457F3BB834CE87E1EB9_gshared (Queue_1_t79F85805271B70581C1D665E94EED11066EBE4DA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_m3038138A08C09292EBA4F9B2F98272032CA11025(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m12C88D449E450F4D1C61142CFFD8BEB11CA0801D_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_0;
		L_0 = Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m984509B3E0B9C3263CFB8453C73F4AD9E3644E29_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_6 = (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)(ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF74083B5A2D11AB8F7D526DF7EBE924EDBF0E357_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_4;
		L_4 = EnumerableHelpers_ToArray_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m823DD3E24D0D38D0BB4C30AB8E1B14329F8EF4BB(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD8F7C861EBD8BADFF06C6BB91E4C3788DBBDAF08_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m704393828D7EDB187A56E4CC7B1E8BA72DC44F28_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m164E2679362EE553C29939C78A8CAEC8DDFAC97E_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m239580CDAFF1478FF7DD592CE58F7BB14CB4320C_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m2B87B5BBD42D8EA8D4B6E37974AE398A4C2B8842_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_27 = __this->____array;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1F4B1E8C5BE1DFE1659459E08D57769C90649592_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB3189D4F2FAB49DE8BFC520AC11AFE28648F50EA_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F Queue_1_GetEnumerator_m64DE5101D07CDF2E81B8A63564C004CA4DEF01DC_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8C189B18531AE6544A67CBB17969221C71ADC138_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mDDCF3BA617A03F977589A3E3794FE0A1FD01D940_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC24F3945DEBBA0F2CA05A079C248A325676684FD((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_tF5E6D2CF41C59A70D02DEBEDEAD60CE503DA841F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 Queue_1_Dequeue_m2B1A9109F2EB017EEADFE5A0DA25996F48FA851F_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* V_1 = NULL;
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14));
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m5187C53BA3A678F3013092222FE819F01489705B_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* V_1 = NULL;
	ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14));
		return (bool)0;
	}

IL_001f:
	{
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* L_4 = ___0_result;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_4)->___Item2))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_4)->___Item2))->___m_LocationName), (void*)NULL);
		#endif
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14));
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 Queue_1_Peek_m88B7A84ED17DF53B29A47529D05CAFACBB6C1416_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mA4C851F1AA0E2004C086A3E5739289FF16CF431B_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14));
		return (bool)0;
	}

IL_0011:
	{
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14* L_2 = ___0_result;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_2)->___Item2))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14*)L_2)->___Item2))->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mE2E42F3F4D86DF74380403588FB5AF432D236121_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = __this->____array;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_8 = __this->____array;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_14 = __this->____array;
		ValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m0F0917751CAF85CF53D3AC43174032A21DFACF5D(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* Queue_1_ToArray_mA774FFB9884C3B8B260DAE21770421D4CEBB9B23_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1;
		L_1 = Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)(ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_12 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_15 = __this->____array;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_16 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* V_0 = NULL;
	Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* G_B6_0 = NULL;
	Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_1 = (ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)(ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_11 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_14 = __this->____array;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_15 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mDE2270884136ABAF283260B235151ACC8EE653FB_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4791F8E42F7D3E9E834E02D5A0B21FAB09ED59CC_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_mD9512AE3B44F33D386B7E5253E69A2D2A821DE4C_gshared (Queue_1_tC1ADE5768022CB90A8068604A44EA3B1038DBE73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_m7820EA4C718F05FC4176627F33CEB537A9AFE40B(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m62A25950DC7DB6DD1DDAF35F85B93A8BB3E5C499_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_0;
		L_0 = Array_Empty_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m9F1E47C2CABB5C014EFD54E6131CF0773FB3847C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m152D4DA3213D35FD8F915A38A7262F037396664B_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_6 = (ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*)(ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m58BECE5E31E67A90AFE0AB4BA4338C6FF35F296E_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_4;
		L_4 = EnumerableHelpers_ToArray_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m360ED816490791952F3D2579432AB7DD998FACDF(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0355B7BA764C9856E4C6E9851CCAD850581AB241_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m6560C4D025E920A4CFEC8457240A60EF2FB43FC8_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB8FBDB51A37FF7397F9A04B4D2CFBCDA7342B802_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m222186CD4AB73A2C9E6538D4E8CB2F8747F0FA0D_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m97364359435C6EB8EAC27030041DFBBEEBE72633_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_27 = __this->____array;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF2C93AFCABBCF47C91592FAB8AA0B33560343464_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9D3E4E1B432EB1B3AE7D513FE652BC6E5A6F0CF2_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mE1E85E51C7EFF3DE8B0D63AF9DC53EF874D5C2F3(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m239E1DA9C68EB6BD2F78C2B5D189FDC39286A2B7(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A Queue_1_GetEnumerator_m0E4CA1026BA0E889ADC9CB4C0630576DFEBBB154_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m50EE6043B11E1C6A4492A3D3340DAD61FA366B53((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mD5CE55568B4F4E7178FA66395849F05555C1EA3B_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m50EE6043B11E1C6A4492A3D3340DAD61FA366B53((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m8C5AB5AC40334EA2096E339FFF3BBFE2E8230FD3_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m50EE6043B11E1C6A4492A3D3340DAD61FA366B53((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t0CD492797B4890B1F80A9DAD37D3E66833099A6A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Queue_1_Dequeue_mABB59EF150B82A352427CA6DE8416E57B1C197D9_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* V_1 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m55E9948839D8969A909A9E5202A65FAFEBD6138D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m239E1DA9C68EB6BD2F78C2B5D189FDC39286A2B7(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mD8959CFE21550F682FC627B778923B61A49C939E_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* V_1 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		return (bool)0;
	}

IL_001f:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_4 = ___0_result;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_4)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_4)->___Item2), (void*)NULL);
		#endif
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m239E1DA9C68EB6BD2F78C2B5D189FDC39286A2B7(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Queue_1_Peek_mC87041CF8CCFDDB7F71B95832578D84C429A9C12_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m55E9948839D8969A909A9E5202A65FAFEBD6138D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m832C55C1CFFA8744325989CDF348522D57380B93_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		return (bool)0;
	}

IL_0011:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_2 = ___0_result;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_2)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_2)->___Item2), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m99E98AF226E472DEF7017E2CD82DB344E06ACA6E_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_3 = __this->____array;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m3739920CA87E2948569E7EFDDB00CF1E779947F0(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_8 = __this->____array;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m3739920CA87E2948569E7EFDDB00CF1E779947F0(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_14 = __this->____array;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m3739920CA87E2948569E7EFDDB00CF1E779947F0(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* Queue_1_ToArray_mD5440D5BA75C38B4A614B1DEF4EC6F77575F2AB8_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_1;
		L_1 = Array_Empty_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m9F1E47C2CABB5C014EFD54E6131CF0773FB3847C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_3 = (ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*)(ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_12 = V_0;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_15 = __this->____array;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_16 = V_0;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mE1E85E51C7EFF3DE8B0D63AF9DC53EF874D5C2F3_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* V_0 = NULL;
	Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* G_B6_0 = NULL;
	Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_1 = (ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*)(ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_11 = V_0;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_14 = __this->____array;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_15 = V_0;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m239E1DA9C68EB6BD2F78C2B5D189FDC39286A2B7_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m55E9948839D8969A909A9E5202A65FAFEBD6138D_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m8E7C30B3FCC63C792B5FAC54A09DCA2CFC097D03_gshared (Queue_1_t11D4487E8E68A083966CFAA48786F21E55C07FC0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_mE1E85E51C7EFF3DE8B0D63AF9DC53EF874D5C2F3(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA0792B9D04FFC545660330F21E89560A2553C739_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_0;
		L_0 = Array_Empty_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m8FA5840CC08FFC4902079926B1C5527808BD3755_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m82C87C985B46F6DDB8DACC2047CE6E2344A776BA_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_6 = (ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9*)(ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6F0A46A2F05560504E9299059FA720D7F4C8B42D_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_4;
		L_4 = EnumerableHelpers_ToArray_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m9A0DB32AB1E70F2E1664B1FF7D105D1D51E7B364(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC40461563E24916F4C8234FC90C71EE5D198F2FE_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m17445831FC7A0D2B89BCD1FD9C67BBC882BFCAA9_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m5EFAC10F21924097E1ED4A9C1008AAAF87621F41_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mEDEA6E0B85405C80F201D86DD14528547039B918_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m41B1B38B9BBF17A8E7957755C28C3182F367496E_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_27 = __this->____array;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mB3457DCF2AF60EECD49F156E1440209C1625F333_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m6BC9039362CDC8834FD93B69BFD1B03F4D4E3062_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mAE49B79B9D188A1A02655AED630937902C02BF56(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m27A7CC4EBB067C684D9AD1872C85276705305BBE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35 Queue_1_GetEnumerator_m0B0AA15651F1E2A3E28D1DD51DC5B9DC415DA53C_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mADBFEB584F158FA209BEC236EDC9D5EE2E6D3684((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5E925CA3CC355D10D66BCF1391EF985E34C9EA3F_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mADBFEB584F158FA209BEC236EDC9D5EE2E6D3684((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m53FDE81E441FB7A68BDD81CF3F0E7591F6F5D60E_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mADBFEB584F158FA209BEC236EDC9D5EE2E6D3684((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t0F1552AA369161D6418CE384ABAA958B82313C35 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 Queue_1_Dequeue_m81469612D0A21EAC659E0C6CF1D0164B320396CB_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* V_1 = NULL;
	ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8A06236F306C039FF5974FF3B7FCAA8B0AA79BFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m27A7CC4EBB067C684D9AD1872C85276705305BBE(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mAA46DB1A76D87B48714E626ECA24FD6F3D8EE40B_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* V_1 = NULL;
	ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9));
		return (bool)0;
	}

IL_001f:
	{
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9* L_4 = ___0_result;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m27A7CC4EBB067C684D9AD1872C85276705305BBE(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 Queue_1_Peek_mA8DF0D738A97C58092C22D2043FC155DD5CE24DB_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8A06236F306C039FF5974FF3B7FCAA8B0AA79BFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m5393F16D3E929C9453BA82B1A520883391EDAEE4_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9));
		return (bool)0;
	}

IL_0011:
	{
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9* L_2 = ___0_result;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m4945E08746621F79E28C8C5B5CD02123038F3A1C_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_3 = __this->____array;
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m7C8C1A4C68F89589BC3D7A12812F51B4BFE33324(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_8 = __this->____array;
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m7C8C1A4C68F89589BC3D7A12812F51B4BFE33324(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_14 = __this->____array;
		ValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m7C8C1A4C68F89589BC3D7A12812F51B4BFE33324(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* Queue_1_ToArray_m481797500098660B2E93F51C243B8AF5F1B9DA47_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_1;
		L_1 = Array_Empty_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m8FA5840CC08FFC4902079926B1C5527808BD3755_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_3 = (ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9*)(ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_12 = V_0;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_15 = __this->____array;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_16 = V_0;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAE49B79B9D188A1A02655AED630937902C02BF56_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* V_0 = NULL;
	Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* G_B6_0 = NULL;
	Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_1 = (ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9*)(ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_11 = V_0;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_14 = __this->____array;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_15 = V_0;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m27A7CC4EBB067C684D9AD1872C85276705305BBE_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A06236F306C039FF5974FF3B7FCAA8B0AA79BFF_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m96BC1662A25002327B6E14163CFEE13F894ABFD5_gshared (Queue_1_tA4A10F9BAFEA5955AEBB20A98CBAEFFAC4FCCA9F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_mAE49B79B9D188A1A02655AED630937902C02BF56(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m21EC51AC5A9E3943492D64518C6D959295DD4818_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_0;
		L_0 = Array_Empty_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_mE50439C1B1BF67A65FAFEDB0FA7AC2D70D46EF01_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3DC4EEB1EF460565B32B70D1172CD6E66B3B6AB9_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_6 = (AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D*)(AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m44167F60730FFF86CC34CA818D4B70C378D69473_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_4;
		L_4 = EnumerableHelpers_ToArray_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m18247BB464AD876B74C5E1AE527FC4E683859B21(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m621EFC8928515E281AA426645DCC3C9ABB1AA100_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mEB7AF5138A0FFB829B6A49D4A7AD7E2732673C8D_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m1CFA26A11FC4F398DEAFDA5A6858B1F0B38E97C8_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mD58B1F4FC0B7090419F9E3CF33F1ABF8414C71F1_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m0BA5830E407DDB154C9316B8C25BCE39F05403E7_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_27 = __this->____array;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m0EB586117CDDE55507A28EF14F2B78FCBE4A3E08_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m0EB2D736F678DA82E23FE56E691EE8DF8185A355_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m9513BF3E2C785969F5E8AA4B7CAF8EEB6FD1DA56(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m1440FA47B2CD0A95A5095BD426A1919131E6C38B(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA Queue_1_GetEnumerator_m5DF34AF2E6B2AE01158C06242168B9D0B3753043_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAB470C6EE7746D1095CF3C1F55C91E48C2A288DA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5CE0AF208424DB1320CCF46EED01EDA0D303B3DC_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAB470C6EE7746D1095CF3C1F55C91E48C2A288DA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0F09C1A33FA5BC6D3F3AC2437D99DC514465CFFD_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAB470C6EE7746D1095CF3C1F55C91E48C2A288DA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t6A1279398D4B4CEBD677981F7E6ED034687948BA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF Queue_1_Dequeue_mBD4AB3F7A61C30146C370A4FD24A1D35BD2ADE94_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* V_1 = NULL;
	AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF V_2;
	memset((&V_2), 0, sizeof(V_2));
	AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m742E3CA0B9EDA5A6BC9ACEE6AFBFED9115E6B270(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF));
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m1440FA47B2CD0A95A5095BD426A1919131E6C38B(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m9EFE5253A823ADB1ABF7AFC495BD7B450006E2CE_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* V_1 = NULL;
	AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF));
		return (bool)0;
	}

IL_001f:
	{
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF* L_4 = ___0_result;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF*)L_4)->___U3CLogEventU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF*)L_4)->___U3CContinuationU3Ek__BackingField), (void*)NULL);
		#endif
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF));
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m1440FA47B2CD0A95A5095BD426A1919131E6C38B(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF Queue_1_Peek_m84C0A07824EA9549E4A8400FF6C68A2BD13BAD93_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m742E3CA0B9EDA5A6BC9ACEE6AFBFED9115E6B270(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m2996317ED32A591A5E5B8642250D36567D50CB3E_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF));
		return (bool)0;
	}

IL_0011:
	{
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF* L_2 = ___0_result;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF*)L_2)->___U3CLogEventU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF*)L_2)->___U3CContinuationU3Ek__BackingField), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m435147FFCAC0A24539BF43BBC00C85D275B099DF_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_3 = __this->____array;
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m833BBBFB793EACF9D301669E2AC4B78A8F82F0BA(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_8 = __this->____array;
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m833BBBFB793EACF9D301669E2AC4B78A8F82F0BA(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_14 = __this->____array;
		AsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_m833BBBFB793EACF9D301669E2AC4B78A8F82F0BA(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* Queue_1_ToArray_m60C00D83D16D7E0B229162416DCFE7C2C93133DE_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_1;
		L_1 = Array_Empty_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_mE50439C1B1BF67A65FAFEDB0FA7AC2D70D46EF01_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_3 = (AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D*)(AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_12 = V_0;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_15 = __this->____array;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_16 = V_0;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9513BF3E2C785969F5E8AA4B7CAF8EEB6FD1DA56_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* V_0 = NULL;
	Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* G_B6_0 = NULL;
	Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_1 = (AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D*)(AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_11 = V_0;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_14 = __this->____array;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_15 = V_0;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m1440FA47B2CD0A95A5095BD426A1919131E6C38B_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m742E3CA0B9EDA5A6BC9ACEE6AFBFED9115E6B270_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_mD6D575F51FE8271CAF777ACCDE27D9EEFB6566F8_gshared (Queue_1_tF342D2E933189E94AD4863C9C8FEA622CEFC3415* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_m9513BF3E2C785969F5E8AA4B7CAF8EEB6FD1DA56(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC2547198A54AB222EA96E649C3A653C21785EE72_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0;
		L_0 = Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mE3D16BAC10E3E8310BFD91E86E73A47FC415AF97_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2F95E93AB0F1B64105FA27F8614AC19B3FC2CCFB_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_4;
		L_4 = EnumerableHelpers_ToArray_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1D20801BA00DC3128E7FD23AF767610D335C1D69(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m3A61FABB0AD9451F71F926B823F2F44E309C6372_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m08055A31C713D7C4F069943FBC34FF6497D980FF_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m824E4DEDBA00C644E4BD2DB895B6E905D15704C8_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m74A7CE2E9F16893B7218F9F108F0C4F1328058A4_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m4E28B9AC37F2D5D3D90C4441CB4A328C20FE8228_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_27 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mECF47CAE501BB0443EBE564E6C9EEC9AE8C41969_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mEA83B1259F57F18E4BF86A4CC43BAEC33D2FCA41_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 Queue_1_GetEnumerator_m4464DDCF024AA5806E45E241C0BC8BF2F71D574F_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m278165306205AA6C5E604C7DEECAEF450220A964_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA381A953C70DED15A56D8D12CB61B2DCC32EB94C_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 Queue_1_Dequeue_m841B28D2AD7F6CEFF71B159D6B4B9526C4858780_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_1 = NULL;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m43B77AA8B2CB606657CEC63A2EEC927AD5C4B81C_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_1 = NULL;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		return (bool)0;
	}

IL_001f:
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_4 = ___0_result;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_4)->____managedEvent), (void*)NULL);
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 Queue_1_Peek_mAA48A0CAF08E80D6DA532EECF0EB0DF69E895DA7_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mCF4D52D6B62F812F3A2C439D275CEC009E609FD4_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		return (bool)0;
	}

IL_0011:
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_2 = ___0_result;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_2)->____managedEvent), (void*)NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mAB1CDDA12BB6C3AC86CF1086B6A1AE04FA0A533B_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_14 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Queue_1_ToArray_m41B953E9C03B9D934ED24354C0DD5F1AC440466D_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1;
		L_1 = Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_16 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_0 = NULL;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B6_0 = NULL;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_14 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m04708C48D2BD25614D6AFFC53684555A10C2B3A9_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFBB78D8B30A0F7F62B7B13B48794314CF472D4D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m076C3301880A7D7DD727CD62410765F552251804_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = EnumerableHelpers_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFD5911DDBDB2B3C1BCDAEE1DDF9EA8DCD3C5A22(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m64927F70EEDD608787495C8CD045AB0538528178_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB126A5C4AEA0618F16C39571027DA9CD47379039_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_mCD919E8FD2C06F8D6F5BB7D89158701F52FAF499_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m951B065722F6BAD8756DF930F0E77EFC01865B73_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		int32_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 Queue_1_GetEnumerator_mC56A5519A861A13B2DFF0857D4908B7A495970D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m00D02E02E64C0C3A402468A862ED63F52FC4360D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB64344DD889D2DA18EA20A979560574BBB7CCE0B_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mF23B51D36DEFCA09DFF8184B94A4F8BCEDA0D0D7_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(int32_t));
		return (bool)0;
	}

IL_001f:
	{
		int32_t* L_4 = ___0_result;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(int32_t*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Peek_m670D85E9DC1BD3A794F6006EE07A20E4AC33C08C_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m19D64AA56C1A7B16E6F20797C91B7F6F159731E7_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(int32_t));
		return (bool)0;
	}

IL_0011:
	{
		int32_t* L_2 = ___0_result;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(int32_t*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____array;
		int32_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____array;
		int32_t L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Queue_1_ToArray_mCB86607434F2C40D8E444E595A9748C0E72255BA_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B6_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m469B252EC7665884E065EC78A2325216C5473C43_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m60A167651813E16E347BB6F6326D15EEC2D7C3E9_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0;
		L_0 = Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98C020CB734DA837256F0BF71B12CB86A38403E3_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mDC2BB43C5EB46C64DDA719D038B612BB2379A46F_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4;
		L_4 = EnumerableHelpers_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m47D67F4FA64C43B2A9D128F28E68587CC4936AFA(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m606FA806D37C8A32C6A8CF96B04D6A5EBD46A53F_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m657E5EDE6D703717F454E58B3166FEB7A46AB6F7_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m6CA582B17EEEDB1A34BB946A8ADB399D63F15976_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m88088E5F25AC9DE4B68B702B31EE422120E833D6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_mD42A477DEF13DCE6FC1758163DF670C97791E4EA_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = __this->____array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mDA1322AE300B782C5205479714D64AF700E17EE6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3E56A641964731223283A496BA994132F8E7D2E7_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int64_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		int64_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int64_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 Queue_1_GetEnumerator_m897204CA04E7D77BAC5AA2383E355011B3FBB3A6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m020022486AE715DC27FD4BA3E99E0E1095369C7B_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mBA2082FC10C6F4A3F848D10DB6E6326490EC372E_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Queue_1_Dequeue_m5BD792C6489FA537738671E14D26357DE3A186C1_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	int64_t V_2 = 0;
	int64_t G_B4_0 = 0;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m4B896EC65E125FA49C946C3A44FD5E60BA574038_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int64_t* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	int64_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int64_t* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(int64_t));
		return (bool)0;
	}

IL_001f:
	{
		int64_t* L_4 = ___0_result;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int64_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(int64_t*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Queue_1_Peek_mC9D7A3417E929FC0BBC0689B1F13382A1985EC12_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m3EC012EDADFBC865FD6256273919E6640EC063E8_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int64_t* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int64_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(int64_t));
		return (bool)0;
	}

IL_0011:
	{
		int64_t* L_2 = ___0_result;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(int64_t*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m0F3691FB56E3306F93F4985470EAA421A547409B_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int64_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->____array;
		int64_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m21AD653D385418441AFA228C7669C7195302128F(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = __this->____array;
		int64_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m21AD653D385418441AFA228C7669C7195302128F(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = __this->____array;
		int64_t L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m21AD653D385418441AFA228C7669C7195302128F(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Queue_1_ToArray_m6F196F97AE3653B18403DD5398C4F8792CC81FFC_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
		L_1 = Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = __this->____array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* G_B6_0 = NULL;
	Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = __this->____array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m26E34E46EF19FE539E92DED6924B01802EFC378B_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3A126C80D91B2EB3C8E8BE072438D3C3640A5A75_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0;
		L_0 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA6D219FBF1F11E55D74C0545DBF6AA18C5AF85B3_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m388ED0224310D924D62C4353D2ABEF85BF639691_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_4;
		L_4 = EnumerableHelpers_ToArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m9FE60EF16FC9F1660D9985A55E49DB74C66C07F6(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m82A01ECF2E58E85CB036CC8A5003977C294922A9_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m651CD21940DE48A08FC17F6D6A54A001C9EC499F_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8D1E973396C1AF008B7003FF251DF68BA9EBC6E2_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m9B8DBB3F3DCFAE1306C2A604E8C4FCB5E80E4E59_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_mD3D1B545829BA4BEBB360E2FF2DFCC9C6C63F805_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_27 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mEEF9060CB1702EEB6695F115562EFB3DAA29992D_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7ACC3D9CAAB2E747FE32FCB2928ED5886A5B33B1_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B Queue_1_GetEnumerator_m092DE77C76645AFDD839F99DB6DB0C8A9FFD0B05_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3BAEC4F450BC7747422D37AA9ADE3D522E3B6AA4_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB5643D90AE44533169A70ECBF4FB8D9BABC22A78_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Dequeue_mAB6FF2BF6F12E3AD12C7524DB9EB640CB5C3750E_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mAAA90DFEB34EEA43B2591E9A86C92BC35C203BD6_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		return (bool)0;
	}

IL_001f:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_4 = ___0_result;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)L_4 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t* L_9 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_10 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Peek_m639CC79FAC9BD961981FAD7C71CBC8FD7F122EDC_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m94AB487054E12FD562B8AA2E2A4D4F718BCF4AB6_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		return (bool)0;
	}

IL_0011:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = ___0_result;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)L_2 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mF17839D3523CFFAF643E06BD857B5FCB26EB9312_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_14 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Queue_1_ToArray_m37BDB9698F8E57DC78F53E21C3E964A6A0CDA62A_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1;
		L_1 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B6_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_14 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m606B054C89152747BA32BA78F23D4C6799DA2556_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mDFB3CD7FACAF85AFE5750DED2E3222107C996168_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = EnumerableHelpers_ToArray_TisRuntimeObject_m4BA4DBD38B4DA66F8DEB40393971473B983BE06A(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m053714A9E6478AFE7CD493D962FCBB5E58A24A86_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m10E1293E4A4BE4403DA68CFCAB5494FED197110C_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_mAC1D7393DCE44792B76EA79A54DBF2BF16DF5ED9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7EC23B77294ABA74E78B728FBA0C420C959CE4A0_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		RuntimeObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4DF91611354D7FE1796A09DCB101AF5E70805793_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m36EBE55DAAC29B841CC02D968AC0E41A5D64DADB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m13AAD6552BBFDBE843C324A37375B35618569981_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject** L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_001f:
	{
		RuntimeObject** L_4 = ___0_result;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(RuntimeObject**)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)L_8);
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m8CC7F8B13481140A1ED86A897EF276D0A7449AFE_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject** L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject** L_2 = ___0_result;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(RuntimeObject**)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m2005E02D4DC2C3186E5BA0722C8435C966AB7B0E_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		RuntimeObject* L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array;
		RuntimeObject* L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____array;
		RuntimeObject* L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Queue_1_ToArray_m4EE007D1D45FDFE14373A58B80B6D9EB2A03A9D8_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B6_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m66240309B0E32D8163A50B5FF53619DE44B902C5_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2A01859D57AB64CDCAECDF68089FD2236759976C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA9E2AFA0F31EE75EBB6CB8F76A0088DEA2719DA8_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m1E7DDED94ADEB25172891CED1F68DFC880B66415_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8E5ACA13B4BA41CC3230927ACEB3CF68820A8A05_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF3F6BB3C909C58BB9407AA3FFA131CC73E1287AA_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____head;
		int32_t L_3 = __this->____tail;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, L_5, L_6, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		NullCheck(L_9);
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m85C5723E8F1D31DB1C3C5953D207D974D1109F39_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8ACB04592D3C4936139A90C1CE9B708BA3F7D47F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_7);
		il2cpp_codegen_memcpy((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), L_9, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (void**)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_GetEnumerator_m6C532F76552CCD7154B74816F66DA3CE367BD90D_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m926D620709AEF33612E061F359920FA5A7F33D2F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mD615C747AA1C683E461CA820560E002427466EB8_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B4_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B3_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		bool L_7;
		L_7 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_7)
		{
			il2cpp_codegen_memcpy(G_B4_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B3_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		int32_t L_9 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_10, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_10);
		il2cpp_codegen_memcpy(G_B4_0, G_B3_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}

IL_003a:
	{
		int32_t* L_11 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_12 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, G_B4_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mF090CA69829E519F9EDC2C3D4E9B271DF8D74125_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_12 = L_8;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return (bool)0;
	}

IL_001f:
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_result;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_8, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_8);
		bool L_9;
		L_9 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_1;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_12, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
	}

IL_0043:
	{
		int32_t* L_13 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_14 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Peek_mC16DCF76985FF167BAB542F92D9AA03C1E210D8C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mA759DB49FBC988FD410603976DE2E9C0C693E500_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return (bool)0;
	}

IL_0011:
	{
		Il2CppFullySharedGenericAny* L_2 = ___0_result;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m18A922A2A41A33641FC69FAB29C41657375E682F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_15 = L_4;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), NULL, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_4: *(void**)L_4), L_5, L_6);
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____array;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), NULL, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_9: *(void**)L_9), L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____array;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), NULL, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_15: *(void**)L_15), 0, L_16);
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Queue_1_ToArray_m6E3371A83B60239A394CB7E49FFB3380C75C5E52_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5368BB1720798CB76A62CDC47D91036C4B07BBEB_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B6_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A409F6A724BB2356563FCEA1FD83322718EE8C9_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_mFDFD8423B5867ACBB834AE4545B071B7310895B6_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2DE8F8B9DE1D5BC2E5F36001518419C9E6695559_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_0;
		L_0 = Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA974BFA7B44C594587B559A8DA5A101A47C1E37E_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_6 = (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)(NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m091C1A5ADE80DD666E92CE683464E489D2370548_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_4;
		L_4 = EnumerableHelpers_ToArray_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m4C2B20AC08050C8CEC18D394991A5A6C43957ECD(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mFCF6B2262BA68FBF7AD3DE1B323BC76126AC7E6F_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m6FEE7D1AA4B6CA2521C707282DFBDB6911BE6921_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mEE4DCA2DD8B07F681DB69495345470D3DDF8A9D3_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mC0664AD9450C784FED4111974E4E74294B79E87C_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m334A9844B804EC598FE9330164D36E0AB9F5CCEB_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_27 = __this->____array;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1DBAC19B5B86CBE90DEE1594FBB58DB11CAC3828_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m841A6D1049C0BCBDFA331052CB187AE4E7B4B377_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 Queue_1_GetEnumerator_m95D147BAFF6915F758CBD479868BF36408C5A2C2_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC0481E40350CA64BBF841CD9AC9D622882D85C20_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m3827E42DA13208D91FB5F3142FBC681794A6BFEC_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF3543EC877CA4A256E7C467518F5F39D3C878EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t6366B8DEAF63A586D589D8598AE169C872E71AB1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A Queue_1_Dequeue_m07A1625196DFE37573D89D8AB2A077A513B2452F_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* V_1 = NULL;
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A V_2;
	memset((&V_2), 0, sizeof(V_2));
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A));
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m6C38B3FD7CD6E8421EF898AF53ECBD126117B8D8_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* V_1 = NULL;
	NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A));
		return (bool)0;
	}

IL_001f:
	{
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* L_4 = ___0_result;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_4)->___U3CannouncementU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_4)->___U3CcurrentNodeU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_4)->___U3CnextNodeU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_4)->___U3CnativeContextU3Ek__BackingField))->___U3CannouncementU3Ek__BackingField), (void*)NULL);
		#endif
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A));
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A Queue_1_Peek_m6E8E8A963FE8048B47E653834509EFBECE746040_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m5692C803F40334735CD389321CD072386FF86EB9_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A));
		return (bool)0;
	}

IL_0011:
	{
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A* L_2 = ___0_result;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_2)->___U3CannouncementU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_2)->___U3CcurrentNodeU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_2)->___U3CnextNodeU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A*)L_2)->___U3CnativeContextU3Ek__BackingField))->___U3CannouncementU3Ek__BackingField), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mAAE6209993218115D0C5A2573402016967BEA373_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = __this->____array;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_8 = __this->____array;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_14 = __this->____array;
		NotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m21547F7DC82A078F000CAEECD6236B0F50711947(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* Queue_1_ToArray_m0D55F3F75F7C3F833E385896B9F9D2C3BAF5B805_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1;
		L_1 = Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)(NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_12 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_15 = __this->____array;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_16 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* V_0 = NULL;
	Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* G_B6_0 = NULL;
	Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_1 = (NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)(NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_11 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_14 = __this->____array;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_15 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0CCC7BC2ACE4FF674828BC0076174FCDA5E1BCF9_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m21666DCAD188F1F12D68F04EB99478509BBF179C_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m81D11D729ECAA255BE4C3CA17093EC726A7A7EE3_gshared (Queue_1_tD224EE31B5C139D2F9BA3341D7C7F631D9F8B6BF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_mB5BBCB131795235F1D451276F1EB98241C700237(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5793B48CD425E5D7A93313DF986956BBAA8B65C7_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0;
		L_0 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98E586DB678570DC3A40CF92702290F1519727DC_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6CA4F5838242F12928991C72239694C6C444283A_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_4;
		L_4 = EnumerableHelpers_ToArray_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_m06E2D92F346ECE1D3006850C5D354508A2E348AD(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m08F50B5D83CD07085F9B86C829170F37FE7EF037_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mBA41708EE6C38EC390C71F2AC83CC2FFC3D5D1E2_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mC4119DAB01098BD9FAC558B758E91E4FD2283F21_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mA1E2EE278988F339DC3EC2FA17F909904DE3C974_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_m8380C36617796717D7B2C19A67B1C512686CE044_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_27 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mD31AA840A14A0863D14662B3432C6F244F3ED007_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mBF44A4060F486104A2FC16D28D0BDBD08BC83491_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 Queue_1_GetEnumerator_m6811DC2FBA9AB8EEA103F351BF62C1CC4510F9C2_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72D68C500677FCC7AD2E98F73EE2F4C101BFFBB3_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF93C321C59477A3AD51B3070041130177696ED5F_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Dequeue_m90F123DA1976DFBC4D8B331B07B1EB833A2E4509_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_1 = NULL;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mCDFB396BA530EF7830B97D035C1C4FE84410C2FF_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_1 = NULL;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		return (bool)0;
	}

IL_001f:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_4 = ___0_result;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_4)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_4)->___m_Panel), (void*)NULL);
		#endif
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Peek_m1C5E26653158385CA6B819CCC6C0B2E54FE805F5_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m438D67BB89E5C9DE5D0B0F6D7C954F77F7C4D694_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		return (bool)0;
	}

IL_0011:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_2 = ___0_result;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2)->___m_Panel), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mC42C579A978F3B1371A7380402643611828E9E4B_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_14 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Queue_1_ToArray_m09076A35A3E2BDFFFB21BCF0AA9E6AAE78901DE9_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1;
		L_1 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B6_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_14 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m3942F09A90D8B1791DF99685034895A2EFD006A5_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m305184BC0CC0E383E8001B97DA4AEEA7D0CE1B2C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0;
		L_0 = Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mBB24ED246DAAA77C2092ED6A2D2C77DC7BE23B5B_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA6CAA999E46B6EC20370078140E1144776499ED9_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_4;
		L_4 = EnumerableHelpers_ToArray_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_m5C72A1C51AEA21BEEA39D2EA5519077F16929B4F(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		int32_t L_5 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		NullCheck(L_6);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->____size;
		__this->____tail = L_7;
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0C22CA69FAA76A44B8107DCD23A3DD3327E63C3C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mF204923CFC94A94A4C87A697FC845BA17D25A7B2_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB520097DA7393AA0006340BA528707A82362AC87_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m6DB16A4E0D88DC23DD547CFFA96F8E3C5CEBADD4_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_CopyTo_mD87652BBCBDC1614E5ACEBC7426B7E73D8B2CA6F_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		int32_t L_13 = __this->____size;
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = __this->____array;
		NullCheck(L_15);
		int32_t L_16 = __this->____head;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), L_17, NULL);
		V_1 = L_18;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_19 = __this->____array;
		int32_t L_20 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_27 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_28 = ___0_array;
		int32_t L_29 = ___1_arrayIndex;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_30 = __this->____array;
		NullCheck(L_30);
		int32_t L_31 = __this->____head;
		int32_t L_32 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))), L_31)), L_32, NULL);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF3012F58E434209795ED06755BE79FAB1E66A38C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4415CE3E59110C01F3959FF645AEB9D0A12D5A82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 Queue_1_GetEnumerator_m38AA4049D7E2398FD0D7490310D72C80155D9C88_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m81EB5E36D293C068CC238E2CAB700B4E8810DA26_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0A5DEDAEF2B64E21F4E9E0B8EBE60C7889972167_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 Queue_1_Dequeue_m464B10B3191E4D7B20542EB8FA1A47DEF1027D84_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_1 = NULL;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_001c:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m9D810CF8962C7A0A22AE14281C9C69340B3C0A64_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_1 = NULL;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		return (bool)0;
	}

IL_001f:
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_4 = ___0_result;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_4)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_4)->___userData), (void*)NULL);
		#endif
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_9 = V_1;
		int32_t L_10 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_11);
	}

IL_0043:
	{
		int32_t* L_12 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_13 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 Queue_1_Peek_m2DE035C032FAA2FA38A1716B4BFA0D3D362ABA4A_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_000e:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m357476993A9FFA086425C89D3DF7AA0EF94EFE37_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* ___0_result, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		return (bool)0;
	}

IL_0011:
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_2 = ___0_result;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2)->___userData), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m2E18774C6607F2A29D55C05D9BC6A1A04390B96B_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_14 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Queue_1_ToArray_mB908DFB1E373CF2C238A1C581E6E614B483E862F_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1;
		L_1 = Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_16 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_0 = NULL;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B6_0 = NULL;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_14 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_TrimExcess_m90F27D8CD9F7BAB7E1AA1BCA4CB0F553C7D871FF_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0 = __this->____array;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryPackWriter_WriteNullCollectionHeader_m53BA106A7F32F868C8195C61351F9B5186ECF615_inline (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0;
		L_0 = MemoryPackWriter_GetSpanReference_mBDC9FBD579D01DDDE17F4A277D51ADFD33BEEACA_inline(__this, 4, NULL);
		il2cpp_unsafe_write_unaligned(L_0, (-1));
		MemoryPackWriter_Advance_m35C954056DFEACA18B05DF9960E50ED90747A734_inline(__this, 4, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryPackWriter_WriteCollectionHeader_mC1F711AC12DABDE2595F282A0A43167395A0E1DD_inline (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0;
		L_0 = MemoryPackWriter_GetSpanReference_mBDC9FBD579D01DDDE17F4A277D51ADFD33BEEACA_inline(__this, 4, NULL);
		int32_t L_1 = ___0_length;
		il2cpp_unsafe_write_unaligned(L_0, L_1);
		MemoryPackWriter_Advance_m35C954056DFEACA18B05DF9960E50ED90747A734_inline(__this, 4, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryPackReader_TryReadCollectionHeader_m4C7FF4723026CC89738F84AA42F9480C2410F5C3_inline (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, int32_t* ___0_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_length;
		uint8_t* L_1;
		L_1 = MemoryPackReader_GetSpanReference_m5F005E327CC44E9D1A08210A11B0314FC079E0FD_inline(__this, 4, NULL);
		int32_t L_2;
		L_2 = il2cpp_unsafe_read_unaligned<int32_t>(L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		MemoryPackReader_Advance_m06C8CE0CEB90DE03132604EDE763603CC31D771C_inline(__this, 4, NULL);
		int64_t L_3;
		L_3 = MemoryPackReader_get_Remaining_m18B9E48E8AA0279DB66FFCB6661BA6EB0B5D7D5B(__this, NULL);
		int32_t* L_4 = ___0_length;
		int32_t L_5 = *((int32_t*)L_4);
		if ((((int64_t)L_3) >= ((int64_t)((int64_t)L_5))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_6 = ___0_length;
		int32_t L_7 = *((int32_t*)L_6);
		MemoryPackSerializationException_ThrowInsufficientBufferUnless_m23970143F2327E35304ABE38D2E94D525CFBE96C(L_7, NULL);
	}

IL_0027:
	{
		int32_t* L_8 = ___0_length;
		int32_t L_9 = *((int32_t*)L_8);
		return (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeMemoryHelper_Alloc_m7B1957F97AAB297DF09D837E97AF0176CE89910D_inline (uintptr_t ___0_byteCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = ___0_byteCount;
		uint64_t L_1;
		L_1 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_0, NULL);
		NativeMemoryHelper_AddNativeMemoryByte_mE19F6B6288DBD3999BF4BD0F9F9BCB3D91EE6059(L_1, NULL);
		uintptr_t L_2 = ___0_byteCount;
		uint32_t L_3;
		L_3 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_3, NULL);
		V_0 = L_4;
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeMemoryHelper_Alloc_m981BCB43B713A386BFFF2BDE9F55530F0B9C71B8_inline (uintptr_t ___0_elementCount, uintptr_t ___1_elementSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = ___0_elementCount;
		uint64_t L_1;
		L_1 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_0, NULL);
		uintptr_t L_2 = ___1_elementSize;
		uint64_t L_3;
		L_3 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_2, NULL);
		NativeMemoryHelper_AddNativeMemoryByte_mE19F6B6288DBD3999BF4BD0F9F9BCB3D91EE6059(((int64_t)il2cpp_codegen_multiply((int64_t)L_1, (int64_t)L_3)), NULL);
		uintptr_t L_4 = ___0_elementCount;
		uint32_t L_5;
		L_5 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_4, NULL);
		uintptr_t L_6 = ___1_elementSize;
		uint32_t L_7;
		L_7 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_7)), NULL);
		V_0 = L_8;
		void* L_9;
		L_9 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A_inline (void* ___0_destination, void* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		void* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D Func_1_Invoke_m4AD1EF42FEA65A73A0F97B32AEAA011ACD11834A_gshared_inline (Func_1_t935316A94E97B5D059A09BCAB7F1F7990E4A0434* __this, const RuntimeMethod* method) 
{
	typedef DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_gshared_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_item, const RuntimeMethod* method) 
{
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_6 = V_0;
		int32_t L_7 = V_1;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D)L_8);
		return;
	}

IL_0034:
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_9 = ___0_item;
		List_1_AddWithResize_m9E1E291F68BC8D68EBCBF0394CF1117A15C9378A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA1F84E8DE6EE58EC61B06CF79156F4D879EB22F4_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_set_Count_m492F175259EBBD40980CFEAD2552FAC80D2F9A7B_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Clear_mF853F852B3084238AD76E0F769EBFE6492D78286_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	}

IL_000f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3993CA8E291739E42595747E5B7305E00D7715CC_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_1 = __this->___length;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	}

IL_001c:
	{
		Il2CppFullySharedGenericStruct* L_3 = __this->____array;
		int32_t L_4 = __this->____tail;
		uint32_t L_5 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		Il2CppFullySharedGenericStruct* L_6 = ___0_item;
		il2cpp_codegen_memcpy(L_7, L_6, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))), L_7, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))), (void*)L_7);
		int32_t* L_8 = (int32_t*)(&__this->____tail);
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_9;
		L_9 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_0;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Dequeue_mF7595FEE7377BB38D320A113359E07F5CBCA1B7E_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct* G_B2_0 = NULL;
	Il2CppFullySharedGenericStruct* G_B1_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = __this->____array;
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_QueueEmptyException_mE64DD6E0A95440A157482982EDF552E803C3E19F(NULL);
		G_B2_0 = G_B1_0;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		uint32_t L_4 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		il2cpp_codegen_memcpy(L_5, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)G_B2_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), (int32_t)L_4)))), SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		int32_t* L_6 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(__this, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_7;
		L_7 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = V_1;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_mE9377ADF4C26AE9F3AF5B62ED82177660470E6EE_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		return (bool)0;
	}

IL_001f:
	{
		Il2CppFullySharedGenericStruct* L_4 = ___0_result;
		Il2CppFullySharedGenericStruct* L_5 = V_1;
		int32_t L_6 = V_0;
		uint32_t L_7 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		il2cpp_codegen_memcpy(L_8, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), (int32_t)L_7)))), SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_4, L_8, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (void**)(Il2CppFullySharedGenericStruct*)L_4, (void*)L_8);
		int32_t* L_9 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_10;
		L_10 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = V_2;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Peek_m870CEBBE093C8C1F9F445EAFE8AE0126510DE5A1_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		ThrowHelper_QueueEmptyException_mE64DD6E0A95440A157482982EDF552E803C3E19F(NULL);
	}

IL_000d:
	{
		Il2CppFullySharedGenericStruct* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		uint32_t L_3 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mEC6C3395C9379B1BD5A8BE44F8D0E39448739226_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, Il2CppFullySharedGenericStruct* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		return (bool)0;
	}

IL_0011:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_result;
		Il2CppFullySharedGenericStruct* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		uint32_t L_5 = SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87;
		il2cpp_codegen_memcpy(L_6, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))), SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_6, SizeOf_T_t2BC706F743376D108770A31D0CAF170C46317C87);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_Grow_m9837035CF2498C7C219035A9E7CDB91E5402D293_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___length;
		V_0 = ((int32_t)il2cpp_codegen_multiply(2, L_0));
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)2147483591)))))
		{
			goto IL_0017;
		}
	}
	{
		V_0 = ((int32_t)2147483591);
	}

IL_0017:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___length;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_2, ((int32_t)il2cpp_codegen_add(L_3, 4)), NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		V_1 = L_7;
	}

IL_002c:
	{
		int32_t L_8 = V_1;
		((  void (*) (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF70E24A9CA369B3C8597846C926671C3EF187D34_gshared_inline (Queue_1_tB27ED34FD3306DFE49206F030DA400F23C82EE29* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___length;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		V_0 = 0;
	}

IL_0010:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* Array_Empty_TisEntityRef_1_t323C26810206027FF630931D0CD77A2B57EB9C0C_mC4B0FECC92855C44E71604889C944B897F116697_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		EntityRef_1U5BU5D_tE282549E4EF28D879E425FC20A7230E5DBCB95D0* L_0 = ((EmptyArray_1_tA8423D8D0AD7D2C9F636121F92DD7305F3BBE701_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* Array_Empty_TisValueTuple_2_tC06B3FC4D1273D3577B7EA89C4318C2271EC4E14_m244C4902DCD6DA9F9BAAE5D0BD965581BE165229_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ValueTuple_2U5BU5D_tB2F7E549059A0BCE69E29D89A948A6ABF79FE389* L_0 = ((EmptyArray_1_t849D96721854622FBB927351A0174ADAC0B239F9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* Array_Empty_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m9F1E47C2CABB5C014EFD54E6131CF0773FB3847C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_0 = ((EmptyArray_1_t9C24CC52A2AB30E79DD69151944A0440DCCC9382_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* Array_Empty_TisValueTuple_3_tFDB105CFD98A317CD958B87B629AD6595BDCE3B9_m8FA5840CC08FFC4902079926B1C5527808BD3755_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ValueTuple_3U5BU5D_t56411444094AB928E0A3CC46D94ACB566BC57DA9* L_0 = ((EmptyArray_1_t39AB31A727E172C7F4C28DADC5B5CC2DAE94C335_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* Array_Empty_TisAsyncLogEventInfo_t8A65414C3902B07B5644758409DEFBB9C9C023DF_mE50439C1B1BF67A65FAFEDB0FA7AC2D70D46EF01_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		AsyncLogEventInfoU5BU5D_tF83942F75F2A7026AF2E5FC5CD452B155EBC404D* L_0 = ((EmptyArray_1_tF08C119EE47F8A3626235913EE89BD5ACD824D57_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0 = ((EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ((EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = ((EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* Array_Empty_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m1F5AF3B0DB852E19A991DCDC24B6830DF8F9D693_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		NotificationContextU5BU5D_t78BADDD46F29D1568CF037DB21E3CE3950642152* L_0 = ((EmptyArray_1_t056A375939E428E7C9460D3E2642DBDD3FD61751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0 = ((EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0 = ((EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* MemoryPackWriter_GetSpanReference_mBDC9FBD579D01DDDE17F4A277D51ADFD33BEEACA_inline (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___bufferLength;
		int32_t L_1 = ___0_sizeHint;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___0_sizeHint;
		MemoryPackWriter_RequestNewBuffer_m107A5DDAC8A672E1322C77C7BFE4F0D8FFA5C006(__this, L_2, NULL);
	}

IL_0010:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = __this->___bufferReference;
		uint8_t* L_4;
		L_4 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_3, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryPackWriter_Advance_m35C954056DFEACA18B05DF9960E50ED90747A734_inline (MemoryPackWriter_t29A83C5810110B3F05AE80679EBF0A2B6D935F37* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_count;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		int32_t L_1 = __this->___bufferLength;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		MemoryPackSerializationException_ThrowInvalidAdvance_mA9603926B71A1AA4578842A57119A8C071791AF3(NULL);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		__this->___bufferLength = L_4;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* L_5 = (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*)(&__this->___bufferReference);
		int32_t L_6 = ___0_count;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline(L_5, L_6, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		__this->___bufferReference = L_7;
		int32_t L_8 = __this->___advancedCount;
		int32_t L_9 = ___0_count;
		__this->___advancedCount = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = __this->___writtenCount;
		int32_t L_11 = ___0_count;
		__this->___writtenCount = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* MemoryPackReader_GetSpanReference_m5F005E327CC44E9D1A08210A11B0314FC079E0FD_inline (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_sizeHint;
		int32_t L_1 = __this->___bufferLength;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = __this->___bufferReference;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		return L_3;
	}

IL_0015:
	{
		int32_t L_4 = ___0_sizeHint;
		uint8_t* L_5;
		L_5 = MemoryPackReader_GetNextSpan_mCB472048C2C0293133E2CEEADA557F998319C193(__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryPackReader_Advance_m06C8CE0CEB90DE03132604EDE763603CC31D771C_inline (MemoryPackReader_tFC71C7EE4618DFA151ACC4618CEBF8B6170FA568* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_count;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		int32_t L_1 = __this->___bufferLength;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_4 = ___0_count;
		bool L_5;
		L_5 = MemoryPackReader_TryAdvanceSequence_mAF6CD8105C21596A398467C927365A0F6BDB9D89(__this, L_4, NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		int32_t L_6 = V_0;
		__this->___bufferLength = L_6;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_7 = (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*)(&__this->___bufferReference);
		int32_t L_8 = ___0_count;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_9;
		L_9 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline(L_7, L_8, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		__this->___bufferReference = L_9;
		int32_t L_10 = __this->___advancedCount;
		int32_t L_11 = ___0_count;
		__this->___advancedCount = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = __this->___consumed;
		int32_t L_13 = ___0_count;
		__this->___consumed = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
