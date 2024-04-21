#include <iostream>
using namespace std;

// LC-242

bool isAnagram(string str, string t)
{
    int freqTable[256] = {0}; // initialize all element with zero
    // str
    for (int i = 0; i < str.size(); i++)
    {
        freqTable[str[i]]++; // arr[i]++
    }
    // t
    for (int i = 0; i < t.size(); i++)
    {
        freqTable[t[i]]--; // arr[i]--
    }

    /// isAnagram or not

    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i] != 0)
        {
            return false;
        }
    }
    return true;
}