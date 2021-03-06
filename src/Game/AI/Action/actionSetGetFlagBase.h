#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class SetGetFlagBase : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(SetGetFlagBase, ksys::act::ai::Action)
public:
    explicit SetGetFlagBase(const InitArg& arg);
    ~SetGetFlagBase() override;

    bool init_(sead::Heap* heap) override;
    void loadParams_() override;

protected:
};

}  // namespace uking::action
