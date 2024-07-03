//allocating memory to a pointer through a function

#include <stdio.h>
#include <stdlib.h> 

int *fun() {
    int *x = (int *)malloc(sizeof(int));
    *x = 5;
    return x;
}

int main() {
    int *ptr = fun();
    printf("%d", *ptr);
    free(ptr);
    return 0;
}
