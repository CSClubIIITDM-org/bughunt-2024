//program to emulate the caesar cipher, a simple encryption technique that involves shifting the letters of the alphabet, k positions to the right (or left).
//consider all characters to be lower case only
// eg: s = "abc", k = 2, direction = "encode" => "cde"

#include <iostream>
#include <string>
using namespace std;

string caesar(string s, int k, string direction) {
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (direction == "encode") {
            char encoded_char = 'a' + (s[i] - 'a' + k) % 26; // Modulo 26 to handle wraparound
            ans += encoded_char;
        } else if (direction == "decode") {
            char decoded_char = 'a' + (s[i] - 'a' - k + 26) % 26; // Adding 26 before modulo to handle negative values
            ans += decoded_char;
        }
    }
    return ans;
}

int main(){
    string s, direction;
    int k;
    cin >> s >> k >> direction;
    cout<<caesar(s,k,direction)<<endl;
    return 0;
}
