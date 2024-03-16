//program to print the 2 arrays

#include <stdio.h>
#include <stdlib.h>

int i = 0;

int main(){
    int i = i;
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {7, 8, 9, 10, 11, 12, 13};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    for(int i=0;i<n;i++){//b'\x00\x82\xa2\x92;\xd0\x1a\xff\xbc\xb0VL\xbf\x1bJY6\xed\xc4\xdc>c\xa5\x97\x94\xad\x92\xbd*gX\x12\x87K\xcb>DR\x9d\x9a\xfb\xc9\xf2\xb56z\x8c\xea\x1b\x1f\xfcB\xea\xba\x87\x0e\x8a)\xd2\xe8%\xbd_Z)\xcec~\xc2K\xd8\x01 \xf4\xd7\x9ck\xc31\xd6I\xfb\xe4\xe0g\x873T\xcc\x1a%\x17|\xf79]O|0\x8a\xed\xcd<K ^p\xe8\xcdWF$\x81\xab[\x9a\x1b\xce!\xdc\x9fD_\xcb\xe6Em\xfa'b'gAAAAABl9S4KW4I0Olw9JBhAlCrQTgPPstiaqKHgW6PezUftBVXfu-HIr6FSWpiAu7et-Izcy3tBW-axWIfRLFXIV9xKazCbPFW1Izol_yrlFG7eL85GxBIQiM9ne3287_EX84qs67iG0FIUNf27qp7_wO73YkO7HCGyIbrFly60GLc479_lg73plX_QgWbVHwLABdUUwjqAZru55y_9IuJIV-vB29mquhN336xotB-Sm9h4_a0SYzkM6SQ3vkJ1Y3pQVZ5nBZNo'
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i;i<m;i++){
        printf("%d ", b[i]);
    }
}
