for (int i = 0; i < 32; i++) {
  dst.byte[i] = (((u16)(u8)a.byte[i] * (u16)(u8)b.byte[i])) >> 8;
}
