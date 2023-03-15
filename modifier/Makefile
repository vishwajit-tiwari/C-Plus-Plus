#Makefile for modifiers that support native-compilation as well as cross-compilation

ifdef ARCH
# Add the cross-compiler toolchains
CC = arm-linux-gnueabihf-g++ -g 
else
# Add the native compiler toolchains
CC = g++ -g
endif

all: modifiers

modifiers: modifiers.o
	$(CC) -o modifiers modifiers.o

modifiers.o: modifiers.cpp
	$(CC) -c -o modifiers.o modifiers.cpp 

clean:
	rm -rf *.o modifiers

