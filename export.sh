#!/usr/bin/env bash

rm -fr src

mkdir -p src
cp common/sensirion_common.h common/sensirion_common.c common/sensirion_config.h src
cp i2c/sensirion_i2c.c i2c/sensirion_i2c.h i2c/sensirion_i2c_hal.h src
cp i2c/sample-implementations/arduino/sensirion_i2c_hal.cpp src
cp shdlc/sensirion_shdlc.c shdlc/sensirion_shdlc.h shdlc/sensirion_uart_hal.h src
cp shdlc/sample-implementations/arduino/sensirion_uart_hal.cpp src

rm -fr \
    .circleci \
    common \
    i2c \
    shdlc \
    tests \
    tests-common-config \
    .clang-format \
    CHANGELOG.md \
    LICENSE \
    Makefile \
    README.md

git add src
git cia -m"New cleaning"

# EOF
