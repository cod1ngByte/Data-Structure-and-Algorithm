#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

// gfg

bool isPossibleSolution(int arr[], int n, int m, int sol)
{
    int pageSum = 0;
    int c = 1; // students
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sol)
        {
            return false;
        }
        if (pageSum + arr[i] > sol)
        {
            c++;
            pageSum = 0;
            pageSum = pageSum + arr[i];
            if (c > m)
            {
                return false;
            }
        }
        else
        {
            pageSum = pageSum + arr[i];
        }
    }
    return true;
}

// m - > no of students
// arr[i] -> books with pages
int findPages(int arr[], int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int start = 0;
    int end = accumulate(arr, arr + n, 0); // calculate the total sum of arr
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}