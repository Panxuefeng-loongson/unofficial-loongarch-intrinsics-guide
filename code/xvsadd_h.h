for (int i = 0; i < 16; i++) {
  dst.half[i] = (s16)sadd((s16)a.half[i], (s16)b.half[i]);
}
