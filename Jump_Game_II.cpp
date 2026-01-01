#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n), dp(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    for(int i = 0; i < n; i++)dp[i] = -1;

    int mn = 10e4;

    dp[n-1] = 0;

    for(int i = n-2; i >= 0; i--) {
        mn = 10e4;
        for(int j = 1; j <= nums[i]; j++) {
            if(j > n-1)break;
            mn = min(mn,dp[i+j]);
        }
        dp[i] = mn+1;
    }

    cout << dp[0] <<'\n';
}

