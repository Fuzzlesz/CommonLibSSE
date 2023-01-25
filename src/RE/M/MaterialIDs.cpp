#include "RE/M/MaterialIDs.h"

namespace RE
{
	std::string_view MaterialIDToString(MATERIAL_ID a_materialID) noexcept
    {
        switch (a_materialID) {
        case MATERIAL_ID::kStoneBroken:
            return "StoneBroken";
        case MATERIAL_ID::kBlockBlade1Hand:
            return "BlockBlade1Hand";
        case MATERIAL_ID::kMeat:
            return "Meat";
        case MATERIAL_ID::kCarriageWheel:
            return "CarriageWheel";
        case MATERIAL_ID::kMetalLight:
            return "MetalLight";
        case MATERIAL_ID::kWoodLight:
            return "WoodLight";
        case MATERIAL_ID::kSnow:
            return "Snow";
        case MATERIAL_ID::kGravel:
            return "Gravel";
        case MATERIAL_ID::kChainMetal:
            return "ChainMetal";
        case MATERIAL_ID::kBottle:
            return "Bottle";
        case MATERIAL_ID::kWood:
            return "Wood";
        case MATERIAL_ID::kAsh:
            return "Ash";
        case MATERIAL_ID::kSkin:
            return "Skin";
        case MATERIAL_ID::kBlockBlunt:
            return "BlockBlunt";
        case MATERIAL_ID::kDLC1DeerSkin:
            return "DLC1DeerSkin";
        case MATERIAL_ID::kInsect:
            return "Insect";
        case MATERIAL_ID::kBarrel:
            return "Barrel";
        case MATERIAL_ID::kCeramicMedium:
            return "CeramicMedium";
        case MATERIAL_ID::kBasket:
            return "Basket";
        case MATERIAL_ID::kIce:
            return "Ice";
        case MATERIAL_ID::kGlassStairs:
            return "GlassStairs";
        case MATERIAL_ID::kStoneStairs:
            return "StoneStairs";
        case MATERIAL_ID::kWater:
            return "Water";
        case MATERIAL_ID::kDraugrSkeleton:
            return "DraugrSkeleton";
        case MATERIAL_ID::kBlade1Hand:
            return "Blade1Hand";
        case MATERIAL_ID::kBook:
            return "Book";
        case MATERIAL_ID::kCarpet:
            return "Carpet";
        case MATERIAL_ID::kMetalSolid:
            return "MetalSolid";
        case MATERIAL_ID::kAxe1Hand:
            return "Axe1Hand";
        case MATERIAL_ID::kBlockBlade2Hand:
            return "BlockBlade2Hand";
        case MATERIAL_ID::kOrganicLarge:
            return "OrganicLarge";
        case MATERIAL_ID::kAmulet:
            return "Amulet";
        case MATERIAL_ID::kWoodStairs:
            return "WoodStairs";
        case MATERIAL_ID::kMud:
            return "Mud";
        case MATERIAL_ID::kBoulderSmall:
            return "BoulderSmall";
        case MATERIAL_ID::kSnowStairs:
            return "SnowStairs";
        case MATERIAL_ID::kStoneHeavy:
            return "StoneHeavy";
        case MATERIAL_ID::kDragonSkeleton:
            return "DragonSkeleton";
        case MATERIAL_ID::kTrap:
            return "Trap";
        case MATERIAL_ID::kBowsStaves:
            return "BowsStaves";
        case MATERIAL_ID::kAlduin:
            return "Alduin";
        case MATERIAL_ID::kBlockBowsStaves:
            return "BlockBowsStaves";
        case MATERIAL_ID::kWoodAsStairs:
            return "WoodAsStairs";
        case MATERIAL_ID::kSteelGreatSword:
            return "SteelGreatSword";
        case MATERIAL_ID::kGrass:
            return "Grass";
        case MATERIAL_ID::kBoulderLarge:
            return "BoulderLarge";
        case MATERIAL_ID::kStoneAsStairs:
            return "StoneAsStairs";
        case MATERIAL_ID::kBlade2Hand:
            return "Blade2Hand";
        case MATERIAL_ID::kBottleSmall:
            return "BottleSmall";
        case MATERIAL_ID::kBoneActor:
            return "BoneActor";
        case MATERIAL_ID::kSand:
            return "Sand";
        case MATERIAL_ID::kMetalHeavy:
            return "MetalHeavy";
        case MATERIAL_ID::kDLC1SabreCatPelt:
            return "DLC1SabreCatPelt";
        case MATERIAL_ID::kIceForm:
            return "IceForm";
        case MATERIAL_ID::kDragon:
            return "Dragon";
        case MATERIAL_ID::kBlade1HandSmall:
            return "Blade1HandSmall";
        case MATERIAL_ID::kSkinSmall:
            return "SkinSmall";
        case MATERIAL_ID::kPotsPans:
            return "PotsPans";
        case MATERIAL_ID::kSkinSkeleton:
            return "SkinSkeleton";
        case MATERIAL_ID::kBlunt1Hand:
            return "Blunt1Hand";
        case MATERIAL_ID::kStoneStairsBroken:
            return "StoneStairsBroken";
        case MATERIAL_ID::kSkinLarge:
            return "SkinLarge";
        case MATERIAL_ID::kOrganic:
            return "Organic";
        case MATERIAL_ID::kBone:
            return "Bone";
        case MATERIAL_ID::kWoodHeavy:
            return "WoodHeavy";
        case MATERIAL_ID::kChain:
            return "Chain";
        case MATERIAL_ID::kDirt:
            return "Dirt";
        case MATERIAL_ID::kGhost:
            return "Ghost";
        case MATERIAL_ID::kSkinMetalLarge:
            return "SkinMetalLarge";
        case MATERIAL_ID::kBlockAxe:
            return "BlockAxe";
        case MATERIAL_ID::kArmorLight:
            return "ArmorLight";
        case MATERIAL_ID::kShieldLight:
            return "ShieldLight";
        case MATERIAL_ID::kCoin:
            return "Coin";
        case MATERIAL_ID::kBlockBlunt2Hand:
            return "BlockBlunt2Hand";
        case MATERIAL_ID::kShieldHeavy:
            return "ShieldHeavy";
        case MATERIAL_ID::kArmorHeavy:
            return "ArmorHeavy";
        case MATERIAL_ID::kArrow:
            return "Arrow";
        case MATERIAL_ID::kGlass:
            return "Glass";
        case MATERIAL_ID::kStone:
            return "Stone";
        case MATERIAL_ID::kWaterPuddle:
            return "WaterPuddle";
        case MATERIAL_ID::kCloth:
            return "Cloth";
        case MATERIAL_ID::kSkinMetalSmall:
            return "SkinMetalSmall";
        case MATERIAL_ID::kWard:
            return "Ward";
        case MATERIAL_ID::kWeb:
            return "Web";
        case MATERIAL_ID::kTrailerSteelSword:
            return "TrailerSteelSword";
        case MATERIAL_ID::kBlunt2Hand:
            return "Blunt2Hand";
        case MATERIAL_ID::kDLC1SwingingBridge:
            return "DLC1SwingingBridge";
        case MATERIAL_ID::kBoulderMedium:
            return "BoulderMedium";
        default:
            return "None";
        }
    }
}