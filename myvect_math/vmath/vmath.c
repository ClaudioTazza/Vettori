#include <stdio.h>

int vmath_media(int vettore[], int n_elem){
  int i, somma=0;
  float media;
  
  for(i = 0; i < n_elem; i++ ){
    somma += vettore[i];
  }

  media = somma/n_elem;
  return media;
}
