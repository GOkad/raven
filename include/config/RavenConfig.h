#ifndef RAVEN_CONFIG
#define RAVEN_CONFIG

#include <cstdint>
#include <vector>

struct RavenConfig
{
    /**
     * Eyes are as follows
     * [ left, middle, right ]
     * Left eye pin: 0
     * Middle eye pin: 0
     * Right eye pin: 0
     */
    static inline const std::vector<std::uint8_t> EYES_PIN_ARRAY = {0,0,0};

    /**
     * Beak servo motor pin
     */
    static inline const std::uint8_t BEAK_SERVO_PIN = 0;

    /**
     * Head X axis pin
     */
   static inline const std::uint8_t HEAD_X_AXIS_PIN = 0;

    /**
     * Head Y axis pin
     */
   static inline const std::uint8_t HEAD_Y_AXIS_PIN = 0;

    std::vector<std::uint8_t> eyes_pin_array{EYES_PIN_ARRAY};
    std::uint8_t beak_servo_pin{BEAK_SERVO_PIN};
    std::uint8_t head_x_axis_pin{HEAD_X_AXIS_PIN};
    std::uint8_t head_y_axis_pin{HEAD_Y_AXIS_PIN};
};

#endif