#include "common.h"

v256 xvsrani_d_q(v256 a, v256 b, int imm) {
  v256 dst;
#include "xvsrani_d_q.h"
  return dst;
}

void test() {
  XFUZZ2(xvsrani_d_q, 0);
  XFUZZ2(xvsrani_d_q, 7);
  XFUZZ2(xvsrani_d_q, 15);
}
