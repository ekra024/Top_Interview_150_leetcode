#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, target; cin >> n >> target;
    vector<int>numbers(n+1);
    for(int i = 1; i <= n; i++ ) cin>>numbers[i];

    int low = 1, high = n;

    while(low < high) {
        int num = numbers[low] + numbers[high];
        if(num == target) {
            cout << numbers[low]<<' '<<numbers[high]<<'\n';
            cout<<low <<' '<< high<<'\n';
            return 0;
        }
        else if(num < target) low++;
        else high--;

    }



}

