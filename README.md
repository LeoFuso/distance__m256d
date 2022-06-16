### C Vector Distance Study
### Distance __m256d

I've built this lib to benchmark different distance measures operations using some ___m256d_ vector functions.

## Build process

``` bash
$ cmake -S . -B build
$ cmake --build build
```

## Installing
``` bash
$ sudo cmake -- install build
```

## Running
``` bash
$ sudo cmake -- install build
$ ./build/apps/runner
$ valgrind -v --leak-check=full ./build/apps/runner
```