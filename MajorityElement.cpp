#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int nums[n+2];
    for(int i = 0; i < n; i++) cin >> nums[i];

    map<int,int>mp;

    for(int i = 0; i < n; i++)mp[nums[i]]++;
    int mx = 0, val = -1;

    for(auto it: mp) {
        if(it.second > mx) {
            mx = it.second;
            val = it.first;
        }
    }
    cout << val <<'\n';

}
