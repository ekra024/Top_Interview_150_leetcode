#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>prices(n);
    for(int i = 0; i < n; i++) cin >> prices[i];

    int totalProfit = 0;

    for(int i = 0; i < n-1; i++) {
         for (int i = 0; i < n - 1; i++) {
            if(prices[i] < prices[i+1]) {
               totalProfit += (prices[i+1] - prices[i]);
            }
        }

    }

    cout << totalProfit <<'\n';
}
