/* myvect_math.c */

#include "myvect_math.h"

int myvect_math_sum(const int v[], int size)
{
  int i;
  int sum = 0;

  for (i=0; i<size; i++)  sum += v[i];

  return sum;
}

double myvect_math_mean(const int v[], int size)
{
  double mean;
  int sum;

  sum = myvect_math_sum(v, size);

  mean = (double)sum / (double)size;

  return mean;
}

int myvect_math_max(const int v[], const int size, int index)
{
  int max = v[index];
  int i;

  for (i=index+1; i<size; i++) {
    if (v[i] > max) max = v[i];
  }

  return max;
}

int myvect_math_min(const int v[], const int size, int index)
{
  int min = v[index];
  int i;

  for (i=index+1; i<size; i++) {
    if (v[i] < min) min = v[i];
  }

  return min;
}

int myvect_math_max_index(const int v[], const int size, int index)
{
  int max_index = index;
  int i;

  for (i=index+1; i<size; i++) {
    if (v[i] > v[max_index]) max_index = i;
  }

  return max_index;
}

int myvect_math_min_index(const int v[], const int size, int index)
{
  int min_index = index;
  int i;

  for (i=index+1; i<size; i++) {
    if (v[i] < v[min_index]) min_index = i;
  }

  return min_index;
}
