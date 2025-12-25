#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>digits(n);
    deque<int> ans;
    vector<int>afterPlusOne(n);

    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    bool ok = true;

    if(digits[n-1] == 9){
        for(int i = n-1; i >= 0; i--) {
            while(i >= 0 && digits[i]==9){
                ans.push_front(0); i--;
            }

            if(i >= 0 && ok) {
                ok = false;
                ans.push_front(digits[i]+1);
            }
            else if(i >= 0) {
                ans.push_front(digits[i]);
            }

        }
        if(ok){
            ans.push_front(1);
        }
    }
    else {
        for(int i = 0; i < n-1; i++) {
            ans.push_back(digits[i]);
        }
        ans.push_back(digits[n-1]+1);
    }

    for(int i = 0; i < ans.size(); i++) {
        afterPlusOne[i] = ans[i];
        //cout << ans[i]<<' ';
    }



}
