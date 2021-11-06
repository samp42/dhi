#include "port.h"

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

namespace dhi {

// GPIO
// I2C
static const Port kI2CSDA(2, 3);
static const Port kI2CSCL(3, 5);

// SPI
// mixup in pcb between MISO and SCLK
static const Port kSPIINT(25, 22);
static const Port kSPICE0(8, 24);
static const Port kSPICE1(7, 26);
static const Port kSPISCLK(11, 23);
static const Port kSPIMOSI(10, 19);
static const Port kSPIMISO(9, 21);

// Analog
static const Port kAnalogCS(4, 7);
static const Port kAnalogSCL(17, 11);
static const Port kAnalogDOUT(27, 13);
static const Port kAnalogDIN(22, 15);

// DIO
static const Port kDIO0(21, 40);
static const Port kDIO1(20, 38);
static const Port kDIO2(16, 36);
static const Port kDIO3(24, 18);
static const Port kDIO4(23, 16);
static const Port kDIO5(18, 12);
static const Port kDIO6(15, 10);
static const Port kDIO7(14, 8);

// PWM
static const Port kPWM0(12, 32);
static const Port kPWM1(13, 33);

// RSL
static const Port kRSL(5, 29);

// LED
static const Port kPowerLED(6, 31);
static const Port kGreenLED(19, 35);
static const Port kRedLED(26, 37);

} // namespace dhi

#endif // CONSTANTS_H_
