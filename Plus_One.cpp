#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>digits(n);

    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    int l = n-1;

    while(l >= 0 && digits[l] == 9) {
        digits[l]= 0;
        l--;
    }
    if(l < 0) digits.insert(digits.begin(),1);
    else digits[l]++;


    for(auto it: digits)cout <<it <<' ';


}
