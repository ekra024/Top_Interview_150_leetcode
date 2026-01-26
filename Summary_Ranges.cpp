#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<string>range;
    string s = "";
    for(int i = 0; i < n; i++) {
        int temp = nums[i], ed = nums[i];;

        while(i+1 < n && nums[i]+1 == nums[i+1]){
            i++; ed = nums[i];
        }

        if(temp != ed) {
           range.push_back(to_string(temp)+"->"+to_string(ed));
        }
        else {
            range.push_back(to_string(temp));
        }

    }

    for(auto it: range)cout << it <<' ';

}
