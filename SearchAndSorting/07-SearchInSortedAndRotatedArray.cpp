#include <iostream>
#include <vector>
using namespace std;

// L-33

// pivot index = largest Element

int findPivotIndex(vector<int> &arr)
{
    int si = 0;
    int ei = arr.size() - 1;
    int mi = si + (ei - si) / 2;
    int n = arr.size();
    while (si <= ei)
    {
        if (si == ei)
        {
            return si;
        }
        else if (mi + 1 < n && arr[mi] > arr[mi + 1])
        {
            return mi;
        }
        else if (mi - 1 >= 0 && arr[mi] < arr[mi - 1])
        {
            return mi - 1;
        }
        else if (arr[si] > arr[mi])
        {
            ei = mi - 1;
        }
        else
        {
            si = mi + 1;
        }
        mi = si + (ei - si) / 2;
    }
    return -1;
}

int binarySearch(vector<int> &arr, int si, int ei, int target)
{
    int mi = si + (ei - si) / 2;
    while (si <= ei)
    {
        if (arr[mi] == target)
        {
            return mi;
        }
        else if (target > arr[mi])
        {
            si = mi + 1;
        }
        else
        {
            ei = mi - 1;
        }
        mi = si + (ei - si) / 2;
    }
    return -1;
}

int SearchInRotatedArray(vector<int> &arr, int target)
{
    int pivotIndex = findPivotIndex(arr);
    int ans = -1;
    if (target >= arr[0] && target <= arr[pivotIndex])
    {
        ans = binarySearch(arr, 0, pivotIndex, target);
    }
    else
    {
        ans = binarySearch(arr, pivotIndex + 1, arr.size() - 1, target);
    }
    return ans;
}