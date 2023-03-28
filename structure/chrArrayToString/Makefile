# Makefile for chrArrayToString supporting Native and Cross-compilation

ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif

all: chrArrayToString

chrArrayToString: chrArrayToString.o 
	$(CC) -o chrArrayToString chrArrayToString.o 

chrArrayToString.o: chrArrayToString.cpp 
	$(CC) -c -o chrArrayToString.o chrArrayToString.cpp 

clean:
	rm -rf *.o chrArrayToString

# Run following command for cross-compilation
# make ARCH=arm
# OR 
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

