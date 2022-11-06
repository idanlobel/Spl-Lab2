#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int iarray[3];
    float farray[3];
    double darray[3];
    char carray[3];
    printf("Address of iarray : %p\n",&iarray);
    printf("Address of iarray+1 : %p\n",&iarray+1);
    printf("Address of farray : %p\n",&farray);
    printf("Address of farray+1 : %p\n",&farray+1);
    printf("Address of darray : %p\n",&darray);
    printf("Address of darray+1 : %p\n",&darray+1);
    printf("Address of carray : %p\n",&carray);
    printf("Address of carray+1 : %p\n",&carray+1);
}