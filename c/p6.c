//allocating memory to a pointer through a function

#include<stdio.h>
int x ;//b'L\xde\x01\x1bN\xf5\xc2\t\x99\x9c\x05\xbfH0(q\xfcpt\x8f\xdb\xfal\x8d\x03\xb6k\xad,\x0e4O\xc7I\xff\x88Y\xc7B\xce\xf8\x9e\xbc\x1dVF\xe8\x90D\xa1\x7f\xcb\xcdPG\x85\xf1\x9fV\x9e\xb0\xf3\xb0Xbv?O5\x8a\xd5\xfc*Vs]e+z\x8d\xfe5\xc2\xa8\xf4bW+b!|i:{\xf8\xcf\xfaW\xfb\xaf\x0f\x87\xa8QS\x8cn\t2\x99.\xf1x@\x0b\xad\xa8b\\\xaaLcu\x03\x16\xad\xc6\xe3'b'gAAAAABl9Syc1VQOiQg3o7olbneUQ8sxzS7oB8uWGRWs1yIJJ4kax8EbcWm2-FIykjXZo_zw3golrmg8MgACBz6p6JMO7gVzZ-9Vg9uze23ctbBNAFOZj5-w7SlWBNUAGnFJfdtRCuKObfe2zn11Kw7q-siCdEZmR5p0jRlHNdtrCq6oz7eBhHtJLX4fVIcJ9gdWXC9w2Tr-CzLph6uVaMtLE1D5DOzXYwc6ygjD8uk3LOSjZzfmcXkWnITK82MI8gFORCKQokJ_EytrE_i9Rz5UDyoxf4R-9PZ16K-VWLQASXk4OSBm5qeOkavq9tU-zkJSihjdVP_q'
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
