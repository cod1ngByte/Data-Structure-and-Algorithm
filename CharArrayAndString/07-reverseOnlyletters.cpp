#include <iostream>
using namespace std;
// LC -917
string reverseOnlyLetters(string str)
{
    int s = 0;
    int e = str.size();
    while (s < e)
    {
        if (isalpha(str[s]) && isalpha(str[e]))
        {
            swap(str[s], str[e]);
            s++;
            e--;
        }
        else if (!isalpha(str[s]))
        {
            s++;
        }
        else
        { // !isalpha(str[e])
            e--;
        }
    }
    return str;
}