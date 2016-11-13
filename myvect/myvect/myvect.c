#include <stdio.h>
#include "random.h"

void myvect_init(){
  random_init();
} 

void myvect_vec_in_range(int vettore[], int a, int b, int n_elem){
  int i;
  for(i = 0; i < n_elem; i++){
    vettore[i] = random_between(a, b);
  }
}

void myvect_print(int vettore[], int n_elem){
  int i;
      
  for(i = 0; i < n_elem; i++){
    printf("%6d\t%6d\n", i, vettore[i]);
  }
}
