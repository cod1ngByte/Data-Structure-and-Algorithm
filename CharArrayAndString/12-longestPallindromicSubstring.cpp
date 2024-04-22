#include <iostream>
using namespace std;

// LC - 5

bool isPallindrome(string str, int s, int e)
{
    while (s < e)
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

string longestPallindrome(string str)  //n*n*n
{

    string ans = "";
    for (int i = 0; i < str.size(); i++) 
    {
        for (int j = i; j < str.size(); j++)
        {
            if (isPallindrome(str, i, j))
            {
                string substring = str.substr(i, j - i + 1);
                ans = substring.size() > ans.size() ? substring : ans;
            }
        }
    }
    return ans;
}

//better solution using dp