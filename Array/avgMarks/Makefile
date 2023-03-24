# Makefile for avgMarks supporting Native and Cross-compile

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: avgmarks 

avgmarks: avgmarks.o 
	$(CC) -o avgmarks avgmarks.o 

avgmarks.o: avgmarks.cpp 
	$(CC) -c -o avgmarks.o avgmarks.cpp 

clean:
	rm -rf *.o avgmarks 

