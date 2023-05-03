
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif


all: factOfNum

factOfNum: factOfNum.o 
	$(CC) -o factOfNum factOfNum.o 

factOfNum.o: factOfNum.cpp 
	$(CC) -c -o factOfNum.o factOfNum.cpp 

clean:
	rm -rf *.o factOfNum 

