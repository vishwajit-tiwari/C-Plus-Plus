# Makefile for if-else statement supporting native and cross compilation.

ifdef ARCH
# Cross toolchain 
CC = arm-linux-gnueabihf-g++ -g 
else
# Native toolchain
CC = g++ -g 
endif

all: ifelse

ifelse: ifelse.o 
	$(CC) -o ifelse ifelse.o 

ifelse.o: ifelse.cpp 
	$(CC) -c -o ifelse.o ifelse.cpp 

clean:
	rm -rf *.o ifelse

# Run following command from terminal
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 
