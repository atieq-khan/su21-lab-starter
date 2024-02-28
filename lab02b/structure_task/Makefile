CC=gcc
CFLAGS=-Wall -std=c99 -g

all: structure

structure: structure.o
	$(CC) -o structure structure.o 

structure.o: structure.c structure.h
	$(CC) $(CFLAGS) -c structure.c

clean:
	rm structure structure.o