#include "random.h"

int lancio_Dado(){
  int risultato;

  random_init();
  risultato = random_between(1, 6);
  return risultato;
}
