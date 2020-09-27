#include <string>





using namespace std;

class Solution {
public:
    bool checkRecord(string s)
    {
        int cntA = 0, cntL = 0;
        for(char c : s)
        {
            if(c == 'A')
            {
                cntA++;
                if(cntA > 1) return false;
                cntL = 0;
            }
            else if(c == 'L')
            {
                cntL++;
                if(cntL > 2) return false;
            }
            else{
                cntL = 0;
            }

        }
        return true;
    }
};