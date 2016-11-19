#include <stdio.h>
#include "myvect.h"
#include "vmath.h"

#define ELEM 10

int main(){
  int vettore[ELEM], vettore2[ELEM], i, PS;

  myvect_init();

  myvect_vec_in_range( vettore, ELEM, 0, 10);
  myvect_vec_in_range( vettore2, ELEM, 0, 10);

  printf("Primo vettore:\n");
  myvect_print(vettore, ELEM);

  printf("Secondo vettore:\n");
  myvect_print(vettore2, ELEM);

  PS = vmath_prodotto_scalare( vettore, vettore2, ELEM);

  printf("Prodotto scalare: %d\n", PS);

  return 0;
}
