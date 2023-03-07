
CC= g++ -g 

all: dateMonthYear

dateMonthYear: dateMonthYear.o 
	$(CC) -o dateMonthYear dateMonthYear.o 

dateMonthYear.o: dateMonthYear.cpp 
	$(CC) -c -o dateMonthYear.o dateMonthYear.cpp

clean:
	rm -rf *o dateMonthYear


