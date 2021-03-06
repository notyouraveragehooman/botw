#pragma once

#include "Game/AI/AI/aiGoronCannonBase.h"
#include "KingSystem/ActorSystem/actAiAi.h"

namespace uking::ai {

class GoronCannon : public GoronCannonBase {
    SEAD_RTTI_OVERRIDE(GoronCannon, GoronCannonBase)
public:
    explicit GoronCannon(const InitArg& arg);
    ~GoronCannon() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
};

}  // namespace uking::ai
