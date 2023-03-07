
CC = g++ -g

all: basicSyntaxV2.0

basicSyntaxV2: basicSyntaxV2.o
	$(CC) -o basicSyntaxV2 basicSyntaxV2.o 

basicSyntaxV2.o: basicSyntaxV2.cpp
	$(CC) -c -o basicSyntaxV2.o basicSyntaxV2.cpp

clean:
	rm -rf *.o basicSyntaxV2 

