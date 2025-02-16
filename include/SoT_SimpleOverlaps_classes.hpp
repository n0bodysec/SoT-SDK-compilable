#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SimpleOverlaps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SimpleOverlaps.SimpleOverlapCollectionKey
// 0x0000 (0x0028 - 0x0028)
class USimpleOverlapCollectionKey : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SimpleOverlaps.SimpleOverlapCollectionKey"));
		return ptr;
	}

};


// Class SimpleOverlaps.SimpleOverlapComponent
// 0x0008 (0x00D0 - 0x00C8)
class USimpleOverlapComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SimpleOverlaps.SimpleOverlapComponent"));
		return ptr;
	}

};


// Class SimpleOverlaps.SimpleOverlapZone
// 0x00D8 (0x04A0 - 0x03C8)
class ASimpleOverlapZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x03C8(0x00A8) MISSED OFFSET
	struct FScriptMulticastDelegate                    Blueprint_OnStartOverlap;                                 // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Blueprint_OnStopOverlap;                                  // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UBoxComponent*                               CollisionMesh;                                            // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               StartActive;                                              // 0x0498(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0499(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SimpleOverlaps.SimpleOverlapZone"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
