# Makefile for leap year program supporting native and cross compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: leapyear

leapyear: leapyear.o 
	$(CC) -o leapyear leapyear.o 

leapyear.o: leapyear.cpp 
	$(CC) -c -o leapyear.o leapyear.cpp 

clean:
	rm -rf *.o leapyear

# Run following command for cross-compilation on terminal
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

