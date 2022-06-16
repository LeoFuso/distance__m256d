### C Vector Distance Study
### Distance __m256d

I've built this lib to benchmark different distance measures operations using some ___m256d_ vector functions, and hopefully compare it with the new Java's Panama Vectors API.

Please note that the arrays provided to the operations must be created using `aligned_alloc` functions. You can check a working example in `apps/main.c`.

## Building & Running
``` bash
$ cmake -S . -B build
$ cmake --build build
$ ./build/apps/runner
$ valgrind -v --leak-check=full ./build/apps/runner
```

## Installing (optional)
``` bash
$ sudo cmake -- install build
```