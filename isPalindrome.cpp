#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x; cin >> x;
    bool ok = false;

    if(x < 0 || (x%10==0 && x != 0)) {
        cout << ok <<'\n'; return 0;
    }

    int rev = 0;
    while(x > rev) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    if(x == rev || x == rev/10) ok = true;

    cout << ok <<'\n';
}
