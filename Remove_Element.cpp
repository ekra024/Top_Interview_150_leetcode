#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, val; cin >> n >> val;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int k = 0;

    for(int i = 0; i < n; i++) {

        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }


    }

    cout <<k <<'\n';

}
