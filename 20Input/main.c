#include <stdio.h>
#include "myvect_search.h"

#define SIZE 20

int main(){

  int vettore[SIZE] = {0}, i, controllore, val;

  for(i = 0; i < SIZE; i++){
    printf("Inserisci il numero %d : ", i+1);
    scanf("%d", &val);

    controllore = myvect_linear_search(vettore, SIZE, val); 
    vettore[i] = val;

    if(controllore < 0){
      printf("%d\n", val);
    }
  }

  return 0;
}
