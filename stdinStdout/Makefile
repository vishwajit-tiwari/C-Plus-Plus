
CC = g++ -g 

all: usrinput

usrinput: usrinput.o 
	$(CC) -o usrinput usrinput.o

usrinput.o: usrinput.cpp 
	$(CC) -c -o usrinput.o usrinput.cpp 

clean: 
	rm -rf *.o usrinput

