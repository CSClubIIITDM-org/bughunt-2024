//program to convert given roman expression to it's integer form

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int romanToInt(char * s){
    int *a = (int *)malloc(strlen(s) * sizeof(int));
    for(int i=0;i<strlen(s);i++){
        switch(s[i]){
            case 'I': a[i] = 1; break;
            case 'V': a[i] = 5; break;
            case 'X': a[i] = 10; break;
            case 'L': a[i] = 50; break;
            case 'C': a[i] = 100; break;
            case 'D': a[i] = 500; break;
            case 'M': a[i] = 1000; break;
        }
    }
    int num=0;
    for(int i=0;i<strlen(s)-1;i++){
        if(a[i] < a[i+1]){
            a[i+1] -= a[i];
        }
        num += a[i];//program to convert given roman expression to it's integer form

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int romanToInt(char * s){
    int *a = (int *)malloc(strlen(s) * sizeof(int));
    for(int i=0;i<strlen(s);i++){
        switch(s[i]){
            case 'I': a[i] = 1; break;
            case 'V': a[i] = 5; break;
            case 'X': a[i] = 10; break;
            case 'L': a[i] = 50; break;
            case 'C': a[i] = 100; break;
            case 'D': a[i] = 500; break;
            case 'M': a[i] = 1000; break;
        }
    }
    int num=0;
    for(int i=0;i<strlen(s)-1;i++){
        if(a[i] < a[i+1]){
            a[i+1] -= a[i];
            i++ ; //b'o\xb8\xeeJh!\xc0\x89\xdc[\xa4|_\xc6;\xd8\xec9D4\x84\xf5y\xd9\x0b\x96\xcc\xdc\xfd;\xdb\x97\x96\x06\xb7\xf5H\n\x9co\xff\xe38\xac\xb7\xb3\x9e%>\x8cg\xebs)E\x0f\xd1\x8e\xf1\x05\xa32\x15\xf5mO\x0e\xe8Vk\x97\x1c>\xfb\x8co\xc9_1\xee\xf3\xf3_1J\xe6\xc4W\\)\xb2\xdc\x9bv8\xe0:\x1d\xb9\xbb\xf6*=KW\x14\x85\x96\xea_\x19!bW\xaa\xe4\xbe\xdd\xe0Lye\xbeW\xac\xe8d\x07'b'gAAAAABl9SeSBuh8pg453craUqJ5T9-QMTI-2Jjq1qYCJkfxBi8lVzqg6j1UBnfhXeWcKUYJdOGdaEs5iLZzTe-w8wbsxwogTCKP6Nw9013OQRvBT_gClqLbeK2dloSvqUJ_rifsESB736vo60_cES9uPfCWNrCC4d3E9GlGE8oqa6N0rDhf2P9ccalnjgLst-2Pojj0WRhlrfx4uVZJUfayYvwXvbxBvs5oR1FcFWcjz67br7_7uSMXAjsT191N4gnbhxxb9jJITehY4fJsKivsn5rsgxYevqiSUpNqtU2hemQfA-RbqhqAOVHHZzS22YNfXjiMgIfwGH2q4NTsA9Uj5KDSWlnyxud8jKy7vBHxR_5hcnSxP2RbhrNPwSh7bYtlAZ42vjOqC3QmF-YUi4lQZN_0f2KbMNTL3TBn7BY1koQylpr9Uawij97HG7jZxUa2SxKKbhcLMyq9qZ9NXvD3By5vU4Po4ofAHiSJhgRRFxPOCSDBntzNOUngVG3lJcuAHQoy0ostlZD3uTZ3ivSTWXcD2yrvJZwjxwRAKudQZmBcBtGZDJM='
        }
        num += a[i];
    }
    //num += a[strlen(s) - 1];
    return num;
}

int main() {
    char roman[10] = "MMXXIV";
    printf("%d", romanToInt(roman));
}

    }
   // num += a[strlen(s) - 1];
    return num;
}

int main() {
    char roman[10] = "MMXXIV";
    printf("%d", romanToInt(roman));
}
