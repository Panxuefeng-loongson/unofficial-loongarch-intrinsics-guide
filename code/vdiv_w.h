for (int i = 0; i < 4; i++) {
  dst.word[i] = (b.word[i] == 0) ? 0 : ((s32)a.word[i] / (s32)b.word[i]);
}
