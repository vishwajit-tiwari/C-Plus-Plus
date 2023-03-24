# Makefile for studentsMarks supporting native & cross-compilation

ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif

all: studentsMarks

studentsMarks: studentsMarks.o 
	$(CC) -o studentsMarks studentsMarks.o 

studentsMarks.o: studentsMarks.cpp 
	$(CC) -c -o studentsMarks.o studentsMarks.cpp 

clean:
	rm -rf *.o studentsMarks 

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 

