
ifdef ARCH 
# Added arm cross-compilation toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
# Added native toolchain
CC = g++ -g 
endif

all: reloper

reloper: reloper.o 
	$(CC) -o reloper reloper.o 

reloper.o: reloper.cpp 
	$(CC) -c -o reloper.o reloper.cpp 

clean:
	rm -rf *.o reloper 

