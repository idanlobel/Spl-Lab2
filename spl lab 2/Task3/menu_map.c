#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

 
char censor(char c) {
  if(c == '!')
    return '.';
  else
    return c;
}
//task 2b
char my_get(char c){
/* Ignores c, reads and returns a character from stdin using fgetc. */
  //conversion specifier won't automatically skip any leading whitespace like \n
  return fgetc(stdin);
}
//task 2b
char cprt(char c){
/* If c is a number between 0x20 and 0x7E, cprt prints the character of ASCII value c followed by a new line. Otherwise, cprt prints the dot ('.') character. After printing, cprt returns the value of c unchanged. */
  if(c>=0x20&&c<=0x7E){
    printf("%c\n",c);
  }
  else{
    printf(".\n");//more comfortable to print \n
  }
  return c;
}
//task 2b
char encrypt(char c)
/* Gets a char c and returns its encrypted form by adding 3 to its value. If c is not between 0x20 and 0x7E it is returned unchanged */
{
  char return_char=c;
  if(c>=0x20&&c<=0x7E){
    return_char=return_char+3;
  }
  return return_char;
}
//task 2b
char decrypt(char c)
/* Gets a char c and returns its decrypted form by reducing 3 to its value. If c is not between 0x20 and 0x7E it is returned unchanged */
{
  char return_char=c;
  if(c>=0x20&&c<=0x7E){
    return_char=return_char-3;
  }
  return return_char;
}
//task 2b
char xprt(char c)
/* xprt prints the value of c in a hexadecimal representation followed by a new line, and returns c unchanged. */
{
    if(c>=0x20&&c<=0x7E){
        printf("%0x\n",c);
    } else {
        printf(".\n");
    }
    return c;
}

//task2c
char quit(char c)
/* Gets a char c, and if the char is 'q' , ends the program with exit code 0. Otherwise returns c. */ 
{
  if(c=='q'){
    exit(0);
  }
  return c;
}
//task2a
char* map(char *array, int array_length, char (*f) (char)){
  char* mapped_array = (char*)(malloc(array_length*sizeof(char)));
  /* TODO: Complete during task 2.a */
  int index=0;
    while(index<array_length){
        mapped_array[index]=f(*(array+index));
        index++;
    }
    free(array);
  return mapped_array;
}
 

struct fun_desc {
char *name;
char (*fun)(char);
} fun_desc;

int main(int argc, char **argv){
    char* carray=calloc(5, 1);
    struct fun_desc menu[] = { { "Get string", &my_get }, {"Print string", &cprt}, {"Print hex", &xprt}, { "Censor", &censor }, {"Encrypt", &encrypt} , {"Decrypt", &decrypt} , {"Quit", &quit} , {"Junk",&menu} , { NULL, NULL } }; 
    
    while (true)
    {
        int index=0;
        printf("Please choose a function:\n");
        int size_of_menu=sizeof(menu)/sizeof(fun_desc);//calculate the size of the array by the size of all the array in bytes divide by the size of the data type fun_desc
        while(menu[index].name!=NULL){
            printf("%d)  %s\n", index, menu[index].name);
            index++;
        }
        printf("Option : ");
        int option;
        char input[1000];
        fgets(input, 1000, stdin);//10\n
        sscanf(input, "%d\n", &option);
        /*//gets an input from the user
        char ch=fgetc(stdin);
        int input_index=0;//index for input string
        while(!feof(ch)){//ask if I have another way to do this
            input[input_index]=ch;
            input_index++;
            ch=fgetc(stdin);
        }
        int menu_option=atoi(input);//the option the user choose
        */
        printf("%d",option);
        printf("\n\n");
        bool within_bounds=option>=0 && option<size_of_menu;//flag for within bounds values or not
        if(within_bounds){
            printf("Within bounds\n");
            carray = map(carray, 5, menu[option].fun);
        }
        else{
            printf("Not within bounds\n");
            quit(0);
        }
    }
    
    
}
