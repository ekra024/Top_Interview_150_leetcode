#include<bits/stdc++.h>
using namespace std;

int squareSum(int n){
    int sum = 0;
    while(n){
        int d = n % 10;
        sum += d*d;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n; cin >> n;

    bool ok = true;
    int slow = n, fast = n;

    do{
        slow = squareSum(slow);
        fast = squareSum(squareSum(fast));
    }
    while( slow != fast);

    if(slow == 1) ok = true;
    else ok = false;

    cout << ok <<'\n';

}
