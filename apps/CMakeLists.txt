add_executable(runner main.c)
target_link_libraries(runner distance__m256d)
target_compile_features(runner PRIVATE c_std_11)

