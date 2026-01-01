#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >>nums[i];

    bool canReach = false;
    int l = 1;

    for(int i = n-2; i >= 0; i--) {
        if(nums[i] < l) l++;
        else {
            l = 1;
        }
    }

    if(l > 1)cout << "NO\n";
    else cout<<"CanReach\n";

}

