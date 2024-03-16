#include<stdio.h>

int *fun()
{
    static int x = 5; // Use a static variable
    return &x;
}

int main()
{
    int *ptr = fun ();
    printf ("%d", *ptr);
    return 0;
}
