#pragma once

#include "KingSystem/ActorSystem/actAiAi.h"

namespace uking::ai {

class RapidAttackAllowSelect : public ksys::act::ai::Ai {
    SEAD_RTTI_OVERRIDE(RapidAttackAllowSelect, ksys::act::ai::Ai)
public:
    explicit RapidAttackAllowSelect(const InitArg& arg);
    ~RapidAttackAllowSelect() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    // static_param at offset 0x38
    const int* mAttackNum_s{};
    // static_param at offset 0x40
    const int* mWeaponIdx_s{};
};

}  // namespace uking::ai
