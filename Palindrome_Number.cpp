#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x; cin >> x;
    string s = to_string(x);
    bool isPalindrome = true;

    int l = 0, r = s.size()-1;
    while(l < r) {
        if(s[l] != s[r]) {
            isPalindrome = false;
            break;
        }
        l++; r--;
    }
    cout << isPalindrome <<'\n';
}
