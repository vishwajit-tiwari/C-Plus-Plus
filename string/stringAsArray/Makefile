# Makefile for charecter Array supporting Native and Cross-compilation.

ifdef ARCH
# Cross-toolchain
CC = arm-linux.gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif 

all: stringAsArray 

stringAsArray: stringAsArray.o 
	$(CC) -o stringAsArray stringAsArray.o 

stringAsArray.o: stringAsArray.cpp 
	$(CC) -c -o stringAsArray.o stringAsArray.cpp 

clean:
	rm -rf *.o stringAsArray 

# Run following command for cross-compilation
# make ARCH=arm
# OR 
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 
