
CC= g++ -g 

all: area

area: area.o 
	$(CC) -o area area.o

area.o: area.cpp 
	$(CC) -c -o area.o area.cpp

clean:
	rm -rf *.o area

