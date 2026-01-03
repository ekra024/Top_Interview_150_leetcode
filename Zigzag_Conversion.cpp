#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    int numRows; cin >> numRows;

    int n = s.size();
    char arr[numRows+1][n+1];

    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = '0';
        }
    }

    bool ok = true;
    int l = 0, r = 0;

    for(int i = 0; i < n; i++) {
        if(l <= 0) {
            ok = true;
            l = 0;
        }
        if(ok){
            arr[l][r] = s[i];
            l++;
            if(l == numRows){
                if(numRows)l-=2;
                r++;
                ok = false;
            }
        }
        else {
            arr[l][r] = s[i];
            l--; r++;
        }
    }
    string ans="";

     for(int i = 0; i < numRows; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] != '0') ans +=arr[i][j];
        }
    }

    cout << ans <<'\n';
}

