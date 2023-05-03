
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: writeToFile

writeToFile: writeToFile.o 
	$(CC) -o writeToFile writeToFile.o 

writeToFile.o: writeToFile.cpp 
	$(CC) -c -o writeToFile.o writeToFile.cpp 

clean:
	rm -rf *.o writeToFile 

