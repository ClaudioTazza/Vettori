#include <stdio.h>
#include "dado.h"

int main()
{
  int n_Lanci, i, n_Uscito, v_Dado[6] = {0, 0, 0, 0, 0, 0};
  float percentuale;

  dado_init();

  printf("Inserisci il numero di lanci da effettuare: ");
  scanf("%d",&n_Lanci);

  for(i = 0; i < n_Lanci; i++){
    n_Uscito = dado_Lancio();
    v_Dado[n_Uscito] += 1;
  }

  printf("\n\n");
  printf("Num uscito     Num volte     Percentuale\n");

  for( i = 0; i < 6; i++){
    percentuale = (float)(v_Dado[i] * 100)/n_Lanci; 
    printf("%6d\t\t%6d\t\t%6.2f\n", i+1, v_Dado[i], percentuale);
  }

  return 0;
}
