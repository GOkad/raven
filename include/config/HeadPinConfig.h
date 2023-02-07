#ifndef HEAD_PIN_CONFIG
#define HEAD_PIN_CONFIG

#include <cstdint>

struct HeadPinConfig
{
    /**
     * Eyes pin
     * Connected to 2 LED diodes [Common annode]
     * 
     * Consider adding 2 pins [left/right eye]
     */
    static inline const std::uint8_t EYES_PIN = 0;

    /**
     * Head X motor 
     * Connected to a servo motor with 180 DOF
     */
    static inline const std::uint8_t X_MOTOR_PIN = 0;

    /**
     * Head Y motor 
     * Connected to a servo motor with 180 DOF
     */
    static inline const std::uint8_t Y_MOTOR_PIN = 0;

    std::uint8_t eyes_pin{EYES_PIN};
    std::uint8_t x_motor_pin{X_MOTOR_PIN};
    std::uint8_t y_motor_pin{Y_MOTOR_PIN}; 

};

#endif