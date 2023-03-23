# Makefile for Prime Number supporting Native and Cross-compilation

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: primeNumber 

primeNumber: primeNumber.o 
	$(CC) -o primeNumber primeNumber.o 

primeNumber.o: primeNumber.cpp 
	$(CC) -c -o primeNumber.o primeNumber.cpp 

clean: 
	rm -rf *.o primeNumber 

# Run following command to cross-compile
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 
