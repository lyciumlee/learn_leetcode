#include <string>
#include <algorithm>


using namespace std;

class Solution {
public:
    int dayOfYear(string date)
    {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8));

        return countDays(year, month, day);
    }
    int isLeapYear(int year)
    {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
    int countDays(int year, int month, int day)
    {
        int res = 0;
        int leapYearSign = isLeapYear(year);
        while(month > 1)
        {
            res += daysOfMonth[leapYearSign][month - 2];
            month--;
        }
        res += day;
        return res;
    }
private:
    int daysOfMonth[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
}; 