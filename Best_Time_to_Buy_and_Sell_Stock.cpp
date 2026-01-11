#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n+2);

    for(int i = 0; i < n; i++) cin >> nums[i];

    int mn = nums[0], profit = 0;

    for(int i = 1; i < n; i++) {
        mn = min(mn, nums[i]);
        profit = max(profit, nums[i]-mn);
    }

    cout << profit <<'\n';

}
