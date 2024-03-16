//allocating memory to a pointer through a function (veeresh)

#include<stdio.h>
int x;
int *fun()
{
    x = 5;
    return &x;
}
int main()
{
    int *ptr = fun ();
    printf ("%d", *ptr);
    return 0;
}
