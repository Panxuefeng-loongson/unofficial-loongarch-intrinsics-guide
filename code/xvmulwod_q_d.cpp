#include "common.h"

v256 xvmulwod_q_d(v256 a, v256 b) {
  v256 dst;
#include "xvmulwod_q_d.h"
  return dst;
}

void test() { XFUZZ2(xvmulwod_q_d); }
