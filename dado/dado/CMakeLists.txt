include_directories(../random)

add_libray (Dado dado.c dado.h)
target_link_libraries(Dado Random)
