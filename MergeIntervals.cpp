class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>ans;

        for(int i = 0; i < intervals.size(); i++) {
            int first = intervals[i][0];
            int second = intervals[i][1];

            while(i<intervals.size()-1 && second >= intervals[i+1][0]) {
                i++; second = max(second, intervals[i][1]);
            }

            ans.push_back({first, second});
        }

        return ans;
    }
};
