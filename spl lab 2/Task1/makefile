all: main
main: addresses.c
	gcc -m32 -g -c -o Task1.o addresses.c 
	gcc -m32 -g -o main Task1.o
	
.PHONY: clean 

 #Clean the build directory 

clean: 
	rm -f Task1.o
	rm -f main