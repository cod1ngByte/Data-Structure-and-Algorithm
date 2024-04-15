#include <iostream>
#include <vector>
using namespace std;

// LC-658
// array is alreadysorted -> find diff and make window size to k
// two pointer

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int l = 0;
    int h = arr.size() - 1;

    // O(n-k)
    while (h - l >= k)
    { // till window is not k
        if (x - arr[l] > arr[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }

    vector<int> ans;
    for (int i = l; i <= h; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;

    /*
    vector<int> ans(arr.begin()+l, arr.end()+1) last element not included so +1
    return ans;
    */
}
