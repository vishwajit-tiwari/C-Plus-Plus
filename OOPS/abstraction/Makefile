
ifdef ARCH 
CC = arm-linux-gnueabihf-g++ 
else
CC = g++ -g 
endif


all: abstract 

abstract: abstract.o 
	$(CC) -o abstract abstract.o 

abstract.o: abstract.cpp 
	$(CC) -c -o abstract.o abstract.cpp

clean:
	rm -rf *.o abstract 

