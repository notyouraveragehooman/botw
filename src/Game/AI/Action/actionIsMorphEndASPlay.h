#pragma once

#include "Game/AI/Action/actionOnetimeStopASPlay.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class IsMorphEndASPlay : public OnetimeStopASPlay {
    SEAD_RTTI_OVERRIDE(IsMorphEndASPlay, OnetimeStopASPlay)
public:
    explicit IsMorphEndASPlay(const InitArg& arg);
    ~IsMorphEndASPlay() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
