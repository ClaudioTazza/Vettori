#include <stdio.h>
#include "myvect_search.h"

#define SIZE 20

int main(){

  int vettore[SIZE] = {0}, i, controllore;

  for(i = 0; i < SIZE; i++){
    printf("Inserisci il numero %d : ", i+1);
    scanf("%d", &vettore[i]);

    controllore = myvect_linear_search(vettore, SIZE, vettore[i]); 

    if(controllore == 0){
      printf("%d\n", vettore[i]);
    }
  }

  return 0;
}
