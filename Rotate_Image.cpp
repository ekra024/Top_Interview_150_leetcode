#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<vector<int>>matrix(n,vector<int>(n,n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

       int i = 0, j = n-1, cnt=1;
       while(i <= j){
           for(int k = 0; k < n-cnt; k++) {
            swap(matrix[i][i+k], matrix[i+k][j]);
            swap(matrix[i][i+k], matrix[j][j-k]);
            swap(matrix[i][i+k], matrix[j-k][i]);
           }
           cnt+=2;
           i++; j--;
       }

        for(auto row: matrix) {
            for(auto column: row) {
                cout << column <<' ';
            }
        cout <<'\n';
        }
}
