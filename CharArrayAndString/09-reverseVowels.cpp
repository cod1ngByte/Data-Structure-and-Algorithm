#include <iostream>
using namespace std;
//LC-345
bool isVowels(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

string reverseVowels(string str)
{

    int s = 0;
    int e = str.size() - 1;
    while (s < e)
    {
        if (isVowels(str[s]) && isVowels(str[e]))
        {
            swap(str[s], str[e]);
            s++;
            e--;
        }
        else if (!isVowels(str[s]))
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    return str;
}