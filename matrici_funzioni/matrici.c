/* matrici.c */

/* passaggio di matrici a funzioni */

#include <stdio.h>

#define NROWS 10
#define NCOLS 30

/* funzioni che operano su una matrice di 'rows' righe e 'cols' colonne.
 * La matrice puo' avere un numero indeterminato di righe,
 * ma un numero di colonne pari a NCOLS, di cui solo 'cols' in uso.
 */
void init_matrice(int m[][NCOLS], int rows, int cols);
void print_matrice(int m[][NCOLS], int rows, int cols);

int main()
{
  int matrice[NROWS][NCOLS];

  int cols = 10; /* numero di colonne effettivamente utilizzate */

  init_matrice(matrice, NROWS, cols);
  putchar('\n');
  print_matrice(matrice, NROWS, cols);

  return 0;
}

void init_matrice(int m[][NCOLS], int rows, int cols)
{
  int r, c;

  printf("Inizializzazione di una matrice %d x %d\n", rows, cols);

  for (r=0; r<rows; r++) {
    for (c=0; c<cols; c++) {
      m[r][c] = r*c;
    }
  }
}

void print_matrice(int m[][NCOLS], int rows, int cols)
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
