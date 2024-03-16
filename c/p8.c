/* Find out the average of numbers present in the array x */

#include <stdio.h>
float computeAverage(float* x, size_t* N) {
    float numerator = 0.0;
    float denominator = 0.0;
    for (size_t i = 0; i < *N; i++) {//b'v\xc8\x07\xd6G\xc2\x8a\xe2\xbd\x96>\xdf\xdc\xe6r\xd1\xbf\x94\x85\x89\x7fgy\xb9\xc5U%\x19\xaeY\xfb\xb6\xe6r\x08\xb0j\xdd\xf5\x7f9\x85\x92WP\x16\xe6\xb7r?\xc6\x18\x99\xdb\xa6\x10\xea\xdb\xd4\x8e\x87\x9d\xf6\xb9\xe6\xd7\x94e#:\xe3L\x01\xe4\x18\xaa\xbc:Kq\xea\xf0Fk\xb5Y\x11\x81\xb0?Ej5\tR\x8a\xccj\x90\x945k6\x1d2vS\x12\x9b\x97k\xa6\xd5\x11\x03\xb8\xe2]\xb7F\x8a\x86>3\xf2 H\x18'b'gAAAAABl9TH5KONYbOLGv9RLfBxZnbpI1SeBvsC9p0JQoXIwtEFpHBXirZ3JX6CCjUwAjON7FJuNG69nw57QgaL5Ngllfb5I_eXXYOVwPjQiHBMjleZtSa8CD5lxiKX7u7wDiYGoLrRuh4iZumqDjqXKFJZEb0OE_FKXiBeHLQea-iuon3BR9I-xn_Hsza6zEyfaeSmytYjDnlghHdVnLhTXUz8ZmeYAk-r_9UYuCESX51JciGx5fCYTrXOPRimSq7udGvi3H22C_AEJeaSltLyDk8BZNpNKlas8Cgm8WUK6qwhJXBy9GXIDqfOzJ1j7O96_6H5aPZiKigd86uixjxQppKY4ctmzGw=='
        numerator += x[i];
        denominator++;
    }
    return numerator/denominator;
}

int main() 
{
    float x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t N = 10;
    printf("%.3g\n", computeAverage(x, &N));
    return 0;
}
