#include <stdio.h>
#include "myvect.h"
#include "vmath.h"

int main(){

  int vettore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, dim_vet, media;
  dim_vet = 10;

  myvect_init();
  myvect_print(vettore, dim_vet);

  printf("\n\n");

  media = vmath_media(vettore, dim_vet);
  printf("  media: %d\n", media);

  return 0;
}
