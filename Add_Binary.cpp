#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b; cin >> a >> b;

    string ans="";
    int l = a.size()-1, r = b.size()-1, carry = 0;

    while(l>= 0 || r >= 0 || carry) {
        int sum = carry;
        if(l >= 0) sum += a[l--]-'0';
        if(r >= 0) sum += b[r--]-'0';

        ans.push_back((sum%2)+'0');
        carry = sum / 2;
    }

    reverse(ans.begin(), ans.end());

    cout << ans <<'\n';
}
