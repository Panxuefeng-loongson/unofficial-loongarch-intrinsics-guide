for (int i = 0; i < 8; i++) {
  if (i < 4) {
    s64 temp = (s64)b.dword[i] >> imm;
    dst.word[i] = clamp<s64>(temp, -2147483648, 2147483647);
  } else {
    s64 temp = (s64)a.dword[i - 4] >> imm;
    dst.word[i] = clamp<s64>(temp, -2147483648, 2147483647);
  }
}
