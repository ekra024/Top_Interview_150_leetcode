#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; getline(cin, s);
    bool isPalindrome = true;
    transform(s.begin(), s.end(), s.begin(), ::tolower);


    int l = 0, r = s.size()-1;

    while(l <= r) {
        if(!(s[l]>='a' && s[l]<='z'|| s[l]>='0' && s[l]<='9')) {

            l++; continue;
        }
        else if(!(s[r]>='a' && s[r]<='z'|| s[r]>='0' && s[r]<='9')) {

            r--; continue;
        }
        if(s[l] != s[r]) {
            isPalindrome = false; break;
        }
        else {
            l++; r--;
        }

    }

    cout << isPalindrome <<'\n';

}
