#include <iostream>
#include <vector>
using namespace std;

// L-704
int binarySearch(vector<int> &v, int target)
{
    int si = 0;                  // start index
    int ei = v.size() - 1;       // end index
    int mi = si + (ei - si) / 2; // mid index

    while (si <= ei)
    {

        if (v[mi] == target)
        {
            return mi;
        }
        else if (target > v[mi]) // element in right part
        {
            // update si
            si = mi + 1;
        }
        else // element in left part -> target <= v[mi]
        {
            // update ei
            ei = mi - 1;
        }

        // update mi
        mi = si + (ei - si) / 2;
    }
    /// out of while loop -> element not present in vector
    return -1;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};
    int target = 60;
    cout << binarySearch(arr, target);
}