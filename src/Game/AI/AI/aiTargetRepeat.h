#pragma once

#include "KingSystem/ActorSystem/actAiAi.h"

namespace uking::ai {

class TargetRepeat : public ksys::act::ai::Ai {
    SEAD_RTTI_OVERRIDE(TargetRepeat, ksys::act::ai::Ai)
public:
    explicit TargetRepeat(const InitArg& arg);
    ~TargetRepeat() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    // dynamic_param at offset 0x38
    sead::Vector3f* mTargetPos_d{};
};

}  // namespace uking::ai
