#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int nums[n+2];
    for(int i = 0; i < n; i++) cin >> nums[i];

    int cnt = 0, candidate = 0;

    for(int i = 0; i < n; i++){
        if(cnt == 0) candidate = nums[i];
        if(nums[i] == candidate) cnt++;
        else cnt--;
    }
    cout << candidate <<'\n';



}
