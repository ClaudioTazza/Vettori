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
