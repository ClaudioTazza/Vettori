#include <stdio.h>
#include "random.h"

void myvect_init(){
  random_init();
} 

int myvect_vec_in_range(int a, int b){
  risultato = random_between(a, b);
  return risultato;
}

int myvect_print(int vettore[], int n_elem){
  int i;
      
  for(i = 0; i < n_elem; i++){
    printf("%6d\f%6d\n", i, vettore[i]);
  }
}

