all: main
main: task1d.c
	gcc -m32 -g -c -o Task1d.o task1d.c 
	gcc -m32 -g -o main Task1d.o
	
.PHONY: clean 

 #Clean the build directory 

clean: 
	rm -f Task1d.o
	rm -f main