
ifdef ARCH
CC = arm-linux-gnueabihf-g++ -g 
else
CC = g++ -g 
endif


all: templates

templates: templates.o 
	$(CC) -o templates templates.o 

templates.o: templates.cpp 
	$(CC) -c -o templates.o templates.cpp 

clean: 
	rm -rf *.o templates

