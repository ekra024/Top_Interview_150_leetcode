#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n;
    vector<int>nums(n);

    for(int i = 0; i < n; i++) cin >> nums[i];
    cin >> k;

    unordered_map<int,int>ump;

    bool ok = false;

    for(int i = 0; i < n; i++) {
        if(ump.count(nums[i]) && (i-ump[nums[i]]) <= k){
            ok = true; break;
        }
        ump[nums[i]] = i;
    }

    cout << ok <<'\n';

}
