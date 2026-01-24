#include<bits/stdc++.h>
using namespace std;

vector<int>solve(int n, vector<int>nums, int target) {
    unordered_map<int,int>mp2;

    for(int i = 0; i < n; i++) {
        if(mp2.count(nums[i])) {
            return {mp2[nums[i]], i};
        }
        mp2[target - nums[i]] = i;
    }
    return {};
}

int main()
{

    int n, target; cin>>n >> target;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<int>ans = solve(n, nums, target);

    for(auto it: ans)
        cout << it <<' ';

}
