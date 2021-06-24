#pragma once

#include "Game/AI/AI/aiSiteBossRoot.h"
#include "KingSystem/ActorSystem/actAiAi.h"

namespace uking::ai {

class SiteBossSwordRoot : public SiteBossRoot {
    SEAD_RTTI_OVERRIDE(SiteBossSwordRoot, SiteBossRoot)
public:
    explicit SiteBossSwordRoot(const InitArg& arg);
    ~SiteBossSwordRoot() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
};

}  // namespace uking::ai
