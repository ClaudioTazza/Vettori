/* myvect_search.c */

#include "myvect_search.h"

int myvect_linear_search(const int v[], int size, int value)
{
  int i = 0;

  while (i < size) {
    if (v[i] == value) return i;
    i++;
  }

  return -1;
}
