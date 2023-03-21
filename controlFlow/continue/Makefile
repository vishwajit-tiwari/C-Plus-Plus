# Makefile for continue statement supporting native and cross-compilation.

ifdef ARCH
# Cross toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: continue

continue: continue.o 
	$(CC) -o continue continue.o 

continue.o: continue.cpp 
	$(CC) -c -o continue.o continue.cpp 

clean: 
	rm -rf *.o continue

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

