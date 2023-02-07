#ifndef HEAD_CONTROLLER
#define HEAD_CONTROLLER

#include <cstdint>

#include <Arduino.h>

#include "config/HeadPinConfig.h"

class HeadController
{
private:
    std::uint8_t m_eyes_pin;
    std::uint8_t m_x_motor_pin;
    std::uint8_t m_y_motor_pin;

public:
    HeadController(const HeadPinConfig &config):
        m_eyes_pin{config.eyes_pin},
        m_x_motor_pin{config.x_motor_pin},
        m_y_motor_pin{config.y_motor_pin}
    {
        init_pins();
    }

    void move_head(std::uint8_t x_deg, std::uint8_t y_deg)
    {
        analogWrite(m_x_motor_pin, x_deg);
        analogWrite(m_y_motor_pin, y_deg);
    }

    void blink_eyes()
    {
        digitalWrite(m_eyes_pin, !digitalRead(m_eyes_pin));
    }

private:
    void init_pins()
    {
        pinMode(m_eyes_pin, OUTPUT);
        pinMode(m_x_motor_pin, OUTPUT);
        pinMode(m_y_motor_pin, OUTPUT);
    }
    
};

#endif