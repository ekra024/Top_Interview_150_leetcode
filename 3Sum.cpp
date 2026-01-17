#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>solve(vector<int>nums)
{
    int n = nums.size();
    vector<vector<int>>ans;
    unordered_map<int,int>mp;

    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                vector<int>tmp;
               if(nums[i]+nums[j]+nums[k] == 0) {
                if(mp.find(nums[i]) == mp.end() ||
                   mp.find(nums[j]) == mp.end() ||
                   mp.find(nums[k]) == mp.end() ) {
                tmp.push_back(nums[i]);
                tmp.push_back(nums[j]);
                tmp.push_back(nums[k]);
                mp[nums[i]] = 1;
                mp[nums[j]] = 1;
                mp[nums[k]] = 1;
                   }
               }
               if(tmp.size()) {
                ans.push_back(tmp);
                tmp.clear();
            }
            }

        }
    }
    return ans;
}

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<vector<int> >ans = solve(nums);
    for(auto it: ans) {
        for(auto val: it) {
            cout << val <<' ';
        }
        cout <<'\n';
    }
}
