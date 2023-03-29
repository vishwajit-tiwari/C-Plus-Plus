# Makefile for funInClass supporting Native & Cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: funInClass

funInClass: funInClass.o 
	$(CC) -o funInClass funInClass.o 

funInClass.o: funInClass.cpp 
	$(CC) -c -o funInClass.o funInClass.cpp 

clean: 
	rm -rf *.o funInClass 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

