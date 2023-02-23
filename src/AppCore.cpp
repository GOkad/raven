#include <TaskScheduler.h>

#include "AppCore.h"
#include "Raven.h"


AppCore::AppCore(const RavenConfig& raven_config):
    m_scheduler{std::make_unique<Scheduler>()},
    m_raven{std::make_unique<Raven>()}
{

}

AppCore::~AppCore() = default;