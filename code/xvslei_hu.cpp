#include "common.h"

v256 xvslei_hu(v256 a, int imm) {
  v256 dst;
#include "xvslei_hu.h"
  return dst;
}

void test() {
  XFUZZ1(xvslei_hu, 0);
  XFUZZ1(xvslei_hu, 15);
}
