# Makefile for Access-specifier (public,private,protected)
# Support Native and Cross-compile

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: pubPriv 

pubPriv: pubPriv.o 
	$(CC) -o pubPriv pubPriv.o

pubPriv.o: publicPrivate.cpp 
	$(CC) -c -o pubPriv.o publicPrivate.cpp

clean:
	rm -rf *.o pubPriv

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
