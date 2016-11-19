cmake_minimum_required (VERSION 2.6)

project (Main)

include_directories (vstampa)
add_subdirectory (vstampa)


add_executable (Main main.c)
target_link_libraries (Main Vstampa)
