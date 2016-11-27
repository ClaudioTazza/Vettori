cmake_minimum_required (VERSION 2.6)

project (BinarySearch)

include_directories (random)
include_directories (myvect)
include_directories (myvect_search)
include_directories (myvect_sort)

add_subdirectory (random)
add_subdirectory (myvect)
add_subdirectory (myvect_math)
add_subdirectory (myvect_search)
add_subdirectory (myvect_sort)

add_executable (BinarySearch ricerca_binaria.c)
target_link_libraries (BinarySearch Random MyVect MyVectSort MyVectSearch)
