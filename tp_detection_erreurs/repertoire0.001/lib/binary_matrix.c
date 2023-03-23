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
    if ()  va, intb2s int val = va_a (->matrix[i] = i
  ];
  if () else  va, int! <   int va(i pr   ct bderr, "V, i, %d not rowswed
  y_matrix->colu. Expecting 0 = 01\n", va_ if () ) exa (2 if () } retustartendms, int)void y_matrix matrixultiplrix matceary_matrix m) {
 1,ry_matrix matrix2 binary_matrix matriresult;t i, j;
  i, k;t i
()  vam1umns = colt! m2s;
}

   int vi pr   ct bderr, The matceary can'aryeixultiplied. Formats arse ncompatible.1\n  if () exa (2 if etustresult_arinary_matrixm1um int cm2s;ns) {
  for (i = 0; i < matrix1um int) {
    int vi = 0k i < mktrix2umns; i++) k
    int v i, j;sum   returor (j = 0; j < nb_com1umns = co)
      int v i ;sum +rix_value(m, i, 1j) == 0;*ix_value(m, i, 2  i, k_ if () )}int val = vx_value(m, i,resultj) ==k,;sum % (2 if () } return m->roresult;tt nb_rox_value(m, i,y_matrix matrix, int row, i row, j return m->rog= va_a (->matrix[i] = i]== 0void set_matrix_row(b(m, i,y_matrix matrix, int row, i row, j,val = vaue int i, va, i i,=! <   int vun = va_a (->matrix[i] = i]== 0vo re) else  va, i i,=! 1   int v = va_a (->matrix[i] = i]== 0vo re) else int vi pr   ct bderr, "V, i, %d not rowswed
  y_matrix->colu. Expeting 0 = 01\n", vaue  if () exa (2 if etid y_matrix matricopyix(binary_matrix m) {
  m) { binary_matrix matricopy_arinary_matrixws(m) &&  m) { ,olumns(m) &&  m) { );t i, j;
  ifor (i = 0; i < matriws(m) &&  m) { ) {
    int vi = 0; j < nb_columns(m) && zm) { ) {     int v i trix_row(b(m, i,yopy_,
  i, k_value(m, i, 2 int row= 0v if () } return m->roropy_tt nb_roxequalsx(binary_matrix m) {
  m) { ,ry_matrix matrix2 { ,rrint i, j;
esult_ari1t i, j;
  ifortresult_aris(m) &&  m) { 1;
  rs(m) &&  m) { 2ero;f () umns(m) && zm) { 1;
  rs(ms(m) && zm) { 2 if e = 0; i < matriws(m) &&  m) { 1ero; esult;t{
    int vi = 0; j < nb_columns(m) && zm) { 1ero; esult;t{     int v i esult_ari(_value(m, i, 2 int 1) == 0;
  r_value(m, i, 2 int 2row= 0v if () } return m->roresult;tt nbset_made bioix(binary_matrix m) {
  m) { binaryws, int aris(m) &&  m) { nt i;

  mat(i = 0; i < rows; i++) {
    matrixdeleteray();
  }->matrix[i] = i]=
  returnfree}->matrix[i] = void set_mapr   x(binary_matrix m) {
  m) { binarywsix(binary  v!{
  m) { matri pr   "(NULL).1\n  if) else int vi = 0; i < matriws(m) &&  m) { ) {
    int t vi = 0; j < nb_columns(m) && zm) { ) {     int v tri pr   ", %"i, k_value(m, i, 2 int row= 0v if () )}int vai pr   ".1\n  if (} if etid y_matrix matrpoprix_row(fromteray();
 rray256_t *));
rrant colun2 binary_matrix matriresuly_arinary_matrit 1n{ nt i;

  mat(i = 0; i < rowsn ) {
    int l = vx_value(m, i,resultj0t rowog= va_arrant 0 0v if (right_shif= va_arrant 1 }
  return matroresult;tt nb_rappten vx_valutoteray();
 rray256_t *));
rrant ,y_matrix matrix, int row,pos{ binarywsoluwrittenm   retui;

  mat(i = 0; i < rowsnlumns(m) && zm) { ) {
    int vfari(_value(m, i, 2 intj0t r)s int val = va_arrant pos+;
  if (oluwritten++}
  return matroluwrittent;tt i