#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    vector<int> nums1(m+n), nums2(n);
    for(int k = 0; k < m+n; k++) cin >> nums1[k];
    for(int k = 0; k < n; k++) cin >> nums2[k];

    int i = m-1;
    int j = n-1;
    int l = nums1.size()-1;

    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j]) {
            nums1[l] = nums1[i]; i--; l--;
        }
        else {
            nums1[l] = nums2[j]; j--;l--;
        }

    }

    while(j >= 0) {
        nums1[l] = nums2[j]; j--; l--;
    }


    for(int i = 0; i < m+n; i++) {
        cout << nums1[i]<<' ';
    }
    cout <<'\n';
}
