#include <stdio.h>
#include "myvect.h"

int main(){

  int vettore[10], dim_vet;
  dim_vet = 10; 
  myvect_init();

  myvect_vec_in_range(vettore, dim_vet, 10, 100);
  myvect_print(vettore, dim_vet);

  printf("\n\n");

  myvect_reverse(vettore, dim_vet);
  myvect_print(vettore, dim_vet);

  return 0;
}
