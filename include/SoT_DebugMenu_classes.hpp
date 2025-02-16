#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DebugMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DebugMenu.DebugMenuComponent
// 0x0050 (0x0118 - 0x00C8)
class UDebugMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET
	class ADebugMenu*                                  DebugMenuInstance;                                        // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuComponent"));
		return ptr;
	}

};


// Class DebugMenu.DebugMenuEntryGenerator
// 0x0000 (0x0028 - 0x0028)
class UDebugMenuEntryGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuEntryGenerator"));
		return ptr;
	}

};


// Class DebugMenu.DebugMenuDataAsset
// 0x0040 (0x0068 - 0x0028)
class UDebugMenuDataAsset : public UDataAsset
{
public:
	TArray<class UDebugMenuDataAsset*>                 DataAssets;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugMenuDataAssetEntry>            MenuEntires;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugMenuButtonShortcut>            ButtonShortcuts;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<class UDebugMenuEntryGenerator*>            MenuEntryGenerators;                                      // 0x0058(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuDataAsset"));
		return ptr;
	}

};


// Class DebugMenu.DebugMenu
// 0x00B0 (0x0478 - 0x03C8)
class ADebugMenu : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x03C8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenu"));
		return ptr;
	}

};


// Class DebugMenu.DebugMenuComponentMock
// 0x0008 (0x0120 - 0x0118)
class UDebugMenuComponentMock : public UDebugMenuComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuComponentMock"));
		return ptr;
	}

};


// Class DebugMenu.DebugMenuTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UDebugMenuTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DebugMenu.DebugMenuTestFunctions"));
		return ptr;
	}


	static bool IsDebugMenuReady(class UObject* WorldContextObject);
	static bool IsDebugMenuOpen(class UObject* WorldContextObject);
	static bool IsDebugMenuAvailable();
	static struct FKey GetDebugMenuToggleKeyComboBetaKeyboard();
	static struct FKey GetDebugMenuToggleKeyComboAlphaKeyboard();
	static struct FKey GetDebugMenuToggleButtonComboBetaGamepad();
	static struct FKey GetDebugMenuToggleButtonComboAlphaGamepad();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
