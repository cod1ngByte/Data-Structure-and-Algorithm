#include <iostream>
#include <vector>
using namespace std;

// leetcode - 75

void sortColors(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;
    int i = 0;
    while (i <= right) // v[right] ya v[right++] already sorted hoga
    {
        if (v[i] == 0)
        {
            swap(v[i], v[left]);
            left++;
            i++; // after swapping from left v[i] can be 1 only so ignore
        }
        else if (v[i] == 2)
        {
            swap(v[i], v[right]);
            right--;
            // i++ after swapping from right v[i] can be 0/1/2
        }
        else
        {
            i++;
        }
    }
}