
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: newFile

newFile: newFile.o 
	$(CC) -o newFile newFile.o 

newFile.o: newFile.cpp 
	$(CC) -c -o newFile.o newFile.cpp 

clean:
	rm -rf *.o newFile 

