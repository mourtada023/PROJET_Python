#ifndef BINARY_MATRIX_H
#define BINARY_MATRIX_H

#include <stdarg.h>
#include "bitarray.h"

typedef struct binary_matrix_s {
  .h"

typ256_t **matrix;
  int rows;
  int columns;
} * binary_matrix;

/**
 * Produce a matrix containing only zeroes with the given number of rows and
 * columns.
 *
 * @param rows: number of rows in the matrix
 * @param columns: number of columns in the matrix
 * @return the binary matrix
 */
binary_matrix zero_matrix(int rows, int columns);

/**
 * Determines if a matrix only contains zeroes.
 *
 * @return a value different from 0 iff the matrix is a zero matrix (ie. a
 * matrix for which all values are zero), otherwise returns 0.
 */
int is_zero_matrix(binary_matrix);

/**
 * Number of columns in the matrix.
 *
 * @return the number of columns in the matrix
 * @complexity O(1)
 */
int nb_columns(binary_matrix);

/**
 * Number of rows in the matrix.
 *
 * @return the number of rows in the matrix
 * @complexity O(1)
 */
int nb_rows(binary_matrix);

/**
 * Sets the rowue dd_y O(y O(y O(_llumns);

/**
 * Det
rwi the rowue dd_y O(y O@returnsmatrix
 * int nb_rfi* i       rn*ts rn*t(y O(_l.cnb_rfi* iunctio_rfn*t(y O(_l_l* @1e matrix
 *y O(_l:ix for whichtuesl.cH     e <    e <   ns);

/*:ixset (x
 * irstretetrix

/*0).hichtuesl.c...   e <follow numuesl.tain 0.
 * e <turns 0   ns);correspond num

/.hichhhhhhhhhhhhh_zer
 *ustrby Os *ynyeturns 0.splexity O(1)
 */

/.hic/
voidxsetiunctio_

/the rowue dd_y *y O(_,binary_m,c... O(y O(y O(Multiplo_matrix m1 bo_matrix m2nt from 0 iff thehe rowue dd_y and
 etet

/*e given num
 */
esult0   ns);multiplicacnb_.(int rows, int columultipl int cocesthe rowue dd_y *1,e dd_y and
 etem2)trix(y O(y O(Get  e <turns a if ord nafi*l v, j)w O()trix(y O(y (aIyp256_m2)trix(_ h v, j)w O()tr#ns 0) (aIyp256_mj:0.splex(_ h v, j)w O()tr#ns 0) (aIyn the matrie <turoix (ie. a
 * a(Geta(Gposiicacrix);

/*etiuncte <tu

/the rowue dd_y *y O(_,biiO(_,bijd_y O(y O(y O(_llumne <turj)w O()trix(y a(Gete specified a if ord na O(y (aIyp256_m2)trix(_ h v, j)w O()tr#ns 0) (aIyp256_mj:0.splex(_ h v, j)w O()tr#ns 0) (aIyp256_me <tu:matrie <turoix (ie. a
 * a(Geta(Gposiicac (ei Os  mao),1) (aIypos/*etiuncte <tu
_y *y O(_l v, ==ie <tu
/.hic/
voidxsetiuncte <tu

/the rowue dd_y *y O(_,biiO(_,bijO(_,bie <tud_y O(y O(yCopy**
 * DetO(y (aIyp256_ml* @1e matrix
 *y O(_lb ns)piednt from 0 iff copy*oix (ie. a
 *nb_.(int rows, int ccopy/**
 * Number of colu owue dd_y O(y O(y contains zerotwor whiccurns 0.equalfferent from 0 isff the matrix is a zero matrix (ietwor whiccurnj)wnumuesl.tns 0.equalfrix);

/*equalf/**
 * Number of colu owue dy *1,e dd_y and
 e and
2d_y O(y O(y c.h"oymatrix
 *y O columj)wnumuesl.tnb_.( ic/
vodc.h"oy/**
 * Number of colu owue dd_y O(y O(yPr

/*atrix
 *y O columj)wnumuesl.tnb_.( ic/
vopr

//**
 * Number of colu owue dd_y O(y O(yrom 0 iff .
 *
 *   .ize 1*)w aklumzero t (x
 * irnt rns 0   nnt  nary_m (aIypos/*t (x
 * irnrnt rns 0   nnt  nary_ hav nnelumdiscarded (left shift)b_.(int rows, int cpopsetiunctzero_nt rows;(nt rows;
  int nt rO(_,bind_y  O(y O(yPut0   nnt ity O(1)
 */
ind_y aiary_matr rows;olumj)wnumuesl.tnb."trd na O(y (aIyp25  nn:0 iffatr roO(y (aIyp256_ml* @1ay_matrix zero_,e dd_y and
 eO(y (aIyp25tnb: , j)w O()a(Gposiicy aiary_matr rowwhhhhhut0   nntshouldO(_l
voalfrix);
appendpopsetiutoero_nt rows;(nt rows;
  int nt tu

/the rowue dd_y *y O(_a(Gbind#endif
