#include <stdio.h>
#include "myvect.h"
#include "myvect_sort.h"

/* basta mettere un numero maggiore di 10 per mandarlo in crisi */
#define NELEM 10

int main()
{
  int vettore[NELEM];
  myvect_init();

  myvect_init_in_range(vettore, NELEM, 0, 10000);
  myvect_print(vettore, NELEM);

  printf("\n\n");

  myvect_bucket_sort(vettore, NELEM);
  myvect_print(vettore, NELEM);

  return 0;
}
