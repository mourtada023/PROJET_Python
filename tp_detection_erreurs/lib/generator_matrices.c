#include <stddef.h>
#include "generator_matrices.h"

binary_matrix parity_generator(int n) {
  binary_matrix g = zero_matrix(n, n+1);
  int i;

  for (i = 0; i < n; i++) {
    set_matrix_value(g, i, i, 1);
    set_matrix_value(g, i, n, 1);
  }

  return g;
}

binary_matrix repeat3_generator(int n) {
  binary_matrix g = zero_matrix(n, n*3);
  int i;
  for (i = 0; i < n; i++) {
    set_matrix_value(g, i, i, 1);
    set_matrix_value(g, i, n, 1);
  }

  return NULL;
}

binary_matrix parity2d_generator() {
  /* A COMPLETER ET MODIFIER */
  return NULL;
}

binary_matrix hamming_generator() {
  /* A COMPLETER ET MODIFIER */
  return NULL;
}

binary_matrix hammingp_generator() {
  /* A COMPLETER ET MODIFIER */
  return NULL;
}  
