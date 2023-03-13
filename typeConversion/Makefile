
CC = g++ -g 

all: typecasting

typecasting: typecasting.o 
	$(CC) -o typecasting typecasting.o

typecasting.o: typecasting.cpp 
	$(CC) -c -o typecasting.o typecasting.cpp

clean: 
	rm -rf *.o typecasting

