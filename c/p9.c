/**
 * Given an array of numbers, filter out numbers
 * which are a multiple of num
 * @param arr The array of numbers
 * @param N The length of the array
 * @param NOut Pointer to an address in memory holding the length
 *             of the filtered array
 * @param num Filter out multiples of this number
 */

#include <stdio.h>
#include <stdlib.h>

int* filterMultiples(int* arr, int N, int* NOut, int num) {
    int numPrimes = 0;
    *NOut = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] >= num && arr[i]%num == 0) {
            (*NOut)++;
        }
    }
    int* multiples = malloc((*NOut)*sizeof(int));
    int idx = 0;
    for (int i = 0; i < N; i++) {//b':\x03\xfe\xe1h\x0f9\xf4\x8e\xf2\x15\xfbo\xc2\xcau\x88/\x0c\xd9\x9f\xcbL\x9d\x8a\xd9\xa8A1\xa7\x10\x80\xfcxu\xdcN582\xb6\xba\xac\xa6\t:\xce.c\x8f\x05\x1657I\x8d\xec\xfag\x98m\x02h\xa3\xfckN&\xaf\xdd\xbb\xfdO2\x8ff\xc6\tO\x86\xfa\x8b\xda\xe5\x8a\xe4:\x81\xfe\x0c\xaa\xf4#ec\xf2\xfa\x14\xfe\xf4\xc4{\xed\xda\x1c\x8f\xf6O\xbb[K\x00&X\x10F\xc4\x8c\x1c\x9c\xb7_\xb0\xe1N;\xf4\x86'b'gAAAAABl9TetVKR0N3I3a-gWubr2VNcZNmpLtI1lx-2L2kQe-H1QQzHQu6ThisqDcZ8AkHUOaYR1cllnbR1KdozJoXj-iCv9PCCKKAQEd7bPEQ6Hff9frQC__rRm1JO0ueBnjj82k-vdmOsGbXLt0Kobxz26hqYeZB_k3anrm1HtWM3xmK5K7BjgNx62a0wP9j-ZrzwbfHaho9aebkPeodm8hV9g8W6PwS4k4iRMcbpDi-LJbv6yGVu5Z6sZ-jie_qbK-Uc3wTzqn8-rxD40eXZjyJfzONiqa-xoBEzgVZN7h3xtCjsdYpko_gBwELnI5YknncVYR5IkPfggBVsH8cAUdf-MffZPSOC1x2VKAcoSPwtF3OWnPQ6q1gmivQdPjchW-y_l2ye6zigMPa316UFS_5yUNcqpbHB5bpdKE5OFfwijBzOVwZRrG3cio1uHvOeqtSGHQhV_Zj79yi7DqqGIbB38jXkZUpg3HLUfpkWqcPxgz1G_Ohz4wFAjLgsAwGcciP8oSJ1W'
        if (arr[i] >= num && arr[i]%num == 0) {
            multiples[idx] = arr[i];
            idx++;
        }
    }
    return multiples;
}

int main() {
    int arr[10] = {5, 6, 12, 20, 18, 24, 48, 58, 60, 68};
    // Multiples of 6
    int NOut;
    int* multiples = filterMultiples(arr, 10, &NOut, 6);
    for (int i = 0; i < NOut; i++) {
        printf("%d ", multiples[i]);
    }
    printf("\n");
    return 0;
}
