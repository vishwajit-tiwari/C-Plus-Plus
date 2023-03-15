# Makefile for arithmetic operators supporting native and cross-compilation

ifdef ARCH
# Added cross compilation toolchain path
CC = arm-linux-gnueabihf-g++ -g 
else
# Added native compilation toolchain path
CC = g++ -g 
endif


all: arithoperator

arithoperator: arithoperator.o 
	$(CC) -o arithoperator arithoperator.o 

arithoperator.o: arithoperator.cpp
	$(CC) -c -o arithoperator.o arithoperator.cpp 

clean:
	rm -rf *.o arithoperator

