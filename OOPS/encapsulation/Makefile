
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: encap 

encap: encap.o 
	$(CC) -o encap encap.o 

encap.o: encap.cpp 
	$(CC) -c -o encap.o encap.cpp 

clean:
	rm -rf *.o encap  
