CC=gcc

all: bin/booker

bin/booker: src/seating.c src/booker.c
	$(CC) -o $@ $?