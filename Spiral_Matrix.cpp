#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int matrix[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>>visit(n, vector<int>(m, 0));
    int up=0, down = n-1, left = 0, right = m-1;
    vector<int>ans;

    while(1) {
        int first=left;
        if(up > down && left > right) break;

        while(first<=right) {
            int val = matrix[up][first];
            if(!visit[up][first]) {
                ans.push_back(val);
                visit[up][first] = 1;
            }
            first++;
        }
        up++;
        int second=up;
        while(second<=down){
            int val = matrix[second][right];
            if(!visit[second][right]) {
                ans.push_back(val);
                visit[second][right] = 1;
            }
            second++;
        }
        right--;
        int third = right;
        while(third>=left){
            int val = matrix[down][third];
            if(!visit[down][third]) {
                ans.push_back(val);
                visit[down][third] = 1;
            }
            third--;
        }
        down--;
        int fourth = down;
        while(fourth>=up){
            int val = matrix[fourth][left];
            if(!visit[fourth][left]) {
                ans.push_back(val);
                visit[fourth][left] = 1;
            }
            fourth--;
        }
        left++;

    }
    for(auto it: ans)cout << it <<' ';

}
