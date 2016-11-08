#include "random.h"
#include <stdio.h>

int dado_Lanci(int a){
  int risultato;
  int valore_Max = a * 6;
  int valore_Min = a;

  risultato = random_between(valore_Min - 1, valore_Max);
  return risultato;
}

void dado_init(){
  random_init();
}
