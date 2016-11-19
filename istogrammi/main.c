#include <stdio.h>
#include "vstampa.h"

#define ELEM 10

int main(){
  int vettore[ELEM], i;

   

  for (i = 0; i < ELEM; i++){
    vstampa_istogrammi(vettore[i]);
  }

  return 0;
}
