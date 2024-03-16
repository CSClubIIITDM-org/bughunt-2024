/* Find out the average of numbers present in the array x */

#include <stdio.h>

float computeAverage(float* x, int* N) {
    float numerator = 0.0;
    float denominator = 0.0;
    for (int i = 0; i < *N; i++) {
        numerator += x[i];
        denominator++;
    }
    return numerator/denominator;
}

int main() 
{
    float x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = 10;
    printf("%.3g\n", computeAverage(x, &N));
    return 0;
}
