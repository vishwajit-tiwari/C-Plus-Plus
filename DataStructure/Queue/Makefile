
ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Native-toolchain
CC = g++ -g 
endif


all: queue

queue: queue.o 
	$(CC) -o queue queue.o 

queue.o: queue.cpp 
	$(CC) -c -o queue.o queue.cpp 

clean:
	rm -rf *.o queue 

