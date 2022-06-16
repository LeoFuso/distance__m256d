add_executable(runner main.cpp)
target_link_libraries(runner distance__m256d)
target_compile_features(runner PRIVATE cxx_std_11)

