

CC= g++ -g 

all: externVar

externVar: externVar.o 
	$(CC) -o externVar externVar.o 

externVar.o: externVar.cpp 
	$(CC) -c -o externVar.o externVar.cpp

clean:
	rm -rf *.o externVar

