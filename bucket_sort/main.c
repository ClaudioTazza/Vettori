#include <stdio.h>
#include "myvect.h"
#include "myvect_sort.h"

#define NELEM 10
#define ROWS 10
#define COLS 10

int main(){
  int vettore[NELEM];
  myvect_init();
 
  myvect_init_in_range(vettore, NELEM, 0, 1000);
  myvect_print(vettore, NELEM);

  printf("\n\n");

  myvect_bucket_sort(vettore, NELEM);
  myvect_print(vettore, NELEM);

  return 0;
}
