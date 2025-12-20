#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, val; cin >> n >> val;
    int nums[n+5];
    for(int i = 0; i < n; i++) cin >> nums[i];
    int l = 0, cnt = 0;

    for(int i = 0; i < n; i++) {
        while(l<n && nums[l] == val){
            cnt++; l++;
        }
        if(l < n){
            nums[i] = nums[l]; l++;
        }else break;
    }

    int k = n - cnt;

    for(int i = 0; i < n; i++)cout << nums[i]<<' ';
    cout <<k <<'\n';

}
