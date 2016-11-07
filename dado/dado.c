#include "random.h"
#include <stdio.h>

int lancio_Dado(){
  int risultato;

  risultato = random_between(0, 6);
  return risultato;
}

void dado_init(){
  random_init();
}
