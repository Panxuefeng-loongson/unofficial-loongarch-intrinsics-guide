#include "common.h"

v256 xvslei_d(v256 a, int imm) {
  v256 dst;
#include "xvslei_d.h"
  return dst;
}

void test() {
  XFUZZ1(xvslei_d, 0);
  XFUZZ1(xvslei_d, 15);
}
