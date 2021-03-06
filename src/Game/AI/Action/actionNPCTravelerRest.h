#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class NPCTravelerRest : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(NPCTravelerRest, ksys::act::ai::Action)
public:
    explicit NPCTravelerRest(const InitArg& arg);
    ~NPCTravelerRest() override;

    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // dynamic_param at offset 0x20
    bool* mIsWarpHorse_d{};
};

}  // namespace uking::action
