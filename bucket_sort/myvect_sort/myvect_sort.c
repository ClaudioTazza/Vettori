/* myvect_sort.c */

#include "myvect_math.h"
#include "myvect_sort.h"

void myvect_bubble_sort(int v[], int size)
{
  int pass;
  int i = 0;
  int temp;
  int scambio = 1;

  /* esegue un passaggio solo se c'e' stato uno scambio */
  for (pass=1; pass<size && scambio; pass++) {
    scambio = 0;
    /* 0 <= i < (size-1)-(pass-1) */
    for (i=0; i<size-pass; i++) {
      if (v[i] > v[i+1]) {
        scambio = 1;

        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
      }
    }
  }
}

/* myvect_selection_sort_helper():
 *
 * effettua selection sort ricorsivamente.
 * PRIVATA
 */
void myvect_selection_sort_helper(int v[], int size, int index);

/* selection sort */
void myvect_selection_sort(int v[], int size)
{
  myvect_selection_sort_helper(v, size, 0);
}

void myvect_selection_sort_helper(int v[], int size, int index)
{
  int temp;
  int min_index;

  if (size-index <= 1) return;

  min_index = myvect_math_min_index(v, size, index);

  if (min_index != index) {
    temp = v[index];
    v[index] = v[min_index];
    v[min_index] = temp;
  }

  myvect_selection_sort_helper(v, size, index+1);
}

#define ROWS 10
#define COLS 10

void myvect_bucket_sort(int v[], int size){
  int i, Matrice[ROWS][COLS], RowEsatta, ColEsatta;

  for(i = 0; i < size; i++){
    ColEsatta = 0;
    RowEsatta = v[i] % 10;

    while(Matrice[RowEsatta][ColEsatta] != 0)
      ColEsatta++;

    Matrice[RowEsatta][ColEsatta] = v[i];
  }

  RowEsatta = 0;
  ColEsatta = 0;  

  for(i = 0; i < size; i++){
    while( Matrice[RowEsatta][ColEsatta] == 0){
      RowEsatta++;
      ColEsatta = 0;
    }

    v[i] = Matrice[RowEsatta][ColEsatta];
    ColEsatta++;
  }  
}
