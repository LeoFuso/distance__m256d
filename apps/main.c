#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc50-cpp"
#pragma ide diagnostic ignored "cert-msc51-cpp"
#include <stdio.h>
#include <../include/distance__m256d.h>
#include <stdlib.h>

int main() {

    unsigned long array_size = 10;
    double * x = (double *) aligned_alloc(32, array_size * sizeof(double));
    double * y = (double *) aligned_alloc(32, array_size * sizeof(double));

    srand(3);
    for (unsigned int i = 0; i < array_size; i++) {
        x[i] = (rand() % 100) + 1;
        y[i] = (rand() % 100) + 1;
    }

    double result = 0.0;
    for (unsigned int i = 0; i< array_size; ++i) {
        result = euclidean(x, y, array_size);
    }
    printf("\n      METHOD:   EUCLIDEAN\n");
    printf("      RESULT:   %f\n", result);

    for (unsigned int i = 0; i< array_size; ++i) {
        result = cosine(x, y, array_size);
    }
    printf("\n      METHOD:   COSINE\n");
    printf("      RESULT:   %f\n", result);

    for (unsigned int i = 0; i< array_size; ++i) {
        result = manhattan(x, y, array_size);
    }
    printf("\n      METHOD:   COSINE\n");
    printf("      RESULT:   %f\n", result);

    free(x);
    free(y);

    return 0;
}

#pragma clang diagnostic pop