# Makefile for printing triangle supporting Native and Cross-compilation

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: printTriangle 

printTriangle: printTriangle.o 
	$(CC) -o printTriangle printTriangle.o 

printTriangle.o: printTriangle.cpp 
	$(CC) -c -o printTriangle.o printTriangle.cpp 

clean: 
	rm -rf *.o printTriangle 

# Run following command to cross-compile
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 
