#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int cntOne = 0;

    while(n) {
        n = n & (n-1);
        cntOne++;
    }

    cout << cntOne <<'\n';
}
