cmake_minimum_required(VERSION 3.8)
project(distance__m256d C)
set(CMAKE_C_STANDARD 11)

# For development, only,
# Comment the next line after the project is working properly
set(CMAKE_VERBOSE_MAKEFILE on)

### Output
# Set the output directory for all Dynamic and Static Libs
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

### Flags
set(CXXFLAGS_AVX2 "-O3 -march=native -mavx2")

add_library(distance__m256d distance__m256d.c)
set_target_properties(distance__m256d PROPERTIES PUBLIC_HEADER distance__m256d.h)
set_property(TARGET distance__m256d PROPERTY COMPILE_FLAGS ${CXXFLAGS_AVX2})

include(GNUInstallDirs)
install(
        TARGETS distance__m256d
        PUBLIC_HEADER
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
        ARCHIVE
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/distance
)