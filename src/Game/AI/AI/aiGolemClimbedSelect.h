#pragma once

#include "KingSystem/ActorSystem/actAiAi.h"

namespace uking::ai {

class GolemClimbedSelect : public ksys::act::ai::Ai {
    SEAD_RTTI_OVERRIDE(GolemClimbedSelect, ksys::act::ai::Ai)
public:
    explicit GolemClimbedSelect(const InitArg& arg);
    ~GolemClimbedSelect() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    // static_param at offset 0x38
    const int* mClimbTime_s{};
    // aitree_variable at offset 0x40
    float* mGolemClimbedTime_a{};
};

}  // namespace uking::ai
