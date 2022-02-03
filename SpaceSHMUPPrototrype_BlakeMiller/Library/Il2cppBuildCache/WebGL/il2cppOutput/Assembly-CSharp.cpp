#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefiniton>
struct Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A;
// System.Collections.Generic.IEqualityComparer`1<eWeaponType>
struct IEqualityComparer_1_t579F49657DE80BD56C746180B74F16BBC8F9CE24;
// System.Collections.Generic.Dictionary`2/KeyCollection<eWeaponType,WeaponDefiniton>
struct KeyCollection_t96474321A915D5505A5A940E2DCB91406FF43B11;
// System.Collections.Generic.List`1<EnemyShield>
struct List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<eWeaponType,WeaponDefiniton>
struct ValueCollection_tE7738B5687D64A6811E58E55DA1F4705B3C373F6;
// System.Collections.Generic.Dictionary`2/Entry<eWeaponType,WeaponDefiniton>[]
struct EntryU5BU5D_tA91357DB8A5F907F21AF8E4E3888FB856014B34B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// EnemyShield[]
struct EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Weapon[]
struct WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F;
// WeaponDefiniton[]
struct WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6;
// eWeaponType[]
struct eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// BlinkColorOnHit
struct BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17;
// BoundsCheck
struct BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemyShield
struct EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7;
// Enemy_0
struct Enemy_0_t7E930B323B9A06D71F977D195D032B6B192832F7;
// Enemy_1
struct Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD;
// Enemy_2
struct Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505;
// Enemy_3
struct Enemy_3_t26420F93F5593F1FAFA319CD276CA6BC131C3AC9;
// Enemy_4
struct Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Hero
struct Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Main
struct Main_tDB418C89D33CD2699713F36E95C4373C8892C046;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Parallax
struct Parallax_t98398A197751A44EE1A4B082AB50A668D671803C;
// PowerUp
struct PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3;
// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Shield
struct Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Utils
struct Utils_tB7E464340F21C3BC9E90CD7C3670828A951C212E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Weapon
struct Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226;
// WeaponDefiniton
struct WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Hero/WeaponFireDelegate
struct WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F;

IL2CPP_EXTERN_C RuntimeClass* BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* eWeaponType_t243F2E2FF6EE36D0BE40AC158422AEFA21A0D969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6050880675B7CD06D38D2E5E336DCA6E5C6270;
IL2CPP_EXTERN_C String_t* _stringLiteral130677921A63B2961EACE0ACC9043588114E8E5A;
IL2CPP_EXTERN_C String_t* _stringLiteral15FD77B92FAC1A51D73AB558C072339BBC72E5D2;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral29CEB8D6B752EBF557CF20FE107268DB744122EC;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9;
IL2CPP_EXTERN_C String_t* _stringLiteral771BC1BF8AE3E5A597E32F43362350C984ED2BF2;
IL2CPP_EXTERN_C String_t* _stringLiteral7E3ED2C85AF7E7F774BC301B5713520A6B79A647;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral838E394589B5693706685699154545855BEAE0B2;
IL2CPP_EXTERN_C String_t* _stringLiteral8DEE32A19B0EDA3465103E5384AF09CAB214D69D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA274BF0E0A0D3E20AB2B341B8CC8A4DCD8489FC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m212124AC969855A2FDF0FE263ADCA8C3ADE7F78D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_m193A372E2ABDE25F0D67A5CB7E88EF8072F9B20B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_mA81CE7A0E08DD9C375AC2A6D7B2912CE716F9C7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mCC9FD2C0BE9B8D38A7FAA28AD8C4228AC43D4860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_m3B5E5605A1DC8D5F5E6F414BB0829A947C05C35E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m60796F649E215157E02DBD13E87BB216A5C4FC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAFE635D6CE644DE4BD7E97ACBDCB99B8B99B6D04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m2FC43F0CCCBF0FC317F2CCB66291AC0A6F86CD95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1B531DA34BA64630480D343E3CED94A97A60A4F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5B551C03D839CF2CF10123949CA8D775C0794B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFD3C382FE9B18BAE7CE4FC4F33ECED438FB72453_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1BC8F19F1B9AAC9854FC8E4E1DB03CDF5BBAFB7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3_m1A06A64B0432A22A4ACAA8316F437ECC4126186A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mDFDC7E58FE89016C2A8E421AEA268944FC0F1FD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m92B786AA87215C7924E3C681AF9AA0E5A0988FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5B8F2A185A0C01C797C4861AC0666B2580F07984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m19A15296BE3B2B2B8C721F7F9183521CB97E0995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Weapon_Fire_mD146220100CDE1259C95D090D0147EBE7DFB9A6F_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F;
struct WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6;
struct eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefiniton>
struct  Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA91357DB8A5F907F21AF8E4E3888FB856014B34B* ___entries_1;
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
	KeyCollection_t96474321A915D5505A5A940E2DCB91406FF43B11 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE7738B5687D64A6811E58E55DA1F4705B3C373F6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___entries_1)); }
	inline EntryU5BU5D_tA91357DB8A5F907F21AF8E4E3888FB856014B34B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA91357DB8A5F907F21AF8E4E3888FB856014B34B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA91357DB8A5F907F21AF8E4E3888FB856014B34B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___keys_7)); }
	inline KeyCollection_t96474321A915D5505A5A940E2DCB91406FF43B11 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t96474321A915D5505A5A940E2DCB91406FF43B11 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t96474321A915D5505A5A940E2DCB91406FF43B11 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ___values_8)); }
	inline ValueCollection_tE7738B5687D64A6811E58E55DA1F4705B3C373F6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE7738B5687D64A6811E58E55DA1F4705B3C373F6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE7738B5687D64A6811E58E55DA1F4705B3C373F6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<EnemyShield>
struct  List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4, ____items_1)); }
	inline EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* get__items_1() const { return ____items_1; }
	inline EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4_StaticFields, ____emptyArray_5)); }
	inline EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<EnemyShield>
struct  Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501, ___list_0)); }
	inline List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * get_list_0() const { return ___list_0; }
	inline List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501, ___current_3)); }
	inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * get_current_3() const { return ___current_3; }
	inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D16
struct  __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D16 <PrivateImplementationDetails>::AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790
	__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  ___AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0;

public:
	inline static int32_t get_offset_of_AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0)); }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  get_AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0() const { return ___AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0; }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 * get_address_of_AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0() { return &___AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0; }
	inline void set_AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0(__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  value)
	{
		___AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.ContactPoint
struct  ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// eWeaponType
struct  eWeaponType_t243F2E2FF6EE36D0BE40AC158422AEFA21A0D969 
{
public:
	// System.Int32 eWeaponType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eWeaponType_t243F2E2FF6EE36D0BE40AC158422AEFA21A0D969, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoundsCheck/eScreenLocs
struct  eScreenLocs_tE7F7E17A32F26BB7AA3AF0D45CB6771C4393BE76 
{
public:
	// System.Int32 BoundsCheck/eScreenLocs::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eScreenLocs_tE7F7E17A32F26BB7AA3AF0D45CB6771C4393BE76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// WeaponDefiniton
struct  WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5  : public RuntimeObject
{
public:
	// eWeaponType WeaponDefiniton::type
	int32_t ___type_0;
	// System.String WeaponDefiniton::letter
	String_t* ___letter_1;
	// UnityEngine.Color WeaponDefiniton::powerUpColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___powerUpColor_2;
	// UnityEngine.GameObject WeaponDefiniton::weaponModelprefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___weaponModelprefab_3;
	// UnityEngine.GameObject WeaponDefiniton::projectilePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectilePrefab_4;
	// UnityEngine.Color WeaponDefiniton::projectileColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___projectileColor_5;
	// System.Single WeaponDefiniton::damageOnHit
	float ___damageOnHit_6;
	// System.Single WeaponDefiniton::damagePerSec
	float ___damagePerSec_7;
	// System.Single WeaponDefiniton::delayBetweenShots
	float ___delayBetweenShots_8;
	// System.Single WeaponDefiniton::velocity
	float ___velocity_9;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_letter_1() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___letter_1)); }
	inline String_t* get_letter_1() const { return ___letter_1; }
	inline String_t** get_address_of_letter_1() { return &___letter_1; }
	inline void set_letter_1(String_t* value)
	{
		___letter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___letter_1), (void*)value);
	}

	inline static int32_t get_offset_of_powerUpColor_2() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___powerUpColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_powerUpColor_2() const { return ___powerUpColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_powerUpColor_2() { return &___powerUpColor_2; }
	inline void set_powerUpColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___powerUpColor_2 = value;
	}

	inline static int32_t get_offset_of_weaponModelprefab_3() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___weaponModelprefab_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_weaponModelprefab_3() const { return ___weaponModelprefab_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_weaponModelprefab_3() { return &___weaponModelprefab_3; }
	inline void set_weaponModelprefab_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___weaponModelprefab_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponModelprefab_3), (void*)value);
	}

	inline static int32_t get_offset_of_projectilePrefab_4() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___projectilePrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectilePrefab_4() const { return ___projectilePrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectilePrefab_4() { return &___projectilePrefab_4; }
	inline void set_projectilePrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectilePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectilePrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_projectileColor_5() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___projectileColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_projectileColor_5() const { return ___projectileColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_projectileColor_5() { return &___projectileColor_5; }
	inline void set_projectileColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___projectileColor_5 = value;
	}

	inline static int32_t get_offset_of_damageOnHit_6() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___damageOnHit_6)); }
	inline float get_damageOnHit_6() const { return ___damageOnHit_6; }
	inline float* get_address_of_damageOnHit_6() { return &___damageOnHit_6; }
	inline void set_damageOnHit_6(float value)
	{
		___damageOnHit_6 = value;
	}

	inline static int32_t get_offset_of_damagePerSec_7() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___damagePerSec_7)); }
	inline float get_damagePerSec_7() const { return ___damagePerSec_7; }
	inline float* get_address_of_damagePerSec_7() { return &___damagePerSec_7; }
	inline void set_damagePerSec_7(float value)
	{
		___damagePerSec_7 = value;
	}

	inline static int32_t get_offset_of_delayBetweenShots_8() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___delayBetweenShots_8)); }
	inline float get_delayBetweenShots_8() const { return ___delayBetweenShots_8; }
	inline float* get_address_of_delayBetweenShots_8() { return &___delayBetweenShots_8; }
	inline void set_delayBetweenShots_8(float value)
	{
		___delayBetweenShots_8 = value;
	}

	inline static int32_t get_offset_of_velocity_9() { return static_cast<int32_t>(offsetof(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5, ___velocity_9)); }
	inline float get_velocity_9() const { return ___velocity_9; }
	inline float* get_address_of_velocity_9() { return &___velocity_9; }
	inline void set_velocity_9(float value)
	{
		___velocity_9 = value;
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Hero/WeaponFireDelegate
struct  WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// BlinkColorOnHit
struct  BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean BlinkColorOnHit::showingColor
	bool ___showingColor_6;
	// System.Single BlinkColorOnHit::blinkCompleteTime
	float ___blinkCompleteTime_7;
	// System.Boolean BlinkColorOnHit::ignoreOnCollisionEnter
	bool ___ignoreOnCollisionEnter_8;
	// UnityEngine.Material[] BlinkColorOnHit::materials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___materials_9;
	// UnityEngine.Color[] BlinkColorOnHit::originalColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___originalColors_10;
	// BoundsCheck BlinkColorOnHit::bndCheck
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * ___bndCheck_11;

public:
	inline static int32_t get_offset_of_showingColor_6() { return static_cast<int32_t>(offsetof(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17, ___showingColor_6)); }
	inline bool get_showingColor_6() const { return ___showingColor_6; }
	inline bool* get_address_of_showingColor_6() { return &___showingColor_6; }
	inline void set_showingColor_6(bool value)
	{
		___showingColor_6 = value;
	}

	inline static int32_t get_offset_of_blinkCompleteTime_7() { return static_cast<int32_t>(offsetof(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17, ___blinkCompleteTime_7)); }
	inline float get_blinkCompleteTime_7() const { return ___blinkCompleteTime_7; }
	inline float* get_address_of_blinkCompleteTime_7() { return &___blinkCompleteTime_7; }
	inline void set_blinkCompleteTime_7(float value)
	{
		___blinkCompleteTime_7 = value;
	}

	inline static int32_t get_offset_of_ignoreOnCollisionEnter_8() { return static_cast<int32_t>(offsetof(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17, ___ignoreOnCollisionEnter_8)); }
	inline bool get_ignoreOnCollisionEnter_8() const { return ___ignoreOnCollisionEnter_8; }
	inline bool* get_address_of_ignoreOnCollisionEnter_8() { return &___ignoreOnCollisionEnter_8; }
	inline void set_ignoreOnCollisionEnter_8(bool value)
	{
		___ignoreOnCollisionEnter_8 = value;
	}

	inline static int32_t get_offset_of_materials_9() { return static_cast<int32_t>(offsetof(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17, ___materials_9)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_materials_9() const { return ___materials_9; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_materials_9() { return &___materials_9; }
	inline void set_materials_9(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___materials_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_9), (void*)value);
	}

	inline static int32_t get_offset_of_originalColors_10() { return static_cast<int32_t>(offsetof(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17, ___originalColors_10)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_originalColors_10() const { return ___originalColors_10; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_originalColors_10() { return &___originalColors_10; }
	inline void set_originalColors_10(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___originalColors_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalColors_10), (void*)value);
	}

	inline static int32_t get_offset_of_bndCheck_11() { return static_cast<int32_t>(offsetof(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17, ___bndCheck_11)); }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * get_bndCheck_11() const { return ___bndCheck_11; }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE ** get_address_of_bndCheck_11() { return &___bndCheck_11; }
	inline void set_bndCheck_11(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * value)
	{
		___bndCheck_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bndCheck_11), (void*)value);
	}
};

struct BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_StaticFields
{
public:
	// System.Single BlinkColorOnHit::blinkDuration
	float ___blinkDuration_4;
	// UnityEngine.Color BlinkColorOnHit::blinkColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___blinkColor_5;

public:
	inline static int32_t get_offset_of_blinkDuration_4() { return static_cast<int32_t>(offsetof(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_StaticFields, ___blinkDuration_4)); }
	inline float get_blinkDuration_4() const { return ___blinkDuration_4; }
	inline float* get_address_of_blinkDuration_4() { return &___blinkDuration_4; }
	inline void set_blinkDuration_4(float value)
	{
		___blinkDuration_4 = value;
	}

	inline static int32_t get_offset_of_blinkColor_5() { return static_cast<int32_t>(offsetof(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_StaticFields, ___blinkColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_blinkColor_5() const { return ___blinkColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_blinkColor_5() { return &___blinkColor_5; }
	inline void set_blinkColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___blinkColor_5 = value;
	}
};


// BoundsCheck
struct  BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BoundsCheck::radius
	float ___radius_4;
	// System.Boolean BoundsCheck::keepOnScreen
	bool ___keepOnScreen_5;
	// BoundsCheck/eScreenLocs BoundsCheck::screenLocs
	int32_t ___screenLocs_6;
	// System.Single BoundsCheck::camWidth
	float ___camWidth_7;
	// System.Single BoundsCheck::camHeight
	float ___camHeight_8;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_keepOnScreen_5() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___keepOnScreen_5)); }
	inline bool get_keepOnScreen_5() const { return ___keepOnScreen_5; }
	inline bool* get_address_of_keepOnScreen_5() { return &___keepOnScreen_5; }
	inline void set_keepOnScreen_5(bool value)
	{
		___keepOnScreen_5 = value;
	}

	inline static int32_t get_offset_of_screenLocs_6() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___screenLocs_6)); }
	inline int32_t get_screenLocs_6() const { return ___screenLocs_6; }
	inline int32_t* get_address_of_screenLocs_6() { return &___screenLocs_6; }
	inline void set_screenLocs_6(int32_t value)
	{
		___screenLocs_6 = value;
	}

	inline static int32_t get_offset_of_camWidth_7() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___camWidth_7)); }
	inline float get_camWidth_7() const { return ___camWidth_7; }
	inline float* get_address_of_camWidth_7() { return &___camWidth_7; }
	inline void set_camWidth_7(float value)
	{
		___camWidth_7 = value;
	}

	inline static int32_t get_offset_of_camHeight_8() { return static_cast<int32_t>(offsetof(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE, ___camHeight_8)); }
	inline float get_camHeight_8() const { return ___camHeight_8; }
	inline float* get_address_of_camHeight_8() { return &___camHeight_8; }
	inline void set_camHeight_8(float value)
	{
		___camHeight_8 = value;
	}
};


// Enemy
struct  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Enemy::speed
	float ___speed_4;
	// System.Single Enemy::fireRate
	float ___fireRate_5;
	// System.Single Enemy::health
	float ___health_6;
	// System.Int32 Enemy::score
	int32_t ___score_7;
	// System.Single Enemy::powerUpDropChance
	float ___powerUpDropChance_8;
	// System.Boolean Enemy::calledShipDestroyed
	bool ___calledShipDestroyed_9;
	// BoundsCheck Enemy::bndCheck
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * ___bndCheck_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_fireRate_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___fireRate_5)); }
	inline float get_fireRate_5() const { return ___fireRate_5; }
	inline float* get_address_of_fireRate_5() { return &___fireRate_5; }
	inline void set_fireRate_5(float value)
	{
		___fireRate_5 = value;
	}

	inline static int32_t get_offset_of_health_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___health_6)); }
	inline float get_health_6() const { return ___health_6; }
	inline float* get_address_of_health_6() { return &___health_6; }
	inline void set_health_6(float value)
	{
		___health_6 = value;
	}

	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___score_7)); }
	inline int32_t get_score_7() const { return ___score_7; }
	inline int32_t* get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(int32_t value)
	{
		___score_7 = value;
	}

	inline static int32_t get_offset_of_powerUpDropChance_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___powerUpDropChance_8)); }
	inline float get_powerUpDropChance_8() const { return ___powerUpDropChance_8; }
	inline float* get_address_of_powerUpDropChance_8() { return &___powerUpDropChance_8; }
	inline void set_powerUpDropChance_8(float value)
	{
		___powerUpDropChance_8 = value;
	}

	inline static int32_t get_offset_of_calledShipDestroyed_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___calledShipDestroyed_9)); }
	inline bool get_calledShipDestroyed_9() const { return ___calledShipDestroyed_9; }
	inline bool* get_address_of_calledShipDestroyed_9() { return &___calledShipDestroyed_9; }
	inline void set_calledShipDestroyed_9(bool value)
	{
		___calledShipDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_bndCheck_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___bndCheck_10)); }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * get_bndCheck_10() const { return ___bndCheck_10; }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE ** get_address_of_bndCheck_10() { return &___bndCheck_10; }
	inline void set_bndCheck_10(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * value)
	{
		___bndCheck_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bndCheck_10), (void*)value);
	}
};


// EnemyShield
struct  EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyShield::health
	float ___health_4;
	// System.Collections.Generic.List`1<EnemyShield> EnemyShield::protectors
	List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * ___protectors_5;
	// BlinkColorOnHit EnemyShield::blinker
	BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * ___blinker_6;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_protectors_5() { return static_cast<int32_t>(offsetof(EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7, ___protectors_5)); }
	inline List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * get_protectors_5() const { return ___protectors_5; }
	inline List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 ** get_address_of_protectors_5() { return &___protectors_5; }
	inline void set_protectors_5(List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * value)
	{
		___protectors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protectors_5), (void*)value);
	}

	inline static int32_t get_offset_of_blinker_6() { return static_cast<int32_t>(offsetof(EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7, ___blinker_6)); }
	inline BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * get_blinker_6() const { return ___blinker_6; }
	inline BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 ** get_address_of_blinker_6() { return &___blinker_6; }
	inline void set_blinker_6(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * value)
	{
		___blinker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blinker_6), (void*)value);
	}
};


// Hero
struct  Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Hero::speed
	float ___speed_5;
	// System.Single Hero::rollMult
	float ___rollMult_6;
	// System.Single Hero::pitchMult
	float ___pitchMult_7;
	// UnityEngine.GameObject Hero::projectilePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectilePrefab_8;
	// System.Single Hero::projectileSpeed
	float ___projectileSpeed_9;
	// Weapon[] Hero::weapons
	WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* ___weapons_10;
	// System.Single Hero::_shieldLevel
	float ____shieldLevel_11;
	// UnityEngine.GameObject Hero::lastTriggerGo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lastTriggerGo_12;
	// Hero/WeaponFireDelegate Hero::fireEvent
	WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * ___fireEvent_13;

public:
	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_rollMult_6() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___rollMult_6)); }
	inline float get_rollMult_6() const { return ___rollMult_6; }
	inline float* get_address_of_rollMult_6() { return &___rollMult_6; }
	inline void set_rollMult_6(float value)
	{
		___rollMult_6 = value;
	}

	inline static int32_t get_offset_of_pitchMult_7() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___pitchMult_7)); }
	inline float get_pitchMult_7() const { return ___pitchMult_7; }
	inline float* get_address_of_pitchMult_7() { return &___pitchMult_7; }
	inline void set_pitchMult_7(float value)
	{
		___pitchMult_7 = value;
	}

	inline static int32_t get_offset_of_projectilePrefab_8() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___projectilePrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectilePrefab_8() const { return ___projectilePrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectilePrefab_8() { return &___projectilePrefab_8; }
	inline void set_projectilePrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectilePrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectilePrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_projectileSpeed_9() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___projectileSpeed_9)); }
	inline float get_projectileSpeed_9() const { return ___projectileSpeed_9; }
	inline float* get_address_of_projectileSpeed_9() { return &___projectileSpeed_9; }
	inline void set_projectileSpeed_9(float value)
	{
		___projectileSpeed_9 = value;
	}

	inline static int32_t get_offset_of_weapons_10() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___weapons_10)); }
	inline WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* get_weapons_10() const { return ___weapons_10; }
	inline WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F** get_address_of_weapons_10() { return &___weapons_10; }
	inline void set_weapons_10(WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* value)
	{
		___weapons_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weapons_10), (void*)value);
	}

	inline static int32_t get_offset_of__shieldLevel_11() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ____shieldLevel_11)); }
	inline float get__shieldLevel_11() const { return ____shieldLevel_11; }
	inline float* get_address_of__shieldLevel_11() { return &____shieldLevel_11; }
	inline void set__shieldLevel_11(float value)
	{
		____shieldLevel_11 = value;
	}

	inline static int32_t get_offset_of_lastTriggerGo_12() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___lastTriggerGo_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lastTriggerGo_12() const { return ___lastTriggerGo_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lastTriggerGo_12() { return &___lastTriggerGo_12; }
	inline void set_lastTriggerGo_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lastTriggerGo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastTriggerGo_12), (void*)value);
	}

	inline static int32_t get_offset_of_fireEvent_13() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___fireEvent_13)); }
	inline WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * get_fireEvent_13() const { return ___fireEvent_13; }
	inline WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F ** get_address_of_fireEvent_13() { return &___fireEvent_13; }
	inline void set_fireEvent_13(WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * value)
	{
		___fireEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fireEvent_13), (void*)value);
	}
};

struct Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields
{
public:
	// Hero Hero::<S>k__BackingField
	Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * ___U3CSU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CSU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields, ___U3CSU3Ek__BackingField_4)); }
	inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * get_U3CSU3Ek__BackingField_4() const { return ___U3CSU3Ek__BackingField_4; }
	inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C ** get_address_of_U3CSU3Ek__BackingField_4() { return &___U3CSU3Ek__BackingField_4; }
	inline void set_U3CSU3Ek__BackingField_4(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * value)
	{
		___U3CSU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSU3Ek__BackingField_4), (void*)value);
	}
};


// Main
struct  Main_tDB418C89D33CD2699713F36E95C4373C8892C046  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Main::prefabEnemies
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___prefabEnemies_6;
	// System.Single Main::enemySpawnPerSecond
	float ___enemySpawnPerSecond_7;
	// System.Single Main::enemyInsetDefault
	float ___enemyInsetDefault_8;
	// System.Single Main::gameRestartDelay
	float ___gameRestartDelay_9;
	// WeaponDefiniton[] Main::weaponDefinitions
	WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6* ___weaponDefinitions_10;
	// UnityEngine.GameObject Main::prefabPowerUp
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabPowerUp_11;
	// eWeaponType[] Main::powerUpFrequency
	eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892* ___powerUpFrequency_12;
	// BoundsCheck Main::bndCheck
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * ___bndCheck_13;

public:
	inline static int32_t get_offset_of_prefabEnemies_6() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___prefabEnemies_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_prefabEnemies_6() const { return ___prefabEnemies_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_prefabEnemies_6() { return &___prefabEnemies_6; }
	inline void set_prefabEnemies_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___prefabEnemies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabEnemies_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemySpawnPerSecond_7() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___enemySpawnPerSecond_7)); }
	inline float get_enemySpawnPerSecond_7() const { return ___enemySpawnPerSecond_7; }
	inline float* get_address_of_enemySpawnPerSecond_7() { return &___enemySpawnPerSecond_7; }
	inline void set_enemySpawnPerSecond_7(float value)
	{
		___enemySpawnPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_enemyInsetDefault_8() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___enemyInsetDefault_8)); }
	inline float get_enemyInsetDefault_8() const { return ___enemyInsetDefault_8; }
	inline float* get_address_of_enemyInsetDefault_8() { return &___enemyInsetDefault_8; }
	inline void set_enemyInsetDefault_8(float value)
	{
		___enemyInsetDefault_8 = value;
	}

	inline static int32_t get_offset_of_gameRestartDelay_9() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___gameRestartDelay_9)); }
	inline float get_gameRestartDelay_9() const { return ___gameRestartDelay_9; }
	inline float* get_address_of_gameRestartDelay_9() { return &___gameRestartDelay_9; }
	inline void set_gameRestartDelay_9(float value)
	{
		___gameRestartDelay_9 = value;
	}

	inline static int32_t get_offset_of_weaponDefinitions_10() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___weaponDefinitions_10)); }
	inline WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6* get_weaponDefinitions_10() const { return ___weaponDefinitions_10; }
	inline WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6** get_address_of_weaponDefinitions_10() { return &___weaponDefinitions_10; }
	inline void set_weaponDefinitions_10(WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6* value)
	{
		___weaponDefinitions_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponDefinitions_10), (void*)value);
	}

	inline static int32_t get_offset_of_prefabPowerUp_11() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___prefabPowerUp_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabPowerUp_11() const { return ___prefabPowerUp_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabPowerUp_11() { return &___prefabPowerUp_11; }
	inline void set_prefabPowerUp_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabPowerUp_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabPowerUp_11), (void*)value);
	}

	inline static int32_t get_offset_of_powerUpFrequency_12() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___powerUpFrequency_12)); }
	inline eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892* get_powerUpFrequency_12() const { return ___powerUpFrequency_12; }
	inline eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892** get_address_of_powerUpFrequency_12() { return &___powerUpFrequency_12; }
	inline void set_powerUpFrequency_12(eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892* value)
	{
		___powerUpFrequency_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerUpFrequency_12), (void*)value);
	}

	inline static int32_t get_offset_of_bndCheck_13() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___bndCheck_13)); }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * get_bndCheck_13() const { return ___bndCheck_13; }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE ** get_address_of_bndCheck_13() { return &___bndCheck_13; }
	inline void set_bndCheck_13(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * value)
	{
		___bndCheck_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bndCheck_13), (void*)value);
	}
};

struct Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields
{
public:
	// Main Main::S
	Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * ___S_4;
	// System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefiniton> Main::WEAP_DICT
	Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * ___WEAP_DICT_5;

public:
	inline static int32_t get_offset_of_S_4() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields, ___S_4)); }
	inline Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * get_S_4() const { return ___S_4; }
	inline Main_tDB418C89D33CD2699713F36E95C4373C8892C046 ** get_address_of_S_4() { return &___S_4; }
	inline void set_S_4(Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * value)
	{
		___S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___S_4), (void*)value);
	}

	inline static int32_t get_offset_of_WEAP_DICT_5() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields, ___WEAP_DICT_5)); }
	inline Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * get_WEAP_DICT_5() const { return ___WEAP_DICT_5; }
	inline Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A ** get_address_of_WEAP_DICT_5() { return &___WEAP_DICT_5; }
	inline void set_WEAP_DICT_5(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * value)
	{
		___WEAP_DICT_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WEAP_DICT_5), (void*)value);
	}
};


// Parallax
struct  Parallax_t98398A197751A44EE1A4B082AB50A668D671803C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Parallax::playerTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerTrans_4;
	// UnityEngine.Transform[] Parallax::panels
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___panels_5;
	// System.Single Parallax::scrollSpeed
	float ___scrollSpeed_6;
	// System.Single Parallax::motionMult
	float ___motionMult_7;
	// System.Single Parallax::panelHt
	float ___panelHt_8;
	// System.Single Parallax::depth
	float ___depth_9;

public:
	inline static int32_t get_offset_of_playerTrans_4() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___playerTrans_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerTrans_4() const { return ___playerTrans_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerTrans_4() { return &___playerTrans_4; }
	inline void set_playerTrans_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerTrans_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTrans_4), (void*)value);
	}

	inline static int32_t get_offset_of_panels_5() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___panels_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_panels_5() const { return ___panels_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_panels_5() { return &___panels_5; }
	inline void set_panels_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___panels_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panels_5), (void*)value);
	}

	inline static int32_t get_offset_of_scrollSpeed_6() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___scrollSpeed_6)); }
	inline float get_scrollSpeed_6() const { return ___scrollSpeed_6; }
	inline float* get_address_of_scrollSpeed_6() { return &___scrollSpeed_6; }
	inline void set_scrollSpeed_6(float value)
	{
		___scrollSpeed_6 = value;
	}

	inline static int32_t get_offset_of_motionMult_7() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___motionMult_7)); }
	inline float get_motionMult_7() const { return ___motionMult_7; }
	inline float* get_address_of_motionMult_7() { return &___motionMult_7; }
	inline void set_motionMult_7(float value)
	{
		___motionMult_7 = value;
	}

	inline static int32_t get_offset_of_panelHt_8() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___panelHt_8)); }
	inline float get_panelHt_8() const { return ___panelHt_8; }
	inline float* get_address_of_panelHt_8() { return &___panelHt_8; }
	inline void set_panelHt_8(float value)
	{
		___panelHt_8 = value;
	}

	inline static int32_t get_offset_of_depth_9() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___depth_9)); }
	inline float get_depth_9() const { return ___depth_9; }
	inline float* get_address_of_depth_9() { return &___depth_9; }
	inline void set_depth_9(float value)
	{
		___depth_9 = value;
	}
};


// PowerUp
struct  PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 PowerUp::rotMinMax
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rotMinMax_4;
	// UnityEngine.Vector2 PowerUp::driftMinMax
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___driftMinMax_5;
	// System.Single PowerUp::lifeTime
	float ___lifeTime_6;
	// System.Single PowerUp::fadeTime
	float ___fadeTime_7;
	// eWeaponType PowerUp::type
	int32_t ___type_8;
	// UnityEngine.GameObject PowerUp::cube
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cube_9;
	// UnityEngine.TextMesh PowerUp::letter
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___letter_10;
	// UnityEngine.Vector3 PowerUp::rotPerSecond
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotPerSecond_11;
	// System.Single PowerUp::birthTime
	float ___birthTime_12;
	// UnityEngine.Rigidbody PowerUp::rigid
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigid_13;
	// BoundsCheck PowerUp::bndCheck
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * ___bndCheck_14;
	// UnityEngine.Material PowerUp::cubeMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___cubeMat_15;

public:
	inline static int32_t get_offset_of_rotMinMax_4() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___rotMinMax_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rotMinMax_4() const { return ___rotMinMax_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rotMinMax_4() { return &___rotMinMax_4; }
	inline void set_rotMinMax_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rotMinMax_4 = value;
	}

	inline static int32_t get_offset_of_driftMinMax_5() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___driftMinMax_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_driftMinMax_5() const { return ___driftMinMax_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_driftMinMax_5() { return &___driftMinMax_5; }
	inline void set_driftMinMax_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___driftMinMax_5 = value;
	}

	inline static int32_t get_offset_of_lifeTime_6() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___lifeTime_6)); }
	inline float get_lifeTime_6() const { return ___lifeTime_6; }
	inline float* get_address_of_lifeTime_6() { return &___lifeTime_6; }
	inline void set_lifeTime_6(float value)
	{
		___lifeTime_6 = value;
	}

	inline static int32_t get_offset_of_fadeTime_7() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___fadeTime_7)); }
	inline float get_fadeTime_7() const { return ___fadeTime_7; }
	inline float* get_address_of_fadeTime_7() { return &___fadeTime_7; }
	inline void set_fadeTime_7(float value)
	{
		___fadeTime_7 = value;
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_cube_9() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___cube_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cube_9() const { return ___cube_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cube_9() { return &___cube_9; }
	inline void set_cube_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cube_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cube_9), (void*)value);
	}

	inline static int32_t get_offset_of_letter_10() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___letter_10)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_letter_10() const { return ___letter_10; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_letter_10() { return &___letter_10; }
	inline void set_letter_10(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___letter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___letter_10), (void*)value);
	}

	inline static int32_t get_offset_of_rotPerSecond_11() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___rotPerSecond_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotPerSecond_11() const { return ___rotPerSecond_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotPerSecond_11() { return &___rotPerSecond_11; }
	inline void set_rotPerSecond_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotPerSecond_11 = value;
	}

	inline static int32_t get_offset_of_birthTime_12() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___birthTime_12)); }
	inline float get_birthTime_12() const { return ___birthTime_12; }
	inline float* get_address_of_birthTime_12() { return &___birthTime_12; }
	inline void set_birthTime_12(float value)
	{
		___birthTime_12 = value;
	}

	inline static int32_t get_offset_of_rigid_13() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___rigid_13)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigid_13() const { return ___rigid_13; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigid_13() { return &___rigid_13; }
	inline void set_rigid_13(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigid_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_13), (void*)value);
	}

	inline static int32_t get_offset_of_bndCheck_14() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___bndCheck_14)); }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * get_bndCheck_14() const { return ___bndCheck_14; }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE ** get_address_of_bndCheck_14() { return &___bndCheck_14; }
	inline void set_bndCheck_14(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * value)
	{
		___bndCheck_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bndCheck_14), (void*)value);
	}

	inline static int32_t get_offset_of_cubeMat_15() { return static_cast<int32_t>(offsetof(PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3, ___cubeMat_15)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_cubeMat_15() const { return ___cubeMat_15; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_cubeMat_15() { return &___cubeMat_15; }
	inline void set_cubeMat_15(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___cubeMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeMat_15), (void*)value);
	}
};


// Projectile
struct  Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BoundsCheck Projectile::bndCheck
	BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * ___bndCheck_4;
	// UnityEngine.Renderer Projectile::rend
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___rend_5;
	// UnityEngine.Rigidbody Projectile::rigid
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigid_6;
	// eWeaponType Projectile::_type
	int32_t ____type_7;

public:
	inline static int32_t get_offset_of_bndCheck_4() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___bndCheck_4)); }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * get_bndCheck_4() const { return ___bndCheck_4; }
	inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE ** get_address_of_bndCheck_4() { return &___bndCheck_4; }
	inline void set_bndCheck_4(BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * value)
	{
		___bndCheck_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bndCheck_4), (void*)value);
	}

	inline static int32_t get_offset_of_rend_5() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___rend_5)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_rend_5() const { return ___rend_5; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_rend_5() { return &___rend_5; }
	inline void set_rend_5(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___rend_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_5), (void*)value);
	}

	inline static int32_t get_offset_of_rigid_6() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___rigid_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigid_6() const { return ___rigid_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigid_6() { return &___rigid_6; }
	inline void set_rigid_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigid_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_6), (void*)value);
	}

	inline static int32_t get_offset_of__type_7() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ____type_7)); }
	inline int32_t get__type_7() const { return ____type_7; }
	inline int32_t* get_address_of__type_7() { return &____type_7; }
	inline void set__type_7(int32_t value)
	{
		____type_7 = value;
	}
};


// Shield
struct  Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Shield::rotationsPerSecond
	float ___rotationsPerSecond_4;
	// System.Int32 Shield::levelShown
	int32_t ___levelShown_5;
	// UnityEngine.Material Shield::mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat_6;

public:
	inline static int32_t get_offset_of_rotationsPerSecond_4() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___rotationsPerSecond_4)); }
	inline float get_rotationsPerSecond_4() const { return ___rotationsPerSecond_4; }
	inline float* get_address_of_rotationsPerSecond_4() { return &___rotationsPerSecond_4; }
	inline void set_rotationsPerSecond_4(float value)
	{
		___rotationsPerSecond_4 = value;
	}

	inline static int32_t get_offset_of_levelShown_5() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___levelShown_5)); }
	inline int32_t get_levelShown_5() const { return ___levelShown_5; }
	inline int32_t* get_address_of_levelShown_5() { return &___levelShown_5; }
	inline void set_levelShown_5(int32_t value)
	{
		___levelShown_5 = value;
	}

	inline static int32_t get_offset_of_mat_6() { return static_cast<int32_t>(offsetof(Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61, ___mat_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mat_6() const { return ___mat_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mat_6() { return &___mat_6; }
	inline void set_mat_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_6), (void*)value);
	}
};


// Utils
struct  Utils_tB7E464340F21C3BC9E90CD7C3670828A951C212E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Weapon
struct  Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// eWeaponType Weapon::_type
	int32_t ____type_5;
	// WeaponDefiniton Weapon::def
	WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * ___def_6;
	// System.Single Weapon::nextShotTime
	float ___nextShotTime_7;
	// UnityEngine.GameObject Weapon::weaponModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___weaponModel_8;
	// UnityEngine.Transform Weapon::shotPointTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___shotPointTrans_9;

public:
	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___def_6)); }
	inline WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * get_def_6() const { return ___def_6; }
	inline WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___def_6), (void*)value);
	}

	inline static int32_t get_offset_of_nextShotTime_7() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___nextShotTime_7)); }
	inline float get_nextShotTime_7() const { return ___nextShotTime_7; }
	inline float* get_address_of_nextShotTime_7() { return &___nextShotTime_7; }
	inline void set_nextShotTime_7(float value)
	{
		___nextShotTime_7 = value;
	}

	inline static int32_t get_offset_of_weaponModel_8() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___weaponModel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_weaponModel_8() const { return ___weaponModel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_weaponModel_8() { return &___weaponModel_8; }
	inline void set_weaponModel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___weaponModel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponModel_8), (void*)value);
	}

	inline static int32_t get_offset_of_shotPointTrans_9() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___shotPointTrans_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_shotPointTrans_9() const { return ___shotPointTrans_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_shotPointTrans_9() { return &___shotPointTrans_9; }
	inline void set_shotPointTrans_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___shotPointTrans_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shotPointTrans_9), (void*)value);
	}
};

struct Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_StaticFields
{
public:
	// UnityEngine.Transform Weapon::PROJECTILE_ANCHOR
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PROJECTILE_ANCHOR_4;

public:
	inline static int32_t get_offset_of_PROJECTILE_ANCHOR_4() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_StaticFields, ___PROJECTILE_ANCHOR_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PROJECTILE_ANCHOR_4() const { return ___PROJECTILE_ANCHOR_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PROJECTILE_ANCHOR_4() { return &___PROJECTILE_ANCHOR_4; }
	inline void set_PROJECTILE_ANCHOR_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PROJECTILE_ANCHOR_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PROJECTILE_ANCHOR_4), (void*)value);
	}
};


// Enemy_0
struct  Enemy_0_t7E930B323B9A06D71F977D195D032B6B192832F7  : public Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627
{
public:

public:
};


// Enemy_1
struct  Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD  : public Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627
{
public:
	// System.Single Enemy_1::waveFrequency
	float ___waveFrequency_11;
	// System.Single Enemy_1::waveWidth
	float ___waveWidth_12;
	// System.Single Enemy_1::waveRotY
	float ___waveRotY_13;
	// System.Single Enemy_1::x0
	float ___x0_14;
	// System.Single Enemy_1::birthTime
	float ___birthTime_15;

public:
	inline static int32_t get_offset_of_waveFrequency_11() { return static_cast<int32_t>(offsetof(Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD, ___waveFrequency_11)); }
	inline float get_waveFrequency_11() const { return ___waveFrequency_11; }
	inline float* get_address_of_waveFrequency_11() { return &___waveFrequency_11; }
	inline void set_waveFrequency_11(float value)
	{
		___waveFrequency_11 = value;
	}

	inline static int32_t get_offset_of_waveWidth_12() { return static_cast<int32_t>(offsetof(Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD, ___waveWidth_12)); }
	inline float get_waveWidth_12() const { return ___waveWidth_12; }
	inline float* get_address_of_waveWidth_12() { return &___waveWidth_12; }
	inline void set_waveWidth_12(float value)
	{
		___waveWidth_12 = value;
	}

	inline static int32_t get_offset_of_waveRotY_13() { return static_cast<int32_t>(offsetof(Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD, ___waveRotY_13)); }
	inline float get_waveRotY_13() const { return ___waveRotY_13; }
	inline float* get_address_of_waveRotY_13() { return &___waveRotY_13; }
	inline void set_waveRotY_13(float value)
	{
		___waveRotY_13 = value;
	}

	inline static int32_t get_offset_of_x0_14() { return static_cast<int32_t>(offsetof(Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD, ___x0_14)); }
	inline float get_x0_14() const { return ___x0_14; }
	inline float* get_address_of_x0_14() { return &___x0_14; }
	inline void set_x0_14(float value)
	{
		___x0_14 = value;
	}

	inline static int32_t get_offset_of_birthTime_15() { return static_cast<int32_t>(offsetof(Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD, ___birthTime_15)); }
	inline float get_birthTime_15() const { return ___birthTime_15; }
	inline float* get_address_of_birthTime_15() { return &___birthTime_15; }
	inline void set_birthTime_15(float value)
	{
		___birthTime_15 = value;
	}
};


// Enemy_2
struct  Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505  : public Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627
{
public:
	// System.Single Enemy_2::lifeTime
	float ___lifeTime_11;
	// System.Single Enemy_2::sinEcentricity
	float ___sinEcentricity_12;
	// UnityEngine.AnimationCurve Enemy_2::rotCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___rotCurve_13;
	// UnityEngine.Vector3 Enemy_2::p0
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0_14;
	// UnityEngine.Vector3 Enemy_2::p1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p1_15;
	// System.Single Enemy_2::birthTime
	float ___birthTime_16;
	// UnityEngine.Quaternion Enemy_2::baseRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___baseRotation_17;

public:
	inline static int32_t get_offset_of_lifeTime_11() { return static_cast<int32_t>(offsetof(Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505, ___lifeTime_11)); }
	inline float get_lifeTime_11() const { return ___lifeTime_11; }
	inline float* get_address_of_lifeTime_11() { return &___lifeTime_11; }
	inline void set_lifeTime_11(float value)
	{
		___lifeTime_11 = value;
	}

	inline static int32_t get_offset_of_sinEcentricity_12() { return static_cast<int32_t>(offsetof(Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505, ___sinEcentricity_12)); }
	inline float get_sinEcentricity_12() const { return ___sinEcentricity_12; }
	inline float* get_address_of_sinEcentricity_12() { return &___sinEcentricity_12; }
	inline void set_sinEcentricity_12(float value)
	{
		___sinEcentricity_12 = value;
	}

	inline static int32_t get_offset_of_rotCurve_13() { return static_cast<int32_t>(offsetof(Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505, ___rotCurve_13)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_rotCurve_13() const { return ___rotCurve_13; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_rotCurve_13() { return &___rotCurve_13; }
	inline void set_rotCurve_13(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___rotCurve_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotCurve_13), (void*)value);
	}

	inline static int32_t get_offset_of_p0_14() { return static_cast<int32_t>(offsetof(Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505, ___p0_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_p0_14() const { return ___p0_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_p0_14() { return &___p0_14; }
	inline void set_p0_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___p0_14 = value;
	}

	inline static int32_t get_offset_of_p1_15() { return static_cast<int32_t>(offsetof(Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505, ___p1_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_p1_15() const { return ___p1_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_p1_15() { return &___p1_15; }
	inline void set_p1_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___p1_15 = value;
	}

	inline static int32_t get_offset_of_birthTime_16() { return static_cast<int32_t>(offsetof(Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505, ___birthTime_16)); }
	inline float get_birthTime_16() const { return ___birthTime_16; }
	inline float* get_address_of_birthTime_16() { return &___birthTime_16; }
	inline void set_birthTime_16(float value)
	{
		___birthTime_16 = value;
	}

	inline static int32_t get_offset_of_baseRotation_17() { return static_cast<int32_t>(offsetof(Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505, ___baseRotation_17)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_baseRotation_17() const { return ___baseRotation_17; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_baseRotation_17() { return &___baseRotation_17; }
	inline void set_baseRotation_17(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___baseRotation_17 = value;
	}
};


// Enemy_3
struct  Enemy_3_t26420F93F5593F1FAFA319CD276CA6BC131C3AC9  : public Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627
{
public:
	// System.Single Enemy_3::lifeTime
	float ___lifeTime_11;
	// UnityEngine.Vector3[] Enemy_3::points
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___points_12;
	// System.Single Enemy_3::birthTime
	float ___birthTime_13;

public:
	inline static int32_t get_offset_of_lifeTime_11() { return static_cast<int32_t>(offsetof(Enemy_3_t26420F93F5593F1FAFA319CD276CA6BC131C3AC9, ___lifeTime_11)); }
	inline float get_lifeTime_11() const { return ___lifeTime_11; }
	inline float* get_address_of_lifeTime_11() { return &___lifeTime_11; }
	inline void set_lifeTime_11(float value)
	{
		___lifeTime_11 = value;
	}

	inline static int32_t get_offset_of_points_12() { return static_cast<int32_t>(offsetof(Enemy_3_t26420F93F5593F1FAFA319CD276CA6BC131C3AC9, ___points_12)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_points_12() const { return ___points_12; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_points_12() { return &___points_12; }
	inline void set_points_12(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___points_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_12), (void*)value);
	}

	inline static int32_t get_offset_of_birthTime_13() { return static_cast<int32_t>(offsetof(Enemy_3_t26420F93F5593F1FAFA319CD276CA6BC131C3AC9, ___birthTime_13)); }
	inline float get_birthTime_13() const { return ___birthTime_13; }
	inline float* get_address_of_birthTime_13() { return &___birthTime_13; }
	inline void set_birthTime_13(float value)
	{
		___birthTime_13 = value;
	}
};


// Enemy_4
struct  Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC  : public Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627
{
public:
	// System.Single Enemy_4::duration
	float ___duration_11;
	// EnemyShield[] Enemy_4::allShields
	EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* ___allShields_12;
	// EnemyShield Enemy_4::thisShield
	EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * ___thisShield_13;
	// UnityEngine.Vector3 Enemy_4::p0
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0_14;
	// UnityEngine.Vector3 Enemy_4::p1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p1_15;
	// System.Single Enemy_4::timeStart
	float ___timeStart_16;

public:
	inline static int32_t get_offset_of_duration_11() { return static_cast<int32_t>(offsetof(Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC, ___duration_11)); }
	inline float get_duration_11() const { return ___duration_11; }
	inline float* get_address_of_duration_11() { return &___duration_11; }
	inline void set_duration_11(float value)
	{
		___duration_11 = value;
	}

	inline static int32_t get_offset_of_allShields_12() { return static_cast<int32_t>(offsetof(Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC, ___allShields_12)); }
	inline EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* get_allShields_12() const { return ___allShields_12; }
	inline EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4** get_address_of_allShields_12() { return &___allShields_12; }
	inline void set_allShields_12(EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* value)
	{
		___allShields_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShields_12), (void*)value);
	}

	inline static int32_t get_offset_of_thisShield_13() { return static_cast<int32_t>(offsetof(Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC, ___thisShield_13)); }
	inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * get_thisShield_13() const { return ___thisShield_13; }
	inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 ** get_address_of_thisShield_13() { return &___thisShield_13; }
	inline void set_thisShield_13(EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * value)
	{
		___thisShield_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisShield_13), (void*)value);
	}

	inline static int32_t get_offset_of_p0_14() { return static_cast<int32_t>(offsetof(Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC, ___p0_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_p0_14() const { return ___p0_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_p0_14() { return &___p0_14; }
	inline void set_p0_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___p0_14 = value;
	}

	inline static int32_t get_offset_of_p1_15() { return static_cast<int32_t>(offsetof(Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC, ___p1_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_p1_15() const { return ___p1_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_p1_15() { return &___p1_15; }
	inline void set_p1_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___p1_15 = value;
	}

	inline static int32_t get_offset_of_timeStart_16() { return static_cast<int32_t>(offsetof(Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC, ___timeStart_16)); }
	inline float get_timeStart_16() const { return ___timeStart_16; }
	inline float* get_address_of_timeStart_16() { return &___timeStart_16; }
	inline void set_timeStart_16(float value)
	{
		___timeStart_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// EnemyShield[]
struct EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * m_Items[1];

public:
	inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  m_Items[1];

public:
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  value)
	{
		m_Items[index] = value;
	}
};
// Weapon[]
struct WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * m_Items[1];

public:
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// WeaponDefiniton[]
struct WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * m_Items[1];

public:
	inline WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// eWeaponType[]
struct eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * m_Items[1];

public:
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
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


// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC449D95AD9E22FF5C5DAF2268E883678E14052D9_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponentInParent<BoundsCheck>()
inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * Component_GetComponentInParent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA274BF0E0A0D3E20AB2B341B8CC8A4DCD8489FC3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Material[] Utils::GetAllMaterials(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Utils_GetAllMaterials_mA6AD63A3CF7E36D048CCBD5C168044F0425837A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void BlinkColorOnHit::RevertColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_RevertColors_m65A6D267782DD6F98C4A9D5651FAB10297046969 (BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Projectile>()
inline Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean BoundsCheck::get_isOnScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsCheck_get_isOnScreen_mAF327EF1D7240238DA69485C4862A8202A4963E3 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method);
// System.Void BlinkColorOnHit::SetColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_SetColors_mFE5BD0F2EC3E1D768C8BF0B610EC274578877226 (BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<BoundsCheck>()
inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean BoundsCheck::LocIs(BoundsCheck/eScreenLocs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsCheck_LocIs_mE5EA251874C8939F3A97420CF5238072788D21FD (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, int32_t ___testLoc0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 Enemy::get_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void Enemy::set_pos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// eWeaponType Projectile::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Projectile_get_type_mAD4B8DD9702FA3B2783BA479A21B3682C4A65351_inline (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method);
// WeaponDefiniton Main::GET_WEAPON_DEFINITION(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * Main_GET_WEAPON_DEFINITION_m31DC6911CEDF3B333455D2139C8081F2A2C0B055 (int32_t ___wt0, const RuntimeMethod* method);
// System.Void Main::SHIP_DESTROYED(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_SHIP_DESTROYED_mB6BE0A10561F7299DBDD2B501E08BD64D2D9748D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___e0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<BlinkColorOnHit>()
inline BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * Component_GetComponent_TisBlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_m193A372E2ABDE25F0D67A5CB7E88EF8072F9B20B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<EnemyShield>()
inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * Component_GetComponent_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_mA81CE7A0E08DD9C375AC2A6D7B2912CE716F9C7B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void EnemyShield::AddProtector(EnemyShield)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_AddProtector_m240EC1E84995B1E8C50E9F697A30784712C6D483 (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * ___shieldChild0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EnemyShield>::Add(!0)
inline void List_1_Add_m92B786AA87215C7924E3C681AF9AA0E5A0988FC8 (List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * __this, EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 *, EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EnemyShield>::GetEnumerator()
inline Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501  List_1_GetEnumerator_m5B8F2A185A0C01C797C4861AC0666B2580F07984 (List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501  (*) (List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<EnemyShield>::get_Current()
inline EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * Enumerator_get_Current_m1BC8F19F1B9AAC9854FC8E4E1DB03CDF5BBAFB7F_inline (Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 * __this, const RuntimeMethod* method)
{
	return ((  EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * (*) (Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean EnemyShield::get_isActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyShield_get_isActive_mA78BE59E2C8FCB518A60F4CE65370C11EF14F50A (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, const RuntimeMethod* method);
// System.Single EnemyShield::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyShield_TakeDamage_m06A979E0E91F337B5DE160866AB7DDB446DC9E45 (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, float ___dmg0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<EnemyShield>::MoveNext()
inline bool Enumerator_MoveNext_mFD3C382FE9B18BAE7CE4FC4F33ECED438FB72453 (Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<EnemyShield>::Dispose()
inline void Enumerator_Dispose_m5B551C03D839CF2CF10123949CA8D775C0794B96 (Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void EnemyShield::set_isActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_set_isActive_m014F1C6629D5C75D311FF8BB006A20C189B65445 (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EnemyShield>::.ctor()
inline void List_1__ctor_m19A15296BE3B2B2B8C721F7F9183521CB97E0995 (List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Enemy::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Move_mC861E510D8BD0AC6E1839F87C83349466763F3CA (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m6BB4B39BB829A451C2F63215361D27650AA24D8C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldUp1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<EnemyShield>()
inline EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* Component_GetComponentsInChildren_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_m3B5E5605A1DC8D5F5E6F414BB0829A947C05C35E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void Enemy_4::InitMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_InitMovement_m00E529E26F49C09F712C6426F6824CBF8D5DC4FC (Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC * __this, const RuntimeMethod* method);
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.ContactPoint::get_thisCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ContactPoint_get_thisCollider_m20A0AF6CA56285BBF606A16B02CE74334F1F3498 (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.ContactPoint::get_otherCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ContactPoint_get_otherCollider_m2D1D314EB151931720FE75C99D3462BD7EBE17FE (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// Hero Hero::get_S()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * Hero_get_S_mC9440D468AC7C8FE5EAFCDC897500EF358080BAA_inline (const RuntimeMethod* method);
// System.Void Hero::set_S(Hero)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hero_set_S_m6EE899243000B9537759047DB079E3CBF4B6243D_inline (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Hero::ClearWeapons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_ClearWeapons_mED5DA3745F04DE3EFC2937851B637AD53CB3322D (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method);
// System.Void Weapon::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_SetType_m20D761BEA04D3962614600682413624373B5F307 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___wt0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void Hero/WeaponFireDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate_Invoke_m4786FFED151774920D42C5828765B8D768BD1CAD (WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_root_mDEB1F3B4DB26B32CEED6DFFF734F85C79C4DDA91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<PowerUp>()
inline PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * GameObject_GetComponent_TisPowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3_m1A06A64B0432A22A4ACAA8316F437ECC4126186A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single Hero::get_shieldLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method);
// System.Void Hero::set_shieldLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_set_shieldLevel_m59FBADCE365627014EEBC071604B14AA46602CFE (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, float ___value0, const RuntimeMethod* method);
// System.Void Hero::AbsorbPowerUp(PowerUp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_AbsorbPowerUp_mD7067D1DA7C47CEA9F86F34A72F280B36977FD79 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * ___pUp0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// eWeaponType Weapon::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weapon_get_type_mFA87812D70CD400999988138D2F1CA2475A2226A_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// Weapon Hero::GetEmptyWeaponSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * Hero_GetEmptyWeaponSlot_m114D6B0CF37EF5CEEDA984A0AC2DBF06E06F36DC (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method);
// System.Void PowerUp::AbsorbedBy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_AbsorbedBy_m96D2B29714F693B32836F624382B828B6F94B669 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Main::HERO_DIED()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_HERO_DIED_m67B6079B895730005BE31B5CD939805F582A2D3A (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefiniton>::.ctor()
inline void Dictionary_2__ctor_mAFE635D6CE644DE4BD7E97ACBDCB99B8B99B6D04 (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefiniton>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1B531DA34BA64630480D343E3CED94A97A60A4F1 (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * __this, int32_t ___key0, WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A *, int32_t, WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 *, const RuntimeMethod*))Dictionary_2_set_Item_mC449D95AD9E22FF5C5DAF2268E883678E14052D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<BoundsCheck>()
inline BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void Main::DelayedRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_DelayedRestart_m2C4C5097C58D67EBDD729D438FFAA729BD170B80 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefiniton>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m60796F649E215157E02DBD13E87BB216A5C4FC90 (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefiniton>::get_Item(!0)
inline WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * Dictionary_2_get_Item_m2FC43F0CCCBF0FC317F2CCB66291AC0A6F86CD95 (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * (*) (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared)(__this, ___key0, method);
}
// System.Void WeaponDefiniton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponDefiniton__ctor_m7C7315E86F8507C1DCAFEA568F280D390199F974 (WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * __this, const RuntimeMethod* method);
// System.Void PowerUp::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_SetType_m4847921EA85FFAC6796AE2CB1CB7390BE037CBB6 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, int32_t ___wt0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * Component_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mCC9FD2C0BE9B8D38A7FAA28AD8C4228AC43D4860 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.TextMesh::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextMesh_get_color_m81016B82BB08E4CBEDF00DBC2AEF0DBD5894EC4F (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Projectile::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_SetType_m32BB6CA91A050055F0C86C95842E7399B8DCA21C (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, int32_t ___eType0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* GameObject_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mDFDC7E58FE89016C2A8E421AEA268944FC0F1FD6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<Hero>()
inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * Component_GetComponentInParent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m212124AC969855A2FDF0FE263ADCA8C3ADE7F78D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void Hero/WeaponFireDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate__ctor_m7506E5E14D9E271DA8D18269D463FE9F6A509692 (WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Hero::add_fireEvent(Hero/WeaponFireDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_add_fireEvent_mD62DD708EF0EDC6770D1232F69F3B40FE242AD29 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// Projectile Weapon::MakeProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * Weapon_MakeProjectile_m90D20A949E30BBADA3FFD2E801FEA07BC2A22876 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// System.Void Projectile::set_vel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_set_vel_m654B91F9E43276D1EC3DDF0B220179BAAC3B3CB5 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Void Projectile::set_type(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_set_type_mFFBF2E8A00734A669CCE1CFD15D19A9779945452 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void BlinkColorOnHit::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_Awake_m4512318431761FF9DAC507EB8DDB3478BD64EA62 (BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA274BF0E0A0D3E20AB2B341B8CC8A4DCD8489FC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// bndCheck = GetComponentInParent<BoundsCheck>();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0;
		L_0 = Component_GetComponentInParent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA274BF0E0A0D3E20AB2B341B8CC8A4DCD8489FC3(__this, /*hidden argument*/Component_GetComponentInParent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA274BF0E0A0D3E20AB2B341B8CC8A4DCD8489FC3_RuntimeMethod_var);
		__this->set_bndCheck_11(L_0);
		// materials = Utils.GetAllMaterials(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_2;
		L_2 = Utils_GetAllMaterials_mA6AD63A3CF7E36D048CCBD5C168044F0425837A6(L_1, /*hidden argument*/NULL);
		__this->set_materials_9(L_2);
		// originalColors = new Color[materials.Length];
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_3 = __this->get_materials_9();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		__this->set_originalColors_10(L_4);
		// for (int i = 0; i < materials.Length; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_0034:
	{
		// originalColors[i] = materials[i].color;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5 = __this->get_originalColors_10();
		int32_t L_6 = V_0;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_7 = __this->get_materials_9();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_10, /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_11);
		// for (int i = 0; i < materials.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0051:
	{
		// for (int i = 0; i < materials.Length; i++)
		int32_t L_13 = V_0;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_14 = __this->get_materials_9();
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_Update_mC4C1D1C76FDFD82B5A413AC47A2E22709EB86152 (BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * __this, const RuntimeMethod* method)
{
	{
		// if (showingColor && Time.time > blinkCompleteTime) RevertColors();
		bool L_0 = __this->get_showingColor_6();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_blinkCompleteTime_7();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		// if (showingColor && Time.time > blinkCompleteTime) RevertColors();
		BlinkColorOnHit_RevertColors_m65A6D267782DD6F98C4A9D5651FAB10297046969(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_OnCollisionEnter_m7CCDBF95298BC90DCCB3A822D6FF4A8AB236604B (BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ignoreOnCollisionEnter) return;
		bool L_0 = __this->get_ignoreOnCollisionEnter_8();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (ignoreOnCollisionEnter) return;
		return;
	}

IL_0009:
	{
		// Projectile p = coll.gameObject.GetComponent<Projectile>();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_1 = ___coll0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_1, /*hidden argument*/NULL);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_3;
		L_3 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_2, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		// if( p != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// if (bndCheck != null && !bndCheck.isOnScreen)
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_5 = __this->get_bndCheck_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_7 = __this->get_bndCheck_11();
		bool L_8;
		L_8 = BoundsCheck_get_isOnScreen_mAF327EF1D7240238DA69485C4862A8202A4963E3(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		// return;
		return;
	}

IL_0038:
	{
		// SetColors();
		BlinkColorOnHit_SetColors_mFE5BD0F2EC3E1D768C8BF0B610EC274578877226(__this, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::SetColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_SetColors_mFE5BD0F2EC3E1D768C8BF0B610EC274578877226 (BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Material m in materials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get_materials_9();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		// foreach (Material m in materials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// m.color = blinkColor;
		IL2CPP_RUNTIME_CLASS_INIT(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ((BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_StaticFields*)il2cpp_codegen_static_fields_for(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var))->get_blinkColor_5();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001c:
	{
		// foreach (Material m in materials)
		int32_t L_7 = V_1;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// showingColor = true;
		__this->set_showingColor_6((bool)1);
		// blinkCompleteTime = Time.time + blinkDuration;
		float L_9;
		L_9 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var);
		float L_10 = ((BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_StaticFields*)il2cpp_codegen_static_fields_for(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var))->get_blinkDuration_4();
		__this->set_blinkCompleteTime_7(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::RevertColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_RevertColors_m65A6D267782DD6F98C4A9D5651FAB10297046969 (BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for ( int i=0; i <materials.Length; i++)
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		// materials[i].color = originalColors[i];
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get_materials_9();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = __this->get_originalColors_10();
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_3, L_7, /*hidden argument*/NULL);
		// for ( int i=0; i <materials.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0021:
	{
		// for ( int i=0; i <materials.Length; i++)
		int32_t L_9 = V_0;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_10 = __this->get_materials_9();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// showingColor = false;
		__this->set_showingColor_6((bool)0);
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit__ctor_mCE509CBA605A58CE99005DC0F51743014E0D218A (BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlinkColorOnHit::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit__cctor_m270999EF765751D5F4D9F42AABB82C74286F5CBD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float blinkDuration = 0.1f;
		((BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_StaticFields*)il2cpp_codegen_static_fields_for(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var))->set_blinkDuration_4((0.100000001f));
		// private static Color blinkColor = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		((BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_StaticFields*)il2cpp_codegen_static_fields_for(BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_il2cpp_TypeInfo_var))->set_blinkColor_5(L_0);
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
// System.Void BoundsCheck::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck_Awake_mE708AF54D7ACA6FFE4CECC4EB47F28693C825763 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method)
{
	{
		// camHeight = Camera.main.orthographicSize;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_1;
		L_1 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_0, /*hidden argument*/NULL);
		__this->set_camHeight_8(L_1);
		// camWidth = camHeight * Camera.main.aspect;
		float L_2 = __this->get_camHeight_8();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_4;
		L_4 = Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987(L_3, /*hidden argument*/NULL);
		__this->set_camWidth_7(((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)));
		// }
		return;
	}
}
// System.Void BoundsCheck::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck_LateUpdate_m70B5C0858C146920A99BC04E4A1C28359B606F72 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// screenLocs = eScreenLocs.onScreen;
		__this->set_screenLocs_6(0);
		// if (pos.x > camWidth - radius)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_camWidth_7();
		float L_5 = __this->get_radius_4();
		if ((!(((float)L_3) > ((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5))))))
		{
			goto IL_004a;
		}
	}
	{
		// pos.x = camWidth - radius;
		float L_6 = __this->get_camWidth_7();
		float L_7 = __this->get_radius_4();
		(&V_0)->set_x_2(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		// screenLocs |= eScreenLocs.offRight;
		int32_t L_8 = __this->get_screenLocs_6();
		__this->set_screenLocs_6(((int32_t)((int32_t)L_8|(int32_t)1)));
	}

IL_004a:
	{
		// if (pos.x < -camWidth + radius)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_x_2();
		float L_11 = __this->get_camWidth_7();
		float L_12 = __this->get_radius_4();
		if ((!(((float)L_10) < ((float)((float)il2cpp_codegen_add((float)((-L_11)), (float)L_12))))))
		{
			goto IL_0083;
		}
	}
	{
		// pos.x = -camWidth + radius;
		float L_13 = __this->get_camWidth_7();
		float L_14 = __this->get_radius_4();
		(&V_0)->set_x_2(((float)il2cpp_codegen_add((float)((-L_13)), (float)L_14)));
		// screenLocs |= eScreenLocs.offLeft;
		int32_t L_15 = __this->get_screenLocs_6();
		__this->set_screenLocs_6(((int32_t)((int32_t)L_15|(int32_t)2)));
	}

IL_0083:
	{
		// if (pos.y > camHeight - radius)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		float L_17 = L_16.get_y_3();
		float L_18 = __this->get_camHeight_8();
		float L_19 = __this->get_radius_4();
		if ((!(((float)L_17) > ((float)((float)il2cpp_codegen_subtract((float)L_18, (float)L_19))))))
		{
			goto IL_00ba;
		}
	}
	{
		// pos.y = camHeight - radius;
		float L_20 = __this->get_camHeight_8();
		float L_21 = __this->get_radius_4();
		(&V_0)->set_y_3(((float)il2cpp_codegen_subtract((float)L_20, (float)L_21)));
		// screenLocs |= eScreenLocs.offUp;
		int32_t L_22 = __this->get_screenLocs_6();
		__this->set_screenLocs_6(((int32_t)((int32_t)L_22|(int32_t)4)));
	}

IL_00ba:
	{
		// if (pos.y < -camHeight + radius)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		float L_24 = L_23.get_y_3();
		float L_25 = __this->get_camHeight_8();
		float L_26 = __this->get_radius_4();
		if ((!(((float)L_24) < ((float)((float)il2cpp_codegen_add((float)((-L_25)), (float)L_26))))))
		{
			goto IL_00f3;
		}
	}
	{
		// pos.y = -camHeight + radius;
		float L_27 = __this->get_camHeight_8();
		float L_28 = __this->get_radius_4();
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)((-L_27)), (float)L_28)));
		// screenLocs |= eScreenLocs.offDown;
		int32_t L_29 = __this->get_screenLocs_6();
		__this->set_screenLocs_6(((int32_t)((int32_t)L_29|(int32_t)8)));
	}

IL_00f3:
	{
		// if (keepOnScreen && !isOnScreen)
		bool L_30 = __this->get_keepOnScreen_5();
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		bool L_31;
		L_31 = BoundsCheck_get_isOnScreen_mAF327EF1D7240238DA69485C4862A8202A4963E3(__this, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0116;
		}
	}
	{
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_33, /*hidden argument*/NULL);
		// screenLocs = eScreenLocs.onScreen;
		__this->set_screenLocs_6(0);
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Boolean BoundsCheck::get_isOnScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsCheck_get_isOnScreen_mAF327EF1D7240238DA69485C4862A8202A4963E3 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method)
{
	{
		// get { return screenLocs == eScreenLocs.onScreen; }
		int32_t L_0 = __this->get_screenLocs_6();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean BoundsCheck::LocIs(BoundsCheck/eScreenLocs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsCheck_LocIs_mE5EA251874C8939F3A97420CF5238072788D21FD (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, int32_t ___testLoc0, const RuntimeMethod* method)
{
	{
		// if ((screenLocs & testLoc) == testLoc) return true;
		int32_t L_0 = __this->get_screenLocs_6();
		int32_t L_1 = ___testLoc0;
		int32_t L_2 = ___testLoc0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((uint32_t)L_2))))
		{
			goto IL_000d;
		}
	}
	{
		// if ((screenLocs & testLoc) == testLoc) return true;
		return (bool)1;
	}

IL_000d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void BoundsCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck__ctor_m286F2F4FAC28BCA6A4F487B0F4512E6CCE728E74 (BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * __this, const RuntimeMethod* method)
{
	{
		// public float radius = 1f;
		__this->set_radius_4((1.0f));
		// public bool keepOnScreen = true;
		__this->set_keepOnScreen_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mF268033197059561A4A0BC3E5F6B83B50D29C861 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025(__this, /*hidden argument*/Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		__this->set_bndCheck_10(L_0);
		// }
		return;
	}
}
// UnityEngine.Vector3 Enemy::get_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// return (this.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Enemy::set_pos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// this.transform.position = value;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Move();
		VirtActionInvoker0::Invoke(4 /* System.Void Enemy::Move() */, __this);
		// if ( bndCheck.LocIs( BoundsCheck.eScreenLocs.offDown)) {
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0 = __this->get_bndCheck_10();
		bool L_1;
		L_1 = BoundsCheck_LocIs_mE5EA251874C8939F3A97420CF5238072788D21FD(L_0, 8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Enemy::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Move_mC861E510D8BD0AC6E1839F87C83349466763F3CA (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempPos = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// tempPos.y -= speed * Time.deltaTime;
		float* L_1 = (&V_0)->get_address_of_y_3();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->get_speed_4();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		// pos = tempPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter_mE8D80BA64A59FF9208672564BF6E8414505C9E35 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6050880675B7CD06D38D2E5E336DCA6E5C6270);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * V_1 = NULL;
	{
		// GameObject otherGO = coll.gameObject;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___coll0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Projectile p = otherGO.GetComponent<Projectile>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_3;
		L_3 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_2, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		V_1 = L_3;
		// if (p != null)
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0075;
		}
	}
	{
		// if (bndCheck.isOnScreen)
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_6 = __this->get_bndCheck_10();
		bool L_7;
		L_7 = BoundsCheck_get_isOnScreen_mAF327EF1D7240238DA69485C4862A8202A4963E3(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// health -= Main.GET_WEAPON_DEFINITION(p.type).damageOnHit;
		float L_8 = __this->get_health_6();
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_9 = V_1;
		int32_t L_10;
		L_10 = Projectile_get_type_mAD4B8DD9702FA3B2783BA479A21B3682C4A65351_inline(L_9, /*hidden argument*/NULL);
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_11;
		L_11 = Main_GET_WEAPON_DEFINITION_m31DC6911CEDF3B333455D2139C8081F2A2C0B055(L_10, /*hidden argument*/NULL);
		float L_12 = L_11->get_damageOnHit_6();
		__this->set_health_6(((float)il2cpp_codegen_subtract((float)L_8, (float)L_12)));
		// if (health <= 0)
		float L_13 = __this->get_health_6();
		if ((!(((float)L_13) <= ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// if (!calledShipDestroyed)
		bool L_14 = __this->get_calledShipDestroyed_9();
		if (L_14)
		{
			goto IL_0063;
		}
	}
	{
		// Main.SHIP_DESTROYED(this);
		Main_SHIP_DESTROYED_mB6BE0A10561F7299DBDD2B501E08BD64D2D9748D(__this, /*hidden argument*/NULL);
		// calledShipDestroyed = true;
		__this->set_calledShipDestroyed_9((bool)1);
	}

IL_0063:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_15, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// Destroy(otherGO);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0075:
	{
		// print("Enemy hit by non-ProjectileHero: " + otherGO.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		String_t* L_18;
		L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0C6050880675B7CD06D38D2E5E336DCA6E5C6270, L_18, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 10f;
		__this->set_speed_4((10.0f));
		// public float fireRate = 0.3f;
		__this->set_fireRate_5((0.300000012f));
		// public float health = 10;
		__this->set_health_6((10.0f));
		// public int score = 100;
		__this->set_score_7(((int32_t)100));
		// public float powerUpDropChance = 1f;
		__this->set_powerUpDropChance_8((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyShield::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_Start_mD0BA1517B7541728CA19750CCBF1785F86838F1A (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_m193A372E2ABDE25F0D67A5CB7E88EF8072F9B20B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_mA81CE7A0E08DD9C375AC2A6D7B2912CE716F9C7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * V_0 = NULL;
	{
		// blinker = GetComponent<BlinkColorOnHit>();
		BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * L_0;
		L_0 = Component_GetComponent_TisBlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_m193A372E2ABDE25F0D67A5CB7E88EF8072F9B20B(__this, /*hidden argument*/Component_GetComponent_TisBlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17_m193A372E2ABDE25F0D67A5CB7E88EF8072F9B20B_RuntimeMethod_var);
		__this->set_blinker_6(L_0);
		// blinker.ignoreOnCollisionEnter = true;
		BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * L_1 = __this->get_blinker_6();
		L_1->set_ignoreOnCollisionEnter_8((bool)1);
		// if (transform.parent == null) return;                              
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// if (transform.parent == null) return;                              
		return;
	}

IL_002c:
	{
		// EnemyShield shieldParent = transform.parent.GetComponent<EnemyShield>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_7;
		L_7 = Component_GetComponent_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_mA81CE7A0E08DD9C375AC2A6D7B2912CE716F9C7B(L_6, /*hidden argument*/Component_GetComponent_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_mA81CE7A0E08DD9C375AC2A6D7B2912CE716F9C7B_RuntimeMethod_var);
		V_0 = L_7;
		// if (shieldParent != null)
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// shieldParent.AddProtector(this);
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_10 = V_0;
		EnemyShield_AddProtector_m240EC1E84995B1E8C50E9F697A30784712C6D483(L_10, __this, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EnemyShield::AddProtector(EnemyShield)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_AddProtector_m240EC1E84995B1E8C50E9F697A30784712C6D483 (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * ___shieldChild0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m92B786AA87215C7924E3C681AF9AA0E5A0988FC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protectors.Add(shieldChild);
		List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * L_0 = __this->get_protectors_5();
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_1 = ___shieldChild0;
		List_1_Add_m92B786AA87215C7924E3C681AF9AA0E5A0988FC8(L_0, L_1, /*hidden argument*/List_1_Add_m92B786AA87215C7924E3C681AF9AA0E5A0988FC8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean EnemyShield::get_isActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyShield_get_isActive_mA78BE59E2C8FCB518A60F4CE65370C11EF14F50A (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, const RuntimeMethod* method)
{
	{
		// get { return gameObject.activeInHierarchy; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void EnemyShield::set_isActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_set_isActive_m014F1C6629D5C75D311FF8BB006A20C189B65445 (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set { gameObject.SetActive(value); }                         
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_1 = ___value0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// private set { gameObject.SetActive(value); }                         
		return;
	}
}
// System.Single EnemyShield::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyShield_TakeDamage_m06A979E0E91F337B5DE160866AB7DDB446DC9E45 (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, float ___dmg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5B551C03D839CF2CF10123949CA8D775C0794B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD3C382FE9B18BAE7CE4FC4F33ECED438FB72453_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BC8F19F1B9AAC9854FC8E4E1DB03CDF5BBAFB7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5B8F2A185A0C01C797C4861AC0666B2580F07984_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501  V_0;
	memset((&V_0), 0, sizeof(V_0));
	EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * V_1 = NULL;
	float V_2 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (EnemyShield es in protectors)
		List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * L_0 = __this->get_protectors_5();
		Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501  L_1;
		L_1 = List_1_GetEnumerator_m5B8F2A185A0C01C797C4861AC0666B2580F07984(L_0, /*hidden argument*/List_1_GetEnumerator_m5B8F2A185A0C01C797C4861AC0666B2580F07984_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_000e:
		{
			// foreach (EnemyShield es in protectors)
			EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_2;
			L_2 = Enumerator_get_Current_m1BC8F19F1B9AAC9854FC8E4E1DB03CDF5BBAFB7F_inline((Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1BC8F19F1B9AAC9854FC8E4E1DB03CDF5BBAFB7F_RuntimeMethod_var);
			V_1 = L_2;
			// if (es.isActive)
			EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_3 = V_1;
			bool L_4;
			L_4 = EnemyShield_get_isActive_mA78BE59E2C8FCB518A60F4CE65370C11EF14F50A(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_001e:
		{
			// dmg = es.TakeDamage(dmg);
			EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_5 = V_1;
			float L_6 = ___dmg0;
			float L_7;
			L_7 = EnemyShield_TakeDamage_m06A979E0E91F337B5DE160866AB7DDB446DC9E45(L_5, L_6, /*hidden argument*/NULL);
			___dmg0 = L_7;
			// if (dmg == 0) return 0;
			float L_8 = ___dmg0;
			if ((!(((float)L_8) == ((float)(0.0f)))))
			{
				goto IL_0037;
			}
		}

IL_002f:
		{
			// if (dmg == 0) return 0;
			V_2 = (0.0f);
			IL2CPP_LEAVE(0x8B, FINALLY_0042);
		}

IL_0037:
		{
			// foreach (EnemyShield es in protectors)
			bool L_9;
			L_9 = Enumerator_MoveNext_mFD3C382FE9B18BAE7CE4FC4F33ECED438FB72453((Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFD3C382FE9B18BAE7CE4FC4F33ECED438FB72453_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5B551C03D839CF2CF10123949CA8D775C0794B96((Enumerator_t65AC1900F8276B3A2B93ED7769E2EC6AE3105501 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m5B551C03D839CF2CF10123949CA8D775C0794B96_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// blinker.SetColors(); 
		BlinkColorOnHit_tD909152850FC04D73C1D416809F1BFA7827B3F17 * L_10 = __this->get_blinker_6();
		BlinkColorOnHit_SetColors_mFE5BD0F2EC3E1D768C8BF0B610EC274578877226(L_10, /*hidden argument*/NULL);
		// health -= dmg;
		float L_11 = __this->get_health_4();
		float L_12 = ___dmg0;
		__this->set_health_4(((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)));
		// if (health <= 0)
		float L_13 = __this->get_health_4();
		if ((!(((float)L_13) <= ((float)(0.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		// isActive = false;
		EnemyShield_set_isActive_m014F1C6629D5C75D311FF8BB006A20C189B65445(__this, (bool)0, /*hidden argument*/NULL);
		// return -health;                                                  
		float L_14 = __this->get_health_4();
		return ((-L_14));
	}

IL_0085:
	{
		// return 0;                                                            
		return (0.0f);
	}

IL_008b:
	{
		// }
		float L_15 = V_2;
		return L_15;
	}
}
// System.Void EnemyShield::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield__ctor_mC6FE83F51566A6967FF8F53F80CE326CE86B5688 (EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m19A15296BE3B2B2B8C721F7F9183521CB97E0995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float health = 10;
		__this->set_health_4((10.0f));
		// private List<EnemyShield> protectors = new List<EnemyShield>();
		List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 * L_0 = (List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4 *)il2cpp_codegen_object_new(List_1_t297560A6577D6DE96B32F7AB54960BAC5C1D1BF4_il2cpp_TypeInfo_var);
		List_1__ctor_m19A15296BE3B2B2B8C721F7F9183521CB97E0995(L_0, /*hidden argument*/List_1__ctor_m19A15296BE3B2B2B8C721F7F9183521CB97E0995_RuntimeMethod_var);
		__this->set_protectors_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_0__ctor_m25AE31E2C549E1B71669D75BF9C652086096DB00 (Enemy_0_t7E930B323B9A06D71F977D195D032B6B192832F7 * __this, const RuntimeMethod* method)
{
	{
		Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734(__this, /*hidden argument*/NULL);
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
// System.Void Enemy_1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_1_Start_m4A56EA4466EF505B513C663B5C415436BA96B762 (Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD * __this, const RuntimeMethod* method)
{
	{
		// x0 = pos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		__this->set_x0_14(L_1);
		// birthTime = Time.time;
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_birthTime_15(L_2);
		// }
		return;
	}
}
// System.Void Enemy_1::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_1_Move_m2018914959D367703165B31E65D79C0D2C64D969 (Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 tempPos = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// float age = Time.time - birthTime;
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_birthTime_15();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2));
		// float theta = Mathf.PI * 2 * age / waveFrequency;
		float L_3 = V_1;
		float L_4 = __this->get_waveFrequency_11();
		// float sin = Mathf.Sin(theta);
		float L_5;
		L_5 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_3))/(float)L_4)));
		V_2 = L_5;
		// tempPos.x = x0 + waveWidth * sin;
		float L_6 = __this->get_x0_14();
		float L_7 = __this->get_waveWidth_12();
		float L_8 = V_2;
		(&V_0)->set_x_2(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))));
		// pos = tempPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6(__this, L_9, /*hidden argument*/NULL);
		// Vector3 rot = new Vector3(0, sin * waveRotY, 0);
		float L_10 = V_2;
		float L_11 = __this->get_waveRotY_13();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), (0.0f), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (0.0f), /*hidden argument*/NULL);
		// this.transform.rotation = Quaternion.Euler(rot);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_13, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_14, /*hidden argument*/NULL);
		// base.Move();
		Enemy_Move_mC861E510D8BD0AC6E1839F87C83349466763F3CA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_1__ctor_mB1A174AF24C7A1D4EBDD930A67069CDC95BD4153 (Enemy_1_tC91F622F50C8C2D1D9D0A79A981EC99901F52ECD * __this, const RuntimeMethod* method)
{
	{
		// public float waveFrequency = 2;
		__this->set_waveFrequency_11((2.0f));
		// public float waveWidth = 4;
		__this->set_waveWidth_12((4.0f));
		// public float waveRotY = 45;
		__this->set_waveRotY_13((45.0f));
		Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734(__this, /*hidden argument*/NULL);
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
// System.Void Enemy_2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_2_Start_m1482417CB40A125E7DBFC17045EA8FAD28EDB0C8 (Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505 * __this, const RuntimeMethod* method)
{
	{
		// p0 = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_p0_14(L_0);
		// p0.x = -bndCheck.camWidth - bndCheck.radius;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_p0_14();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_2 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_3 = L_2->get_camWidth_7();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_4 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_5 = L_4->get_radius_4();
		L_1->set_x_2(((float)il2cpp_codegen_subtract((float)((-L_3)), (float)L_5)));
		// p0.y = Random.Range(-bndCheck.camHeight, bndCheck.camHeight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_p0_14();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_7 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_8 = L_7->get_camHeight_8();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_9 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_10 = L_9->get_camHeight_8();
		float L_11;
		L_11 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_8)), L_10, /*hidden argument*/NULL);
		L_6->set_y_3(L_11);
		// p1 = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_p1_15(L_12);
		// p1.x = bndCheck.camWidth + bndCheck.radius;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_p1_15();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_14 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_15 = L_14->get_camWidth_7();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_16 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_17 = L_16->get_radius_4();
		L_13->set_x_2(((float)il2cpp_codegen_add((float)L_15, (float)L_17)));
		// p1.y = Random.Range(-bndCheck.camHeight, bndCheck.camHeight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_p1_15();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_19 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_20 = L_19->get_camHeight_8();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_21 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_22 = L_21->get_camHeight_8();
		float L_23;
		L_23 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_20)), L_22, /*hidden argument*/NULL);
		L_18->set_y_3(L_23);
		// if (Random.value > 0.5f)
		float L_24;
		L_24 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		if ((!(((float)L_24) > ((float)(0.5f)))))
		{
			goto IL_00dd;
		}
	}
	{
		// p0.x *= -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_p0_14();
		float* L_26 = L_25->get_address_of_x_2();
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		*((float*)L_27) = (float)((float)il2cpp_codegen_multiply((float)L_28, (float)(-1.0f)));
		// p1.x *= -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_p1_15();
		float* L_30 = L_29->get_address_of_x_2();
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		*((float*)L_31) = (float)((float)il2cpp_codegen_multiply((float)L_32, (float)(-1.0f)));
	}

IL_00dd:
	{
		// birthTime = Time.time;
		float L_33;
		L_33 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_birthTime_16(L_33);
		// transform.position = p0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = __this->get_p0_14();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_34, L_35, /*hidden argument*/NULL);
		// transform.LookAt(p1, Vector3.back);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_p1_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		Transform_LookAt_m6BB4B39BB829A451C2F63215361D27650AA24D8C(L_36, L_37, L_38, /*hidden argument*/NULL);
		// baseRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
		L_40 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_39, /*hidden argument*/NULL);
		__this->set_baseRotation_17(L_40);
		// }
		return;
	}
}
// System.Void Enemy_2::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_2_Move_m56AAAFF23389C3D732F7A9677A6BCAC47FEB0AC2 (Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float u = (Time.time - birthTime) / lifeTime;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_birthTime_16();
		float L_2 = __this->get_lifeTime_11();
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))/(float)L_2));
		// if (u > 1)
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0028:
	{
		// float shipRot = rotCurve.Evaluate(u) * 360;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_rotCurve_13();
		float L_6 = V_0;
		float L_7;
		L_7 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_5, L_6, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_7, (float)(360.0f)));
		// transform.rotation = baseRotation * Quaternion.Euler(-shipRot, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = __this->get_baseRotation_17();
		float L_10 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(((-L_10)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_9, L_11, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_8, L_12, /*hidden argument*/NULL);
		// u = u + sinEcentricity * (Mathf.Sin(u * Mathf.PI * 2));
		float L_13 = V_0;
		float L_14 = __this->get_sinEcentricity_12();
		float L_15 = V_0;
		float L_16;
		L_16 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_15, (float)(3.14159274f))), (float)(2.0f))));
		V_0 = ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_16))));
		// pos = (1 - u) * p0 + u * p1;
		float L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_p0_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_17)), L_18, /*hidden argument*/NULL);
		float L_20 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_p1_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_20, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_22, /*hidden argument*/NULL);
		Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_2__ctor_mCC889069189C5C23E9209B01CDF2D6865F2E14D8 (Enemy_2_t77CC9C4EBA46268F8B646E95391A9A16A0FB7505 * __this, const RuntimeMethod* method)
{
	{
		// public float lifeTime = 10;
		__this->set_lifeTime_11((10.0f));
		// public float sinEcentricity = 0.6f;
		__this->set_sinEcentricity_12((0.600000024f));
		Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734(__this, /*hidden argument*/NULL);
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
// System.Void Enemy_3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_3_Start_mA2A38C63E49E8D40ACCEA10D8D0CC5ED93B42886 (Enemy_3_t26420F93F5593F1FAFA319CD276CA6BC131C3AC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// points = new Vector3[3];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_points_12(L_0);
		// points[0] = pos;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = __this->get_points_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD(__this, /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2);
		// float xMin = -bndCheck.camWidth + bndCheck.radius;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_3 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_4 = L_3->get_camWidth_7();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_5 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_6 = L_5->get_radius_4();
		V_0 = ((float)il2cpp_codegen_add((float)((-L_4)), (float)L_6));
		// float xMax = bndCheck.camWidth - bndCheck.radius;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_7 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_8 = L_7->get_camWidth_7();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_9 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_10 = L_9->get_radius_4();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_8, (float)L_10));
		// points[1] = Vector3.zero;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = __this->get_points_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12);
		// points[1].x = Random.Range(xMin, xMax);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = __this->get_points_12();
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_14, L_15, /*hidden argument*/NULL);
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->set_x_2(L_16);
		// points[1].y = -bndCheck.camHeight * Random.Range(2.75f, 2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = __this->get_points_12();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_18 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_19 = L_18->get_camHeight_8();
		float L_20;
		L_20 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((2.75f), (2.0f), /*hidden argument*/NULL);
		((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->set_y_3(((float)il2cpp_codegen_multiply((float)((-L_19)), (float)L_20)));
		// points[2] = Vector3.zero;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = __this->get_points_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_22);
		// points[2].y = pos.y;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = __this->get_points_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD(__this, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->set_y_3(L_25);
		// points[2].x = Random.Range(xMin, xMax);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = __this->get_points_12();
		float L_27 = V_0;
		float L_28 = V_1;
		float L_29;
		L_29 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_27, L_28, /*hidden argument*/NULL);
		((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->set_x_2(L_29);
		// birthTime = Time.time;
		float L_30;
		L_30 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_birthTime_13(L_30);
		// }
		return;
	}
}
// System.Void Enemy_3::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_3_Move_m23C12AB27AB23DB132BEEEACEE53D00BDBA922DE (Enemy_3_t26420F93F5593F1FAFA319CD276CA6BC131C3AC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float u = (Time.time - birthTime) / lifeTime;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_birthTime_13();
		float L_2 = __this->get_lifeTime_11();
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))/(float)L_2));
		// if (u > 1)
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0028:
	{
		// transform.rotation = Quaternion.Euler(u * 180, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_6 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(((float)il2cpp_codegen_multiply((float)L_6, (float)(180.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_5, L_7, /*hidden argument*/NULL);
		// u = u - 0.1f * Mathf.Sin(u * Mathf.PI * 2);
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10;
		L_10 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_9, (float)(3.14159274f))), (float)(2.0f))));
		V_0 = ((float)il2cpp_codegen_subtract((float)L_8, (float)((float)il2cpp_codegen_multiply((float)(0.100000001f), (float)L_10))));
		// p01 = (1 - u) * points[0] + u * points[1];
		float L_11 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = __this->get_points_12();
		int32_t L_13 = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_11)), L_14, /*hidden argument*/NULL);
		float L_16 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = __this->get_points_12();
		int32_t L_18 = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_16, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		// p12 = (1 - u) * points[1] + u * points[2];
		float L_22 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = __this->get_points_12();
		int32_t L_24 = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_22)), L_25, /*hidden argument*/NULL);
		float L_27 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = __this->get_points_12();
		int32_t L_29 = 2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_27, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		// pos = (1 - u) * p01 + u * p12;
		float L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_33)), L_34, /*hidden argument*/NULL);
		float L_36 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_36, L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_35, L_38, /*hidden argument*/NULL);
		Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6(__this, L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_3__ctor_m9C4638505B76CDCC94BBC3F5D7D5B016D3EB8561 (Enemy_3_t26420F93F5593F1FAFA319CD276CA6BC131C3AC9 * __this, const RuntimeMethod* method)
{
	{
		// public float lifeTime = 5;
		__this->set_lifeTime_11((5.0f));
		Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734(__this, /*hidden argument*/NULL);
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
// System.Void Enemy_4::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_Start_m0F60CA20A03B1FE4FF836B38D319D1009A4495EC (Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_mA81CE7A0E08DD9C375AC2A6D7B2912CE716F9C7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_m3B5E5605A1DC8D5F5E6F414BB0829A947C05C35E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// allShields = GetComponentsInChildren<EnemyShield>();
		EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* L_0;
		L_0 = Component_GetComponentsInChildren_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_m3B5E5605A1DC8D5F5E6F414BB0829A947C05C35E(__this, /*hidden argument*/Component_GetComponentsInChildren_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_m3B5E5605A1DC8D5F5E6F414BB0829A947C05C35E_RuntimeMethod_var);
		__this->set_allShields_12(L_0);
		// thisShield = GetComponent<EnemyShield>();
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_1;
		L_1 = Component_GetComponent_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_mA81CE7A0E08DD9C375AC2A6D7B2912CE716F9C7B(__this, /*hidden argument*/Component_GetComponent_TisEnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7_mA81CE7A0E08DD9C375AC2A6D7B2912CE716F9C7B_RuntimeMethod_var);
		__this->set_thisShield_13(L_1);
		// p0 = p1 = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Enemy_get_pos_m4D1015F337B0ED26674F1143404393B6AB1997CD(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2;
		V_0 = L_3;
		__this->set_p1_15(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		__this->set_p0_14(L_4);
		// InitMovement();
		Enemy_4_InitMovement_m00E529E26F49C09F712C6426F6824CBF8D5DC4FC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_4::InitMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_InitMovement_m00E529E26F49C09F712C6426F6824CBF8D5DC4FC (Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// p0 = p1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_p1_15();
		__this->set_p0_14(L_0);
		// float widMinRad = bndCheck.camWidth - bndCheck.radius;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_1 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_2 = L_1->get_camWidth_7();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_3 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_4 = L_3->get_radius_4();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_4));
		// float hgtMinRad = bndCheck.camHeight - bndCheck.radius;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_5 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_6 = L_5->get_camHeight_8();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_7 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		float L_8 = L_7->get_radius_4();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_6, (float)L_8));
		// p1.x = Random.Range(-widMinRad, widMinRad);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_p1_15();
		float L_10 = V_0;
		float L_11 = V_0;
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_10)), L_11, /*hidden argument*/NULL);
		L_9->set_x_2(L_12);
		// p1.y = Random.Range(-hgtMinRad, hgtMinRad);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_p1_15();
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_14)), L_15, /*hidden argument*/NULL);
		L_13->set_y_3(L_16);
		// if( p0.x * p1.x > 0 && p0.y * p1.y > 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_p0_14();
		float L_18 = L_17->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_p1_15();
		float L_20 = L_19->get_x_2();
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_20))) > ((float)(0.0f)))))
		{
			goto IL_00ea;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_p0_14();
		float L_22 = L_21->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_p1_15();
		float L_24 = L_23->get_y_3();
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_24))) > ((float)(0.0f)))))
		{
			goto IL_00ea;
		}
	}
	{
		// if ( Mathf.Abs(p0.x) > Mathf.Abs(p0.y) )
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_p0_14();
		float L_26 = L_25->get_x_2();
		float L_27;
		L_27 = fabsf(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_p0_14();
		float L_29 = L_28->get_y_3();
		float L_30;
		L_30 = fabsf(L_29);
		if ((!(((float)L_27) > ((float)L_30))))
		{
			goto IL_00d6;
		}
	}
	{
		// p1.x *= -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_31 = __this->get_address_of_p1_15();
		float* L_32 = L_31->get_address_of_x_2();
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		*((float*)L_33) = (float)((float)il2cpp_codegen_multiply((float)L_34, (float)(-1.0f)));
		// } else
		goto IL_00ea;
	}

IL_00d6:
	{
		// p1.y *= -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = __this->get_address_of_p1_15();
		float* L_36 = L_35->get_address_of_y_3();
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		*((float*)L_37) = (float)((float)il2cpp_codegen_multiply((float)L_38, (float)(-1.0f)));
	}

IL_00ea:
	{
		// timeStart = Time.time;
		float L_39;
		L_39 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_timeStart_16(L_39);
		// }
		return;
	}
}
// System.Void Enemy_4::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_Move_m4F787248C1BAD7C23AFD09C9FDFF841AF0671F8A (Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float u = (Time.time - timeStart) / duration;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_timeStart_16();
		float L_2 = __this->get_duration_11();
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))/(float)L_2));
		// if (u >= 1)
		float L_3 = V_0;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// InitMovement();
		Enemy_4_InitMovement_m00E529E26F49C09F712C6426F6824CBF8D5DC4FC(__this, /*hidden argument*/NULL);
		// u = 0;
		V_0 = (0.0f);
	}

IL_0028:
	{
		// u = u - 0.15f * Mathf.Sin(u * 2 * Mathf.PI);
		float L_4 = V_0;
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)(2.0f))), (float)(3.14159274f))));
		V_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)((float)il2cpp_codegen_multiply((float)(0.150000006f), (float)L_6))));
		// pos = (1 - u) * p0 + u * p1;
		float L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_p0_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)), L_8, /*hidden argument*/NULL);
		float L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_p1_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_10, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_12, /*hidden argument*/NULL);
		Enemy_set_pos_mAFC1B8C8B290C02649A49441D385DC8F1EC34FD6(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy_4::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_OnCollisionEnter_mFDCE69B0A018F6AC93659C6235EC31528909F9E6 (Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral771BC1BF8AE3E5A597E32F43362350C984ED2BF2);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	float V_3 = 0.0f;
	bool V_4 = false;
	EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* V_5 = NULL;
	int32_t V_6 = 0;
	EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * V_7 = NULL;
	{
		// GameObject otherGO = coll.gameObject;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___coll0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Projectile p = otherGO.GetComponent<Projectile>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_3;
		L_3 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_2, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		V_1 = L_3;
		// if (p != null)
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00f8;
		}
	}
	{
		// Destroy(otherGO);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// if( bndCheck.isOnScreen)
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_7 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_bndCheck_10();
		bool L_8;
		L_8 = BoundsCheck_get_isOnScreen_mAF327EF1D7240238DA69485C4862A8202A4963E3(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_010d;
		}
	}
	{
		// GameObject hitGO = coll.contacts[0].thisCollider.gameObject;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_9 = ___coll0;
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_10;
		L_10 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_9, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_11;
		L_11 = ContactPoint_get_thisCollider_m20A0AF6CA56285BBF606A16B02CE74334F1F3498((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// if (hitGO == otherGO )
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		// hitGO = coll.contacts[0].otherCollider.gameObject;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_16 = ___coll0;
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_17;
		L_17 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_16, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_18;
		L_18 = ContactPoint_get_otherCollider_m2D1D314EB151931720FE75C99D3462BD7EBE17FE((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
	}

IL_0067:
	{
		// float dmg = Main.GET_WEAPON_DEFINITION(p.type).damageOnHit;
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_20 = V_1;
		int32_t L_21;
		L_21 = Projectile_get_type_mAD4B8DD9702FA3B2783BA479A21B3682C4A65351_inline(L_20, /*hidden argument*/NULL);
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_22;
		L_22 = Main_GET_WEAPON_DEFINITION_m31DC6911CEDF3B333455D2139C8081F2A2C0B055(L_21, /*hidden argument*/NULL);
		float L_23 = L_22->get_damageOnHit_6();
		V_3 = L_23;
		// bool shieldFound = false;
		V_4 = (bool)0;
		// foreach ( EnemyShield es in allShields)
		EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* L_24 = __this->get_allShields_12();
		V_5 = L_24;
		V_6 = 0;
		goto IL_00b0;
	}

IL_0088:
	{
		// foreach ( EnemyShield es in allShields)
		EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* L_25 = V_5;
		int32_t L_26 = V_6;
		int32_t L_27 = L_26;
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		// if (es.gameObject == hitGO)
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_29 = V_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00aa;
		}
	}
	{
		// es.TakeDamage(dmg);
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_33 = V_7;
		float L_34 = V_3;
		float L_35;
		L_35 = EnemyShield_TakeDamage_m06A979E0E91F337B5DE160866AB7DDB446DC9E45(L_33, L_34, /*hidden argument*/NULL);
		// shieldFound = true;
		V_4 = (bool)1;
	}

IL_00aa:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00b0:
	{
		// foreach ( EnemyShield es in allShields)
		int32_t L_37 = V_6;
		EnemyShieldU5BU5D_tE7D8459FB04DB597B30F2D96ADAD17B5AD8F2BA4* L_38 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0088;
		}
	}
	{
		// if (!shieldFound) thisShield.TakeDamage(dmg);
		bool L_39 = V_4;
		if (L_39)
		{
			goto IL_00c9;
		}
	}
	{
		// if (!shieldFound) thisShield.TakeDamage(dmg);
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_40 = __this->get_thisShield_13();
		float L_41 = V_3;
		float L_42;
		L_42 = EnemyShield_TakeDamage_m06A979E0E91F337B5DE160866AB7DDB446DC9E45(L_40, L_41, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		// if (thisShield.isActive) return;
		EnemyShield_tF9D5A7A9E2E023B6A409333A2A0061A910419BA7 * L_43 = __this->get_thisShield_13();
		bool L_44;
		L_44 = EnemyShield_get_isActive_mA78BE59E2C8FCB518A60F4CE65370C11EF14F50A(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00d7;
		}
	}
	{
		// if (thisShield.isActive) return;
		return;
	}

IL_00d7:
	{
		// if ( !calledShipDestroyed )
		bool L_45 = ((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->get_calledShipDestroyed_9();
		if (L_45)
		{
			goto IL_00ec;
		}
	}
	{
		// Main.SHIP_DESTROYED(this);
		Main_SHIP_DESTROYED_mB6BE0A10561F7299DBDD2B501E08BD64D2D9748D(__this, /*hidden argument*/NULL);
		// calledShipDestroyed = true;
		((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *)__this)->set_calledShipDestroyed_9((bool)1);
	}

IL_00ec:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_46, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_00f8:
	{
		// print("Enemy_4 hti by non-ProjectileHero: " + otherGO.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = V_0;
		String_t* L_48;
		L_48 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_47, /*hidden argument*/NULL);
		String_t* L_49;
		L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral771BC1BF8AE3E5A597E32F43362350C984ED2BF2, L_48, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_49, /*hidden argument*/NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Enemy_4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4__ctor_mD1C1DB0D6B9E583FB483F654A02C11323B0E845E (Enemy_4_tD293E1B062244FE43CD564136225D03D34A77EEC * __this, const RuntimeMethod* method)
{
	{
		// public float duration = 4;
		__this->set_duration_11((4.0f));
		Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734(__this, /*hidden argument*/NULL);
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
// Hero Hero::get_S()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * Hero_get_S_mC9440D468AC7C8FE5EAFCDC897500EF358080BAA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Hero S { get; private set; }
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0 = ((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->get_U3CSU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Hero::set_S(Hero)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_set_S_m6EE899243000B9537759047DB079E3CBF4B6243D (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Hero S { get; private set; }
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0 = ___value0;
		((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->set_U3CSU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Hero::add_fireEvent(Hero/WeaponFireDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_add_fireEvent_mD62DD708EF0EDC6770D1232F69F3B40FE242AD29 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * V_0 = NULL;
	WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * V_1 = NULL;
	WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * V_2 = NULL;
	{
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_0 = __this->get_fireEvent_13();
		V_0 = L_0;
	}

IL_0007:
	{
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_1 = V_0;
		V_1 = L_1;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_2 = V_1;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *)CastclassSealed((RuntimeObject*)L_4, WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F_il2cpp_TypeInfo_var));
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F ** L_5 = __this->get_address_of_fireEvent_13();
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_6 = V_2;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_7 = V_1;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_8;
		L_8 = InterlockedCompareExchangeImpl<WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *>((WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F **)L_5, L_6, L_7);
		V_0 = L_8;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_9 = V_0;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_10 = V_1;
		if ((!(((RuntimeObject*)(WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *)L_9) == ((RuntimeObject*)(WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Hero::remove_fireEvent(Hero/WeaponFireDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_remove_fireEvent_m0DA76C7ED43D3129120F1BC65B1A6CF61C220F03 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * V_0 = NULL;
	WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * V_1 = NULL;
	WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * V_2 = NULL;
	{
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_0 = __this->get_fireEvent_13();
		V_0 = L_0;
	}

IL_0007:
	{
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_1 = V_0;
		V_1 = L_1;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_2 = V_1;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *)CastclassSealed((RuntimeObject*)L_4, WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F_il2cpp_TypeInfo_var));
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F ** L_5 = __this->get_address_of_fireEvent_13();
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_6 = V_2;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_7 = V_1;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_8;
		L_8 = InterlockedCompareExchangeImpl<WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *>((WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F **)L_5, L_6, L_7);
		V_0 = L_8;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_9 = V_0;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_10 = V_1;
		if ((!(((RuntimeObject*)(WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *)L_9) == ((RuntimeObject*)(WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Hero::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Awake_m405A38D0D7A8E8DCB9CF0EF6B66E0FD933FD10EB (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29CEB8D6B752EBF557CF20FE107268DB744122EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (S == null)
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0;
		L_0 = Hero_get_S_mC9440D468AC7C8FE5EAFCDC897500EF358080BAA_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// S = this;
		Hero_set_S_m6EE899243000B9537759047DB079E3CBF4B6243D_inline(__this, /*hidden argument*/NULL);
		// } else
		goto IL_001f;
	}

IL_0015:
	{
		// Debug.LogError("Hero.Awake() - Attempted to assign second Hero.S!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral29CEB8D6B752EBF557CF20FE107268DB744122EC, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// ClearWeapons();
		Hero_ClearWeapons_mED5DA3745F04DE3EFC2937851B637AD53CB3322D(__this, /*hidden argument*/NULL);
		// weapons[0].SetType(eWeaponType.blaster);
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_2 = __this->get_weapons_10();
		int32_t L_3 = 0;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Weapon_SetType_m20D761BEA04D3962614600682413624373B5F307(L_4, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hero::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Update_mF0AC6E2FE7210FABB9F1129E79669EA4D60E869E (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float hAxis = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// float vAxis = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// pos.x += hAxis * speed * Time.deltaTime;
		float* L_4 = (&V_2)->get_address_of_x_2();
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = V_0;
		float L_8 = __this->get_speed_5();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_5) = (float)((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)L_9))));
		// pos.y += vAxis * speed * Time.deltaTime;
		float* L_10 = (&V_2)->get_address_of_y_3();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = V_1;
		float L_14 = __this->get_speed_5();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), (float)L_15))));
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_17, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.Euler(vAxis * pitchMult, hAxis * rollMult, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_19 = V_1;
		float L_20 = __this->get_pitchMult_7();
		float L_21 = V_0;
		float L_22 = __this->get_rollMult_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_18, L_23, /*hidden argument*/NULL);
		// if (Input.GetAxis("Jump") == 1 && fireEvent != null)
		float L_24;
		L_24 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if ((!(((float)L_24) == ((float)(1.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_25 = __this->get_fireEvent_13();
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		// fireEvent();
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_26 = __this->get_fireEvent_13();
		WeaponFireDelegate_Invoke_m4786FFED151774920D42C5828765B8D768BD1CAD(L_26, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void Hero::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_OnTriggerEnter_mF31ECA8E79FB5756ADB1A43A8F404B92838B14EC (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3_m1A06A64B0432A22A4ACAA8316F437ECC4126186A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130677921A63B2961EACE0ACC9043588114E8E5A);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		// Transform rootT = other.gameObject.transform.root;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_root_mDEB1F3B4DB26B32CEED6DFFF734F85C79C4DDA91(L_2, /*hidden argument*/NULL);
		// GameObject go = rootT.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (go == lastTriggerGo) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_lastTriggerGo_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0025;
		}
	}
	{
		// if (go == lastTriggerGo) return;
		return;
	}

IL_0025:
	{
		// lastTriggerGo = go;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		__this->set_lastTriggerGo_12(L_8);
		// Enemy enemy = go.GetComponent<Enemy>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_10;
		L_10 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_9, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// PowerUp pUp = go.GetComponent<PowerUp>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_12;
		L_12 = GameObject_GetComponent_TisPowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3_m1A06A64B0432A22A4ACAA8316F437ECC4126186A(L_11, /*hidden argument*/GameObject_GetComponent_TisPowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3_m1A06A64B0432A22A4ACAA8316F437ECC4126186A_RuntimeMethod_var);
		V_1 = L_12;
		// if (enemy != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// shieldLevel--;
		float L_14;
		L_14 = Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline(__this, /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = V_2;
		Hero_set_shieldLevel_m59FBADCE365627014EEBC071604B14AA46602CFE(__this, ((float)il2cpp_codegen_subtract((float)L_15, (float)(1.0f))), /*hidden argument*/NULL);
		// Destroy(go);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005c:
	{
		// else if (pUp != null)
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		// AbsorbPowerUp(pUp);
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_19 = V_1;
		Hero_AbsorbPowerUp_mD7067D1DA7C47CEA9F86F34A72F280B36977FD79(__this, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006d:
	{
		// Debug.LogError("Shield trigger hit by non-Enemy: " + go.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_0;
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral130677921A63B2961EACE0ACC9043588114E8E5A, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hero::AbsorbPowerUp(PowerUp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_AbsorbPowerUp_mD7067D1DA7C47CEA9F86F34A72F280B36977FD79 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * ___pUp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E3ED2C85AF7E7F774BC301B5713520A6B79A647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&eWeaponType_t243F2E2FF6EE36D0BE40AC158422AEFA21A0D969_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * V_1 = NULL;
	{
		// Debug.Log("Absorbed PowerUp: " + pUp.type);
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_0 = ___pUp0;
		int32_t* L_1 = L_0->get_address_of_type_8();
		RuntimeObject * L_2 = Box(eWeaponType_t243F2E2FF6EE36D0BE40AC158422AEFA21A0D969_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		*L_1 = *(int32_t*)UnBox(L_2);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7E3ED2C85AF7E7F774BC301B5713520A6B79A647, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// switch(pUp.type)
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_5 = ___pUp0;
		int32_t L_6 = L_5->get_type_8();
		if ((!(((uint32_t)L_6) == ((uint32_t)6))))
		{
			goto IL_003f;
		}
	}
	{
		// shieldLevel++;
		float L_7;
		L_7 = Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = V_0;
		Hero_set_shieldLevel_m59FBADCE365627014EEBC071604B14AA46602CFE(__this, ((float)il2cpp_codegen_add((float)L_8, (float)(1.0f))), /*hidden argument*/NULL);
		// break;
		goto IL_008b;
	}

IL_003f:
	{
		// if (pUp.type == weapons[0].type)
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_9 = ___pUp0;
		int32_t L_10 = L_9->get_type_8();
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_11 = __this->get_weapons_10();
		int32_t L_12 = 0;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14;
		L_14 = Weapon_get_type_mFA87812D70CD400999988138D2F1CA2475A2226A_inline(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		// Weapon w = GetEmptyWeaponSlot();
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_15;
		L_15 = Hero_GetEmptyWeaponSlot_m114D6B0CF37EF5CEEDA984A0AC2DBF06E06F36DC(__this, /*hidden argument*/NULL);
		V_1 = L_15;
		// if (w != null)
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008b;
		}
	}
	{
		// w.SetType(pUp.type);
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_18 = V_1;
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_19 = ___pUp0;
		int32_t L_20 = L_19->get_type_8();
		Weapon_SetType_m20D761BEA04D3962614600682413624373B5F307(L_18, L_20, /*hidden argument*/NULL);
		// } else
		goto IL_008b;
	}

IL_0072:
	{
		// ClearWeapons();
		Hero_ClearWeapons_mED5DA3745F04DE3EFC2937851B637AD53CB3322D(__this, /*hidden argument*/NULL);
		// weapons[0].SetType(pUp.type);
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_21 = __this->get_weapons_10();
		int32_t L_22 = 0;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_24 = ___pUp0;
		int32_t L_25 = L_24->get_type_8();
		Weapon_SetType_m20D761BEA04D3962614600682413624373B5F307(L_23, L_25, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// pUp.AbsorbedBy(this.gameObject);
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_26 = ___pUp0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		PowerUp_AbsorbedBy_m96D2B29714F693B32836F624382B828B6F94B669(L_26, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Hero::get_shieldLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// get { return (_shieldLevel); }
		float L_0 = __this->get__shieldLevel_11();
		return L_0;
	}
}
// System.Void Hero::set_shieldLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_set_shieldLevel_m59FBADCE365627014EEBC071604B14AA46602CFE (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shieldLevel = Mathf.Min(value, 4);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_0, (4.0f), /*hidden argument*/NULL);
		__this->set__shieldLevel_11(L_1);
		// if (value < 0)
		float L_2 = ___value0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// Main.HERO_DIED();
		Main_HERO_DIED_m67B6079B895730005BE31B5CD939805F582A2D3A(/*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// Weapon Hero::GetEmptyWeaponSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * Hero_GetEmptyWeaponSlot_m114D6B0CF37EF5CEEDA984A0AC2DBF06E06F36DC (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i =0; i< weapons.Length; i++)
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		// if (weapons[i].type == eWeaponType.none)
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_0 = __this->get_weapons_10();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4;
		L_4 = Weapon_get_type_mFA87812D70CD400999988138D2F1CA2475A2226A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return (weapons[i]);
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_5 = __this->get_weapons_10();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}

IL_001c:
	{
		// for (int i =0; i< weapons.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0020:
	{
		// for (int i =0; i< weapons.Length; i++)
		int32_t L_10 = V_0;
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_11 = __this->get_weapons_10();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// return (null);
		return (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 *)NULL;
	}
}
// System.Void Hero::ClearWeapons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_ClearWeapons_mED5DA3745F04DE3EFC2937851B637AD53CB3322D (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Weapon w in weapons)
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_0 = __this->get_weapons_10();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (Weapon w in weapons)
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// w.SetType(eWeaponType.none);
		Weapon_SetType_m20D761BEA04D3962614600682413624373B5F307(L_4, 0, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0018:
	{
		// foreach (Weapon w in weapons)
		int32_t L_6 = V_1;
		WeaponU5BU5D_tD07583A88CF0604ABF19E689FB1D83128EB78A3F* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Hero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero__ctor_m3CB5FC229DA961BA568F2F9E95769A890C3C819C (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 30;
		__this->set_speed_5((30.0f));
		// public float rollMult = -45;
		__this->set_rollMult_6((-45.0f));
		// public float pitchMult = 30;
		__this->set_pitchMult_7((30.0f));
		// public float projectileSpeed = 40;
		__this->set_projectileSpeed_9((40.0f));
		// public float _shieldLevel = 1;
		__this->set__shieldLevel_11((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Main::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Awake_mA7DE5347ABC4BF35513FF991824C737E07BFC578 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAFE635D6CE644DE4BD7E97ACBDCB99B8B99B6D04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B531DA34BA64630480D343E3CED94A97A60A4F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9);
		s_Il2CppMethodInitialized = true;
	}
	WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6* V_0 = NULL;
	int32_t V_1 = 0;
	WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * V_2 = NULL;
	{
		// S = this;
		((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->set_S_4(__this);
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025(__this, /*hidden argument*/Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		__this->set_bndCheck_13(L_0);
		// Invoke(nameof(SpawnEnemy), 1f / enemySpawnPerSecond);
		float L_1 = __this->get_enemySpawnPerSecond_7();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, ((float)((float)(1.0f)/(float)L_1)), /*hidden argument*/NULL);
		// WEAP_DICT = new Dictionary<eWeaponType, WeaponDefiniton>();
		Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * L_2 = (Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A *)il2cpp_codegen_object_new(Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAFE635D6CE644DE4BD7E97ACBDCB99B8B99B6D04(L_2, /*hidden argument*/Dictionary_2__ctor_mAFE635D6CE644DE4BD7E97ACBDCB99B8B99B6D04_RuntimeMethod_var);
		((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->set_WEAP_DICT_5(L_2);
		// foreach (WeaponDefiniton def in weaponDefinitions)
		WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6* L_3 = __this->get_weaponDefinitions_10();
		V_0 = L_3;
		V_1 = 0;
		goto IL_0057;
	}

IL_003e:
	{
		// foreach (WeaponDefiniton def in weaponDefinitions)
		WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// WEAP_DICT[def.type] = def;
		Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * L_8 = ((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->get_WEAP_DICT_5();
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_9 = V_2;
		int32_t L_10 = L_9->get_type_0();
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_11 = V_2;
		Dictionary_2_set_Item_m1B531DA34BA64630480D343E3CED94A97A60A4F1(L_8, L_10, L_11, /*hidden argument*/Dictionary_2_set_Item_m1B531DA34BA64630480D343E3CED94A97A60A4F1_RuntimeMethod_var);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0057:
	{
		// foreach (WeaponDefiniton def in weaponDefinitions)
		int32_t L_13 = V_1;
		WeaponDefinitonU5BU5D_t6D0F1F5F99CC6857C2D3749837BF2D59377ADCF6* L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Main::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_SpawnEnemy_m5718949FBF19BF4EFC01737CCA9B7F3D76C40CE3 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// int ndx = Random.Range(0, prefabEnemies.Length);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_prefabEnemies_6();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// GameObject go = Instantiate<GameObject>(prefabEnemies[ndx]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_prefabEnemies_6();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_6;
		// float enemyInset = enemyInsetDefault;
		float L_7 = __this->get_enemyInsetDefault_8();
		V_2 = L_7;
		// if(go.GetComponent<BoundsCheck>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_1;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_9;
		L_9 = GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0(L_8, /*hidden argument*/GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0_RuntimeMethod_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		// enemyInset = Mathf.Abs(go.GetComponent<BoundsCheck>().radius);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_1;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_12;
		L_12 = GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0(L_11, /*hidden argument*/GameObject_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mA73D98BBAA2D2A89A8D38D45C5F9F420D3F879E0_RuntimeMethod_var);
		float L_13 = L_12->get_radius_4();
		float L_14;
		L_14 = fabsf(L_13);
		V_2 = L_14;
	}

IL_0043:
	{
		// Vector3 pos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_3 = L_15;
		// float xMin = -bndCheck.camWidth + enemyInset;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_16 = __this->get_bndCheck_13();
		float L_17 = L_16->get_camWidth_7();
		float L_18 = V_2;
		V_4 = ((float)il2cpp_codegen_add((float)((-L_17)), (float)L_18));
		// float xMax = bndCheck.camHeight - enemyInset;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_19 = __this->get_bndCheck_13();
		float L_20 = L_19->get_camHeight_8();
		float L_21 = V_2;
		V_5 = ((float)il2cpp_codegen_subtract((float)L_20, (float)L_21));
		// pos.x = Random.Range(xMin, xMax);
		float L_22 = V_4;
		float L_23 = V_5;
		float L_24;
		L_24 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_22, L_23, /*hidden argument*/NULL);
		(&V_3)->set_x_2(L_24);
		// pos.y = bndCheck.camHeight + enemyInset;
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_25 = __this->get_bndCheck_13();
		float L_26 = L_25->get_camHeight_8();
		float L_27 = V_2;
		(&V_3)->set_y_3(((float)il2cpp_codegen_add((float)L_26, (float)L_27)));
		// go.transform.position = pos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_3;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_30, /*hidden argument*/NULL);
		// Invoke(nameof(SpawnEnemy), 1f / enemySpawnPerSecond);
		float L_31 = __this->get_enemySpawnPerSecond_7();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, ((float)((float)(1.0f)/(float)L_31)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Main::DelayedRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_DelayedRestart_m2C4C5097C58D67EBDD729D438FFAA729BD170B80 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838E394589B5693706685699154545855BEAE0B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke( nameof(Restart), gameRestartDelay);
		float L_0 = __this->get_gameRestartDelay_9();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral838E394589B5693706685699154545855BEAE0B2, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Main::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Restart_m48223670A964D5999515750BA331BD8130BED2E8 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DEE32A19B0EDA3465103E5384AF09CAB214D69D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("__Scene_0");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral8DEE32A19B0EDA3465103E5384AF09CAB214D69D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Main::HERO_DIED()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_HERO_DIED_m67B6079B895730005BE31B5CD939805F582A2D3A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// S.DelayedRestart();
		Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * L_0 = ((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->get_S_4();
		Main_DelayedRestart_m2C4C5097C58D67EBDD729D438FFAA729BD170B80(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// WeaponDefiniton Main::GET_WEAPON_DEFINITION(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * Main_GET_WEAPON_DEFINITION_m31DC6911CEDF3B333455D2139C8081F2A2C0B055 (int32_t ___wt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m60796F649E215157E02DBD13E87BB216A5C4FC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m2FC43F0CCCBF0FC317F2CCB66291AC0A6F86CD95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WEAP_DICT.ContainsKey(wt))
		Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * L_0 = ((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->get_WEAP_DICT_5();
		int32_t L_1 = ___wt0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m60796F649E215157E02DBD13E87BB216A5C4FC90(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m60796F649E215157E02DBD13E87BB216A5C4FC90_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return (WEAP_DICT[wt]);
		Dictionary_2_t340260A71E1B73411A55E75593310650D24DD67A * L_3 = ((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->get_WEAP_DICT_5();
		int32_t L_4 = ___wt0;
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_5;
		L_5 = Dictionary_2_get_Item_m2FC43F0CCCBF0FC317F2CCB66291AC0A6F86CD95(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m2FC43F0CCCBF0FC317F2CCB66291AC0A6F86CD95_RuntimeMethod_var);
		return L_5;
	}

IL_0019:
	{
		// return (new WeaponDefiniton());
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_6 = (WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 *)il2cpp_codegen_object_new(WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5_il2cpp_TypeInfo_var);
		WeaponDefiniton__ctor_m7C7315E86F8507C1DCAFEA568F280D390199F974(L_6, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Main::SHIP_DESTROYED(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_SHIP_DESTROYED_mB6BE0A10561F7299DBDD2B501E08BD64D2D9748D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3_m1A06A64B0432A22A4ACAA8316F437ECC4126186A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (Random.value <= e.powerUpDropChance)
		float L_0;
		L_0 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = ___e0;
		float L_2 = L_1->get_powerUpDropChance_8();
		if ((!(((float)L_0) <= ((float)L_2))))
		{
			goto IL_005d;
		}
	}
	{
		// int ndx = Random.Range(0, S.powerUpFrequency.Length);
		Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * L_3 = ((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->get_S_4();
		eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892* L_4 = L_3->get_powerUpFrequency_12();
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		V_0 = L_5;
		// eWeaponType pUpType = S.powerUpFrequency[ndx];
		Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * L_6 = ((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->get_S_4();
		eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892* L_7 = L_6->get_powerUpFrequency_12();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		int32_t L_10 = (int32_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// GameObject go = Instantiate<GameObject>(S.prefabPowerUp);
		Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * L_11 = ((Main_tDB418C89D33CD2699713F36E95C4373C8892C046_StaticFields*)il2cpp_codegen_static_fields_for(Main_tDB418C89D33CD2699713F36E95C4373C8892C046_il2cpp_TypeInfo_var))->get_S_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_prefabPowerUp_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// PowerUp pUp = go.GetComponent<PowerUp>();
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_14;
		L_14 = GameObject_GetComponent_TisPowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3_m1A06A64B0432A22A4ACAA8316F437ECC4126186A(L_13, /*hidden argument*/GameObject_GetComponent_TisPowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3_m1A06A64B0432A22A4ACAA8316F437ECC4126186A_RuntimeMethod_var);
		// pUp.SetType(pUpType);
		PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * L_15 = L_14;
		int32_t L_16 = V_1;
		PowerUp_SetType_m4847921EA85FFAC6796AE2CB1CB7390BE037CBB6(L_15, L_16, /*hidden argument*/NULL);
		// pUp.transform.position = e.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_18 = ___e0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_20, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main__ctor_m4FD44116A25A9FD4D598F84273F9E9E69B9B7302 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float enemySpawnPerSecond = 0.5f;
		__this->set_enemySpawnPerSecond_7((0.5f));
		// public float enemyInsetDefault = 1.5f;
		__this->set_enemyInsetDefault_8((1.5f));
		// public float gameRestartDelay = 2;
		__this->set_gameRestartDelay_9((2.0f));
		// public eWeaponType[] powerUpFrequency = new eWeaponType[] { eWeaponType.blaster, eWeaponType.blaster,
		//                                                             eWeaponType.spread, eWeaponType.shield };
		eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892* L_0 = (eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892*)(eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892*)SZArrayNew(eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892_il2cpp_TypeInfo_var, (uint32_t)4);
		eWeaponTypeU5BU5D_t37BD215BEBBC3BB2C78292B7CA728A9B28EF7892* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_powerUpFrequency_12(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Parallax::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Start_m7C7DC681755C4BBB7BF918CC67A2A5F2360F5DF2 (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	{
		// panelHt = panels[0].localScale.y;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_panels_5();
		int32_t L_1 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		__this->set_panelHt_8(L_4);
		// depth = panels[0].position.z;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_panels_5();
		int32_t L_6 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		__this->set_depth_9(L_9);
		// panels[0].position = new Vector3(0, 0, depth);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = __this->get_panels_5();
		int32_t L_11 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = __this->get_depth_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
		// panels[1].position = new Vector3(0, panelHt, depth);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_15 = __this->get_panels_5();
		int32_t L_16 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = __this->get_panelHt_8();
		float L_19 = __this->get_depth_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), (0.0f), L_18, L_19, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Parallax::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Update_m208D10754A83F3949A0DE958EBB01C4B63BC337B (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float tY, tX = 0;
		V_1 = (0.0f);
		// tY = Time.time * scrollSpeed % panelHt + (panelHt * 0.5f);
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_scrollSpeed_6();
		float L_2 = __this->get_panelHt_8();
		float L_3 = __this->get_panelHt_8();
		V_0 = ((float)il2cpp_codegen_add((float)(fmodf(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), L_2)), (float)((float)il2cpp_codegen_multiply((float)L_3, (float)(0.5f)))));
		// if (playerTrans != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_playerTrans_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		// tX = -playerTrans.transform.position.x * motionMult;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_playerTrans_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_motionMult_7();
		V_1 = ((float)il2cpp_codegen_multiply((float)((-L_9)), (float)L_10));
	}

IL_0053:
	{
		// panels[0].position = new Vector3(tX, tY, depth);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = __this->get_panels_5();
		int32_t L_12 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		float L_14 = V_1;
		float L_15 = V_0;
		float L_16 = __this->get_depth_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_17, /*hidden argument*/NULL);
		// if (tY >= 0)
		float L_18 = V_0;
		if ((!(((float)L_18) >= ((float)(0.0f)))))
		{
			goto IL_0097;
		}
	}
	{
		// panels[1].position = new Vector3(tX, tY - panelHt, depth);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_19 = __this->get_panels_5();
		int32_t L_20 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = V_1;
		float L_23 = V_0;
		float L_24 = __this->get_panelHt_8();
		float L_25 = __this->get_depth_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), L_22, ((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)), L_25, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_26, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_0097:
	{
		// panels[1].position = new Vector3(tX, tY + panelHt, depth);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_27 = __this->get_panels_5();
		int32_t L_28 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		float L_30 = V_1;
		float L_31 = V_0;
		float L_32 = __this->get_panelHt_8();
		float L_33 = __this->get_depth_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), L_30, ((float)il2cpp_codegen_add((float)L_31, (float)L_32)), L_33, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Parallax::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax__ctor_m0690485E7F8E13945AF42671FF1C937CB60D4B36 (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	{
		// public float scrollSpeed = -30f;
		__this->set_scrollSpeed_6((-30.0f));
		// public float motionMult = 0.25f;
		__this->set_motionMult_7((0.25f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PowerUp::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_Awake_mDA5188009386EBA63AD50940727761705ED2F617 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mCC9FD2C0BE9B8D38A7FAA28AD8C4228AC43D4860_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cube = transform.GetChild(0).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		__this->set_cube_9(L_2);
		// letter = GetComponent<TextMesh>();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_3;
		L_3 = Component_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mCC9FD2C0BE9B8D38A7FAA28AD8C4228AC43D4860(__this, /*hidden argument*/Component_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mCC9FD2C0BE9B8D38A7FAA28AD8C4228AC43D4860_RuntimeMethod_var);
		__this->set_letter_10(L_3);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4;
		L_4 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rigid_13(L_4);
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_5;
		L_5 = Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025(__this, /*hidden argument*/Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		__this->set_bndCheck_14(L_5);
		// cubeMat = cube.GetComponent<Renderer>().material;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_cube_9();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_7;
		L_7 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_6, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8;
		L_8 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_7, /*hidden argument*/NULL);
		__this->set_cubeMat_15(L_8);
		// Vector3 vel = Random.onUnitSphere;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED(/*hidden argument*/NULL);
		V_0 = L_9;
		// vel.z = 0;
		(&V_0)->set_z_4((0.0f));
		// vel.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// vel *= Random.Range(driftMinMax.x, driftMinMax.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_driftMinMax_5();
		float L_12 = L_11->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = __this->get_address_of_driftMinMax_5();
		float L_14 = L_13->get_y_1();
		float L_15;
		L_15 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_12, L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// rigid.velocity = vel;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_17 = __this->get_rigid_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_17, L_18, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_19, L_20, /*hidden argument*/NULL);
		// rotPerSecond = new Vector3(Random.Range(rotMinMax.x, rotMinMax.y),
		//     Random.Range(rotMinMax.x, rotMinMax.y),
		//     Random.Range(rotMinMax.x, rotMinMax.y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of_rotMinMax_4();
		float L_22 = L_21->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_rotMinMax_4();
		float L_24 = L_23->get_y_1();
		float L_25;
		L_25 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_22, L_24, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_rotMinMax_4();
		float L_27 = L_26->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_rotMinMax_4();
		float L_29 = L_28->get_y_1();
		float L_30;
		L_30 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_27, L_29, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_rotMinMax_4();
		float L_32 = L_31->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_rotMinMax_4();
		float L_34 = L_33->get_y_1();
		float L_35;
		L_35 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_32, L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), L_25, L_30, L_35, /*hidden argument*/NULL);
		__this->set_rotPerSecond_11(L_36);
		// birthTime = Time.time;
		float L_37;
		L_37 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_birthTime_12(L_37);
		// }
		return;
	}
}
// System.Void PowerUp::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_Update_mF5784723CD4D3C2A9B29AABB64D1FC5661E326A5 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cube.transform.rotation = Quaternion.Euler(rotPerSecond * Time.time);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cube_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_rotPerSecond_11();
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_4, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_1, L_5, /*hidden argument*/NULL);
		// float u = (Time.time - (birthTime + lifeTime)) / fadeTime;
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_7 = __this->get_birthTime_12();
		float L_8 = __this->get_lifeTime_6();
		float L_9 = __this->get_fadeTime_7();
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_6, (float)((float)il2cpp_codegen_add((float)L_7, (float)L_8))))/(float)L_9));
		// if(u >=1)
		float L_10 = V_0;
		if ((!(((float)L_10) >= ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0054:
	{
		// if(u>0)
		float L_12 = V_0;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		// Color c = cubeMat.color;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_cubeMat_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// c.a = 1f - u;
		float L_15 = V_0;
		(&V_1)->set_a_3(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_15)));
		// cubeMat.color = c;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_cubeMat_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = V_1;
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_16, L_17, /*hidden argument*/NULL);
		// c = letter.color;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_18 = __this->get_letter_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = TextMesh_get_color_m81016B82BB08E4CBEDF00DBC2AEF0DBD5894EC4F(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// c.a = 1f - (u * 0.5f);
		float L_20 = V_0;
		(&V_1)->set_a_3(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_20, (float)(0.5f))))));
		// letter.color = c;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_21 = __this->get_letter_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = V_1;
		TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// if (!bndCheck.isOnScreen)
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_23 = __this->get_bndCheck_14();
		bool L_24;
		L_24 = BoundsCheck_get_isOnScreen_mAF327EF1D7240238DA69485C4862A8202A4963E3(L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00c6;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_25, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void PowerUp::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_SetType_m4847921EA85FFAC6796AE2CB1CB7390BE037CBB6 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, int32_t ___wt0, const RuntimeMethod* method)
{
	WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * V_0 = NULL;
	{
		// WeaponDefiniton def = Main.GET_WEAPON_DEFINITION(wt);
		int32_t L_0 = ___wt0;
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_1;
		L_1 = Main_GET_WEAPON_DEFINITION_m31DC6911CEDF3B333455D2139C8081F2A2C0B055(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// cubeMat.color = def.powerUpColor;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_cubeMat_15();
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_3 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = L_3->get_powerUpColor_2();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_2, L_4, /*hidden argument*/NULL);
		// letter.text = def.letter;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_5 = __this->get_letter_10();
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_6 = V_0;
		String_t* L_7 = L_6->get_letter_1();
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_5, L_7, /*hidden argument*/NULL);
		// type = wt;
		int32_t L_8 = ___wt0;
		__this->set_type_8(L_8);
		// }
		return;
	}
}
// System.Void PowerUp::AbsorbedBy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_AbsorbedBy_m96D2B29714F693B32836F624382B828B6F94B669 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PowerUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp__ctor_mDAF4AED1581D2E6AFD14782F86F935DFDE5E1A87 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 rotMinMax = new Vector2(15, 90);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (15.0f), (90.0f), /*hidden argument*/NULL);
		__this->set_rotMinMax_4(L_0);
		// public Vector2 driftMinMax = new Vector2(.25f, 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (0.25f), (2.0f), /*hidden argument*/NULL);
		__this->set_driftMinMax_5(L_1);
		// public float lifeTime = 10;
		__this->set_lifeTime_6((10.0f));
		// public float fadeTime = 4;
		__this->set_fadeTime_7((4.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// eWeaponType Projectile::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Projectile_get_type_mAD4B8DD9702FA3B2783BA479A21B3682C4A65351 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// get { return (_type); }
		int32_t L_0 = __this->get__type_7();
		return L_0;
	}
}
// System.Void Projectile::set_type(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_set_type_mFFBF2E8A00734A669CCE1CFD15D19A9779945452 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetType(value); }
		int32_t L_0 = ___value0;
		Projectile_SetType_m32BB6CA91A050055F0C86C95842E7399B8DCA21C(__this, L_0, /*hidden argument*/NULL);
		// set { SetType(value); }
		return;
	}
}
// System.Void Projectile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Awake_m4ED9387212020F3D7411C2947E02802536106072 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025(__this, /*hidden argument*/Component_GetComponent_TisBoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE_mB315A5F068A2CE61C696F5715FF04986B36CE025_RuntimeMethod_var);
		__this->set_bndCheck_4(L_0);
		// rend = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		__this->set_rend_5(L_1);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2;
		L_2 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rigid_6(L_2);
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m382C5B499BD4599FE34A04DA3DA0701077C710B2 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bndCheck.LocIs(BoundsCheck.eScreenLocs.offUp))
		BoundsCheck_t4F4AC8554A0272E80ACC121C8CEE14FAA5F3E4CE * L_0 = __this->get_bndCheck_4();
		bool L_1;
		L_1 = BoundsCheck_LocIs_mE5EA251874C8939F3A97420CF5238072788D21FD(L_0, 4, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Projectile::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_SetType_m32BB6CA91A050055F0C86C95842E7399B8DCA21C (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, int32_t ___eType0, const RuntimeMethod* method)
{
	WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * V_0 = NULL;
	{
		// _type = eType;
		int32_t L_0 = ___eType0;
		__this->set__type_7(L_0);
		// WeaponDefiniton def = Main.GET_WEAPON_DEFINITION(_type);
		int32_t L_1 = __this->get__type_7();
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_2;
		L_2 = Main_GET_WEAPON_DEFINITION_m31DC6911CEDF3B333455D2139C8081F2A2C0B055(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// rend.material.color = def.projectileColor;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_3 = __this->get_rend_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_3, /*hidden argument*/NULL);
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_5 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = L_5->get_projectileColor_5();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Projectile::get_vel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Projectile_get_vel_m84E5EDCC4D94460D7A5152025BCCF84B36C32F44 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// get { return rigid.velocity; }
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_rigid_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Projectile::set_vel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_set_vel_m654B91F9E43276D1EC3DDF0B220179BAAC3B3CB5 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set { rigid.velocity = value; }
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_rigid_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_0, L_1, /*hidden argument*/NULL);
		// set { rigid.velocity = value; }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m22DAC83BA9B394316027755FD2ADFCA806EE39BB (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Shield::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield_Start_m891436A89502B5507B90831B349A27CD0B14B0F6 (Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mat = GetComponent<Renderer>().material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set_mat_6(L_1);
		// }
		return;
	}
}
// System.Void Shield::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield_Update_mABB7587845FE89DC26A1ED1EE55E03FC42D60CC8 (Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int currLevel = Mathf.FloorToInt(Hero.S.shieldLevel);
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0;
		L_0 = Hero_get_S_mC9440D468AC7C8FE5EAFCDC897500EF358080BAA_inline(/*hidden argument*/NULL);
		float L_1;
		L_1 = Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (levelShown != currLevel)
		int32_t L_3 = __this->get_levelShown_5();
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		// levelShown = currLevel;
		int32_t L_5 = V_0;
		__this->set_levelShown_5(L_5);
		// mat.mainTextureOffset = new Vector2(0.2f * levelShown, 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_mat_6();
		int32_t L_7 = __this->get_levelShown_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_multiply((float)(0.200000003f), (float)((float)((float)L_7)))), (0.0f), /*hidden argument*/NULL);
		Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// float rZ = -(rotationsPerSecond * Time.time * 360) % 360f;
		float L_9 = __this->get_rotationsPerSecond_4();
		float L_10;
		L_10 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_1 = (fmodf(((-((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), (float)(360.0f))))), (360.0f)));
		// transform.rotation = Quaternion.Euler(0, 0, rZ);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_12 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shield::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield__ctor_m20D0200FAA022FA52FDFB2734B4358A92B27DE63 (Shield_t938DA769F9DED1ACACE524C775A5032C1BD4BD61 * __this, const RuntimeMethod* method)
{
	{
		// public float rotationsPerSecond = 0.1f;
		__this->set_rotationsPerSecond_4((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Material[] Utils::GetAllMaterials(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Utils_GetAllMaterials_mA6AD63A3CF7E36D048CCBD5C168044F0425837A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mDFDC7E58FE89016C2A8E421AEA268944FC0F1FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* V_0 = NULL;
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Renderer[] rends = go.GetComponentsInChildren<Renderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mDFDC7E58FE89016C2A8E421AEA268944FC0F1FD6(L_0, /*hidden argument*/GameObject_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mDFDC7E58FE89016C2A8E421AEA268944FC0F1FD6_RuntimeMethod_var);
		V_0 = L_1;
		// Material[] mats = new Material[rends.Length];
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_2 = V_0;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_3 = (MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)SZArrayNew(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_1 = L_3;
		// for ( int i = 0; i < rends.Length; i++)
		V_2 = 0;
		goto IL_0023;
	}

IL_0014:
	{
		// mats[i] = rends[i].material;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_4 = V_1;
		int32_t L_5 = V_2;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_9, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)L_10);
		// for ( int i = 0; i < rends.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0023:
	{
		// for ( int i = 0; i < rends.Length; i++)
		int32_t L_12 = V_2;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		// return mats;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_14 = V_1;
		return L_14;
	}
}
// System.Void Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_mC41E39AE5559F8129A8C15EFD3E22EF8ACEDCCAE (Utils_tB7E464340F21C3BC9E90CD7C3670828A951C212E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Weapon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Start_m7216819D285B8CDF5DD9E18550E3DF9F1DD76D5A (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m212124AC969855A2FDF0FE263ADCA8C3ADE7F78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weapon_Fire_mD146220100CDE1259C95D090D0147EBE7DFB9A6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FD77B92FAC1A51D73AB558C072339BBC72E5D2);
		s_Il2CppMethodInitialized = true;
	}
	Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * V_0 = NULL;
	{
		// if (PROJECTILE_ANCHOR == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ((Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_il2cpp_TypeInfo_var))->get_PROJECTILE_ANCHOR_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// GameObject go = new GameObject("_ProjectileAnchor");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral15FD77B92FAC1A51D73AB558C072339BBC72E5D2, /*hidden argument*/NULL);
		// PROJECTILE_ANCHOR = go.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		((Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_il2cpp_TypeInfo_var))->set_PROJECTILE_ANCHOR_4(L_3);
	}

IL_0021:
	{
		// shotPointTrans = transform.GetChild(0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_4, 0, /*hidden argument*/NULL);
		__this->set_shotPointTrans_9(L_5);
		// SetType(_type);
		int32_t L_6 = __this->get__type_5();
		Weapon_SetType_m20D761BEA04D3962614600682413624373B5F307(__this, L_6, /*hidden argument*/NULL);
		// Hero hero = GetComponentInParent<Hero>();
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_7;
		L_7 = Component_GetComponentInParent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m212124AC969855A2FDF0FE263ADCA8C3ADE7F78D(__this, /*hidden argument*/Component_GetComponentInParent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m212124AC969855A2FDF0FE263ADCA8C3ADE7F78D_RuntimeMethod_var);
		V_0 = L_7;
		// if (hero != null) hero.fireEvent += Fire;
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// if (hero != null) hero.fireEvent += Fire;
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_10 = V_0;
		WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * L_11 = (WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F *)il2cpp_codegen_object_new(WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F_il2cpp_TypeInfo_var);
		WeaponFireDelegate__ctor_m7506E5E14D9E271DA8D18269D463FE9F6A509692(L_11, __this, (intptr_t)((intptr_t)Weapon_Fire_mD146220100CDE1259C95D090D0147EBE7DFB9A6F_RuntimeMethod_var), /*hidden argument*/NULL);
		Hero_add_fireEvent_mD62DD708EF0EDC6770D1232F69F3B40FE242AD29(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// eWeaponType Weapon::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_get_type_mFA87812D70CD400999988138D2F1CA2475A2226A (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// get { return (_type); }
		int32_t L_0 = __this->get__type_5();
		return L_0;
	}
}
// System.Void Weapon::set_type(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_set_type_m1F82A7FEDB80C8BAC0544B77C1634B216EC80FA3 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetType(value); }
		int32_t L_0 = ___value0;
		Weapon_SetType_m20D761BEA04D3962614600682413624373B5F307(__this, L_0, /*hidden argument*/NULL);
		// set { SetType(value); }
		return;
	}
}
// System.Void Weapon::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_SetType_m20D761BEA04D3962614600682413624373B5F307 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, int32_t ___wt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _type = wt;
		int32_t L_0 = ___wt0;
		__this->set__type_5(L_0);
		// if (type == eWeaponType.none)
		int32_t L_1;
		L_1 = Weapon_get_type_mFA87812D70CD400999988138D2F1CA2475A2226A_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001c:
	{
		// this.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// def = Main.GET_WEAPON_DEFINITION(_type);
		int32_t L_4 = __this->get__type_5();
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_5;
		L_5 = Main_GET_WEAPON_DEFINITION_m31DC6911CEDF3B333455D2139C8081F2A2C0B055(L_4, /*hidden argument*/NULL);
		__this->set_def_6(L_5);
		// if (weaponModel != null) Destroy(weaponModel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_weaponModel_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// if (weaponModel != null) Destroy(weaponModel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_weaponModel_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// weaponModel = Instantiate<GameObject>(def.weaponModelprefab, transform);
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_9 = __this->get_def_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_weaponModelprefab_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_weaponModel_8(L_12);
		// weaponModel.transform.localPosition = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_weaponModel_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_14, L_15, /*hidden argument*/NULL);
		// weaponModel.transform.localScale = Vector3.one;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_weaponModel_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_17, L_18, /*hidden argument*/NULL);
		// nextShotTime = 0;
		__this->set_nextShotTime_7((0.0f));
		// }
		return;
	}
}
// System.Void Weapon::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Fire_mD146220100CDE1259C95D090D0147EBE7DFB9A6F (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (!gameObject.activeInHierarchy) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!gameObject.activeInHierarchy) return;
		return;
	}

IL_000e:
	{
		// if (Time.time < nextShotTime) return;
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_3 = __this->get_nextShotTime_7();
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		// if (Time.time < nextShotTime) return;
		return;
	}

IL_001c:
	{
		// Vector3 vel = Vector3.up * def.velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_5 = __this->get_def_6();
		float L_6 = L_5->get_velocity_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// switch (type)
		int32_t L_8;
		L_8 = Weapon_get_type_mFA87812D70CD400999988138D2F1CA2475A2226A_inline(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_0042:
	{
		// p = MakeProjectile();
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_11;
		L_11 = Weapon_MakeProjectile_m90D20A949E30BBADA3FFD2E801FEA07BC2A22876(__this, /*hidden argument*/NULL);
		// p.vel = vel;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		Projectile_set_vel_m654B91F9E43276D1EC3DDF0B220179BAAC3B3CB5(L_11, L_12, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004f:
	{
		// p = MakeProjectile();
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_13;
		L_13 = Weapon_MakeProjectile_m90D20A949E30BBADA3FFD2E801FEA07BC2A22876(__this, /*hidden argument*/NULL);
		// p.vel = vel;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		Projectile_set_vel_m654B91F9E43276D1EC3DDF0B220179BAAC3B3CB5(L_13, L_14, /*hidden argument*/NULL);
		// p = MakeProjectile();
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_15;
		L_15 = Weapon_MakeProjectile_m90D20A949E30BBADA3FFD2E801FEA07BC2A22876(__this, /*hidden argument*/NULL);
		// p.transform.rotation = Quaternion.AngleAxis(10, Vector3.back);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_16 = L_15;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398((10.0f), L_18, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_17, L_19, /*hidden argument*/NULL);
		// p.vel = p.transform.rotation * vel;
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_20 = L_16;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_22, L_23, /*hidden argument*/NULL);
		Projectile_set_vel_m654B91F9E43276D1EC3DDF0B220179BAAC3B3CB5(L_20, L_24, /*hidden argument*/NULL);
		// p = MakeProjectile();
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_25;
		L_25 = Weapon_MakeProjectile_m90D20A949E30BBADA3FFD2E801FEA07BC2A22876(__this, /*hidden argument*/NULL);
		// p.transform.rotation = Quaternion.AngleAxis(-10, Vector3.back);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_26 = L_25;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398((-10.0f), L_28, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_27, L_29, /*hidden argument*/NULL);
		// p.vel = p.transform.rotation * vel;
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_30 = L_26;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_32, L_33, /*hidden argument*/NULL);
		Projectile_set_vel_m654B91F9E43276D1EC3DDF0B220179BAAC3B3CB5(L_30, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Projectile Weapon::MakeProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * Weapon_MakeProjectile_m90D20A949E30BBADA3FFD2E801FEA07BC2A22876 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// go = Instantiate<GameObject>(def.projectilePrefab, PROJECTILE_ANCHOR);
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_0 = __this->get_def_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_projectilePrefab_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ((Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226_il2cpp_TypeInfo_var))->get_PROJECTILE_ANCHOR_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Projectile p = go.GetComponent<Projectile>();
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_4;
		L_4 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_3, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		// Vector3 pos = shotPointTrans.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_shotPointTrans_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// pos.z = 0;
		(&V_0)->set_z_4((0.0f));
		// p.transform.position = pos;
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_7 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
		// p.type = type;
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_10 = L_7;
		int32_t L_11;
		L_11 = Weapon_get_type_mFA87812D70CD400999988138D2F1CA2475A2226A_inline(__this, /*hidden argument*/NULL);
		Projectile_set_type_mFFBF2E8A00734A669CCE1CFD15D19A9779945452(L_10, L_11, /*hidden argument*/NULL);
		// nextShotTime = Time.time + def.delayBetweenShots;
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * L_13 = __this->get_def_6();
		float L_14 = L_13->get_delayBetweenShots_8();
		__this->set_nextShotTime_7(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// return (p);
		return L_10;
	}
}
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WeaponDefiniton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponDefiniton__ctor_m7C7315E86F8507C1DCAFEA568F280D390199F974 (WeaponDefiniton_t8FA69EF5D5979F66A125BE73C50C51422E5F49C5 * __this, const RuntimeMethod* method)
{
	{
		// public Color powerUpColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_powerUpColor_2(L_0);
		// public Color projectileColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_projectileColor_5(L_1);
		// public float velocity = 20;
		__this->set_velocity_9((20.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F (WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Hero/WeaponFireDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate__ctor_m7506E5E14D9E271DA8D18269D463FE9F6A509692 (WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Hero/WeaponFireDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate_Invoke_m4786FFED151774920D42C5828765B8D768BD1CAD (WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * __this, const RuntimeMethod* method)
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
// System.IAsyncResult Hero/WeaponFireDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeaponFireDelegate_BeginInvoke_m82FAF33BE155F932F26AFBA8A1C25E3908FB94D0 (WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Hero/WeaponFireDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate_EndInvoke_m0FD96C1A50DF44FE8B1E304767B60F6623FE27B2 (WeaponFireDelegate_t4E628E959A25AC1AC3744CE26882B389F339351F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Projectile_get_type_mAD4B8DD9702FA3B2783BA479A21B3682C4A65351_inline (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// get { return (_type); }
		int32_t L_0 = __this->get__type_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * Hero_get_S_mC9440D468AC7C8FE5EAFCDC897500EF358080BAA_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Hero S { get; private set; }
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0 = ((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->get_U3CSU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hero_set_S_m6EE899243000B9537759047DB079E3CBF4B6243D_inline (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Hero S { get; private set; }
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_0 = ___value0;
		((Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_il2cpp_TypeInfo_var))->set_U3CSU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_m24D5C4DBFACC2941B922F03F66FC62D67BB6EAE7_inline (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// get { return (_shieldLevel); }
		float L_0 = __this->get__shieldLevel_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weapon_get_type_mFA87812D70CD400999988138D2F1CA2475A2226A_inline (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// get { return (_type); }
		int32_t L_0 = __this->get__type_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
