#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// leetcode - 287 (don't change the original array)
// nums[i] -> [1,n]
/*
sort and check adjacent element
int findduplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}
*/
/*
mark element as visited by making it negative elements



int findDuplicate(vector<int> &v)
{
    int ans = -1;
    for (int i = 0; i < v.size(); i++)
    {
        int newIndex = abs(v[i]);
        // already visited
        if (v[newIndex] < 0)
        {
            ans = newIndex;
            break;
        }
        // mark visited
        v[newIndex] = v[newIndex] * -1;
    }
    return ans;
}
*/

/*swap with zeroth index*/
int findDuplicate(vector<int> &v)
{
    while (v[0] != v[v[0]])
    {
        swap(v[0], v[v[0]]);
    }
    return v[0];
}

// using binary search