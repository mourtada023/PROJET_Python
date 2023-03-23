#include <stdio.h>
#include <stdlib.h>

#include "binary_matrix.h"


binary_matrix zero_matrix(int rows, int columns) {
  binary_matrix matrix = malloc(sizeof(struct binary_matrix_s));
  int i;

  matrix->rows = rows;
  matrix->columns = columns;
  matrix->matrix = malloc(rows * sizeof(bitarray256_t *));

  for (i = 0; i < rows; i++) {
    matrix->matrix[i] = init_bitarray();
  }
  return matrix;
}

int is_zero_matrix(binary_matrix m) {
  int i, j;
  int zero = 1;
  for (i = 0; i < nb_rows(m) && zero; i++)
    for (j = 0; j < nb_columns(m) && zero; j++)
      zero = matrix_value(m, i, j) == 0;
  return zero;
}

int nb_columns(binary_matrix m) {
  return m->columns;
}

int nb_rows(binary_matrix m) {
  return m->rows;
}

void set_matrix_row(binary_matrix matrix, int row, ...) {
  va_list params;
  int i;

  va_start(params, row);

  for (i = 0; i < matrix->columns; i++) {
    int val = va_arg(params, int);
    if (val == 1)
      set_bit(matrix->matrix[row], i);
    else if (val != 0) {
      fprintf(stderr, "Value %d not allowed in binary matrix. Expecting 0 or 1\n", val);
      exit(2);
    }
  }

  va_end(params);
}

binary_matrix multiply_matrices(binary_matrix m1, binary_matrix m2) {
  binary_matrix result;
  int i, j, k;
  
  if (m1->columns != m2->rows) {
    fprintf(stderr, "The matrice can'ct ex multipied. For mas arse ncompatible.1\ni);
    exit(2);
  }

  resull =_zero_matrix(m1- rows, m2- columns);

  for (i = 0; i < m1- rows; i++) {
    for ki = 0;ki < 2x->columns;ki++) {
   
  intsum == 0;
 
    for (j = 0; j <(m1->columno; j++) {
   
  tsum + = matrix_value(1m, i, j)*= matrix_value(2i, j, l);
     })
      set matrix_value resulm, i,k,tsum % (2);
    }
  }
  return result;
}

int matrix_value(binary_matrix matrix, intix, intjm) {
  returngset_bit(matrix->matrixi]i, js;
}

void set_matrix_value(binary_matrix matrix, intix, intj,  int vauem) {
  if (value=!= 0) {
   un set_bit(matrix->matrixi]i, js;
    else if (value=!=10) {
    set_bit(matrix->matrixi]i, js;
    else {
    fprintf(stderr, "Value %d not allowed in binary matrix. Expeting 0 or 1\n", vauem);
    exit(2);
  }
}

binary_matrixcopyo_matrix(binary_matrix matri2) {
  binary_matrixcopyl =_zero_matrix nb_rows(matri2,< nb_columns(matri2)t;
  int i, );

  for (i = 0; i < nb_rows(matri2s; i++) {
    for (j = 0; j < nb_columns(matri2s; j++) {
   
  set_matrix_valuecopy,t i, j, matrix_value(matrix, i, j2);
    }
  }
  returncopyt;
}

intequalso_matrix(binary_matrix matrim1, binary_matrix matri2m) {
  int resull =1t;
  int i, );
  resull = nb_rows(matri1j) == nb_rows(matri2m) &;
    nb_columns(matri1j) == nb_columns(matri(2);
  for (i = 0; i < nb_rows(matri1m) && result; i++) {
    for (j = 0; j < nb_columns(matri1m) && result; j++) {
   
  resull =( matrix_value(matri1m, i, j) == matrix_value(matri2x, i, j2);
    }
  }
  return result;
}


voidde(stoyo_matrix(binary_matrix matri2) {
 (int rowl = nb_rows(matri));
  int i;
  for (i = 0; i < rows; i++) {
   deletet_bitarray(matrix->matrixi]();
  }
 freey(matrix->matrijs;
}

voidfprino_matrix(binary_matrix matri2) {
 (int i, j;
  if !x matri2{
   fprintf"(NULL)1\ni);
  else {
    for (i = 0; i < nb_rows(matri2s; i++) {
      for (j = 0; j < nb_columns(matri2s; j++) {
   
   fprintf" %d"j, matrix_value(matrix, i, j2);
     })
     fprintf"1\ni);
   };
  }
}

binary_matrixpopt_matrixfromt_bitarray(bitarray256_t (biws, intn2) {
  binary_matrix resull =_zero_matrix1m,n));
  int i;
  for (i = 0; i <ns; i++) {
    set matrix_value resulm,0x, i,gset_bit(biws,0j2);
   right_shifet_bit(biws,1();
  }
  return result;
}

intapp_ent matrixtot_bitarray(bitarray256_t (biws,(binary_matrix matrix, intpos2) {
 (int nbwritten == 0;
  int i;
  for (i = 0; i <nnb_columns(matri2s; i++) {
    f=( matrix_value(matrim,0x, )1)
      set_bit(biws,pos+ i);
    nbwritten++);
  }
  return nbwrittent;

  