#include <iostream>
#include <vector>
using namespace std;

// leetcode - 26

int removeDuplicates(vector<int> &v)
{
    int j = 0; // index of unique elements
    int i = 1;
    while (i < v.size())
    {
        if (v[i] == v[j])
        {
            i++;
        }
        else
        { // v[i] != v[j]
            j++;
            v[j] = v[i];
            i++;
        }
    }
    int k = j + 1; // number of unique elements
    return k;
}