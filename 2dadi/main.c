#include <stdio.h>
#include "dado.h"

int main()
{
  int n_Lanci, n_Lanci2, i, n_Uscito, v_Dado[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};  
  float percentuale;

  dado_init();

  printf("Inserisci il numero di lanci da effettuare per il primo dado: ");
  scanf("%d",&n_Lanci);

  for(i = 0; i < n_Lanci; i++){
    n_Uscito = dado_Lancio(2);
    v_Dado[n_Uscito] += 1;
  }
	
  printf("Num uscito     Num volte     Percentuale\n");

  for( i = 1; i < 12; i++){
    percentuale = (float)(v_Dado[i] * 100)/n_Lanci; 
    printf("%6d\t\t%6d\t\t%6.2f\n", i+1, v_Dado[i], percentuale);
  }

  printf("\nPercentuale teorica: 16.6\n");

  return 0;
}
