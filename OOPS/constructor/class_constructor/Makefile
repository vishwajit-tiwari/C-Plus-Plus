# Makefile for class-constructor
# Support Native and Cross-compile

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: classConstructor 

classConstructor: classConstructor.o 
	$(CC) -o classConstructor classConstructor.o

classConstructor.o: classConstructor.cpp 
	$(CC) -c -o classConstructor.o classConstructor.cpp

clean:
	rm -rf *.o classConstructor

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
