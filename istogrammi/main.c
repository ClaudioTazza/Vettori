#include <stdio.h>
#include "vstampa.h"
#include "myvect.h"


#define ELEM 10

int main(){
  int vettore[ELEM], i;

  myvect_init();
  myvect_vec_in_range(vettore, ELEM, 0, 10);

  printf("           1\n");
  printf("      5    0\n");

  for (i = 0; i < ELEM; i++){
    printf("%d ", vettore[i]);
    vstampa_istogrammi(vettore[i]);
  }

  return 0;
}
