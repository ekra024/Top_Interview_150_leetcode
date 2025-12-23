#include<bits/stdc++.h>
using namespace std;

int main()
{
    string pattern, s; cin >> pattern;
    char ch; cin >> ch;

    getline(cin, s);
    vector<string>WordOfPattern;
    map<string,int>cnt, mp2;
    map<string,char>Replace;
    map<char,int>mp1;

    string t ="";
    s = ch+s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ') t+=s[i];
        else {
           WordOfPattern.push_back(t);
           t ="";
        }
    }
    if(t.size())WordOfPattern.push_back(t);

    bool ok = true;

    if(WordOfPattern.size() != pattern.size()){
        ok = false;
    }

    for(int i = 0; i < pattern.size(); i++) {
        mp1[pattern[i]]++;
        mp2[WordOfPattern[i]]++;
    }
    if(mp1.size() != mp2.size()) {
        ok = false;
    }

    int l = 0;

    for(auto it: WordOfPattern) {

        if(cnt[it] > 0) {
           if(Replace[it] != pattern[l]) {
            ok = false; break;
           }
        }
        else {
            cnt[it]++;
            Replace[it] = pattern[l];
        }
        l++;
    }

    cout << ok <<'\n';
}

