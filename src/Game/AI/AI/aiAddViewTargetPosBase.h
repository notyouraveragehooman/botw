#pragma once

#include "KingSystem/ActorSystem/actAiAi.h"

namespace uking::ai {

class AddViewTargetPosBase : public ksys::act::ai::Ai {
    SEAD_RTTI_OVERRIDE(AddViewTargetPosBase, ksys::act::ai::Ai)
public:
    explicit AddViewTargetPosBase(const InitArg& arg);
    ~AddViewTargetPosBase() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
};

}  // namespace uking::ai
