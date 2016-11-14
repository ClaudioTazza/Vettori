#include <stdio.h>
#include "myvect.h"

int main(){

  int vettore[50], i;
  i = 50; 
  myvect_init();

  myvect_vec_in_range(vettore, 10, 100, i);

  myvect_print(vettore, i);


  return 0;
}
