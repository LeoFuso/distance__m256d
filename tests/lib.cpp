#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc50-cpp"
#pragma ide diagnostic ignored "cert-msc51-cpp"
#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include <../include/distance__m256d.h>

TEST_CASE("Quick check", "[main]") {

    int array_size = 10;
    auto *x = (double *) aligned_alloc(32, array_size * sizeof(double));
    auto *y = (double *) aligned_alloc(32, array_size * sizeof(double));

    srand(3);
    for (unsigned int i = 0; i < array_size; i++) {
        x[i] = (rand() % 100) + 1;
        y[i] = (rand() % 100) + 1;
    }

    double result = 0.0;
    for (unsigned int i = 0; i < array_size; ++i) {
        result = euclidean(x, y, array_size);
    }

    REQUIRE(result == Approx(145.137));

}

#pragma clang diagnostic pop