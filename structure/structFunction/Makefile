# Makefile for structFunction supporting Native and Cross-compilation

ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif

all: structFunction

structFunction: structFunction.o 
	$(CC) -o structFunction structFunction.o 

structFunction.o: structFunction.cpp 
	$(CC) -c -o structFunction.o structFunction.cpp 

clean:
	rm -rf *.o structFunction

# Run following command for cross-compilation
# make ARCH=arm
# OR 
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

