all: main
main: task1b.c
	gcc -m32 -g -c -o Task1b.o task1b.c 
	gcc -m32 -g -o main Task1b.o
	
.PHONY: clean 

 #Clean the build directory 

clean: 
	rm -f Task1b.o
	rm -f main