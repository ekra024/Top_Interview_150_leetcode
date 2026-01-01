#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>prices(n);
    for(int i = 0; i < n; i++) cin >> prices[i];

    int TotalProfit = 0, mn = -1,mx = -1;
    bool ok = false;

    for(int i = 0; i < n-1; i++) {
        if(ok){
            if(prices[i] > prices[i+1]) {
                int tmp = i;
                while(tmp < n-1 && prices[tmp]>prices[tmp+1])tmp++;
                mx = prices[i];
                ok = false;
                i = tmp-1;
                TotalProfit += (mx - mn);
                mn = -1, mx = -1;
            }

        }
        else {
            if(prices[i] < prices[i+1]) {
                int tmp = i;
                while(tmp < n-1 && prices[tmp] < prices[tmp+1])tmp++;
                mn = prices[i];
                ok = true;
                i = tmp-1;
            }
        }
    }
    if(mn != -1){
        int mx = prices[n-1];
        TotalProfit += (mx - mn);
    }

    cout << TotalProfit <<'\n';
}
