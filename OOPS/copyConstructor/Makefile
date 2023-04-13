# Makefile for copy constructor
# Support Native and Cross-compile

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: cpyConstructor 

cpyConstructor: cpyConstructor.o 
	$(CC) -o cpyConstructor cpyConstructor.o

cpyConstructor.o: cpyConstructor.cpp 
	$(CC) -c -o cpyConstructor.o cpyConstructor.cpp

clean:
	rm -rf *.o cpyConstructor

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
