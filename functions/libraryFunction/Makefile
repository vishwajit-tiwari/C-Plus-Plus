# Makefile to find Square-root of given number support Native & Cross-compilation

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: sqrt

sqrt: libraryFunction.o 
	$(CC) -o sqrt libraryFunction.o 

libraryFunction.o: libraryFunction.cpp 
	$(CC) -c -o libraryFunction.o libraryFunction.cpp 

clean:
	rm -rf *.o libraryFunction 

# Run the following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

