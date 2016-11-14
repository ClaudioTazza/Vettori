#include <stdio.h>
#include "random.h"

void myvect_init(){
  random_init();
} 

void myvect_vec_in_range(int vettore[], int n_elem, int a, int b){
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

void myvect_reverse(int vettore[], int n_elem){
  int i;
  for(i = 0; i < n_elem; i++){
    vettore[i] = tempo[n_elem - 1];
    n_elem--;
  }
}
