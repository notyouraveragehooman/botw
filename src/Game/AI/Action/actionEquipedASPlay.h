#pragma once

#include "Game/AI/Action/actionEquipedAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class EquipedASPlay : public EquipedAction {
    SEAD_RTTI_OVERRIDE(EquipedASPlay, EquipedAction)
public:
    explicit EquipedASPlay(const InitArg& arg);
    ~EquipedASPlay() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x40
    sead::SafeString mAS_s{};
};

}  // namespace uking::action
