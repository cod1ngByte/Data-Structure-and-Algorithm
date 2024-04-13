#include <iostream>
using namespace std;
// L-69

int mySqrt(int num)
{
    int s = 1;
    int e = num;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid <= num)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}