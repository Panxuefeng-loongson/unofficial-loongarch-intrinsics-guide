for (int i = 0; i < 8; i++) {
  dst.word[i] = ((u32)a.word[i] <= (u32)b.word[i]) ? 0xFFFFFFFF : 0;
}
