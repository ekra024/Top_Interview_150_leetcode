#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>gas(n),cost(n);
    for(int i = 0; i < n; i++)cin >> gas[i];
    for(int i = 0; i < n; i++) cin >> cost[i];

    int totalCost = accumulate(cost.begin(), cost.end(), 0);
        long long mnCost = totalCost;
        int idx = -1;
        if(gas[0] >= cost[0]) {
            mnCost -= cost[n-1];
            idx = 0;
        }

        for (int i = 1; i < n; i++) {
            long long curCost = totalCost - cost[i - 1];
            if (gas[i] >= cost[i] && curCost < mnCost) {
                mnCost = curCost;
                idx = i;
            }
        }
        if(idx == -1) {
            cout<< "---1";return 0;
        }
        cout << idx <<'\n';
        int curGas = gas[idx];
        int tmp = idx;
        while (tmp != idx - 1) {

            cout << curGas <<' '<< cost[tmp]<<'\n';
            if (curGas < cost[tmp]) {
            cout<< "--1";return 0;
        }
            curGas = curGas - cost[tmp] + (gas[(tmp + 1) % n]);
            tmp = ((tmp + 1) % n);
        }

        if (curGas < cost[idx - 1]) {
            cout << curGas <<'\n';

            cout<< "-1";return 0;

        }
         cout <<idx;
}
