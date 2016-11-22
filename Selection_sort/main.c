#include <stdio.h>
#include "vsort.h"
#include "myvect.h"

#define ELEM 10

int main(){
  int vettore[ELEM];

  myvect_init();
  myvect_init_in_range(vettore, ELEM, 0, 10);

  printf("Prima\n");
  myvect_print(vettore, ELEM);

  vsort_ordinaMeglio(vettore, ELEM, 0);

  printf("Dopo\n");
  myvect_print(vettore, ELEM);

}
