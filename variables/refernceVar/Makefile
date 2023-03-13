
CC = g++ -g

all: refernceVar

refernceVar: refernceVar.o 
	$(CC) -o refernceVar refernceVar.o 

refernceVar.o: refernceVar.cpp 
	$(CC) -c -o refernceVar.o refernceVar.cpp 

clean:
	rm -rf *.o refernceVar

