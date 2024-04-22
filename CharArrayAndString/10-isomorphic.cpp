#include <iostream>
using namespace std;

// LC-205

bool isIsomorphic(string s, string t)
{
    // s.size() == t.size() given
    char hash[256] = {0};
    bool isTcharMapped[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {

        if (hash[s[i]] == 0 && isTcharMapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];
            isTcharMapped[t[i]] = 1;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (char(hash[s[i]]) != t[i]) // matching character
        {
            return false;
        }
    }
    return true;
}