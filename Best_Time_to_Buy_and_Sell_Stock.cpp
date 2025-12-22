#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n+2);

    for(int i = 0; i < n; i++) cin >> nums[i];

    int mx = 0, mn = 10e4+10, profit = 0;

    for(int i = 1; i < n; i++) {
        if(nums[i-1] < nums[i]) {
            int profit1 = nums[i] - nums[i-1];
            int profit2 = nums[i] - mn;
            cout << nums[i]<<' ' << mn <<'\n';
            cout << nums[i] - mn <<'\n';
            cout << profit1 <<' '<< profit2 <<' ';

            if(profit1 > profit && profit1 > profit2) {
                mn = nums[i-1];
                profit = profit1;
            }
            else if(profit2 > profit){
                profit = profit2;
            }
            else {
                mn = min(nums[i-1], mn);
            }
            cout << profit <<'\n';


        }
    }

    cout << profit <<'\n';

}
