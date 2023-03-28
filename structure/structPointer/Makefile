# Makefile for structPointer supporting Native and Cross-compilation

ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif

all: structPointer

structPointer: structPointer.o 
	$(CC) -o structPointer structPointer.o 

structPointer.o: structPointer.cpp 
	$(CC) -c -o structPointer.o structPointer.cpp 

clean:
	rm -rf *.o structPointer

# Run following command for cross-compilation
# make ARCH=arm
# OR 
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

