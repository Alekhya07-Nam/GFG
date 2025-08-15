class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int a, b, i = 1;
        while (i < intervals.size()) {
            a = intervals[i - 1][1];
            b = intervals[i][0];
            if (a >= b) {
                intervals[i][0] = min(intervals[i - 1][0], intervals[i][0]);
                intervals[i][1] = max(intervals[i - 1][1], intervals[i][1]);
                intervals[i - 1][0] = -1;
                intervals[i - 1][1] = -1;
            }
            i++;
        }
        vector<vector<int>> ans;
        for (auto &x : intervals) {
            if (x[0] != -1 && x[1] != -1) ans.push_back(x);
        }
        return ans;
    }
};
