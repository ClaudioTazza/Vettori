cmake_minimum_required (VERSION 2.6)

project (bucketsort)

include_directories (myvect)
include_directories (myvect_sort)

add_subdirectory (random)
add_subdirectory (myvect)
add_subdirectory (myvect_sort)
add_subdirectory (myvect_math)

add_executable (Main main.c)
target_link_libraries (Main MyVect MyVectSort)
