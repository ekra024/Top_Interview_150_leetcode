#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    map<int,int>mp;
    for(int i= 0; i < n; i++){
        mp[nums[i]]++;
    }

    int SingleNumber = -1;
    for(auto it: mp){
        if(it.second == 1) {
            SingleNumber = it.first;break;
        }
    }

    cout << SingleNumber<<'\n';

}
