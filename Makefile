CC=gcc
SRC = $(wildcard *.c)
CFLAGS=-g -std=c99

out: $(SRC)
	$(CC) $(SRC) $(CFLAGS) 


clean:
	-rm a.out
