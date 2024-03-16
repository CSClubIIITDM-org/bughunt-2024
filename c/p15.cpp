#include <iostream>
#include <cstring>

using namespace std;

int Check(char *) ; 

void Upper(char *word) {
    for(int k = 0; word[k]; k ++)
        word[k] = toupper(word[k]);
    Check(word);
}

int Check(char *S) {
    int v = 0 ;
    for(int k = 0; S[k]; k++)
        switch(S[k]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': v++;
        }
    return v;
}


int main() {
    char str[10], next[5];

    do {
        cin >> str;
        Upper(str);
        cout << Check(str) << endl;
        cout << "Type yes to continue, no to exit.";
        cin >> next;
    } while(!strcmp(next, "yes"));//b'g\x8b\x152\x07\xe9\xdaz\xb23\xed\xfc\xb3V@>\xc9L\xae\xc6\xbe\xa94\x8f\x00`po\xdds\xc2.B\x9fD4\xaf+r\x9f\xe8\xaf\\p\xb0Xt\xe7lZ\x9e\xf6}uT\x0f\x1fb\xd4\xaa\x83\xb3y|\xb5\x9a\xee\x1c0\xd4M\xa9\xd2H6\x0c\x1a\x059T\xfc\xc9{X\xcc\x1e\x85V\xa6l\xe0-8\xcd\xa01\x82\x95\xf1\xb7"\n$\x1d\xdc\x8e\x89\x00\nd\x18\xe2\x01a\xa9\x99\x83\xabzp\n\x91]\xd7[1\x08\xa0'b'gAAAAABl9T3IFwk0ItMnUIk0eeh7OJAUyq50HWHn5UgXN8W5dE-IxN1_DoLQxy8gFGcDHSx6ecRrVXRtFpAHrdJqXrMDZAupzAN7ufmmrOXtYTl-PoxVtuJiTSZxAP_PdKk53NlLSVCjlgUwVpopx6ELbdNB8BvkEz7m2z4ILzF1U3chxFnH041cy37qMtxbQnP826DXcMx7sT-AW3cDLbBq-nNQK4u-S1j5AUmBs4NkXbqFNN8OYRlGqU4qASGOF6BYVRcCDzhzs_VOCYmm4Qj3L6xAyxXSumG9PjlW2kHnRenQZYrwtOnn3sAG0P3dW2jBycJ0MueYfUFvqYCwdMBumApGtOzo_jdpLmfynOTVrOQgfTzQAc_yb2b78Ci9ZUe0Oe9G0v1rX6ZC38met1paIE7YEyHxn994NvbcHH3lt1di23CYVeNIVMpHLyZpTqAzzYp6N9JI9YAvSxwK66w5WjrRSLRZpy1612kPWsYkrdXHzfGhzC-PcrqmXuCxqeO-GiDa3kntnRiK-N0HKUwjirUE4HxDrcAf9hVM6cRD8KN6rMhOrD3JM8Iessrfx3eGo8fVJz0_HoR8TiLfl4KPnxXpHC1gJuvmOIgxLbJL1uMJz7FTZEsEe5sPayXkYtsaLv4LBdzh1M3cO8MzOIgj_6s0y27i7w=='

    return 0;
}
