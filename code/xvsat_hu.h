for (int i = 0; i < 16; i++) {
  dst.half[i] = clamp<u16>(a.half[i], 0, (1 << (imm + 1)) - 1);
}
