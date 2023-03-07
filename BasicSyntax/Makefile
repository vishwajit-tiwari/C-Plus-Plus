
CC = g++

all: basicSyntax

basicSyntax: basicSyntax.o 
	$(CC) -o basicSyntax basicSyntax.o

basicSyntax.o:
	$(CC) -c -o basicSyntax.o basicSyntax.cpp

clean:
	rm -rf *.o basicSyntax 

