
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: usrInputToFile

usrInputToFile: usrInputToFile.o 
	$(CC) -o usrInputToFile usrInputToFile.o 

usrInputToFile.o: usrInputToFile.cpp 
	$(CC) -c -o usrInputToFile.o usrInputToFile.cpp 

clean:
	rm -rf *.o usrInputToFile 

