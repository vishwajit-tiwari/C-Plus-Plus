
CC = g++ -g

all: literals

literals: literals.o
	$(CC) -o literals literals.o

literals.o: literals.cpp
	$(CC) -c -o literals.o literals.cpp

clean:
	rm -rf *.o literals

