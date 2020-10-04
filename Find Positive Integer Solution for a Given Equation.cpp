/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

#include <vector>


using namespace std;


class CustomFunction {
public:
    // Returns f(x, y) for any given positive integers x and y.
    // Note that f(x, y) is increasing with respect to both x and y.
    // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
    int f(int x, int y);
};


class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z)
    {
        vector<vector<int>> res;
        int x = 1;
        int y = 1000;
        while(x <= 1000 && y >= 1)
        {
            int f_xy = customfunction.f(x, y);
            if(f_xy > z)
            {
                y -= 1;
            }
            else if(f_xy < z)
            {
                x += 1;
            }
            else{
                res.push_back({x, y});
                x += 1;
            }
        }
        return res;
    }
};