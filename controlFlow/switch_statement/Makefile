# Makefile for switch statement supporting native and cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: switch

switch: switch.o
	$(CC) -o switch switch.o 

switch.o: switch.cpp 
	$(CC) -c -o switch.o switch.cpp 

clean:
	rm -rf *.o switch

# Run the following commands from terminal
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++

