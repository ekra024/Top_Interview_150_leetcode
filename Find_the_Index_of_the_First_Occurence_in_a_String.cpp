#include<bits/stdc++.h>
using namespace std;

int main()
{
    string haystack, needle;
    cin >> haystack >> needle;

    int cnt = 0, index = -1;

    for(int i = 0; i< haystack.size(); i++) {
        int l = i;
        for(int j = 0; j < needle.size(); j++) {
            if(haystack[l] != needle[j]) {
                break;
            } else {
                cnt++; l++;
            }
        }
        if(cnt == needle.size()) {
            index = i; break;
        }
        else {
            cnt = 0;
        }
    }

    cout << index <<'\n';

}
