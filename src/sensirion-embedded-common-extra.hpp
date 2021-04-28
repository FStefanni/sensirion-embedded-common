#ifndef SENSERION_EMBEDDED_COMMON_EXTRA_HPP
#define SENSERION_EMBEDDED_COMMON_EXTRA_HPP

#include <Arduino.h>

void sensirion_set_i2c_implementation(TwoWire & wire);
void sensirion_set_serial_implementation(HardwareSerial & serial);

#endif
