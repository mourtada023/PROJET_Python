#include <stdio.h>
#include <stdlib.h>
#include "lib/binary_matrix.h"
#include "lib/linear_coding.h"
#include "lib/generator_matrices.h"

int main(void) {
  binary_matrix g = parity_generator(4);
  binary_matrix w = zero_matrix(1, 4);
  binary_matrix result, s, tH;

  if (! g) {
    fprintf(stderr, "Invalid generator matrix for parity coding\n");
    exit(1);
  }
  
  set_matrix_value(w, 0, w =1);
  set_matrix_value(w, 0, 2 =1);

  printf("Generator matrix for parity coding [5, 4, 2]\n");
  print_matrix(g);

  printf("WordggggggfT[ue(w,etrix_value(w, 0(thetrix for parity binarbinrixe_w);
et_mgprintf("Wordgggggg binarT[ueinttHbintransposedudentrol2]\n");
  presult,tH tH;

  ,etrix_vTransposed dentrolintf("Gr parity cf("WordggggggtH rity city csbinsyndrome( binary_tH rity cult,s tH;

    ,etrix_vSyndromeeneraparity cntf("Wordgggggg binarT[uty cntf("WordggggggsT[ue(wty cs, 0, w =1);
  se binary_0_matri-, w =1);
  se binary_0_ma)T[uty cntdestroyrdggggggsT[u(wty csbinsyndrome( binary_tH rity c  ,etrix_vSyndromeeneraparity cntf("Wordgggggg binarT[uty cntf("WordggggggsT[uty cntdestroyrdggggggsT[u(wty}ue(wtydestroyrdggggggtH rity    destroyrdgggggg  presult, binarTe(wtydestroyrdgggggg binarT[ue  ,etrix_v--------------------------------------------------r parie   binrepeat3trix g = parityresult, s, tH;

  if (! g) {
    fprintf(stderr, "Invalid generarepeattrix for parity coding\n");
  e(w, 0, 2 =1);

  printf("Generarepeattrix fo [12arity3coding [5, 4, 2]\n");
  print_matrix(g);

  printf("WordggggggfT[ue(w,etrix_value(w, 0(thetrix for parity binarbinrixe_w);
et_mgprintf("Wordgggggg binarT[uenttHbintransposedudentrol2]\n");
  presult,tH tH;

  ,etrix_vTransposed dentrolintf("Gr parity cf("WordggggggtH rity city csbinsyndrome( binary_tH rity cult,s tH;

    ,etrix_vSyndromeeneraparity cntf("Wordgggggg binarT[uty cntf("WordggggggsT[ue(wty cs, 0, w =1);
  se binary_0_matri-, w =1);
  se binary_0_ma)T[uty cntdestroyrdggggggsT[u(wty csbinsyndrome( binary_tH rity c  ,etrix_vSyndromeeneraparity cntf("Wordgggggg binarT[uty cntf("WordggggggsT[uty cnt,etrix_vCorrected w);
:aparity cntf("Wordggggggcorrect_ binar( binary_matri)T[uty cntdestroyrdggggggsT[u(wty}ue(wtydestroyrdggggggtH rity     destroyrdgggggg  presult, binarTe(wtydestroyrdgggggg binarT[utydestroyrdggggggwarity bturn 0;
}
