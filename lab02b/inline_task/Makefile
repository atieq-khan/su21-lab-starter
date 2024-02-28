CC=gcc
CFLAGS=-Wall -std=c99 -g

all: inline

inline: inline.o
	$(CC) -o inline inline.o 

inline.o: inline.c 
	$(CC) $(CFLAGS) -c inline.c

clean:
	rm inline inline.o