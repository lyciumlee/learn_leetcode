#include <vector>




using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int res = 0, cnt = 0;
        for(int num: nums)
        {
            cnt = (num == 0) ? 0 : cnt + 1;
            res = max(cnt, res);
        }
        return res;
    }
};