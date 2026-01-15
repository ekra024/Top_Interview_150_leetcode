#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    int numRows; cin >> numRows;

    if(numRows == 1) {
        cout << s <<'\n';return 0;
    }
    int n = s.size();
    vector<string>rows(numRows);
    int cur = 0;
    bool down = true;
    string ans="";

    for(int i = 0; i < n; i++) {
        rows[cur] += s[i];
        if(cur == 0)down = true;
        else if(cur == numRows-1) down = false;
        cur += down? 1:-1;
    }

     for(auto &it: rows) {
        ans += it;
     }

    cout << ans <<'\n';
}

