
CC = g++ -g

all: preprocessor

preprocessor: preprocessor.o
	$(CC) -o preprocessor preprocessor.o

preprocessor.o: preprocessor.cpp
	$(CC) -c -o preprocessor.o preprocessor.cpp

clean:
	rm -rf *.o preprocessor

