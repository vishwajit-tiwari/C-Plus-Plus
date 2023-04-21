
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif


all: multipleInheritance

multipleInheritance: multipleInheritance.o 
	$(CC) -o multipleInheritance multipleInheritance.o 

multipleInheritance.o: multipleInheritance.cpp 
	$(CC) -c -o multipleInheritance.o multipleInheritance.cpp 

clean:
	rm -rf *.o multipleInheritance 

