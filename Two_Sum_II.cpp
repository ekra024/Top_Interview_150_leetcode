#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, target; cin >> n >> target;
    vector<int>numbers(n+1);
    for(int i = 1; i <= n; i++ ) cin>>numbers[i];

    vector<int>ans;

    for(int i = 1; i <= n; i++) {
        int num2 = target - numbers[i];
        int low = 1, high = n;

        while(low <= high) {
            int mid = (low + high)/2;
            if(numbers[mid] > num2) {
                high = mid - 1;
            }
            else if(numbers[mid] < num2) {
                low = mid + 1;
            }
            else {
               ans.push_back(i);
               ans.push_back(mid);
               break;
            }
        }
        if(ans.size()) break;

    }

    for(auto it: ans)cout << it <<' ';

}

