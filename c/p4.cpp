//program to emulate the caesar cipher, a simple encryption technique that involves shifting the letters of the alphabet, k positions to the right (or left).
//consider all characters to be lower case only
// eg: s = "abc", k = 2, direction = "encode" => "cde"
//b'\t[L\xe9o\xb0wU\xf4\x133%\xec\n\xfc\x06~\x02\x08\xfc\xdb\xa4\x19\xf8Z:\x83|\xd8\xe1\x92\xb8L\x13\x0b\xe1\xdan2e\x9bB\xefV\x0f=\x17\xa80x\xd5\xb1|\xa4\xd0z*m\xe0l\xcb\xf2\x85\x17\xbc_Kh\x14\x9fG\xdcZ\\l\xd9\xe3\x9b\x08\x80\x8b\xba\xd5\xb1,<\x1fa3\x9eG\xa9sbS7@\x88\x8f9c\x9e@J\xdc\x04\x14X\xb4!\xa2\xdce\xe2w\x8c\xa7\x0e\x7fU%\xbf~\xa8\x0eCt8'b'gAAAAABl9T9KuhdqkrsL5W_9RpKlLW-0TKmcSVMdR2vFjRuv3BiyDzBJDrIMIu73FglkUzBGWLafUa4mPmd71QRlKfClMmdAHsc7H1-RfaAtLxThWpSfIWW7ylPkCS0I45c3x-KHu1Fgsf8B0yCxsJmA0r-SyoHx2bVg0bpx-zzrw0DcMYp60QSSyrJAc2ij5xh0MT4dpc7fWJu5tiFJ6VSF2ubzCGkUYBwWGZjfCpu_WUv7in2z18M='
#include <iostream>
#include <string>
using namespace std;

string caesar(string s, int k, string direction){
    string ans = "";
    for(int i=0;i<s.length();i++){
        if(direction == "encode"){
            ans += s[i] + k;
        }
        else if(direction == "decode"){
            ans += s[i] - k;
        }
    }
    return ans;
}

int main(){
    string s, direction;
    int k;
    cin >> s >> k >> direction;
    cout<<caesar(s,k,direction)<<endl;
    return 0;
}
