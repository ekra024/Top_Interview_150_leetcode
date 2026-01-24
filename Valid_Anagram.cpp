#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t; cin >> s >> t;
    bool ok = true;

    if(s.size() != t.size()){
        ok = false;
        return 0;
    }

    vector<int>first(26,0), second(26,0);

    for(int i=0; i < s.size(); i++) {
        first[s[i]-'a']++;
        second[t[i]-'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(first[i] != second[i]){
            ok = false; break;
        }
    }

    cout << ok <<'\n';

}
