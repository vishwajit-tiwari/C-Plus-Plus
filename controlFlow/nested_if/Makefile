# Makefile for if-else statement supporting native and cross compilation.

ifdef ARCH
# Cross toolchain 
CC = arm-linux-gnueabihf-g++ -g 
else
# Native toolchain
CC = g++ -g 
endif

all: nested_if

nested_if: nested_if.o 
	$(CC) -o nested_if nested_if.o 

nested_if.o: nested_if.cpp 
	$(CC) -c -o nested_if.o nested_if.cpp 

clean:
	rm -rf *.o nested_if

# Run following command from terminal
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 
