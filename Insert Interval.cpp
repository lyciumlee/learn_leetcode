#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {
        vector<vector<int>> res;
        int n = intervals.size(), cur = 0, i = 0;
        while(i < n)
        {
            if(intervals[i][1] < newInterval[0])
            {
                res.push_back(intervals[i]);
                ++cur;
            }
            else if(intervals[i][0] > newInterval[1])
            {
                res.push_back(intervals[i]);
            }
            else{
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);

            }
            i++;
        }
        res.insert(res.begin() + cur, newInterval);
        return res;
    }
};