#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int cntOne = 0;

    while(n > 0) {
        int mod = n % 2;
        if(mod)cntOne++;
        n /= 2;
    }

    cout << cntOne <<'\n';
}
