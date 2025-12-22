#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<string>strs(n+2);
    for(int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string s = strs[0];
    int k = s.size(), cnt = 0, mx = 0;
    string ans ="";

    for(int i = 0; i < k; i++) {
        int j = 1;
        for(j = 1; j < n; j++) {
            string g = strs[j];
            if(i >= g.size() ) break;
            else if(g[i] != s[i]) break;
        }

        if(j == n){
            ans += s[i];
        }
        else break;

    }


    cout << ans <<'\n';

}
