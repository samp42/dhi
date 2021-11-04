#include "port.h"

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

namespace dhi {

// GPIO
// I2C
static constexpr Port kI2CSDA(2, 3);
static constexpr Port kI2CSCL(3, 5;

// SPI
// mixup in pcb between MISO and SCLK
static constexpr Port kSPIINT(25, 22);
static constexpr Port kSPICE0(8, 24);
static constexpr Port kSPICE1(7, 26);
static constexpr Port kSPISCLK(11, 23);
static constexpr Port kSPIMOSI(10, 19);
static constexpr Port kSPIMISO(9, 21);

// Analog
static constexpr Port kAnalogCS(4, 7);
static constexpr Port kAnalogSCL(17, 11);
static constexpr Port kAnalogDOUT(27, 13);
static constexpr Port kAnalogDIN(22, 15);

// DIO
static constexpr Port kDIO0(21, 40);
static constexpr Port kDIO1(20, 38);
static constexpr Port kDIO2(16, 36);
static constexpr Port kDIO3(24, 18);
static constexpr Port kDIO4(23, 16);
static constexpr Port kDIO5(18, 12);
static constexpr Port kDIO6(15, 10);
static constexpr Port kDIO7(14, 8);

// PWM
static constexpr Port kPWM0(12, 32);
static constexpr Port kPWM1(13, 33);

// RSL
static constexpr Port kRSL(5, 29);

// LED
static constexpr Port kPowerLED(6, 31);
static constexpr Port kGreenLED(19, 35);
static constexpr Port kRedLED(26, 37);

} // namespace dhi

#endif // CONSTANTS_H_
