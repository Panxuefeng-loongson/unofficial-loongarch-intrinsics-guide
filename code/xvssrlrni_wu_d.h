for (int i = 0; i < 8; i++) {
  if (i < 4) {
    u64 temp;
    if (imm == 0) {
      temp = (u64)b.dword[i];
    } else {
      temp = ((u64)b.dword[i] >> imm) + (((u64)b.dword[i] >> (imm - 1)) & 1);
    }
    dst.word[i] = clamp<u64>(temp, 0, 4294967295);
  } else {
    u64 temp;
    if (imm == 0) {
      temp = (u64)a.dword[i - 4];
    } else {
      temp = ((u64)a.dword[i - 4] >> imm) +
             (((u64)a.dword[i - 4] >> (imm - 1)) & 1);
    }
    dst.word[i] = clamp<u64>(temp, 0, 4294967295);
  }
}
