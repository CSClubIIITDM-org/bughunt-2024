//allocating memory to a pointer through a function

#include<stdio.h>
int x = 5;
int *fun()
{
    return &x;
}
int main()
{
    int *ptr = fun ();
    printf ("%d", *ptr);
    return 0;
}
