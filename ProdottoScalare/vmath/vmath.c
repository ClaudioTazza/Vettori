#include <stdio.h>
#include "vmath.h"

int vmath_somma(int vettore[], int n_elem){
  int i,somma = 0;
  
  for(i = 0; i < n_elem; i++ ){
      somma += vettore[i]; 
  } 

  return somma;
}



double vmath_media(int vettore[], int n_elem){
  int i, somma;
  double media;
 
  somma = vmath_somma(vettore, n_elem); 

  media = (double)somma / n_elem;
  printf("DEBUG: media is %lf\n", media);
  return media;
}

int vmath_prodotto_scalare(int vettore[], int vettore2[], int ELEM){
  int risultato = 0, i;

  for (i = 0; i < ELEM; i++){
    risultato += vettore[i] * vettore2[i];
  }

  return risultato; 
}
