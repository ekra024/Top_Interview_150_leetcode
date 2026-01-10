#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int>&nums, int l, int r)
{
    while(l < r) {
        swap(nums[l], nums[r]);
        l++; r--;
    }
}

int main()
{
    int n, k; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cin >> k;
    k = k % n;

    Reverse(nums, 0, n-1);
    Reverse(nums, 0, k -1);
    Reverse(nums, k, n-1);

    for(auto it: nums)cout << it <<' ';

}
