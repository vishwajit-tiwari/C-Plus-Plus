# Makefile for class-distructor
# Support Native and Cross-compile

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: classDistructor 

classDistructor: classDistructor.o 
	$(CC) -o classDistructor classDistructor.o

classDistructor.o: classDistructor.cpp 
	$(CC) -c -o classDistructor.o classDistructor.cpp

clean:
	rm -rf *.o classDistructor

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
