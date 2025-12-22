#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    bool isPalindrome = true;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string g = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <='z' || s[i] >='0' && s[i] <='9') {
            g += s[i];
        }
    }

    int l = 0, r = g.size()-1;

    while(l <= r) {
        if(g[l] != g[r]) {
            isPalindrome = false; break;
        }
        else {
            l++; r--;
        }
    }

    cout << isPalindrome <<'\n';

}
