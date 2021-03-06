#include <vector>
#include <algorithm>




using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums)
    {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        vector<int> t = nums;
        sort(t.begin(), t.end());
        while(i < n && nums[i] == t[i]) i++;
        while(j > i && nums[j] == t[j]) j--;
        return j - i + 1;
    }
};