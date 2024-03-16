#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Check(char *S) {
    int v=0;
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
void Upper(char *word) {
    for(int k = 0; word[k]; k ++)
        word[k] = toupper(word[k]);
    Check(word);
}

int main() {
    char str[10], next[5];

    do {
        cin >> str;
        Upper(str);
        cout << Check(str) << endl;
        cout << "Type yes to continue, no to exit.";
        cin >> next;
    } while(strcmp(next, "yes"));

    return 0;
}