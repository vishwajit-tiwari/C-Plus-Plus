# Makefile for personInfo supporting Native and Cross-compilation

ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif

all: personInfo

personInfo: personInfo.o 
	$(CC) -o personInfo personInfo.o 

personInfo.o: personInfo.cpp 
	$(CC) -c -o personInfo.o personInfo.cpp 

clean:
	rm -rf *.o personInfo

# Run following command for cross-compilation
# make ARCH=arm
# OR 
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

