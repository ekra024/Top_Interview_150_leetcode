#include<bits/stdc++.h>
using namespace std;

int main()
{

    char board[9][9];
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }

    unordered_map<char,int>mp;
    bool ok = true;

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            int ch = board[i][j];
            if(!(ch >='0' && ch <='9')) continue;
            if(mp.find(ch) != mp.end()) {
                ok = false;
                break;
            }
            mp[ch] = j;
        }

        if(!ok)break;
        mp.clear();
    }

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            int ch = board[j][i];
            if(!(ch >= '0' && ch <='9')) continue;
            if(mp.find(ch) != mp.end()) {
                ok = false;
                break;
            }
            mp[ch] = j;
        }
        if(!ok)break;
        mp.clear();
    }

    int l= 0, r= 0, cnt3 = 0;

    while(l < 9 && r < 9) {
        int val = r, cnt1 = 0, cnt2 = 0;
        while(cnt1 < 3) {
            cnt2 = 0;
            while(cnt2 < 3) {
                int ch = board[l][r];
                if(ch >= '0' && ch <='9'){
                   if(mp[ch]) {
                    ok = false;
                   }
                   mp[ch]++;
                }
                r++;
                cnt2++;
            }
            r = val;
            l++;
            cnt1++;
        }
        if(r == 6) {
           cnt3+=3;
           l = cnt3; r = 0;
        }
        else {
            l = cnt3;
            r += 3;
        }
        if(!ok)break;
        mp.clear();


    }


    cout << ok <<'\n';
}
