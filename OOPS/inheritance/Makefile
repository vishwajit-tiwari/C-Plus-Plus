
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif


all: inheritance 


inheritance: inheritance.o 
	$(CC) -o inheritance inheritance.o 

inheritance.o: inheritance.cpp 
	$(CC) -c -o inheritance.o inheritance.cpp 

clean:
	rm -rf *.o inheritance 

