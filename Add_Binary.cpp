#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b; cin >> a >> b;
    if(b.size() > a.size()) swap(a,b);

    int n = a.size(), m = b.size(), cnt = 0, l = 0;
    string s = "", g="";

    for(int i = 0; i < (n-m); i++) {
        g += '0';
    }
    for(int i = n-m; i < n; i++) {
        g += b[l];l++;
    }

    for(int i = n-1; i >= 0; i--) {
        if(a[i]== '1' && g[i] == '1') {
            if(cnt) s += '1';
            else s += '0';
            cnt = 1;
        }
        else if((a[i]=='1' && g[i]=='0')||
                (g[i]=='1'&& a[i]=='0')) {
                    if(cnt) {
                        s += '0';
                    }
                    else s += '1';
        }
        else {
            if(cnt){
                cnt = 0;
                s += '1';
            }
            else s += '0';

        }

    }

    if(cnt) s +='1';
    reverse(s.begin(), s.end());

    cout << s <<'\n';
}
