﻿// PDA_ItemInfo.cpp

#include "SurvivalGame/Data/PDA_ItemInfo.h"

UPDA_ItemInfo::UPDA_ItemInfo()
	: RegistryKey(NAME_None)
	, ItemID(0)
	, ItemName(FText::FromString("Item Name"))
	, ItemDescription(FText::FromString("Item Description"))
	, bIsStackable(false)
	, MaxStackSize(1)
	, ItemCategory(E_ItemCategory::Miscellaneous)
	, ItemRarity(E_ItemRarity::None)
	, ItemTags()
	, ItemIcon(nullptr)
	, ItemMesh(nullptr)
	, ItemSound(nullptr)
	, ItemParticle(nullptr)
	, MaxDurability(100)
	, DurabilityDecayRate(0.0f)
	, bIsDestroyable(false)
	, bUsesAmmo(false)
	, MaxAmmo(0)
	, bIsConsumable(false)
	, NutritionValue(0)
	, Toxicity(0)
	, EffectOnUse()
	, DecayTime(0.0f)
	, WeightClass(E_WeightClass::Light)
	, bIsFireSource(false)
	, TemperatureEffect(0.0f)
	, WarmthRating(0.0f)
	, bIsFlammable(false)
	, BurnTime(0.0f)
	, SpecialAbility(TEXT(""))
	, ItemValue(0)
	, bIsQuestItem(false)
	, bIsUnique(false)
	, bIsContainer(false)
	, ContainerSize(0)
	, DefaultModifiers()
	, InitialItemState(E_ItemState::Normal)
{
	// Initialize arrays
	DefaultModifiers = TArray<FItemModifier>();
}
