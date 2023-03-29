# Makefile for volumeofBox supporting Native & Cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: volumeofBox

volumeofBox: volumeofBox.o 
	$(CC) -o volumeofBox volumeofBox.o 

volumeofBox.o: volumeofBox.cpp 
	$(CC) -c -o volumeofBox.o volumeofBox.cpp 

clean: 
	rm -rf *.o volumeofBox 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

