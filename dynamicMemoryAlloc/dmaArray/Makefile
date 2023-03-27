# Makefile for Array Input Dynamically supporting Native and Cross-compilation.

ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif

all: dmaArray

dmaArray: dmaArray.o 
	$(CC) -o dmaArray dmaArray.o 

dmaArray.o: dmaArray.cpp 
	$(CC) -c -o dmaArray.o dmaArray.cpp 

clean:
	rm -rf *.o dmaArray 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE = arm-linux-gnueabihf-g++ 
