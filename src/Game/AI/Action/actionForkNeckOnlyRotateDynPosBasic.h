#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class ForkNeckOnlyRotateDynPosBasic : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(ForkNeckOnlyRotateDynPosBasic, ksys::act::ai::Action)
public:
    explicit ForkNeckOnlyRotateDynPosBasic(const InitArg& arg);
    ~ForkNeckOnlyRotateDynPosBasic() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // dynamic_param at offset 0x20
    sead::Vector3f* mTargetPos_d{};
};

}  // namespace uking::action
