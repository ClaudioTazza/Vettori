cmake_minimum_required (VERSION 2.6)

project (LinearSearch)

include_directories (random)
include_directories (myvect)
include_directories (myvect_search)

add_subdirectory (random)
add_subdirectory (myvect)
add_subdirectory (myvect_search)

add_executable (LinearSearch ricerca_lineare.c)
target_link_libraries (LinearSearch Random MyVect MyVectSearch)
