all: main
main: count-words.c
	gcc -m32 -g -c -o Task0.o count-words.c 
	gcc -m32 -g -o main Task0.o
	

.PHONY: clean 

 #Clean the build directory 

clean: 
	rm -f Task0.o
	rm -f main