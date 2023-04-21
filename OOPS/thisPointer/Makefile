
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: thisPointer

thisPointer: thisPointer.o 
	$(CC) -o thisPointer thisPointer.o 

thisPointer.o: thisPointer.cpp
	$(CC) -c -o thisPointer.o thisPointer.cpp 

clean:
	rm -rf *.o thisPointer 

