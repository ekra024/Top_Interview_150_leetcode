#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int nums1[m+n], nums2[n], nums3[m+2];
    for(int i = 0; i < m+ n; i++) cin >> nums1[i];
    for(int i = 0; i < n; i++) cin >> nums2[i];
    int l = 0, r = 0;
    for(int i = 0; i < m; i++)nums3[i] = nums1[i];

    for(int i = 0; i < m+n; i++) {

        if(l == m) {
            nums1[i] = nums2[r]; r++;
        }
        else if(r == n) {
            nums1[i] = nums3[l]; l++;
        }
        else if(nums3[l] < nums2[r]) {
            nums1[i] = nums3[l]; l++;
        }
        else {
            nums1[i] = nums2[r]; r++;
        }

    }

    for(int i = 0; i < m+n; i++) {
        cout << nums1[i]<<' ';
    }
    cout <<'\n';
}
