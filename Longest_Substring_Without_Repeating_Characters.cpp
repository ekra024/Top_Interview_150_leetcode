#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;

    int mx = 0;
    vector<int>arr(256, -1);
    int n = s.size();
    int l = 0;

    for(int i = 0; i < n; i++) {
        if(arr[s[i]] >= l) {
           l = arr[s[i]];
        }
        arr[s[i]] = i;
        mx = max(mx, i - l+1);
    }

    cout << mx <<'\n';
}
