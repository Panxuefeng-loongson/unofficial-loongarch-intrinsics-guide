for (int i = 0; i < 8; i++) {
  dst.word[i] = clamp<u32>(a.word[i], 0, (1 << (imm + 1)) - 1);
}
