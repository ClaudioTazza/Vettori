#include <stdio.h>
#include "myvect.h"
#include "myvect_sort.h"
#include "mymatrix.h"

#define NELEM 10
#define ROWS 10
#define COLS 10

int main(){
  int vettore[NELEM], matrice[ROWS][COLS];
  myvect_init();
  init_matrice(matrice, ROWS, COLS);

  myvect_init_in_range(vettore, NELEM, 0, 100);
  myvect_print(vettore, NELEM);

  printf("\n\n");

  myvect_bucket_sort(vettore, NELEM, matrice, ROWS, COLS);
  print_matrice(matrice, ROWS, COLS);


  return 0;
}
