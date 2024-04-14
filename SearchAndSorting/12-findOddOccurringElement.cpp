#include <iostream>
#include <vector>
using namespace std;

int findOddOccur(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (s == e)
        {
            return s;
        }
        if (mid & 1)
        {
            if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        else
        {
            if (mid + 1 < arr.size() && arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}