#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);

    for(int i = 0; i < n; i++) cin >> nums[i];


    unordered_set<int>ust(nums.begin(), nums.end());

    int mx = 0;

    for(auto it: ust) {
        if(!ust.count(it-1)) {
            int tmp = it;
            int cnt = 1;

            while(ust.count(tmp+1)) {
                tmp++;
                cnt++;
            }
            mx = max(mx, cnt);
        }
    }

    cout << mx <<'\n';

}

