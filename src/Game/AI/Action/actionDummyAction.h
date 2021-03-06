#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class DummyAction : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(DummyAction, ksys::act::ai::Action)
public:
    explicit DummyAction(const InitArg& arg);

    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
