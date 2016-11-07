#include <stdio.h>
#include "dado.h"

int main()
{
  int n_Lanci, i, n_Uscito, v_Dado[6] = {0, 0, 0, 0, 0, 0};

  dado_init();

  printf("Inserisci il numero di lanci da effettuare: ");
  scanf("%d",&n_Lanci);

  for(i = 0; i < n_Lanci; i++){
    n_Uscito = lancio_Dado();
    v_Dado[n_Uscito] += 1;
  }

  printf("Num uscito   Quante volte\n");

  for( i = 0; i < 6; i++){
    printf("%6d\t%6d\n", i+1, v_Dado[i]);
  }

  return 0;
}
