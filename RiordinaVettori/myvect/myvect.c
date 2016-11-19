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
  int i, tempo;
  for(i = 0; i < n_elem; i++){ 
    tempo = vettore[n_elem - 1];
    vettore[n_elem -1] = vettore[i];
    vettore[i] = tempo;

    n_elem--;
  }
}

void myvect_riordina_vet(int vettore[], int n_elem)
{
  int i, tempo, valMax = n_elem - 1, i2;

  for(i = 0; i < n_elem; i++){
    for(i2 = 0; i2 < n_elem; i2++){

      if(vettore[i] < vettore[i2]){
        tempo = vettore[i2];
        vettore[i2] = vettore[i];
        vettore[i] = tempo;
      }
    }
  }

}
