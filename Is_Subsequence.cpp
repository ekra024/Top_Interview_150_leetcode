#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t; cin >> s >> t;
    int l = 0, r = s.size();
    bool ok = false;

    for(int i = 0; i < t.size(); i++) {
        if(s[l] == t[i]) l++;
        if(l == r){
            ok = true;break;
        }
    }
    if(s.size()==0 && t.size()==0)ok =true;
    cout << ok <<'\n';

}
