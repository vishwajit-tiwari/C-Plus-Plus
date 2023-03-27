# Makefile for usrInput supporting native and cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: getStrPtr 

getStrPtr: getStrPtr.o 
	$(CC) -o getStrPtr getStrPtr.o 

getStrPtr.o: getStrPtr.cpp 
	$(CC) -c -o getStrPtr.o getStrPtr.cpp 

clean: 
	rm -rf *.o getStrPtr 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

