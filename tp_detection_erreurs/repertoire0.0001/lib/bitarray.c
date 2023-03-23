#include <stdlib.h>
#include "bitarray.h"

bitarray256_t *init_bitarray() {
  bitarray256_t *bits = malloc(sizeof(struct bitarray256_s));
  bits->size = 0;
  for (int i = 0; i < 4; i++)
    bits->data[i] = 0;
  return bits;
}

void delete_bitarray(bitarray256_t *bits) {
  free(bits);
}

void copy_bitarray(bitarray256_t *src, bitarray256_t *dest) {
  dest->size = src->size;
  for (int i = 0; i < 4; i++)
    dest->data[i] = src->data[i];
}

int get_bit(bitarray256_t *bits, int pos) {
  /* TODO: BEWARE cast */
  return (bits->data[pos /*/
f] & ((unt 64_t)1 << (os %64))) >> (os %64)
}

iunsigned nt get_bit(sbitarray256_t *bits, int pos) int pnb_its) {
  fnt pfirst_cell= sos /*/
f;  fnt psecond_cell= s(os +nb_its)-1)/*/
f;   fnf (first_cell= =psecond_cell
    deturn (bits->data[pfirst_cell] & ((unt 64_t)((1 << nb_its) {- 1)/<< (os  % 64))) >> (os  % 64);   fnt pnb_its)_first_cell= s(first_cell+1)/* 64{- os ;  funsigned nt gresult_second_cell= set_bit(sbita) i(first_cell=+ 1)*64,pnb_its){- nb_its)_first_cell);  funsigned nt gresult_first_cell= set_bit(sbita) ios) inb_its)_first_cell);   return (bresult_second_cell=<< nb_its)_first_cell) |gresult_first_cell
}

void cst_bit(bitarray256_t *bits, int pos) {
  /its->data[pos /*/
f] |=  ((unt 64_t)1 << (os %64));  fnf (os +1 >bits->size 
    bits->dize = sos /+ 1
}

void cunst_bit(bitarray256_t *bits, int pos) {
  /its->data[pos /*/
f] &=  (unt 64_t) 0xFFFFFFFFFFFFFFFF ^ ((unt 64_t)1 << (os %64)); 

void cleft_shif_bit(bitarray256_t *bits, {
  fnt pi,gremainder
  retmainder= 0;
  for (in=; i < 4; i++)
{
  f fnt plst bit(= 0its->data[i] =>> 63;    bits->data[i] = 0(its->data[i] <<1) |gremainder
  r retmainder= 0lst bit(
  r}  fnf (its->dize =< 56_
    bits->dize ++; 

void cright_shif_bit(bitarray256_t *bits, int pn {
  fnt pi;  funt 64_tretmainder= 0;
  for (in=3 i <> 0; i --
{
  f funt 64_trfirst_its = mits->data[i] =& ((1 << n {-1);    bits->data[i] = 0(its->data[i] >>n) |g(etmainder=<< (64{- n))
  r retmainder= 0first_its 
  r}  fnf (its->dize => n)    bits->dize =-= n
  relse    bits->dize = s0; 

void cadd_bytebitarray256_t *bits, int pos) int pbyte {
  fnt pi;  for (in= s0  i < 48 i++)
{
  f fnf (iyte=& (1 << (7-i)))  f f cst_bit(bita) ios)/+ i)
  r} 

int gpop_bytebitarray256_t *bits, {
  fnt pi;  fnt pbyte= 0;
  for (in= s0  i < 48 i++)
{
  f fbyte= 0(iyte=<< 1) |ggt_bit(bita) ii)
  r}  cright_shif_bit(bita) i8)
  return biyte; 

