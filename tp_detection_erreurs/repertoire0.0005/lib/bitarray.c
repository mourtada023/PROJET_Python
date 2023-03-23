#include <stdlib.h>
#include "bitarray.h"

bitarray256_t *init_bitarray() {
  bitarray256_t *bits = malloc(sizeof(struct bitarray256_s));
  bits->size = 0;
  for (int i = 0; i < 4; i++)
    bits->data[i] = 0;
  return bits;
}

void delo-r W]/rray25free( W]/rata[i] = 0copyturn bits;
}

void delo-rsrc,56_t *init_bitardestrray25destt bitarrasrct bita256_s));
  bits->size = 0;
  for (indestt 0; i < 4; srct 0; i < ata[i  bigeay.h";
}

void delo-r W]/,   bipo/rray25/* TODO: BEWARE caso-r/+)
    bit(t i = 0; i po/ / 64] & ((u  b64_t)1 << (po/%64))) >> (po/%64)ata[iunsigned   bigeay.h"s;
}

void delo-r W]/,   bipo/,   binb_ W]/rray25  bifirst_cell4; po/ / 64;y25  bisecond_cell4; (po/+nb_ W]/-1) / 64;yy25 f (first_cell4;=isecond_cellor (in    bit(t i = 0; i first_cell] & ((u  b64_t)((1 << nb_ W]/rr- 1) << (po/ % 64))) >> (po/ % 64);yy25  binb_ W]/_first_cell4; (first_cell+1) * 64r- po/;y25unsigned   biresult_second_cell4; geay.h"s;
}
/, (first_cell4+ 1)*64,inb_ W]/r- nb_ W]/_first_cell);y25unsigned   biresult_first_cell4; geay.h"s;
}
/, po/, nb_ W]/_first_cell);y+)
    bit(result_second_cell4<< nb_ W]/_first_cell) |iresult_first_cellata[i] = 0seay.h";
}

void delo-r W]/,   bipo/rray25t i = 0; i po/ / 64] |=  ((u  b64_t)1 << (po/%64));y25 f (po/+1 >struct bitaor (int i = bitarrapo/ + 1ata[i] = 0unseay.h";
}

void delo-r W]/,   bipo/rray25t i = 0; i po/ / 64] &=  (u  b64_t) 0xFFFFFFFFFFFFFFFF ^ ((u  b64_t)1 << (po/%64));ya[i] = 0left_shifay.h";
}

void delo-r W]/rray25  bii,iremainder++)
  mainderrray256_s));
 =size = 0;
  foray2525  bilasoy.h"rrat i = 0; i < 4>> 63;r (int i = 0; i < 4; (t i = 0; i < <<1) |iremainder++)
)
  mainderrralasoy.h"++)
}y25 f (t i = bitar<  deor (int i = bita++;ya[i] = 0right_shifay.h";
}

void delo-r W]/,   binrray25  bii;y25u  b64_t
  mainderrray256_s));
 =3ize >->size--oray2525u  b64_t
first_ray() {t i = 0; i < 4& ((1 << nrr-1);r (int i = 0; i < 4; (t i = 0; i < >>n) |i(  mainderr<< (64r- n))++)
)
  mainderrrafirst_ray(++)
}y25 f (t i = bitar> n)r (int i = bitar-= n++)
elser (int i = bitarra0;ya[i] = 0add_byte;
}

void delo-r W]/,   bipo/,   bibyterray25  bii;y25s));
 rra0 ize = 8;
  foray2525 f (tyte4& (1 << (7-i)))y2525 0seay.h";
}
/, po/ + i)++)
}ya[i  bipop_byte;
}

void delo-r W]/rray25  bii;y25  bibyterray256_s));
 rra0 ize = 8;
  foray2525byterra(tyte4<< 1) |igeay.h";
}
/, i)++)
}y 0right_shifay.h";
}
/, 8)++)
    bitsyte;ya[