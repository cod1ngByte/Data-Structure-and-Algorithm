#include <iostream>
using namespace std;

// L-680
// after removing atmost 1 character check if str is pallindrome or not

bool isPallindrome(string str, int s, int e)
{
    while (s <= e)
    {
        if (str[s] == str[e])
        {
            s++;
            e--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool validPallindrome(string str)
{

    int s = 0;
    int e = str.length() - 1; // str.length() => '\0' iska index

    while (s <= e)
    {
        if (str[s] == str[e])
        {
            s++;
            e--;
        }
        else
        {
            // str[e] != str[e]
            // remove one char from str[s] or str[e]
            // removing str[e]
            bool ans = isPallindrome(str, s, e - 1);

            // removing str[s]
            bool ans1 = isPallindrome(str, s + 1, e);

            return ans || ans1;
        }
    }
    // end of while loop means s > e ie pallindrome
    return true;
}