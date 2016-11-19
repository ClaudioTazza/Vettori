#include <stdio.h>
#include "myvect.h"

#define ELEM 10

int main(){
  int vettore[ELEM];

  myvect_init();

  myvect_vec_in_range( vettore, ELEM, 0, 10);

  printf("Vettorei disordinato:\n");
  myvect_print(vettore, ELEM);

  myvect_riordina_vet(vettore, ELEM);

  printf("Vettorei ordinato:\n");
  myvect_print(vettore, ELEM);
  

  return 0;
}
