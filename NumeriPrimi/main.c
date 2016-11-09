#include <stdio.h>

int main()
{
  int i, conta, vettore[1000];

  /* inizializzazione */
  for(i = 0; i < 1000; i++) vettore[i] = 1;

  /* algoritmo: crivello di Erastotene */
  for(i = 2; i < 500; i++){
    if (vettore[i] == 1){
      for(conta = i+i; conta < 1000; conta += i){
        vettore[conta] = 0;
      }
    }
  }

  for(i = 0; i < 1000; i++) {
    if (vettore[i]==1) {
      printf("%6d\t%6d\n", i, vettore[i]);
    }
  }

  return 0;
}
