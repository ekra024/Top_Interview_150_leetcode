#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<string>range;

    for(int i = 0; i < n; i++) {
        int temp = i;
        if(temp+1 < n && nums[temp]+1 == nums[temp+1]) {
            while(temp+1 < n && nums[temp]+1 == nums[temp+1])temp++;
            string s1 = to_string(nums[i]);
            string s2 = to_string(nums[temp]);
            string s = "";
            s += s1;
            s += "->";
            s += s2;
            range.push_back(s);
            i = temp;
        }
        else {
            string s = to_string(nums[i]);
            range.push_back(s);
        }
    }

    for(auto it: range)cout << it <<' ';

}
