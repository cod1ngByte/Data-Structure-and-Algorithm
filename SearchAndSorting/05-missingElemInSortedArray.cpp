#include <iostream>
#include <vector>
using namespace std;

int missingElement(vector<int> &arr)
{

    int si = 0;
    int ei = arr.size() - 1;
    int mi = si + (ei - si) / 2;
    int ans = -1;
    while (si <= ei)
    {
        int dif = arr[mi] - mi;
        if (dif == 1)
        {
            // go right
            si = mi + 1;
        }
        else
        {
            // go left
            ans = mi;
            ei = mi - 1;
        }
        mi = si + (ei - si) / 2;
    }
    return mi + 1;
}