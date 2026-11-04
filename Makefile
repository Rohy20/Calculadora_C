CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude
LIBS = -lm

SRC = src/main.c src/operations.c src/advanced.c

all:
	$(CC) $(CFLAGS) -o calc $(SRC) $(LIBS)

clean:
	rm -f calc