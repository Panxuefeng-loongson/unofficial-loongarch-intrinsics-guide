#include "common.h"

v256 xvsadd_d(v256 a, v256 b) {
  v256 dst;
#include "xvsadd_d.h"
  return dst;
}

void test() { XFUZZ2(xvsadd_d); }
