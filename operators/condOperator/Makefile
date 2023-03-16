# Makefile for Conditional/Ternary Operator supporting Native as well as Cross-compile

ifdef ARCH
# Cross toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native toolchain
CC = g++ -g 
endif

all: condoper

condoper: condoper.o 
	$(CC) -o condoper condoper.o 

condoper.o: condoper.cpp
	$(CC) -c -o condoper.o condoper.cpp 

clean:
	rm -rf *.o condoper

# For Cross compilation run the following command
# make ARCH=arm
# or
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++

