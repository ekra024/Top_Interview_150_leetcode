#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, target; cin >> n >> target;
    vector<int>nums(n);

    for(int i = 0;i < n; i++) cin >> nums[i];

    int l = 0, r = 0, sum = 0, mn = 10e5+10;

    while(r < n) {
        if(sum >= target) {
            int diff = (r-l);
            mn = min(mn, diff);
            sum -= nums[l];
            l++;
        }
        else{
            sum += nums[r];
            r++;
        }
    }
    while(l< n && sum >= target) {
        int diff = (r-l);
        mn = min(mn,diff);
        sum -= nums[l];
        l++;
    }

    cout << mn <<'\n';
}
