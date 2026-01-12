#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int jump = 0, mxJump = 0, lastPoint = 0;

    for(int i = 0; i < n; i++) {
        mxJump = max(mxJump, i+nums[i]);
        if(i == lastPoint) {
            jump++;
            lastPoint = mxJump;
        }
    }

    cout << jump <<'\n';
}

