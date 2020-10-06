class Solution {
public:
    int numberOfSteps (int num)
    {
        if(num == 0) return 0;
        int res = 0;
        while(num > 1)
        {
            if(num & 1)
            {
                res += 2;
            }else{
                res += 1;
            }
            num = num >> 1;
        }
        res++;
        return res;
    }
};