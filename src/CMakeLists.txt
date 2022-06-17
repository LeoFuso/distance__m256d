# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

### Flags
set(CXXFLAGS_AVX2 "-O3 -march=native -mavx2")

# Optionally glob, but only for CMake 3.12 or later:
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${Distance__m25d_SOURCE_DIR}/include/*.h")

# Make an automatic library - will be static or dynamic based on user setting
add_library(distance__m256d SHARED distance__m256d.cpp ${HEADER_LIST})
set_property(TARGET distance__m256d PROPERTY COMPILE_FLAGS ${CXXFLAGS_AVX2})

find_library(MATH_LIBRARY m)
if(MATH_LIBRARY)
    target_link_libraries(distance__m256d PRIVATE ${MATH_LIBRARY})
endif()

# We need this directory, and users of our library will need it too
target_include_directories(distance__m256d PUBLIC ../include)

# All users of this library will need at least C++ 11
target_compile_features(distance__m256d PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
source_group(
        TREE "${PROJECT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST})

include(GNUInstallDirs)
set_target_properties(distance__m256d PROPERTIES PUBLIC_HEADER ${HEADER_LIST})
install(
        TARGETS distance__m256d
        PUBLIC_HEADER
            DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
        ARCHIVE
            DESTINATION ${CMAKE_INSTALL_LIBDIR}
)