/* myvect_math.h */

#ifndef MYVECT_MATH_H
#define MYVECT_MATH_H

/* somma */
int myvect_math_sum(const int v[], int size);

/* media */
double myvect_math_mean(const int v[], int size);

int myvect_math_max(const int v[], const int size, int index);
int myvect_math_min(const int v[], const int size, int index);
int myvect_math_max_index(const int v[], const int size, int index);
int myvect_math_min_index(const int v[], const int size, int index);

#endif
