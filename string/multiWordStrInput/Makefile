# Makefile for usrInput supporting native and cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: multiWordStrInput 

multiWordStrInput: multiWordStrInput.o 
	$(CC) -o multiWordStrInput multiWordStrInput.o 

multiWordStrInput.o: multiWordStrInput.cpp 
	$(CC) -c -o multiWordStrInput.o multiWordStrInput.cpp 

clean: 
	rm -rf *.o multiWordStrInput 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

