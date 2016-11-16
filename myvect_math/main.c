#include <stdio.h>
#include "myvect.h"
#include "vmath.h"

#define DIMVET 10

int main(){

  int vettore[DIMVET];
  double media = 3.0;

  myvect_init();

  myvect_vec_in_range(vettore, DIMVET, 0, 300);
  myvect_print(vettore, DIMVET);

  printf("\n\n");

  media = vmath_media(vettore, DIMVET);
  printf("  media: %lf\n", media);

  return 0;
}
