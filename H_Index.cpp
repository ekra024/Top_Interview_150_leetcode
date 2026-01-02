#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>citations(n);
    for(int i = 0; i < n; i++) cin >> citations[i];

    sort(citations.begin(), citations.end());
    int hIndex = 0, paper = 1;

    for(int i = n-1; i >= 0; i--) {
        if(citations[i] >= paper) hIndex++;
        else break;
        paper++;
    }

    cout << hIndex << '\n';

}
