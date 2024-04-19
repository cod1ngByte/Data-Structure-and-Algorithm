#include <iostream>
using namespace std;

// l-1910

// str.find(substr) return index of first occur of substr if found else return npos
// str.erase(i,l) remove string from ith index to 'l' (length) character
string removeOccurrences(string str, string part)
{
    while (str.find(part) != string::npos)
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}