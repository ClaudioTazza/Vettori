#include "random.h"
#include <stdio.h>

int dado_Lancio(){
  int risultato;

  risultato = random_between(1, 7);
  return risultato;
}

int dado_Lancia_n(int a){
  int risultato,i;
  risultato = 0; 

  for(i=0; i < a; i++){
    risultato += dado_Lancio();}

  return risultato;
}

void dado_init(){
  random_init();
}
