#include <stdint.h>

#ifndef PORT_H_
#define PORT_H_

namespace dhi {

struct Port {
    const int8_t BCM;
    const int8_t BOARD;

    Port(int8_t bcm, int8_t board) : BCM(bcm), BOARD(board) {}

};

} // namespace dhi

#endif // PORT_H_
