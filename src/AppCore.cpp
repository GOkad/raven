#include <TaskScheduler.h>

#include "AppCore.h"
#include "HeadController.h"

AppCore::AppCore (const HeadPinConfig &head_config):
    m_sheduler{std::make_unique<Scheduler>()},
    m_head{std::make_unique<HeadController>(head_config)}
{

}

AppCore::~AppCore() = default;

void AppCore::add_tasks()
{
    // Task blink_task(TASK_SECOND * 5, TASK_FOREVER, [
    //     head = m_head.get()
    // ](){
    //     head->blink_eyes();
    // });
    // m_sheduler->addTask(blink_task);
    // blink_task.enable();
}