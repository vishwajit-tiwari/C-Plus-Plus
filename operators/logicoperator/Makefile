# Makefile for Logical Operator that support Native as well as Cross-Compilation

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: logioperator 

logioperator: logioperator.o 
	$(CC) -o logioperator logioperator.o 

logioperator.o: logioperator.cpp 
	$(CC) -c -o logioperator.o logioperator.cpp 

clean:
	rm -rf *.o logioperator

#Run the following commands from command line for ARCH
#make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++
