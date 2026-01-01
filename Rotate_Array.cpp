#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n;
    vector<int>nums(n), ans(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cin >> k;

    int l = n - (k % n), r = 0;

    for(int i = l; i < n; i++){
        ans[r] = nums[i]; r++;
    }
    for(int i = 0; i < l; i++) {
        ans[r] = nums[i]; r++;
    }

    for(auto it: ans)cout << it <<' ';

}
