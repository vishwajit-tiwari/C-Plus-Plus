# Makefile for usrInput supporting native and cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: usrInput 

usrInput: usrInput.o 
	$(CC) -o usrInput usrInput.o 

usrInput.o: usrInput.cpp 
	$(CC) -c -o usrInput.o usrInput.cpp 

clean: 
	rm -rf *.o usrInput 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

