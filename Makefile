CC=gcc

all: bin/booker

bin/booker: src/seating.c src/booking.c src/booker.c
	$(CC) -o $@ $?