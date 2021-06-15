#pragma once

// DO NOT EDIT. This file is automatically generated by actInfoCommon.py.

namespace al {
class ByamlIter;
}

namespace ksys::act {

class InfoData;

bool getSystemIsGetItemSelf(InfoData* data, const char* actor);
bool getSystemIsGetItemSelf(const al::ByamlIter& iter);

int getGeneralLife(InfoData* data, const char* actor);
int getGeneralLife(const al::ByamlIter& iter);

int getEnemyRank(InfoData* data, const char* actor);
int getEnemyRank(const al::ByamlIter& iter);

int getAttackPower(InfoData* data, const char* actor);
int getAttackPower(const al::ByamlIter& iter);

int getWeaponCommonGuardPower(InfoData* data, const char* actor);
int getWeaponCommonGuardPower(const al::ByamlIter& iter);

float getWeaponCommonSharpWeaponPer(InfoData* data, const char* actor);
float getWeaponCommonSharpWeaponPer(const al::ByamlIter& iter);

int getWeaponCommonSharpWeaponAddAtkMin(InfoData* data, const char* actor);
int getWeaponCommonSharpWeaponAddAtkMin(const al::ByamlIter& iter);

int getWeaponCommonSharpWeaponAddAtkMax(InfoData* data, const char* actor);
int getWeaponCommonSharpWeaponAddAtkMax(const al::ByamlIter& iter);

int getWeaponCommonSharpWeaponAddLifeMin(InfoData* data, const char* actor);
int getWeaponCommonSharpWeaponAddLifeMin(const al::ByamlIter& iter);

int getWeaponCommonSharpWeaponAddLifeMax(InfoData* data, const char* actor);
int getWeaponCommonSharpWeaponAddLifeMax(const al::ByamlIter& iter);

bool getWeaponCommonSharpWeaponAddCrit(InfoData* data, const char* actor);
bool getWeaponCommonSharpWeaponAddCrit(const al::ByamlIter& iter);

int getWeaponCommonSharpWeaponAddGuardMin(InfoData* data, const char* actor);
int getWeaponCommonSharpWeaponAddGuardMin(const al::ByamlIter& iter);

int getWeaponCommonSharpWeaponAddGuardMax(InfoData* data, const char* actor);
int getWeaponCommonSharpWeaponAddGuardMax(const al::ByamlIter& iter);

int getWeaponCommonPoweredSharpAddAtkMin(InfoData* data, const char* actor);
int getWeaponCommonPoweredSharpAddAtkMin(const al::ByamlIter& iter);

int getWeaponCommonPoweredSharpAddAtkMax(InfoData* data, const char* actor);
int getWeaponCommonPoweredSharpAddAtkMax(const al::ByamlIter& iter);

int getWeaponCommonPoweredSharpAddLifeMin(InfoData* data, const char* actor);
int getWeaponCommonPoweredSharpAddLifeMin(const al::ByamlIter& iter);

int getWeaponCommonPoweredSharpAddLifeMax(InfoData* data, const char* actor);
int getWeaponCommonPoweredSharpAddLifeMax(const al::ByamlIter& iter);

int getWeaponCommonPoweredSharpWeaponAddGuardMin(InfoData* data, const char* actor);
int getWeaponCommonPoweredSharpWeaponAddGuardMin(const al::ByamlIter& iter);

int getWeaponCommonPoweredSharpWeaponAddGuardMax(InfoData* data, const char* actor);
int getWeaponCommonPoweredSharpWeaponAddGuardMax(const al::ByamlIter& iter);

float getWeaponCommonPoweredSharpAddThrowMin(InfoData* data, const char* actor);
float getWeaponCommonPoweredSharpAddThrowMin(const al::ByamlIter& iter);

float getWeaponCommonPoweredSharpAddThrowMax(InfoData* data, const char* actor);
float getWeaponCommonPoweredSharpAddThrowMax(const al::ByamlIter& iter);

bool getWeaponCommonPoweredSharpAddSpreadFire(InfoData* data, const char* actor);
bool getWeaponCommonPoweredSharpAddSpreadFire(const al::ByamlIter& iter);

bool getWeaponCommonPoweredSharpAddZoomRapid(InfoData* data, const char* actor);
bool getWeaponCommonPoweredSharpAddZoomRapid(const al::ByamlIter& iter);

float getWeaponCommonPoweredSharpAddRapidFireMin(InfoData* data, const char* actor);
float getWeaponCommonPoweredSharpAddRapidFireMin(const al::ByamlIter& iter);

float getWeaponCommonPoweredSharpAddRapidFireMax(InfoData* data, const char* actor);
float getWeaponCommonPoweredSharpAddRapidFireMax(const al::ByamlIter& iter);

bool getWeaponCommonPoweredSharpAddSurfMaster(InfoData* data, const char* actor);
bool getWeaponCommonPoweredSharpAddSurfMaster(const al::ByamlIter& iter);

const char* getBowArrowName(InfoData* data, const char* actor);
const char* getBowArrowName(const al::ByamlIter& iter);

bool getBowIsLeadShot(InfoData* data, const char* actor);
bool getBowIsLeadShot(const al::ByamlIter& iter);

int getBowLeadShotNum(InfoData* data, const char* actor);
int getBowLeadShotNum(const al::ByamlIter& iter);

bool getBowIsRapidFire(InfoData* data, const char* actor);
bool getBowIsRapidFire(const al::ByamlIter& iter);

int getBowRapidFireNum(InfoData* data, const char* actor);
int getBowRapidFireNum(const al::ByamlIter& iter);

int getMasterSwordTrueFormAttackPower(InfoData* data, const char* actor);
int getMasterSwordTrueFormAttackPower(const al::ByamlIter& iter);

float getMasterSwordSearchEvilDist(InfoData* data, const char* actor);
float getMasterSwordSearchEvilDist(const al::ByamlIter& iter);

const char* getMasterSwordSleepActorName(InfoData* data, const char* actor);
const char* getMasterSwordSleepActorName(const al::ByamlIter& iter);

const char* getMasterSwordTrueFormActorName(InfoData* data, const char* actor);
const char* getMasterSwordTrueFormActorName(const al::ByamlIter& iter);

int getArmorStarNum(InfoData* data, const char* actor);
int getArmorStarNum(const al::ByamlIter& iter);

int getArmorDefenceAddLevel(InfoData* data, const char* actor);
int getArmorDefenceAddLevel(const al::ByamlIter& iter);

const char* getArmorNextRankName(InfoData* data, const char* actor);
const char* getArmorNextRankName(const al::ByamlIter& iter);

const char* getArmorEffectEffectType(InfoData* data, const char* actor);
const char* getArmorEffectEffectType(const al::ByamlIter& iter);

int getArmorEffectEffectLevel(InfoData* data, const char* actor);
int getArmorEffectEffectLevel(const al::ByamlIter& iter);

bool getArmorEffectAncientPowUp(InfoData* data, const char* actor);
bool getArmorEffectAncientPowUp(const al::ByamlIter& iter);

bool getArmorEffectEnableClimbWaterfall(InfoData* data, const char* actor);
bool getArmorEffectEnableClimbWaterfall(const al::ByamlIter& iter);

bool getArmorEffectEnableSpinAttack(InfoData* data, const char* actor);
bool getArmorEffectEnableSpinAttack(const al::ByamlIter& iter);

int getArmorHeadMantleType(InfoData* data, const char* actor);
int getArmorHeadMantleType(const al::ByamlIter& iter);

bool getArmorUpperDisableSelfMantle(InfoData* data, const char* actor);
bool getArmorUpperDisableSelfMantle(const al::ByamlIter& iter);

int getArmorUpperUseMantleType(InfoData* data, const char* actor);
int getArmorUpperUseMantleType(const al::ByamlIter& iter);

const char* getSeriesArmorSeriesType(InfoData* data, const char* actor);
const char* getSeriesArmorSeriesType(const al::ByamlIter& iter);

int getItemSellingPrice(InfoData* data, const char* actor);
int getItemSellingPrice(const al::ByamlIter& iter);

int getItemBuyingPrice(InfoData* data, const char* actor);
int getItemBuyingPrice(const al::ByamlIter& iter);

int getItemCreatingPrice(InfoData* data, const char* actor);
int getItemCreatingPrice(const al::ByamlIter& iter);

int getItemStainColor(InfoData* data, const char* actor);
int getItemStainColor(const al::ByamlIter& iter);

int getItemSaleRevivalCount(InfoData* data, const char* actor);
int getItemSaleRevivalCount(const al::ByamlIter& iter);

const char* getItemUseIconActorName(InfoData* data, const char* actor);
const char* getItemUseIconActorName(const al::ByamlIter& iter);

int getRupeeRupeeValue(InfoData* data, const char* actor);
int getRupeeRupeeValue(const al::ByamlIter& iter);

int getArrowArrowNum(InfoData* data, const char* actor);
int getArrowArrowNum(const al::ByamlIter& iter);

int getArrowEnemyShootNumForDelete(InfoData* data, const char* actor);
int getArrowEnemyShootNumForDelete(const al::ByamlIter& iter);

int getArrowArrowDeletePer(InfoData* data, const char* actor);
int getArrowArrowDeletePer(const al::ByamlIter& iter);

int getCureItemHitPointRecover(InfoData* data, const char* actor);
int getCureItemHitPointRecover(const al::ByamlIter& iter);

int getCureItemEffectiveTime(InfoData* data, const char* actor);
int getCureItemEffectiveTime(const al::ByamlIter& iter);

const char* getTravelerAppearGameDataName(InfoData* data, const char* actor);
const char* getTravelerAppearGameDataName(const al::ByamlIter& iter);

const char* getTravelerDeleteGameDataName(InfoData* data, const char* actor);
const char* getTravelerDeleteGameDataName(const al::ByamlIter& iter);

const char* getTravelerRouteType(InfoData* data, const char* actor);
const char* getTravelerRouteType(const al::ByamlIter& iter);

const char* getTravelerRideHorseName(InfoData* data, const char* actor);
const char* getTravelerRideHorseName(const al::ByamlIter& iter);

const char* getTravelerRoutePoint0Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint0Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint1Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint1Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint2Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint2Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint3Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint3Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint4Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint4Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint5Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint5Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint6Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint6Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint7Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint7Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint8Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint8Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint9Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint9Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint10Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint10Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint11Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint11Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint12Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint12Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint13Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint13Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint14Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint14Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint15Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint15Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint16Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint16Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint17Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint17Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint18Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint18Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint19Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint19Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint20Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint20Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint21Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint21Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint22Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint22Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint23Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint23Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint24Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint24Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint25Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint25Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint26Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint26Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint27Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint27Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint28Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint28Name(const al::ByamlIter& iter);

const char* getTravelerRoutePoint29Name(InfoData* data, const char* actor);
const char* getTravelerRoutePoint29Name(const al::ByamlIter& iter);

const char* getHorseASVariation(InfoData* data, const char* actor);
const char* getHorseASVariation(const al::ByamlIter& iter);

int getHorseNature(InfoData* data, const char* actor);
int getHorseNature(const al::ByamlIter& iter);

int getHorseGearTopChargeNum(InfoData* data, const char* actor);
int getHorseGearTopChargeNum(const al::ByamlIter& iter);

int getHorseUnitRiddenAnimalType(InfoData* data, const char* actor);
int getHorseUnitRiddenAnimalType(const al::ByamlIter& iter);

int getMonsterShopBuyMamo(InfoData* data, const char* actor);
int getMonsterShopBuyMamo(const al::ByamlIter& iter);

int getMonsterShopSellMamo(InfoData* data, const char* actor);
int getMonsterShopSellMamo(const al::ByamlIter& iter);

int getPictureBookLiveSpot1(InfoData* data, const char* actor);
int getPictureBookLiveSpot1(const al::ByamlIter& iter);

int getPictureBookLiveSpot2(InfoData* data, const char* actor);
int getPictureBookLiveSpot2(const al::ByamlIter& iter);

int getPictureBookSpecialDrop(InfoData* data, const char* actor);
int getPictureBookSpecialDrop(const al::ByamlIter& iter);

}  // namespace ksys::act
