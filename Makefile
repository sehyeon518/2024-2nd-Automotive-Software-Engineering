CC = gcc
CFLAGS = -Wall

all: fibonacci_program

fibonacci_program: main.o fibonacci.o
	$(CC) $(CFLAGS) -o fibonacci_program main.o fibonacci.o

main.o: main.c fibonacci.h
	$(CC) $(CFLAGS) -c main.c

fibonacci.o: fibonacci.c fibonacci.h
	$(CC) $(CFLAGS) -c fibonacci.c

clean:
	rm -f *.o fibonacci_program
