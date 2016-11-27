/* ricerca_binaria.c */

/* Ricerca binaria di un elemento in un vettore */

#include <stdio.h>
#include "random.h"
#include "myvect.h"
#include "myvect_sort.h"
#include "myvect_search.h"

#define SIZE 10

int main()
{
  int v[SIZE];
  int valore_da_cercare;
  int posizione;

  random_init();
  myvect_init();

  myvect_init_in_range(v, SIZE, 0, 10);

  printf("Vettore generato casualmente:\n");
  myvect_print(v, SIZE);

  /* prima di effettuare una ricerca binaria
   * il vettore deve essere ordinato!!!
   */
  myvect_bubble_sort(v, SIZE);
  printf("Vettore ordinato:\n");
  myvect_print(v, SIZE);

  valore_da_cercare = random_between(0, 11);
  posizione = myvect_binary_search(v, SIZE, valore_da_cercare);
  if (posizione<0) {
    printf("%d non trovato!\n", valore_da_cercare);
  } else {
    printf("%d trovato alla posizione di indice %d!!!\n", valore_da_cercare, posizione);
  }

  return 0;
}

/*
int ricerca_binaria(const int v[], const int size, const int value)
{
  int lower = 0;
  int upper = size;
  int middle;

  while (lower<=upper) {
    middle = (lower+upper)/2;

    if (v[middle]==value) {
      return middle;
    } else if (value<v[middle]) {
      upper = middle-1;
    } else {
      lower = middle+1;
    }
  }

  return -1;
}
*/
