#include <iostream>
#include <vector>
using namespace std;

// if found store the ans and go to left
int firstOccur(vector<int> &arr, int target)
{
    int si = 0;
    int ei = arr.size() - 1;
    int mi = si + (ei - si) / 2;
    int ans = -1;
    while (si <= ei)
    {
        if (arr[mi] == target) // found, store the ans and go to left
        {
            ans = mi;
            ei = mi - 1;
        }
        else if (target > arr[mi]) // right
        {
            // update si
            si = mi + 1;
        }
        else // go to left ->target <= arr[mi]
        {
            // update ei
            ei = mi - 1;
        }

        // update mi
        mi = si + (ei - si) / 2;
    }

    return ans;
}

int main()
{

    vector<int> arr = {10, 20, 30, 30, 30, 30, 40, 50};
    int target = 30;
    cout << firstOccur(arr, target);
}