#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    map<int,int>mp;
    bool ok = true;


    while(n != 1) {
        int temp = n;
        int sum = 0;
        while(temp > 0) {
            int num = temp%10;
            temp/=10;
            sum += (num*num);
        }
        if(mp[n]) {
            ok = false; break;
        }
        mp[n]++;
        n = sum;
    }
    cout << ok <<'\n';
}
