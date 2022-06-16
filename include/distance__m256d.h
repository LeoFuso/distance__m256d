#ifndef DISTANCE__M256D_DISTANCE__M256D_H
#define DISTANCE__M256D_DISTANCE__M256D_H

#include <immintrin.h>

double cosine(const double *, const double *, unsigned long);
double euclidean(const double *, const double *, unsigned long);
double manhattan(const double *, const double *, unsigned long);

#endif //DISTANCE__M256D_DISTANCE__M256D_H
