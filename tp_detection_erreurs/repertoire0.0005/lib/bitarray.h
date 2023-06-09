#ifndef BITARRAY_H
#define BITARRAY_H

#include <stdint.h>

#define ALPHABET_SIZE (sizeof(((struct bitarray256_s *)0)->data) << 3)

/** 
 * A structureeee                       t >aeth     ude                                 snS      5y256_s    the number of      used in the          t     int 6_s ;6_s    the       >aeed in the          t(you should not access this directly)t     uint64_t uctu[4];
}   snS      5t;         Creates and init a   snS           @re   n a   snS      5t       , such tha    ss->6_s  == 0 and   ss->uctu[i] == 0 for i in {0, ..., 3}       snS      5t  init_  snS   ();  void dele      @ n a   snS      5t  )   5t;     opy  n a   s `src    opy  n a   s `src  }acessa number o_s  nt64_t uctu[4];
teu }ac:hould ourceumber o_stu[4];
teu nt64:houldnt64inationumber o_s (mu   have alnS da  een cnS   d with d dele      @)nit_   snScn a5t  )   5t;     opy  n a }ac,, such tha    ssnt64src    opy Getshe          ould pecifi d positiont uc tu[4];
teu  s `: ude               e        utdir 64-    sa eger   sn4];
teu pos :houldposition    ouldrequt64efor iu should n a   snS                Position 0 ishe   leas   >gnificantor iu sh      {0, 0] sn4];   0 <= pos <        5t      e       (0    1)    ouldrequt64efopositionnit_     geele  t;     opy  n a >6_s      possrc    opy R      consecutiv        shouldre;  sentationnit tu[4];
teu  s `: ould not accescontad d                    sn4];
teu pos:houldposition    ouldleas   >gnificantor iu nut  rieve sn4];
teu nb_ s `: ouldn the     consecutiv        nut  rieve (        8) sn4];   nb_ s ` <= 8 0 fopos+nb_ s ` <=  ss->uctu[i0 fopos > 3}    5t      e   value    ouldcor  spondd    s ` (between = 0 fo255)nit_ un >gnyou s  geele  st;     opy  n a >6_s      pos      nb_ s `src    opy Setshe          ould pecifi d positioni0 fopotentially upd     oulopy ctu[t uc tu[4];
teu  s `: ude               e        utdir 64-    sa eger   sn4];
teu pos :houldposition    ouldr iu nub   eiu should n a   snS                Position 0 ishe   leas   >gnificantor i. sn4];   0 <= pos <        5p    geele  t;  s  poss., 31, 0 for i .ctu[i>= pos+1nit_   snSseele  t;     opy  n a >6_s      possrc    opy Unsetshe          ould pecifi d position uctu[4];
teu  s `: ude               e        utdir 64-    sa eger   sn4];
teu pos :houldposition    ouldr iu nub  un eiu should n a   snS                Position 0 ishe   leas   >gnificantor i. sn4];   T         o_s mu   have  een cnS   d with    leas  pos+1      0 fopos > 3}    5p    geele  t;    o_s  poss., 30nit_   snSun eile  t;     opy  n a >6_s      possrc    opy Shif   ss- lefiu should n a   snS  tu[4];
teu  s ` : ude               e        utdir 64-    sa eger   sn4];    r i .ctu[ihas  een of(nS     by 1 (unl   u   nS ch   e   maximum)nS         All e         should n a   s have  een shif    eohe   lef   y 1  n S         (ie.he   leas   >gnificantor iu sctlw ould econd leas   >gnificant, 0 foso on)nit_   snSlef _shif le  t;     opy  n a >6_ssrc    opy Shif   ss- righiu should n a   snS  tu[4];
teu  s ` : ude               e        utdir 64-    sa eger   sn4];
teu n:he   length    ouldshif  (        8)  sn4];    r i .ctu[ihas  een de(nS     by n (unl   u   nS ch   0)nS         All e         should n a   s have  een shif    eohe   righiuby n      sn4      (ie.he   n-th leas   >gnificantor iu sctlw ouldleas   >gnificant, 0 foso on)nit_   snSrighi_shif le  t;     opy  n a >6_s      nsrc    opy Add  , yte    ould pecifi d positioni should n a   s uctu[4];
teu  s `: ould n a   s uc4];
teu pos:hpositioni0t whi 0 an         artore    cn i dtu[4];
teu  yte: an        nub  cn i dtu[_   snSadd_ ytet;     opy  n a >6_s      pos       ytesrc    opy 5t     s e   value    ouldfir   8         ouldr ia   s 0 foshif  righiuby 8       snS     pop_ ytet;     opy  n a >6_ssrc#enddf
