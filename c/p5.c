#include <stdio.h>

void main() {
    int a = 10;
    int *ptr = &a;

    (*ptr)++; // Increment the value pointed to by ptr
    printf("%d", *ptr); // Print the incremented value
}
