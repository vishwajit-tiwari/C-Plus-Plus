
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif


all: staticPoly

staticPoly: staticPoly.o 
	$(CC) -o staticPoly staticPoly.o 

staticPoly.o: staticPoly.cpp 
	$(CC) -c -o staticPoly.o staticPoly.cpp 

clean: 
	rm -rf *.o staticPoly 

