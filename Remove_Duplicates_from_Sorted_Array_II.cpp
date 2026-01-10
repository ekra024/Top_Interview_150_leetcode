#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];


    int l = 1, cnt = 1;

    for(int i = 0; i < n-1; i++) {
       if(nums[i] == nums[i+1] && cnt < 2) {
        cnt++;
        nums[l] = nums[i]; l++;

       }
       else if(nums[i] != nums[i+1]) {
        nums[l] = nums[i+1]; l++; cnt = 1;
       }
    }

    cout << l <<'\n';
    for(int i = 0; i < l ; i++)cout << nums[i]<<' ';

}
