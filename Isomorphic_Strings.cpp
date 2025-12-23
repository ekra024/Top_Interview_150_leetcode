#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t; cin >> s >> t;
    map<char,int>occurrenc, mp1, mp2;
    map<char,char>replaceWord;

    bool ok = true;

    if(s.size() != t.size()) {
       ok = false;
    }
    for(int i = 0; i < t.size(); i++) {
        mp1[s[i]]++;
        mp2[t[i]]++;
    }
    if(mp1.size() != mp2.size()) ok = false;
    for(int i = 0; i < s.size(); i++) {
        if(occurrenc[s[i]]) {
            if(replaceWord[s[i]] != t[i]) {
                ok = false;
            }
        }
        else {
            occurrenc[s[i]]++;
            replaceWord[s[i]] = t[i];
        }
    }

    cout << ok <<'\n';
}
