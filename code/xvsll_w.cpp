#include "common.h"

v256 xvsll_w(v256 a, v256 b) {
  v256 dst;
#include "xvsll_w.h"
  return dst;
}

void test() { XFUZZ2(xvsll_w); }
