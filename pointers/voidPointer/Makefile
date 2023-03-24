
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: voidPointer 

voidPointer: voidPointer.o 
	$(CC) -o voidPointer voidPointer.o 

voidPointer.o: voidPointer.cpp 
	$(CC) -c -o voidPointer.o voidPointer.cpp 

clean:
	rm -rf *.o voidPointer

