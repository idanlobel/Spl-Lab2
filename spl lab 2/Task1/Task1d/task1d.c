#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int iarray[] = {1,2,3};
    char carray[] = {'a','b','c'};
    int* iarrayPtr=&iarray;
    char* carrayPtr=&carray;
    float* p;
    printf("iarray[0]=%d\n",*iarrayPtr);
    printf("iarray[1]=%d\n",*(iarrayPtr+1));
    printf("iarray[2]=%d\n",*(iarrayPtr+2));
    printf("carray[0]=%c\n",*carrayPtr);
    printf("carray[1]=%c\n",*(carrayPtr+1));
    printf("carray[2]=%c\n",*(carrayPtr+2));
    printf("p=%p\n",p);
}