#include "common.h"

v256 xvsubwod_d_w(v256 a, v256 b) {
  v256 dst;
#include "xvsubwod_d_w.h"
  return dst;
}

void test() { XFUZZ2(xvsubwod_d_w); }
