class Solution {
public:
    bool isHappy(int n)
    {
        while(n != 4 && n != 1)
        {
            int sum = 0;
            while(n)
            {
                sum += (n%10)*(n%10);
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};