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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2 p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, &p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
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
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct U3CU3Ec__DisplayClass10_0_1_t90976610153DF272CE4A6A959554B7E03559E2B7;
struct Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C;
struct Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69;
struct Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26;
struct BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322;
struct BsonTrie_1_tAF93956B0B376422027556A3BA04EEE4C41336D1;
struct ConcurrentDictionary_2_tAC8FB88505B69E1B8E570A1F7DC647F22C1E9B2F;
struct ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834;
struct ConcurrentStack_1_t0BFFDD48B7E6F11A2025B8A1FDE00DD4AF81B96D;
struct Dictionary_2_t9F39C95F774FA1D3DB89E2652625E1FF1CB39F82;
struct Dictionary_2_tCA86DDAB770B962CF35CA2312B657B1DB91583A9;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t193CB88AD132B6C3D98F8D769BA5E2BDE28EE757;
struct Dictionary_2_t584F364FD3F610DD1C888D89A6DE493092CE123C;
struct Dictionary_2_tF85D2B08790C648657FC2FDA99A430B3A7253AAA;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
struct Func_2_t9E813AC8A6DFD9A6D4DE651BFAEA45BD1CC9B2E5;
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
struct IBsonSerializer_1_t5844F241F1C34F07D03693473D8863144E787D69;
struct IBsonSerializer_1_tE973130FB0A52FB4FE5BF9568C22251FB11CCCFF;
struct IEnumerable_1_tF927E7EF6E892D4CFBCA86F8C85AFC1252BCCFE8;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34;
struct ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE;
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281;
struct ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6;
struct ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05;
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35;
struct List_1_t9C750EDCC41EAD66D2421131BC9801B6962639A1;
struct List_1_t93C4A1138DFFC5B3E6FCFD555C49E1C215691A15;
struct List_1_t552E01B16034BA1FB867369ADA329FE1C55B4FA9;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE;
struct List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272;
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324;
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
struct List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct Queue_1_tB0E94F5AF8A344CCACE0C011DB116921D43845DD;
struct ReadOnlyCollection_1_t268567FB709D46C065075514B570E40ED728286F;
struct Stack_1_t2D4ED07EAFAB0A94D306827AD3211436AADCF1B7;
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6;
struct MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895;
struct NativeTextElementInfoU5BU5D_t4990577B63060372F4854E7FB6EFC6BD17169D41;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E;
struct ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782;
struct BsonBinaryReaderContext_tED3DA5A7DED8BAC47692C993611CFE2FCEB00B05;
struct BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7;
struct BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1;
struct BsonDeserializationContext_t5F7E1FC7931267D13A2D167FE150067FF2792206;
struct BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839;
struct BsonDocumentBackedClass_t0FB51B1B1F388525583ACC69C44151E74D299D92;
struct BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3;
struct BsonDocumentReaderContext_t733B6B5A9BB0588AAFFAF420026A5CE3058C5E1B;
struct BsonDocumentWrapper_t69CE513CDBC2CA883128A294F26AF43EB1BAC831;
struct BsonMemberMap_tD517252EE48884E6D73C11B2DF8D3366296A5EF4;
struct BsonReaderSettings_tF2549A56EBD77929BD8AE8CC0E5C96DCE3430B6B;
struct BsonSerializationContext_t219C4EEF44FD71B710B9AB9BDEA5EB08723CBC23;
struct BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2;
struct BsonSerializerRegistry_tC373774AA5C8642B419E0C83DD0B63E5593B8F92;
struct BsonStream_tCD2E9102A0A482A1B59F1F9A25176516E4215B6F;
struct BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5;
struct ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35;
struct ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GCHandlePool_tD3D33D37D8C147B41AAB365A95FF06822785A768;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IBsonDocumentSerializer_t37B6F4CBBE17169B2A018A34208E6EABAF67FFEF;
struct IBsonReader_t00A9599FBEEB0B2BB57E52B8CD50A19CD8D438C7;
struct IBsonSerializer_tB854F2D37C9383EF88CEF0DC8F84CF2E73FC48E5;
struct IBsonWriter_tCF34221858FA0DBF091E5CD6BC42EB04E8658512;
struct IByteBuffer_tD8690F82E3B39DC50743A946A422B0046ABDF131;
struct IConventionPack_tC8E1245DE74E673DF7B1CA5BBA38560F3793087F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDiscriminatorConvention_t79B858B328F73DE888D2BDE1DE08CD0362B33BE3;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct JsonBuffer_tC78F6B53AB1C7FDDBBA485937BBB0DD1B561110C;
struct JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB;
struct JsonReaderContext_tA7B527936A9E094A256D278A9512C9BABEA071CF;
struct JsonReaderSettings_t8AB81F322CF6A5DC2942D3F6EAE340C6C2CDD162;
struct JsonToken_t3F746E473933F87078A9EC200EAE30C92E9A7D8D;
struct JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
struct Type_t;
struct TypeMappingSerializationProvider_tD44C7D519C370D4E1CE2BD4C5F0CCEEAD8BE3398;
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Builder_t3F4A118DA9E1A046CFA63BC2C3C5DA3528A5BC00;
struct Builder_tAA1759C0E422C249A34705570F1FCCBCAAEF948A;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBsonDocumentSerializer_t37B6F4CBBE17169B2A018A34208E6EABAF67FFEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7;
IL2CPP_EXTERN_C String_t* _stringLiteralC2679E28D4F890B7420951FF6578A582E75476FF;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FF9B0D936BD812A451D4AE47777D2F45599EE4;
IL2CPP_EXTERN_C String_t* _stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577;
IL2CPP_EXTERN_C String_t* _stringLiteralF5DFC1B8ED02DCCC4D3756DEF31E7EE97090A0AE;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6;
struct MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E;
struct ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__71_1_t529D4432997B9A7C65EFE3E0753543DB8C92F882  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass10_0_1_t90976610153DF272CE4A6A959554B7E03559E2B7  : public RuntimeObject
{
	RuntimeObject* ___serializer;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA  : public RuntimeObject
{
};
struct EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A  : public RuntimeObject
{
};
struct EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344  : public RuntimeObject
{
};
struct EmptyArray_1_tAC344C0CB3A1178A06D7E53BD6CA11847AB83524  : public RuntimeObject
{
};
struct EmptyArray_1_t007D5A4CFD1D2FF34EEBE21CEF13AECC70F095CE  : public RuntimeObject
{
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065  : public RuntimeObject
{
};
struct EmptyArray_1_t056988AF5058814F667ED35F57F2BFE91E0AC4A5  : public RuntimeObject
{
};
struct EmptyArray_1_tBAE389DB7DC91C9D5BA7FFF14D3BF84D5D535A21  : public RuntimeObject
{
};
struct EmptyArray_1_t6F7601522B7C3D965C794144D6AB06B5E56C389F  : public RuntimeObject
{
};
struct EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47  : public RuntimeObject
{
};
struct EmptyArray_1_tA3FD4DA73690B22AF51247DE4AB33A52280CF1DD  : public RuntimeObject
{
};
struct EmptyArray_1_tE734FFF96D1ED5A8579050C42CB3D5933F541B75  : public RuntimeObject
{
};
struct EmptyArray_1_t08704EABC4CA3368B0E6C088FF83A3BDE70484C8  : public RuntimeObject
{
};
struct EmptyArray_1_t3A050EE8D27544565549460B170C55B4093D1847  : public RuntimeObject
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D  : public RuntimeObject
{
};
struct EmptyArray_1_t27C14574AFE8F6D02EFF76C2F6C68B108BCF9573  : public RuntimeObject
{
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD  : public RuntimeObject
{
};
struct EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC  : public RuntimeObject
{
};
struct EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016  : public RuntimeObject
{
};
struct EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E  : public RuntimeObject
{
};
struct EmptyArray_1_t73B178E4EDDEA59CC11E901A636A82FD28EFF983  : public RuntimeObject
{
};
struct ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34  : public RuntimeObject
{
	ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE  : public RuntimeObject
{
	ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6  : public RuntimeObject
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05  : public RuntimeObject
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE  : public RuntimeObject
{
	ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272  : public RuntimeObject
{
	ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A  : public RuntimeObject
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1  : public RuntimeObject
{
	Type_t* ____classType;
	List_1_t9C750EDCC41EAD66D2421131BC9801B6962639A1* ____creatorMaps;
	RuntimeObject* ____conventionPack;
	bool ____isAnonymous;
	List_1_t552E01B16034BA1FB867369ADA329FE1C55B4FA9* ____allMemberMaps;
	ReadOnlyCollection_1_t268567FB709D46C065075514B570E40ED728286F* ____allMemberMapsReadonly;
	List_1_t552E01B16034BA1FB867369ADA329FE1C55B4FA9* ____declaredMemberMaps;
	BsonTrie_1_tAF93956B0B376422027556A3BA04EEE4C41336D1* ____elementTrie;
	bool ____frozen;
	BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1* ____baseClassMap;
	RuntimeObject* ____discriminatorConvention;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ____creator;
	String_t* ____discriminator;
	bool ____discriminatorIsRequired;
	bool ____hasRootClass;
	bool ____isRootClass;
	BsonMemberMap_tD517252EE48884E6D73C11B2DF8D3366296A5EF4* ____idMemberMap;
	bool ____ignoreExtraElements;
	bool ____ignoreExtraElementsIsInherited;
	BsonMemberMap_tD517252EE48884E6D73C11B2DF8D3366296A5EF4* ____extraElementsMemberMap;
	int32_t ____extraElementsMemberIndex;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ____knownTypes;
};
struct BsonDeserializationContext_t5F7E1FC7931267D13A2D167FE150067FF2792206  : public RuntimeObject
{
	bool ____allowDuplicateElementNames;
	RuntimeObject* ____dynamicArraySerializer;
	RuntimeObject* ____dynamicDocumentSerializer;
	RuntimeObject* ____reader;
};
struct BsonDocumentBackedClass_t0FB51B1B1F388525583ACC69C44151E74D299D92  : public RuntimeObject
{
	BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* ____backingDocument;
	RuntimeObject* ____serializer;
};
struct BsonExtensionMethods_tE05087C3AC1036CC279BA0C0D552B5EEC83319E2  : public RuntimeObject
{
};
struct BsonSerializationContext_t219C4EEF44FD71B710B9AB9BDEA5EB08723CBC23  : public RuntimeObject
{
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ____isDynamicType;
	RuntimeObject* ____writer;
};
struct BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2  : public RuntimeObject
{
	String_t* ____elementName;
	RuntimeObject* ____serializer;
	Type_t* ____nominalType;
};
struct BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250  : public RuntimeObject
{
};
struct BsonSerializerRegistry_tC373774AA5C8642B419E0C83DD0B63E5593B8F92  : public RuntimeObject
{
	ConcurrentDictionary_2_tAC8FB88505B69E1B8E570A1F7DC647F22C1E9B2F* ____cache;
	ConcurrentStack_1_t0BFFDD48B7E6F11A2025B8A1FDE00DD4AF81B96D* ____serializationProviders;
	Func_2_t9E813AC8A6DFD9A6D4DE651BFAEA45BD1CC9B2E5* ____createSerializer;
};
struct BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5  : public RuntimeObject
{
};
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
{
};
struct ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____bytes;
	bool ____disposed;
	bool ____isReadOnly;
	int32_t ____length;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322  : public BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1
{
};
struct HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	RuntimeObject* ___compiledGraph;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA 
{
	uint8_t ___Item1;
	uint8_t ___Item2;
	uint8_t ___Item3;
	uint8_t ___Item4;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E 
{
	NativeTextElementInfoU5BU5D_t4990577B63060372F4854E7FB6EFC6BD17169D41* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	bool ___hasMultipleColors;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_marshaled_pinvoke
{
	NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	int32_t ___hasMultipleColors;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_marshaled_com
{
	NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	int32_t ___hasMultipleColors;
};
#pragma pack(push, tp, 1)
struct Address_t051E9D01E3A3661138DAA9A36D969D0EC12A2CF1 
{
	int32_t ___Process;
	int32_t ___Fiber;
};
#pragma pack(pop, tp)
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	int32_t ___m_ClipInstanceID;
	float ___m_Weight;
};
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	int32_t ___m_Name;
	int32_t ___m_Path;
	int32_t ___m_FullPath;
	float ___m_NormalizedTime;
	float ___m_Length;
	float ___m_Speed;
	float ___m_SpeedMultiplier;
	int32_t ___m_Tag;
	int32_t ___m_Loop;
};
struct ArchiveHandle_tECB0188191D0D3519C85970E537865D8F0E49CAA 
{
	uint64_t ___Handle;
};
struct AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 
{
	int32_t ___a0;
	int32_t ___a1;
	int32_t ___a2;
	int32_t ___a3;
	int32_t ___a4;
	int32_t ___a5;
	int32_t ___a6;
	int32_t ___a7;
	int32_t ___activeAttachments;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	int32_t ____sign;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
};
struct BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F 
{
	float ___m_Weight;
	int32_t ___m_BoneIndex;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct BoundProperty_t007B5226CF3817A0F5231BB30510E20EAF5B11AB 
{
	int32_t ___m_Index;
	int32_t ___m_Version;
};
struct BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839  : public BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5
{
	List_1_t93C4A1138DFFC5B3E6FCFD555C49E1C215691A15* ____elements;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____indexes;
	bool ____allowDuplicateNames;
};
struct BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C 
{
	Type_t* ____nominalType;
	bool ____serializeAsNominalType;
	bool ____serializeIdFirst;
};
struct BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C_marshaled_pinvoke
{
	Type_t* ____nominalType;
	int32_t ____serializeAsNominalType;
	int32_t ____serializeIdFirst;
};
struct BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C_marshaled_com
{
	Type_t* ____nominalType;
	int32_t ____serializeAsNominalType;
	int32_t ____serializeIdFirst;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 
{
	double ___m_real;
	double ___m_imaginary;
};
struct ContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330 
{
	uint64_t ___Id;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD 
{
	int32_t ___index;
	int32_t ___version;
};
struct DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 
{
	int32_t ___start;
	int32_t ___end;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			int32_t ___m_Data;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[4];
	};
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
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD 
{
	double ___cpuFrameTime;
	double ___cpuMainThreadFrameTime;
	double ___cpuMainThreadPresentWaitTime;
	double ___cpuRenderThreadFrameTime;
	double ___gpuFrameTime;
	uint64_t ___frameStartTimestamp;
	uint64_t ___firstSubmitTimestamp;
	uint64_t ___cpuTimePresentCalled;
	uint64_t ___cpuTimeFrameComplete;
	float ___heightScale;
	float ___widthScale;
	uint32_t ___syncInterval;
};
struct GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 
{
	int32_t ___levelCount;
	float ___lodSlope;
	float ___lodBias;
};
struct GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38 
{
	uint32_t ___data;
};
struct GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868 
{
	uint32_t ___data;
};
struct GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB 
{
	uint64_t ___sceneCullingMask;
};
struct GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F 
{
	int32_t ___forceLod;
	float ___lodSelectionBias;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D 
{
	uint32_t ___m_Index;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha;
	float ___time;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D 
{
	int16_t ___start;
	int16_t ___end;
};
struct IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02 
{
	int32_t ___drawAllocIndex;
	int32_t ___drawCount;
	int32_t ___instanceAllocIndex;
	int32_t ___instanceCount;
};
struct IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB 
{
	uint32_t ___indexCount;
	uint32_t ___firstIndex;
	uint32_t ___baseVertex;
	uint32_t ___firstInstanceGlobalIndex;
	uint32_t ___maxInstanceCountAndTopology;
};
struct IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB 
{
	int32_t ___drawOffsetAndSplitMask;
	int32_t ___instanceIndexAndCrossFade;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431 
{
	uint32_t ____DrawInfoAllocIndex;
	uint32_t ____DrawInfoCount;
	uint32_t ____InstanceInfoAllocIndex;
	uint32_t ____InstanceInfoCount;
	int32_t ____BoundingSphereInstanceDataAddress;
	int32_t ____DebugCounterIndex;
	int32_t ____InstanceMultiplierShift;
	int32_t ____InstanceOcclusionCullerPad0;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 
{
	uint32_t ___rank;
	uint32_t ___D0;
	uint32_t ___D1;
	uint32_t ___D2;
	uint32_t ___D3;
	uint32_t ___D4;
	uint32_t ___D5;
	uint32_t ___D6;
	uint32_t ___D7;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct Matrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E 
{
	float ___M11;
	float ___M12;
	float ___M21;
	float ___M22;
	float ___M31;
	float ___M32;
};
struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 
{
	float ___M11;
	float ___M12;
	float ___M13;
	float ___M14;
	float ___M21;
	float ___M22;
	float ___M23;
	float ___M24;
	float ___M31;
	float ___M32;
	float ___M33;
	float ___M34;
	float ___M41;
	float ___M42;
	float ___M43;
	float ___M44;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E 
{
	uint32_t ___m_IndexStart;
	uint32_t ___m_IndexCount;
};
struct MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937 
{
	int32_t ___NameID;
	uint32_t ___Value;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354 
{
	String_t* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_pinvoke
{
	char* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___utf8ByteCount;
};
#pragma pack(push, tp, 1)
struct ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint16_t ___m_CategoryId;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___m_CategoryId_forAlignmentOnly;
				};
			};
		};
		uint8_t ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC__padding[2];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___handle;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___handle_forAlignmentOnly;
				};
			};
		};
		uint8_t ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4__padding[8];
	};
};
#pragma pack(pop, tp)
struct ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F 
{
	int64_t ___value;
	int64_t ___count;
	int64_t ___refValue;
};
struct PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 
{
	uint32_t ___valid;
	int32_t ___handleIndex;
};
struct PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 
{
	uint32_t ___m_AnimatorBindingsVersion;
	int32_t ___handleIndex;
	int32_t ___valueArrayIndex;
	int32_t ___bindType;
};
struct Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F 
{
	float ___X;
	float ___Y;
	float ___Z;
	float ___W;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F 
{
	void* ___Buffer;
	int64_t ___Offset;
	int64_t ___Size;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F 
{
	uint32_t ___numerator;
	uint32_t ___denominator;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC 
{
	int32_t ___passId;
	int32_t ___inputSlot;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC 
{
	bool ___isImported;
	bool ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	bool ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___latestVersionNumber;
	bool ___clear;
	bool ___discard;
	bool ___bindMS;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_pinvoke
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_com
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC 
{
	bool ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_pinvoke
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_com
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	int16_t ___m_LowerBound;
	int16_t ___m_UpperBound;
};
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	float ___shr0;
	float ___shr1;
	float ___shr2;
	float ___shr3;
	float ___shr4;
	float ___shr5;
	float ___shr6;
	float ___shr7;
	float ___shr8;
	float ___shg0;
	float ___shg1;
	float ___shg2;
	float ___shg3;
	float ___shg4;
	float ___shg5;
	float ___shg6;
	float ___shg7;
	float ___shg8;
	float ___shb0;
	float ___shb1;
	float ___shb2;
	float ___shb3;
	float ___shb4;
	float ___shb5;
	float ___shb6;
	float ___shb7;
	float ___shb8;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026 
{
	int32_t ___cullingSplitIndex;
	int32_t ___occluderSubviewIndex;
};
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
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
struct Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575 
{
	float ___X;
	float ___Y;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D 
{
	float ___X;
	float ___Y;
	float ___Z;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 
{
	float ___X;
	float ___Y;
	float ___Z;
	float ___W;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x;
	float ___y;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D__padding[64];
	};
};
struct SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A 
{
	int32_t ___packetCount;
};
struct U3Cm_DescU3Ee__FixedBuffer_t3EF04A0CEACAB17C16EF86B7306873998931FE65 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_DescU3Ee__FixedBuffer_t3EF04A0CEACAB17C16EF86B7306873998931FE65__padding[220];
	};
};
struct U3Cm_IntegrationVersionU3Ee__FixedBuffer_t88AFA4BEF41DE8DBBEB50BE210D62F598F1E57C8 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_IntegrationVersionU3Ee__FixedBuffer_t88AFA4BEF41DE8DBBEB50BE210D62F598F1E57C8__padding[6];
	};
};
struct U3Cm_NameU3Ee__FixedBuffer_tA9DD7EE4A4FBD636028CB209AD52AF73EE6DF94B 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_NameU3Ee__FixedBuffer_tA9DD7EE4A4FBD636028CB209AD52AF73EE6DF94B__padding[16];
	};
};
struct U3Cm_SdkVersionU3Ee__FixedBuffer_tC0C9684F145C849761352371052EADDE01DAA86C 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_SdkVersionU3Ee__FixedBuffer_tC0C9684F145C849761352371052EADDE01DAA86C__padding[6];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA 
{
	union
	{
		struct
		{
			bool ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415__padding[32];
	};
};
struct U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C__padding[32];
	};
};
struct U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE__padding[32];
	};
};
struct U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86__padding[32];
	};
};
struct U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476__padding[384];
	};
};
struct U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997__padding[80];
	};
};
struct U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553__padding[96];
	};
};
struct U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E__padding[96];
	};
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D 
{
	bool ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_com
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6__padding[96];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF__padding[128];
	};
};
struct U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9__padding[96];
	};
};
struct U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69__padding[96];
	};
};
struct U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F__padding[384];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55__padding[128];
	};
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	bool ___imported;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_marshaled_pinvoke
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_marshaled_com
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 
{
	bool ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_pinvoke
{
	int32_t ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_com
{
	int32_t ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t226CA57C44213ACDD759FCE85A3D97CCEE7567C2 
{
	intptr_t ____value;
};
struct ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 
{
	intptr_t ____value;
};
struct ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 
{
	intptr_t ____value;
};
struct ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A 
{
	intptr_t ____value;
};
struct ByReference_1_tB90B0CC3B83F9C1A38589E6C47D1A4B99480DCA7 
{
	intptr_t ____value;
};
struct ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED 
{
	intptr_t ____value;
};
struct ByReference_1_t98D24BF404F87E2CFBC8CC0F3BC7DF1ABB065C4D 
{
	intptr_t ____value;
};
struct ByReference_1_t5511B3A677E02702C607AA2C905FD6737328C3FE 
{
	intptr_t ____value;
};
struct ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 
{
	intptr_t ____value;
};
struct ByReference_1_t74F577441AB649D6CABC19A28B978C60F10E5B57 
{
	intptr_t ____value;
};
struct ByReference_1_t848FCA8796CED05D6A069506E645A4C1833BEBEC 
{
	intptr_t ____value;
};
struct ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD 
{
	intptr_t ____value;
};
struct ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 
{
	intptr_t ____value;
};
struct ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 
{
	intptr_t ____value;
};
struct ByReference_1_tD7CEB46AA10ADF9732D4418942B226987F48B44D 
{
	intptr_t ____value;
};
struct ByReference_1_t2EF959CAE1FB9699CC8BC65093F5B7D53437A94D 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct ByReference_1_t47D886947127309BB68E9E3837D65AF788FD5BF8 
{
	intptr_t ____value;
};
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	intptr_t ____value;
};
struct ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 
{
	intptr_t ____value;
};
struct ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 
{
	intptr_t ____value;
};
struct ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 
{
	intptr_t ____value;
};
struct ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC 
{
	intptr_t ____value;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_t940D13FDFABF4FF1CB142C005C341ED752EFE85B 
{
	intptr_t ____value;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___center;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___extents;
};
struct AccessFlags_tB7D400C853C05A1DB9C6B56DF14E43721F0B1739 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct ActorId_t3F5873BACDBE4C8C8DAA5D237C22F3A2623F6488 
{
	Address_t051E9D01E3A3661138DAA9A36D969D0EC12A2CF1 ___Address;
	int64_t ___InstanceId;
};
#pragma pack(pop, tp)
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AnimationEventSource_t48460212F6BC00064115B85C42B656262118685E 
{
	int32_t ___value__;
};
struct BatchCullingProjectionType_tAD14BC373E72D5F74188E0899F8670FAB51FD481 
{
	int32_t ___value__;
};
struct BatchCullingViewType_tAC2682BF9A489DF44A8960693303B47248C252CF 
{
	int32_t ___value__;
};
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
struct BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___radius;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct BsonReaderState_t640413EE6B8FF6138F662F774F31739D0C09C977 
{
	int32_t ___value__;
};
struct BsonStream_tCD2E9102A0A482A1B59F1F9A25176516E4215B6F  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
};
struct BsonType_t2B49B3209AF4D74B1271D30959133965CF9B9630 
{
	int32_t ___value__;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 
{
	bool ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE 
{
	int32_t ___m_MeshInstanceID;
	int32_t ___m_SubMeshIndex;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_LightmapScaleOffset;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RealtimeLightmapScaleOffset;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage;
	int32_t ___usesTextCoreSettings;
	float ___textureId;
	int32_t ___gradientSettingsIndexOffset;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
	int32_t ___forceZ;
	float ___positionZ;
	int32_t ___remapUVs;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___atlasRect;
};
struct CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneCenter;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneSize;
	float ___rotation;
	int32_t ___passIndex;
	bool ___needSwap;
};
struct CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneCenter;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneSize;
	float ___rotation;
	int32_t ___passIndex;
	int32_t ___needSwap;
};
struct CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneCenter;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneSize;
	float ___rotation;
	int32_t ___passIndex;
	int32_t ___needSwap;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93 
{
	int32_t ___viewInstanceID;
	int32_t ___subviewCount;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderMipLayoutSize;
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
struct DistanceMetric_t071B9815BB961E33F7CA2C553CA725F61AE09EDE 
{
	int32_t ___value__;
};
struct DrawRendererFlags_t3AD0574208BFF93F323D5E1E92012F19EAE972CD 
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
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___m_RenderQueueRange;
	int32_t ___m_LayerMask;
	uint32_t ___m_RenderingLayerMask;
	uint32_t ___m_BatchLayerMask;
	int32_t ___m_ExcludeMotionVectorObjects;
	int32_t ___m_ForceAllMotionVectorObjects;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___m_SortingLayerRange;
};
#pragma pack(push, tp, 1)
struct FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779__padding[32];
	};
};
#pragma pack(pop, tp)
struct Flags_tECE4720F9A3CB3C35D6408A82EB158CA22C898DA 
{
	int32_t ___value__;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___time;
};
struct GraphicsFenceType_t8C3F229DC2BE62FA78724BA3D35FFCB3A64F7E0A 
{
	int32_t ___value__;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct GuidRepresentation_tC5BC87AE9090FDA8062E383B1DF55E32B557EC5E 
{
	int32_t ___value__;
};
struct HumanPartDof_tB9D20FC15B2A71ED22A910891BB2DC7F19BCDBC2 
{
	int32_t ___value__;
};
struct InstanceComponentGroup_tD2604C50227A821E92592963B831E9D9449D3FA4 
{
	uint32_t ___value__;
};
struct InstanceFlags_t65B077096B951ED0CAAB4D73656C02827C24D324 
{
	uint8_t ___value__;
};
struct InstanceOcclusionEventType_tF66ED25A6A1D3943D326795EA91E803D666ECF79 
{
	int32_t ___value__;
};
struct InstanceType_t3EB15046939F17DF216B4C181F98D064A5F78F27 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct JsonOutputMode_tF6D75AA0042DF902384E50B6AD0B760A021FCAFE 
{
	int32_t ___value__;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_marshaled_pinvoke
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_pinvoke ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_marshaled_com
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_com ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241 
{
	bool ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_marshaled_com
{
	int32_t ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LoadReason_t6890871E119ACAB707211201A00DE631CA266CF9 
{
	int32_t ___value__;
};
struct MachineLearningDataType_t7767160E484E4FA4F6C534972EEA59EC56BFC5F6 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct MaterializedOnDemandBsonDocument_t29693B77F7E598C0203B96A675688573EAA02064  : public BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839
{
	bool ____disposed;
	bool ____isMaterialized;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___headSrc;
	intptr_t ___headDst;
	int32_t ___headCount;
	intptr_t ___tailSrc;
	intptr_t ___tailDst;
	int32_t ___tailCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
};
struct OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627 
{
	U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 ____InvViewProjMatrix;
	U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 ____SilhouettePlanes;
	U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E ____SrcOffset;
	U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 ____MipOffsetAndSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OccluderDepthPyramidPad0;
	uint32_t ____OccluderDepthPyramidPad1;
	uint32_t ____SrcSliceIndices;
	uint32_t ____DstSubviewIndices;
	uint32_t ____MipCount;
	uint32_t ____SilhouettePlaneCount;
};
struct OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewProjMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___viewOriginWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___radialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___facingDirWorldSpace;
};
struct OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___offset;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size;
};
struct OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7 
{
	int32_t ___subviewIndex;
	int32_t ___depthSliceIndex;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___invViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___gpuProjMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewOffsetWorldSpace;
};
struct OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74 
{
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF ____OccluderMipBounds;
	U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F ____ViewProjMatrix;
	U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 ____ViewOriginWorldSpace;
	U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 ____FacingDirWorldSpace;
	U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 ____RadialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____OccluderDepthPyramidSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionTestDebugFlags;
	uint32_t ____OcclusionCullingCommonPad0;
	int32_t ____OcclusionTestCount;
	int32_t ____OccluderSubviewIndices;
	int32_t ____CullingSplitIndices;
	int32_t ____CullingSplitMask;
};
struct OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 ____OccluderMipBounds;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionCullingDebugPad0;
	uint32_t ____OcclusionCullingDebugPad1;
};
struct OcclusionTest_tFF967683F812A2788B5C8A9A220B83B43060435E 
{
	int32_t ___value__;
};
struct PassBreakReason_t57DD36F9EC4ED3DA89A4740BE8C32987018CF808 
{
	int32_t ___value__;
};
struct PassMergeState_t7815130D2990D177421E7CB405CE173EC704A117 
{
	int32_t ___value__;
};
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct Plane_t4066BF27E31CE4FB9DC0E0F359E02F0280E078E5 
{
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___Normal;
	float ___D;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	int32_t ___m_Collider;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 
{
	int32_t ___m_RenderTextureInstanceID;
	intptr_t ___m_BufferPtr;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
	uint32_t ___contextID;
};
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	int32_t ___m_Width;
	int32_t ___m_Height;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___m_RefreshRate;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	int32_t ___value__;
};
struct ShadingRateCombiner_tF7F5DDD676DF45F67B2A7BC7F14373F4DFAD2B1C 
{
	int32_t ___value__;
};
struct ShadingRateFragmentSize_tE61BBA9B957F4537F04519746FCABE0F5FA94C9F 
{
	int32_t ___value__;
};
struct ShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D 
{
	int32_t ___value__;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere;
	float ___m_ShadowCascadeBlendCullingFactor;
	float ___m_CullingNearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix;
};
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct StoreReason_tB71F110DFEED47ED8929B7874BE46BD4AFA9D5AC 
{
	int32_t ___value__;
};
struct SubPassFlags_tB4066DF82B36110B6163EB5C3A48F49FD4DD3AE5 
{
	int32_t ___value__;
};
struct TileFlags_tDCEE980FCB6A2159202B4C8096C11452E318D2A9 
{
	int32_t ___value__;
};
struct TransformUpdateFlags_tC8BD750B1A9A2F7EBEAC0528860B0A228C2CC5C3 
{
	uint8_t ___value__;
};
struct TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld2;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct UpdateFlags_tBF0D802FF9F8C33DA5DE40ED2B21768D88E33574 
{
	int32_t ___value__;
};
struct PolyType_t61D62010DE1E30694B2F823BDFBA120B776ABAD7 
{
	int32_t ___value__;
};
struct EndType_t44002443DAAFEF649DA75F399F4A5CE38B2D9126 
{
	int32_t ___value__;
};
struct JoinType_tCC38C44CB0E5130C3761EFECF52EBDDD9EEC417D 
{
	int32_t ___value__;
};
struct FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063 
{
	uint32_t ___imageIndex;
	float ___position;
	float ___size;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	bool ___useLightColor;
	bool ___rotate;
	bool ___zoom;
	bool ___fade;
};
struct FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_marshaled_pinvoke
{
	uint32_t ___imageIndex;
	float ___position;
	float ___size;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___useLightColor;
	int32_t ___rotate;
	int32_t ___zoom;
	int32_t ___fade;
};
struct FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_marshaled_com
{
	uint32_t ___imageIndex;
	float ___position;
	float ___size;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___useLightColor;
	int32_t ___rotate;
	int32_t ___zoom;
	int32_t ___fade;
};
struct PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nx;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___ny;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nz;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___d;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nxAbs;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nyAbs;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nzAbs;
};
struct BufferState_t9A744F89825C691F1F63EF47368227970F7FFE17 
{
	int32_t ___value__;
};
struct SupportedUnityFeatures_tE93DFE0CAC899ED882EDB93C402AE21AD69137C3 
{
	int32_t ___value__;
};
struct NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B 
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
};
struct Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position;
	int32_t ___subdivisionLevel;
};
struct SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___receiverSphereLightSpace;
	float ___cascadeBlendCullingFactor;
};
struct LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___spotDirection;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___occlusionProbeChannels;
	uint32_t ___layerMask;
};
struct ColliderType_t4C26FB284A330CAD69E47FFD734C9C778E077692 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 
{
	alignas(8) FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 ___data;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9 
{
	ByReference_1_t74F577441AB649D6CABC19A28B978C60F10E5B57 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945 
{
	ByReference_1_t848FCA8796CED05D6A069506E645A4C1833BEBEC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC 
{
	ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 
{
	ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D 
{
	ByReference_1_t226CA57C44213ACDD759FCE85A3D97CCEE7567C2 ____pointer;
	int32_t ____length;
};
struct Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 ____pointer;
	int32_t ____length;
};
struct Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 ____pointer;
	int32_t ____length;
};
struct Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A ____pointer;
	int32_t ____length;
};
struct Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF 
{
	ByReference_1_tB90B0CC3B83F9C1A38589E6C47D1A4B99480DCA7 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED ____pointer;
	int32_t ____length;
};
struct Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590 
{
	ByReference_1_t98D24BF404F87E2CFBC8CC0F3BC7DF1ABB065C4D ____pointer;
	int32_t ____length;
};
struct Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F 
{
	ByReference_1_t5511B3A677E02702C607AA2C905FD6737328C3FE ____pointer;
	int32_t ____length;
};
struct Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 
{
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 ____pointer;
	int32_t ____length;
};
struct Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD ____pointer;
	int32_t ____length;
};
struct Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 
{
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 ____pointer;
	int32_t ____length;
};
struct Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060 
{
	ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 ____pointer;
	int32_t ____length;
};
struct Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2 
{
	ByReference_1_tD7CEB46AA10ADF9732D4418942B226987F48B44D ____pointer;
	int32_t ____length;
};
struct Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0 
{
	ByReference_1_t2EF959CAE1FB9699CC8BC65093F5B7D53437A94D ____pointer;
	int32_t ____length;
};
struct Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE 
{
	ByReference_1_t47D886947127309BB68E9E3837D65AF788FD5BF8 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 ____pointer;
	int32_t ____length;
};
struct Span_1_t460D4E78469192619B0075C15897A6987393AAF9 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F 
{
	ByReference_1_t940D13FDFABF4FF1CB142C005C341ED752EFE85B ____pointer;
	int32_t ____length;
};
struct AnimationEventBlittable_t59D8029C582F4A7E4EFB0C374DB23CC17BE323EF 
{
	float ___m_Time;
	intptr_t ___m_FunctionName;
	intptr_t ___m_StringParameter;
	intptr_t ___m_ObjectReferenceParameter;
	float ___m_FloatParameter;
	int32_t ___m_IntParameter;
	int32_t ___m_MessageOptions;
	int32_t ___m_Source;
	intptr_t ___m_StateSender;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo;
};
struct BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59 
{
	void* ___data;
	int32_t ___size;
	int32_t ___updateFlags;
};
struct BsonDocumentWrapper_t69CE513CDBC2CA883128A294F26AF43EB1BAC831  : public MaterializedOnDemandBsonDocument_t29693B77F7E598C0203B96A675688573EAA02064
{
	RuntimeObject* ____wrapped;
	RuntimeObject* ____serializer;
};
struct BsonReader_tCB2740332DC33A84386CA5EE3807EF72038ACBBC  : public RuntimeObject
{
	bool ____disposed;
	BsonReaderSettings_tF2549A56EBD77929BD8AE8CC0E5C96DCE3430B6B* ____settings;
	int32_t ____state;
	int32_t ____currentBsonType;
	String_t* ____currentName;
	Stack_1_t2D4ED07EAFAB0A94D306827AD3211436AADCF1B7* ____settingsStack;
};
struct BsonWriterSettings_tEF90321A6E901B5AE2ECC493EC635CB618A847A0  : public RuntimeObject
{
	int32_t ____guidRepresentation;
	bool ____isFrozen;
	int32_t ____maxSerializationDepth;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB 
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_marshaled_pinvoke
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_marshaled_com
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1  : public BsonStream_tCD2E9102A0A482A1B59F1F9A25176516E4215B6F
{
	RuntimeObject* ____buffer;
	bool ____disposed;
	int32_t ____length;
	bool ____ownsBuffer;
	int32_t ____position;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____temp;
};
struct CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455 
{
	uint8_t ___transformUpdateFlags;
	uint8_t ___instanceFlags;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74 
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	bool ___isOverriden;
	bool ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_marshaled_pinvoke
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	int32_t ___isOverriden;
	int32_t ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_marshaled_com
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	int32_t ___isOverriden;
	int32_t ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GenericBinding_t9A74DB04E38389AF97E2C4F27B1B0F2E6C0FA397 
{
	uint32_t ___m_Path;
	uint32_t ___m_PropertyName;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ScriptEntityId;
	int32_t ___m_TypeID;
	uint8_t ___m_CustomType;
	int32_t ___m_Flags;
};
struct GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C 
{
	uint32_t ___index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___glyphRect;
	float ___scale;
	int32_t ___atlasIndex;
	int32_t ___classDefinitionType;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
	int32_t ___m_FenceType;
};
struct IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805 
{
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___cullingJobHandle;
	int32_t ___bufferState;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
};
struct InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173 
{
	int32_t ___viewType;
	int32_t ___viewInstanceID;
	int32_t ___splitIndex;
	int32_t ___visibleInstancesOnCPU;
	int32_t ___visibleInstancesOnGPU;
	int32_t ___visiblePrimitivesOnCPU;
	int32_t ___visiblePrimitivesOnGPU;
	int32_t ___drawCommands;
};
struct InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD 
{
	int32_t ___viewInstanceID;
	int32_t ___eventType;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
	int32_t ___occlusionTest;
	int32_t ___visibleInstances;
	int32_t ___culledInstances;
	int32_t ___visiblePrimitives;
	int32_t ___culledPrimitives;
};
struct IntegrationInfo_t404A1127808146C83CC277933625FF0794245AE3 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___m_Id;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___m_Id_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntegrationVersion_OffsetPadding[4];
			U3Cm_IntegrationVersionU3Ee__FixedBuffer_t88AFA4BEF41DE8DBBEB50BE210D62F598F1E57C8 ___m_IntegrationVersion;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntegrationVersion_OffsetPadding_forAlignmentOnly[4];
			U3Cm_IntegrationVersionU3Ee__FixedBuffer_t88AFA4BEF41DE8DBBEB50BE210D62F598F1E57C8 ___m_IntegrationVersion_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SdkVersion_OffsetPadding[10];
			U3Cm_SdkVersionU3Ee__FixedBuffer_tC0C9684F145C849761352371052EADDE01DAA86C ___m_SdkVersion;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SdkVersion_OffsetPadding_forAlignmentOnly[10];
			U3Cm_SdkVersionU3Ee__FixedBuffer_tC0C9684F145C849761352371052EADDE01DAA86C ___m_SdkVersion_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_Features_OffsetPadding[16];
			int32_t ___m_Features;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_Features_OffsetPadding_forAlignmentOnly[16];
			int32_t ___m_Features_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_Name_OffsetPadding[20];
			U3Cm_NameU3Ee__FixedBuffer_tA9DD7EE4A4FBD636028CB209AD52AF73EE6DF94B ___m_Name;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_Name_OffsetPadding_forAlignmentOnly[20];
			U3Cm_NameU3Ee__FixedBuffer_tA9DD7EE4A4FBD636028CB209AD52AF73EE6DF94B ___m_Name_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_Desc_OffsetPadding[36];
			U3Cm_DescU3Ee__FixedBuffer_t3EF04A0CEACAB17C16EF86B7306873998931FE65 ___m_Desc;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_Desc_OffsetPadding_forAlignmentOnly[36];
			U3Cm_DescU3Ee__FixedBuffer_t3EF04A0CEACAB17C16EF86B7306873998931FE65 ___m_Desc_forAlignmentOnly;
		};
	};
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E 
{
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___splitRange;
	int32_t ___projectionType;
	uint16_t ___splitExclusionMask;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C 
{
	int32_t ___reason;
	int32_t ___passId;
};
struct MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F 
{
	bool ___hasValue;
	int32_t ___dataType;
	MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 ___shape;
};
struct MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F_marshaled_pinvoke
{
	int32_t ___hasValue;
	int32_t ___dataType;
	MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 ___shape;
};
struct MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F_marshaled_com
{
	int32_t ___hasValue;
	int32_t ___dataType;
	MachineLearningTensorShape_tB77DBE335F1F51D0E33C78CA2B10E79995ACF957 ___shape;
};
struct MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___firstIndex;
	uint32_t ___indexCount;
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
struct MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC 
{
	int32_t ___U3ChumanPartDofU3Ek__BackingField;
	int32_t ___U3CdofU3Ek__BackingField;
};
struct PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 
{
	int32_t ___reason;
	int32_t ___breakPass;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD 
{
	int32_t ___passId;
	int32_t ___type;
	bool ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	bool ___asyncCompute;
	bool ___hasSideEffects;
	bool ___culled;
	bool ___beginNativeSubpass;
	bool ___fragmentInfoValid;
	bool ___fragmentInfoHasDepth;
	bool ___insertGraphicsFence;
	bool ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_pinvoke
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_com
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C 
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	bool ___staticShadowCaster;
	int32_t ___rendererPriority;
	bool ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68 
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	bool ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_pinvoke
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_com
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_Value;
	int32_t ___m_Version;
	int32_t ___m_Type;
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform;
	int32_t ___offsetX;
	int32_t ___offsetY;
	int32_t ___resolution;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData;
};
struct SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldToCameraMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CustomAxis;
	int32_t ___m_Criteria;
	int32_t ___m_DistanceMetric;
};
struct SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934 
{
	int32_t ___SpriteID;
	int32_t ___TextureID;
	int32_t ___MaterialID;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Transform;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___Bounds;
	int32_t ___Layer;
	int32_t ___SortingLayer;
	int32_t ___SortingOrder;
	uint64_t ___SceneCullingMask;
	intptr_t ___IndexData;
	intptr_t ___VertexData;
	int32_t ___IndexCount;
	int32_t ___VertexCount;
	int32_t ___ShaderChannelMask;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 
{
	int32_t ___reason;
	int32_t ___passId;
	int32_t ___msaaReason;
	int32_t ___msaaPassId;
};
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3Ek__BackingField;
	int32_t ___U3CtopologyU3Ek__BackingField;
	int32_t ___U3CindexStartU3Ek__BackingField;
	int32_t ___U3CindexCountU3Ek__BackingField;
	int32_t ___U3CbaseVertexU3Ek__BackingField;
	int32_t ___U3CfirstVertexU3Ek__BackingField;
	int32_t ___U3CvertexCountU3Ek__BackingField;
};
struct SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9 
{
	AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 ___inputs;
	AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 ___colorOutputs;
	int32_t ___flags;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	int32_t ___m_Sprite;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	int32_t ___m_GameObject;
	int32_t ___m_Flags;
	int32_t ___m_ColliderType;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	int32_t ___m_InstanceId;
	int32_t ___m_Flags;
};
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	float ___m_BlendDistance;
	int32_t ___m_Importance;
	int32_t ___m_BoxProjection;
	int32_t ___m_InstanceId;
	int32_t ___m_TextureId;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C 
{
	int32_t ___polyType;
	bool ___closed;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C_marshaled_pinvoke
{
	int32_t ___polyType;
	int32_t ___closed;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C_marshaled_com
{
	int32_t ___polyType;
	int32_t ___closed;
};
struct PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1 
{
	int32_t ___joinType;
	int32_t ___endType;
};
struct Info_tA3039772991DEEDBC29A00439A055C5166133A27 
{
	int32_t ___viewType;
	int32_t ___viewInstanceID;
	int32_t ___splitIndex;
};
struct NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___subRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___scaleMode;
	intptr_t ___backgroundRepeatInstanceList;
	int32_t ___backgroundRepeatInstanceListStartIndex;
	int32_t ___backgroundRepeatInstanceListEndIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	intptr_t ___texture;
	intptr_t ___sprite;
	intptr_t ___vectorImage;
	intptr_t ___spriteTexture;
	intptr_t ___spriteVertices;
	intptr_t ___spriteUVs;
	intptr_t ___spriteTriangles;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___contentSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSize;
	float ___texturePixelsPerPoint;
	int32_t ___leftSlice;
	int32_t ___topSlice;
	int32_t ___rightSlice;
	int32_t ___bottomSlice;
	float ___sliceScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rectInset;
	NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B ___colorPage;
	int32_t ___meshFlags;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___bottomColorPage;
};
struct Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C  : public MulticastDelegate_t
{
};
struct Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69  : public MulticastDelegate_t
{
};
struct Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26  : public MulticastDelegate_t
{
};
struct FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 
{
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a0;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a1;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a2;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a3;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a4;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a5;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a6;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 
{
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a0;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a1;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a2;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a3;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a4;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a5;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a6;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a7;
	int32_t ___activeAttachments;
};
struct Func_2_tCF268DE2C083F67B46AACFDC70B78744B8543024  : public MulticastDelegate_t
{
};
struct Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C 
{
	bool ___hasValue;
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___value;
};
struct Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B 
{
	bool ___hasValue;
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___value;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E 
{
	int32_t ___m_LoadAction;
	int32_t ___m_StoreAction;
	int32_t ___m_Format;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_LoadStoreTarget;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_ResolveTarget;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ClearColor;
	float ___m_ClearDepth;
	uint32_t ___m_ClearStencil;
};
struct BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4 
{
	BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59 ___arrayWrapper;
	int32_t ___listSize;
};
struct BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782  : public BsonReader_tCB2740332DC33A84386CA5EE3807EF72038ACBBC
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____baseStream;
	BsonStream_tCD2E9102A0A482A1B59F1F9A25176516E4215B6F* ____bsonStream;
	BsonBinaryReaderContext_tED3DA5A7DED8BAC47692C993611CFE2FCEB00B05* ____context;
};
struct BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7  : public BsonWriterSettings_tEF90321A6E901B5AE2ECC493EC635CB618A847A0
{
	UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* ____encoding;
	bool ____fixOldBinarySubTypeOnOutput;
	int32_t ____maxDocumentSize;
};
struct BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3  : public BsonReader_tCB2740332DC33A84386CA5EE3807EF72038ACBBC
{
	BsonDocumentReaderContext_t733B6B5A9BB0588AAFFAF420026A5CE3058C5E1B* ____context;
	BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5* ____currentValue;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___range;
	int32_t ___lightmapIndex;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010 
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_marshaled_pinvoke
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_marshaled_com
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___m_SortingSettings;
	U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D ___shaderPassNames;
	int32_t ___m_PerObjectData;
	int32_t ___m_Flags;
	int32_t ___m_OverrideShaderID;
	int32_t ___m_OverrideShaderPassIndex;
	int32_t ___m_OverrideMaterialInstanceId;
	int32_t ___m_OverrideMaterialPassIndex;
	int32_t ___m_fallbackMaterialInstanceId;
	int32_t ___m_MainLightIndex;
	int32_t ___m_UseSrpBatcher;
	int32_t ___m_LodCrossFadeStencilMask;
};
struct JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB  : public BsonReader_tCB2740332DC33A84386CA5EE3807EF72038ACBBC
{
	JsonBuffer_tC78F6B53AB1C7FDDBBA485937BBB0DD1B561110C* ____buffer;
	JsonReaderSettings_t8AB81F322CF6A5DC2942D3F6EAE340C6C2CDD162* ____jsonReaderSettings;
	JsonReaderContext_tA7B527936A9E094A256D278A9512C9BABEA071CF* ____context;
	JsonToken_t3F746E473933F87078A9EC200EAE30C92E9A7D8D* ____currentToken;
	BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5* ____currentValue;
	JsonToken_t3F746E473933F87078A9EC200EAE30C92E9A7D8D* ____pushedToken;
};
struct JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C  : public BsonWriterSettings_tEF90321A6E901B5AE2ECC493EC635CB618A847A0
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding;
	bool ____indent;
	String_t* ____indentChars;
	String_t* ____newLineChars;
	int32_t ____outputMode;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____shellVersion;
};
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	bool ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___accessFlags;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	bool ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106 
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	bool ___m_IsEmbedded;
	bool ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_marshaled_pinvoke
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	int32_t ___m_IsEmbedded;
	int32_t ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_marshaled_com
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	int32_t ___m_IsEmbedded;
	int32_t ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 
{
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___slices;
	uint32_t ___slicesValidMask;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 
{
	bool ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_pinvoke
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_com
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF 
{
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
	int32_t ___snapshotIndex;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948 
{
	String_t* ___name;
	int32_t ___index;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceCreateList;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___enableAsyncCompute;
	bool ___allowPassCulling;
	bool ___needGraphicsFence;
	bool ___culled;
	bool ___culledByRendererList;
	bool ___hasSideEffect;
	bool ___enableFoveatedRasterization;
	bool ___hasShadingRateImage;
	bool ___hasShadingRateStates;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_marshaled_pinvoke
{
	char* ___name;
	int32_t ___index;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___enableAsyncCompute;
	int32_t ___allowPassCulling;
	int32_t ___needGraphicsFence;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___enableFoveatedRasterization;
	int32_t ___hasShadingRateImage;
	int32_t ___hasShadingRateStates;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___index;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___enableAsyncCompute;
	int32_t ___allowPassCulling;
	int32_t ___needGraphicsFence;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___enableFoveatedRasterization;
	int32_t ___hasShadingRateImage;
	int32_t ___hasShadingRateStates;
};
struct FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 
{
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a0;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a1;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a2;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a3;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a4;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a5;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a6;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C 
{
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a0;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a1;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a2;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a3;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a4;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a5;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a6;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a7;
	int32_t ___activeAttachments;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_marshaled_pinvoke
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_marshaled_com
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___instanceIndex;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_marshaled_pinvoke
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke ___key;
	int32_t ___instanceIndex;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_marshaled_com
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com ___key;
	int32_t ___instanceIndex;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	bool ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2 
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	bool ___hasDepth;
	bool ___hasFoveatedRasterization;
	bool ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_pinvoke
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_com
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214 
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_pinvoke
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_com
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct U3CU3Ec__71_1_t529D4432997B9A7C65EFE3E0753543DB8C92F882_StaticFields
{
	U3CU3Ec__71_1_t529D4432997B9A7C65EFE3E0753543DB8C92F882* ___U3CU3E9;
	Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* ___U3CU3E9__71_0;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___Value;
};
struct EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A_StaticFields
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___Value;
};
struct EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344_StaticFields
{
	KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___Value;
};
struct EmptyArray_1_tAC344C0CB3A1178A06D7E53BD6CA11847AB83524_StaticFields
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___Value;
};
struct EmptyArray_1_t007D5A4CFD1D2FF34EEBE21CEF13AECC70F095CE_StaticFields
{
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___Value;
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___Value;
};
struct EmptyArray_1_t056988AF5058814F667ED35F57F2BFE91E0AC4A5_StaticFields
{
	MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* ___Value;
};
struct EmptyArray_1_tBAE389DB7DC91C9D5BA7FFF14D3BF84D5D535A21_StaticFields
{
	MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* ___Value;
};
struct EmptyArray_1_t6F7601522B7C3D965C794144D6AB06B5E56C389F_StaticFields
{
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___Value;
};
struct EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47_StaticFields
{
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___Value;
};
struct EmptyArray_1_tA3FD4DA73690B22AF51247DE4AB33A52280CF1DD_StaticFields
{
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___Value;
};
struct EmptyArray_1_tE734FFF96D1ED5A8579050C42CB3D5933F541B75_StaticFields
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___Value;
};
struct EmptyArray_1_t08704EABC4CA3368B0E6C088FF83A3BDE70484C8_StaticFields
{
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___Value;
};
struct EmptyArray_1_t3A050EE8D27544565549460B170C55B4093D1847_StaticFields
{
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___Value;
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Value;
};
struct EmptyArray_1_t27C14574AFE8F6D02EFF76C2F6C68B108BCF9573_StaticFields
{
	SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* ___Value;
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___Value;
};
struct EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC_StaticFields
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___Value;
};
struct EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___Value;
};
struct EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___Value;
};
struct EmptyArray_1_t73B178E4EDDEA59CC11E901A636A82FD28EFF983_StaticFields
{
	FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* ___Value;
};
struct List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE_StaticFields
{
	ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E* ___s_emptyArray;
};
struct List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272_StaticFields
{
	ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5* ___s_emptyArray;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___s_emptyArray;
};
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray;
};
struct List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A_StaticFields
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___s_emptyArray;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1_StaticFields
{
	Dictionary_2_t193CB88AD132B6C3D98F8D769BA5E2BDE28EE757* _____classMaps;
	Queue_1_tB0E94F5AF8A344CCACE0C011DB116921D43845DD* _____knownTypesQueue;
	int32_t _____freezeNestingLevel;
};
struct BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_StaticFields
{
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* _____configLock;
	Dictionary_2_tF85D2B08790C648657FC2FDA99A430B3A7253AAA* _____idGenerators;
	Dictionary_2_t584F364FD3F610DD1C888D89A6DE493092CE123C* _____discriminatorConventions;
	Dictionary_2_tCA86DDAB770B962CF35CA2312B657B1DB91583A9* _____discriminators;
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* _____discriminatedTypes;
	BsonSerializerRegistry_tC373774AA5C8642B419E0C83DD0B63E5593B8F92* _____serializerRegistry;
	TypeMappingSerializationProvider_tD44C7D519C370D4E1CE2BD4C5F0CCEEAD8BE3398* _____typeMappingSerializationProvider;
	ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834* _____typesWithRegisteredKnownTypes;
	bool _____useNullIdChecker;
	bool _____useZeroIdChecker;
};
struct BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5_StaticFields
{
	Dictionary_2_t9F39C95F774FA1D3DB89E2652625E1FF1CB39F82* _____bsonTypeSortOrder;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___Null;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___Zero;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___One;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___ImaginaryOne;
	double ___s_sqrtRescaleThreshold;
	double ___s_asinOverflowThreshold;
	double ___s_log2;
};
struct ContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330_StaticFields
{
	bool ___s_defaultInitialized;
	ContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330 ___s_Default;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_ValidName;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_StaticFields
{
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___Invalid;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_StaticFields
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___s_Null;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_StaticFields
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___Invalid;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E_StaticFields
{
	Matrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E ____identity;
};
struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_StaticFields
{
	Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ____identity;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_StaticFields
{
	SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___Invalid;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_StaticFields
{
	int32_t ___maximumCullingPlaneCount;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity;
};
struct AnimationEventBlittable_t59D8029C582F4A7E4EFB0C374DB23CC17BE323EF_ThreadStaticFields
{
	GCHandlePool_tD3D33D37D8C147B41AAB365A95FF06822785A768* ___s_handlePool;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___LoadReasonMessages;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_StaticFields
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___Invalid;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_StaticFields
{
	uint32_t ___s_CurrentValidBit;
	uint32_t ___s_SharedResourceValidBit;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___StoreReasonMessages;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default;
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
struct BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7_StaticFields
{
	BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7* _____defaults;
};
struct JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* _____variableLengthIso8601Formats;
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* _____fixedLengthIso8601Formats;
};
struct JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C_StaticFields
{
	JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C* _____defaults;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
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
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 m_Items[1];

	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		m_Items[index] = value;
	}
};
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C m_Items[1];

	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C value)
	{
		m_Items[index] = value;
	}
};
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
struct MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E m_Items[1];

	inline MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E value)
	{
		m_Items[index] = value;
	}
};
struct MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895  : public RuntimeArray
{
	ALIGN_FIELD (8) MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC m_Items[1];

	inline MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC value)
	{
		m_Items[index] = value;
	}
};
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE  : public RuntimeArray
{
	ALIGN_FIELD (8) Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C m_Items[1];

	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		m_Items[index] = value;
	}
};
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993  : public RuntimeArray
{
	ALIGN_FIELD (8) Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D m_Items[1];

	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		m_Items[index] = value;
	}
};
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A  : public RuntimeArray
{
	ALIGN_FIELD (8) Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 m_Items[1];

	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4  : public RuntimeArray
{
	ALIGN_FIELD (8) SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 m_Items[1];

	inline SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 value)
	{
		m_Items[index] = value;
	}
};
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
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
struct FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7  : public RuntimeArray
{
	ALIGN_FIELD (8) FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063 m_Items[1];

	inline FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063 value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
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
struct ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E  : public RuntimeArray
{
	ALIGN_FIELD (8) ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4 m_Items[1];

	inline ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4 value)
	{
		m_Items[index] = value;
	}
};
struct ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5  : public RuntimeArray
{
	ALIGN_FIELD (8) ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F m_Items[1];

	inline ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F value)
	{
		m_Items[index] = value;
	}
};
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 m_Items[1];

	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mAB973BC26AE613D4A698AA272F9966BBB1FEA7F9_gshared_inline (Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Span_1_ToArray_m26BDA405A2FAA3836803417EF508FF3ED17D639E_gshared_inline (Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m57107B0971C215948970E813F419EC87CC0AB443_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Span_1_ToArray_m48970EF6F3DDB984D842A90662327A9D0A999E0E_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8738969A09F3E294FE020AC78D512A8762CF54A6_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Span_1_ToArray_m3A166501793DDF0D07C7FE8393C01BA3B46FCDA0_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m470F2D1C376F672AD7385840036E5E3FDA7BCD29_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Span_1_ToArray_m90C475E472A2E9FCA3B8AF1A903B10C61E09F07A_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m39E68B73B1D51755A2D802AFF9C739DD1E9C18C6_gshared_inline (Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* Span_1_ToArray_m9709EDC35CE0914CDAF9FF5AC0F65B846529A155_gshared_inline (Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* Array_Empty_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m8D1741D78F4BE953D5A3A4F3E6698C234444B61F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFA501D433BD32705D8D9FF2EFB26C6142C15335E_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Span_1_ToArray_m0C441D8B8E14F9F8A026B6CDA0046EBE6EE88CE6_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC84CC26C2EBBBB9CD3F60B1A1D965914C9C7E666_gshared_inline (Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* Span_1_ToArray_m834512E2FA615CD393F01F45E446884F0B7DBDBA_gshared_inline (Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* Array_Empty_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m9D69F1F3E69D9BE4FE932CAA5488FF2C0C77BD84_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m41258F088B04437BDFB3AF3EC45AF81CEFD2DAD6_gshared_inline (Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* Span_1_ToArray_mC98E43A40C394AEFE12BC4F3E9B8014AAA7AC4E3_gshared_inline (Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* Array_Empty_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_mF3D8CDB2BE5DFBD5770C0DC1B09663648C59D40B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82A705EF0937AA2925A9F1B58A31D609771A7E1F_gshared_inline (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Span_1_ToArray_m84E3B0120E90C9CA86F6DFC76CFE438EA424AB93_gshared_inline (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA6B0A6ED7314F9301B3FC7317CFED015A7DA262B_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Span_1_ToArray_mA7A7BA36A340E11528D00699E69C6462A0699FEC_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7E2B58017948399EC02850E4C7DE9ACB0D8B4786_gshared_inline (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Span_1_ToArray_mDCDD2EDC0B547EC18289F95DCF0371D237B516D5_gshared_inline (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m256018AD9B1E710A73E35FAE6D5CC39DD1764EB9_gshared_inline (Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Span_1_ToArray_m7991F6310890A03D4302F449C3953625E07076C3_gshared_inline (Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Array_Empty_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF09AB489F062620E85BE4536FC98B6AEBF00B791_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m38EECB636829D807B96005A9AA8E41063C877DA1_gshared_inline (Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Span_1_ToArray_m9D9F21EB763577CCF4D66D30E5431BE1323FC6AE_gshared_inline (Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2FFB899F837C3CC69382939AF9BBED95EFA4C867_gshared_inline (Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* Span_1_ToArray_m3095255B2FD7A488643362E8AF1B5EE87E9C1665_gshared_inline (Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* Array_Empty_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m08DF41F14756E94315B0762AD8D2B62A0F4E4C8A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m202786F88C12306CE6CE45D750A691E2CBEAC431_gshared_inline (Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* Span_1_ToArray_mBB98F433690BE6D052DFD14123DDF849A40A109D_gshared_inline (Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* Array_Empty_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m1FE72E952510F146795941C48441AF40900371BC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m50C1AB8CF970B0E296CD917975C18DCB815D193B_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Span_1_ToArray_m32DA34FCDE6D7AB9EA941ABF7CE26FEE26AEA49C_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCCDE317B7EF9509DB97AFE5968CF15240BB7DE03_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Span_1_ToArray_m2E6BEE60BD48A117C372CF405F27139869922A06_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m35263B255C49C34B49026B8D2239D90D20A46BAE_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Span_1_ToArray_mBCD2D9E7C594EAF63CC33D62601F3BCEB8F9BA68_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB55F7EBED8FFAAD1F44640FDE1CE6B007D226E39_gshared_inline (Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* Span_1_ToArray_m7122B69A3EE72C8CC9F5BCC68A551D011D70AD38_gshared_inline (Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* Array_Empty_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m965163D4EE93C4237FB34B9F2EDF58313DA5940E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m79E5E216B9A1059354AE65B1FB457284A1959AE2_gshared_inline (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* ___0_list, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE6D9B95B533B42BC07FD29CC736F68BEC4D37AA7_gshared_inline (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m46A9092C9EBB43ACC0D3D7DA2361000331344111_gshared_inline (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* ___0_list, ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9 ___1_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_m89180E186D086E01CDB7EFD9B7CCAB013318F41E_gshared_inline (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* ___0_list, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD205CCF117CEE3DF2634CB8C139538A35A1E0252_gshared_inline (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_mBF3750C2A086530CE4E3BE75A9518B0A3BE25FFB_gshared_inline (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* ___0_list, ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945 ___1_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_gshared_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m282E1BC4A5F7B82AFCA96523874584D8AAA045C1_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_gshared_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC ___1_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1DF7EBE6857CEE8606CEDF15CD2780CBBCACB384_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1AD06B8E9C062FA16DFB8AFADC42E1D854FF9AEE_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m72BE95C245ACC9D361AA32DDDDFDE55F409FCF3E_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 ___1_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mA56B630AC9FA5916210D2B7DFE657BEF9FB8DE83_gshared_inline (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* ___0_list, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBF7291E3430B639E4D2A7F9540DE992737D45AC4_gshared_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m25BC7428B977D2ABB72391CA387F0A9E664D7805_gshared_inline (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* ___0_list, ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ___1_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367_gshared (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___0_destination, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m6212DC59D136B8FAA87466C3495D0F4B7B3762BC_gshared (MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* ___0_destination, MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_m565400A36DB2B85ED0E370333F71CBA13D3B9A4E_gshared (MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* ___0_destination, MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F_gshared (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7_gshared (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E_gshared (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___0_destination, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA_gshared (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_destination, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m835EF4F437450CDDBD9433F292E9AC2479A90E1E_gshared (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___0_destination, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46_gshared (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___0_destination, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m57AA7D3FC3F97C3450CD81D369713175353E442B_gshared (FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* ___0_destination, FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1961C2B7BEA659EB5501916E6F7360ECF853DC3D_gshared (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E* ReadOnlySpan_1_ToArray_m69D8E9882D7370A5A99340277ADE89DBAFDC0A74_gshared (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mEF64D82D78310EEEDF21F0253A60640F21D66A3E_gshared_inline (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m3C578068DC2018B7302932ECB7A274654A622A8E_gshared (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5* ReadOnlySpan_1_ToArray_m1DB3756111E6E1B3A16E8358E06A32F13E29A289_gshared (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m444F1B996EB0E833EF6DC602B8BAA553FCEB5E54_gshared_inline (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F_gshared (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mFC460C1FE9D413F41371C800ECB347D153264F69_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ReadOnlySpan_1_ToArray_mA1A7F3A8ACE2D67BE5ABE1111F1E744EFCA5813D_gshared (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m4FB032608DA6142D1DC5EE48D48F376914FB898B_gshared (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ReadOnlySpan_1_ToArray_mA4636BCEDF9716846FE602470940CE7BDFD9A98C_gshared (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m43B30473D688DEBD0E776FD8303069AA370B69F4_gshared_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, const RuntimeMethod* method) ;

inline void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1 (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656 (void* ___0_ptr, const RuntimeMethod* method) ;
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline void Span_1__ctor_mAB973BC26AE613D4A698AA272F9966BBB1FEA7F9_inline (Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mAB973BC26AE613D4A698AA272F9966BBB1FEA7F9_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Span_1_ToArray_m26BDA405A2FAA3836803417EF508FF3ED17D639E_inline (Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D* __this, const RuntimeMethod* method)
{
	return ((  Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* (*) (Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D*, const RuntimeMethod*))Span_1_ToArray_m26BDA405A2FAA3836803417EF508FF3ED17D639E_gshared_inline)(__this, method);
}
inline Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline (const RuntimeMethod* method)
{
	return ((  Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* (*) (const RuntimeMethod*))Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline)(method);
}
inline void Span_1__ctor_m57107B0971C215948970E813F419EC87CC0AB443_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m57107B0971C215948970E813F419EC87CC0AB443_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Span_1_ToArray_m48970EF6F3DDB984D842A90662327A9D0A999E0E_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955*, const RuntimeMethod*))Span_1_ToArray_m48970EF6F3DDB984D842A90662327A9D0A999E0E_gshared_inline)(__this, method);
}
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline (const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (const RuntimeMethod*))Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline)(method);
}
inline void Span_1__ctor_m8738969A09F3E294FE020AC78D512A8762CF54A6_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m8738969A09F3E294FE020AC78D512A8762CF54A6_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Span_1_ToArray_m3A166501793DDF0D07C7FE8393C01BA3B46FCDA0_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method)
{
	return ((  KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* (*) (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382*, const RuntimeMethod*))Span_1_ToArray_m3A166501793DDF0D07C7FE8393C01BA3B46FCDA0_gshared_inline)(__this, method);
}
inline KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline (const RuntimeMethod* method)
{
	return ((  KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* (*) (const RuntimeMethod*))Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_gshared_inline)(method);
}
inline void Span_1__ctor_m470F2D1C376F672AD7385840036E5E3FDA7BCD29_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m470F2D1C376F672AD7385840036E5E3FDA7BCD29_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Span_1_ToArray_m90C475E472A2E9FCA3B8AF1A903B10C61E09F07A_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method)
{
	return ((  MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* (*) (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36*, const RuntimeMethod*))Span_1_ToArray_m90C475E472A2E9FCA3B8AF1A903B10C61E09F07A_gshared_inline)(__this, method);
}
inline MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_inline (const RuntimeMethod* method)
{
	return ((  MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* (*) (const RuntimeMethod*))Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_gshared_inline)(method);
}
inline void Span_1__ctor_m39E68B73B1D51755A2D802AFF9C739DD1E9C18C6_inline (Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m39E68B73B1D51755A2D802AFF9C739DD1E9C18C6_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* Span_1_ToArray_m9709EDC35CE0914CDAF9FF5AC0F65B846529A155_inline (Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF* __this, const RuntimeMethod* method)
{
	return ((  MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* (*) (Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF*, const RuntimeMethod*))Span_1_ToArray_m9709EDC35CE0914CDAF9FF5AC0F65B846529A155_gshared_inline)(__this, method);
}
inline MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* Array_Empty_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m8D1741D78F4BE953D5A3A4F3E6698C234444B61F_inline (const RuntimeMethod* method)
{
	return ((  MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* (*) (const RuntimeMethod*))Array_Empty_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m8D1741D78F4BE953D5A3A4F3E6698C234444B61F_gshared_inline)(method);
}
inline void Span_1__ctor_mFA501D433BD32705D8D9FF2EFB26C6142C15335E_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mFA501D433BD32705D8D9FF2EFB26C6142C15335E_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Span_1_ToArray_m0C441D8B8E14F9F8A026B6CDA0046EBE6EE88CE6_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* (*) (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E*, const RuntimeMethod*))Span_1_ToArray_m0C441D8B8E14F9F8A026B6CDA0046EBE6EE88CE6_gshared_inline)(__this, method);
}
inline Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline (const RuntimeMethod* method)
{
	return ((  Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* (*) (const RuntimeMethod*))Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline)(method);
}
inline void Span_1__ctor_mC84CC26C2EBBBB9CD3F60B1A1D965914C9C7E666_inline (Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mC84CC26C2EBBBB9CD3F60B1A1D965914C9C7E666_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* Span_1_ToArray_m834512E2FA615CD393F01F45E446884F0B7DBDBA_inline (Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590* __this, const RuntimeMethod* method)
{
	return ((  MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* (*) (Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590*, const RuntimeMethod*))Span_1_ToArray_m834512E2FA615CD393F01F45E446884F0B7DBDBA_gshared_inline)(__this, method);
}
inline MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* Array_Empty_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m9D69F1F3E69D9BE4FE932CAA5488FF2C0C77BD84_inline (const RuntimeMethod* method)
{
	return ((  MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* (*) (const RuntimeMethod*))Array_Empty_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m9D69F1F3E69D9BE4FE932CAA5488FF2C0C77BD84_gshared_inline)(method);
}
inline void Span_1__ctor_m41258F088B04437BDFB3AF3EC45AF81CEFD2DAD6_inline (Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m41258F088B04437BDFB3AF3EC45AF81CEFD2DAD6_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* Span_1_ToArray_mC98E43A40C394AEFE12BC4F3E9B8014AAA7AC4E3_inline (Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F* __this, const RuntimeMethod* method)
{
	return ((  MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* (*) (Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F*, const RuntimeMethod*))Span_1_ToArray_mC98E43A40C394AEFE12BC4F3E9B8014AAA7AC4E3_gshared_inline)(__this, method);
}
inline MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* Array_Empty_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_mF3D8CDB2BE5DFBD5770C0DC1B09663648C59D40B_inline (const RuntimeMethod* method)
{
	return ((  MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* (*) (const RuntimeMethod*))Array_Empty_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_mF3D8CDB2BE5DFBD5770C0DC1B09663648C59D40B_gshared_inline)(method);
}
inline void Span_1__ctor_m82A705EF0937AA2925A9F1B58A31D609771A7E1F_inline (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m82A705EF0937AA2925A9F1B58A31D609771A7E1F_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Span_1_ToArray_m84E3B0120E90C9CA86F6DFC76CFE438EA424AB93_inline (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6* __this, const RuntimeMethod* method)
{
	return ((  PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* (*) (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6*, const RuntimeMethod*))Span_1_ToArray_m84E3B0120E90C9CA86F6DFC76CFE438EA424AB93_gshared_inline)(__this, method);
}
inline PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_inline (const RuntimeMethod* method)
{
	return ((  PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* (*) (const RuntimeMethod*))Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_gshared_inline)(method);
}
inline void Span_1__ctor_mA6B0A6ED7314F9301B3FC7317CFED015A7DA262B_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mA6B0A6ED7314F9301B3FC7317CFED015A7DA262B_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Span_1_ToArray_mA7A7BA36A340E11528D00699E69C6462A0699FEC_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method)
{
	return ((  QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* (*) (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6*, const RuntimeMethod*))Span_1_ToArray_mA7A7BA36A340E11528D00699E69C6462A0699FEC_gshared_inline)(__this, method);
}
inline QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline (const RuntimeMethod* method)
{
	return ((  QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* (*) (const RuntimeMethod*))Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_gshared_inline)(method);
}
inline void Span_1__ctor_m7E2B58017948399EC02850E4C7DE9ACB0D8B4786_inline (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m7E2B58017948399EC02850E4C7DE9ACB0D8B4786_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Span_1_ToArray_mDCDD2EDC0B547EC18289F95DCF0371D237B516D5_inline (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3* __this, const RuntimeMethod* method)
{
	return ((  RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* (*) (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3*, const RuntimeMethod*))Span_1_ToArray_mDCDD2EDC0B547EC18289F95DCF0371D237B516D5_gshared_inline)(__this, method);
}
inline RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_inline (const RuntimeMethod* method)
{
	return ((  RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* (*) (const RuntimeMethod*))Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_gshared_inline)(method);
}
inline void Span_1__ctor_m256018AD9B1E710A73E35FAE6D5CC39DD1764EB9_inline (Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m256018AD9B1E710A73E35FAE6D5CC39DD1764EB9_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Span_1_ToArray_m7991F6310890A03D4302F449C3953625E07076C3_inline (Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060* __this, const RuntimeMethod* method)
{
	return ((  RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* (*) (Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060*, const RuntimeMethod*))Span_1_ToArray_m7991F6310890A03D4302F449C3953625E07076C3_gshared_inline)(__this, method);
}
inline RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Array_Empty_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF09AB489F062620E85BE4536FC98B6AEBF00B791_inline (const RuntimeMethod* method)
{
	return ((  RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* (*) (const RuntimeMethod*))Array_Empty_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF09AB489F062620E85BE4536FC98B6AEBF00B791_gshared_inline)(method);
}
inline void Span_1__ctor_m38EECB636829D807B96005A9AA8E41063C877DA1_inline (Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m38EECB636829D807B96005A9AA8E41063C877DA1_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Span_1_ToArray_m9D9F21EB763577CCF4D66D30E5431BE1323FC6AE_inline (Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2* __this, const RuntimeMethod* method)
{
	return ((  RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* (*) (Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2*, const RuntimeMethod*))Span_1_ToArray_m9D9F21EB763577CCF4D66D30E5431BE1323FC6AE_gshared_inline)(__this, method);
}
inline RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_inline (const RuntimeMethod* method)
{
	return ((  RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* (*) (const RuntimeMethod*))Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_gshared_inline)(method);
}
inline void Span_1__ctor_m2FFB899F837C3CC69382939AF9BBED95EFA4C867_inline (Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m2FFB899F837C3CC69382939AF9BBED95EFA4C867_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* Span_1_ToArray_m3095255B2FD7A488643362E8AF1B5EE87E9C1665_inline (Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0* __this, const RuntimeMethod* method)
{
	return ((  ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* (*) (Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0*, const RuntimeMethod*))Span_1_ToArray_m3095255B2FD7A488643362E8AF1B5EE87E9C1665_gshared_inline)(__this, method);
}
inline ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* Array_Empty_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m08DF41F14756E94315B0762AD8D2B62A0F4E4C8A_inline (const RuntimeMethod* method)
{
	return ((  ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* (*) (const RuntimeMethod*))Array_Empty_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m08DF41F14756E94315B0762AD8D2B62A0F4E4C8A_gshared_inline)(method);
}
inline void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline)(__this, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (const RuntimeMethod*))Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline)(method);
}
inline void Span_1__ctor_m202786F88C12306CE6CE45D750A691E2CBEAC431_inline (Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m202786F88C12306CE6CE45D750A691E2CBEAC431_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* Span_1_ToArray_mBB98F433690BE6D052DFD14123DDF849A40A109D_inline (Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE* __this, const RuntimeMethod* method)
{
	return ((  SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* (*) (Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE*, const RuntimeMethod*))Span_1_ToArray_mBB98F433690BE6D052DFD14123DDF849A40A109D_gshared_inline)(__this, method);
}
inline SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* Array_Empty_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m1FE72E952510F146795941C48441AF40900371BC_inline (const RuntimeMethod* method)
{
	return ((  SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* (*) (const RuntimeMethod*))Array_Empty_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m1FE72E952510F146795941C48441AF40900371BC_gshared_inline)(method);
}
inline void Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, const RuntimeMethod*))Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_gshared_inline)(__this, method);
}
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline (const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (const RuntimeMethod*))Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline)(method);
}
inline void Span_1__ctor_m50C1AB8CF970B0E296CD917975C18DCB815D193B_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m50C1AB8CF970B0E296CD917975C18DCB815D193B_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Span_1_ToArray_m32DA34FCDE6D7AB9EA941ABF7CE26FEE26AEA49C_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, const RuntimeMethod*))Span_1_ToArray_m32DA34FCDE6D7AB9EA941ABF7CE26FEE26AEA49C_gshared_inline)(__this, method);
}
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_inline (const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (const RuntimeMethod*))Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline)(method);
}
inline void Span_1__ctor_mCCDE317B7EF9509DB97AFE5968CF15240BB7DE03_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mCCDE317B7EF9509DB97AFE5968CF15240BB7DE03_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Span_1_ToArray_m2E6BEE60BD48A117C372CF405F27139869922A06_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, const RuntimeMethod*))Span_1_ToArray_m2E6BEE60BD48A117C372CF405F27139869922A06_gshared_inline)(__this, method);
}
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline (const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (const RuntimeMethod*))Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline)(method);
}
inline void Span_1__ctor_m35263B255C49C34B49026B8D2239D90D20A46BAE_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m35263B255C49C34B49026B8D2239D90D20A46BAE_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Span_1_ToArray_mBCD2D9E7C594EAF63CC33D62601F3BCEB8F9BA68_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method)
{
	return ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, const RuntimeMethod*))Span_1_ToArray_mBCD2D9E7C594EAF63CC33D62601F3BCEB8F9BA68_gshared_inline)(__this, method);
}
inline Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline (const RuntimeMethod* method)
{
	return ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (const RuntimeMethod*))Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline)(method);
}
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void Span_1__ctor_mB55F7EBED8FFAAD1F44640FDE1CE6B007D226E39_inline (Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mB55F7EBED8FFAAD1F44640FDE1CE6B007D226E39_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* Span_1_ToArray_m7122B69A3EE72C8CC9F5BCC68A551D011D70AD38_inline (Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F* __this, const RuntimeMethod* method)
{
	return ((  FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* (*) (Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F*, const RuntimeMethod*))Span_1_ToArray_m7122B69A3EE72C8CC9F5BCC68A551D011D70AD38_gshared_inline)(__this, method);
}
inline FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* Array_Empty_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m965163D4EE93C4237FB34B9F2EDF58313DA5940E_inline (const RuntimeMethod* method)
{
	return ((  FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* (*) (const RuntimeMethod*))Array_Empty_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m965163D4EE93C4237FB34B9F2EDF58313DA5940E_gshared_inline)(method);
}
inline void NoAllocHelpers_ResetListSize_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m79E5E216B9A1059354AE65B1FB457284A1959AE2_inline (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* ___0_list, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE*, int32_t, const RuntimeMethod*))NoAllocHelpers_ResetListSize_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m79E5E216B9A1059354AE65B1FB457284A1959AE2_gshared_inline)(___0_list, ___1_size, method);
}
inline void ReadOnlySpan_1__ctor_mE6D9B95B533B42BC07FD29CC736F68BEC4D37AA7_inline (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mE6D9B95B533B42BC07FD29CC736F68BEC4D37AA7_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void NoAllocHelpers_ResetListContents_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m46A9092C9EBB43ACC0D3D7DA2361000331344111_inline (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* ___0_list, ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9 ___1_span, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE*, ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9, const RuntimeMethod*))NoAllocHelpers_ResetListContents_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m46A9092C9EBB43ACC0D3D7DA2361000331344111_gshared_inline)(___0_list, ___1_span, method);
}
inline void NoAllocHelpers_ResetListSize_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_m89180E186D086E01CDB7EFD9B7CCAB013318F41E_inline (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* ___0_list, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272*, int32_t, const RuntimeMethod*))NoAllocHelpers_ResetListSize_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_m89180E186D086E01CDB7EFD9B7CCAB013318F41E_gshared_inline)(___0_list, ___1_size, method);
}
inline void ReadOnlySpan_1__ctor_mD205CCF117CEE3DF2634CB8C139538A35A1E0252_inline (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD205CCF117CEE3DF2634CB8C139538A35A1E0252_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void NoAllocHelpers_ResetListContents_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_mBF3750C2A086530CE4E3BE75A9518B0A3BE25FFB_inline (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* ___0_list, ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945 ___1_span, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272*, ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945, const RuntimeMethod*))NoAllocHelpers_ResetListContents_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_mBF3750C2A086530CE4E3BE75A9518B0A3BE25FFB_gshared_inline)(___0_list, ___1_span, method);
}
inline void NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, const RuntimeMethod*))NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_gshared_inline)(___0_list, ___1_size, method);
}
inline void ReadOnlySpan_1__ctor_m282E1BC4A5F7B82AFCA96523874584D8AAA045C1_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m282E1BC4A5F7B82AFCA96523874584D8AAA045C1_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC ___1_span, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC, const RuntimeMethod*))NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_gshared_inline)(___0_list, ___1_span, method);
}
inline void NoAllocHelpers_ResetListSize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1DF7EBE6857CEE8606CEDF15CD2780CBBCACB384_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))NoAllocHelpers_ResetListSize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1DF7EBE6857CEE8606CEDF15CD2780CBBCACB384_gshared_inline)(___0_list, ___1_size, method);
}
inline void ReadOnlySpan_1__ctor_m1AD06B8E9C062FA16DFB8AFADC42E1D854FF9AEE_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1AD06B8E9C062FA16DFB8AFADC42E1D854FF9AEE_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void NoAllocHelpers_ResetListContents_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m72BE95C245ACC9D361AA32DDDDFDE55F409FCF3E_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 ___1_span, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64, const RuntimeMethod*))NoAllocHelpers_ResetListContents_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m72BE95C245ACC9D361AA32DDDDFDE55F409FCF3E_gshared_inline)(___0_list, ___1_span, method);
}
inline void NoAllocHelpers_ResetListSize_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mA56B630AC9FA5916210D2B7DFE657BEF9FB8DE83_inline (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* ___0_list, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A*, int32_t, const RuntimeMethod*))NoAllocHelpers_ResetListSize_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mA56B630AC9FA5916210D2B7DFE657BEF9FB8DE83_gshared_inline)(___0_list, ___1_size, method);
}
inline void ReadOnlySpan_1__ctor_mBF7291E3430B639E4D2A7F9540DE992737D45AC4_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mBF7291E3430B639E4D2A7F9540DE992737D45AC4_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void NoAllocHelpers_ResetListContents_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m25BC7428B977D2ABB72391CA387F0A9E664D7805_inline (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* ___0_list, ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ___1_span, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A*, ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006, const RuntimeMethod*))NoAllocHelpers_ResetListContents_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m25BC7428B977D2ABB72391CA387F0A9E664D7805_gshared_inline)(___0_list, ___1_span, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonClassMap_RegisterClassMap_mBE100B6BC1D241FFD0676EA297B87B77EDB53EA5 (BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1* ___0_classMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonSerializationInfo_get_ElementName_m99E6466FEAF886D8F766F39F1D1A7C63BDC10611 (BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonSerializationInfo_DeserializeValue_m0E701C53200EA30BF432B69708875CE0DBD4ADF8 (BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* __this, BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonDocumentWrapper_t69CE513CDBC2CA883128A294F26AF43EB1BAC831* BsonDocumentWrapper_Create_m79D51C827E3C594A45274199FB666EDD876B0FD9 (Type_t* ___0_nominalType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonSerializer_LookupSerializer_m941D52074724E8AB827C6F477720D919E25C960D (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializationArgs_SetOrValidateNominalType_m809315C6678F2CE1A38CE981DF5B24390F36DF12 (BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C* __this, Type_t* ___0_nominalType, String_t* ___1_nominalTypeSource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonExtensionMethods_ToBson_m86C686C12A1FACFFE52B9684BB44769F7D17D44E (RuntimeObject* ___0_obj, Type_t* ___1_nominalType, BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7* ___2_writerSettings, RuntimeObject* ___3_serializer, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___4_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___5_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* BsonExtensionMethods_ToBsonDocument_mF8BAAC202B060B8A6BA669C7B48EA62F40CFE23D (RuntimeObject* ___0_obj, Type_t* ___1_nominalType, RuntimeObject* ___2_serializer, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___3_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___4_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonExtensionMethods_ToJson_m9236287819376C53196DBAE5BD4339214AE5C613 (RuntimeObject* ___0_obj, Type_t* ___1_nominalType, JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C* ___2_writerSettings, RuntimeObject* ___3_serializer, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___4_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___5_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer__ctor_m7406C763B9DF94D80B96593AF540F4CBAB18723F (ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, bool ___1_isReadOnly, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBufferStream__ctor_m6AF743BDA828D3F1B9C8B73390029E2BCBB72EBC (ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1* __this, RuntimeObject* ___0_buffer, bool ___1_ownsBuffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonDocumentReader__ctor_mBB4CF43F62FD7189B273FF2613AECE6EACFC1871 (BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3* __this, BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* ___0_document, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonDeserializationContext_t5F7E1FC7931267D13A2D167FE150067FF2792206* BsonDeserializationContext_CreateRoot_m4B9D37EA3EF32D116B3DAEE75C379CEE77A29E8F (RuntimeObject* ___0_reader, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* ___1_configurator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryReader__ctor_mEA1A24B3EEA2F19673F3D659B6DE9002A323FD1A (BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m961DA69A5B96488B5BFD8B3F5F7B75489E24F72F (JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* __this, String_t* ___0_json, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mF5EA3FB5171EC445A65728B8B18B47455E2093D6 (JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_textReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_RegisterSerializer_m29B966F7F9B986D18EE82FD8BB559BDD6B6B0E01 (Type_t* ___0_type, RuntimeObject* ___1_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonSerializationContext_t219C4EEF44FD71B710B9AB9BDEA5EB08723CBC23* BsonSerializationContext_CreateRoot_m96C74C9BB550D9E7015491A9A70815F86C76328E (RuntimeObject* ___0_writer, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___1_configurator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonSerializerRegistry_GetSerializer_m6DB61337CB89BF59B66E83656BD25785287D791A (BsonSerializerRegistry_tC373774AA5C8642B419E0C83DD0B63E5593B8F92* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E (int32_t ___0_offset, int32_t ___1_alignment, const RuntimeMethod* method) ;
inline void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared)(__this, ___0_item1, ___1_item2, method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651 (void* ___0_ptr, int32_t ___1_bytes, const RuntimeMethod* method) ;
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared)(__this, ___0_offset, ___1_length, method);
}
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared)(__this, ___0_offset, ___1_length, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared)(__this, ___0_offset, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, intptr_t ___3_type_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4 (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int64_t*, int64_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367 (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___0_destination, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C*, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m6212DC59D136B8FAA87466C3495D0F4B7B3762BC (MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* ___0_destination, MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E*, MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m6212DC59D136B8FAA87466C3495D0F4B7B3762BC_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_m565400A36DB2B85ED0E370333F71CBA13D3B9A4E (MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* ___0_destination, MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC*, MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_m565400A36DB2B85ED0E370333F71CBA13D3B9A4E_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___0_destination, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_destination, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m835EF4F437450CDDBD9433F292E9AC2479A90E1E (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___0_destination, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m835EF4F437450CDDBD9433F292E9AC2479A90E1E_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (float*, float*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46 (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___0_destination, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2*, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42 (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint16_t*, uint16_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline void Buffer_Memmove_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m57AA7D3FC3F97C3450CD81D369713175353E442B (FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* ___0_destination, FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063*, FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m57AA7D3FC3F97C3450CD81D369713175353E442B_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline int32_t List_1_get_Capacity_m1961C2B7BEA659EB5501916E6F7360ECF853DC3D (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE*, const RuntimeMethod*))List_1_get_Capacity_m1961C2B7BEA659EB5501916E6F7360ECF853DC3D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* UnsafeUtility_As_TisListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34_m4745F5F1AEF80A4F85F258B286AFDF36E4963300 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E* ReadOnlySpan_1_ToArray_m69D8E9882D7370A5A99340277ADE89DBAFDC0A74 (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9* __this, const RuntimeMethod* method)
{
	return ((  ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E* (*) (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_m69D8E9882D7370A5A99340277ADE89DBAFDC0A74_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_mEF64D82D78310EEEDF21F0253A60640F21D66A3E_inline (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_mEF64D82D78310EEEDF21F0253A60640F21D66A3E_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_m3C578068DC2018B7302932ECB7A274654A622A8E (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272*, const RuntimeMethod*))List_1_get_Capacity_m3C578068DC2018B7302932ECB7A274654A622A8E_gshared)(__this, method);
}
inline ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* UnsafeUtility_As_TisListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE_mD433114417D959F3163EB1C34A70990437C0FB08 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5* ReadOnlySpan_1_ToArray_m1DB3756111E6E1B3A16E8358E06A32F13E29A289 (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945* __this, const RuntimeMethod* method)
{
	return ((  ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5* (*) (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_m1DB3756111E6E1B3A16E8358E06A32F13E29A289_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m444F1B996EB0E833EF6DC602B8BAA553FCEB5E54_inline (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m444F1B996EB0E833EF6DC602B8BAA553FCEB5E54_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, const RuntimeMethod*))List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared)(__this, method);
}
inline ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method)
{
	return ((  RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_mFC460C1FE9D413F41371C800ECB347D153264F69 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Capacity_mFC460C1FE9D413F41371C800ECB347D153264F69_gshared)(__this, method);
}
inline ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* UnsafeUtility_As_TisListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6_mE5FD3C189A791B18279B00F6A758B785560A43C2 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ReadOnlySpan_1_ToArray_mA1A7F3A8ACE2D67BE5ABE1111F1E744EFCA5813D (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_mA1A7F3A8ACE2D67BE5ABE1111F1E744EFCA5813D_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_m4FB032608DA6142D1DC5EE48D48F376914FB898B (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A*, const RuntimeMethod*))List_1_get_Capacity_m4FB032608DA6142D1DC5EE48D48F376914FB898B_gshared)(__this, method);
}
inline ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* UnsafeUtility_As_TisListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05_m57911C0041F9C1B79F894A67A6AD56B61D96D9C2 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ReadOnlySpan_1_ToArray_mA4636BCEDF9716846FE602470940CE7BDFD9A98C (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, const RuntimeMethod* method)
{
	return ((  VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* (*) (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_mA4636BCEDF9716846FE602470940CE7BDFD9A98C_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m43B30473D688DEBD0E776FD8303069AA370B69F4_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m43B30473D688DEBD0E776FD8303069AA370B69F4_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m88F93E68A8FE645681F98A43BF42F80258A24243_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13;
		L_13 = Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_15 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFF9E030D84D1689AF38E497BC45400D507DD88ED_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_mAB973BC26AE613D4A698AA272F9966BBB1FEA7F9_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7;
		L_7 = Span_1_ToArray_m26BDA405A2FAA3836803417EF508FF3ED17D639E_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mAB973BC26AE613D4A698AA272F9966BBB1FEA7F9_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_13;
		L_13 = Span_1_ToArray_m26BDA405A2FAA3836803417EF508FF3ED17D639E_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** L_15 = ___0_array;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_16;
		L_16 = Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m31CCB737A59A1D4FC5C6157134FCB77CC836F692_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m57107B0971C215948970E813F419EC87CC0AB443_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7;
		L_7 = Span_1_ToArray_m48970EF6F3DDB984D842A90662327A9D0A999E0E_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m57107B0971C215948970E813F419EC87CC0AB443_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13;
		L_13 = Span_1_ToArray_m48970EF6F3DDB984D842A90662327A9D0A999E0E_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** L_15 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16;
		L_16 = Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m0B924A17B449C7E4E29F61DF8B04855FB7095D75_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m8738969A09F3E294FE020AC78D512A8762CF54A6_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7;
		L_7 = Span_1_ToArray_m3A166501793DDF0D07C7FE8393C01BA3B46FCDA0_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m8738969A09F3E294FE020AC78D512A8762CF54A6_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_13;
		L_13 = Span_1_ToArray_m3A166501793DDF0D07C7FE8393C01BA3B46FCDA0_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3** L_15 = ___0_array;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_16;
		L_16 = Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m2ABAA1A6FBB0C157ACBACD2C307312158FBF1552_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m470F2D1C376F672AD7385840036E5E3FDA7BCD29_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_7;
		L_7 = Span_1_ToArray_m90C475E472A2E9FCA3B8AF1A903B10C61E09F07A_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m470F2D1C376F672AD7385840036E5E3FDA7BCD29_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_13;
		L_13 = Span_1_ToArray_m90C475E472A2E9FCA3B8AF1A903B10C61E09F07A_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911** L_15 = ___0_array;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_16;
		L_16 = Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m0A9463ED8DECA78BC92C4CE70C7E27C1467E3EC8_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m39E68B73B1D51755A2D802AFF9C739DD1E9C18C6_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_7;
		L_7 = Span_1_ToArray_m9709EDC35CE0914CDAF9FF5AC0F65B846529A155_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m39E68B73B1D51755A2D802AFF9C739DD1E9C18C6_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_13;
		L_13 = Span_1_ToArray_m9709EDC35CE0914CDAF9FF5AC0F65B846529A155_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061** L_15 = ___0_array;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_16;
		L_16 = Array_Empty_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m8D1741D78F4BE953D5A3A4F3E6698C234444B61F_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m816E505FDB63DC4106894B6FF3F3FC79DECD13AD_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_mFA501D433BD32705D8D9FF2EFB26C6142C15335E_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_7;
		L_7 = Span_1_ToArray_m0C441D8B8E14F9F8A026B6CDA0046EBE6EE88CE6_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mFA501D433BD32705D8D9FF2EFB26C6142C15335E_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_13;
		L_13 = Span_1_ToArray_m0C441D8B8E14F9F8A026B6CDA0046EBE6EE88CE6_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** L_15 = ___0_array;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_16;
		L_16 = Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_mF79C28767FF85EB6F1A0B483743A6A135E34B80D_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_mC84CC26C2EBBBB9CD3F60B1A1D965914C9C7E666_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* L_7;
		L_7 = Span_1_ToArray_m834512E2FA615CD393F01F45E446884F0B7DBDBA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC84CC26C2EBBBB9CD3F60B1A1D965914C9C7E666_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* L_13;
		L_13 = Span_1_ToArray_m834512E2FA615CD393F01F45E446884F0B7DBDBA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6** L_15 = ___0_array;
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* L_16;
		L_16 = Array_Empty_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m9D69F1F3E69D9BE4FE932CAA5488FF2C0C77BD84_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_m6047FA15DDBE7BEA4C94A681720F1AC5B45CD6B1_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m41258F088B04437BDFB3AF3EC45AF81CEFD2DAD6_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* L_7;
		L_7 = Span_1_ToArray_mC98E43A40C394AEFE12BC4F3E9B8014AAA7AC4E3_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m41258F088B04437BDFB3AF3EC45AF81CEFD2DAD6_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* L_13;
		L_13 = Span_1_ToArray_mC98E43A40C394AEFE12BC4F3E9B8014AAA7AC4E3_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895** L_15 = ___0_array;
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* L_16;
		L_16 = Array_Empty_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_mF3D8CDB2BE5DFBD5770C0DC1B09663648C59D40B_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF5E6436113494D21D0193A9A5DBBE976FC036FB6_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m82A705EF0937AA2925A9F1B58A31D609771A7E1F_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_7;
		L_7 = Span_1_ToArray_m84E3B0120E90C9CA86F6DFC76CFE438EA424AB93_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m82A705EF0937AA2925A9F1B58A31D609771A7E1F_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_13;
		L_13 = Span_1_ToArray_m84E3B0120E90C9CA86F6DFC76CFE438EA424AB93_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE** L_15 = ___0_array;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_16;
		L_16 = Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mE759D578B92068634822EE7C23018986A67419D0_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_mA6B0A6ED7314F9301B3FC7317CFED015A7DA262B_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_7;
		L_7 = Span_1_ToArray_mA7A7BA36A340E11528D00699E69C6462A0699FEC_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mA6B0A6ED7314F9301B3FC7317CFED015A7DA262B_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_13;
		L_13 = Span_1_ToArray_mA7A7BA36A340E11528D00699E69C6462A0699FEC_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_15 = ___0_array;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_16;
		L_16 = Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m14E4E4AD7B9606B5704B98FAE6AC8E070F736B38_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m7E2B58017948399EC02850E4C7DE9ACB0D8B4786_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_7;
		L_7 = Span_1_ToArray_mDCDD2EDC0B547EC18289F95DCF0371D237B516D5_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m7E2B58017948399EC02850E4C7DE9ACB0D8B4786_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_13;
		L_13 = Span_1_ToArray_mDCDD2EDC0B547EC18289F95DCF0371D237B516D5_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_15 = ___0_array;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_16;
		L_16 = Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m64D99FF1E47B7BD145EF19B4F487C17DB4AEC5A1_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m256018AD9B1E710A73E35FAE6D5CC39DD1764EB9_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_7;
		L_7 = Span_1_ToArray_m7991F6310890A03D4302F449C3953625E07076C3_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m256018AD9B1E710A73E35FAE6D5CC39DD1764EB9_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_13;
		L_13 = Span_1_ToArray_m7991F6310890A03D4302F449C3953625E07076C3_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7** L_15 = ___0_array;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_16;
		L_16 = Array_Empty_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF09AB489F062620E85BE4536FC98B6AEBF00B791_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m7609C76655F5FA08932A4B0F0988BCE839C386AA_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m38EECB636829D807B96005A9AA8E41063C877DA1_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_7;
		L_7 = Span_1_ToArray_m9D9F21EB763577CCF4D66D30E5431BE1323FC6AE_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m38EECB636829D807B96005A9AA8E41063C877DA1_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_13;
		L_13 = Span_1_ToArray_m9D9F21EB763577CCF4D66D30E5431BE1323FC6AE_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** L_15 = ___0_array;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_16;
		L_16 = Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m32B917C3D1E317F19814BF7B49F558D1AA1BBD53_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m2FFB899F837C3CC69382939AF9BBED95EFA4C867_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_7;
		L_7 = Span_1_ToArray_m3095255B2FD7A488643362E8AF1B5EE87E9C1665_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m2FFB899F837C3CC69382939AF9BBED95EFA4C867_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_13;
		L_13 = Span_1_ToArray_m3095255B2FD7A488643362E8AF1B5EE87E9C1665_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A** L_15 = ___0_array;
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_16;
		L_16 = Array_Empty_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m08DF41F14756E94315B0762AD8D2B62A0F4E4C8A_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7;
		L_7 = Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13;
		L_13 = Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_15 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16;
		L_16 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m3E39690CA7AD66014C4E96AEEE4006764E4AFDB0_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m202786F88C12306CE6CE45D750A691E2CBEAC431_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* L_7;
		L_7 = Span_1_ToArray_mBB98F433690BE6D052DFD14123DDF849A40A109D_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m202786F88C12306CE6CE45D750A691E2CBEAC431_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* L_13;
		L_13 = Span_1_ToArray_mBB98F433690BE6D052DFD14123DDF849A40A109D_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4** L_15 = ___0_array;
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* L_16;
		L_16 = Array_Empty_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m1FE72E952510F146795941C48441AF40900371BC_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mCA5A3C1DB523475FB3FE4FA1945C294A95A56E44_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7;
		L_7 = Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13;
		L_13 = Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** L_15 = ___0_array;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16;
		L_16 = Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8102E36AF7B76B43C50F3270FD8F7925FA03D4AC_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m50C1AB8CF970B0E296CD917975C18DCB815D193B_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7;
		L_7 = Span_1_ToArray_m32DA34FCDE6D7AB9EA941ABF7CE26FEE26AEA49C_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m50C1AB8CF970B0E296CD917975C18DCB815D193B_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13;
		L_13 = Span_1_ToArray_m32DA34FCDE6D7AB9EA941ABF7CE26FEE26AEA49C_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_15 = ___0_array;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16;
		L_16 = Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m27F37AF029BAD85AEB8E0EB4045E013CFCAA2EEC_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t460D4E78469192619B0075C15897A6987393AAF9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_mCCDE317B7EF9509DB97AFE5968CF15240BB7DE03_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = Span_1_ToArray_m2E6BEE60BD48A117C372CF405F27139869922A06_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mCCDE317B7EF9509DB97AFE5968CF15240BB7DE03_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13;
		L_13 = Span_1_ToArray_m2E6BEE60BD48A117C372CF405F27139869922A06_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_15 = ___0_array;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16;
		L_16 = Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72C2B09446B39E85BB200685A84A4CA060D4AB26_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m35263B255C49C34B49026B8D2239D90D20A46BAE_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7;
		L_7 = Span_1_ToArray_mBCD2D9E7C594EAF63CC33D62601F3BCEB8F9BA68_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m35263B255C49C34B49026B8D2239D90D20A46BAE_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13;
		L_13 = Span_1_ToArray_mBCD2D9E7C594EAF63CC33D62601F3BCEB8F9BA68_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_15 = ___0_array;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16;
		L_16 = Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisIl2CppFullySharedGenericStruct_m35850DF980659B66DA8B433E7D0C8DAA91E9D8FF_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_7;
		L_7 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_13;
		L_13 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** L_15 = ___0_array;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_16;
		L_16 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m4D11D1554E697E8CCD27AD6A441B4EEE7B4C0064_gshared (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_mB55F7EBED8FFAAD1F44640FDE1CE6B007D226E39_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* L_7;
		L_7 = Span_1_ToArray_m7122B69A3EE72C8CC9F5BCC68A551D011D70AD38_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mB55F7EBED8FFAAD1F44640FDE1CE6B007D226E39_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* L_13;
		L_13 = Span_1_ToArray_m7122B69A3EE72C8CC9F5BCC68A551D011D70AD38_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7** L_15 = ___0_array;
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* L_16;
		L_16 = Array_Empty_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m965163D4EE93C4237FB34B9F2EDF58313DA5940E_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableListWrapper_Unmarshal_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m8E19B72B1173014248F4A02B45A8D05B1E22E10A_gshared (BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4* __this, List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00ab;
	}

IL_000e:
	{
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_2 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_3 = L_2->___updateFlags;
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_003c:
	{
		goto IL_00ab;
	}

IL_003e:
	{
		List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* L_6 = ___0_list;
		int32_t L_7 = __this->___listSize;
		NoAllocHelpers_ResetListSize_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m79E5E216B9A1059354AE65B1FB457284A1959AE2_inline(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_00ab;
	}

IL_004d:
	{
		List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* L_8 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_9 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_10 = L_9->___data;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_11 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_12 = L_11->___size;
		ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9 L_13;
		memset((&L_13), 0, sizeof(L_13));
		ReadOnlySpan_1__ctor_mE6D9B95B533B42BC07FD29CC736F68BEC4D37AA7_inline((&L_13), L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m46A9092C9EBB43ACC0D3D7DA2361000331344111_inline(L_8, L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		goto IL_00ab;
	}

IL_0071:
	{
		List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* L_14 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_15 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_16 = L_15->___data;
		void* L_17;
		L_17 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_16, NULL);
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_18 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_19 = L_18->___size;
		ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ReadOnlySpan_1__ctor_mE6D9B95B533B42BC07FD29CC736F68BEC4D37AA7_inline((&L_20), L_17, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m46A9092C9EBB43ACC0D3D7DA2361000331344111_inline(L_14, L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_21 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_22 = L_21->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_22, NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableListWrapper_Unmarshal_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_m8F26FE00B6712D71B57E9BF2151FE5C2FBEFE2D5_gshared (BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4* __this, List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00ab;
	}

IL_000e:
	{
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_2 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_3 = L_2->___updateFlags;
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_003c:
	{
		goto IL_00ab;
	}

IL_003e:
	{
		List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* L_6 = ___0_list;
		int32_t L_7 = __this->___listSize;
		NoAllocHelpers_ResetListSize_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_m89180E186D086E01CDB7EFD9B7CCAB013318F41E_inline(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_00ab;
	}

IL_004d:
	{
		List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* L_8 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_9 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_10 = L_9->___data;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_11 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_12 = L_11->___size;
		ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945 L_13;
		memset((&L_13), 0, sizeof(L_13));
		ReadOnlySpan_1__ctor_mD205CCF117CEE3DF2634CB8C139538A35A1E0252_inline((&L_13), L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_mBF3750C2A086530CE4E3BE75A9518B0A3BE25FFB_inline(L_8, L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		goto IL_00ab;
	}

IL_0071:
	{
		List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* L_14 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_15 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_16 = L_15->___data;
		void* L_17;
		L_17 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_16, NULL);
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_18 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_19 = L_18->___size;
		ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ReadOnlySpan_1__ctor_mD205CCF117CEE3DF2634CB8C139538A35A1E0252_inline((&L_20), L_17, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_mBF3750C2A086530CE4E3BE75A9518B0A3BE25FFB_inline(L_14, L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_21 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_22 = L_21->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_22, NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableListWrapper_Unmarshal_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m8FE241486DF0830176087D0C35ACBA4AC0B64A7E_gshared (BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4* __this, List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00ab;
	}

IL_000e:
	{
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_2 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_3 = L_2->___updateFlags;
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_003c:
	{
		goto IL_00ab;
	}

IL_003e:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_6 = ___0_list;
		int32_t L_7 = __this->___listSize;
		NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_inline(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_00ab;
	}

IL_004d:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_8 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_9 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_10 = L_9->___data;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_11 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_12 = L_11->___size;
		ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC L_13;
		memset((&L_13), 0, sizeof(L_13));
		ReadOnlySpan_1__ctor_m282E1BC4A5F7B82AFCA96523874584D8AAA045C1_inline((&L_13), L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_inline(L_8, L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		goto IL_00ab;
	}

IL_0071:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_14 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_15 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_16 = L_15->___data;
		void* L_17;
		L_17 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_16, NULL);
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_18 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_19 = L_18->___size;
		ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC L_20;
		memset((&L_20), 0, sizeof(L_20));
		ReadOnlySpan_1__ctor_m282E1BC4A5F7B82AFCA96523874584D8AAA045C1_inline((&L_20), L_17, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_inline(L_14, L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_21 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_22 = L_21->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_22, NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableListWrapper_Unmarshal_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5BACB704D230D22C1FDBA194D33EDE14075D730D_gshared (BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00ab;
	}

IL_000e:
	{
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_2 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_3 = L_2->___updateFlags;
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_003c:
	{
		goto IL_00ab;
	}

IL_003e:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_6 = ___0_list;
		int32_t L_7 = __this->___listSize;
		NoAllocHelpers_ResetListSize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1DF7EBE6857CEE8606CEDF15CD2780CBBCACB384_inline(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_00ab;
	}

IL_004d:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_8 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_9 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_10 = L_9->___data;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_11 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_12 = L_11->___size;
		ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 L_13;
		memset((&L_13), 0, sizeof(L_13));
		ReadOnlySpan_1__ctor_m1AD06B8E9C062FA16DFB8AFADC42E1D854FF9AEE_inline((&L_13), L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m72BE95C245ACC9D361AA32DDDDFDE55F409FCF3E_inline(L_8, L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		goto IL_00ab;
	}

IL_0071:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_14 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_15 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_16 = L_15->___data;
		void* L_17;
		L_17 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_16, NULL);
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_18 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_19 = L_18->___size;
		ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ReadOnlySpan_1__ctor_m1AD06B8E9C062FA16DFB8AFADC42E1D854FF9AEE_inline((&L_20), L_17, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m72BE95C245ACC9D361AA32DDDDFDE55F409FCF3E_inline(L_14, L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_21 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_22 = L_21->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_22, NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableListWrapper_Unmarshal_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m600DE6F9DD896F6156A26AD3686E48FFA8A431D9_gshared (BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4* __this, List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00ab;
	}

IL_000e:
	{
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_2 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_3 = L_2->___updateFlags;
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_003c:
	{
		goto IL_00ab;
	}

IL_003e:
	{
		List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* L_6 = ___0_list;
		int32_t L_7 = __this->___listSize;
		NoAllocHelpers_ResetListSize_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mA56B630AC9FA5916210D2B7DFE657BEF9FB8DE83_inline(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_00ab;
	}

IL_004d:
	{
		List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* L_8 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_9 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_10 = L_9->___data;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_11 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_12 = L_11->___size;
		ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 L_13;
		memset((&L_13), 0, sizeof(L_13));
		ReadOnlySpan_1__ctor_mBF7291E3430B639E4D2A7F9540DE992737D45AC4_inline((&L_13), L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m25BC7428B977D2ABB72391CA387F0A9E664D7805_inline(L_8, L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		goto IL_00ab;
	}

IL_0071:
	{
		List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* L_14 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_15 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_16 = L_15->___data;
		void* L_17;
		L_17 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_16, NULL);
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_18 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_19 = L_18->___size;
		ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ReadOnlySpan_1__ctor_mBF7291E3430B639E4D2A7F9540DE992737D45AC4_inline((&L_20), L_17, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		NoAllocHelpers_ResetListContents_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m25BC7428B977D2ABB72391CA387F0A9E664D7805_inline(L_14, L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_21 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_22 = L_21->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_22, NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableListWrapper_Unmarshal_TisIl2CppFullySharedGenericStruct_m257E6306DF72620621451F4359EE021A87DCBA7C_gshared (BlittableListWrapper_tE39AB35B42449CFD1FDCBB7DC4F0D1A1EA2312C4* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00ab;
	}

IL_000e:
	{
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_2 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_3 = L_2->___updateFlags;
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_003c:
	{
		goto IL_00ab;
	}

IL_003e:
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_6 = ___0_list;
		int32_t L_7 = __this->___listSize;
		((  void (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_00ab;
	}

IL_004d:
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_8 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_9 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_10 = L_9->___data;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_11 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_12 = L_11->___size;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_13;
		memset((&L_13), 0, sizeof(L_13));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_13), L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		((  void (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_8, L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		goto IL_00ab;
	}

IL_0071:
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_14 = ___0_list;
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_15 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_16 = L_15->___data;
		void* L_17;
		L_17 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_16, NULL);
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_18 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		int32_t L_19 = L_18->___size;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_20), L_17, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		((  void (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_14, L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* L_21 = (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*)(&__this->___arrayWrapper);
		void* L_22 = L_21->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_22, NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* BsonClassMap_RegisterClassMap_TisIl2CppFullySharedGenericAny_m044A79EE69C3C56B250FE13B6AD315A9A911D416_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* V_0 = NULL;
	Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* G_B2_0 = NULL;
	Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* L_0 = ((U3CU3Ec__71_1_t529D4432997B9A7C65EFE3E0753543DB8C92F882_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___U3CU3E9__71_0;
		Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		U3CU3Ec__71_1_t529D4432997B9A7C65EFE3E0753543DB8C92F882* L_2 = ((U3CU3Ec__71_1_t529D4432997B9A7C65EFE3E0753543DB8C92F882_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___U3CU3E9;
		Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* L_3 = (Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 4));
		Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* L_4 = L_3;
		((U3CU3Ec__71_1_t529D4432997B9A7C65EFE3E0753543DB8C92F882_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___U3CU3E9__71_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__71_1_t529D4432997B9A7C65EFE3E0753543DB8C92F882_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___U3CU3E9__71_0), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1_il2cpp_TypeInfo_var);
		BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* L_5;
		L_5 = ((  BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* (*) (Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_0 = L_5;
		goto IL_0028;
	}

IL_0028:
	{
		BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* BsonClassMap_RegisterClassMap_TisIl2CppFullySharedGenericAny_mF5B62E633B4F65E6299C8DCB881EC4F03D4B9FF6_gshared (Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* ___0_classMapInitializer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* V_0 = NULL;
	BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* V_1 = NULL;
	{
		Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C* L_0 = ___0_classMapInitializer;
		BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* L_1 = (BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322*, Action_1_tE9357FE6618B4299CAA37EF9BA091ED0EC98C47C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_1;
		BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1_il2cpp_TypeInfo_var);
		BsonClassMap_RegisterClassMap_mBE100B6BC1D241FFD0676EA297B87B77EDB53EA5((BsonClassMap_tBF5B03C073E35C127B35F82BA80D87B5D3B4FBC1*)L_2, NULL);
		BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* L_3 = V_0;
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		BsonClassMap_1_t0878C67B5FAC2B46F8ED0C389D8EC07ACC5D8322* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonDocumentBackedClass_GetValue_TisIl2CppFullySharedGenericAny_m04E74279074A347F73D75A476CF7E6E37A082195_gshared (BsonDocumentBackedClass_t0FB51B1B1F388525583ACC69C44151E74D299D92* __this, String_t* ___0_memberName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBsonDocumentSerializer_t37B6F4CBBE17169B2A018A34208E6EABAF67FFEF_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3312552AA6D23875F671FC5D37F1C1F97A87D02A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_t3312552AA6D23875F671FC5D37F1C1F97A87D02A);
	const Il2CppFullySharedGenericAny L_23 = L_21;
	BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* V_0 = NULL;
	BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T_t3312552AA6D23875F671FC5D37F1C1F97A87D02A);
	memset(V_6, 0, SizeOf_T_t3312552AA6D23875F671FC5D37F1C1F97A87D02A);
	{
		RuntimeObject* L_0 = __this->____serializer;
		String_t* L_1 = ___0_memberName;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2** >::Invoke(0, IBsonDocumentSerializer_t37B6F4CBBE17169B2A018A34208E6EABAF67FFEF_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___0_memberName;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2679E28D4F890B7420951FF6578A582E75476FF)), (RuntimeObject*)L_4, NULL);
		V_3 = L_5;
		String_t* L_6 = V_3;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FF9B0D936BD812A451D4AE47777D2F45599EE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002f:
	{
		BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* L_8 = __this->____backingDocument;
		BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = BsonSerializationInfo_get_ElementName_m99E6466FEAF886D8F766F39F1D1A7C63BDC10611(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, String_t*, BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5** >::Invoke(109, L_8, L_10, (&V_1));
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = BsonSerializationInfo_get_ElementName_m99E6466FEAF886D8F766F39F1D1A7C63BDC10611(L_13, NULL);
		String_t* L_15;
		L_15 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5DFC1B8ED02DCCC4D3756DEF31E7EE97090A0AE)), (RuntimeObject*)L_14, NULL);
		V_5 = L_15;
		String_t* L_16 = V_5;
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_17 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0066:
	{
		BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* L_18 = V_0;
		BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5* L_19 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = BsonSerializationInfo_DeserializeValue_m0E701C53200EA30BF432B69708875CE0DBD4ADF8(L_18, L_19, NULL);
		void* L_22 = UnBox_Any(L_20, il2cpp_rgctx_data(method->rgctx_data, 0), L_21);
		il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_22)), SizeOf_T_t3312552AA6D23875F671FC5D37F1C1F97A87D02A);
		goto IL_0076;
	}

IL_0076:
	{
		il2cpp_codegen_memcpy(L_23, V_6, SizeOf_T_t3312552AA6D23875F671FC5D37F1C1F97A87D02A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_23, SizeOf_T_t3312552AA6D23875F671FC5D37F1C1F97A87D02A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonDocumentBackedClass_GetValue_TisIl2CppFullySharedGenericAny_mE5C8C0416F3F7822880300D51A2B9AD21569B9A8_gshared (BsonDocumentBackedClass_t0FB51B1B1F388525583ACC69C44151E74D299D92* __this, String_t* ___0_memberName, Il2CppFullySharedGenericAny ___1_defaultValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBsonDocumentSerializer_t37B6F4CBBE17169B2A018A34208E6EABAF67FFEF_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74);
	const Il2CppFullySharedGenericAny L_17 = L_13;
	const Il2CppFullySharedGenericAny L_19 = L_13;
	BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* V_0 = NULL;
	BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74);
	memset(V_5, 0, SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74);
	{
		RuntimeObject* L_0 = __this->____serializer;
		String_t* L_1 = ___0_memberName;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2** >::Invoke(0, IBsonDocumentSerializer_t37B6F4CBBE17169B2A018A34208E6EABAF67FFEF_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___0_memberName;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2679E28D4F890B7420951FF6578A582E75476FF)), (RuntimeObject*)L_4, NULL);
		V_3 = L_5;
		String_t* L_6 = V_3;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FF9B0D936BD812A451D4AE47777D2F45599EE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002f:
	{
		BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* L_8 = __this->____backingDocument;
		BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = BsonSerializationInfo_get_ElementName_m99E6466FEAF886D8F766F39F1D1A7C63BDC10611(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, String_t*, BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5** >::Invoke(109, L_8, L_10, (&V_1));
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_defaultValue : &___1_defaultValue), SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74);
		il2cpp_codegen_memcpy(V_5, L_13, SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74);
		goto IL_0061;
	}

IL_0051:
	{
		BsonSerializationInfo_t2CD28965D89212F17FB7F40C82A36A65C34C1CB2* L_14 = V_0;
		BsonValue_t919AEE7422C1180C2107D15023100323F32D94C5* L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = BsonSerializationInfo_DeserializeValue_m0E701C53200EA30BF432B69708875CE0DBD4ADF8(L_14, L_15, NULL);
		void* L_18 = UnBox_Any(L_16, il2cpp_rgctx_data(method->rgctx_data, 0), L_17);
		il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_18)), SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74);
		goto IL_0061;
	}

IL_0061:
	{
		il2cpp_codegen_memcpy(L_19, V_5, SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74);
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_T_t667C8B7CBC9ECACB645EFEC470245E3D8BBABA74);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonDocumentWrapper_t69CE513CDBC2CA883128A294F26AF43EB1BAC831* BsonDocumentWrapper_Create_TisIl2CppFullySharedGenericAny_m9DBD701370EC3E8967700417D4056E7FA58D5575_gshared (Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TNominalType_tEDD35400691A631F7B7A2DC9C540270D5AE2B1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TNominalType_tEDD35400691A631F7B7A2DC9C540270D5AE2B1C4);
	BsonDocumentWrapper_t69CE513CDBC2CA883128A294F26AF43EB1BAC831* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_TNominalType_tEDD35400691A631F7B7A2DC9C540270D5AE2B1C4);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_2);
		BsonDocumentWrapper_t69CE513CDBC2CA883128A294F26AF43EB1BAC831* L_4;
		L_4 = BsonDocumentWrapper_Create_m79D51C827E3C594A45274199FB666EDD876B0FD9(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		BsonDocumentWrapper_t69CE513CDBC2CA883128A294F26AF43EB1BAC831* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonDocumentWrapper_CreateMultiple_TisIl2CppFullySharedGenericAny_mDC5E5130D6CB6A5CBBBCCCAA9A30D048D7398427_gshared (RuntimeObject* ___0_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass10_0_1_t90976610153DF272CE4A6A959554B7E03559E2B7* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_1_t90976610153DF272CE4A6A959554B7E03559E2B7* L_0 = (U3CU3Ec__DisplayClass10_0_1_t90976610153DF272CE4A6A959554B7E03559E2B7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass10_0_1_t90976610153DF272CE4A6A959554B7E03559E2B7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_values;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass10_0_1_t90976610153DF272CE4A6A959554B7E03559E2B7* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = BsonSerializer_LookupSerializer_m941D52074724E8AB827C6F477720D919E25C960D(L_6, NULL);
		NullCheck(L_4);
		L_4->___serializer = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___serializer), (void*)L_7);
		RuntimeObject* L_8 = ___0_values;
		U3CU3Ec__DisplayClass10_0_1_t90976610153DF272CE4A6A959554B7E03559E2B7* L_9 = V_0;
		Func_2_tCF268DE2C083F67B46AACFDC70B78744B8543024* L_10 = (Func_2_tCF268DE2C083F67B46AACFDC70B78744B8543024*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		((  void (*) (Func_2_tCF268DE2C083F67B46AACFDC70B78744B8543024*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 6));
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCF268DE2C083F67B46AACFDC70B78744B8543024*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_8, L_10, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_2 = L_11;
		goto IL_0045;
	}

IL_0045:
	{
		RuntimeObject* L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonExtensionMethods_ToBson_TisRuntimeObject_m81577E2C811A5F224B0E539A5366CFB76D8EF0AA_gshared (RuntimeObject* ___0_obj, RuntimeObject* ___1_serializer, BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7* ___2_writerSettings, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___3_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___4_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577);
		il2cpp_rgctx_method_init(method);
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		BsonSerializationArgs_SetOrValidateNominalType_m809315C6678F2CE1A38CE981DF5B24390F36DF12((&___4_args), L_1, _stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577, NULL);
		RuntimeObject* L_2 = ___0_obj;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7* L_5 = ___2_writerSettings;
		RuntimeObject* L_6 = ___1_serializer;
		Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* L_7 = ___3_configurator;
		BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C L_8 = ___4_args;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BsonExtensionMethods_ToBson_m86C686C12A1FACFFE52B9684BB44769F7D17D44E(L_2, L_4, L_5, (RuntimeObject*)L_6, L_7, L_8, NULL);
		V_0 = L_9;
		goto IL_0035;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonExtensionMethods_ToBson_TisIl2CppFullySharedGenericAny_mD3EC914F5EF696F1E5770EE0E1E1E9880459065A_gshared (Il2CppFullySharedGenericAny ___0_obj, RuntimeObject* ___1_serializer, BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7* ___2_writerSettings, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___3_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___4_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_tABDEEC71AD0D388B7D6C50FB40BC4B335F2F117A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TNominalType_tABDEEC71AD0D388B7D6C50FB40BC4B335F2F117A);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		BsonSerializationArgs_SetOrValidateNominalType_m809315C6678F2CE1A38CE981DF5B24390F36DF12((&___4_args), L_1, _stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_obj : &___0_obj), SizeOf_TNominalType_tABDEEC71AD0D388B7D6C50FB40BC4B335F2F117A);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_2);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		BsonBinaryWriterSettings_t7137A7566B5B54CC04F186EBE6E65D65915F68B7* L_6 = ___2_writerSettings;
		RuntimeObject* L_7 = ___1_serializer;
		Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* L_8 = ___3_configurator;
		BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C L_9 = ___4_args;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = BsonExtensionMethods_ToBson_m86C686C12A1FACFFE52B9684BB44769F7D17D44E(L_3, L_5, L_6, (RuntimeObject*)L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_0035;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* BsonExtensionMethods_ToBsonDocument_TisIl2CppFullySharedGenericAny_m889F020293C7B78BE6C59A8B757C9F209B5155E8_gshared (Il2CppFullySharedGenericAny ___0_obj, RuntimeObject* ___1_serializer, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___2_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___3_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_t0F583F15E7451E621DB341A4BD114183A2433D44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TNominalType_t0F583F15E7451E621DB341A4BD114183A2433D44);
	BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		BsonSerializationArgs_SetOrValidateNominalType_m809315C6678F2CE1A38CE981DF5B24390F36DF12((&___3_args), L_1, _stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_obj : &___0_obj), SizeOf_TNominalType_t0F583F15E7451E621DB341A4BD114183A2433D44);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_2);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeObject* L_6 = ___1_serializer;
		Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* L_7 = ___2_configurator;
		BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C L_8 = ___3_args;
		BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* L_9;
		L_9 = BsonExtensionMethods_ToBsonDocument_mF8BAAC202B060B8A6BA669C7B48EA62F40CFE23D(L_3, L_5, (RuntimeObject*)L_6, L_7, L_8, NULL);
		V_0 = L_9;
		goto IL_0033;
	}

IL_0033:
	{
		BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonExtensionMethods_ToJson_TisRuntimeObject_mE36B8C1467844B875F5BFD6FAE129156EBB9B49F_gshared (RuntimeObject* ___0_obj, JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C* ___1_writerSettings, RuntimeObject* ___2_serializer, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___3_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___4_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		BsonSerializationArgs_SetOrValidateNominalType_m809315C6678F2CE1A38CE981DF5B24390F36DF12((&___4_args), L_1, _stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577, NULL);
		RuntimeObject* L_2 = ___0_obj;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C* L_5 = ___1_writerSettings;
		RuntimeObject* L_6 = ___2_serializer;
		Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* L_7 = ___3_configurator;
		BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C L_8 = ___4_args;
		String_t* L_9;
		L_9 = BsonExtensionMethods_ToJson_m9236287819376C53196DBAE5BD4339214AE5C613(L_2, L_4, L_5, (RuntimeObject*)L_6, L_7, L_8, NULL);
		V_0 = L_9;
		goto IL_0035;
	}

IL_0035:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonExtensionMethods_ToJson_TisIl2CppFullySharedGenericAny_m1227DB90B56F66D6A67CDC52C0780516E9EB9FC2_gshared (Il2CppFullySharedGenericAny ___0_obj, JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C* ___1_writerSettings, RuntimeObject* ___2_serializer, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___3_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___4_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_tC1EA0D4D25F9D4ACA626D3CCD300FD9E7BBBEFD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TNominalType_tC1EA0D4D25F9D4ACA626D3CCD300FD9E7BBBEFD9);
	String_t* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		BsonSerializationArgs_SetOrValidateNominalType_m809315C6678F2CE1A38CE981DF5B24390F36DF12((&___4_args), L_1, _stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_obj : &___0_obj), SizeOf_TNominalType_tC1EA0D4D25F9D4ACA626D3CCD300FD9E7BBBEFD9);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_2);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		JsonWriterSettings_t8C7E71067A449DDFD9DD4104406B5C8C6021421C* L_6 = ___1_writerSettings;
		RuntimeObject* L_7 = ___2_serializer;
		Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* L_8 = ___3_configurator;
		BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C L_9 = ___4_args;
		String_t* L_10;
		L_10 = BsonExtensionMethods_ToJson_m9236287819376C53196DBAE5BD4339214AE5C613(L_3, L_5, L_6, (RuntimeObject*)L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_0035;
	}

IL_0035:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_Deserialize_TisIl2CppFullySharedGenericAny_m748C759F111B147DCE620BC72991590AFA2FF664_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* ___1_configurator, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_t042368D15338918CB0116A8F88E64AA5B950190C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TNominalType_t042368D15338918CB0116A8F88E64AA5B950190C);
	const Il2CppFullySharedGenericAny L_11 = L_10;
	ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35* V_0 = NULL;
	ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TNominalType_t042368D15338918CB0116A8F88E64AA5B950190C);
	memset(V_2, 0, SizeOf_TNominalType_t042368D15338918CB0116A8F88E64AA5B950190C);
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35* L_1 = (ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35*)il2cpp_codegen_object_new(ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35_il2cpp_TypeInfo_var);
		ByteArrayBuffer__ctor_m7406C763B9DF94D80B96593AF540F4CBAB18723F(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0031;
					}
				}
				{
					ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0031:
				{
					return;
				}
			}
		});
		try
		{
			{
				ByteArrayBuffer_tA3CD70AB97EF2A97CB552C4B9C832500D36B2D35* L_4 = V_0;
				ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1* L_5 = (ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1*)il2cpp_codegen_object_new(ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1_il2cpp_TypeInfo_var);
				ByteBufferStream__ctor_m6AF743BDA828D3F1B9C8B73390029E2BCBB72EBC(L_5, (RuntimeObject*)L_4, (bool)0, NULL);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_001c_1:
					{
						{
							ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1* L_6 = V_1;
							if (!L_6)
							{
								goto IL_0026_1;
							}
						}
						{
							ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1* L_7 = V_1;
							NullCheck((RuntimeObject*)L_7);
							InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
						}

IL_0026_1:
						{
							return;
						}
					}
				});
				try
				{
					ByteBufferStream_t2F8005FAA579E712ABE6D2B2CB11308BB8A42AA1* L_8 = V_1;
					Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* L_9 = ___1_configurator;
					il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
					InvokerActionInvoker3< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_8, L_9, (Il2CppFullySharedGenericAny*)L_10);
					il2cpp_codegen_memcpy(V_2, L_10, SizeOf_TNominalType_t042368D15338918CB0116A8F88E64AA5B950190C);
					goto IL_0032;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_11, V_2, SizeOf_TNominalType_t042368D15338918CB0116A8F88E64AA5B950190C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_TNominalType_t042368D15338918CB0116A8F88E64AA5B950190C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_Deserialize_TisIl2CppFullySharedGenericAny_mDD3F90F950B5FAF3EFB1DE1C466E2EF8B5AF0945_gshared (BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* ___0_document, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* ___1_configurator, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_t3A9B7A18A84EC2175F94A8F257FBFB366316AF52 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TNominalType_t3A9B7A18A84EC2175F94A8F257FBFB366316AF52);
	const Il2CppFullySharedGenericAny L_7 = L_6;
	BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TNominalType_t3A9B7A18A84EC2175F94A8F257FBFB366316AF52);
	memset(V_1, 0, SizeOf_TNominalType_t3A9B7A18A84EC2175F94A8F257FBFB366316AF52);
	{
		BsonDocument_t6DE4446E9A71EA570845CAFC17BBB48887C15839* L_0 = ___0_document;
		BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3* L_1 = (BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3*)il2cpp_codegen_object_new(BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3_il2cpp_TypeInfo_var);
		BsonDocumentReader__ctor_mBB4CF43F62FD7189B273FF2613AECE6EACFC1871(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				{
					BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001d;
					}
				}
				{
					BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_001d:
				{
					return;
				}
			}
		});
		try
		{
			BsonDocumentReader_t00B4C6A9B29B9C1ECE902DB69BFAC7087BD104E3* L_4 = V_0;
			Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* L_5 = ___1_configurator;
			il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
			InvokerActionInvoker3< RuntimeObject*, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (RuntimeObject*)L_4, L_5, (Il2CppFullySharedGenericAny*)L_6);
			il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TNominalType_t3A9B7A18A84EC2175F94A8F257FBFB366316AF52);
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TNominalType_t3A9B7A18A84EC2175F94A8F257FBFB366316AF52);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TNominalType_t3A9B7A18A84EC2175F94A8F257FBFB366316AF52);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_Deserialize_TisIl2CppFullySharedGenericAny_mFB745D362662F504A961C69E1A0053274FEFB99D_gshared (RuntimeObject* ___0_bsonReader, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* ___1_configurator, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_tB40F2D8A8B684310FA223EBB4F2EE0FF8DD0ADFC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TNominalType_tB40F2D8A8B684310FA223EBB4F2EE0FF8DD0ADFC);
	const Il2CppFullySharedGenericAny L_7 = L_6;
	RuntimeObject* V_0 = NULL;
	BsonDeserializationContext_t5F7E1FC7931267D13A2D167FE150067FF2792206* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TNominalType_tB40F2D8A8B684310FA223EBB4F2EE0FF8DD0ADFC);
	memset(V_2, 0, SizeOf_TNominalType_tB40F2D8A8B684310FA223EBB4F2EE0FF8DD0ADFC);
	{
		il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_bsonReader;
		Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* L_2 = ___1_configurator;
		BsonDeserializationContext_t5F7E1FC7931267D13A2D167FE150067FF2792206* L_3;
		L_3 = BsonDeserializationContext_CreateRoot_m4B9D37EA3EF32D116B3DAEE75C379CEE77A29E8F(L_1, L_2, NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = V_0;
		BsonDeserializationContext_t5F7E1FC7931267D13A2D167FE150067FF2792206* L_5 = V_1;
		InvokerActionInvoker3< RuntimeObject*, BsonDeserializationContext_t5F7E1FC7931267D13A2D167FE150067FF2792206*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4, L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_2, L_6, SizeOf_TNominalType_tB40F2D8A8B684310FA223EBB4F2EE0FF8DD0ADFC);
		goto IL_0019;
	}

IL_0019:
	{
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_TNominalType_tB40F2D8A8B684310FA223EBB4F2EE0FF8DD0ADFC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TNominalType_tB40F2D8A8B684310FA223EBB4F2EE0FF8DD0ADFC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_Deserialize_TisIl2CppFullySharedGenericAny_m83A3AB5A99BE4DFB62F54E475DC826D2592B8CF0_gshared (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* ___1_configurator, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_t6D5B5AD021A5AD663997439C71CF6E3905B6C663 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TNominalType_t6D5B5AD021A5AD663997439C71CF6E3905B6C663);
	const Il2CppFullySharedGenericAny L_7 = L_6;
	BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TNominalType_t6D5B5AD021A5AD663997439C71CF6E3905B6C663);
	memset(V_1, 0, SizeOf_TNominalType_t6D5B5AD021A5AD663997439C71CF6E3905B6C663);
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782* L_1 = (BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782*)il2cpp_codegen_object_new(BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782_il2cpp_TypeInfo_var);
		BsonBinaryReader__ctor_mEA1A24B3EEA2F19673F3D659B6DE9002A323FD1A(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				{
					BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001d;
					}
				}
				{
					BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_001d:
				{
					return;
				}
			}
		});
		try
		{
			BsonBinaryReader_t1D7FC0E3CB1DFE3391F27ABC9643417BF1A3E782* L_4 = V_0;
			Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* L_5 = ___1_configurator;
			il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
			InvokerActionInvoker3< RuntimeObject*, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (RuntimeObject*)L_4, L_5, (Il2CppFullySharedGenericAny*)L_6);
			il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TNominalType_t6D5B5AD021A5AD663997439C71CF6E3905B6C663);
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TNominalType_t6D5B5AD021A5AD663997439C71CF6E3905B6C663);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TNominalType_t6D5B5AD021A5AD663997439C71CF6E3905B6C663);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_Deserialize_TisIl2CppFullySharedGenericAny_mE98FFEF3EC0E124FCE58E0D51D9315733F31B385_gshared (String_t* ___0_json, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* ___1_configurator, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_tC814A7E8DAFB4E50348E73D7C8DCB240376ECC73 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TNominalType_tC814A7E8DAFB4E50348E73D7C8DCB240376ECC73);
	const Il2CppFullySharedGenericAny L_7 = L_6;
	JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TNominalType_tC814A7E8DAFB4E50348E73D7C8DCB240376ECC73);
	memset(V_1, 0, SizeOf_TNominalType_tC814A7E8DAFB4E50348E73D7C8DCB240376ECC73);
	{
		String_t* L_0 = ___0_json;
		JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* L_1 = (JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB*)il2cpp_codegen_object_new(JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB_il2cpp_TypeInfo_var);
		JsonReader__ctor_m961DA69A5B96488B5BFD8B3F5F7B75489E24F72F(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				{
					JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001d;
					}
				}
				{
					JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_001d:
				{
					return;
				}
			}
		});
		try
		{
			JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* L_4 = V_0;
			Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* L_5 = ___1_configurator;
			il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
			InvokerActionInvoker3< RuntimeObject*, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (RuntimeObject*)L_4, L_5, (Il2CppFullySharedGenericAny*)L_6);
			il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TNominalType_tC814A7E8DAFB4E50348E73D7C8DCB240376ECC73);
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TNominalType_tC814A7E8DAFB4E50348E73D7C8DCB240376ECC73);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TNominalType_tC814A7E8DAFB4E50348E73D7C8DCB240376ECC73);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_Deserialize_TisIl2CppFullySharedGenericAny_m52B7469ED8C326A6C2ADE2F403A2321F0E42FCD6_gshared (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_textReader, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* ___1_configurator, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_t4A578B5ABE2E09A1D0BF7D83E95C1053A0A5373D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TNominalType_t4A578B5ABE2E09A1D0BF7D83E95C1053A0A5373D);
	const Il2CppFullySharedGenericAny L_7 = L_6;
	JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TNominalType_t4A578B5ABE2E09A1D0BF7D83E95C1053A0A5373D);
	memset(V_1, 0, SizeOf_TNominalType_t4A578B5ABE2E09A1D0BF7D83E95C1053A0A5373D);
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___0_textReader;
		JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* L_1 = (JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB*)il2cpp_codegen_object_new(JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB_il2cpp_TypeInfo_var);
		JsonReader__ctor_mF5EA3FB5171EC445A65728B8B18B47455E2093D6(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				{
					JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001d;
					}
				}
				{
					JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_001d:
				{
					return;
				}
			}
		});
		try
		{
			JsonReader_t89402A3EC2274700AD1670342F4563572BD0AAFB* L_4 = V_0;
			Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69* L_5 = ___1_configurator;
			il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
			InvokerActionInvoker3< RuntimeObject*, Action_1_t95C8995463814FD0CB2234EC0E89FFF7F9F8DD69*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (RuntimeObject*)L_4, L_5, (Il2CppFullySharedGenericAny*)L_6);
			il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TNominalType_t4A578B5ABE2E09A1D0BF7D83E95C1053A0A5373D);
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TNominalType_t4A578B5ABE2E09A1D0BF7D83E95C1053A0A5373D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TNominalType_t4A578B5ABE2E09A1D0BF7D83E95C1053A0A5373D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonSerializer_LookupSerializer_TisRuntimeObject_m1178F11D0F44A4E0668FB1839734E8CE18D60F6B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = BsonSerializer_LookupSerializer_m941D52074724E8AB827C6F477720D919E25C960D(L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonSerializer_LookupSerializer_TisIl2CppFullySharedGenericAny_m112BA88FCBB4B517951B9CA06881A46FA665312C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = BsonSerializer_LookupSerializer_m941D52074724E8AB827C6F477720D919E25C960D(L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_RegisterSerializer_TisIl2CppFullySharedGenericAny_m9771AB871D2B0037FB8C4F07EDF4BE19537FE2CF_gshared (RuntimeObject* ___0_serializer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2 = ___0_serializer;
		il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		BsonSerializer_RegisterSerializer_m29B966F7F9B986D18EE82FD8BB559BDD6B6B0E01(L_1, (RuntimeObject*)L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonSerializer_Serialize_TisIl2CppFullySharedGenericAny_mBAA41BD48C5172C26A3D80C9FC089337718D7C76_gshared (RuntimeObject* ___0_bsonWriter, Il2CppFullySharedGenericAny ___1_value, Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* ___2_configurator, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C ___3_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TNominalType_t0E78950774137C62DB795F2D8F66D825ADD4CA4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TNominalType_t0E78950774137C62DB795F2D8F66D825ADD4CA4F);
	RuntimeObject* V_0 = NULL;
	BsonSerializationContext_t219C4EEF44FD71B710B9AB9BDEA5EB08723CBC23* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		BsonSerializationArgs_SetOrValidateNominalType_m809315C6678F2CE1A38CE981DF5B24390F36DF12((&___3_args), L_1, _stringLiteralCB29BD8EF3A1E7846123E1CB15B64B86009C3577, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonSerializer_t7880560F8BD3EDAB615132CD1C89C0DE33C1F250_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		RuntimeObject* L_3 = ___0_bsonWriter;
		Action_1_t569D5482F8B853CEB98850DC6C7227C52D783C26* L_4 = ___2_configurator;
		BsonSerializationContext_t219C4EEF44FD71B710B9AB9BDEA5EB08723CBC23* L_5;
		L_5 = BsonSerializationContext_CreateRoot_m96C74C9BB550D9E7015491A9A70815F86C76328E(L_3, L_4, NULL);
		V_1 = L_5;
		RuntimeObject* L_6 = V_0;
		BsonSerializationContext_t219C4EEF44FD71B710B9AB9BDEA5EB08723CBC23* L_7 = V_1;
		BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C L_8 = ___3_args;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_value : &___1_value), SizeOf_TNominalType_t0E78950774137C62DB795F2D8F66D825ADD4CA4F);
		NullCheck(L_6);
		InterfaceActionInvoker3Invoker< BsonSerializationContext_t219C4EEF44FD71B710B9AB9BDEA5EB08723CBC23*, BsonSerializationArgs_tBC7E5B59FEC13C8CB5F9A83311CD9602474A8C5C, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 2), L_6, L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonSerializerRegistry_GetSerializer_TisRuntimeObject_m3DB02E7F49FE1ECC4D4AB5AEE7682A118978C1DF_gshared (BsonSerializerRegistry_tC373774AA5C8642B419E0C83DD0B63E5593B8F92* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = BsonSerializerRegistry_GetSerializer_m6DB61337CB89BF59B66E83656BD25785287D791A(__this, L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonSerializerRegistry_GetSerializer_TisIl2CppFullySharedGenericAny_m16CC3752F06B24F40B8F9964C1D30A723C4C969A_gshared (BsonSerializerRegistry_tC373774AA5C8642B419E0C83DD0B63E5593B8F92* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = BsonSerializerRegistry_GetSerializer_m6DB61337CB89BF59B66E83656BD25785287D791A(__this, L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62E7059E0A70F6E4678A17960D10526ECB43125E_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_8), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		int32_t* L_9 = ___1_dataSize;
		int32_t* L_10 = ___1_dataSize;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___0_length;
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8686F640C741E1DD106A1143CE32DDDFEF8BE3D1_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_8), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		int32_t* L_9 = ___1_dataSize;
		int32_t* L_10 = ___1_dataSize;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___0_length;
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisIl2CppFullySharedGenericStruct_m4185EDFE641B55BCD995908A4D2E69571C464694_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_8), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		int32_t* L_9 = ___1_dataSize;
		int32_t* L_10 = ___1_dataSize;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___0_length;
		int32_t L_13;
		L_13 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		L_5 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5_mBF1724579F1B56AE7C6BDF919C304D2369837AA9_gshared (HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5* ___0_destination, HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(228, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_destination, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA_mCB14434333DCB75A5FD671D9A992747A378043D9_gshared (ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* ___0_destination, ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A_m47E56668B77DFD297A10C77037500A873C750328_gshared (AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___0_destination, AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215_gshared (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(228, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisActorId_t3F5873BACDBE4C8C8DAA5D237C22F3A2623F6488_mF8F7427CADFA8C9B8CE35D12F7A8B38DA6F5B2F8_gshared (ActorId_t3F5873BACDBE4C8C8DAA5D237C22F3A2623F6488* ___0_destination, ActorId_t3F5873BACDBE4C8C8DAA5D237C22F3A2623F6488* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ActorId_t3F5873BACDBE4C8C8DAA5D237C22F3A2623F6488* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ActorId_t3F5873BACDBE4C8C8DAA5D237C22F3A2623F6488* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ActorId_t3F5873BACDBE4C8C8DAA5D237C22F3A2623F6488>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAddress_t051E9D01E3A3661138DAA9A36D969D0EC12A2CF1_mADF77A0ED4D4728141CE23093934B80F69ADDD1F_gshared (Address_t051E9D01E3A3661138DAA9A36D969D0EC12A2CF1* ___0_destination, Address_t051E9D01E3A3661138DAA9A36D969D0EC12A2CF1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Address_t051E9D01E3A3661138DAA9A36D969D0EC12A2CF1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Address_t051E9D01E3A3661138DAA9A36D969D0EC12A2CF1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Address_t051E9D01E3A3661138DAA9A36D969D0EC12A2CF1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAnimationEventBlittable_t59D8029C582F4A7E4EFB0C374DB23CC17BE323EF_mDC6A4F97B6862A9368BFEAF3FC80BF02A4A11650_gshared (AnimationEventBlittable_t59D8029C582F4A7E4EFB0C374DB23CC17BE323EF* ___0_destination, AnimationEventBlittable_t59D8029C582F4A7E4EFB0C374DB23CC17BE323EF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AnimationEventBlittable_t59D8029C582F4A7E4EFB0C374DB23CC17BE323EF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AnimationEventBlittable_t59D8029C582F4A7E4EFB0C374DB23CC17BE323EF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AnimationEventBlittable_t59D8029C582F4A7E4EFB0C374DB23CC17BE323EF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03_mA05FD1200E24DDB998528FC769FF4219BC53EE43_gshared (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* ___0_destination, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisArchiveHandle_tECB0188191D0D3519C85970E537865D8F0E49CAA_mAABB0217E41BA606B9EC31CA784F97E61000D544_gshared (ArchiveHandle_tECB0188191D0D3519C85970E537865D8F0E49CAA* ___0_destination, ArchiveHandle_tECB0188191D0D3519C85970E537865D8F0E49CAA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ArchiveHandle_tECB0188191D0D3519C85970E537865D8F0E49CAA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ArchiveHandle_tECB0188191D0D3519C85970E537865D8F0E49CAA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ArchiveHandle_tECB0188191D0D3519C85970E537865D8F0E49CAA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_mE722009CF3369F14C5504F191D0EA30479F00E86_gshared (AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___0_destination, AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B_gshared (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m8557E6B1B48B7EB426E6CCFA83223FDCB8F16135_gshared (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___0_destination, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m9EE961D328A463A3B89EBC9E2B20D70A09D560A9_gshared (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___0_destination, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m324E3A8002E0CF6D1124784CA1795D144B2308C2_gshared (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* ___0_destination, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(228, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5ADA1F648D3D4D37DB595FA24A1207E2AFE0FDE5_gshared (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_destination, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F_m9DB7230DD280D8D5B3EA032FD88BCFF7166B6AB4_gshared (BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F* ___0_destination, BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		bool* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		bool* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<bool>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoundProperty_t007B5226CF3817A0F5231BB30510E20EAF5B11AB_m01C38CF1B4DAB7A8AC8C021599B8AE6DDEA83AFF_gshared (BoundProperty_t007B5226CF3817A0F5231BB30510E20EAF5B11AB* ___0_destination, BoundProperty_t007B5226CF3817A0F5231BB30510E20EAF5B11AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoundProperty_t007B5226CF3817A0F5231BB30510E20EAF5B11AB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoundProperty_t007B5226CF3817A0F5231BB30510E20EAF5B11AB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoundProperty_t007B5226CF3817A0F5231BB30510E20EAF5B11AB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010_m795273AEE7A248BA5B241E561023F0456EF5DED1_gshared (BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* ___0_destination, BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647_gshared (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m94064136D4BEB842AD7BA9B23F28D023B9159E51_gshared (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___0_destination, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint8_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint8_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455_mE0D96A3C81AD5AD346CDBF7A7B6681D0DAE2A203_gshared (CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* ___0_destination, CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Il2CppChar* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Il2CppChar* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Il2CppChar>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE_m3C4417F1F221D78FCCCF0E2157B78FE672A7E86F_gshared (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* ___0_destination, CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComplex_tC7518465FEAE5F5138E1653314A611EEC09467A2_m56E1F20E8C2CDB92A685FF033D1B5E735740A4FC_gshared (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* ___0_destination, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7_gshared (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330_m9781EE80E5AFB841CD7574EE3602BF54C71A0FF5_gshared (ContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330* ___0_destination, ContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContentNamespace_t0A9FA5CFA8B2F2EA62DA0EFD50B011BB338F6330>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52_gshared (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_destination, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03_gshared (CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_destination, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80_gshared (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_m04AE08CFDDF22D77985E99A65D7459944D37F7DD_gshared (CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED* ___0_destination, CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m043C911A673C0D3DF1B80E0A8DADC5F8967873B6_gshared (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_destination, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mBE00D14D47458722B6DE2B0D3994E898CA9FE669_gshared (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_destination, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_m0B40FDD1EA9F25179F6D21CD8594AB44CE1D11B2_gshared (DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* ___0_destination, DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD_mC49612746C663EF46D693501EF707DA1C808F672_gshared (DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* ___0_destination, DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49_mB020FE36A95248E17F02AFAD99294E33BE87EBB7_gshared (DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___0_destination, DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA70B0B4E0BC6A3B6FD695BE78CB717356559DC0B_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___0_destination, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m26B5BBC37A0A9CE155480FC99BC70B2B41E4678B_gshared (double* ___0_destination, double* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		double* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		double* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<double>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_m3AB80BE2651836BC6D6235533746976454F760B2_gshared (DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* ___0_destination, DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54_gshared (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m6AAEDA6D4101BC102C278A650ACE547DB784D03B_gshared (DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* ___0_destination, DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_m6F2BA74A7DBF719AE1754F3527EEA972637626A0_gshared (DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* ___0_destination, DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900_gshared (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD_m70F47463A76C3CEC5A60BF38409A206BE7D50A49_gshared (FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* ___0_destination, FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182_gshared (GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_destination, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m7146E166797850AFFFC5C0B8AFE6FACAC714FB6B_gshared (GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___0_destination, GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m5E50631671535491F4124E183D496FE30921E8C9_gshared (GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___0_destination, GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mFE85A77CF4B3338FC9F32B0EA8E7210F35665C1B_gshared (GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___0_destination, GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F_m1C555DD96B1B21625A3782B5088903189B3AB29F_gshared (GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* ___0_destination, GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mD479C3965ADC585B6CA62A6136D07509F042E52C_gshared (GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* ___0_destination, GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m33C6006A3976CB7B6910ED7366970B135FDC814A_gshared (GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___0_destination, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGenericBinding_t9A74DB04E38389AF97E2C4F27B1B0F2E6C0FA397_m17A20E79071A8B2325C020D18CDF4BBAE012F15F_gshared (GenericBinding_t9A74DB04E38389AF97E2C4F27B1B0F2E6C0FA397* ___0_destination, GenericBinding_t9A74DB04E38389AF97E2C4F27B1B0F2E6C0FA397* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GenericBinding_t9A74DB04E38389AF97E2C4F27B1B0F2E6C0FA397* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GenericBinding_t9A74DB04E38389AF97E2C4F27B1B0F2E6C0FA397* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GenericBinding_t9A74DB04E38389AF97E2C4F27B1B0F2E6C0FA397>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E_gshared (GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___0_destination, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_m77AB92BB39464173F314EC38076FE2FDC2748579_gshared (GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D* ___0_destination, GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC_gshared (GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_destination, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134_gshared (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_destination, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7_gshared (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_destination, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0_mEA71C71CAFCA3F9ED7F25460A0A4A3FA3914F816_gshared (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* ___0_destination, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768_gshared (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_destination, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055_gshared (Guid_t* ___0_destination, Guid_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Guid_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Guid_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Guid_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m96D670C1976FF8FCE968AF7E4F26FB4B8118D1CD_gshared (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___0_destination, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F_gshared (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_destination, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D_m31148BC9E64E6998B9195D19EE3DC7309F795FF4_gshared (InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___0_destination, InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02_m09B1854526DAF2C7071C6F820280DBEE74DF86A2_gshared (IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* ___0_destination, IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m1752DB1596C4C4586766BA2A8E5507DA34D09731_gshared (IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* ___0_destination, IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_m05DEEBCE948053CBFFA6C094E423741164584AF3_gshared (IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* ___0_destination, IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_m2D74F1A4370C5E1065B193D91E60173CBBD0D7D9_gshared (IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* ___0_destination, IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m3B632A22634A03CAF6057149181CAB1BD31A9740_gshared (InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* ___0_destination, InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m8C253FF157C04780CD45441FF7BD611F0F4B4F5C_gshared (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_destination, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m6846F5DED6276BB72762DCFF6DEE1B40BF57BBEF_gshared (InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* ___0_destination, InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_m608B6E3A4051EA12739AA32FFDC046DDE15FC89D_gshared (InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* ___0_destination, InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31_gshared (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		intptr_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		intptr_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<intptr_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntegrationInfo_t404A1127808146C83CC277933625FF0794245AE3_m6028FD677FD092E5520C921DF872222BB674CAC4_gshared (IntegrationInfo_t404A1127808146C83CC277933625FF0794245AE3* ___0_destination, IntegrationInfo_t404A1127808146C83CC277933625FF0794245AE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IntegrationInfo_t404A1127808146C83CC277933625FF0794245AE3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IntegrationInfo_t404A1127808146C83CC277933625FF0794245AE3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IntegrationInfo_t404A1127808146C83CC277933625FF0794245AE3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988_gshared (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_destination, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_m59D4034115D09B7995687545F7C6855F1FA51788_gshared (LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* ___0_destination, LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_m433B7A1CA94D568396DF3741053FC07B09E4BAAD_gshared (LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* ___0_destination, LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m63A7093524C8B58A6229DB0723A66B569FBB9F4C_gshared (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* ___0_destination, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197_gshared (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___0_destination, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E_m7F3C07C5DF89FD9E467CF118710A8F5C7660A1DB_gshared (LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* ___0_destination, LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_mB299AD4CE049174320A1A22C157EF59CCDB3A6B2_gshared (LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___0_destination, LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F_mF474D34EAB52DE3384813044F545FD25C495D21F_gshared (MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F* ___0_destination, MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MachineLearningTensorDescriptor_t1BF985B997F1FE425A60A95DE5DA6499D5BAF52F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367_gshared (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___0_destination, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E_m70E38B1F18ADC154D3868C1D785056C3E2A66C05_gshared (Matrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E* ___0_destination, Matrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Matrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Matrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Matrix3x2_tE64BDEC3368ABCDA7011AE2806BDC631DD602F2E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_mBA417548F7D7F77C0469410C47851D75F08B03CE_gshared (Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* ___0_destination, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m6212DC59D136B8FAA87466C3495D0F4B7B3762BC_gshared (MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* ___0_destination, MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_m9CC9BB5524CD97C8007D1EEBE09C53ED6D819499_gshared (MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___0_destination, MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4_gshared (ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_destination, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_m565400A36DB2B85ED0E370333F71CBA13D3B9A4E_gshared (MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* ___0_destination, MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisName_t9E47EF25D1808C27515EB99D71DB90E187AC1354_m8A9793514C049D29935B8879F1ABE6C9ADB6728B_gshared (Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___0_destination, Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(228, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_m92D158431A5BC9D2B05C80575A0DDA8B5ED9B213_gshared (NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___0_destination, NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7877A89A8912BD549B31F67DAC4FEEE193752C28_gshared (NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___0_destination, NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m1344A30C8C64641C8CB6DB508EC56FE1BF15F736_gshared (NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___0_destination, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A_gshared (RuntimeObject** ___0_destination, RuntimeObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject** L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		RuntimeObject** L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(228, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m43F8A4AC2388A9F0C27AB0A185085F53623608CA_gshared (OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___0_destination, OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933_m5A003E688413079C66237DE790878F634A60F8EB_gshared (OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___0_destination, OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB_mC6AFBBAA2DFE1E74FF820515977ACF76A6F110EC_gshared (OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___0_destination, OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7_mED6034C6AE7A91FD3482A1B2F2F57DC6CAEC124F_gshared (OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___0_destination, OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_mB35746D9853EBB9E5ABDFA095D7C5B7C58C8B51F_gshared (OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___0_destination, OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m0E5023F31322576D419474CB9F7795E2E5D7688C_gshared (OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___0_destination, OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m2C86E0E5D4E10481221216636DD7BC3BDD8A5214_gshared (PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___0_destination, PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m41BC15726CAB8F70CD000CB3674D3128237FE452_gshared (PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___0_destination, PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m1C1B67C346EEED0CD456B9E87D080590068B3082_gshared (PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___0_destination, PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m9E7E2846C3D4BCC5B682D0E2EAEABACFEEE1845E_gshared (PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___0_destination, PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m39B28318F5BDEAE4BD94956E767CC9704364FEE2_gshared (PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___0_destination, PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_t4066BF27E31CE4FB9DC0E0F359E02F0280E078E5_mA5BDC45157D4679CE67D272220AFD033A1D08821_gshared (Plane_t4066BF27E31CE4FB9DC0E0F359E02F0280E078E5* ___0_destination, Plane_t4066BF27E31CE4FB9DC0E0F359E02F0280E078E5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Plane_t4066BF27E31CE4FB9DC0E0F359E02F0280E078E5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Plane_t4066BF27E31CE4FB9DC0E0F359E02F0280E078E5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Plane_t4066BF27E31CE4FB9DC0E0F359E02F0280E078E5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F_gshared (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC_m59DDB1BBEE638E6F82DC0798293CAF64985EF0C1_gshared (ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC* ___0_destination, ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_mD935DD9CD565FB1A8125AACA4DA2BE2A4980526A_gshared (ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* ___0_destination, ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_mD715673D2746D6CDFF49C8EC0869D74F37CD0281_gshared (ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* ___0_destination, ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_mEC221F5EA452B2083140C7B07F9D2270CA6A55FF_gshared (PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* ___0_destination, PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m32B2E4F6BF68D8FA6CC039B1CD714495A18966D2_gshared (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0_destination, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F_m738EFC5A8BFED83072C84917E24ABE8FEFA09856_gshared (Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F* ___0_destination, Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mB9D5545DD5F09B740B941EEEC446D6DDDF8761F8_gshared (RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___0_destination, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7_gshared (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E_gshared (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___0_destination, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F_m79B934C6299FBEAD050C8623DEECA5910C785A77_gshared (ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___0_destination, ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA_gshared (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_destination, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m8F65577516367138DA0D2D5E60DFA59643E23946_gshared (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_destination, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551_m3FD4B33EDB99E32742062A1966754DC9F1E5090B_gshared (RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___0_destination, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m6894206E85F92C7E4AF252F3E44348C8831A8A95_gshared (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___0_destination, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_m3E9036AC6B2F145C0BD1D5BF478C68862E3D162D_gshared (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___0_destination, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_mCC5FE82DA6115518D0515F505693D2403D91255F_gshared (RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___0_destination, RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_m8C5EFDBB84C3693069DECF855A3A029189508D96_gshared (RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___0_destination, RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m835EF4F437450CDDBD9433F292E9AC2479A90E1E_gshared (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___0_destination, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_mE56E868D1E861AD9139DDD68E2FC6520686F0235_gshared (ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___0_destination, ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m487A364CEA8D45CA1019912E652DBE060211AD52_gshared (ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___0_destination, ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m7A2C6E00E5CCE631EFDFD1737985A5805815B52F_gshared (ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___0_destination, ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mDEF8860657F738E1C37779358F5FC2EC8B4F795D_gshared (ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___0_destination, ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250_gshared (int8_t* ___0_destination, int8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int8_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int8_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int8_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mCCC311A9CB3BBFDF387DB99FA39A44D1D64A739F_gshared (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___0_destination, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m44539DB4218E8B9D6803A1DB854D6A394284EC2F_gshared (ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___0_destination, ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_mB33B125C7A1AC219217D2366979A4B5E8EEEB129_gshared (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___0_destination, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m94E6E2313F69F3768A56E42612429E5C38D5FAA2_gshared (SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* ___0_destination, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_mC66BC9906CD26C4203D0566DC87425459D5F94EE_gshared (SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* ___0_destination, SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46_gshared (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___0_destination, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934_m50EDF09D4FF2E0450D96F19B3E2540421F7723EF_gshared (SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934* ___0_destination, SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_mF8CA7DBA4C0513981099CE00AEC5A00DBBF590CB_gshared (StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* ___0_destination, StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m5673359DA14F42D418757E17AA8B63D5D9CCC337_gshared (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___0_destination, SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_mF6F7C1814773F69C958C41B232379EBD4896E28F_gshared (SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___0_destination, SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026_m32A23337029ABE0E84B9CF615FBDADE927B6BC4F_gshared (SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* ___0_destination, SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_m15B0C879197615CE8FBB0E507065369653A60CEB_gshared (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___0_destination, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mD282CF13F4921DA3352CC7FC199441E21842278B_gshared (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___0_destination, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mB9203CCBA27231FC655442726FF84EF63FA9164C_gshared (TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* ___0_destination, TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUIntPtr_t_m2ACE96013DB5ABD1E0BCD5C76A84AD8B939E466F_gshared (uintptr_t* ___0_destination, uintptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uintptr_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uintptr_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uintptr_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mA5606AC3FC8189982A0ACF7B89C9843420DFB899_gshared (URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* ___0_destination, URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2_tD99316096CAA530734E8AEB77A0353568D6DC575_m93EE49B45CEBD450609AA00D01BC05D06C790684_gshared (Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575* ___0_destination, Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m4D4024BA66A2549F3712E54CBBD60CA1C70EF840_gshared (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_destination, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D_m8383AC9D45F01D1F594B47DCCA8A524A88ED63FB_gshared (Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* ___0_destination, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2ECC58795F80608DCE149900D7BF78998799A046_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_destination, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6_m28F3AB94631ED5743B5816CC9C4C46A3DBE9948D_gshared (Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6* ___0_destination, Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004_gshared (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_destination, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8_gshared (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_destination, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m79148948778E3104E3C071F66CC59832555DFCAD_gshared (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* ___0_destination, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_m274E314A6717CAF400EF0120DB9D11F934E8BE39_gshared (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* ___0_destination, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB_gshared (Il2CppFullySharedGenericAny* ___0_destination, Il2CppFullySharedGenericAny* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_destination;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_6);
		uint8_t* L_7 = V_0;
		uint64_t L_8 = ___2_elementCount;
		int32_t L_9;
		L_9 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_3), L_7, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_8), L_9)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_002f:
	{
		Il2CppFullySharedGenericAny* L_10 = ___0_destination;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		V_2 = L_11;
		uint8_t* L_12 = V_2;
		Il2CppFullySharedGenericAny* L_13 = ___1_source;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_as_ref<uint8_t>(L_13);
		V_1 = L_14;
		uint8_t* L_15 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_15);
		uint8_t* L_16 = V_3;
		uint64_t L_17 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20;
		L_20 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(228, L_19);
		V_4 = L_20;
		intptr_t L_21;
		L_21 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_12), L_16, (uint32_t)((int32_t)(uint32_t)L_17), L_21, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_mE1C20BE133A63D6CC6948C9487F57339C0BC8F32_gshared (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___0_destination, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m1FE843767EBB89D4C9C6B1733207A4734A84E113_gshared (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m01F6470836C56C7320DCDD3F7E32BED921C0F96B_gshared (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___0_destination, float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float4_t89D9A294E7A79BD81BFBDD18654508532958555E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m51100B40C91645487D1AAD6E5794EC56F2A63181_gshared (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___0_destination, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D_gshared (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_destination, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisquaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_m52E1497C43DE412479D7444BCD2225259751DD64_gshared (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___0_destination, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m374FD45DB3712CE8C4E9C2E21951BF4B61FE868D_gshared (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* ___0_destination, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPathArguments_t445220F54870AED8F8384306CF72A316887AD98C_m23AC459C79425F5C0FDE188A5A16C5133D49AFE6_gshared (PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* ___0_destination, PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PathArguments_t445220F54870AED8F8384306CF72A316887AD98C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1_m167F3C32DC24A2213A702C1202291926D9812795_gshared (PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* ___0_destination, PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m57AA7D3FC3F97C3450CD81D369713175353E442B_gshared (FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* ___0_destination, FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_m27C842FDDC4609D12CC008E33EE82FE9F88ABF2B_gshared (PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* ___0_destination, PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_mFAC4CA3124027F9D2ACDDEEAED00CC1B73CCB7C5_gshared (SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* ___0_destination, SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_mDD4BB16024FE8319599CDD76F5E7529158D977F7_gshared (Info_tA3039772991DEEDBC29A00439A055C5166133A27* ___0_destination, Info_tA3039772991DEEDBC29A00439A055C5166133A27* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Info_tA3039772991DEEDBC29A00439A055C5166133A27* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Info_tA3039772991DEEDBC29A00439A055C5166133A27* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Info_tA3039772991DEEDBC29A00439A055C5166133A27>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0_gshared (BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___0_destination, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE_gshared (TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___0_destination, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_mCCC9E64E51DF62CEBFC029AB9042DF9EE6ED4553_gshared (OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* ___0_destination, OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE_gshared (Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___0_destination, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_m991D7C18C9D456BE72563A3353755563F1C81E5B_gshared (Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* ___0_destination, Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m7AF8542D5D6488FC667EDE92FC22F56CE2241189_gshared (SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* ___0_destination, SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_m427CDFE46D4CC628C19ABDAB8DE106E667CA228D_gshared (CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* ___0_destination, CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(228, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_m597AEFDEA861960C01875FED55DA2DFD78E4B50C_gshared (CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* ___0_destination, CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(228, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m47BAB4AC929DEF79404CCB3EC8AA33FF067DAC26_gshared (LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* ___0_destination, LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_mA80B75EC509DDA1E958A97AEAF0D2B7F9E5E23D2_gshared (Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* ___0_destination, Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mAB973BC26AE613D4A698AA272F9966BBB1FEA7F9_gshared_inline (Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_t226CA57C44213ACDD759FCE85A3D97CCEE7567C2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Span_1_ToArray_m26BDA405A2FAA3836803417EF508FF3ED17D639E_gshared_inline (Span_1_tD395F6D08B1C63FF8FE95C91619CFA5F1EA75B8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t226CA57C44213ACDD759FCE85A3D97CCEE7567C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1;
		L_1 = Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_t226CA57C44213ACDD759FCE85A3D97CCEE7567C2 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ((EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m57107B0971C215948970E813F419EC87CC0AB443_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int64_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int64_t>((uint8_t*)L_1);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Span_1_ToArray_m48970EF6F3DDB984D842A90662327A9D0A999E0E_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
		L_1 = Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int64_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int64_t>(L_5);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_7 = __this->____pointer;
		V_0 = L_7;
		int64_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8738969A09F3E294FE020AC78D512A8762CF54A6_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_2;
		L_2 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>((uint8_t*)L_1);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Span_1_ToArray_m3A166501793DDF0D07C7FE8393C01BA3B46FCDA0_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1;
		L_1 = Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>(L_5);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_7 = __this->____pointer;
		V_0 = L_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = ((EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m470F2D1C376F672AD7385840036E5E3FDA7BCD29_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_2;
		L_2 = il2cpp_unsafe_as_ref<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>((uint8_t*)L_1);
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Span_1_ToArray_m90C475E472A2E9FCA3B8AF1A903B10C61E09F07A_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_1;
		L_1 = Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_3 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)(MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_6;
		L_6 = il2cpp_unsafe_as_ref<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>(L_5);
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_7 = __this->____pointer;
		V_0 = L_7;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = ((EmptyArray_1_tAC344C0CB3A1178A06D7E53BD6CA11847AB83524_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m39E68B73B1D51755A2D802AFF9C739DD1E9C18C6_gshared_inline (Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_2;
		L_2 = il2cpp_unsafe_as_ref<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C>((uint8_t*)L_1);
		ByReference_1_tB90B0CC3B83F9C1A38589E6C47D1A4B99480DCA7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* Span_1_ToArray_m9709EDC35CE0914CDAF9FF5AC0F65B846529A155_gshared_inline (Span_1_t28CC6AA19B0B1100ED7B483906379E4B7C15CACF* __this, const RuntimeMethod* method) 
{
	ByReference_1_tB90B0CC3B83F9C1A38589E6C47D1A4B99480DCA7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_1;
		L_1 = Array_Empty_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m8D1741D78F4BE953D5A3A4F3E6698C234444B61F_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_3 = (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)(MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_6;
		L_6 = il2cpp_unsafe_as_ref<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C>(L_5);
		ByReference_1_tB90B0CC3B83F9C1A38589E6C47D1A4B99480DCA7 L_7 = __this->____pointer;
		V_0 = L_7;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* Array_Empty_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m8D1741D78F4BE953D5A3A4F3E6698C234444B61F_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_0 = ((EmptyArray_1_t007D5A4CFD1D2FF34EEBE21CEF13AECC70F095CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFA501D433BD32705D8D9FF2EFB26C6142C15335E_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2;
		L_2 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>((uint8_t*)L_1);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Span_1_ToArray_m0C441D8B8E14F9F8A026B6CDA0046EBE6EE88CE6_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1;
		L_1 = Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>(L_5);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_7 = __this->____pointer;
		V_0 = L_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ((EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC84CC26C2EBBBB9CD3F60B1A1D965914C9C7E666_gshared_inline (Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* L_2;
		L_2 = il2cpp_unsafe_as_ref<MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E>((uint8_t*)L_1);
		ByReference_1_t98D24BF404F87E2CFBC8CC0F3BC7DF1ABB065C4D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* Span_1_ToArray_m834512E2FA615CD393F01F45E446884F0B7DBDBA_gshared_inline (Span_1_t3E4BE929752EEE3A99769849F94EB47CD0CF3590* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98D24BF404F87E2CFBC8CC0F3BC7DF1ABB065C4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* L_1;
		L_1 = Array_Empty_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m9D69F1F3E69D9BE4FE932CAA5488FF2C0C77BD84_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* L_3 = (MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6*)(MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* L_6;
		L_6 = il2cpp_unsafe_as_ref<MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E>(L_5);
		ByReference_1_t98D24BF404F87E2CFBC8CC0F3BC7DF1ABB065C4D L_7 = __this->____pointer;
		V_0 = L_7;
		MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m6212DC59D136B8FAA87466C3495D0F4B7B3762BC(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* Array_Empty_TisMeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E_m9D69F1F3E69D9BE4FE932CAA5488FF2C0C77BD84_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MeshLodRangeU5BU5D_tA0034879BB5DF306311DA12E70169E1D63901AF6* L_0 = ((EmptyArray_1_t056988AF5058814F667ED35F57F2BFE91E0AC4A5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m41258F088B04437BDFB3AF3EC45AF81CEFD2DAD6_gshared_inline (Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* L_2;
		L_2 = il2cpp_unsafe_as_ref<MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC>((uint8_t*)L_1);
		ByReference_1_t5511B3A677E02702C607AA2C905FD6737328C3FE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* Span_1_ToArray_mC98E43A40C394AEFE12BC4F3E9B8014AAA7AC4E3_gshared_inline (Span_1_tA6BEB072AB60538EAA492D289AE5D7CFFA2E941F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5511B3A677E02702C607AA2C905FD6737328C3FE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* L_1;
		L_1 = Array_Empty_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_mF3D8CDB2BE5DFBD5770C0DC1B09663648C59D40B_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* L_3 = (MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895*)(MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* L_6;
		L_6 = il2cpp_unsafe_as_ref<MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC>(L_5);
		ByReference_1_t5511B3A677E02702C607AA2C905FD6737328C3FE L_7 = __this->____pointer;
		V_0 = L_7;
		MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(MuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_m565400A36DB2B85ED0E370333F71CBA13D3B9A4E(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* Array_Empty_TisMuscleHandle_t42541A546013AD9940D5FEC7ED1A5BB066A245FC_mF3D8CDB2BE5DFBD5770C0DC1B09663648C59D40B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MuscleHandleU5BU5D_t45E24205F8D6AB118A0D3702B83C51EF7AAC6895* L_0 = ((EmptyArray_1_tBAE389DB7DC91C9D5BA7FFF14D3BF84D5D535A21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82A705EF0937AA2925A9F1B58A31D609771A7E1F_gshared_inline (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_2;
		L_2 = il2cpp_unsafe_as_ref<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>((uint8_t*)L_1);
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Span_1_ToArray_m84E3B0120E90C9CA86F6DFC76CFE438EA424AB93_gshared_inline (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6* __this, const RuntimeMethod* method) 
{
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_1;
		L_1 = Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_3 = (PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE*)(PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_6;
		L_6 = il2cpp_unsafe_as_ref<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>(L_5);
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_7 = __this->____pointer;
		V_0 = L_7;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_0 = ((EmptyArray_1_t6F7601522B7C3D965C794144D6AB06B5E56C389F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA6B0A6ED7314F9301B3FC7317CFED015A7DA262B_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2;
		L_2 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>((uint8_t*)L_1);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Span_1_ToArray_mA7A7BA36A340E11528D00699E69C6462A0699FEC_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1;
		L_1 = Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_3 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>(L_5);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_7 = __this->____pointer;
		V_0 = L_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ((EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7E2B58017948399EC02850E4C7DE9ACB0D8B4786_gshared_inline (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_2;
		L_2 = il2cpp_unsafe_as_ref<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>((uint8_t*)L_1);
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Span_1_ToArray_mDCDD2EDC0B547EC18289F95DCF0371D237B516D5_gshared_inline (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_1;
		L_1 = Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_3 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6;
		L_6 = il2cpp_unsafe_as_ref<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>(L_5);
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_7 = __this->____pointer;
		V_0 = L_7;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_0 = ((EmptyArray_1_tA3FD4DA73690B22AF51247DE4AB33A52280CF1DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m256018AD9B1E710A73E35FAE6D5CC39DD1764EB9_gshared_inline (Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_2;
		L_2 = il2cpp_unsafe_as_ref<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>((uint8_t*)L_1);
		ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Span_1_ToArray_m7991F6310890A03D4302F449C3953625E07076C3_gshared_inline (Span_1_tF4D9B4B87977A720F1E351D58C2CB052497FA060* __this, const RuntimeMethod* method) 
{
	ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_1;
		L_1 = Array_Empty_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF09AB489F062620E85BE4536FC98B6AEBF00B791_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_6;
		L_6 = il2cpp_unsafe_as_ref<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>(L_5);
		ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 L_7 = __this->____pointer;
		V_0 = L_7;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Array_Empty_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF09AB489F062620E85BE4536FC98B6AEBF00B791_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = ((EmptyArray_1_tE734FFF96D1ED5A8579050C42CB3D5933F541B75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m38EECB636829D807B96005A9AA8E41063C877DA1_gshared_inline (Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_2;
		L_2 = il2cpp_unsafe_as_ref<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D>((uint8_t*)L_1);
		ByReference_1_tD7CEB46AA10ADF9732D4418942B226987F48B44D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Span_1_ToArray_m9D9F21EB763577CCF4D66D30E5431BE1323FC6AE_gshared_inline (Span_1_tA921127FB82E829329A2ACB82FDCCED88A4A97B2* __this, const RuntimeMethod* method) 
{
	ByReference_1_tD7CEB46AA10ADF9732D4418942B226987F48B44D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1;
		L_1 = Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_3 = (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)(RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6;
		L_6 = il2cpp_unsafe_as_ref<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D>(L_5);
		ByReference_1_tD7CEB46AA10ADF9732D4418942B226987F48B44D L_7 = __this->____pointer;
		V_0 = L_7;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Array_Empty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m85A5CFE26D5D127B03744735ED2B5FC30FCB1D59_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_0 = ((EmptyArray_1_t08704EABC4CA3368B0E6C088FF83A3BDE70484C8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2FFB899F837C3CC69382939AF9BBED95EFA4C867_gshared_inline (Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* L_2;
		L_2 = il2cpp_unsafe_as_ref<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>((uint8_t*)L_1);
		ByReference_1_t2EF959CAE1FB9699CC8BC65093F5B7D53437A94D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* Span_1_ToArray_m3095255B2FD7A488643362E8AF1B5EE87E9C1665_gshared_inline (Span_1_t26AB1596A759374A053AC07D1851BA4E544312B0* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2EF959CAE1FB9699CC8BC65093F5B7D53437A94D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_1;
		L_1 = Array_Empty_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m08DF41F14756E94315B0762AD8D2B62A0F4E4C8A_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_3 = (ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* L_6;
		L_6 = il2cpp_unsafe_as_ref<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>(L_5);
		ByReference_1_t2EF959CAE1FB9699CC8BC65093F5B7D53437A94D L_7 = __this->____pointer;
		V_0 = L_7;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m835EF4F437450CDDBD9433F292E9AC2479A90E1E(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* Array_Empty_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m08DF41F14756E94315B0762AD8D2B62A0F4E4C8A_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_0 = ((EmptyArray_1_t3A050EE8D27544565549460B170C55B4093D1847_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		float* L_2;
		L_2 = il2cpp_unsafe_as_ref<float>((uint8_t*)L_1);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		float* L_6;
		L_6 = il2cpp_unsafe_as_ref<float>(L_5);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_7 = __this->____pointer;
		V_0 = L_7;
		float* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m202786F88C12306CE6CE45D750A691E2CBEAC431_gshared_inline (Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_2;
		L_2 = il2cpp_unsafe_as_ref<SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2>((uint8_t*)L_1);
		ByReference_1_t47D886947127309BB68E9E3837D65AF788FD5BF8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* Span_1_ToArray_mBB98F433690BE6D052DFD14123DDF849A40A109D_gshared_inline (Span_1_tFFB1E24B0C5DDB77C53C5397AEBA29CE225AAEEE* __this, const RuntimeMethod* method) 
{
	ByReference_1_t47D886947127309BB68E9E3837D65AF788FD5BF8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* L_1;
		L_1 = Array_Empty_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m1FE72E952510F146795941C48441AF40900371BC_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* L_3 = (SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4*)(SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_6;
		L_6 = il2cpp_unsafe_as_ref<SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2>(L_5);
		ByReference_1_t47D886947127309BB68E9E3837D65AF788FD5BF8 L_7 = __this->____pointer;
		V_0 = L_7;
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* Array_Empty_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m1FE72E952510F146795941C48441AF40900371BC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SphericalHarmonicsL2U5BU5D_t42591F941E4F428F39D6167FC8511B02A25465D4* L_0 = ((EmptyArray_1_t27C14574AFE8F6D02EFF76C2F6C68B108BCF9573_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint16_t>((uint8_t*)L_1);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1;
		L_1 = Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint16_t>(L_5);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_7 = __this->____pointer;
		V_0 = L_7;
		uint16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ((EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m50C1AB8CF970B0E296CD917975C18DCB815D193B_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>((uint8_t*)L_1);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Span_1_ToArray_m32DA34FCDE6D7AB9EA941ABF7CE26FEE26AEA49C_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1;
		L_1 = Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_5);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ((EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCCDE317B7EF9509DB97AFE5968CF15240BB7DE03_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>((uint8_t*)L_1);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Span_1_ToArray_m2E6BEE60BD48A117C372CF405F27139869922A06_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_5);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ((EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m35263B255C49C34B49026B8D2239D90D20A46BAE_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>((uint8_t*)L_1);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Span_1_ToArray_mBCD2D9E7C594EAF63CC33D62601F3BCEB8F9BA68_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1;
		L_1 = Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_5);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ((EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB55F7EBED8FFAAD1F44640FDE1CE6B007D226E39_gshared_inline (Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* L_2;
		L_2 = il2cpp_unsafe_as_ref<FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063>((uint8_t*)L_1);
		ByReference_1_t940D13FDFABF4FF1CB142C005C341ED752EFE85B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* Span_1_ToArray_m7122B69A3EE72C8CC9F5BCC68A551D011D70AD38_gshared_inline (Span_1_tC3A898A5A7E16D92DA04967102875A508D6C8B2F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t940D13FDFABF4FF1CB142C005C341ED752EFE85B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* L_1;
		L_1 = Array_Empty_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m965163D4EE93C4237FB34B9F2EDF58313DA5940E_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* L_3 = (FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7*)(FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* L_6;
		L_6 = il2cpp_unsafe_as_ref<FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063>(L_5);
		ByReference_1_t940D13FDFABF4FF1CB142C005C341ED752EFE85B L_7 = __this->____pointer;
		V_0 = L_7;
		FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(FlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m57AA7D3FC3F97C3450CD81D369713175353E442B(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* Array_Empty_TisFlareElement_t2E6D393F9F4B5E0C60E8CFEB20E3C1BD94C90063_m965163D4EE93C4237FB34B9F2EDF58313DA5940E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		FlareElementU5BU5D_t1D85BABF6A3ED1C20A3609B461A93B84C0C290F7* L_0 = ((EmptyArray_1_t73B178E4EDDEA59CC11E901A636A82FD28EFF983_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m79E5E216B9A1059354AE65B1FB457284A1959AE2_gshared_inline (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m1961C2B7BEA659EB5501916E6F7360ECF853DC3D(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___1_size;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Capacity_m1961C2B7BEA659EB5501916E6F7360ECF853DC3D(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_6, L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_002f:
	{
		List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* L_13 = ___0_list;
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_14;
		L_14 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34_m4745F5F1AEF80A4F85F258B286AFDF36E4963300((RuntimeObject*)L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_14;
		goto IL_0048;
	}

IL_0048:
	{
		G_B5_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B5_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_16 = V_0;
		NullCheck(L_16);
		ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E* L_17 = L_16->____items;
		int32_t L_18 = ___1_size;
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->____size;
		int32_t L_21 = ___1_size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0062:
	{
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_22 = V_0;
		int32_t L_23 = ___1_size;
		NullCheck(L_22);
		L_22->____size = L_23;
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_24 = V_0;
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->____version;
		NullCheck(L_25);
		L_25->____version = ((int32_t)il2cpp_codegen_add(L_26, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE6D9B95B533B42BC07FD29CC736F68BEC4D37AA7_gshared_inline (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4* L_2;
		L_2 = il2cpp_unsafe_as_ref<ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4>((uint8_t*)L_1);
		ByReference_1_t74F577441AB649D6CABC19A28B978C60F10E5B57 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4_m46A9092C9EBB43ACC0D3D7DA2361000331344111_gshared_inline (List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* ___0_list, ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9 ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* V_0 = NULL;
	{
		List_1_t0F3C26517D0B3AB47BCB2A7DA391431C4C77C9EE* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34_m4745F5F1AEF80A4F85F258B286AFDF36E4963300((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_2 = V_0;
		ProfilerRecorderHandleU5BU5D_tF4CE904192F8FC2BAF35F878A921F002B2FE865E* L_3;
		L_3 = ReadOnlySpan_1_ToArray_m69D8E9882D7370A5A99340277ADE89DBAFDC0A74((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_mEF64D82D78310EEEDF21F0253A60640F21D66A3E_inline((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_6 = V_0;
		ListPrivateFieldAccess_1_t65C49C16085BB6569AAF61CB1747C4BF6F7D1D34* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_m89180E186D086E01CDB7EFD9B7CCAB013318F41E_gshared_inline (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m3C578068DC2018B7302932ECB7A274654A622A8E(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___1_size;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Capacity_m3C578068DC2018B7302932ECB7A274654A622A8E(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_6, L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_002f:
	{
		List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* L_13 = ___0_list;
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_14;
		L_14 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE_mD433114417D959F3163EB1C34A70990437C0FB08((RuntimeObject*)L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_14;
		goto IL_0048;
	}

IL_0048:
	{
		G_B5_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B5_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_16 = V_0;
		NullCheck(L_16);
		ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5* L_17 = L_16->____items;
		int32_t L_18 = ___1_size;
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->____size;
		int32_t L_21 = ___1_size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0062:
	{
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_22 = V_0;
		int32_t L_23 = ___1_size;
		NullCheck(L_22);
		L_22->____size = L_23;
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_24 = V_0;
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->____version;
		NullCheck(L_25);
		L_25->____version = ((int32_t)il2cpp_codegen_add(L_26, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD205CCF117CEE3DF2634CB8C139538A35A1E0252_gshared_inline (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F* L_2;
		L_2 = il2cpp_unsafe_as_ref<ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F>((uint8_t*)L_1);
		ByReference_1_t848FCA8796CED05D6A069506E645A4C1833BEBEC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F_mBF3750C2A086530CE4E3BE75A9518B0A3BE25FFB_gshared_inline (List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* ___0_list, ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945 ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* V_0 = NULL;
	{
		List_1_tA11F1F146F045F5EC788CF43CF45AD16E9550272* L_0 = ___0_list;
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE_mD433114417D959F3163EB1C34A70990437C0FB08((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_2 = V_0;
		ProfilerRecorderSampleU5BU5D_t2A56495EC1998F8787BB7E87D794BFAF54EBB3B5* L_3;
		L_3 = ReadOnlySpan_1_ToArray_m1DB3756111E6E1B3A16E8358E06A32F13E29A289((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m444F1B996EB0E833EF6DC602B8BAA553FCEB5E54_inline((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_6 = V_0;
		ListPrivateFieldAccess_1_tEE66B12EDC8607FFAC4E29757FF57CB1BAFA18BE* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_gshared_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___1_size;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_6, L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_002f:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_13 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_14;
		L_14 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_14;
		goto IL_0048;
	}

IL_0048:
	{
		G_B5_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B5_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_16 = V_0;
		NullCheck(L_16);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_17 = L_16->____items;
		int32_t L_18 = ___1_size;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->____size;
		int32_t L_21 = ___1_size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0062:
	{
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_22 = V_0;
		int32_t L_23 = ___1_size;
		NullCheck(L_22);
		L_22->____size = L_23;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_24 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->____version;
		NullCheck(L_25);
		L_25->____version = ((int32_t)il2cpp_codegen_add(L_26, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m282E1BC4A5F7B82AFCA96523874584D8AAA045C1_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_2;
		L_2 = il2cpp_unsafe_as_ref<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>((uint8_t*)L_1);
		ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_gshared_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_2 = V_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3;
		L_3 = ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_inline((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_6 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1DF7EBE6857CEE8606CEDF15CD2780CBBCACB384_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mFC460C1FE9D413F41371C800ECB347D153264F69(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___1_size;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Capacity_mFC460C1FE9D413F41371C800ECB347D153264F69(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_6, L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_002f:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_13 = ___0_list;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_14;
		L_14 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6_mE5FD3C189A791B18279B00F6A758B785560A43C2((RuntimeObject*)L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_14;
		goto IL_0048;
	}

IL_0048:
	{
		G_B5_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B5_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_16 = V_0;
		NullCheck(L_16);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_17 = L_16->____items;
		int32_t L_18 = ___1_size;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->____size;
		int32_t L_21 = ___1_size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0062:
	{
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_22 = V_0;
		int32_t L_23 = ___1_size;
		NullCheck(L_22);
		L_22->____size = L_23;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_24 = V_0;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->____version;
		NullCheck(L_25);
		L_25->____version = ((int32_t)il2cpp_codegen_add(L_26, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1AD06B8E9C062FA16DFB8AFADC42E1D854FF9AEE_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>((uint8_t*)L_1);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m72BE95C245ACC9D361AA32DDDDFDE55F409FCF3E_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* V_0 = NULL;
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_list;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6_mE5FD3C189A791B18279B00F6A758B785560A43C2((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_2 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3;
		L_3 = ReadOnlySpan_1_ToArray_mA1A7F3A8ACE2D67BE5ABE1111F1E744EFCA5813D((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_inline((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_6 = V_0;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mA56B630AC9FA5916210D2B7DFE657BEF9FB8DE83_gshared_inline (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m4FB032608DA6142D1DC5EE48D48F376914FB898B(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___1_size;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Capacity_m4FB032608DA6142D1DC5EE48D48F376914FB898B(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_6, L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_002f:
	{
		List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* L_13 = ___0_list;
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_14;
		L_14 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05_m57911C0041F9C1B79F894A67A6AD56B61D96D9C2((RuntimeObject*)L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_14;
		goto IL_0048;
	}

IL_0048:
	{
		G_B5_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B5_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_16 = V_0;
		NullCheck(L_16);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_17 = L_16->____items;
		int32_t L_18 = ___1_size;
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->____size;
		int32_t L_21 = ___1_size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0062:
	{
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_22 = V_0;
		int32_t L_23 = ___1_size;
		NullCheck(L_22);
		L_22->____size = L_23;
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_24 = V_0;
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->____version;
		NullCheck(L_25);
		L_25->____version = ((int32_t)il2cpp_codegen_add(L_26, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBF7291E3430B639E4D2A7F9540DE992737D45AC4_gshared_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_2;
		L_2 = il2cpp_unsafe_as_ref<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>((uint8_t*)L_1);
		ByReference_1_tA646A142C83B2DEAE35CC1909169EA19C12201DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m25BC7428B977D2ABB72391CA387F0A9E664D7805_gshared_inline (List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* ___0_list, ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006 ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* V_0 = NULL;
	{
		List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05_m57911C0041F9C1B79F894A67A6AD56B61D96D9C2((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_2 = V_0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_3;
		L_3 = ReadOnlySpan_1_ToArray_mA4636BCEDF9716846FE602470940CE7BDFD9A98C((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m43B30473D688DEBD0E776FD8303069AA370B69F4_inline((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_6 = V_0;
		ListPrivateFieldAccess_1_t1C1AA36FC5D05811BD3A3F18F15B7691FBC97C05* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mEF64D82D78310EEEDF21F0253A60640F21D66A3E_gshared_inline (ReadOnlySpan_1_t44AEE3A9AAAAD126402F236A68995AF87A3EABF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m444F1B996EB0E833EF6DC602B8BAA553FCEB5E54_gshared_inline (ReadOnlySpan_1_t4C6A9B0A9A2C0F1695512B05DE7258A25AC8F945* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m5D8561BF76A2451939095A0ABC980794FD4FBC76_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m43B30473D688DEBD0E776FD8303069AA370B69F4_gshared_inline (ReadOnlySpan_1_tD6632037B9C2A00A111E1627D34F86F9A6611006* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
