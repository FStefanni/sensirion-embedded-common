#ifndef SENSERION_EMBEDDED_COMMON_H
#define SENSERION_EMBEDDED_COMMON_H

#include <Arduino.h>

#include "sensirion_common.h"
#include "sensirion_config.h"
#include "sensirion_i2c_hal.h"
#include "sensirion_i2c.h"
#include "sensirion_shdlc.h"
#include "sensirion_uart_hal.h"

void sensirion_set_i2c_implementation(TwoWire & wire);
void sensirion_set_serial_implementation(HardwareSerial * serial);

#endif
