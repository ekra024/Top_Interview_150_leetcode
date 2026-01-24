#include<bits/stdc++.h>
using namespace std;

int main()
{
    string pattern, s; cin >> pattern;
    char ch; cin >> ch;

    getline(cin, s);

    string t ="";
    s = ch+s;

    int n = s.size();
    unordered_map<string,char>mp1;
    unordered_map<char,string>mp2;
    bool ok = true;

    int l = 0;

    for(int i = 0; i < n; i++) {
        if(l >= pattern.size()){
            ok = false; break;
        }
        if(s[i] != ' ') t+=s[i];
        if(i==n-1 || s[i]==' ') {
           if(mp1.find(t)!=mp1.end() ||
              mp2.find(pattern[l]) != mp2.end() ) {
                if(mp1[t] != pattern[l] ||
                   mp2[pattern[l]] != t )
                    ok = false;
           }
           mp1[t] = pattern[l];
           mp2[pattern[l]] = t;
           l++;
           t ="";
        }
    }

    if(l < pattern.size()) ok = false;
    cout << ok <<'\n';
}

