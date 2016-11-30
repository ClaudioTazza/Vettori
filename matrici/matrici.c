/* matrici.c */

/* definizione e uso di matrici */

#include <stdio.h>

#define NROWS 10
#define NCOLS 10

int main()
{
  int matrice[NROWS][NCOLS];
  int r, c;

  /* inizializzazione */
  for (r=0; r<NROWS; r++) {
    for (c=0; c<NCOLS; c++) {
      matrice[r][c] = r*c;
    }
  }

  /* stampa */
  for (r=0; r<NROWS; r++) {
    for (c=0; c<NCOLS; c++) {
      printf("%5d", matrice[r][c]);
    }
    putchar('\n');
  }

  return 0;
}
