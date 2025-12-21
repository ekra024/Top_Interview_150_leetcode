#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n+2);

    for(int i = 0; i < n; i++) cin >> nums[i];

    int mx = 0, mn = 10^4+10, profit = 0;

    for(int i = 1; i < n; i++) {
        cout << nums[i-1] <<' '<< nums[i]<<'\n';
        if(nums[i-1] < nums[i]) {
            int profit1 = nums[i] - nums[i-1];
            int profit2 = nums[i] - mn;

            if(profit1 > profit && profit1 > profit2) {
                mn = nums[i];
                profit = profit1;
            }
            else if(profit2 > profit){
                profit = profit2;
            }

        }
    }

    cout << profit <<'\n';

}
