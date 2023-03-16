# Makefile for Increment & Decrement Operators that support Native and Cross Copilation

ifdef ARCH
# Cross Toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native Toolchain
CC = g++ -g 
endif

all: incdecoper

incdecoper: incdecoper.o 
	$(CC) -o incdecoper incdecoper.o 

incdecoper.o: incdecoper.cpp 
	$(CC) -c -o incdecoper.o incdecoper.cpp 

clean:
	rm -rf *.o incdecoper

# For Cross Compilation run the following command 
# make ARCH=arm 
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 