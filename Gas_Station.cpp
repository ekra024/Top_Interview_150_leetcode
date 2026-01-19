#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>gas(n),cost(n);
    for(int i = 0; i < n; i++)cin >> gas[i];
    for(int i = 0; i < n; i++) cin >> cost[i];

    int idx = 0, totalGas = 0;
        for (int i = 0; i < n; i++) {
            totalGas += (gas[i] - cost[i]);
        }

        if (totalGas < 0) {
            cout << -1 <<'\n';
            return 0;
        }



        int curGas = 0;
        for (int i = 0; i < n; i++) {
            curGas += (gas[i] - cost[i] );
            if(curGas < 0) {
                curGas = 0;
                idx = i+1;
            }
        }

    cout << idx <<'\n';


}
