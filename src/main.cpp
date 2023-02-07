#include <Arduino.h>

#include "config/HeadPinConfig.h"
#include "AppCore.h"

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  static AppCore core(HeadPinConfig{});
}