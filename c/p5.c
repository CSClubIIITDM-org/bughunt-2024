//program to increment and print the value of a using a pointer (veeresh)

#include <stdio.h>

void main(){
    int a=10;
    int *ptr = &a;

    (*ptr)++;  // the *ptr should be mentioned in the brackets

    printf("%d", *ptr);
}
