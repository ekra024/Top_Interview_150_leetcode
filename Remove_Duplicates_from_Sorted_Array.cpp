#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int nums[n+2];
    for(int i = 0; i < n; i++) cin >> nums[i];

    int l = 1;

    for(int i = 0; i < n-1; i++) {
        if(nums[i] != nums[i+1]) {
            nums[l] = nums[i+1];
            l++;

        }
    }

    for(int i = 0; i < l; i++)cout<< nums[i]<<' ';
    cout << l <<'\n';

}


