CC=gcc
CFLAGS=-I.
DEPS = CarpetaInterna/vector.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

vectores: main2.o addvec.o multvec.o 
	gcc -o $@ main2.o addvec.o multvec.o $(CFLAGS)
