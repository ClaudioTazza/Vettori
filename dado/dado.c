#include "random.h"
#include <stdio.h>

int lancio_Dado(){
  int risultato;

  risultato = random_between(1, 6);
  return risultato;
}

void init_Dado(){
  random_init();
}
