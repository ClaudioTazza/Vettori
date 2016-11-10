cmake_minimum_required (VERSION 2.6)

project (Main)

include_directories (myvect)

add_subdirectory (random)
add_subdirectory (myvect)

add_executable (Main main.c)
target_link_libraries (Main Myvect)
