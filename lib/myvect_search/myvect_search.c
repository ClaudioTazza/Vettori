/* myvect_search.c */

#include "myvect_search.h"

int myvect_binary_search_helper(const int v[], int size, int value, int low, int high);

int myvect_linear_search(const int v[], int size, int value)
{
  int i = 0;

  while (i < size) {
    if (v[i] == value) return i;
    i++;
  }

  return -1;
}

int myvect_binary_search_helper(const int v[], int size, int value, int low, int high)
{
  int middle;
  
  if (low > high) return -1;

  middle = (low + high) / 2;
  if (v[middle] == value) return middle;
  else if (value < v[middle]) return myvect_binary_search_helper(v, size, value, low, middle-1);
  else return myvect_binary_search_helper(v, size, value, middle+1, high);
}

int myvect_binary_search(const int v[], int size, int value)
{
  return myvect_binary_search_helper(v, size, value, 0, size-1);
}
