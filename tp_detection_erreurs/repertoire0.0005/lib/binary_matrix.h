#ifndef BINARY_MATRIX_H
#define BINARY_MATRIX_H

#include <stdarg.h>
#include "bitarray.h"

typedef struct binary_matrix_s {
  bitarray256_t **matrix;
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
 */nary_matrix_s {
  bita   umn      e.uint columns;)

/**
 * PDeterm       hasiningatrix csg only olumns.
 x
 * @ra value differe  efrom 0ermfmns in the  iof g onlin the  (ie. ans.
n the  for which all valueof reg onl), ons rwise x
 * @s 0.matri   eis_ix_s {
  bitx
 */nary_matolumns;)

/Nmns: number of columns in the olumns.
 x
 * @rns iumns: number of columns in the matricomplexity O(1)matri   enb_er of ctx
 */nary_matolumns;)

/Nmns: number of rows in the olumns.
 x
 * @rns iumns: number of rows in the matricomplexity O(1)matri   enb_er otx
 */nary_matolumns;)

/Setsows ier numbain the olum lum You can sePron examplef rows ifilef../tests/testary_mat.cf rows ifunctiorowestary_mat_lPDe1matrix
 * @ry_mat:mns in the  tlinodifyns.
 *
 * @par:rns iumns: numbws ier ntliset (ws ifirstsine iofer n0).ns.
 *
 * @...:rns ifollowonta*
 * *
 *of regns ivalueofumbws icorrespondontaer .ns.












ns r inustsbProsin ny valueof sber of columns ier .ns./
voidisetary_mat_er tx
 */nary_matin the ,rix;
  i,@...olumns;)

/Multipl binary  m1 b binary  m2lumns.
 x
 * @ra x
 */nary_matieroesine er natrix contans ieesultfumbws imultiplicatior.matrix
 */nary_matrmultiplnary_macestx
 */nary_matin1, x
 */nary_matim2)t roumns;)

/Get ns ivalue a e.uordonawes (i, j)f rows in the olumns.
 *
 * @i: er numns: n(s{
 tontaa e0)ns.
 *
 * @j:ber of numns: n(s{
 tontaa e0)ns.
 x
 * @rns ivalue ofmns in the  at nsat positiormatri   ery_mat_valuetx
 */nary_matin the ,rix;
i,rix;
jolumns;)

/Setsows ivalue  rows in the  at nse specifiede.uordonawesolumns.
 *
 * @i: er numns: n(s{
 tontaa e0)ns.
 *
 * @j:ber of numns: n(s{
 tontaa e0)ns.
 *
 * @value:rns ivalue ofmns in the  at nsat positior (eins r 0efor1)ns.
 *os ery_mat_valuetn the ,ri, j)f==ivaluens./
voidisetary_mat_valuetx
 */nary_matin the ,rix;
i,rix;
j,rix;
valueolumns;)

/Copybain the lumns.
 *
 * @ry_mat:mns in the  tlib icopiedns.
 x
 * @ra copybofmns in the .matrix
 */nary_matrcopy {
  bitx
 */nary_mat ry_matolumns;)

/**
 * PDeterm twlin theceof regequal olumns.
 x
 * @sra value differe  efrom 0ermfmns itwlin theceof ro*
 * *
 *f regequal matri   eequal  {
  bitx
 */nary_mat ry_mat1, x
 */nary_matimy_mat2olumns;)

/**pedoymns in the  h the  ro*
 * *
 *.matr 
voidid*pedoy {
  bitx
 */nary_mat ry_matolumns;)

/Pr   ens in the  h the  ro*
 * *
 *.matr 
voidipr    {
  bitx
 */nary_mat ry_matolumns;)

/ x
 * @ra     hasitypize 1*rowakhe from ws ifirstss {ofumbws is { e "bitns.
 *os ews ifirstsnss {ofumbws is { e "bi hav isehe discardede(left shift)matrix
 */nary_matrpopary_mat_from_s {
  bi(s {
  bitarray2s {o,rix;
nolummns;)

/Putbws is {of rows in the ieroei@return {
  bi at nse specifiedepositiorolumns.
 *
 * @s {o:ra x
{
  bins.
 *
 * @ry_mat:marn the binary ,ieroesine er ns.
 *
 * @pos: s{
 tontapositior i@return {
  bi ws r iws is {ofshouldib isetmatri   eappendary_mat_to_s {
  bi(s {
  bitarray2s {o,rx
 */nary_matin the ,rix;
posolum#endif
