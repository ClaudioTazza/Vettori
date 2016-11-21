/* bubble_sort.c */

/* Illustra il metodo di ordinamento a bolle */

#include <stdio.h>
#include "myvect.h"

#define SIZE 10

void bubble_sort(int v[], const int size);

int main()
{
  int v[SIZE];

  myvect_init();

  myvect_init_in_range(v, SIZE, -20, 100);

  printf("Vettore prima dell'ordinamento:\n");
  myvect_print(v, SIZE);

  bubble_sort(v, SIZE);

  printf("Vettore dopo l'ordinamento:\n");
  myvect_print(v, SIZE);

  return 0;
}

void bubble_sort(int v[], const int size)
{
  int pass;
  int i;
  int temp;
  int controllore;
  int regolatore = 1;

  for (pass = 1; pass < size; pass++) {
    controllore = 0;

    for (i = 0; i < size-regolatore; i++) {
      if (v[i] > v[i+1]) {
        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;

        controllore = 1;
      }
    }
    regolatore++;
    if(controllore == 0) break;
  }
}
