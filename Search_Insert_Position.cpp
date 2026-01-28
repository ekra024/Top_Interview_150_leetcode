#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int target; cin >> target;

    int start = 0;
    int end = nums.size()-1;

    while(start<=end){
         int mid = ((end-start)/2)+start;
         if(nums[mid]==target){
            cout << mid <<'\n';
            return 0;
         }
         else if(nums[mid]>target){
             end = mid-1;
         }
         else if(nums[mid]<target){
             start = mid+1;
         }
    }

    cout<< end+1;
}
