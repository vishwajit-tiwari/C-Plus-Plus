
CC = g++ -g 

all: keyboardinput

keyboardinput: keyboardinput.o 
	$(CC) -o keyboardinput keyboardinput.o 

keyboardinput.o: keyboardinput.cpp 
	$(CC) -c -o keyboardinput.o keyboardinput.cpp 

clean:
	rm -rf *.o keyboardinput

