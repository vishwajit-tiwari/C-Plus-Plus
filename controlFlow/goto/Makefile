# Makefile for goto statement supporting native and cross-compilation.

ifdef ARCH
# Cross toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: goto

goto: goto.o 
	$(CC) -o goto goto.o 

goto.o: goto.cpp 
	$(CC) -c -o goto.o goto.cpp 

clean: 
	rm -rf *.o goto

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

