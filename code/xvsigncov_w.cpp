#include "common.h"

v256 xvsigncov_w(v256 a, v256 b) {
  v256 dst;
#include "xvsigncov_w.h"
  return dst;
}

void test() { XFUZZ2(xvsigncov_w); }
