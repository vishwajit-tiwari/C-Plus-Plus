
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: stack 

stack: stack.o 
	$(CC) -o stack stack.o 

stack.o: stack.cpp 
	$(CC) -c -o stack.o stack.cpp 

clean:
	rm -rf *.o stack 

