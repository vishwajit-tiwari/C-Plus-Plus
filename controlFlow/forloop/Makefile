# Makefile for factorial supporting native and cross-compilation.

ifdef ARCH
# Cross toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native toolchain
CC = g++ -g 
endif

all: factorial

factorial: factorial.o 
	$(CC) -o factorial factorial.o 

factorial.o: factorial.cpp 
	$(CC) -c -o factorial.o factorial.cpp 

clean: 
	rm -rf *.o factorial 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++

