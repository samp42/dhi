#include "third_party/WiringPi/wiringPi/wiringPi.h"
#include "../constants.h"

namespace dhi {
namespace dio {

// set port to mode
// port is BOARD OR GPIO ?????????
// see constants.h for different pin modes
void Init(uint8_t port, uint8_t mode);

// returns digital value read at port
uint8_t Read(uint8_t port);

// sets given port to value
void Write(uint8_t port, uint8_t value);

} // namespace dio
} // namespace dhi

