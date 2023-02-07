#include "AppCore.h"
#include "HeadController.h"

AppCore::AppCore (const HeadPinConfig &head_config):
    m_head{std::make_unique<HeadController>(head_config)}
{

}

AppCore::~AppCore() = default;