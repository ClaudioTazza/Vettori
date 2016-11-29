cmake_minimum_required (VERSION 2.6)

project (20Input)

include_directories (myvect_search)

add_subdirectory (myvect_search)

add_executable (Main main.c)
target_link_libraries (Main MyVectSearch)
