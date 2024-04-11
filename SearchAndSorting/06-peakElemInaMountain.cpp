#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountain(vector<int> &arr)
{
    int si = 0;
    int ei = arr.size() - 1;
    int mi = si + (ei - si) / 2;

    while (si < ei)
    {
        if (arr[mi] < arr[mi + 1])
        { // left part
            // update si
            si = mi + 1;
        }
        else
        {
            // can be at peak or at right part

            // update ei
            ei = mi;
            // ei = mi - 1 ->chances are that we can loose peak element
        }
        // update mi
        mi = si + (ei - si) / 2;
    }
    // single element -> si = ei = mi
    return ei;
}