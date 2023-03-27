# Makefile for arrayPointer supporting native and cross-compilation.

ifdef ARCH
# cross toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# native toolchain
CC = g++ -g 
endif

all: arrayPointer 

arrayPointer: arrayPointer.o 
	$(CC) -o arrayPointer arrayPointer.o 

arrayPointer.o: arrayPointer.cpp 
	$(CC) -c -o arrayPointer.o arrayPointer.cpp 

clean:
	rm -rf *.o arrayPointer

