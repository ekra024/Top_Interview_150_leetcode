#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; getline(cin, s);
    string ans = "", g="";
    bool FistWord = false;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ' && g.size()) {
            if(FistWord) g += " ";
            ans = g + ans;
            g = "";
            FistWord = true;
        }
        else if(s[i] != ' ') g += s[i];
    }

    if(g.size()){
       if(s.size()) g += " ";
       ans = g + ans;
       g = "";
    }

    cout << ans;

}
