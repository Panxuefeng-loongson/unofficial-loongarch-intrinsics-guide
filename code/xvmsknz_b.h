u64 m = 0x7F7F7F7F7F7F7F7F;
u64 c = ~(((a.dword[0] & m) + m) | a.dword[0] | m);
c |= c << 7;
c |= c << 14;
c |= c << 28;
c >>= 56;
dst.dword[0] = c;
c = ~(((a.dword[1] & m) + m) | a.dword[1] | m);
c |= c << 7;
c |= c << 14;
c |= c << 28;
c >>= 56;
dst.dword[0] |= c << 8;
dst.dword[0] = (u16)~dst.dword[0];
dst.dword[1] = 0;

c = ~(((a.dword[2] & m) + m) | a.dword[2] | m);
c |= c << 7;
c |= c << 14;
c |= c << 28;
c >>= 56;
dst.dword[2] = c;
c = ~(((a.dword[3] & m) + m) | a.dword[3] | m);
c |= c << 7;
c |= c << 14;
c |= c << 28;
c >>= 56;
dst.dword[2] |= c << 8;
dst.dword[2] = (u16)~dst.dword[2];
dst.dword[3] = 0;
