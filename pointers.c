#include<stdio.h>

int main () {
    int age = 19;
    int *ptr = &age; //assigning address of age to ptr
    printf("\n Address of age %p",&age);
    printf(" \n value of ptr %d",*ptr);
    return 0;
}