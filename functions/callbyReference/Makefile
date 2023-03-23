# Makefile for swapTwoNumbers supporting native and cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: swapTwoNumbers

swapTwoNumbers: swapTwoNumbers.o 
	$(CC) -o swapTwoNumbers swapTwoNumbers.o 

swapTwoNumbers.o: swapTwoNumbers.cpp 
	$(CC) -c -o swapTwoNumbers.o swapTwoNumbers.cpp 

clean:
	rm -rf *.o swapTwoNumbers 

# Run the following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++

