#ifndef DISTANCE__M256D_DISTANCE__M256D_H
#define DISTANCE__M256D_DISTANCE__M256D_H

#include <immintrin.h>

#ifdef __cplusplus
extern "C" {
#endif

double cosine(const double *, const double *, unsigned long);
double euclidean(const double *, const double *, unsigned long);
double manhattan(const double *, const double *, unsigned long);

#ifdef __cplusplus
}
#endif

#endif //DISTANCE__M256D_DISTANCE__M256D_H