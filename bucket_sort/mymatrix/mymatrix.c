/* mymatrix.c */

#include <stdio.h>
#include "mymatrix.h"

void init_matrice(int m[][1024], int rows, int cols)
{
  int r, c;

  printf("Inizializzazione di una matrice %d x %d\n", rows, cols);

  for (r=0; r<rows; r++) {
    for (c=0; c<cols; c++) {
      m[r][c] = r*c;
    }
  }
}

void print_matrice(int m[][1024], int rows, int cols)
{
  int r, c;

  printf("Stampa di una matrice %d x %d\n\n", rows, cols);

  for (r=0; r<rows; r++) {
    for (c=0; c<cols; c++) {
      printf("%5d", m[r][c]);
    }
    putchar('\n');
  }
}
