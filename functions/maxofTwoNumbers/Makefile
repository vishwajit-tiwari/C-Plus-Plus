# Makefile to maxofTwoNumbers supporting native and cross-compilation.

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: maxofTwoNumbers

maxofTwoNumbers: maxofTwoNumbers.o 
	$(CC) -o maxofTwoNumbers maxofTwoNumbers.o 

maxofTwoNumbers.o: maxofTwoNumbers.cpp 
	$(CC) -c -o maxofTwoNumbers.o maxofTwoNumbers.cpp 

clean:
	rm -rf *.o maxofTwoNumbers 

# Run the following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++

