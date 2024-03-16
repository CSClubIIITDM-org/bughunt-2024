//allocating memory to a pointer through a function

#include<stdio.h>
#include<stdlib.h>
int *fun()
{
    int *x = (int *)malloc(sizeof(int));
    return &x;
}
int main()
{
    int *ptr = fun ();
    printf ("%d", *ptr);
    return 0;
}
