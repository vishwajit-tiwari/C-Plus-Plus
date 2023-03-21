# Makefile for sumofinput supporting native and cross-compilation.

ifdef ARCH
# Cross toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native toolchain
CC = g++ -g 
endif

all: sumofinput

sumofinput: sumofinput.o 
	$(CC) -o sumofinput sumofinput.o 

sumofinput.o: sumofinput.cpp 
	$(CC) -c -o sumofinput.o sumofinput.cpp 

clean: 
	rm -rf *.o sumofinput 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++

