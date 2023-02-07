#ifndef APP_CORE
#define APP_CORE

#include <memory>

class Scheduler;
using sheduler_up = std::unique_ptr<Scheduler>;

struct HeadPinConfig;
class HeadController;
using head_controller_up = std::unique_ptr<HeadController>;

class AppCore
{
/**
 * TODOS:
 * 
 * [consider] Adding a TaskSheduler 
 * [consider] IR intrrup pin to wake up 
 * 
 * // Related to State changing
 * State            m_state [Idle, Angry, etc...]
 * UltrasonicSensor m_ult_sensor
 * RFIDReader       m_rfid_reader
 * 
 * // Related to animatronics
 * VoieBox          m_voice_box
 * WingsController  m_wings
 * BodyController   m_body
 * 
 */
private:
    sheduler_up         m_sheduler;
    head_controller_up  m_head;
public:
    AppCore(const HeadPinConfig &head_config);
    ~AppCore();
private:
    void add_tasks();
};

#endif