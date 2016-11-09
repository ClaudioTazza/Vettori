#include <stdio.h>
#include "dado.h"

int main()
{
  int n_Lanci, i, n_Uscito, v_Dado[13] = {0};  
  float percentuale, percentuale_T[13] = {0, 0, 1./36., 2./36., 3./36., 4./36., 5./36., 6./36., 5./36., 4./36., 3./36., 2./36., 1./36.};

  dado_init();
  
  printf("Inserisci il numero di lanci da effettuare per il primo dado: ");
  scanf("%d",&n_Lanci);

  for(i = 0; i < n_Lanci; i++){
    n_Uscito = dado_Lancia_n(2);
    v_Dado[n_Uscito] += 1;
  }
  
  printf("Num uscito     Num volte     Percentuale    Percentuale_Teorica\n");

  for( i = 2; i < 13; i++){
    percentuale = (float)(v_Dado[i] * 100)/n_Lanci; 
    printf("%6d\t\t%6d\t\t%6.2f\t\t%6.2f\n", i, v_Dado[i], percentuale, percentuale_T[i]*100);
  }


  return 0;
}
