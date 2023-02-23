#ifndef APP_CORE
#define APP_CORE

#include <memory>

class Scheduler;
using scheduler_up = std::unique_ptr<Scheduler>;

class Raven;
using raven_up = std::unique_ptr<Raven>;
struct RavenConfig;

class AppCore
{
private:
    scheduler_up m_scheduler;
    raven_up    m_raven;

public:
    AppCore(const RavenConfig& raven_config);
    ~AppCore();
};

#endif