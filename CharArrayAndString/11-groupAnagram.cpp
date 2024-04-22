#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// LC - 49

/*
vector<vector<string>> groupAnagrams(vector<string> &strs) // O(n*klogk)
{

    map<string, vector<string>> mp;

    for (auto str : strs) // n
    {
        string t = str;
        sort(t.begin(), t.end()); // klogk
        mp[t].push_back(str);
    }
    vector<vector<string>> ans;
    for(auto it = mp.begin(); it != mp.end(); it++){
        ans.push_back(it->second);
    }
    return ans;
}
*/

std::array<int, 256> hashmp(string s) // k
{
    std::array<int, 256> hash = {0};
    for (int i = 0; i < hash.size(); i++)
    {
        hash[s[i]]++;
    }
    return hash;
}

vector<vector<string>> groupAnagrams(vector<string> &strs) // O(n*k)
{

    map<std::array<int, 256>, vector<string>> mp;

    for (auto str : strs) // n
    {
        mp[hashmp(str)].push_back(str);
    }

    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}