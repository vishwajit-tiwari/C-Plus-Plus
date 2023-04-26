
ifdef ARCH 
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: funOverLoad 

funOverLoad: funOverLoad.o 
	$(CC) -o funOverLoad funOverLoad.o 

funOverLoad.o: funOverLoad.cpp
	$(CC) -c -o funOverLoad.o funOverLoad.cpp 

clean:
	rm -rf *.o funOverLoad 

