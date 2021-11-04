#include <stdint.h>

#ifndef PORT_H_
#define PORT_H_

namespace dhi {

struct Port {
    int8_t BCM;
    int8_t BOARD;

    Port(int8_t bcm, int8_t gpio) : BCM(bcm), GPIO(gpio) {}

};

} // namespace dhi

#endif // PORT_H_
