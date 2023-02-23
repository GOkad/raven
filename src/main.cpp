#include <Arduino.h>

#include <AppCore.h>
#include "config/RavenConfig.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  static AppCore core(RavenConfig{});
}