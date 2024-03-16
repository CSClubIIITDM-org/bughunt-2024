//allocating memory to a pointer through a function

#include<stdio.h>
int *fun()
{
    int *ptr=(int*)malloc(sizeof(int));
    if(ptr==NULL){
        exit(1);}
    *ptr=5;
    return ptr;
}
int main()
{
    int *ptr = fun ();
    printf ("%d", *ptr);
    free(ptr);
    return 0;
}
