#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];


    int cnt = 1, l = 0;
    map<int,int>mp;

    for(int i = 0; i < n; i++) {
        if(mp[nums[i]] > 1) {
            continue;
        }
        mp[nums[i]]++;
        nums[l]=nums[i];
        l++;
    }

    cout << l <<'\n';
    for(int i = 0; i < l ; i++)cout << nums[i]<<' ';

}
