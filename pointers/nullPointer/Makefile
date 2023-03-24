
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: nullpointer 

nullpointer: nullpointer.o 
	$(CC) -o nullpointer nullpointer.o 

nullpointer.o: nullpointer.cpp 
	$(CC) -c -o nullpointer.o nullpointer.cpp 

clean:
	rm -rf *.o nullpointer

