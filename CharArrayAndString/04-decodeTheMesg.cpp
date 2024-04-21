#include <iostream>
#include <unordered_map>
using namespace std;

string decodeMessage(string keys, string message)
{

    char value = 'a';
    unordered_map<char, char> mp;

    for (auto key : keys)
    {
        auto it = mp.find(key);
        if (key != ' ' && it == mp.end())
        {
            mp[key] = value;
            value++;
        }
    }

    // decode messaege using map
    string ans;
    for (auto msg : message)
    {
        if (msg == ' ')
        {
            ans.push_back(' ');
        }
        else
        {
            ans.push_back(mp[msg]);
        }
    }
    return ans;
}