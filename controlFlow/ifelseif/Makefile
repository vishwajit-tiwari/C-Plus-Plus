# Makefile for if-else statement supporting native and cross compilation.

ifdef ARCH
# Cross toolchain 
CC = arm-linux-gnueabihf-g++ -g 
else
# Native toolchain
CC = g++ -g 
endif

all: ifelseif

ifelseif: ifelseif.o 
	$(CC) -o ifelseif ifelseif.o 

ifelseif.o: ifelseif.cpp 
	$(CC) -c -o ifelseif.o ifelseif.cpp 

clean:
	rm -rf *.o ifelseif

# Run following command from terminal
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 
