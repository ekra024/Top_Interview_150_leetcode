#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t; cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    bool ok = false;
    if(s == t) ok = true;

    cout << ok <<'\n';

}
