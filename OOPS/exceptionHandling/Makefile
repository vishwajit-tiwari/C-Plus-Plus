
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif


all: exceptionHandling 

exceptionHandling: exceptionHandling.o 
	$(CC) -o exceptionHandling exceptionHandling.o 

exceptionHandling.o: exceptionHandling.cpp 
	$(CC) -c -o exceptionHandling.o exceptionHandling.cpp 

clean:
	rm -rf *.o exceptionHandling 

