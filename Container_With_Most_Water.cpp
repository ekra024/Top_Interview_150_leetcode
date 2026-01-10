#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>height(n);
    for(int i = 0; i < n; i++) cin >> height[i];

    int l = 0, r = n-1, mxArea = 0;

    while(l < r) {
        int curHeight = min(height[l], height[r]);
        int area = curHeight*(r-l);
        mxArea = max(mxArea, area);

        if(height[l] < height[r]) {
            l++;
        }
        else r--;
    }

    cout << mxArea <<'\n';

}
