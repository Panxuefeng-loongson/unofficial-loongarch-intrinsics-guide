#include "common.h"

v256 xvssrln_h_w(v256 a, v256 b) {
  v256 dst;
#include "xvssrln_h_w.h"
  return dst;
}

void test() { XFUZZ2(xvssrln_h_w); }
