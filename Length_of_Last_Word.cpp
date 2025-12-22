#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; getline(cin, s);
    int n = s.size()-1, cnt = 0;
    bool ok = false;

    for(int i = n; i >= 0; i--) {
        if(ok && s[i]==' ') {
            break;
        }
        else if(s[i] ==' ' ) continue;
        else ok = true;
        cnt++;
    }

    cout << cnt <<'\n';

}
