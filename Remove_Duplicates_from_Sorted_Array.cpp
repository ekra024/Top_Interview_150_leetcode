#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int nums[n+2];
    for(int i = 0; i < n; i++) cin >> nums[i];

    int l = 1, cnt = 0;

    for(int i = 1; i < n; i++) {
        while(l<n && nums[l-1] == nums[l]) {
            l++; cnt++;
        }
        if(l < n) {
            nums[i] = nums[l];
            l++;
        }
        else break;
    }

    int k = n - cnt;
    for(int i = 0; i < k; i++)cout<< nums[i]<<' ';
    cout << k <<'\n';

}


