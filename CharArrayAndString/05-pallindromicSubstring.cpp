#include <iostream>
using namespace std;

// LC - 647

int expand(string str, int s, int e)
{
    int count = 0;
    while (s >= 0 && e < str.length() && str[s] == str[e])
    {
        s--;
        e++;
        count++;
    }
    return count;
}

int countSubstring(string str)
{
    int totalCount = 0;

    for (int center = 0; center < str.length(); center++)
    {
        int oddLengthSubstr = expand(str, center, center);
        int evenLengthSubstr = expand(str, center, center + 1);
        totalCount = totalCount + oddLengthSubstr + evenLengthSubstr;
    }
    return totalCount;
}