CFLAGS=-Wall -ansi -pedantic

main: main.o dado.o random.o
main.o: main.c dado.c dado.h
random.o: random.c random.h
dado.o: dado.c random.c random.h


.PHONY: clean
clean:
	rm -rf *.o vettori1 vettori2
