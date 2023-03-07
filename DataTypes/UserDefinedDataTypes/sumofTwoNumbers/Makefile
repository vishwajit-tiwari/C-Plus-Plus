# Makefile for add operation

CC = g++ -g

all: sumofTwoNumbers

sumofTwoNumbers: sumofTwoNumbers.o 
	$(CC) -o sumofTwoNumbers sumofTwoNumbers.o 

sumofTwoNumbers.o: sumofTwoNumbers.cpp
	$(CC) -c -o sumofTwoNumbers.o sumofTwoNumbers.cpp 

clean:
	rm -rf *.o sumofTwoNumbers 


