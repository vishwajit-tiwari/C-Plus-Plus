# Makefile for avgMarks supporting Native and Cross-compile

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: arrayIO 

arrayIO: arrayIO.o 
	$(CC) -o arrayIO arrayIO.o 

arrayIO.o: arrayIO.cpp 
	$(CC) -c -o arrayIO.o arrayIO.cpp 

clean:
	rm -rf *.o arrayIO 

# Run the following command for cross-compilation
# make ARCH=arm
