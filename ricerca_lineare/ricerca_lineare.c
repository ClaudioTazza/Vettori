/* ricerca_lineare.c */

/* Ricerca lineare di un elemento in un vettore */

#include <stdio.h>
#include "random.h"
#include "myvect.h"
#include "myvect_search.h"

#define SIZE 10

int main()
{
  int v[SIZE];
  int counter;
  int volte = 3;  /* effettua 3 ricerche */
  int valore_da_cercare;
  int posizione;

  random_init();
  myvect_init();

  myvect_init_in_range(v, SIZE, 0, 10);

  printf("Vettore generato casualmente:\n");
  myvect_print(v, SIZE);

  /* effettua 3 ricerche */
  for (counter=1; counter<=volte; counter++) {
    valore_da_cercare = random_between(0, 11);
    printf("\n**********\n");
    printf("Ricerca #%d\n", counter);
    printf("Cerco il valore %d\n\n", valore_da_cercare);
    posizione = myvect_linear_search(v, SIZE, valore_da_cercare);
    if (posizione<0) {
      printf("%d non trovato!\n", valore_da_cercare);
    } else {
      printf("%d trovato alla posizione di indice %d!!!\n", valore_da_cercare, posizione);
    }
  }

  return 0;
}
