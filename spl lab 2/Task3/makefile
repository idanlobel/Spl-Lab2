all: main
main: menu_map.c
	gcc -m32 -g -c -o Task3.o menu_map.c 
	gcc -m32 -g -o main Task3.o
	
.PHONY: clean 

 #Clean the build directory 

clean: 
	rm -f Task3.o
	rm -f main