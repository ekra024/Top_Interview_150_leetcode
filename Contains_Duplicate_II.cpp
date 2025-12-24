#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n;
    vector<int>nums(n);

    for(int i = 0; i < n; i++) cin >> nums[i];
    cin >> k;

    map<int,int>mp;

    bool ok = false;

    for(int i = 0; i < n; i++) {
        if(mp[nums[i]]) {
           int idxDiff = (i+1) - mp[nums[i]];
           if(idxDiff <= k){
            ok = true; break;
           }
           else{
             mp[nums[i]] = i+1;
           }
        }
        mp[nums[i]] = i+1;
    }

    cout << ok <<'\n';

}
