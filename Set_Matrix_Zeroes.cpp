#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<vector<int>>matrix(n,vector<int>(n,m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    bool firstRow=false, firstColumn=false;

    for(int i = 0; i < n; i++) {
        if(!matrix[i][0])firstColumn=true;
    }

    for(int i = 0; i < m; i++) {
        if(!matrix[0][i])firstRow=true;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }


    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }

    if(firstRow){
       for(int i = 0; i < m; i++) {
            matrix[0][i] = 0;
        }
    }

    if(firstColumn){
       for(int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j]<<' ';
        }
        cout <<'\n';
    }

}
