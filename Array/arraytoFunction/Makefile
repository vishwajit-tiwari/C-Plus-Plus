# Makefile for Passing Array to function supporting Native and Cross-compile

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: arraytofun 

arraytofun: arraytofun.o 
	$(CC) -o arraytofun arraytofun.o 

arraytofun.o: arraytofun.cpp 
	$(CC) -c -o arraytofun.o arraytofun.cpp 

clean:
	rm -rf *.o arraytofun 

# Run the following command for cross-compilation
# make ARCH=arm
