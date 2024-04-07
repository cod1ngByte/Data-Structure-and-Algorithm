#include <iostream>
#include <vector>
using namespace std;

// leetcode - 724
/*
int pivotIndex(vector<int> &v) --> O(n*n)
{
    for (int i = 0; i < v.size(); i++) --> O(n)
    {
        int lsum = 0;
        int rsum = 0;
        // leftsum -> 0 to less than i
        for (int j = 0; j < i; j++)  --> worst case it will run --> O(n)
        {
            lsum = lsum + v[j];
        }
        // rightsum -> i+1 to last element

        for (int j = i + 1; j < v.size(); j++)
        {
            rsum = rsum + v[j];
        }

        if (lsum == rsum)
        {
            return i; //pivotIndex
        }
    }
    return -1;
}
*/
// prefix sum approach
int pivotIndex(vector<int> &v)
{
    vector<int> lsum(v.size(), 0);
    vector<int> rsum(v.size(), 0);

    // lsum
    for (int i = 1; i < v.size(); i++)
    {
        lsum[i] = v[i - 1] + lsum[i - 1];
    }
    // rsum
    for (int i = v.size() - 2; i >= 0; i--)
    {
        rsum[i] = v[i + 1] + rsum[i + 1];
    }

    for (int i = 0; i < lsum.size(); i++)
    { // lsum.size() || rsum.size() || v.size()
        if (lsum[i] == rsum[i])
        {
            return i;
        }
    }
    return -1;
}