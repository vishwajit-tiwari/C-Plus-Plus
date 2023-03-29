# Makefile for countOddPairs supporting Native & Cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: countOddPairs

countOddPairs: countOddPairs.o 
	$(CC) -o countOddPairs countOddPairs.o 

countOddPairs.o: countOddPairs.cpp 
	$(CC) -c -o countOddPairs.o countOddPairs.cpp 

clean: 
	rm -rf *.o countOddPairs 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

