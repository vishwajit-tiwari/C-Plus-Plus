# Makefile for if-statement that support Cross as well as Native compilation

ifdef ARCH
# Cross toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native toolchain
CC = g++ -g 
endif

all: ifstatement

ifstatement: ifstatement.o 
	$(CC) -o ifstatement ifstatement.o 

ifstatement.o: ifstatement.cpp
	$(CC) -c -o ifstatement.o ifstatement.cpp

clean:
	rm -rf *.o ifstatement

# For Cross Compilation run the following command
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 
