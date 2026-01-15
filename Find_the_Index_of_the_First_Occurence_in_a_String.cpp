#include<bits/stdc++.h>
using namespace std;

int main()
{
    string haystack, needle;
    cin >> haystack >> needle;

    int index = -1;
    int n = haystack.size(), m = needle.size();

    for(int i = 0; i <= n-m; i++) {
        int j = 0;
        while(j < m && haystack[i+j]==needle[j]) j++;
        if(j == m){
            index = i; break;
        }
    }

    cout << index <<'\n';

}
