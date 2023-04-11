# Makefile for Access-specifier (public,protected)
# Support Native and Cross-compile

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: pubProtected 

pubProtected: pubProtected.o 
	$(CC) -o pubProtected pubProtected.o

pubProtected.o: publicProtected.cpp 
	$(CC) -c -o pubProtected.o publicProtected.cpp

clean:
	rm -rf *.o pubProtected

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
