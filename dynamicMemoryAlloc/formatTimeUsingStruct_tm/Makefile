# Makefile for formatTimeUsingStruct_tm supporting Native and Cross-compilation.

ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif

all: formatTimeUsingStruct_tm

formatTimeUsingStruct_tm: formatTimeUsingStruct_tm.o 
	$(CC) -o formatTimeUsingStruct_tm formatTimeUsingStruct_tm.o 

formatTimeUsingStruct_tm.o: formatTimeUsingStruct_tm.cpp 
	$(CC) -c -o formatTimeUsingStruct_tm.o formatTimeUsingStruct_tm.cpp 

clean:
	rm -rf *.o formatTimeUsingStruct_tm 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE = arm-linux-gnueabihf-g++ 
