#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<int>prefix(n+1), suffix(n+10), ans(n);

    suffix[n] = 1;
    for(int i = n-1; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i] ;
    }

    for(int i = 0; i < n; i++) {
       if(i == 0) {
        prefix[i] = nums[i];
        ans[i] = suffix[i+1];
       }
       else {
        ans[i] = suffix[i+1]*prefix[i-1];
        prefix[i] = prefix[i-1]*nums[i];
       }
    }
    for(auto it: ans)cout << it <<' ';
}
