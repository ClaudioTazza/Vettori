include_directories (../myvect_math)

add_library (MyVectSort myvect_sort.c myvect_sort.h)
target_link_libraries (MyVectSort MyVectMath)
