#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;

    stack<char>st;
    int k=0;
    bool ok = true;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        st.push(s[i]);
        else {
            if(st.empty()==true) ok = false;

            if(s[i]==')' && st.top()=='(')
                st.pop();
            else if(s[i]=='}'&&st.top()=='{')
                st.pop();
            else if(s[i]==']' && st.top()=='[')
                st.pop();
            else ok = false;
    }
    }

    if(st.empty()!=true)ok = false;
    cout << ok <<'\n';
}
