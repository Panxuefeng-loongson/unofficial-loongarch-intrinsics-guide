#include "common.h"

v256 xvavg_bu(v256 a, v256 b) {
  v256 dst;
#include "xvavg_bu.h"
  return dst;
}

void test() { XFUZZ2(xvavg_bu); }
