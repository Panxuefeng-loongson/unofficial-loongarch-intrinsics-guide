for (int i = 0; i < 32; i++) {
  dst.byte[i] = (i < 16) ? (s8)((s16)a.half[i] >> (b.half[i] & 15)) : 0;
}
