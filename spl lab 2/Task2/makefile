all: main
main: menu_map.c
	gcc -m32 -g -c -o Task2.o menu_map.c 
	gcc -m32 -g -o main Task2.o
	
.PHONY: clean 

 #Clean the build directory 

clean: 
	rm -f Task2.o
	rm -f main