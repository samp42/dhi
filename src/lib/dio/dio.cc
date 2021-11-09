#include "dio.h"

namespace dhi {
namespace dio {

void Init(uint8_t port, uint8_t mode) {
    pinMode(port, mode); 
}

} // namespace dio
} // namespace dhi

