#include <iostream>
#include <algorithm>
using namespace std;

// gfg
// sort (nlogn) + one loop (n) = nlogn

bool twoSum(int arr[], int size, int target)
{

    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int curSum = arr[left] + arr[right];
        if (curSum == target)
        {
            return true;
        }
        else if (curSum > target)
        {
            right--;
        }
        else
        { // curSum < target
            left++;
        }
    }
    return false; // out of while loop, curSum != target
}

bool hasArrayTwoCandidates(int arr[], int size, int target)
{
    sort(arr, arr + size);
    return twoSum(arr, size, target);
}