#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
char censor(char c) {
  if(c == '!')
    return '.';
  else
    return c;
}
//task 2b
char my_get(char c){
/* Ignores c, reads and returns a character from stdin using fgetc. */
  char ch=fgetc(stdin);
  return ch;
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
  printf("%0x\n",c);
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
  return mapped_array;
}
 
int main(int argc, char **argv){
  //in use to test my code in task 2
    char arr1[] = {'H','E','Y','!'};
    char* arr2 = map(arr1, 4, censor);
    printf("%s\n", arr2);
    char* arr3 = map(arr1, 4, &cprt);
    char* arr4 = map(arr1, 4, &encrypt);
    char* arr5 = map(arr1, 4, &decrypt);
    char* arr6 = map(arr1, 4, &xprt);
    char* arr7 = map(arr1, 4, &my_get);
    printf("%s\n", arr4);
    printf("%s\n", arr5);
    printf("%s\n", arr7);
    free(arr2);
    free(arr3);
    free(arr4);
    free(arr5);
    free(arr6);
    free(arr7);
    quit('a');
    quit('Q');
    //printf("not exit");
    quit('q');
}
