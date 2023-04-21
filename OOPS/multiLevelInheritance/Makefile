
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g
else
CC = g++ -g 
endif


all: multiLevelInheritance 


multiLevelInheritance: multiLevelInheritance.o 
	$(CC) -o multiLevelInheritance multiLevelInheritance.o 

multiLevelInheritance.o: multiLevelInheritance.cpp 
	$(CC) -c -o multiLevelInheritance.o multiLevelInheritance.cpp 

clean:
	rm -rf *.o multiLevelInheritance 

