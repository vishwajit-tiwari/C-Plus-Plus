
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g
else
CC = g++ -g 
endif

all: inlineFunction 

inlineFunction: inlineFunction.o 
	$(CC) -o inlineFunction inlineFunction.o 

inlineFunction.o: inlineFunction.cpp 
	$(CC) -c -o inlineFunction.o inlineFunction.cpp 

clean:
	rm -rf *.o inlineFunction

