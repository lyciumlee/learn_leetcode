#include <vector>


using namespace std;



class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        for(const char c: letters)
        {
            if(c > target) return c;
        }
        return letters.front();
    }
};