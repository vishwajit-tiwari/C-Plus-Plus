#Makefile that support Native and Cross-compilation

ifdef ARCH
#Cross-toolchain
CC = arm-linux-gnueabihf-g++ -g 
else
#Native-toolchain
CC = g++ -g
endif

friendFunction: friendFunction.o 
	$(CC) -o friendFunction friendFunction.o 

friendFunction.o: friendFunction.cpp 
	$(CC) -c -o friendFunction.o friendFunction.cpp 

clean:
	rm -rf *.o friendFunction

# Run following command for cross-compilation
# make ARCH=arm
# OR
# make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf-g++ 
