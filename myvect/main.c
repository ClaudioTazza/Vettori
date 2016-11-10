#include <stdio.h>
#include "myvect.h"

int main(){

  int vettore[50], i;
  i = 50; 
  myvect_init();

  myvect_vec_in_range(vettore[50], 5, 10, 50);

  myvect_print(vettore[50], 50);


  return 0;
}
