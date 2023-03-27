# Makefile for Array Input Dynamically supporting Native and Cross-compilation.

ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif

all: currentDateTime

currentDateTime: currentDateTime.o 
	$(CC) -o currentDateTime currentDateTime.o 

currentDateTime.o: currentDateTime.cpp 
	$(CC) -c -o currentDateTime.o currentDateTime.cpp 

clean:
	rm -rf *.o currentDateTime 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE = arm-linux-gnueabihf-g++ 
